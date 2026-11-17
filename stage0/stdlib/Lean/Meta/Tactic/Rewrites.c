// Lean compiler output
// Module: Lean.Meta.Tactic.Rewrites
// Imports: public import Lean.Meta.LazyDiscrTree public import Lean.Meta.Tactic.Rewrite public import Lean.Meta.Tactic.Refl public import Lean.Meta.Tactic.SolveByElim public import Lean.Meta.Tactic.TryThis public import Lean.Util.Heartbeats
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
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_MVarId_refl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMCtxImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_rewrite(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MVarId_assumption(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SolveByElim_solveByElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkConstWithFreshMVarLevels(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_saveState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_toLOption___redArg(lean_object*);
lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_string_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescopeReducing(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFnArgs(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_paren(lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
uint8_t l_Lean_AsyncConstantInfo_isUnsafe(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isMetaprogramming(lean_object*);
lean_object* l_Lean_AsyncConstantInfo_toConstantVal(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_allowCompletion(lean_object*, lean_object*);
uint8_t l_Lean_Linter_isDeprecated(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_getRemainingHeartbeats___redArg(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Meta_ppExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_getMaxHeartbeats___redArg(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__0_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__0_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__0_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__1_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "rewrites"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__1_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__1_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__2_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__0_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(186, 205, 46, 93, 234, 75, 44, 75)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__2_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__2_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__1_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(168, 155, 40, 124, 249, 233, 147, 160)}};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__2_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__2_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__3_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__3_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__3_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__4_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__3_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__4_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__4_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__5_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__5_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__5_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__6_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__4_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__5_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__6_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__6_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__7_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__7_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__7_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__8_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__6_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__7_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__8_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__8_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__9_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__8_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__0_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(195, 68, 87, 56, 63, 220, 109, 253)}};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__9_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__9_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__10_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Rewrites"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__10_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__10_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__11_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__9_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__10_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(198, 206, 142, 20, 34, 4, 12, 32)}};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__11_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__11_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__12_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__11_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(79, 110, 239, 104, 195, 0, 147, 113)}};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__12_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__12_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__13_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__12_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__5_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(98, 164, 76, 120, 62, 172, 121, 119)}};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__13_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__13_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__14_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__13_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__7_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(118, 133, 176, 63, 107, 91, 224, 141)}};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__14_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__14_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__15_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__14_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__10_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(55, 24, 242, 217, 59, 67, 106, 68)}};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__15_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__15_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__16_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__16_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__16_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__17_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__15_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__16_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(6, 160, 145, 196, 123, 32, 65, 209)}};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__17_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__17_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__18_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__18_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__18_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__19_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__17_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__18_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(183, 63, 117, 171, 186, 172, 103, 190)}};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__19_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__19_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__20_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__19_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__5_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(74, 251, 37, 185, 55, 190, 134, 39)}};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__20_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__20_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__21_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__20_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__7_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(110, 106, 163, 183, 60, 46, 37, 40)}};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__21_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__21_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__22_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__21_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__0_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(147, 13, 170, 221, 32, 240, 96, 44)}};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__22_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__22_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__23_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__22_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__10_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(86, 122, 118, 181, 205, 247, 113, 18)}};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__23_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__23_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__24_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__24_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__25_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__25_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__25_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__26_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__26_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__27_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__27_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__27_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__28_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__28_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__29_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__29_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__0_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "lemmas"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__0_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__0_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__1_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__0_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(186, 205, 46, 93, 234, 75, 44, 75)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__1_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__1_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__1_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(168, 155, 40, 124, 249, 233, 147, 160)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__1_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__1_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__0_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(18, 2, 242, 27, 177, 68, 56, 130)}};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__1_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__1_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__2_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__23_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),((lean_object*)(((size_t)(414759425) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(128, 187, 177, 155, 100, 254, 232, 115)}};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__2_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__2_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__3_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__2_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__25_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(87, 206, 218, 196, 232, 32, 33, 156)}};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__3_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__3_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__4_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__3_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__27_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(191, 183, 33, 48, 151, 181, 196, 249)}};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__4_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__4_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__5_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__4_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(250, 25, 56, 12, 246, 113, 116, 47)}};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__5_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__5_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Rewrites_rewriteResultLemma___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "congrArg"};
static const lean_object* l_Lean_Meta_Rewrites_rewriteResultLemma___closed__0 = (const lean_object*)&l_Lean_Meta_Rewrites_rewriteResultLemma___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Rewrites_rewriteResultLemma___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Rewrites_rewriteResultLemma___closed__0_value),LEAN_SCALAR_PTR_LITERAL(188, 17, 22, 243, 206, 91, 171, 36)}};
static const lean_object* l_Lean_Meta_Rewrites_rewriteResultLemma___closed__1 = (const lean_object*)&l_Lean_Meta_Rewrites_rewriteResultLemma___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rewriteResultLemma(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rewriteResultLemma___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_forwardWeight;
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_backwardWeight;
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_forward_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_forward_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_forward_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_forward_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_backward_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_backward_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_backward_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_backward_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Iff"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__1(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_inj'"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "injEq"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "sizeOf_spec"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_inj"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Meta_Rewrites_localHypotheses_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Meta_Rewrites_localHypotheses_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_localHypotheses_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_localHypotheses_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5_spec__6___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3_spec__7___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1___closed__0 = (const lean_object*)&l_Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_Rewrites_localHypotheses___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Rewrites_localHypotheses___closed__0 = (const lean_object*)&l_Lean_Meta_Rewrites_localHypotheses___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_localHypotheses(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_localHypotheses___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Rewrites_droppedKeys___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Rewrites_droppedKeys___closed__0 = (const lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Rewrites_droppedKeys___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Meta_Rewrites_droppedKeys___closed__1 = (const lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Rewrites_droppedKeys___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Rewrites_droppedKeys___closed__2 = (const lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Rewrites_droppedKeys___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__0_value)}};
static const lean_object* l_Lean_Meta_Rewrites_droppedKeys___closed__3 = (const lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Rewrites_droppedKeys___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__3_value)}};
static const lean_object* l_Lean_Meta_Rewrites_droppedKeys___closed__4 = (const lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Rewrites_droppedKeys___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__2_value),((lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__4_value)}};
static const lean_object* l_Lean_Meta_Rewrites_droppedKeys___closed__5 = (const lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Rewrites_droppedKeys___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Rewrites_droppedKeys___closed__6 = (const lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Rewrites_droppedKeys___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__0_value),((lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__6_value)}};
static const lean_object* l_Lean_Meta_Rewrites_droppedKeys___closed__7 = (const lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__7_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Rewrites_droppedKeys = (const lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__7_value;
static const lean_closure_object l_Lean_Meta_Rewrites_createModuleTreeRef___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Rewrites_createModuleTreeRef___closed__0 = (const lean_object*)&l_Lean_Meta_Rewrites_createModuleTreeRef___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_createModuleTreeRef(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_createModuleTreeRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_1824551397____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_1824551397____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_ext;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_constantsPerImportTask;
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_incPrio(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Rewrites_rwFindDecls___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Rewrites_incPrio, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Rewrites_rwFindDecls___closed__0 = (const lean_object*)&l_Lean_Meta_Rewrites_rwFindDecls___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rwFindDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rwFindDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_dischargableWithRfl_x3f___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_dischargableWithRfl_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_dischargableWithRfl_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_dischargableWithRfl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_RewriteResult_ppResult(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_RewriteResult_ppResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_none_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_none_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_none_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_none_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_assumption_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_assumption_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_assumption_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_assumption_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_solveByElim_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_solveByElim_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_solveByElim_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_solveByElim_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_solveByElim___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_solveByElim___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_solveByElim___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_solveByElim___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Rewrites_solveByElim___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "failed"};
static const lean_object* l_Lean_Meta_Rewrites_solveByElim___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_Rewrites_solveByElim___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Rewrites_solveByElim___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Rewrites_solveByElim___lam__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_solveByElim___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_solveByElim___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Rewrites_solveByElim___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Rewrites_solveByElim___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Rewrites_solveByElim___closed__0 = (const lean_object*)&l_Lean_Meta_Rewrites_solveByElim___closed__0_value;
static const lean_closure_object l_Lean_Meta_Rewrites_solveByElim___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Rewrites_solveByElim___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Rewrites_solveByElim___closed__1 = (const lean_object*)&l_Lean_Meta_Rewrites_solveByElim___closed__1_value;
static const lean_closure_object l_Lean_Meta_Rewrites_solveByElim___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Rewrites_solveByElim___lam__2___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Rewrites_solveByElim___closed__2 = (const lean_object*)&l_Lean_Meta_Rewrites_solveByElim___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Rewrites_solveByElim___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 1, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Rewrites_solveByElim___closed__3 = (const lean_object*)&l_Lean_Meta_Rewrites_solveByElim___closed__3_value;
static const lean_array_object l_Lean_Meta_Rewrites_solveByElim___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Rewrites_solveByElim___closed__4 = (const lean_object*)&l_Lean_Meta_Rewrites_solveByElim___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_solveByElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_solveByElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Rewrites_rwLemma_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Rewrites_rwLemma_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Rewrites_rwLemma_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Rewrites_rwLemma_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Rewrites_rwLemma_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Rewrites_rwLemma_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "symm"};
static const lean_object* l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(220, 149, 144, 59, 77, 93, 25, 217)}};
static const lean_object* l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(2, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__2_value;
static const lean_string_object l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__3 = (const lean_object*)&l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__5;
static const lean_string_object l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "considering "};
static const lean_object* l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__6 = (const lean_object*)&l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__7;
static const lean_string_object l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "← "};
static const lean_object* l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__8 = (const lean_object*)&l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rwLemma___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rwLemma___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rwLemma(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rwLemma___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__2___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__2(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__1___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__0_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__0_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__1_value;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__2;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__3;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__4 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__4_value;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__5 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__5_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4(lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_Rewrites_rewriteCandidates___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Rewrites_rewriteCandidates___closed__0 = (const lean_object*)&l_Lean_Meta_Rewrites_rewriteCandidates___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Rewrites_rewriteCandidates___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Rewrites_rewriteCandidates___closed__1;
static lean_once_cell_t l_Lean_Meta_Rewrites_rewriteCandidates___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Rewrites_rewriteCandidates___closed__2;
static lean_once_cell_t l_Lean_Meta_Rewrites_rewriteCandidates___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Rewrites_rewriteCandidates___closed__3;
static const lean_string_object l_Lean_Meta_Rewrites_rewriteCandidates___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Candidate rewrite lemmas:\n"};
static const lean_object* l_Lean_Meta_Rewrites_rewriteCandidates___closed__4 = (const lean_object*)&l_Lean_Meta_Rewrites_rewriteCandidates___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Rewrites_rewriteCandidates___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Rewrites_rewriteCandidates___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rewriteCandidates(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rewriteCandidates___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RewriteResult_newGoal(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RewriteResult_newGoal___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RewriteResult_addSuggestion___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RewriteResult_addSuggestion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RewriteResult_addSuggestion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RewriteResult_addSuggestion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Rewrites_takeListAux_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Rewrites_takeListAux_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_takeListAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_takeListAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Rewrites_takeListAux_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Rewrites_takeListAux_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Rewrites_findRewrites___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Rewrites_findRewrites___closed__0;
static lean_once_cell_t l_Lean_Meta_Rewrites_findRewrites___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Rewrites_findRewrites___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_findRewrites(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_findRewrites___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__24_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_57_ = lean_unsigned_to_nat(2316440083u);
v___x_58_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__23_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_));
v___x_59_ = l_Lean_Name_num___override(v___x_58_, v___x_57_);
return v___x_59_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__26_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_61_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__25_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_));
v___x_62_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__24_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__24_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__24_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_);
v___x_63_ = l_Lean_Name_str___override(v___x_62_, v___x_61_);
return v___x_63_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__28_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_65_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__27_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_));
v___x_66_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__26_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__26_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__26_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_);
v___x_67_ = l_Lean_Name_str___override(v___x_66_, v___x_65_);
return v___x_67_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__29_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_68_ = lean_unsigned_to_nat(2u);
v___x_69_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__28_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__28_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__28_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_);
v___x_70_ = l_Lean_Name_num___override(v___x_69_, v___x_68_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_72_; uint8_t v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_72_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__2_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_));
v___x_73_ = 0;
v___x_74_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__29_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__29_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__29_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_);
v___x_75_ = l_Lean_registerTraceClass(v___x_72_, v___x_73_, v___x_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2____boxed(lean_object* v_a_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_();
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_96_; uint8_t v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_96_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__1_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_));
v___x_97_ = 0;
v___x_98_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__5_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_));
v___x_99_ = l_Lean_registerTraceClass(v___x_96_, v___x_97_, v___x_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2____boxed(lean_object* v_a_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_();
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rewriteResultLemma(lean_object* v_r_105_){
_start:
{
lean_object* v_eqProof_106_; lean_object* v___x_107_; lean_object* v___x_108_; uint8_t v___x_109_; 
v_eqProof_106_ = lean_ctor_get(v_r_105_, 1);
v___x_107_ = ((lean_object*)(l_Lean_Meta_Rewrites_rewriteResultLemma___closed__1));
v___x_108_ = lean_unsigned_to_nat(6u);
v___x_109_ = l_Lean_Expr_isAppOfArity(v_eqProof_106_, v___x_107_, v___x_108_);
if (v___x_109_ == 0)
{
lean_object* v___x_110_; 
v___x_110_ = lean_box(0);
return v___x_110_;
}
else
{
lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_111_ = lean_unsigned_to_nat(5u);
v___x_112_ = l_Lean_Expr_getAppNumArgs(v_eqProof_106_);
v___x_113_ = lean_nat_sub(v___x_112_, v___x_111_);
lean_dec(v___x_112_);
v___x_114_ = lean_unsigned_to_nat(1u);
v___x_115_ = lean_nat_sub(v___x_113_, v___x_114_);
lean_dec(v___x_113_);
v___x_116_ = l_Lean_Expr_getRevArg_x21(v_eqProof_106_, v___x_115_);
v___x_117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_117_, 0, v___x_116_);
return v___x_117_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rewriteResultLemma___boxed(lean_object* v_r_118_){
_start:
{
lean_object* v_res_119_; 
v_res_119_ = l_Lean_Meta_Rewrites_rewriteResultLemma(v_r_118_);
lean_dec_ref(v_r_118_);
return v_res_119_;
}
}
static lean_object* _init_l_Lean_Meta_Rewrites_forwardWeight(void){
_start:
{
lean_object* v___x_120_; 
v___x_120_ = lean_unsigned_to_nat(2u);
return v___x_120_;
}
}
static lean_object* _init_l_Lean_Meta_Rewrites_backwardWeight(void){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = lean_unsigned_to_nat(1u);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_ctorIdx___impl(uint8_t v_x_122_){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_123_ = lean_box(v_x_122_);
v___x_124_ = lean_obj_tag_nat(v___x_123_);
lean_dec(v___x_123_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_ctorIdx___impl___boxed(lean_object* v_x_125_){
_start:
{
uint8_t v_x_4__boxed_126_; lean_object* v_res_127_; 
v_x_4__boxed_126_ = lean_unbox(v_x_125_);
v_res_127_ = l_Lean_Meta_Rewrites_RwDirection_ctorIdx___impl(v_x_4__boxed_126_);
return v_res_127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_ctorElim___redArg(lean_object* v_k_128_){
_start:
{
lean_inc(v_k_128_);
return v_k_128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_ctorElim___redArg___boxed(lean_object* v_k_129_){
_start:
{
lean_object* v_res_130_; 
v_res_130_ = l_Lean_Meta_Rewrites_RwDirection_ctorElim___redArg(v_k_129_);
lean_dec(v_k_129_);
return v_res_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_ctorElim(lean_object* v_motive_131_, lean_object* v_ctorIdx_132_, uint8_t v_t_133_, lean_object* v_h_134_, lean_object* v_k_135_){
_start:
{
lean_inc(v_k_135_);
return v_k_135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_ctorElim___boxed(lean_object* v_motive_136_, lean_object* v_ctorIdx_137_, lean_object* v_t_138_, lean_object* v_h_139_, lean_object* v_k_140_){
_start:
{
uint8_t v_t_boxed_141_; lean_object* v_res_142_; 
v_t_boxed_141_ = lean_unbox(v_t_138_);
v_res_142_ = l_Lean_Meta_Rewrites_RwDirection_ctorElim(v_motive_136_, v_ctorIdx_137_, v_t_boxed_141_, v_h_139_, v_k_140_);
lean_dec(v_k_140_);
lean_dec(v_ctorIdx_137_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_forward_elim___redArg(lean_object* v_forward_143_){
_start:
{
lean_inc(v_forward_143_);
return v_forward_143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_forward_elim___redArg___boxed(lean_object* v_forward_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = l_Lean_Meta_Rewrites_RwDirection_forward_elim___redArg(v_forward_144_);
lean_dec(v_forward_144_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_forward_elim(lean_object* v_motive_146_, uint8_t v_t_147_, lean_object* v_h_148_, lean_object* v_forward_149_){
_start:
{
lean_inc(v_forward_149_);
return v_forward_149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_forward_elim___boxed(lean_object* v_motive_150_, lean_object* v_t_151_, lean_object* v_h_152_, lean_object* v_forward_153_){
_start:
{
uint8_t v_t_boxed_154_; lean_object* v_res_155_; 
v_t_boxed_154_ = lean_unbox(v_t_151_);
v_res_155_ = l_Lean_Meta_Rewrites_RwDirection_forward_elim(v_motive_150_, v_t_boxed_154_, v_h_152_, v_forward_153_);
lean_dec(v_forward_153_);
return v_res_155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_backward_elim___redArg(lean_object* v_backward_156_){
_start:
{
lean_inc(v_backward_156_);
return v_backward_156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_backward_elim___redArg___boxed(lean_object* v_backward_157_){
_start:
{
lean_object* v_res_158_; 
v_res_158_ = l_Lean_Meta_Rewrites_RwDirection_backward_elim___redArg(v_backward_157_);
lean_dec(v_backward_157_);
return v_res_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_backward_elim(lean_object* v_motive_159_, uint8_t v_t_160_, lean_object* v_h_161_, lean_object* v_backward_162_){
_start:
{
lean_inc(v_backward_162_);
return v_backward_162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_backward_elim___boxed(lean_object* v_motive_163_, lean_object* v_t_164_, lean_object* v_h_165_, lean_object* v_backward_166_){
_start:
{
uint8_t v_t_boxed_167_; lean_object* v_res_168_; 
v_t_boxed_167_ = lean_unbox(v_t_164_);
v_res_168_ = l_Lean_Meta_Rewrites_RwDirection_backward_elim(v_motive_163_, v_t_boxed_167_, v_h_165_, v_backward_166_);
lean_dec(v_backward_166_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___redArg___lam__0(lean_object* v_k_169_, lean_object* v_b_170_, lean_object* v_c_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_){
_start:
{
lean_object* v___x_177_; 
lean_inc(v___y_175_);
lean_inc_ref(v___y_174_);
lean_inc(v___y_173_);
lean_inc_ref(v___y_172_);
v___x_177_ = lean_apply_7(v_k_169_, v_b_170_, v_c_171_, v___y_172_, v___y_173_, v___y_174_, v___y_175_, lean_box(0));
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___redArg___lam__0___boxed(lean_object* v_k_178_, lean_object* v_b_179_, lean_object* v_c_180_, lean_object* v___y_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___redArg___lam__0(v_k_178_, v_b_179_, v_c_180_, v___y_181_, v___y_182_, v___y_183_, v___y_184_);
lean_dec(v___y_184_);
lean_dec_ref(v___y_183_);
lean_dec(v___y_182_);
lean_dec_ref(v___y_181_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___redArg(lean_object* v_type_187_, lean_object* v_k_188_, uint8_t v_cleanupAnnotations_189_, uint8_t v_whnfType_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_){
_start:
{
lean_object* v___f_196_; lean_object* v___x_197_; 
v___f_196_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_196_, 0, v_k_188_);
v___x_197_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_187_, v___f_196_, v_cleanupAnnotations_189_, v_whnfType_190_, v___y_191_, v___y_192_, v___y_193_, v___y_194_);
if (lean_obj_tag(v___x_197_) == 0)
{
lean_object* v_a_198_; lean_object* v___x_200_; uint8_t v_isShared_201_; uint8_t v_isSharedCheck_205_; 
v_a_198_ = lean_ctor_get(v___x_197_, 0);
v_isSharedCheck_205_ = !lean_is_exclusive(v___x_197_);
if (v_isSharedCheck_205_ == 0)
{
v___x_200_ = v___x_197_;
v_isShared_201_ = v_isSharedCheck_205_;
goto v_resetjp_199_;
}
else
{
lean_inc(v_a_198_);
lean_dec(v___x_197_);
v___x_200_ = lean_box(0);
v_isShared_201_ = v_isSharedCheck_205_;
goto v_resetjp_199_;
}
v_resetjp_199_:
{
lean_object* v___x_203_; 
if (v_isShared_201_ == 0)
{
v___x_203_ = v___x_200_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_204_; 
v_reuseFailAlloc_204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_204_, 0, v_a_198_);
v___x_203_ = v_reuseFailAlloc_204_;
goto v_reusejp_202_;
}
v_reusejp_202_:
{
return v___x_203_;
}
}
}
else
{
lean_object* v_a_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_213_; 
v_a_206_ = lean_ctor_get(v___x_197_, 0);
v_isSharedCheck_213_ = !lean_is_exclusive(v___x_197_);
if (v_isSharedCheck_213_ == 0)
{
v___x_208_ = v___x_197_;
v_isShared_209_ = v_isSharedCheck_213_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_a_206_);
lean_dec(v___x_197_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_213_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v___x_211_; 
if (v_isShared_209_ == 0)
{
v___x_211_ = v___x_208_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_212_; 
v_reuseFailAlloc_212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_212_, 0, v_a_206_);
v___x_211_ = v_reuseFailAlloc_212_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
return v___x_211_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___redArg___boxed(lean_object* v_type_214_, lean_object* v_k_215_, lean_object* v_cleanupAnnotations_216_, lean_object* v_whnfType_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_223_; uint8_t v_whnfType_boxed_224_; lean_object* v_res_225_; 
v_cleanupAnnotations_boxed_223_ = lean_unbox(v_cleanupAnnotations_216_);
v_whnfType_boxed_224_ = lean_unbox(v_whnfType_217_);
v_res_225_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___redArg(v_type_214_, v_k_215_, v_cleanupAnnotations_boxed_223_, v_whnfType_boxed_224_, v___y_218_, v___y_219_, v___y_220_, v___y_221_);
lean_dec(v___y_221_);
lean_dec_ref(v___y_220_);
lean_dec(v___y_219_);
lean_dec_ref(v___y_218_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0(lean_object* v_00_u03b1_226_, lean_object* v_type_227_, lean_object* v_k_228_, uint8_t v_cleanupAnnotations_229_, uint8_t v_whnfType_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_){
_start:
{
lean_object* v___x_236_; 
v___x_236_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___redArg(v_type_227_, v_k_228_, v_cleanupAnnotations_229_, v_whnfType_230_, v___y_231_, v___y_232_, v___y_233_, v___y_234_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___boxed(lean_object* v_00_u03b1_237_, lean_object* v_type_238_, lean_object* v_k_239_, lean_object* v_cleanupAnnotations_240_, lean_object* v_whnfType_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_247_; uint8_t v_whnfType_boxed_248_; lean_object* v_res_249_; 
v_cleanupAnnotations_boxed_247_ = lean_unbox(v_cleanupAnnotations_240_);
v_whnfType_boxed_248_ = lean_unbox(v_whnfType_241_);
v_res_249_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0(v_00_u03b1_237_, v_type_238_, v_k_239_, v_cleanupAnnotations_boxed_247_, v_whnfType_boxed_248_, v___y_242_, v___y_243_, v___y_244_, v___y_245_);
lean_dec(v___y_245_);
lean_dec_ref(v___y_244_);
lean_dec(v___y_243_);
lean_dec_ref(v___y_242_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__1___redArg(lean_object* v_k_250_, uint8_t v_allowLevelAssignments_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_){
_start:
{
lean_object* v___x_257_; 
v___x_257_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_251_, v_k_250_, v___y_252_, v___y_253_, v___y_254_, v___y_255_);
if (lean_obj_tag(v___x_257_) == 0)
{
lean_object* v_a_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_265_; 
v_a_258_ = lean_ctor_get(v___x_257_, 0);
v_isSharedCheck_265_ = !lean_is_exclusive(v___x_257_);
if (v_isSharedCheck_265_ == 0)
{
v___x_260_ = v___x_257_;
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_a_258_);
lean_dec(v___x_257_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v___x_263_; 
if (v_isShared_261_ == 0)
{
v___x_263_ = v___x_260_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v_a_258_);
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
v_a_266_ = lean_ctor_get(v___x_257_, 0);
v_isSharedCheck_273_ = !lean_is_exclusive(v___x_257_);
if (v_isSharedCheck_273_ == 0)
{
v___x_268_ = v___x_257_;
v_isShared_269_ = v_isSharedCheck_273_;
goto v_resetjp_267_;
}
else
{
lean_inc(v_a_266_);
lean_dec(v___x_257_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__1___redArg___boxed(lean_object* v_k_274_, lean_object* v_allowLevelAssignments_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_281_; lean_object* v_res_282_; 
v_allowLevelAssignments_boxed_281_ = lean_unbox(v_allowLevelAssignments_275_);
v_res_282_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__1___redArg(v_k_274_, v_allowLevelAssignments_boxed_281_, v___y_276_, v___y_277_, v___y_278_, v___y_279_);
lean_dec(v___y_279_);
lean_dec_ref(v___y_278_);
lean_dec(v___y_277_);
lean_dec_ref(v___y_276_);
return v_res_282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__1(lean_object* v_00_u03b1_283_, lean_object* v_k_284_, uint8_t v_allowLevelAssignments_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_){
_start:
{
lean_object* v___x_291_; 
v___x_291_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__1___redArg(v_k_284_, v_allowLevelAssignments_285_, v___y_286_, v___y_287_, v___y_288_, v___y_289_);
return v___x_291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__1___boxed(lean_object* v_00_u03b1_292_, lean_object* v_k_293_, lean_object* v_allowLevelAssignments_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_300_; lean_object* v_res_301_; 
v_allowLevelAssignments_boxed_300_ = lean_unbox(v_allowLevelAssignments_294_);
v_res_301_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__1(v_00_u03b1_292_, v_k_293_, v_allowLevelAssignments_boxed_300_, v___y_295_, v___y_296_, v___y_297_, v___y_298_);
lean_dec(v___y_298_);
lean_dec_ref(v___y_297_);
lean_dec(v___y_296_);
lean_dec_ref(v___y_295_);
return v_res_301_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0(lean_object* v_name_306_, lean_object* v_x_307_, lean_object* v_type_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_){
_start:
{
lean_object* v___x_317_; lean_object* v_fst_318_; 
v___x_317_ = l_Lean_Expr_getAppFnArgs(v_type_308_);
v_fst_318_ = lean_ctor_get(v___x_317_, 0);
lean_inc(v_fst_318_);
if (lean_obj_tag(v_fst_318_) == 1)
{
lean_object* v_pre_319_; 
v_pre_319_ = lean_ctor_get(v_fst_318_, 0);
if (lean_obj_tag(v_pre_319_) == 0)
{
lean_object* v_snd_320_; lean_object* v___x_322_; uint8_t v_isShared_323_; uint8_t v_isSharedCheck_419_; 
v_snd_320_ = lean_ctor_get(v___x_317_, 1);
v_isSharedCheck_419_ = !lean_is_exclusive(v___x_317_);
if (v_isSharedCheck_419_ == 0)
{
lean_object* v_unused_420_; 
v_unused_420_ = lean_ctor_get(v___x_317_, 0);
lean_dec(v_unused_420_);
v___x_322_ = v___x_317_;
v_isShared_323_ = v_isSharedCheck_419_;
goto v_resetjp_321_;
}
else
{
lean_inc(v_snd_320_);
lean_dec(v___x_317_);
v___x_322_ = lean_box(0);
v_isShared_323_ = v_isSharedCheck_419_;
goto v_resetjp_321_;
}
v_resetjp_321_:
{
lean_object* v_str_324_; lean_object* v___x_325_; uint8_t v___x_326_; 
v_str_324_ = lean_ctor_get(v_fst_318_, 1);
lean_inc_ref(v_str_324_);
lean_dec_ref_known(v_fst_318_, 2);
v___x_325_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__1));
v___x_326_ = lean_string_dec_eq(v_str_324_, v___x_325_);
if (v___x_326_ == 0)
{
lean_object* v___x_327_; uint8_t v___x_328_; 
v___x_327_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__2));
v___x_328_ = lean_string_dec_eq(v_str_324_, v___x_327_);
lean_dec_ref(v_str_324_);
if (v___x_328_ == 0)
{
lean_del_object(v___x_322_);
lean_dec(v_snd_320_);
lean_dec(v_name_306_);
goto v___jp_314_;
}
else
{
lean_object* v___x_329_; lean_object* v___x_330_; uint8_t v___x_331_; 
v___x_329_ = lean_array_get_size(v_snd_320_);
v___x_330_ = lean_unsigned_to_nat(2u);
v___x_331_ = lean_nat_dec_eq(v___x_329_, v___x_330_);
if (v___x_331_ == 0)
{
lean_del_object(v___x_322_);
lean_dec(v_snd_320_);
lean_dec(v_name_306_);
goto v___jp_314_;
}
else
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; uint8_t v___x_337_; lean_object* v___x_338_; lean_object* v___x_340_; 
v___x_332_ = lean_unsigned_to_nat(0u);
v___x_333_ = lean_array_fget(v_snd_320_, v___x_332_);
v___x_334_ = lean_unsigned_to_nat(1u);
v___x_335_ = lean_array_fget(v_snd_320_, v___x_334_);
lean_dec(v_snd_320_);
v___x_336_ = lean_mk_empty_array_with_capacity(v___x_330_);
v___x_337_ = 0;
v___x_338_ = lean_box(v___x_337_);
lean_inc(v_name_306_);
if (v_isShared_323_ == 0)
{
lean_ctor_set(v___x_322_, 1, v___x_338_);
lean_ctor_set(v___x_322_, 0, v_name_306_);
v___x_340_ = v___x_322_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v_name_306_);
lean_ctor_set(v_reuseFailAlloc_373_, 1, v___x_338_);
v___x_340_ = v_reuseFailAlloc_373_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
lean_object* v___x_341_; 
v___x_341_ = l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg(v___x_333_, v___x_340_, v___y_309_, v___y_310_, v___y_311_, v___y_312_);
if (lean_obj_tag(v___x_341_) == 0)
{
lean_object* v_a_342_; lean_object* v___x_343_; uint8_t v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v_a_342_ = lean_ctor_get(v___x_341_, 0);
lean_inc(v_a_342_);
lean_dec_ref_known(v___x_341_, 1);
v___x_343_ = lean_array_push(v___x_336_, v_a_342_);
v___x_344_ = 1;
v___x_345_ = lean_box(v___x_344_);
v___x_346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_346_, 0, v_name_306_);
lean_ctor_set(v___x_346_, 1, v___x_345_);
v___x_347_ = l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg(v___x_335_, v___x_346_, v___y_309_, v___y_310_, v___y_311_, v___y_312_);
if (lean_obj_tag(v___x_347_) == 0)
{
lean_object* v_a_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_356_; 
v_a_348_ = lean_ctor_get(v___x_347_, 0);
v_isSharedCheck_356_ = !lean_is_exclusive(v___x_347_);
if (v_isSharedCheck_356_ == 0)
{
v___x_350_ = v___x_347_;
v_isShared_351_ = v_isSharedCheck_356_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_a_348_);
lean_dec(v___x_347_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_356_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
lean_object* v___x_352_; lean_object* v___x_354_; 
v___x_352_ = lean_array_push(v___x_343_, v_a_348_);
if (v_isShared_351_ == 0)
{
lean_ctor_set(v___x_350_, 0, v___x_352_);
v___x_354_ = v___x_350_;
goto v_reusejp_353_;
}
else
{
lean_object* v_reuseFailAlloc_355_; 
v_reuseFailAlloc_355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_355_, 0, v___x_352_);
v___x_354_ = v_reuseFailAlloc_355_;
goto v_reusejp_353_;
}
v_reusejp_353_:
{
return v___x_354_;
}
}
}
else
{
lean_object* v_a_357_; lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_364_; 
lean_dec_ref(v___x_343_);
v_a_357_ = lean_ctor_get(v___x_347_, 0);
v_isSharedCheck_364_ = !lean_is_exclusive(v___x_347_);
if (v_isSharedCheck_364_ == 0)
{
v___x_359_ = v___x_347_;
v_isShared_360_ = v_isSharedCheck_364_;
goto v_resetjp_358_;
}
else
{
lean_inc(v_a_357_);
lean_dec(v___x_347_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_364_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
lean_object* v___x_362_; 
if (v_isShared_360_ == 0)
{
v___x_362_ = v___x_359_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v_a_357_);
v___x_362_ = v_reuseFailAlloc_363_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
return v___x_362_;
}
}
}
}
else
{
lean_object* v_a_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_372_; 
lean_dec_ref(v___x_336_);
lean_dec(v___x_335_);
lean_dec(v_name_306_);
v_a_365_ = lean_ctor_get(v___x_341_, 0);
v_isSharedCheck_372_ = !lean_is_exclusive(v___x_341_);
if (v_isSharedCheck_372_ == 0)
{
v___x_367_ = v___x_341_;
v_isShared_368_ = v_isSharedCheck_372_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_a_365_);
lean_dec(v___x_341_);
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
}
}
}
else
{
lean_object* v___x_374_; lean_object* v___x_375_; uint8_t v___x_376_; 
lean_dec_ref(v_str_324_);
v___x_374_ = lean_array_get_size(v_snd_320_);
v___x_375_ = lean_unsigned_to_nat(3u);
v___x_376_ = lean_nat_dec_eq(v___x_374_, v___x_375_);
if (v___x_376_ == 0)
{
lean_del_object(v___x_322_);
lean_dec(v_snd_320_);
lean_dec(v_name_306_);
goto v___jp_314_;
}
else
{
lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; uint8_t v___x_382_; lean_object* v___x_383_; lean_object* v___x_385_; 
v___x_377_ = lean_unsigned_to_nat(1u);
v___x_378_ = lean_array_fget(v_snd_320_, v___x_377_);
v___x_379_ = lean_unsigned_to_nat(2u);
v___x_380_ = lean_array_fget(v_snd_320_, v___x_379_);
lean_dec(v_snd_320_);
v___x_381_ = lean_mk_empty_array_with_capacity(v___x_379_);
v___x_382_ = 0;
v___x_383_ = lean_box(v___x_382_);
lean_inc(v_name_306_);
if (v_isShared_323_ == 0)
{
lean_ctor_set(v___x_322_, 1, v___x_383_);
lean_ctor_set(v___x_322_, 0, v_name_306_);
v___x_385_ = v___x_322_;
goto v_reusejp_384_;
}
else
{
lean_object* v_reuseFailAlloc_418_; 
v_reuseFailAlloc_418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_418_, 0, v_name_306_);
lean_ctor_set(v_reuseFailAlloc_418_, 1, v___x_383_);
v___x_385_ = v_reuseFailAlloc_418_;
goto v_reusejp_384_;
}
v_reusejp_384_:
{
lean_object* v___x_386_; 
v___x_386_ = l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg(v___x_378_, v___x_385_, v___y_309_, v___y_310_, v___y_311_, v___y_312_);
if (lean_obj_tag(v___x_386_) == 0)
{
lean_object* v_a_387_; lean_object* v___x_388_; uint8_t v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
v_a_387_ = lean_ctor_get(v___x_386_, 0);
lean_inc(v_a_387_);
lean_dec_ref_known(v___x_386_, 1);
v___x_388_ = lean_array_push(v___x_381_, v_a_387_);
v___x_389_ = 1;
v___x_390_ = lean_box(v___x_389_);
v___x_391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_391_, 0, v_name_306_);
lean_ctor_set(v___x_391_, 1, v___x_390_);
v___x_392_ = l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg(v___x_380_, v___x_391_, v___y_309_, v___y_310_, v___y_311_, v___y_312_);
if (lean_obj_tag(v___x_392_) == 0)
{
lean_object* v_a_393_; lean_object* v___x_395_; uint8_t v_isShared_396_; uint8_t v_isSharedCheck_401_; 
v_a_393_ = lean_ctor_get(v___x_392_, 0);
v_isSharedCheck_401_ = !lean_is_exclusive(v___x_392_);
if (v_isSharedCheck_401_ == 0)
{
v___x_395_ = v___x_392_;
v_isShared_396_ = v_isSharedCheck_401_;
goto v_resetjp_394_;
}
else
{
lean_inc(v_a_393_);
lean_dec(v___x_392_);
v___x_395_ = lean_box(0);
v_isShared_396_ = v_isSharedCheck_401_;
goto v_resetjp_394_;
}
v_resetjp_394_:
{
lean_object* v___x_397_; lean_object* v___x_399_; 
v___x_397_ = lean_array_push(v___x_388_, v_a_393_);
if (v_isShared_396_ == 0)
{
lean_ctor_set(v___x_395_, 0, v___x_397_);
v___x_399_ = v___x_395_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v___x_397_);
v___x_399_ = v_reuseFailAlloc_400_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
return v___x_399_;
}
}
}
else
{
lean_object* v_a_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_409_; 
lean_dec_ref(v___x_388_);
v_a_402_ = lean_ctor_get(v___x_392_, 0);
v_isSharedCheck_409_ = !lean_is_exclusive(v___x_392_);
if (v_isSharedCheck_409_ == 0)
{
v___x_404_ = v___x_392_;
v_isShared_405_ = v_isSharedCheck_409_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_a_402_);
lean_dec(v___x_392_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_409_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v___x_407_; 
if (v_isShared_405_ == 0)
{
v___x_407_ = v___x_404_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v_a_402_);
v___x_407_ = v_reuseFailAlloc_408_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
return v___x_407_;
}
}
}
}
else
{
lean_object* v_a_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_417_; 
lean_dec_ref(v___x_381_);
lean_dec(v___x_380_);
lean_dec(v_name_306_);
v_a_410_ = lean_ctor_get(v___x_386_, 0);
v_isSharedCheck_417_ = !lean_is_exclusive(v___x_386_);
if (v_isSharedCheck_417_ == 0)
{
v___x_412_ = v___x_386_;
v_isShared_413_ = v_isSharedCheck_417_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_a_410_);
lean_dec(v___x_386_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_417_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v___x_415_; 
if (v_isShared_413_ == 0)
{
v___x_415_ = v___x_412_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v_a_410_);
v___x_415_ = v_reuseFailAlloc_416_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
return v___x_415_;
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
lean_dec_ref_known(v_fst_318_, 2);
lean_dec_ref(v___x_317_);
lean_dec(v_name_306_);
goto v___jp_314_;
}
}
else
{
lean_dec(v_fst_318_);
lean_dec_ref(v___x_317_);
lean_dec(v_name_306_);
goto v___jp_314_;
}
v___jp_314_:
{
lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_315_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__0));
v___x_316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_316_, 0, v___x_315_);
return v___x_316_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___boxed(lean_object* v_name_421_, lean_object* v_x_422_, lean_object* v_type_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_){
_start:
{
lean_object* v_res_429_; 
v_res_429_ = l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0(v_name_421_, v_x_422_, v_type_423_, v___y_424_, v___y_425_, v___y_426_, v___y_427_);
lean_dec(v___y_427_);
lean_dec_ref(v___y_426_);
lean_dec(v___y_425_);
lean_dec_ref(v___y_424_);
lean_dec_ref(v_x_422_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__1(uint8_t v___x_430_, lean_object* v_type_431_, lean_object* v___f_432_, uint8_t v___x_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_){
_start:
{
lean_object* v___y_440_; lean_object* v___x_457_; uint8_t v_transparency_458_; uint8_t v___x_459_; 
v___x_457_ = l_Lean_Meta_Context_config(v___y_434_);
v_transparency_458_ = lean_ctor_get_uint8(v___x_457_, 9);
lean_dec_ref(v___x_457_);
v___x_459_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_458_, v___x_430_);
if (v___x_459_ == 0)
{
lean_object* v_keyedConfig_460_; uint8_t v_trackZetaDelta_461_; lean_object* v_zetaDeltaSet_462_; lean_object* v_lctx_463_; lean_object* v_localInstances_464_; lean_object* v_defEqCtx_x3f_465_; lean_object* v_synthPendingDepth_466_; lean_object* v_customCanUnfoldPredicate_x3f_467_; uint8_t v_univApprox_468_; uint8_t v_inTypeClassResolution_469_; uint8_t v_cacheInferType_470_; lean_object* v___x_472_; uint8_t v_isShared_473_; uint8_t v_isSharedCheck_479_; 
v_keyedConfig_460_ = lean_ctor_get(v___y_434_, 0);
v_trackZetaDelta_461_ = lean_ctor_get_uint8(v___y_434_, sizeof(void*)*7);
v_zetaDeltaSet_462_ = lean_ctor_get(v___y_434_, 1);
v_lctx_463_ = lean_ctor_get(v___y_434_, 2);
v_localInstances_464_ = lean_ctor_get(v___y_434_, 3);
v_defEqCtx_x3f_465_ = lean_ctor_get(v___y_434_, 4);
v_synthPendingDepth_466_ = lean_ctor_get(v___y_434_, 5);
v_customCanUnfoldPredicate_x3f_467_ = lean_ctor_get(v___y_434_, 6);
v_univApprox_468_ = lean_ctor_get_uint8(v___y_434_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_469_ = lean_ctor_get_uint8(v___y_434_, sizeof(void*)*7 + 2);
v_cacheInferType_470_ = lean_ctor_get_uint8(v___y_434_, sizeof(void*)*7 + 3);
v_isSharedCheck_479_ = !lean_is_exclusive(v___y_434_);
if (v_isSharedCheck_479_ == 0)
{
v___x_472_ = v___y_434_;
v_isShared_473_ = v_isSharedCheck_479_;
goto v_resetjp_471_;
}
else
{
lean_inc(v_customCanUnfoldPredicate_x3f_467_);
lean_inc(v_synthPendingDepth_466_);
lean_inc(v_defEqCtx_x3f_465_);
lean_inc(v_localInstances_464_);
lean_inc(v_lctx_463_);
lean_inc(v_zetaDeltaSet_462_);
lean_inc(v_keyedConfig_460_);
lean_dec(v___y_434_);
v___x_472_ = lean_box(0);
v_isShared_473_ = v_isSharedCheck_479_;
goto v_resetjp_471_;
}
v_resetjp_471_:
{
lean_object* v___x_474_; lean_object* v___x_476_; 
v___x_474_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_430_, v_keyedConfig_460_);
if (v_isShared_473_ == 0)
{
lean_ctor_set(v___x_472_, 0, v___x_474_);
v___x_476_ = v___x_472_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v___x_474_);
lean_ctor_set(v_reuseFailAlloc_478_, 1, v_zetaDeltaSet_462_);
lean_ctor_set(v_reuseFailAlloc_478_, 2, v_lctx_463_);
lean_ctor_set(v_reuseFailAlloc_478_, 3, v_localInstances_464_);
lean_ctor_set(v_reuseFailAlloc_478_, 4, v_defEqCtx_x3f_465_);
lean_ctor_set(v_reuseFailAlloc_478_, 5, v_synthPendingDepth_466_);
lean_ctor_set(v_reuseFailAlloc_478_, 6, v_customCanUnfoldPredicate_x3f_467_);
lean_ctor_set_uint8(v_reuseFailAlloc_478_, sizeof(void*)*7, v_trackZetaDelta_461_);
lean_ctor_set_uint8(v_reuseFailAlloc_478_, sizeof(void*)*7 + 1, v_univApprox_468_);
lean_ctor_set_uint8(v_reuseFailAlloc_478_, sizeof(void*)*7 + 2, v_inTypeClassResolution_469_);
lean_ctor_set_uint8(v_reuseFailAlloc_478_, sizeof(void*)*7 + 3, v_cacheInferType_470_);
v___x_476_ = v_reuseFailAlloc_478_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
lean_object* v___x_477_; 
v___x_477_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___redArg(v_type_431_, v___f_432_, v___x_433_, v___x_433_, v___x_476_, v___y_435_, v___y_436_, v___y_437_);
lean_dec_ref(v___x_476_);
v___y_440_ = v___x_477_;
goto v___jp_439_;
}
}
}
else
{
lean_object* v___x_480_; 
v___x_480_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___redArg(v_type_431_, v___f_432_, v___x_433_, v___x_433_, v___y_434_, v___y_435_, v___y_436_, v___y_437_);
lean_dec_ref(v___y_434_);
v___y_440_ = v___x_480_;
goto v___jp_439_;
}
v___jp_439_:
{
if (lean_obj_tag(v___y_440_) == 0)
{
lean_object* v_a_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_448_; 
v_a_441_ = lean_ctor_get(v___y_440_, 0);
v_isSharedCheck_448_ = !lean_is_exclusive(v___y_440_);
if (v_isSharedCheck_448_ == 0)
{
v___x_443_ = v___y_440_;
v_isShared_444_ = v_isSharedCheck_448_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_a_441_);
lean_dec(v___y_440_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_448_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
lean_object* v___x_446_; 
if (v_isShared_444_ == 0)
{
v___x_446_ = v___x_443_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v_a_441_);
v___x_446_ = v_reuseFailAlloc_447_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
return v___x_446_;
}
}
}
else
{
lean_object* v_a_449_; lean_object* v___x_451_; uint8_t v_isShared_452_; uint8_t v_isSharedCheck_456_; 
v_a_449_ = lean_ctor_get(v___y_440_, 0);
v_isSharedCheck_456_ = !lean_is_exclusive(v___y_440_);
if (v_isSharedCheck_456_ == 0)
{
v___x_451_ = v___y_440_;
v_isShared_452_ = v_isSharedCheck_456_;
goto v_resetjp_450_;
}
else
{
lean_inc(v_a_449_);
lean_dec(v___y_440_);
v___x_451_ = lean_box(0);
v_isShared_452_ = v_isSharedCheck_456_;
goto v_resetjp_450_;
}
v_resetjp_450_:
{
lean_object* v___x_454_; 
if (v_isShared_452_ == 0)
{
v___x_454_ = v___x_451_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v_a_449_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__1___boxed(lean_object* v___x_481_, lean_object* v_type_482_, lean_object* v___f_483_, lean_object* v___x_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_){
_start:
{
uint8_t v___x_5360__boxed_490_; uint8_t v___x_5362__boxed_491_; lean_object* v_res_492_; 
v___x_5360__boxed_490_ = lean_unbox(v___x_481_);
v___x_5362__boxed_491_ = lean_unbox(v___x_484_);
v_res_492_ = l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__1(v___x_5360__boxed_490_, v_type_482_, v___f_483_, v___x_5362__boxed_491_, v___y_485_, v___y_486_, v___y_487_, v___y_488_);
lean_dec(v___y_488_);
lean_dec_ref(v___y_487_);
lean_dec(v___y_486_);
return v_res_492_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport(lean_object* v_name_497_, lean_object* v_c_498_, lean_object* v_a_499_, lean_object* v_a_500_, lean_object* v_a_501_, lean_object* v_a_502_){
_start:
{
uint8_t v___x_507_; 
lean_inc_ref(v_c_498_);
v___x_507_ = l_Lean_AsyncConstantInfo_isUnsafe(v_c_498_);
if (v___x_507_ == 0)
{
lean_object* v___f_508_; lean_object* v___y_510_; lean_object* v___y_511_; lean_object* v___y_512_; lean_object* v___y_513_; lean_object* v___x_522_; lean_object* v_env_523_; uint8_t v___x_524_; 
lean_inc_n(v_name_497_, 2);
v___f_508_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___boxed), 8, 1);
lean_closure_set(v___f_508_, 0, v_name_497_);
v___x_522_ = lean_st_ref_get(v_a_502_);
v_env_523_ = lean_ctor_get(v___x_522_, 0);
lean_inc_ref(v_env_523_);
lean_dec(v___x_522_);
v___x_524_ = l_Lean_Meta_allowCompletion(v_env_523_, v_name_497_);
if (v___x_524_ == 0)
{
lean_dec_ref(v___f_508_);
lean_dec_ref(v_c_498_);
lean_dec(v_name_497_);
goto v___jp_504_;
}
else
{
lean_object* v___x_525_; lean_object* v_env_526_; uint8_t v___x_527_; 
v___x_525_ = lean_st_ref_get(v_a_502_);
v_env_526_ = lean_ctor_get(v___x_525_, 0);
lean_inc_ref(v_env_526_);
lean_dec(v___x_525_);
lean_inc(v_name_497_);
v___x_527_ = l_Lean_Linter_isDeprecated(v_env_526_, v_name_497_);
if (v___x_527_ == 0)
{
if (lean_obj_tag(v_name_497_) == 1)
{
lean_object* v_str_528_; lean_object* v___x_537_; uint8_t v___x_538_; 
v_str_528_ = lean_ctor_get(v_name_497_, 1);
v___x_537_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__1));
v___x_538_ = lean_string_dec_eq(v_str_528_, v___x_537_);
if (v___x_538_ == 0)
{
lean_object* v___x_539_; uint8_t v___x_540_; 
v___x_539_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__2));
v___x_540_ = lean_string_dec_eq(v_str_528_, v___x_539_);
if (v___x_540_ == 0)
{
lean_object* v___x_541_; lean_object* v___x_542_; uint8_t v___x_543_; 
v___x_541_ = lean_string_utf8_byte_size(v_str_528_);
v___x_542_ = lean_unsigned_to_nat(4u);
v___x_543_ = lean_nat_dec_le(v___x_542_, v___x_541_);
if (v___x_543_ == 0)
{
goto v___jp_529_;
}
else
{
lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; uint8_t v___x_547_; 
v___x_544_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__3));
v___x_545_ = lean_unsigned_to_nat(0u);
v___x_546_ = lean_nat_sub(v___x_541_, v___x_542_);
v___x_547_ = lean_string_memcmp(v_str_528_, v___x_544_, v___x_546_, v___x_545_, v___x_542_);
lean_dec(v___x_546_);
if (v___x_547_ == 0)
{
goto v___jp_529_;
}
else
{
lean_dec_ref_known(v_name_497_, 2);
lean_dec_ref(v___f_508_);
lean_dec_ref(v_c_498_);
goto v___jp_504_;
}
}
}
else
{
lean_dec_ref_known(v_name_497_, 2);
lean_dec_ref(v___f_508_);
lean_dec_ref(v_c_498_);
goto v___jp_504_;
}
}
else
{
lean_dec_ref_known(v_name_497_, 2);
lean_dec_ref(v___f_508_);
lean_dec_ref(v_c_498_);
goto v___jp_504_;
}
v___jp_529_:
{
lean_object* v___x_530_; lean_object* v___x_531_; uint8_t v___x_532_; 
v___x_530_ = lean_string_utf8_byte_size(v_str_528_);
v___x_531_ = lean_unsigned_to_nat(5u);
v___x_532_ = lean_nat_dec_le(v___x_531_, v___x_530_);
if (v___x_532_ == 0)
{
v___y_510_ = v_a_499_;
v___y_511_ = v_a_500_;
v___y_512_ = v_a_501_;
v___y_513_ = v_a_502_;
goto v___jp_509_;
}
else
{
lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; uint8_t v___x_536_; 
v___x_533_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__0));
v___x_534_ = lean_unsigned_to_nat(0u);
v___x_535_ = lean_nat_sub(v___x_530_, v___x_531_);
v___x_536_ = lean_string_memcmp(v_str_528_, v___x_533_, v___x_535_, v___x_534_, v___x_531_);
lean_dec(v___x_535_);
if (v___x_536_ == 0)
{
v___y_510_ = v_a_499_;
v___y_511_ = v_a_500_;
v___y_512_ = v_a_501_;
v___y_513_ = v_a_502_;
goto v___jp_509_;
}
else
{
lean_dec_ref_known(v_name_497_, 2);
lean_dec_ref(v___f_508_);
lean_dec_ref(v_c_498_);
goto v___jp_504_;
}
}
}
}
else
{
v___y_510_ = v_a_499_;
v___y_511_ = v_a_500_;
v___y_512_ = v_a_501_;
v___y_513_ = v_a_502_;
goto v___jp_509_;
}
}
else
{
lean_dec_ref(v___f_508_);
lean_dec_ref(v_c_498_);
lean_dec(v_name_497_);
goto v___jp_504_;
}
}
v___jp_509_:
{
uint8_t v___x_514_; 
v___x_514_ = l_Lean_Name_isMetaprogramming(v_name_497_);
if (v___x_514_ == 0)
{
lean_object* v___x_515_; lean_object* v_type_516_; uint8_t v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___f_520_; lean_object* v___x_521_; 
v___x_515_ = l_Lean_AsyncConstantInfo_toConstantVal(v_c_498_);
v_type_516_ = lean_ctor_get(v___x_515_, 2);
lean_inc_ref(v_type_516_);
lean_dec_ref(v___x_515_);
v___x_517_ = 2;
v___x_518_ = lean_box(v___x_517_);
v___x_519_ = lean_box(v___x_514_);
v___f_520_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__1___boxed), 9, 4);
lean_closure_set(v___f_520_, 0, v___x_518_);
lean_closure_set(v___f_520_, 1, v_type_516_);
lean_closure_set(v___f_520_, 2, v___f_508_);
lean_closure_set(v___f_520_, 3, v___x_519_);
v___x_521_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__1___redArg(v___f_520_, v___x_514_, v___y_510_, v___y_511_, v___y_512_, v___y_513_);
return v___x_521_;
}
else
{
lean_dec_ref(v___f_508_);
lean_dec_ref(v_c_498_);
goto v___jp_504_;
}
}
}
else
{
lean_dec_ref(v_c_498_);
lean_dec(v_name_497_);
goto v___jp_504_;
}
v___jp_504_:
{
lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_505_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__0));
v___x_506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_506_, 0, v___x_505_);
return v___x_506_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___boxed(lean_object* v_name_548_, lean_object* v_c_549_, lean_object* v_a_550_, lean_object* v_a_551_, lean_object* v_a_552_, lean_object* v_a_553_, lean_object* v_a_554_){
_start:
{
lean_object* v_res_555_; 
v_res_555_ = l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport(v_name_548_, v_c_549_, v_a_550_, v_a_551_, v_a_552_, v_a_553_);
lean_dec(v_a_553_);
lean_dec_ref(v_a_552_);
lean_dec(v_a_551_);
lean_dec_ref(v_a_550_);
return v_res_555_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Meta_Rewrites_localHypotheses_spec__0(lean_object* v_a_556_, lean_object* v_x_557_){
_start:
{
if (lean_obj_tag(v_x_557_) == 0)
{
uint8_t v___x_558_; 
v___x_558_ = 0;
return v___x_558_;
}
else
{
lean_object* v_head_559_; lean_object* v_tail_560_; uint8_t v___x_561_; 
v_head_559_ = lean_ctor_get(v_x_557_, 0);
v_tail_560_ = lean_ctor_get(v_x_557_, 1);
v___x_561_ = l_Lean_instBEqFVarId_beq(v_a_556_, v_head_559_);
if (v___x_561_ == 0)
{
v_x_557_ = v_tail_560_;
goto _start;
}
else
{
return v___x_561_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Meta_Rewrites_localHypotheses_spec__0___boxed(lean_object* v_a_563_, lean_object* v_x_564_){
_start:
{
uint8_t v_res_565_; lean_object* v_r_566_; 
v_res_565_ = l_List_elem___at___00Lean_Meta_Rewrites_localHypotheses_spec__0(v_a_563_, v_x_564_);
lean_dec(v_x_564_);
lean_dec(v_a_563_);
v_r_566_ = lean_box(v_res_565_);
return v_r_566_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_localHypotheses_spec__2(lean_object* v_except_567_, lean_object* v_as_568_, size_t v_sz_569_, size_t v_i_570_, lean_object* v_b_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_){
_start:
{
lean_object* v_a_578_; uint8_t v___x_582_; 
v___x_582_ = lean_usize_dec_lt(v_i_570_, v_sz_569_);
if (v___x_582_ == 0)
{
lean_object* v___x_583_; 
v___x_583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_583_, 0, v_b_571_);
return v___x_583_;
}
else
{
lean_object* v_a_584_; lean_object* v___x_585_; uint8_t v___x_586_; 
v_a_584_ = lean_array_uget_borrowed(v_as_568_, v_i_570_);
v___x_585_ = l_Lean_Expr_fvarId_x21(v_a_584_);
v___x_586_ = l_List_elem___at___00Lean_Meta_Rewrites_localHypotheses_spec__0(v___x_585_, v_except_567_);
lean_dec(v___x_585_);
if (v___x_586_ == 0)
{
lean_object* v___x_587_; 
lean_inc(v___y_575_);
lean_inc_ref(v___y_574_);
lean_inc(v___y_573_);
lean_inc_ref(v___y_572_);
lean_inc(v_a_584_);
v___x_587_ = lean_infer_type(v_a_584_, v___y_572_, v___y_573_, v___y_574_, v___y_575_);
if (lean_obj_tag(v___x_587_) == 0)
{
lean_object* v_a_588_; lean_object* v___x_589_; uint8_t v___x_590_; lean_object* v___x_591_; 
v_a_588_ = lean_ctor_get(v___x_587_, 0);
lean_inc(v_a_588_);
lean_dec_ref_known(v___x_587_, 1);
v___x_589_ = lean_box(0);
v___x_590_ = 0;
v___x_591_ = l_Lean_Meta_forallMetaTelescopeReducing(v_a_588_, v___x_589_, v___x_590_, v___y_572_, v___y_573_, v___y_574_, v___y_575_);
if (lean_obj_tag(v___x_591_) == 0)
{
lean_object* v_a_592_; lean_object* v_snd_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_664_; 
v_a_592_ = lean_ctor_get(v___x_591_, 0);
lean_inc(v_a_592_);
lean_dec_ref_known(v___x_591_, 1);
v_snd_593_ = lean_ctor_get(v_a_592_, 1);
v_isSharedCheck_664_ = !lean_is_exclusive(v_a_592_);
if (v_isSharedCheck_664_ == 0)
{
lean_object* v_unused_665_; 
v_unused_665_ = lean_ctor_get(v_a_592_, 0);
lean_dec(v_unused_665_);
v___x_595_ = v_a_592_;
v_isShared_596_ = v_isSharedCheck_664_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_snd_593_);
lean_dec(v_a_592_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_664_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
lean_object* v_snd_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_662_; 
v_snd_597_ = lean_ctor_get(v_snd_593_, 1);
v_isSharedCheck_662_ = !lean_is_exclusive(v_snd_593_);
if (v_isSharedCheck_662_ == 0)
{
lean_object* v_unused_663_; 
v_unused_663_ = lean_ctor_get(v_snd_593_, 0);
lean_dec(v_unused_663_);
v___x_599_ = v_snd_593_;
v_isShared_600_ = v_isSharedCheck_662_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_snd_597_);
lean_dec(v_snd_593_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_662_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
lean_object* v___x_601_; 
v___x_601_ = l_Lean_Meta_whnfR(v_snd_597_, v___y_572_, v___y_573_, v___y_574_, v___y_575_);
if (lean_obj_tag(v___x_601_) == 0)
{
lean_object* v_a_602_; lean_object* v___x_603_; lean_object* v_fst_604_; 
v_a_602_ = lean_ctor_get(v___x_601_, 0);
lean_inc(v_a_602_);
lean_dec_ref_known(v___x_601_, 1);
v___x_603_ = l_Lean_Expr_getAppFnArgs(v_a_602_);
v_fst_604_ = lean_ctor_get(v___x_603_, 0);
lean_inc(v_fst_604_);
if (lean_obj_tag(v_fst_604_) == 1)
{
lean_object* v_pre_605_; 
v_pre_605_ = lean_ctor_get(v_fst_604_, 0);
if (lean_obj_tag(v_pre_605_) == 0)
{
lean_object* v_snd_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_652_; 
v_snd_606_ = lean_ctor_get(v___x_603_, 1);
v_isSharedCheck_652_ = !lean_is_exclusive(v___x_603_);
if (v_isSharedCheck_652_ == 0)
{
lean_object* v_unused_653_; 
v_unused_653_ = lean_ctor_get(v___x_603_, 0);
lean_dec(v_unused_653_);
v___x_608_ = v___x_603_;
v_isShared_609_ = v_isSharedCheck_652_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_snd_606_);
lean_dec(v___x_603_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_652_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
lean_object* v_str_610_; lean_object* v___x_611_; uint8_t v___x_612_; 
v_str_610_ = lean_ctor_get(v_fst_604_, 1);
lean_inc_ref(v_str_610_);
lean_dec_ref_known(v_fst_604_, 2);
v___x_611_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__1));
v___x_612_ = lean_string_dec_eq(v_str_610_, v___x_611_);
if (v___x_612_ == 0)
{
lean_object* v___x_613_; uint8_t v___x_614_; 
v___x_613_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__2));
v___x_614_ = lean_string_dec_eq(v_str_610_, v___x_613_);
lean_dec_ref(v_str_610_);
if (v___x_614_ == 0)
{
lean_del_object(v___x_608_);
lean_dec(v_snd_606_);
lean_del_object(v___x_599_);
lean_del_object(v___x_595_);
v_a_578_ = v_b_571_;
goto v___jp_577_;
}
else
{
lean_object* v___x_615_; lean_object* v___x_616_; uint8_t v___x_617_; 
v___x_615_ = lean_array_get_size(v_snd_606_);
lean_dec(v_snd_606_);
v___x_616_ = lean_unsigned_to_nat(2u);
v___x_617_ = lean_nat_dec_eq(v___x_615_, v___x_616_);
if (v___x_617_ == 0)
{
lean_del_object(v___x_608_);
lean_del_object(v___x_599_);
lean_del_object(v___x_595_);
v_a_578_ = v_b_571_;
goto v___jp_577_;
}
else
{
lean_object* v___x_618_; lean_object* v___x_620_; 
v___x_618_ = lean_box(v___x_612_);
if (v_isShared_609_ == 0)
{
lean_ctor_set(v___x_608_, 1, v___x_616_);
lean_ctor_set(v___x_608_, 0, v___x_618_);
v___x_620_ = v___x_608_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v___x_618_);
lean_ctor_set(v_reuseFailAlloc_632_, 1, v___x_616_);
v___x_620_ = v_reuseFailAlloc_632_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
lean_object* v___x_622_; 
lean_inc(v_a_584_);
if (v_isShared_600_ == 0)
{
lean_ctor_set(v___x_599_, 1, v___x_620_);
lean_ctor_set(v___x_599_, 0, v_a_584_);
v___x_622_ = v___x_599_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v_a_584_);
lean_ctor_set(v_reuseFailAlloc_631_, 1, v___x_620_);
v___x_622_ = v_reuseFailAlloc_631_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_627_; 
v___x_623_ = lean_array_push(v_b_571_, v___x_622_);
v___x_624_ = lean_unsigned_to_nat(1u);
v___x_625_ = lean_box(v___x_617_);
if (v_isShared_596_ == 0)
{
lean_ctor_set(v___x_595_, 1, v___x_624_);
lean_ctor_set(v___x_595_, 0, v___x_625_);
v___x_627_ = v___x_595_;
goto v_reusejp_626_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v___x_625_);
lean_ctor_set(v_reuseFailAlloc_630_, 1, v___x_624_);
v___x_627_ = v_reuseFailAlloc_630_;
goto v_reusejp_626_;
}
v_reusejp_626_:
{
lean_object* v___x_628_; lean_object* v___x_629_; 
lean_inc(v_a_584_);
v___x_628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_628_, 0, v_a_584_);
lean_ctor_set(v___x_628_, 1, v___x_627_);
v___x_629_ = lean_array_push(v___x_623_, v___x_628_);
v_a_578_ = v___x_629_;
goto v___jp_577_;
}
}
}
}
}
}
else
{
lean_object* v___x_633_; lean_object* v___x_634_; uint8_t v___x_635_; 
lean_dec_ref(v_str_610_);
v___x_633_ = lean_array_get_size(v_snd_606_);
lean_dec(v_snd_606_);
v___x_634_ = lean_unsigned_to_nat(3u);
v___x_635_ = lean_nat_dec_eq(v___x_633_, v___x_634_);
if (v___x_635_ == 0)
{
lean_del_object(v___x_608_);
lean_del_object(v___x_599_);
lean_del_object(v___x_595_);
v_a_578_ = v_b_571_;
goto v___jp_577_;
}
else
{
lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_639_; 
v___x_636_ = lean_unsigned_to_nat(2u);
v___x_637_ = lean_box(v___x_586_);
if (v_isShared_609_ == 0)
{
lean_ctor_set(v___x_608_, 1, v___x_636_);
lean_ctor_set(v___x_608_, 0, v___x_637_);
v___x_639_ = v___x_608_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v___x_637_);
lean_ctor_set(v_reuseFailAlloc_651_, 1, v___x_636_);
v___x_639_ = v_reuseFailAlloc_651_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
lean_object* v___x_641_; 
lean_inc(v_a_584_);
if (v_isShared_600_ == 0)
{
lean_ctor_set(v___x_599_, 1, v___x_639_);
lean_ctor_set(v___x_599_, 0, v_a_584_);
v___x_641_ = v___x_599_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v_a_584_);
lean_ctor_set(v_reuseFailAlloc_650_, 1, v___x_639_);
v___x_641_ = v_reuseFailAlloc_650_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_646_; 
v___x_642_ = lean_array_push(v_b_571_, v___x_641_);
v___x_643_ = lean_unsigned_to_nat(1u);
v___x_644_ = lean_box(v___x_635_);
if (v_isShared_596_ == 0)
{
lean_ctor_set(v___x_595_, 1, v___x_643_);
lean_ctor_set(v___x_595_, 0, v___x_644_);
v___x_646_ = v___x_595_;
goto v_reusejp_645_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v___x_644_);
lean_ctor_set(v_reuseFailAlloc_649_, 1, v___x_643_);
v___x_646_ = v_reuseFailAlloc_649_;
goto v_reusejp_645_;
}
v_reusejp_645_:
{
lean_object* v___x_647_; lean_object* v___x_648_; 
lean_inc(v_a_584_);
v___x_647_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_647_, 0, v_a_584_);
lean_ctor_set(v___x_647_, 1, v___x_646_);
v___x_648_ = lean_array_push(v___x_642_, v___x_647_);
v_a_578_ = v___x_648_;
goto v___jp_577_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_fst_604_, 2);
lean_dec_ref(v___x_603_);
lean_del_object(v___x_599_);
lean_del_object(v___x_595_);
v_a_578_ = v_b_571_;
goto v___jp_577_;
}
}
else
{
lean_dec(v_fst_604_);
lean_dec_ref(v___x_603_);
lean_del_object(v___x_599_);
lean_del_object(v___x_595_);
v_a_578_ = v_b_571_;
goto v___jp_577_;
}
}
else
{
lean_object* v_a_654_; lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_661_; 
lean_del_object(v___x_599_);
lean_del_object(v___x_595_);
lean_dec_ref(v_b_571_);
v_a_654_ = lean_ctor_get(v___x_601_, 0);
v_isSharedCheck_661_ = !lean_is_exclusive(v___x_601_);
if (v_isSharedCheck_661_ == 0)
{
v___x_656_ = v___x_601_;
v_isShared_657_ = v_isSharedCheck_661_;
goto v_resetjp_655_;
}
else
{
lean_inc(v_a_654_);
lean_dec(v___x_601_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_661_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v___x_659_; 
if (v_isShared_657_ == 0)
{
v___x_659_ = v___x_656_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v_a_654_);
v___x_659_ = v_reuseFailAlloc_660_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
return v___x_659_;
}
}
}
}
}
}
else
{
lean_object* v_a_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_673_; 
lean_dec_ref(v_b_571_);
v_a_666_ = lean_ctor_get(v___x_591_, 0);
v_isSharedCheck_673_ = !lean_is_exclusive(v___x_591_);
if (v_isSharedCheck_673_ == 0)
{
v___x_668_ = v___x_591_;
v_isShared_669_ = v_isSharedCheck_673_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_a_666_);
lean_dec(v___x_591_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_673_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
lean_object* v___x_671_; 
if (v_isShared_669_ == 0)
{
v___x_671_ = v___x_668_;
goto v_reusejp_670_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v_a_666_);
v___x_671_ = v_reuseFailAlloc_672_;
goto v_reusejp_670_;
}
v_reusejp_670_:
{
return v___x_671_;
}
}
}
}
else
{
lean_object* v_a_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_681_; 
lean_dec_ref(v_b_571_);
v_a_674_ = lean_ctor_get(v___x_587_, 0);
v_isSharedCheck_681_ = !lean_is_exclusive(v___x_587_);
if (v_isSharedCheck_681_ == 0)
{
v___x_676_ = v___x_587_;
v_isShared_677_ = v_isSharedCheck_681_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_a_674_);
lean_dec(v___x_587_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_681_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
lean_object* v___x_679_; 
if (v_isShared_677_ == 0)
{
v___x_679_ = v___x_676_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v_a_674_);
v___x_679_ = v_reuseFailAlloc_680_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
return v___x_679_;
}
}
}
}
else
{
v_a_578_ = v_b_571_;
goto v___jp_577_;
}
}
v___jp_577_:
{
size_t v___x_579_; size_t v___x_580_; 
v___x_579_ = ((size_t)1ULL);
v___x_580_ = lean_usize_add(v_i_570_, v___x_579_);
v_i_570_ = v___x_580_;
v_b_571_ = v_a_578_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_localHypotheses_spec__2___boxed(lean_object* v_except_682_, lean_object* v_as_683_, lean_object* v_sz_684_, lean_object* v_i_685_, lean_object* v_b_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_){
_start:
{
size_t v_sz_boxed_692_; size_t v_i_boxed_693_; lean_object* v_res_694_; 
v_sz_boxed_692_ = lean_unbox_usize(v_sz_684_);
lean_dec(v_sz_684_);
v_i_boxed_693_ = lean_unbox_usize(v_i_685_);
lean_dec(v_i_685_);
v_res_694_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_localHypotheses_spec__2(v_except_682_, v_as_683_, v_sz_boxed_692_, v_i_boxed_693_, v_b_686_, v___y_687_, v___y_688_, v___y_689_, v___y_690_);
lean_dec(v___y_690_);
lean_dec_ref(v___y_689_);
lean_dec(v___y_688_);
lean_dec_ref(v___y_687_);
lean_dec_ref(v_as_683_);
lean_dec(v_except_682_);
return v_res_694_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5_spec__6___redArg(lean_object* v_as_695_, size_t v_sz_696_, size_t v_i_697_, lean_object* v_b_698_){
_start:
{
uint8_t v___x_700_; 
v___x_700_ = lean_usize_dec_lt(v_i_697_, v_sz_696_);
if (v___x_700_ == 0)
{
lean_object* v___x_701_; 
v___x_701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_701_, 0, v_b_698_);
return v___x_701_;
}
else
{
lean_object* v_snd_702_; lean_object* v___x_704_; uint8_t v_isShared_705_; uint8_t v_isSharedCheck_720_; 
v_snd_702_ = lean_ctor_get(v_b_698_, 1);
v_isSharedCheck_720_ = !lean_is_exclusive(v_b_698_);
if (v_isSharedCheck_720_ == 0)
{
lean_object* v_unused_721_; 
v_unused_721_ = lean_ctor_get(v_b_698_, 0);
lean_dec(v_unused_721_);
v___x_704_ = v_b_698_;
v_isShared_705_ = v_isSharedCheck_720_;
goto v_resetjp_703_;
}
else
{
lean_inc(v_snd_702_);
lean_dec(v_b_698_);
v___x_704_ = lean_box(0);
v_isShared_705_ = v_isSharedCheck_720_;
goto v_resetjp_703_;
}
v_resetjp_703_:
{
lean_object* v___x_706_; lean_object* v_a_708_; lean_object* v_a_715_; 
v___x_706_ = lean_box(0);
v_a_715_ = lean_array_uget_borrowed(v_as_695_, v_i_697_);
if (lean_obj_tag(v_a_715_) == 0)
{
v_a_708_ = v_snd_702_;
goto v___jp_707_;
}
else
{
lean_object* v_val_716_; uint8_t v___x_717_; 
v_val_716_ = lean_ctor_get(v_a_715_, 0);
v___x_717_ = l_Lean_LocalDecl_isImplementationDetail(v_val_716_);
if (v___x_717_ == 0)
{
lean_object* v___x_718_; lean_object* v___x_719_; 
lean_inc(v_val_716_);
v___x_718_ = l_Lean_LocalDecl_toExpr(v_val_716_);
v___x_719_ = lean_array_push(v_snd_702_, v___x_718_);
v_a_708_ = v___x_719_;
goto v___jp_707_;
}
else
{
v_a_708_ = v_snd_702_;
goto v___jp_707_;
}
}
v___jp_707_:
{
lean_object* v___x_710_; 
if (v_isShared_705_ == 0)
{
lean_ctor_set(v___x_704_, 1, v_a_708_);
lean_ctor_set(v___x_704_, 0, v___x_706_);
v___x_710_ = v___x_704_;
goto v_reusejp_709_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v___x_706_);
lean_ctor_set(v_reuseFailAlloc_714_, 1, v_a_708_);
v___x_710_ = v_reuseFailAlloc_714_;
goto v_reusejp_709_;
}
v_reusejp_709_:
{
size_t v___x_711_; size_t v___x_712_; 
v___x_711_ = ((size_t)1ULL);
v___x_712_ = lean_usize_add(v_i_697_, v___x_711_);
v_i_697_ = v___x_712_;
v_b_698_ = v___x_710_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5_spec__6___redArg___boxed(lean_object* v_as_722_, lean_object* v_sz_723_, lean_object* v_i_724_, lean_object* v_b_725_, lean_object* v___y_726_){
_start:
{
size_t v_sz_boxed_727_; size_t v_i_boxed_728_; lean_object* v_res_729_; 
v_sz_boxed_727_ = lean_unbox_usize(v_sz_723_);
lean_dec(v_sz_723_);
v_i_boxed_728_ = lean_unbox_usize(v_i_724_);
lean_dec(v_i_724_);
v_res_729_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5_spec__6___redArg(v_as_722_, v_sz_boxed_727_, v_i_boxed_728_, v_b_725_);
lean_dec_ref(v_as_722_);
return v_res_729_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5(lean_object* v_as_730_, size_t v_sz_731_, size_t v_i_732_, lean_object* v_b_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_){
_start:
{
uint8_t v___x_739_; 
v___x_739_ = lean_usize_dec_lt(v_i_732_, v_sz_731_);
if (v___x_739_ == 0)
{
lean_object* v___x_740_; 
v___x_740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_740_, 0, v_b_733_);
return v___x_740_;
}
else
{
lean_object* v_snd_741_; lean_object* v___x_743_; uint8_t v_isShared_744_; uint8_t v_isSharedCheck_759_; 
v_snd_741_ = lean_ctor_get(v_b_733_, 1);
v_isSharedCheck_759_ = !lean_is_exclusive(v_b_733_);
if (v_isSharedCheck_759_ == 0)
{
lean_object* v_unused_760_; 
v_unused_760_ = lean_ctor_get(v_b_733_, 0);
lean_dec(v_unused_760_);
v___x_743_ = v_b_733_;
v_isShared_744_ = v_isSharedCheck_759_;
goto v_resetjp_742_;
}
else
{
lean_inc(v_snd_741_);
lean_dec(v_b_733_);
v___x_743_ = lean_box(0);
v_isShared_744_ = v_isSharedCheck_759_;
goto v_resetjp_742_;
}
v_resetjp_742_:
{
lean_object* v___x_745_; lean_object* v_a_747_; lean_object* v_a_754_; 
v___x_745_ = lean_box(0);
v_a_754_ = lean_array_uget_borrowed(v_as_730_, v_i_732_);
if (lean_obj_tag(v_a_754_) == 0)
{
v_a_747_ = v_snd_741_;
goto v___jp_746_;
}
else
{
lean_object* v_val_755_; uint8_t v___x_756_; 
v_val_755_ = lean_ctor_get(v_a_754_, 0);
v___x_756_ = l_Lean_LocalDecl_isImplementationDetail(v_val_755_);
if (v___x_756_ == 0)
{
lean_object* v___x_757_; lean_object* v___x_758_; 
lean_inc(v_val_755_);
v___x_757_ = l_Lean_LocalDecl_toExpr(v_val_755_);
v___x_758_ = lean_array_push(v_snd_741_, v___x_757_);
v_a_747_ = v___x_758_;
goto v___jp_746_;
}
else
{
v_a_747_ = v_snd_741_;
goto v___jp_746_;
}
}
v___jp_746_:
{
lean_object* v___x_749_; 
if (v_isShared_744_ == 0)
{
lean_ctor_set(v___x_743_, 1, v_a_747_);
lean_ctor_set(v___x_743_, 0, v___x_745_);
v___x_749_ = v___x_743_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v___x_745_);
lean_ctor_set(v_reuseFailAlloc_753_, 1, v_a_747_);
v___x_749_ = v_reuseFailAlloc_753_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
size_t v___x_750_; size_t v___x_751_; lean_object* v___x_752_; 
v___x_750_ = ((size_t)1ULL);
v___x_751_ = lean_usize_add(v_i_732_, v___x_750_);
v___x_752_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5_spec__6___redArg(v_as_730_, v_sz_731_, v___x_751_, v___x_749_);
return v___x_752_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5___boxed(lean_object* v_as_761_, lean_object* v_sz_762_, lean_object* v_i_763_, lean_object* v_b_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_){
_start:
{
size_t v_sz_boxed_770_; size_t v_i_boxed_771_; lean_object* v_res_772_; 
v_sz_boxed_770_ = lean_unbox_usize(v_sz_762_);
lean_dec(v_sz_762_);
v_i_boxed_771_ = lean_unbox_usize(v_i_763_);
lean_dec(v_i_763_);
v_res_772_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5(v_as_761_, v_sz_boxed_770_, v_i_boxed_771_, v_b_764_, v___y_765_, v___y_766_, v___y_767_, v___y_768_);
lean_dec(v___y_768_);
lean_dec_ref(v___y_767_);
lean_dec(v___y_766_);
lean_dec_ref(v___y_765_);
lean_dec_ref(v_as_761_);
return v_res_772_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2(lean_object* v_init_773_, lean_object* v_n_774_, lean_object* v_b_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_){
_start:
{
if (lean_obj_tag(v_n_774_) == 0)
{
lean_object* v_cs_781_; lean_object* v___x_782_; lean_object* v___x_783_; size_t v_sz_784_; size_t v___x_785_; lean_object* v___x_786_; 
v_cs_781_ = lean_ctor_get(v_n_774_, 0);
v___x_782_ = lean_box(0);
v___x_783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_783_, 0, v___x_782_);
lean_ctor_set(v___x_783_, 1, v_b_775_);
v_sz_784_ = lean_array_size(v_cs_781_);
v___x_785_ = ((size_t)0ULL);
v___x_786_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__4(v_init_773_, v_cs_781_, v_sz_784_, v___x_785_, v___x_783_, v___y_776_, v___y_777_, v___y_778_, v___y_779_);
if (lean_obj_tag(v___x_786_) == 0)
{
lean_object* v_a_787_; lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_801_; 
v_a_787_ = lean_ctor_get(v___x_786_, 0);
v_isSharedCheck_801_ = !lean_is_exclusive(v___x_786_);
if (v_isSharedCheck_801_ == 0)
{
v___x_789_ = v___x_786_;
v_isShared_790_ = v_isSharedCheck_801_;
goto v_resetjp_788_;
}
else
{
lean_inc(v_a_787_);
lean_dec(v___x_786_);
v___x_789_ = lean_box(0);
v_isShared_790_ = v_isSharedCheck_801_;
goto v_resetjp_788_;
}
v_resetjp_788_:
{
lean_object* v_fst_791_; 
v_fst_791_ = lean_ctor_get(v_a_787_, 0);
if (lean_obj_tag(v_fst_791_) == 0)
{
lean_object* v_snd_792_; lean_object* v___x_793_; lean_object* v___x_795_; 
v_snd_792_ = lean_ctor_get(v_a_787_, 1);
lean_inc(v_snd_792_);
lean_dec(v_a_787_);
v___x_793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_793_, 0, v_snd_792_);
if (v_isShared_790_ == 0)
{
lean_ctor_set(v___x_789_, 0, v___x_793_);
v___x_795_ = v___x_789_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v___x_793_);
v___x_795_ = v_reuseFailAlloc_796_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
return v___x_795_;
}
}
else
{
lean_object* v_val_797_; lean_object* v___x_799_; 
lean_inc_ref(v_fst_791_);
lean_dec(v_a_787_);
v_val_797_ = lean_ctor_get(v_fst_791_, 0);
lean_inc(v_val_797_);
lean_dec_ref_known(v_fst_791_, 1);
if (v_isShared_790_ == 0)
{
lean_ctor_set(v___x_789_, 0, v_val_797_);
v___x_799_ = v___x_789_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v_val_797_);
v___x_799_ = v_reuseFailAlloc_800_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
return v___x_799_;
}
}
}
}
else
{
lean_object* v_a_802_; lean_object* v___x_804_; uint8_t v_isShared_805_; uint8_t v_isSharedCheck_809_; 
v_a_802_ = lean_ctor_get(v___x_786_, 0);
v_isSharedCheck_809_ = !lean_is_exclusive(v___x_786_);
if (v_isSharedCheck_809_ == 0)
{
v___x_804_ = v___x_786_;
v_isShared_805_ = v_isSharedCheck_809_;
goto v_resetjp_803_;
}
else
{
lean_inc(v_a_802_);
lean_dec(v___x_786_);
v___x_804_ = lean_box(0);
v_isShared_805_ = v_isSharedCheck_809_;
goto v_resetjp_803_;
}
v_resetjp_803_:
{
lean_object* v___x_807_; 
if (v_isShared_805_ == 0)
{
v___x_807_ = v___x_804_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v_a_802_);
v___x_807_ = v_reuseFailAlloc_808_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
return v___x_807_;
}
}
}
}
else
{
lean_object* v_vs_810_; lean_object* v___x_811_; lean_object* v___x_812_; size_t v_sz_813_; size_t v___x_814_; lean_object* v___x_815_; 
v_vs_810_ = lean_ctor_get(v_n_774_, 0);
v___x_811_ = lean_box(0);
v___x_812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_812_, 0, v___x_811_);
lean_ctor_set(v___x_812_, 1, v_b_775_);
v_sz_813_ = lean_array_size(v_vs_810_);
v___x_814_ = ((size_t)0ULL);
v___x_815_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5(v_vs_810_, v_sz_813_, v___x_814_, v___x_812_, v___y_776_, v___y_777_, v___y_778_, v___y_779_);
if (lean_obj_tag(v___x_815_) == 0)
{
lean_object* v_a_816_; lean_object* v___x_818_; uint8_t v_isShared_819_; uint8_t v_isSharedCheck_830_; 
v_a_816_ = lean_ctor_get(v___x_815_, 0);
v_isSharedCheck_830_ = !lean_is_exclusive(v___x_815_);
if (v_isSharedCheck_830_ == 0)
{
v___x_818_ = v___x_815_;
v_isShared_819_ = v_isSharedCheck_830_;
goto v_resetjp_817_;
}
else
{
lean_inc(v_a_816_);
lean_dec(v___x_815_);
v___x_818_ = lean_box(0);
v_isShared_819_ = v_isSharedCheck_830_;
goto v_resetjp_817_;
}
v_resetjp_817_:
{
lean_object* v_fst_820_; 
v_fst_820_ = lean_ctor_get(v_a_816_, 0);
if (lean_obj_tag(v_fst_820_) == 0)
{
lean_object* v_snd_821_; lean_object* v___x_822_; lean_object* v___x_824_; 
v_snd_821_ = lean_ctor_get(v_a_816_, 1);
lean_inc(v_snd_821_);
lean_dec(v_a_816_);
v___x_822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_822_, 0, v_snd_821_);
if (v_isShared_819_ == 0)
{
lean_ctor_set(v___x_818_, 0, v___x_822_);
v___x_824_ = v___x_818_;
goto v_reusejp_823_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_825_, 0, v___x_822_);
v___x_824_ = v_reuseFailAlloc_825_;
goto v_reusejp_823_;
}
v_reusejp_823_:
{
return v___x_824_;
}
}
else
{
lean_object* v_val_826_; lean_object* v___x_828_; 
lean_inc_ref(v_fst_820_);
lean_dec(v_a_816_);
v_val_826_ = lean_ctor_get(v_fst_820_, 0);
lean_inc(v_val_826_);
lean_dec_ref_known(v_fst_820_, 1);
if (v_isShared_819_ == 0)
{
lean_ctor_set(v___x_818_, 0, v_val_826_);
v___x_828_ = v___x_818_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v_val_826_);
v___x_828_ = v_reuseFailAlloc_829_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
return v___x_828_;
}
}
}
}
else
{
lean_object* v_a_831_; lean_object* v___x_833_; uint8_t v_isShared_834_; uint8_t v_isSharedCheck_838_; 
v_a_831_ = lean_ctor_get(v___x_815_, 0);
v_isSharedCheck_838_ = !lean_is_exclusive(v___x_815_);
if (v_isSharedCheck_838_ == 0)
{
v___x_833_ = v___x_815_;
v_isShared_834_ = v_isSharedCheck_838_;
goto v_resetjp_832_;
}
else
{
lean_inc(v_a_831_);
lean_dec(v___x_815_);
v___x_833_ = lean_box(0);
v_isShared_834_ = v_isSharedCheck_838_;
goto v_resetjp_832_;
}
v_resetjp_832_:
{
lean_object* v___x_836_; 
if (v_isShared_834_ == 0)
{
v___x_836_ = v___x_833_;
goto v_reusejp_835_;
}
else
{
lean_object* v_reuseFailAlloc_837_; 
v_reuseFailAlloc_837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_837_, 0, v_a_831_);
v___x_836_ = v_reuseFailAlloc_837_;
goto v_reusejp_835_;
}
v_reusejp_835_:
{
return v___x_836_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__4(lean_object* v_init_839_, lean_object* v_as_840_, size_t v_sz_841_, size_t v_i_842_, lean_object* v_b_843_, lean_object* v___y_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_){
_start:
{
uint8_t v___x_849_; 
v___x_849_ = lean_usize_dec_lt(v_i_842_, v_sz_841_);
if (v___x_849_ == 0)
{
lean_object* v___x_850_; 
v___x_850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_850_, 0, v_b_843_);
return v___x_850_;
}
else
{
lean_object* v_snd_851_; lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_885_; 
v_snd_851_ = lean_ctor_get(v_b_843_, 1);
v_isSharedCheck_885_ = !lean_is_exclusive(v_b_843_);
if (v_isSharedCheck_885_ == 0)
{
lean_object* v_unused_886_; 
v_unused_886_ = lean_ctor_get(v_b_843_, 0);
lean_dec(v_unused_886_);
v___x_853_ = v_b_843_;
v_isShared_854_ = v_isSharedCheck_885_;
goto v_resetjp_852_;
}
else
{
lean_inc(v_snd_851_);
lean_dec(v_b_843_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_885_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
lean_object* v___x_855_; lean_object* v_a_856_; lean_object* v___x_857_; 
v___x_855_ = lean_box(0);
v_a_856_ = lean_array_uget_borrowed(v_as_840_, v_i_842_);
lean_inc(v_snd_851_);
v___x_857_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2(v_init_839_, v_a_856_, v_snd_851_, v___y_844_, v___y_845_, v___y_846_, v___y_847_);
if (lean_obj_tag(v___x_857_) == 0)
{
lean_object* v_a_858_; lean_object* v___x_860_; uint8_t v_isShared_861_; uint8_t v_isSharedCheck_876_; 
v_a_858_ = lean_ctor_get(v___x_857_, 0);
v_isSharedCheck_876_ = !lean_is_exclusive(v___x_857_);
if (v_isSharedCheck_876_ == 0)
{
v___x_860_ = v___x_857_;
v_isShared_861_ = v_isSharedCheck_876_;
goto v_resetjp_859_;
}
else
{
lean_inc(v_a_858_);
lean_dec(v___x_857_);
v___x_860_ = lean_box(0);
v_isShared_861_ = v_isSharedCheck_876_;
goto v_resetjp_859_;
}
v_resetjp_859_:
{
if (lean_obj_tag(v_a_858_) == 0)
{
lean_object* v___x_862_; lean_object* v___x_864_; 
v___x_862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_862_, 0, v_a_858_);
if (v_isShared_854_ == 0)
{
lean_ctor_set(v___x_853_, 0, v___x_862_);
v___x_864_ = v___x_853_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_868_; 
v_reuseFailAlloc_868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_868_, 0, v___x_862_);
lean_ctor_set(v_reuseFailAlloc_868_, 1, v_snd_851_);
v___x_864_ = v_reuseFailAlloc_868_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
lean_object* v___x_866_; 
if (v_isShared_861_ == 0)
{
lean_ctor_set(v___x_860_, 0, v___x_864_);
v___x_866_ = v___x_860_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_867_; 
v_reuseFailAlloc_867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_867_, 0, v___x_864_);
v___x_866_ = v_reuseFailAlloc_867_;
goto v_reusejp_865_;
}
v_reusejp_865_:
{
return v___x_866_;
}
}
}
else
{
lean_object* v_a_869_; lean_object* v___x_871_; 
lean_del_object(v___x_860_);
lean_dec(v_snd_851_);
v_a_869_ = lean_ctor_get(v_a_858_, 0);
lean_inc(v_a_869_);
lean_dec_ref_known(v_a_858_, 1);
if (v_isShared_854_ == 0)
{
lean_ctor_set(v___x_853_, 1, v_a_869_);
lean_ctor_set(v___x_853_, 0, v___x_855_);
v___x_871_ = v___x_853_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v___x_855_);
lean_ctor_set(v_reuseFailAlloc_875_, 1, v_a_869_);
v___x_871_ = v_reuseFailAlloc_875_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
size_t v___x_872_; size_t v___x_873_; 
v___x_872_ = ((size_t)1ULL);
v___x_873_ = lean_usize_add(v_i_842_, v___x_872_);
v_i_842_ = v___x_873_;
v_b_843_ = v___x_871_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_884_; 
lean_del_object(v___x_853_);
lean_dec(v_snd_851_);
v_a_877_ = lean_ctor_get(v___x_857_, 0);
v_isSharedCheck_884_ = !lean_is_exclusive(v___x_857_);
if (v_isSharedCheck_884_ == 0)
{
v___x_879_ = v___x_857_;
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_a_877_);
lean_dec(v___x_857_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_882_; 
if (v_isShared_880_ == 0)
{
v___x_882_ = v___x_879_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_a_877_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
return v___x_882_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__4___boxed(lean_object* v_init_887_, lean_object* v_as_888_, lean_object* v_sz_889_, lean_object* v_i_890_, lean_object* v_b_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_){
_start:
{
size_t v_sz_boxed_897_; size_t v_i_boxed_898_; lean_object* v_res_899_; 
v_sz_boxed_897_ = lean_unbox_usize(v_sz_889_);
lean_dec(v_sz_889_);
v_i_boxed_898_ = lean_unbox_usize(v_i_890_);
lean_dec(v_i_890_);
v_res_899_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__4(v_init_887_, v_as_888_, v_sz_boxed_897_, v_i_boxed_898_, v_b_891_, v___y_892_, v___y_893_, v___y_894_, v___y_895_);
lean_dec(v___y_895_);
lean_dec_ref(v___y_894_);
lean_dec(v___y_893_);
lean_dec_ref(v___y_892_);
lean_dec_ref(v_as_888_);
lean_dec_ref(v_init_887_);
return v_res_899_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2___boxed(lean_object* v_init_900_, lean_object* v_n_901_, lean_object* v_b_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_){
_start:
{
lean_object* v_res_908_; 
v_res_908_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2(v_init_900_, v_n_901_, v_b_902_, v___y_903_, v___y_904_, v___y_905_, v___y_906_);
lean_dec(v___y_906_);
lean_dec_ref(v___y_905_);
lean_dec(v___y_904_);
lean_dec_ref(v___y_903_);
lean_dec_ref(v_n_901_);
lean_dec_ref(v_init_900_);
return v_res_908_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3_spec__7___redArg(lean_object* v_as_909_, size_t v_sz_910_, size_t v_i_911_, lean_object* v_b_912_){
_start:
{
uint8_t v___x_914_; 
v___x_914_ = lean_usize_dec_lt(v_i_911_, v_sz_910_);
if (v___x_914_ == 0)
{
lean_object* v___x_915_; 
v___x_915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_915_, 0, v_b_912_);
return v___x_915_;
}
else
{
lean_object* v_snd_916_; lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_934_; 
v_snd_916_ = lean_ctor_get(v_b_912_, 1);
v_isSharedCheck_934_ = !lean_is_exclusive(v_b_912_);
if (v_isSharedCheck_934_ == 0)
{
lean_object* v_unused_935_; 
v_unused_935_ = lean_ctor_get(v_b_912_, 0);
lean_dec(v_unused_935_);
v___x_918_ = v_b_912_;
v_isShared_919_ = v_isSharedCheck_934_;
goto v_resetjp_917_;
}
else
{
lean_inc(v_snd_916_);
lean_dec(v_b_912_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_934_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
lean_object* v___x_920_; lean_object* v_a_922_; lean_object* v_a_929_; 
v___x_920_ = lean_box(0);
v_a_929_ = lean_array_uget_borrowed(v_as_909_, v_i_911_);
if (lean_obj_tag(v_a_929_) == 0)
{
v_a_922_ = v_snd_916_;
goto v___jp_921_;
}
else
{
lean_object* v_val_930_; uint8_t v___x_931_; 
v_val_930_ = lean_ctor_get(v_a_929_, 0);
v___x_931_ = l_Lean_LocalDecl_isImplementationDetail(v_val_930_);
if (v___x_931_ == 0)
{
lean_object* v___x_932_; lean_object* v___x_933_; 
lean_inc(v_val_930_);
v___x_932_ = l_Lean_LocalDecl_toExpr(v_val_930_);
v___x_933_ = lean_array_push(v_snd_916_, v___x_932_);
v_a_922_ = v___x_933_;
goto v___jp_921_;
}
else
{
v_a_922_ = v_snd_916_;
goto v___jp_921_;
}
}
v___jp_921_:
{
lean_object* v___x_924_; 
if (v_isShared_919_ == 0)
{
lean_ctor_set(v___x_918_, 1, v_a_922_);
lean_ctor_set(v___x_918_, 0, v___x_920_);
v___x_924_ = v___x_918_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v___x_920_);
lean_ctor_set(v_reuseFailAlloc_928_, 1, v_a_922_);
v___x_924_ = v_reuseFailAlloc_928_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
size_t v___x_925_; size_t v___x_926_; 
v___x_925_ = ((size_t)1ULL);
v___x_926_ = lean_usize_add(v_i_911_, v___x_925_);
v_i_911_ = v___x_926_;
v_b_912_ = v___x_924_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3_spec__7___redArg___boxed(lean_object* v_as_936_, lean_object* v_sz_937_, lean_object* v_i_938_, lean_object* v_b_939_, lean_object* v___y_940_){
_start:
{
size_t v_sz_boxed_941_; size_t v_i_boxed_942_; lean_object* v_res_943_; 
v_sz_boxed_941_ = lean_unbox_usize(v_sz_937_);
lean_dec(v_sz_937_);
v_i_boxed_942_ = lean_unbox_usize(v_i_938_);
lean_dec(v_i_938_);
v_res_943_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3_spec__7___redArg(v_as_936_, v_sz_boxed_941_, v_i_boxed_942_, v_b_939_);
lean_dec_ref(v_as_936_);
return v_res_943_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3(lean_object* v_as_944_, size_t v_sz_945_, size_t v_i_946_, lean_object* v_b_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_){
_start:
{
uint8_t v___x_953_; 
v___x_953_ = lean_usize_dec_lt(v_i_946_, v_sz_945_);
if (v___x_953_ == 0)
{
lean_object* v___x_954_; 
v___x_954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_954_, 0, v_b_947_);
return v___x_954_;
}
else
{
lean_object* v_snd_955_; lean_object* v___x_957_; uint8_t v_isShared_958_; uint8_t v_isSharedCheck_973_; 
v_snd_955_ = lean_ctor_get(v_b_947_, 1);
v_isSharedCheck_973_ = !lean_is_exclusive(v_b_947_);
if (v_isSharedCheck_973_ == 0)
{
lean_object* v_unused_974_; 
v_unused_974_ = lean_ctor_get(v_b_947_, 0);
lean_dec(v_unused_974_);
v___x_957_ = v_b_947_;
v_isShared_958_ = v_isSharedCheck_973_;
goto v_resetjp_956_;
}
else
{
lean_inc(v_snd_955_);
lean_dec(v_b_947_);
v___x_957_ = lean_box(0);
v_isShared_958_ = v_isSharedCheck_973_;
goto v_resetjp_956_;
}
v_resetjp_956_:
{
lean_object* v___x_959_; lean_object* v_a_961_; lean_object* v_a_968_; 
v___x_959_ = lean_box(0);
v_a_968_ = lean_array_uget_borrowed(v_as_944_, v_i_946_);
if (lean_obj_tag(v_a_968_) == 0)
{
v_a_961_ = v_snd_955_;
goto v___jp_960_;
}
else
{
lean_object* v_val_969_; uint8_t v___x_970_; 
v_val_969_ = lean_ctor_get(v_a_968_, 0);
v___x_970_ = l_Lean_LocalDecl_isImplementationDetail(v_val_969_);
if (v___x_970_ == 0)
{
lean_object* v___x_971_; lean_object* v___x_972_; 
lean_inc(v_val_969_);
v___x_971_ = l_Lean_LocalDecl_toExpr(v_val_969_);
v___x_972_ = lean_array_push(v_snd_955_, v___x_971_);
v_a_961_ = v___x_972_;
goto v___jp_960_;
}
else
{
v_a_961_ = v_snd_955_;
goto v___jp_960_;
}
}
v___jp_960_:
{
lean_object* v___x_963_; 
if (v_isShared_958_ == 0)
{
lean_ctor_set(v___x_957_, 1, v_a_961_);
lean_ctor_set(v___x_957_, 0, v___x_959_);
v___x_963_ = v___x_957_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v___x_959_);
lean_ctor_set(v_reuseFailAlloc_967_, 1, v_a_961_);
v___x_963_ = v_reuseFailAlloc_967_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
size_t v___x_964_; size_t v___x_965_; lean_object* v___x_966_; 
v___x_964_ = ((size_t)1ULL);
v___x_965_ = lean_usize_add(v_i_946_, v___x_964_);
v___x_966_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3_spec__7___redArg(v_as_944_, v_sz_945_, v___x_965_, v___x_963_);
return v___x_966_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3___boxed(lean_object* v_as_975_, lean_object* v_sz_976_, lean_object* v_i_977_, lean_object* v_b_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_){
_start:
{
size_t v_sz_boxed_984_; size_t v_i_boxed_985_; lean_object* v_res_986_; 
v_sz_boxed_984_ = lean_unbox_usize(v_sz_976_);
lean_dec(v_sz_976_);
v_i_boxed_985_ = lean_unbox_usize(v_i_977_);
lean_dec(v_i_977_);
v_res_986_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3(v_as_975_, v_sz_boxed_984_, v_i_boxed_985_, v_b_978_, v___y_979_, v___y_980_, v___y_981_, v___y_982_);
lean_dec(v___y_982_);
lean_dec_ref(v___y_981_);
lean_dec(v___y_980_);
lean_dec_ref(v___y_979_);
lean_dec_ref(v_as_975_);
return v_res_986_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1(lean_object* v_t_987_, lean_object* v_init_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_){
_start:
{
lean_object* v_root_994_; lean_object* v_tail_995_; lean_object* v___x_996_; 
v_root_994_ = lean_ctor_get(v_t_987_, 0);
v_tail_995_ = lean_ctor_get(v_t_987_, 1);
lean_inc_ref(v_init_988_);
v___x_996_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2(v_init_988_, v_root_994_, v_init_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_);
lean_dec_ref(v_init_988_);
if (lean_obj_tag(v___x_996_) == 0)
{
lean_object* v_a_997_; lean_object* v___x_999_; uint8_t v_isShared_1000_; uint8_t v_isSharedCheck_1033_; 
v_a_997_ = lean_ctor_get(v___x_996_, 0);
v_isSharedCheck_1033_ = !lean_is_exclusive(v___x_996_);
if (v_isSharedCheck_1033_ == 0)
{
v___x_999_ = v___x_996_;
v_isShared_1000_ = v_isSharedCheck_1033_;
goto v_resetjp_998_;
}
else
{
lean_inc(v_a_997_);
lean_dec(v___x_996_);
v___x_999_ = lean_box(0);
v_isShared_1000_ = v_isSharedCheck_1033_;
goto v_resetjp_998_;
}
v_resetjp_998_:
{
if (lean_obj_tag(v_a_997_) == 0)
{
lean_object* v_a_1001_; lean_object* v___x_1003_; 
v_a_1001_ = lean_ctor_get(v_a_997_, 0);
lean_inc(v_a_1001_);
lean_dec_ref_known(v_a_997_, 1);
if (v_isShared_1000_ == 0)
{
lean_ctor_set(v___x_999_, 0, v_a_1001_);
v___x_1003_ = v___x_999_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v_a_1001_);
v___x_1003_ = v_reuseFailAlloc_1004_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
return v___x_1003_;
}
}
else
{
lean_object* v_a_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; size_t v_sz_1008_; size_t v___x_1009_; lean_object* v___x_1010_; 
lean_del_object(v___x_999_);
v_a_1005_ = lean_ctor_get(v_a_997_, 0);
lean_inc(v_a_1005_);
lean_dec_ref_known(v_a_997_, 1);
v___x_1006_ = lean_box(0);
v___x_1007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1007_, 0, v___x_1006_);
lean_ctor_set(v___x_1007_, 1, v_a_1005_);
v_sz_1008_ = lean_array_size(v_tail_995_);
v___x_1009_ = ((size_t)0ULL);
v___x_1010_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3(v_tail_995_, v_sz_1008_, v___x_1009_, v___x_1007_, v___y_989_, v___y_990_, v___y_991_, v___y_992_);
if (lean_obj_tag(v___x_1010_) == 0)
{
lean_object* v_a_1011_; lean_object* v___x_1013_; uint8_t v_isShared_1014_; uint8_t v_isSharedCheck_1024_; 
v_a_1011_ = lean_ctor_get(v___x_1010_, 0);
v_isSharedCheck_1024_ = !lean_is_exclusive(v___x_1010_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_1013_ = v___x_1010_;
v_isShared_1014_ = v_isSharedCheck_1024_;
goto v_resetjp_1012_;
}
else
{
lean_inc(v_a_1011_);
lean_dec(v___x_1010_);
v___x_1013_ = lean_box(0);
v_isShared_1014_ = v_isSharedCheck_1024_;
goto v_resetjp_1012_;
}
v_resetjp_1012_:
{
lean_object* v_fst_1015_; 
v_fst_1015_ = lean_ctor_get(v_a_1011_, 0);
if (lean_obj_tag(v_fst_1015_) == 0)
{
lean_object* v_snd_1016_; lean_object* v___x_1018_; 
v_snd_1016_ = lean_ctor_get(v_a_1011_, 1);
lean_inc(v_snd_1016_);
lean_dec(v_a_1011_);
if (v_isShared_1014_ == 0)
{
lean_ctor_set(v___x_1013_, 0, v_snd_1016_);
v___x_1018_ = v___x_1013_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v_snd_1016_);
v___x_1018_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
return v___x_1018_;
}
}
else
{
lean_object* v_val_1020_; lean_object* v___x_1022_; 
lean_inc_ref(v_fst_1015_);
lean_dec(v_a_1011_);
v_val_1020_ = lean_ctor_get(v_fst_1015_, 0);
lean_inc(v_val_1020_);
lean_dec_ref_known(v_fst_1015_, 1);
if (v_isShared_1014_ == 0)
{
lean_ctor_set(v___x_1013_, 0, v_val_1020_);
v___x_1022_ = v___x_1013_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v_val_1020_);
v___x_1022_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
return v___x_1022_;
}
}
}
}
else
{
lean_object* v_a_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1032_; 
v_a_1025_ = lean_ctor_get(v___x_1010_, 0);
v_isSharedCheck_1032_ = !lean_is_exclusive(v___x_1010_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1027_ = v___x_1010_;
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_a_1025_);
lean_dec(v___x_1010_);
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
}
}
else
{
lean_object* v_a_1034_; lean_object* v___x_1036_; uint8_t v_isShared_1037_; uint8_t v_isSharedCheck_1041_; 
v_a_1034_ = lean_ctor_get(v___x_996_, 0);
v_isSharedCheck_1041_ = !lean_is_exclusive(v___x_996_);
if (v_isSharedCheck_1041_ == 0)
{
v___x_1036_ = v___x_996_;
v_isShared_1037_ = v_isSharedCheck_1041_;
goto v_resetjp_1035_;
}
else
{
lean_inc(v_a_1034_);
lean_dec(v___x_996_);
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
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1___boxed(lean_object* v_t_1042_, lean_object* v_init_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_){
_start:
{
lean_object* v_res_1049_; 
v_res_1049_ = l_Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1(v_t_1042_, v_init_1043_, v___y_1044_, v___y_1045_, v___y_1046_, v___y_1047_);
lean_dec(v___y_1047_);
lean_dec_ref(v___y_1046_);
lean_dec(v___y_1045_);
lean_dec_ref(v___y_1044_);
lean_dec_ref(v_t_1042_);
return v_res_1049_;
}
}
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1(lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_){
_start:
{
lean_object* v_lctx_1057_; lean_object* v_decls_1058_; lean_object* v_hs_1059_; lean_object* v___x_1060_; 
v_lctx_1057_ = lean_ctor_get(v___y_1052_, 2);
v_decls_1058_ = lean_ctor_get(v_lctx_1057_, 1);
v_hs_1059_ = ((lean_object*)(l_Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1___closed__0));
v___x_1060_ = l_Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1(v_decls_1058_, v_hs_1059_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_);
return v___x_1060_;
}
}
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1___boxed(lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_){
_start:
{
lean_object* v_res_1066_; 
v_res_1066_ = l_Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1(v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_);
lean_dec(v___y_1064_);
lean_dec_ref(v___y_1063_);
lean_dec(v___y_1062_);
lean_dec_ref(v___y_1061_);
return v_res_1066_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_localHypotheses(lean_object* v_except_1069_, lean_object* v_a_1070_, lean_object* v_a_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_){
_start:
{
lean_object* v___x_1075_; 
v___x_1075_ = l_Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1(v_a_1070_, v_a_1071_, v_a_1072_, v_a_1073_);
if (lean_obj_tag(v___x_1075_) == 0)
{
lean_object* v_a_1076_; lean_object* v___x_1077_; size_t v_sz_1078_; size_t v___x_1079_; lean_object* v___x_1080_; 
v_a_1076_ = lean_ctor_get(v___x_1075_, 0);
lean_inc(v_a_1076_);
lean_dec_ref_known(v___x_1075_, 1);
v___x_1077_ = ((lean_object*)(l_Lean_Meta_Rewrites_localHypotheses___closed__0));
v_sz_1078_ = lean_array_size(v_a_1076_);
v___x_1079_ = ((size_t)0ULL);
v___x_1080_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_localHypotheses_spec__2(v_except_1069_, v_a_1076_, v_sz_1078_, v___x_1079_, v___x_1077_, v_a_1070_, v_a_1071_, v_a_1072_, v_a_1073_);
lean_dec(v_a_1076_);
return v___x_1080_;
}
else
{
lean_object* v_a_1081_; lean_object* v___x_1083_; uint8_t v_isShared_1084_; uint8_t v_isSharedCheck_1088_; 
v_a_1081_ = lean_ctor_get(v___x_1075_, 0);
v_isSharedCheck_1088_ = !lean_is_exclusive(v___x_1075_);
if (v_isSharedCheck_1088_ == 0)
{
v___x_1083_ = v___x_1075_;
v_isShared_1084_ = v_isSharedCheck_1088_;
goto v_resetjp_1082_;
}
else
{
lean_inc(v_a_1081_);
lean_dec(v___x_1075_);
v___x_1083_ = lean_box(0);
v_isShared_1084_ = v_isSharedCheck_1088_;
goto v_resetjp_1082_;
}
v_resetjp_1082_:
{
lean_object* v___x_1086_; 
if (v_isShared_1084_ == 0)
{
v___x_1086_ = v___x_1083_;
goto v_reusejp_1085_;
}
else
{
lean_object* v_reuseFailAlloc_1087_; 
v_reuseFailAlloc_1087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1087_, 0, v_a_1081_);
v___x_1086_ = v_reuseFailAlloc_1087_;
goto v_reusejp_1085_;
}
v_reusejp_1085_:
{
return v___x_1086_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_localHypotheses___boxed(lean_object* v_except_1089_, lean_object* v_a_1090_, lean_object* v_a_1091_, lean_object* v_a_1092_, lean_object* v_a_1093_, lean_object* v_a_1094_){
_start:
{
lean_object* v_res_1095_; 
v_res_1095_ = l_Lean_Meta_Rewrites_localHypotheses(v_except_1089_, v_a_1090_, v_a_1091_, v_a_1092_, v_a_1093_);
lean_dec(v_a_1093_);
lean_dec_ref(v_a_1092_);
lean_dec(v_a_1091_);
lean_dec_ref(v_a_1090_);
lean_dec(v_except_1089_);
return v_res_1095_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3_spec__7(lean_object* v_as_1096_, size_t v_sz_1097_, size_t v_i_1098_, lean_object* v_b_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_){
_start:
{
lean_object* v___x_1105_; 
v___x_1105_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3_spec__7___redArg(v_as_1096_, v_sz_1097_, v_i_1098_, v_b_1099_);
return v___x_1105_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3_spec__7___boxed(lean_object* v_as_1106_, lean_object* v_sz_1107_, lean_object* v_i_1108_, lean_object* v_b_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_){
_start:
{
size_t v_sz_boxed_1115_; size_t v_i_boxed_1116_; lean_object* v_res_1117_; 
v_sz_boxed_1115_ = lean_unbox_usize(v_sz_1107_);
lean_dec(v_sz_1107_);
v_i_boxed_1116_ = lean_unbox_usize(v_i_1108_);
lean_dec(v_i_1108_);
v_res_1117_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3_spec__7(v_as_1106_, v_sz_boxed_1115_, v_i_boxed_1116_, v_b_1109_, v___y_1110_, v___y_1111_, v___y_1112_, v___y_1113_);
lean_dec(v___y_1113_);
lean_dec_ref(v___y_1112_);
lean_dec(v___y_1111_);
lean_dec_ref(v___y_1110_);
lean_dec_ref(v_as_1106_);
return v_res_1117_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5_spec__6(lean_object* v_as_1118_, size_t v_sz_1119_, size_t v_i_1120_, lean_object* v_b_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_){
_start:
{
lean_object* v___x_1127_; 
v___x_1127_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5_spec__6___redArg(v_as_1118_, v_sz_1119_, v_i_1120_, v_b_1121_);
return v___x_1127_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5_spec__6___boxed(lean_object* v_as_1128_, lean_object* v_sz_1129_, lean_object* v_i_1130_, lean_object* v_b_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_){
_start:
{
size_t v_sz_boxed_1137_; size_t v_i_boxed_1138_; lean_object* v_res_1139_; 
v_sz_boxed_1137_ = lean_unbox_usize(v_sz_1129_);
lean_dec(v_sz_1129_);
v_i_boxed_1138_ = lean_unbox_usize(v_i_1130_);
lean_dec(v_i_1130_);
v_res_1139_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5_spec__6(v_as_1128_, v_sz_boxed_1137_, v_i_boxed_1138_, v_b_1131_, v___y_1132_, v___y_1133_, v___y_1134_, v___y_1135_);
lean_dec(v___y_1135_);
lean_dec_ref(v___y_1134_);
lean_dec(v___y_1133_);
lean_dec_ref(v___y_1132_);
lean_dec_ref(v_as_1128_);
return v_res_1139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_createModuleTreeRef(lean_object* v_a_1165_, lean_object* v_a_1166_, lean_object* v_a_1167_, lean_object* v_a_1168_){
_start:
{
lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; 
v___x_1170_ = ((lean_object*)(l_Lean_Meta_Rewrites_createModuleTreeRef___closed__0));
v___x_1171_ = ((lean_object*)(l_Lean_Meta_Rewrites_droppedKeys));
v___x_1172_ = lean_box(0);
v___x_1173_ = l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg(v___x_1170_, v___x_1171_, v___x_1172_, v_a_1165_, v_a_1166_, v_a_1167_, v_a_1168_);
return v___x_1173_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_createModuleTreeRef___boxed(lean_object* v_a_1174_, lean_object* v_a_1175_, lean_object* v_a_1176_, lean_object* v_a_1177_, lean_object* v_a_1178_){
_start:
{
lean_object* v_res_1179_; 
v_res_1179_ = l_Lean_Meta_Rewrites_createModuleTreeRef(v_a_1174_, v_a_1175_, v_a_1176_, v_a_1177_);
lean_dec(v_a_1177_);
lean_dec_ref(v_a_1176_);
lean_dec(v_a_1175_);
lean_dec_ref(v_a_1174_);
return v_res_1179_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_1824551397____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; 
v___x_1181_ = lean_box(0);
v___x_1182_ = lean_st_mk_ref(v___x_1181_);
v___x_1183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1183_, 0, v___x_1182_);
return v___x_1183_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_1824551397____hygCtx___hyg_2____boxed(lean_object* v_a_1184_){
_start:
{
lean_object* v_res_1185_; 
v_res_1185_ = l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_1824551397____hygCtx___hyg_2_();
return v_res_1185_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_constantsPerImportTask(void){
_start:
{
lean_object* v___x_1186_; 
v___x_1186_ = lean_unsigned_to_nat(6500u);
return v___x_1186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_incPrio(lean_object* v_x_1187_, lean_object* v_x_1188_){
_start:
{
lean_object* v_snd_1189_; uint8_t v___x_1190_; 
v_snd_1189_ = lean_ctor_get(v_x_1188_, 1);
v___x_1190_ = lean_unbox(v_snd_1189_);
if (v___x_1190_ == 0)
{
lean_object* v_fst_1191_; lean_object* v___x_1193_; uint8_t v_isShared_1194_; uint8_t v_isSharedCheck_1203_; 
v_fst_1191_ = lean_ctor_get(v_x_1188_, 0);
v_isSharedCheck_1203_ = !lean_is_exclusive(v_x_1188_);
if (v_isSharedCheck_1203_ == 0)
{
lean_object* v_unused_1204_; 
v_unused_1204_ = lean_ctor_get(v_x_1188_, 1);
lean_dec(v_unused_1204_);
v___x_1193_ = v_x_1188_;
v_isShared_1194_ = v_isSharedCheck_1203_;
goto v_resetjp_1192_;
}
else
{
lean_inc(v_fst_1191_);
lean_dec(v_x_1188_);
v___x_1193_ = lean_box(0);
v_isShared_1194_ = v_isSharedCheck_1203_;
goto v_resetjp_1192_;
}
v_resetjp_1192_:
{
uint8_t v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1200_; 
v___x_1195_ = 0;
v___x_1196_ = lean_unsigned_to_nat(2u);
v___x_1197_ = lean_nat_mul(v___x_1196_, v_x_1187_);
lean_dec(v_x_1187_);
v___x_1198_ = lean_box(v___x_1195_);
if (v_isShared_1194_ == 0)
{
lean_ctor_set(v___x_1193_, 1, v___x_1197_);
lean_ctor_set(v___x_1193_, 0, v___x_1198_);
v___x_1200_ = v___x_1193_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1202_; 
v_reuseFailAlloc_1202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1202_, 0, v___x_1198_);
lean_ctor_set(v_reuseFailAlloc_1202_, 1, v___x_1197_);
v___x_1200_ = v_reuseFailAlloc_1202_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
lean_object* v___x_1201_; 
v___x_1201_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1201_, 0, v_fst_1191_);
lean_ctor_set(v___x_1201_, 1, v___x_1200_);
return v___x_1201_;
}
}
}
else
{
lean_object* v_fst_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1215_; 
v_fst_1205_ = lean_ctor_get(v_x_1188_, 0);
v_isSharedCheck_1215_ = !lean_is_exclusive(v_x_1188_);
if (v_isSharedCheck_1215_ == 0)
{
lean_object* v_unused_1216_; 
v_unused_1216_ = lean_ctor_get(v_x_1188_, 1);
lean_dec(v_unused_1216_);
v___x_1207_ = v_x_1188_;
v_isShared_1208_ = v_isSharedCheck_1215_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_fst_1205_);
lean_dec(v_x_1188_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1215_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
uint8_t v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1212_; 
v___x_1209_ = 1;
v___x_1210_ = lean_box(v___x_1209_);
if (v_isShared_1208_ == 0)
{
lean_ctor_set(v___x_1207_, 1, v_x_1187_);
lean_ctor_set(v___x_1207_, 0, v___x_1210_);
v___x_1212_ = v___x_1207_;
goto v_reusejp_1211_;
}
else
{
lean_object* v_reuseFailAlloc_1214_; 
v_reuseFailAlloc_1214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1214_, 0, v___x_1210_);
lean_ctor_set(v_reuseFailAlloc_1214_, 1, v_x_1187_);
v___x_1212_ = v_reuseFailAlloc_1214_;
goto v_reusejp_1211_;
}
v_reusejp_1211_:
{
lean_object* v___x_1213_; 
v___x_1213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1213_, 0, v_fst_1205_);
lean_ctor_set(v___x_1213_, 1, v___x_1212_);
return v___x_1213_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rwFindDecls(lean_object* v_moduleRef_1218_, lean_object* v_ty_1219_, lean_object* v_a_1220_, lean_object* v_a_1221_, lean_object* v_a_1222_, lean_object* v_a_1223_){
_start:
{
lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; 
v___x_1225_ = l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_ext;
v___x_1226_ = ((lean_object*)(l_Lean_Meta_Rewrites_createModuleTreeRef___closed__0));
v___x_1227_ = ((lean_object*)(l_Lean_Meta_Rewrites_droppedKeys));
v___x_1228_ = lean_unsigned_to_nat(6500u);
v___x_1229_ = lean_box(0);
v___x_1230_ = ((lean_object*)(l_Lean_Meta_Rewrites_rwFindDecls___closed__0));
v___x_1231_ = l_Lean_Meta_LazyDiscrTree_findMatchesExt___redArg(v_moduleRef_1218_, v___x_1225_, v___x_1226_, v___x_1227_, v___x_1228_, v___x_1229_, v___x_1230_, v_ty_1219_, v_a_1220_, v_a_1221_, v_a_1222_, v_a_1223_);
return v___x_1231_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rwFindDecls___boxed(lean_object* v_moduleRef_1232_, lean_object* v_ty_1233_, lean_object* v_a_1234_, lean_object* v_a_1235_, lean_object* v_a_1236_, lean_object* v_a_1237_, lean_object* v_a_1238_){
_start:
{
lean_object* v_res_1239_; 
v_res_1239_ = l_Lean_Meta_Rewrites_rwFindDecls(v_moduleRef_1232_, v_ty_1233_, v_a_1234_, v_a_1235_, v_a_1236_, v_a_1237_);
lean_dec(v_a_1237_);
lean_dec_ref(v_a_1236_);
lean_dec(v_a_1235_);
lean_dec_ref(v_a_1234_);
return v_res_1239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__0___redArg(lean_object* v_mctx_1240_, lean_object* v_x_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_){
_start:
{
lean_object* v___x_1247_; 
v___x_1247_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMCtxImp(lean_box(0), v_mctx_1240_, v_x_1241_, v___y_1242_, v___y_1243_, v___y_1244_, v___y_1245_);
if (lean_obj_tag(v___x_1247_) == 0)
{
lean_object* v_a_1248_; lean_object* v___x_1250_; uint8_t v_isShared_1251_; uint8_t v_isSharedCheck_1255_; 
v_a_1248_ = lean_ctor_get(v___x_1247_, 0);
v_isSharedCheck_1255_ = !lean_is_exclusive(v___x_1247_);
if (v_isSharedCheck_1255_ == 0)
{
v___x_1250_ = v___x_1247_;
v_isShared_1251_ = v_isSharedCheck_1255_;
goto v_resetjp_1249_;
}
else
{
lean_inc(v_a_1248_);
lean_dec(v___x_1247_);
v___x_1250_ = lean_box(0);
v_isShared_1251_ = v_isSharedCheck_1255_;
goto v_resetjp_1249_;
}
v_resetjp_1249_:
{
lean_object* v___x_1253_; 
if (v_isShared_1251_ == 0)
{
v___x_1253_ = v___x_1250_;
goto v_reusejp_1252_;
}
else
{
lean_object* v_reuseFailAlloc_1254_; 
v_reuseFailAlloc_1254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1254_, 0, v_a_1248_);
v___x_1253_ = v_reuseFailAlloc_1254_;
goto v_reusejp_1252_;
}
v_reusejp_1252_:
{
return v___x_1253_;
}
}
}
else
{
lean_object* v_a_1256_; lean_object* v___x_1258_; uint8_t v_isShared_1259_; uint8_t v_isSharedCheck_1263_; 
v_a_1256_ = lean_ctor_get(v___x_1247_, 0);
v_isSharedCheck_1263_ = !lean_is_exclusive(v___x_1247_);
if (v_isSharedCheck_1263_ == 0)
{
v___x_1258_ = v___x_1247_;
v_isShared_1259_ = v_isSharedCheck_1263_;
goto v_resetjp_1257_;
}
else
{
lean_inc(v_a_1256_);
lean_dec(v___x_1247_);
v___x_1258_ = lean_box(0);
v_isShared_1259_ = v_isSharedCheck_1263_;
goto v_resetjp_1257_;
}
v_resetjp_1257_:
{
lean_object* v___x_1261_; 
if (v_isShared_1259_ == 0)
{
v___x_1261_ = v___x_1258_;
goto v_reusejp_1260_;
}
else
{
lean_object* v_reuseFailAlloc_1262_; 
v_reuseFailAlloc_1262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1262_, 0, v_a_1256_);
v___x_1261_ = v_reuseFailAlloc_1262_;
goto v_reusejp_1260_;
}
v_reusejp_1260_:
{
return v___x_1261_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__0___redArg___boxed(lean_object* v_mctx_1264_, lean_object* v_x_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_){
_start:
{
lean_object* v_res_1271_; 
v_res_1271_ = l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__0___redArg(v_mctx_1264_, v_x_1265_, v___y_1266_, v___y_1267_, v___y_1268_, v___y_1269_);
lean_dec(v___y_1269_);
lean_dec_ref(v___y_1268_);
lean_dec(v___y_1267_);
lean_dec_ref(v___y_1266_);
return v_res_1271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__0(lean_object* v_00_u03b1_1272_, lean_object* v_mctx_1273_, lean_object* v_x_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_){
_start:
{
lean_object* v___x_1280_; 
v___x_1280_ = l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__0___redArg(v_mctx_1273_, v_x_1274_, v___y_1275_, v___y_1276_, v___y_1277_, v___y_1278_);
return v___x_1280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__0___boxed(lean_object* v_00_u03b1_1281_, lean_object* v_mctx_1282_, lean_object* v_x_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_){
_start:
{
lean_object* v_res_1289_; 
v_res_1289_ = l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__0(v_00_u03b1_1281_, v_mctx_1282_, v_x_1283_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_);
lean_dec(v___y_1287_);
lean_dec_ref(v___y_1286_);
lean_dec(v___y_1285_);
lean_dec_ref(v___y_1284_);
return v_res_1289_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__1___redArg(lean_object* v_x_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_){
_start:
{
lean_object* v___x_1296_; 
v___x_1296_ = l_Lean_Meta_saveState___redArg(v___y_1292_, v___y_1294_);
if (lean_obj_tag(v___x_1296_) == 0)
{
lean_object* v_a_1297_; lean_object* v_r_1298_; 
v_a_1297_ = lean_ctor_get(v___x_1296_, 0);
lean_inc(v_a_1297_);
lean_dec_ref_known(v___x_1296_, 1);
lean_inc(v___y_1294_);
lean_inc_ref(v___y_1293_);
lean_inc(v___y_1292_);
lean_inc_ref(v___y_1291_);
v_r_1298_ = lean_apply_5(v_x_1290_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_, lean_box(0));
if (lean_obj_tag(v_r_1298_) == 0)
{
lean_object* v_a_1299_; lean_object* v___x_1300_; 
v_a_1299_ = lean_ctor_get(v_r_1298_, 0);
lean_inc(v_a_1299_);
lean_dec_ref_known(v_r_1298_, 1);
v___x_1300_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1297_, v___y_1292_, v___y_1294_);
if (lean_obj_tag(v___x_1300_) == 0)
{
lean_object* v___x_1302_; uint8_t v_isShared_1303_; uint8_t v_isSharedCheck_1307_; 
v_isSharedCheck_1307_ = !lean_is_exclusive(v___x_1300_);
if (v_isSharedCheck_1307_ == 0)
{
lean_object* v_unused_1308_; 
v_unused_1308_ = lean_ctor_get(v___x_1300_, 0);
lean_dec(v_unused_1308_);
v___x_1302_ = v___x_1300_;
v_isShared_1303_ = v_isSharedCheck_1307_;
goto v_resetjp_1301_;
}
else
{
lean_dec(v___x_1300_);
v___x_1302_ = lean_box(0);
v_isShared_1303_ = v_isSharedCheck_1307_;
goto v_resetjp_1301_;
}
v_resetjp_1301_:
{
lean_object* v___x_1305_; 
if (v_isShared_1303_ == 0)
{
lean_ctor_set(v___x_1302_, 0, v_a_1299_);
v___x_1305_ = v___x_1302_;
goto v_reusejp_1304_;
}
else
{
lean_object* v_reuseFailAlloc_1306_; 
v_reuseFailAlloc_1306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1306_, 0, v_a_1299_);
v___x_1305_ = v_reuseFailAlloc_1306_;
goto v_reusejp_1304_;
}
v_reusejp_1304_:
{
return v___x_1305_;
}
}
}
else
{
lean_object* v_a_1309_; lean_object* v___x_1311_; uint8_t v_isShared_1312_; uint8_t v_isSharedCheck_1316_; 
lean_dec(v_a_1299_);
v_a_1309_ = lean_ctor_get(v___x_1300_, 0);
v_isSharedCheck_1316_ = !lean_is_exclusive(v___x_1300_);
if (v_isSharedCheck_1316_ == 0)
{
v___x_1311_ = v___x_1300_;
v_isShared_1312_ = v_isSharedCheck_1316_;
goto v_resetjp_1310_;
}
else
{
lean_inc(v_a_1309_);
lean_dec(v___x_1300_);
v___x_1311_ = lean_box(0);
v_isShared_1312_ = v_isSharedCheck_1316_;
goto v_resetjp_1310_;
}
v_resetjp_1310_:
{
lean_object* v___x_1314_; 
if (v_isShared_1312_ == 0)
{
v___x_1314_ = v___x_1311_;
goto v_reusejp_1313_;
}
else
{
lean_object* v_reuseFailAlloc_1315_; 
v_reuseFailAlloc_1315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1315_, 0, v_a_1309_);
v___x_1314_ = v_reuseFailAlloc_1315_;
goto v_reusejp_1313_;
}
v_reusejp_1313_:
{
return v___x_1314_;
}
}
}
}
else
{
lean_object* v_a_1317_; lean_object* v___x_1318_; 
v_a_1317_ = lean_ctor_get(v_r_1298_, 0);
lean_inc(v_a_1317_);
lean_dec_ref_known(v_r_1298_, 1);
v___x_1318_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1297_, v___y_1292_, v___y_1294_);
if (lean_obj_tag(v___x_1318_) == 0)
{
lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1325_; 
v_isSharedCheck_1325_ = !lean_is_exclusive(v___x_1318_);
if (v_isSharedCheck_1325_ == 0)
{
lean_object* v_unused_1326_; 
v_unused_1326_ = lean_ctor_get(v___x_1318_, 0);
lean_dec(v_unused_1326_);
v___x_1320_ = v___x_1318_;
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
else
{
lean_dec(v___x_1318_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___x_1323_; 
if (v_isShared_1321_ == 0)
{
lean_ctor_set_tag(v___x_1320_, 1);
lean_ctor_set(v___x_1320_, 0, v_a_1317_);
v___x_1323_ = v___x_1320_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v_a_1317_);
v___x_1323_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
return v___x_1323_;
}
}
}
else
{
lean_object* v_a_1327_; lean_object* v___x_1329_; uint8_t v_isShared_1330_; uint8_t v_isSharedCheck_1334_; 
lean_dec(v_a_1317_);
v_a_1327_ = lean_ctor_get(v___x_1318_, 0);
v_isSharedCheck_1334_ = !lean_is_exclusive(v___x_1318_);
if (v_isSharedCheck_1334_ == 0)
{
v___x_1329_ = v___x_1318_;
v_isShared_1330_ = v_isSharedCheck_1334_;
goto v_resetjp_1328_;
}
else
{
lean_inc(v_a_1327_);
lean_dec(v___x_1318_);
v___x_1329_ = lean_box(0);
v_isShared_1330_ = v_isSharedCheck_1334_;
goto v_resetjp_1328_;
}
v_resetjp_1328_:
{
lean_object* v___x_1332_; 
if (v_isShared_1330_ == 0)
{
v___x_1332_ = v___x_1329_;
goto v_reusejp_1331_;
}
else
{
lean_object* v_reuseFailAlloc_1333_; 
v_reuseFailAlloc_1333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1333_, 0, v_a_1327_);
v___x_1332_ = v_reuseFailAlloc_1333_;
goto v_reusejp_1331_;
}
v_reusejp_1331_:
{
return v___x_1332_;
}
}
}
}
}
else
{
lean_object* v_a_1335_; lean_object* v___x_1337_; uint8_t v_isShared_1338_; uint8_t v_isSharedCheck_1342_; 
lean_dec_ref(v_x_1290_);
v_a_1335_ = lean_ctor_get(v___x_1296_, 0);
v_isSharedCheck_1342_ = !lean_is_exclusive(v___x_1296_);
if (v_isSharedCheck_1342_ == 0)
{
v___x_1337_ = v___x_1296_;
v_isShared_1338_ = v_isSharedCheck_1342_;
goto v_resetjp_1336_;
}
else
{
lean_inc(v_a_1335_);
lean_dec(v___x_1296_);
v___x_1337_ = lean_box(0);
v_isShared_1338_ = v_isSharedCheck_1342_;
goto v_resetjp_1336_;
}
v_resetjp_1336_:
{
lean_object* v___x_1340_; 
if (v_isShared_1338_ == 0)
{
v___x_1340_ = v___x_1337_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v_a_1335_);
v___x_1340_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
return v___x_1340_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__1___redArg___boxed(lean_object* v_x_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_){
_start:
{
lean_object* v_res_1349_; 
v_res_1349_ = l_Lean_withoutModifyingState___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__1___redArg(v_x_1343_, v___y_1344_, v___y_1345_, v___y_1346_, v___y_1347_);
lean_dec(v___y_1347_);
lean_dec_ref(v___y_1346_);
lean_dec(v___y_1345_);
lean_dec_ref(v___y_1344_);
return v_res_1349_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__1(lean_object* v_00_u03b1_1350_, lean_object* v_x_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_){
_start:
{
lean_object* v___x_1357_; 
v___x_1357_ = l_Lean_withoutModifyingState___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__1___redArg(v_x_1351_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_);
return v___x_1357_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__1___boxed(lean_object* v_00_u03b1_1358_, lean_object* v_x_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_){
_start:
{
lean_object* v_res_1365_; 
v_res_1365_ = l_Lean_withoutModifyingState___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__1(v_00_u03b1_1358_, v_x_1359_, v___y_1360_, v___y_1361_, v___y_1362_, v___y_1363_);
lean_dec(v___y_1363_);
lean_dec_ref(v___y_1362_);
lean_dec(v___y_1361_);
lean_dec_ref(v___y_1360_);
return v_res_1365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_dischargableWithRfl_x3f___lam__0(lean_object* v___x_1366_, uint8_t v___x_1367_, lean_object* v___x_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_){
_start:
{
lean_object* v___x_1374_; 
v___x_1374_ = l_Lean_Meta_mkFreshExprMVar(v___x_1366_, v___x_1367_, v___x_1368_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_);
if (lean_obj_tag(v___x_1374_) == 0)
{
lean_object* v_a_1375_; lean_object* v___x_1376_; uint8_t v_transparency_1377_; lean_object* v___x_1378_; uint8_t v___x_1379_; lean_object* v___y_1381_; uint8_t v___x_1399_; uint8_t v___x_1400_; 
v_a_1375_ = lean_ctor_get(v___x_1374_, 0);
lean_inc(v_a_1375_);
lean_dec_ref_known(v___x_1374_, 1);
v___x_1376_ = l_Lean_Meta_Context_config(v___y_1369_);
v_transparency_1377_ = lean_ctor_get_uint8(v___x_1376_, 9);
lean_dec_ref(v___x_1376_);
v___x_1378_ = l_Lean_Expr_mvarId_x21(v_a_1375_);
lean_dec(v_a_1375_);
v___x_1379_ = 1;
v___x_1399_ = 2;
v___x_1400_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1377_, v___x_1399_);
if (v___x_1400_ == 0)
{
lean_object* v_keyedConfig_1401_; uint8_t v_trackZetaDelta_1402_; lean_object* v_zetaDeltaSet_1403_; lean_object* v_lctx_1404_; lean_object* v_localInstances_1405_; lean_object* v_defEqCtx_x3f_1406_; lean_object* v_synthPendingDepth_1407_; lean_object* v_customCanUnfoldPredicate_x3f_1408_; uint8_t v_univApprox_1409_; uint8_t v_inTypeClassResolution_1410_; uint8_t v_cacheInferType_1411_; lean_object* v___x_1413_; uint8_t v_isShared_1414_; uint8_t v_isSharedCheck_1420_; 
v_keyedConfig_1401_ = lean_ctor_get(v___y_1369_, 0);
v_trackZetaDelta_1402_ = lean_ctor_get_uint8(v___y_1369_, sizeof(void*)*7);
v_zetaDeltaSet_1403_ = lean_ctor_get(v___y_1369_, 1);
v_lctx_1404_ = lean_ctor_get(v___y_1369_, 2);
v_localInstances_1405_ = lean_ctor_get(v___y_1369_, 3);
v_defEqCtx_x3f_1406_ = lean_ctor_get(v___y_1369_, 4);
v_synthPendingDepth_1407_ = lean_ctor_get(v___y_1369_, 5);
v_customCanUnfoldPredicate_x3f_1408_ = lean_ctor_get(v___y_1369_, 6);
v_univApprox_1409_ = lean_ctor_get_uint8(v___y_1369_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1410_ = lean_ctor_get_uint8(v___y_1369_, sizeof(void*)*7 + 2);
v_cacheInferType_1411_ = lean_ctor_get_uint8(v___y_1369_, sizeof(void*)*7 + 3);
v_isSharedCheck_1420_ = !lean_is_exclusive(v___y_1369_);
if (v_isSharedCheck_1420_ == 0)
{
v___x_1413_ = v___y_1369_;
v_isShared_1414_ = v_isSharedCheck_1420_;
goto v_resetjp_1412_;
}
else
{
lean_inc(v_customCanUnfoldPredicate_x3f_1408_);
lean_inc(v_synthPendingDepth_1407_);
lean_inc(v_defEqCtx_x3f_1406_);
lean_inc(v_localInstances_1405_);
lean_inc(v_lctx_1404_);
lean_inc(v_zetaDeltaSet_1403_);
lean_inc(v_keyedConfig_1401_);
lean_dec(v___y_1369_);
v___x_1413_ = lean_box(0);
v_isShared_1414_ = v_isSharedCheck_1420_;
goto v_resetjp_1412_;
}
v_resetjp_1412_:
{
lean_object* v___x_1415_; lean_object* v___x_1417_; 
v___x_1415_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1399_, v_keyedConfig_1401_);
if (v_isShared_1414_ == 0)
{
lean_ctor_set(v___x_1413_, 0, v___x_1415_);
v___x_1417_ = v___x_1413_;
goto v_reusejp_1416_;
}
else
{
lean_object* v_reuseFailAlloc_1419_; 
v_reuseFailAlloc_1419_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_1419_, 0, v___x_1415_);
lean_ctor_set(v_reuseFailAlloc_1419_, 1, v_zetaDeltaSet_1403_);
lean_ctor_set(v_reuseFailAlloc_1419_, 2, v_lctx_1404_);
lean_ctor_set(v_reuseFailAlloc_1419_, 3, v_localInstances_1405_);
lean_ctor_set(v_reuseFailAlloc_1419_, 4, v_defEqCtx_x3f_1406_);
lean_ctor_set(v_reuseFailAlloc_1419_, 5, v_synthPendingDepth_1407_);
lean_ctor_set(v_reuseFailAlloc_1419_, 6, v_customCanUnfoldPredicate_x3f_1408_);
lean_ctor_set_uint8(v_reuseFailAlloc_1419_, sizeof(void*)*7, v_trackZetaDelta_1402_);
lean_ctor_set_uint8(v_reuseFailAlloc_1419_, sizeof(void*)*7 + 1, v_univApprox_1409_);
lean_ctor_set_uint8(v_reuseFailAlloc_1419_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1410_);
lean_ctor_set_uint8(v_reuseFailAlloc_1419_, sizeof(void*)*7 + 3, v_cacheInferType_1411_);
v___x_1417_ = v_reuseFailAlloc_1419_;
goto v_reusejp_1416_;
}
v_reusejp_1416_:
{
lean_object* v___x_1418_; 
v___x_1418_ = l_Lean_MVarId_refl(v___x_1378_, v___x_1379_, v___x_1417_, v___y_1370_, v___y_1371_, v___y_1372_);
lean_dec_ref(v___x_1417_);
v___y_1381_ = v___x_1418_;
goto v___jp_1380_;
}
}
}
else
{
lean_object* v___x_1421_; 
v___x_1421_ = l_Lean_MVarId_refl(v___x_1378_, v___x_1379_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_);
lean_dec_ref(v___y_1369_);
v___y_1381_ = v___x_1421_;
goto v___jp_1380_;
}
v___jp_1380_:
{
if (lean_obj_tag(v___y_1381_) == 0)
{
lean_object* v___x_1383_; uint8_t v_isShared_1384_; uint8_t v_isSharedCheck_1389_; 
v_isSharedCheck_1389_ = !lean_is_exclusive(v___y_1381_);
if (v_isSharedCheck_1389_ == 0)
{
lean_object* v_unused_1390_; 
v_unused_1390_ = lean_ctor_get(v___y_1381_, 0);
lean_dec(v_unused_1390_);
v___x_1383_ = v___y_1381_;
v_isShared_1384_ = v_isSharedCheck_1389_;
goto v_resetjp_1382_;
}
else
{
lean_dec(v___y_1381_);
v___x_1383_ = lean_box(0);
v_isShared_1384_ = v_isSharedCheck_1389_;
goto v_resetjp_1382_;
}
v_resetjp_1382_:
{
lean_object* v___x_1385_; lean_object* v___x_1387_; 
v___x_1385_ = lean_box(v___x_1379_);
if (v_isShared_1384_ == 0)
{
lean_ctor_set(v___x_1383_, 0, v___x_1385_);
v___x_1387_ = v___x_1383_;
goto v_reusejp_1386_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v___x_1385_);
v___x_1387_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1386_;
}
v_reusejp_1386_:
{
return v___x_1387_;
}
}
}
else
{
lean_object* v_a_1391_; lean_object* v___x_1393_; uint8_t v_isShared_1394_; uint8_t v_isSharedCheck_1398_; 
v_a_1391_ = lean_ctor_get(v___y_1381_, 0);
v_isSharedCheck_1398_ = !lean_is_exclusive(v___y_1381_);
if (v_isSharedCheck_1398_ == 0)
{
v___x_1393_ = v___y_1381_;
v_isShared_1394_ = v_isSharedCheck_1398_;
goto v_resetjp_1392_;
}
else
{
lean_inc(v_a_1391_);
lean_dec(v___y_1381_);
v___x_1393_ = lean_box(0);
v_isShared_1394_ = v_isSharedCheck_1398_;
goto v_resetjp_1392_;
}
v_resetjp_1392_:
{
lean_object* v___x_1396_; 
if (v_isShared_1394_ == 0)
{
v___x_1396_ = v___x_1393_;
goto v_reusejp_1395_;
}
else
{
lean_object* v_reuseFailAlloc_1397_; 
v_reuseFailAlloc_1397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1397_, 0, v_a_1391_);
v___x_1396_ = v_reuseFailAlloc_1397_;
goto v_reusejp_1395_;
}
v_reusejp_1395_:
{
return v___x_1396_;
}
}
}
}
}
else
{
lean_object* v_a_1422_; lean_object* v___x_1424_; uint8_t v_isShared_1425_; uint8_t v_isSharedCheck_1429_; 
lean_dec_ref(v___y_1369_);
v_a_1422_ = lean_ctor_get(v___x_1374_, 0);
v_isSharedCheck_1429_ = !lean_is_exclusive(v___x_1374_);
if (v_isSharedCheck_1429_ == 0)
{
v___x_1424_ = v___x_1374_;
v_isShared_1425_ = v_isSharedCheck_1429_;
goto v_resetjp_1423_;
}
else
{
lean_inc(v_a_1422_);
lean_dec(v___x_1374_);
v___x_1424_ = lean_box(0);
v_isShared_1425_ = v_isSharedCheck_1429_;
goto v_resetjp_1423_;
}
v_resetjp_1423_:
{
lean_object* v___x_1427_; 
if (v_isShared_1425_ == 0)
{
v___x_1427_ = v___x_1424_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v_a_1422_);
v___x_1427_ = v_reuseFailAlloc_1428_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
return v___x_1427_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_dischargableWithRfl_x3f___lam__0___boxed(lean_object* v___x_1430_, lean_object* v___x_1431_, lean_object* v___x_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_){
_start:
{
uint8_t v___x_2255__boxed_1438_; lean_object* v_res_1439_; 
v___x_2255__boxed_1438_ = lean_unbox(v___x_1431_);
v_res_1439_ = l_Lean_Meta_Rewrites_dischargableWithRfl_x3f___lam__0(v___x_1430_, v___x_2255__boxed_1438_, v___x_1432_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_);
lean_dec(v___y_1436_);
lean_dec_ref(v___y_1435_);
lean_dec(v___y_1434_);
return v_res_1439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_dischargableWithRfl_x3f(lean_object* v_mctx_1440_, lean_object* v_e_1441_, lean_object* v_a_1442_, lean_object* v_a_1443_, lean_object* v_a_1444_, lean_object* v_a_1445_){
_start:
{
lean_object* v___x_1447_; uint8_t v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___f_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; 
v___x_1447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1447_, 0, v_e_1441_);
v___x_1448_ = 0;
v___x_1449_ = lean_box(0);
v___x_1450_ = lean_box(v___x_1448_);
v___f_1451_ = lean_alloc_closure((void*)(l_Lean_Meta_Rewrites_dischargableWithRfl_x3f___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1451_, 0, v___x_1447_);
lean_closure_set(v___f_1451_, 1, v___x_1450_);
lean_closure_set(v___f_1451_, 2, v___x_1449_);
v___x_1452_ = lean_alloc_closure((void*)(l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__0___boxed), 8, 3);
lean_closure_set(v___x_1452_, 0, lean_box(0));
lean_closure_set(v___x_1452_, 1, v_mctx_1440_);
lean_closure_set(v___x_1452_, 2, v___f_1451_);
v___x_1453_ = l_Lean_withoutModifyingState___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__1___redArg(v___x_1452_, v_a_1442_, v_a_1443_, v_a_1444_, v_a_1445_);
if (lean_obj_tag(v___x_1453_) == 0)
{
return v___x_1453_;
}
else
{
lean_object* v_a_1454_; uint8_t v___x_1455_; 
v_a_1454_ = lean_ctor_get(v___x_1453_, 0);
v___x_1455_ = l_Lean_Exception_isInterrupt(v_a_1454_);
if (v___x_1455_ == 0)
{
uint8_t v___x_1456_; 
lean_inc(v_a_1454_);
v___x_1456_ = l_Lean_Exception_isRuntime(v_a_1454_);
if (v___x_1456_ == 0)
{
lean_object* v___x_1458_; uint8_t v_isShared_1459_; uint8_t v_isSharedCheck_1464_; 
v_isSharedCheck_1464_ = !lean_is_exclusive(v___x_1453_);
if (v_isSharedCheck_1464_ == 0)
{
lean_object* v_unused_1465_; 
v_unused_1465_ = lean_ctor_get(v___x_1453_, 0);
lean_dec(v_unused_1465_);
v___x_1458_ = v___x_1453_;
v_isShared_1459_ = v_isSharedCheck_1464_;
goto v_resetjp_1457_;
}
else
{
lean_dec(v___x_1453_);
v___x_1458_ = lean_box(0);
v_isShared_1459_ = v_isSharedCheck_1464_;
goto v_resetjp_1457_;
}
v_resetjp_1457_:
{
lean_object* v___x_1460_; lean_object* v___x_1462_; 
v___x_1460_ = lean_box(v___x_1456_);
if (v_isShared_1459_ == 0)
{
lean_ctor_set_tag(v___x_1458_, 0);
lean_ctor_set(v___x_1458_, 0, v___x_1460_);
v___x_1462_ = v___x_1458_;
goto v_reusejp_1461_;
}
else
{
lean_object* v_reuseFailAlloc_1463_; 
v_reuseFailAlloc_1463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1463_, 0, v___x_1460_);
v___x_1462_ = v_reuseFailAlloc_1463_;
goto v_reusejp_1461_;
}
v_reusejp_1461_:
{
return v___x_1462_;
}
}
}
else
{
return v___x_1453_;
}
}
else
{
return v___x_1453_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_dischargableWithRfl_x3f___boxed(lean_object* v_mctx_1466_, lean_object* v_e_1467_, lean_object* v_a_1468_, lean_object* v_a_1469_, lean_object* v_a_1470_, lean_object* v_a_1471_, lean_object* v_a_1472_){
_start:
{
lean_object* v_res_1473_; 
v_res_1473_ = l_Lean_Meta_Rewrites_dischargableWithRfl_x3f(v_mctx_1466_, v_e_1467_, v_a_1468_, v_a_1469_, v_a_1470_, v_a_1471_);
lean_dec(v_a_1471_);
lean_dec_ref(v_a_1470_);
lean_dec(v_a_1469_);
lean_dec_ref(v_a_1468_);
return v_res_1473_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_RewriteResult_ppResult(lean_object* v_r_1474_, lean_object* v_a_1475_, lean_object* v_a_1476_, lean_object* v_a_1477_, lean_object* v_a_1478_){
_start:
{
lean_object* v_result_1480_; lean_object* v_eNew_1481_; lean_object* v___x_1482_; 
v_result_1480_ = lean_ctor_get(v_r_1474_, 2);
lean_inc_ref(v_result_1480_);
lean_dec_ref(v_r_1474_);
v_eNew_1481_ = lean_ctor_get(v_result_1480_, 0);
lean_inc_ref(v_eNew_1481_);
lean_dec_ref(v_result_1480_);
v___x_1482_ = l_Lean_Meta_ppExpr(v_eNew_1481_, v_a_1475_, v_a_1476_, v_a_1477_, v_a_1478_);
if (lean_obj_tag(v___x_1482_) == 0)
{
lean_object* v_a_1483_; lean_object* v___x_1485_; uint8_t v_isShared_1486_; uint8_t v_isSharedCheck_1493_; 
v_a_1483_ = lean_ctor_get(v___x_1482_, 0);
v_isSharedCheck_1493_ = !lean_is_exclusive(v___x_1482_);
if (v_isSharedCheck_1493_ == 0)
{
v___x_1485_ = v___x_1482_;
v_isShared_1486_ = v_isSharedCheck_1493_;
goto v_resetjp_1484_;
}
else
{
lean_inc(v_a_1483_);
lean_dec(v___x_1482_);
v___x_1485_ = lean_box(0);
v_isShared_1486_ = v_isSharedCheck_1493_;
goto v_resetjp_1484_;
}
v_resetjp_1484_:
{
lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1491_; 
v___x_1487_ = l_Std_Format_defWidth;
v___x_1488_ = lean_unsigned_to_nat(0u);
v___x_1489_ = l_Std_Format_pretty(v_a_1483_, v___x_1487_, v___x_1488_, v___x_1488_);
if (v_isShared_1486_ == 0)
{
lean_ctor_set(v___x_1485_, 0, v___x_1489_);
v___x_1491_ = v___x_1485_;
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
lean_object* v_a_1494_; lean_object* v___x_1496_; uint8_t v_isShared_1497_; uint8_t v_isSharedCheck_1501_; 
v_a_1494_ = lean_ctor_get(v___x_1482_, 0);
v_isSharedCheck_1501_ = !lean_is_exclusive(v___x_1482_);
if (v_isSharedCheck_1501_ == 0)
{
v___x_1496_ = v___x_1482_;
v_isShared_1497_ = v_isSharedCheck_1501_;
goto v_resetjp_1495_;
}
else
{
lean_inc(v_a_1494_);
lean_dec(v___x_1482_);
v___x_1496_ = lean_box(0);
v_isShared_1497_ = v_isSharedCheck_1501_;
goto v_resetjp_1495_;
}
v_resetjp_1495_:
{
lean_object* v___x_1499_; 
if (v_isShared_1497_ == 0)
{
v___x_1499_ = v___x_1496_;
goto v_reusejp_1498_;
}
else
{
lean_object* v_reuseFailAlloc_1500_; 
v_reuseFailAlloc_1500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1500_, 0, v_a_1494_);
v___x_1499_ = v_reuseFailAlloc_1500_;
goto v_reusejp_1498_;
}
v_reusejp_1498_:
{
return v___x_1499_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_RewriteResult_ppResult___boxed(lean_object* v_r_1502_, lean_object* v_a_1503_, lean_object* v_a_1504_, lean_object* v_a_1505_, lean_object* v_a_1506_, lean_object* v_a_1507_){
_start:
{
lean_object* v_res_1508_; 
v_res_1508_ = l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_RewriteResult_ppResult(v_r_1502_, v_a_1503_, v_a_1504_, v_a_1505_, v_a_1506_);
lean_dec(v_a_1506_);
lean_dec_ref(v_a_1505_);
lean_dec(v_a_1504_);
lean_dec_ref(v_a_1503_);
return v_res_1508_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_ctorIdx___impl(uint8_t v_x_1509_){
_start:
{
lean_object* v___x_1510_; lean_object* v___x_1511_; 
v___x_1510_ = lean_box(v_x_1509_);
v___x_1511_ = lean_obj_tag_nat(v___x_1510_);
lean_dec(v___x_1510_);
return v___x_1511_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_ctorIdx___impl___boxed(lean_object* v_x_1512_){
_start:
{
uint8_t v_x_4__boxed_1513_; lean_object* v_res_1514_; 
v_x_4__boxed_1513_ = lean_unbox(v_x_1512_);
v_res_1514_ = l_Lean_Meta_Rewrites_SideConditions_ctorIdx___impl(v_x_4__boxed_1513_);
return v_res_1514_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_ctorElim___redArg(lean_object* v_k_1515_){
_start:
{
lean_inc(v_k_1515_);
return v_k_1515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_ctorElim___redArg___boxed(lean_object* v_k_1516_){
_start:
{
lean_object* v_res_1517_; 
v_res_1517_ = l_Lean_Meta_Rewrites_SideConditions_ctorElim___redArg(v_k_1516_);
lean_dec(v_k_1516_);
return v_res_1517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_ctorElim(lean_object* v_motive_1518_, lean_object* v_ctorIdx_1519_, uint8_t v_t_1520_, lean_object* v_h_1521_, lean_object* v_k_1522_){
_start:
{
lean_inc(v_k_1522_);
return v_k_1522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_ctorElim___boxed(lean_object* v_motive_1523_, lean_object* v_ctorIdx_1524_, lean_object* v_t_1525_, lean_object* v_h_1526_, lean_object* v_k_1527_){
_start:
{
uint8_t v_t_boxed_1528_; lean_object* v_res_1529_; 
v_t_boxed_1528_ = lean_unbox(v_t_1525_);
v_res_1529_ = l_Lean_Meta_Rewrites_SideConditions_ctorElim(v_motive_1523_, v_ctorIdx_1524_, v_t_boxed_1528_, v_h_1526_, v_k_1527_);
lean_dec(v_k_1527_);
lean_dec(v_ctorIdx_1524_);
return v_res_1529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_none_elim___redArg(lean_object* v_none_1530_){
_start:
{
lean_inc(v_none_1530_);
return v_none_1530_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_none_elim___redArg___boxed(lean_object* v_none_1531_){
_start:
{
lean_object* v_res_1532_; 
v_res_1532_ = l_Lean_Meta_Rewrites_SideConditions_none_elim___redArg(v_none_1531_);
lean_dec(v_none_1531_);
return v_res_1532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_none_elim(lean_object* v_motive_1533_, uint8_t v_t_1534_, lean_object* v_h_1535_, lean_object* v_none_1536_){
_start:
{
lean_inc(v_none_1536_);
return v_none_1536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_none_elim___boxed(lean_object* v_motive_1537_, lean_object* v_t_1538_, lean_object* v_h_1539_, lean_object* v_none_1540_){
_start:
{
uint8_t v_t_boxed_1541_; lean_object* v_res_1542_; 
v_t_boxed_1541_ = lean_unbox(v_t_1538_);
v_res_1542_ = l_Lean_Meta_Rewrites_SideConditions_none_elim(v_motive_1537_, v_t_boxed_1541_, v_h_1539_, v_none_1540_);
lean_dec(v_none_1540_);
return v_res_1542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_assumption_elim___redArg(lean_object* v_assumption_1543_){
_start:
{
lean_inc(v_assumption_1543_);
return v_assumption_1543_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_assumption_elim___redArg___boxed(lean_object* v_assumption_1544_){
_start:
{
lean_object* v_res_1545_; 
v_res_1545_ = l_Lean_Meta_Rewrites_SideConditions_assumption_elim___redArg(v_assumption_1544_);
lean_dec(v_assumption_1544_);
return v_res_1545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_assumption_elim(lean_object* v_motive_1546_, uint8_t v_t_1547_, lean_object* v_h_1548_, lean_object* v_assumption_1549_){
_start:
{
lean_inc(v_assumption_1549_);
return v_assumption_1549_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_assumption_elim___boxed(lean_object* v_motive_1550_, lean_object* v_t_1551_, lean_object* v_h_1552_, lean_object* v_assumption_1553_){
_start:
{
uint8_t v_t_boxed_1554_; lean_object* v_res_1555_; 
v_t_boxed_1554_ = lean_unbox(v_t_1551_);
v_res_1555_ = l_Lean_Meta_Rewrites_SideConditions_assumption_elim(v_motive_1550_, v_t_boxed_1554_, v_h_1552_, v_assumption_1553_);
lean_dec(v_assumption_1553_);
return v_res_1555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_solveByElim_elim___redArg(lean_object* v_solveByElim_1556_){
_start:
{
lean_inc(v_solveByElim_1556_);
return v_solveByElim_1556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_solveByElim_elim___redArg___boxed(lean_object* v_solveByElim_1557_){
_start:
{
lean_object* v_res_1558_; 
v_res_1558_ = l_Lean_Meta_Rewrites_SideConditions_solveByElim_elim___redArg(v_solveByElim_1557_);
lean_dec(v_solveByElim_1557_);
return v_res_1558_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_solveByElim_elim(lean_object* v_motive_1559_, uint8_t v_t_1560_, lean_object* v_h_1561_, lean_object* v_solveByElim_1562_){
_start:
{
lean_inc(v_solveByElim_1562_);
return v_solveByElim_1562_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_solveByElim_elim___boxed(lean_object* v_motive_1563_, lean_object* v_t_1564_, lean_object* v_h_1565_, lean_object* v_solveByElim_1566_){
_start:
{
uint8_t v_t_boxed_1567_; lean_object* v_res_1568_; 
v_t_boxed_1567_ = lean_unbox(v_t_1564_);
v_res_1568_ = l_Lean_Meta_Rewrites_SideConditions_solveByElim_elim(v_motive_1563_, v_t_boxed_1567_, v_h_1565_, v_solveByElim_1566_);
lean_dec(v_solveByElim_1566_);
return v_res_1568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_solveByElim___lam__0(lean_object* v_x_1569_, lean_object* v_x_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_){
_start:
{
lean_object* v___x_1576_; lean_object* v___x_1577_; 
v___x_1576_ = lean_box(0);
v___x_1577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1577_, 0, v___x_1576_);
return v___x_1577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_solveByElim___lam__0___boxed(lean_object* v_x_1578_, lean_object* v_x_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_){
_start:
{
lean_object* v_res_1585_; 
v_res_1585_ = l_Lean_Meta_Rewrites_solveByElim___lam__0(v_x_1578_, v_x_1579_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_);
lean_dec(v___y_1583_);
lean_dec_ref(v___y_1582_);
lean_dec(v___y_1581_);
lean_dec_ref(v___y_1580_);
lean_dec(v_x_1579_);
lean_dec(v_x_1578_);
return v_res_1585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_solveByElim___lam__1(lean_object* v_x_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_){
_start:
{
uint8_t v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; 
v___x_1592_ = 0;
v___x_1593_ = lean_box(v___x_1592_);
v___x_1594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1594_, 0, v___x_1593_);
return v___x_1594_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_solveByElim___lam__1___boxed(lean_object* v_x_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_){
_start:
{
lean_object* v_res_1601_; 
v_res_1601_ = l_Lean_Meta_Rewrites_solveByElim___lam__1(v_x_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_);
lean_dec(v___y_1599_);
lean_dec_ref(v___y_1598_);
lean_dec(v___y_1597_);
lean_dec_ref(v___y_1596_);
lean_dec(v_x_1595_);
return v_res_1601_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0_spec__0(lean_object* v_msgData_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_){
_start:
{
lean_object* v___x_1608_; lean_object* v_env_1609_; uint8_t v___x_1610_; lean_object* v_env_1611_; lean_object* v___x_1612_; lean_object* v_toCold_1613_; lean_object* v_mctx_1614_; lean_object* v_lctx_1615_; lean_object* v_options_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; 
v___x_1608_ = lean_st_ref_get(v___y_1606_);
v_env_1609_ = lean_ctor_get(v___x_1608_, 0);
lean_inc_ref(v_env_1609_);
lean_dec(v___x_1608_);
v___x_1610_ = 0;
v_env_1611_ = l_Lean_Environment_setRecordingDeps(v_env_1609_, v___x_1610_);
v___x_1612_ = lean_st_ref_get(v___y_1604_);
v_toCold_1613_ = lean_ctor_get(v___y_1605_, 0);
v_mctx_1614_ = lean_ctor_get(v___x_1612_, 0);
lean_inc_ref(v_mctx_1614_);
lean_dec(v___x_1612_);
v_lctx_1615_ = lean_ctor_get(v___y_1603_, 2);
v_options_1616_ = lean_ctor_get(v_toCold_1613_, 2);
lean_inc_ref(v_options_1616_);
lean_inc_ref(v_lctx_1615_);
v___x_1617_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1617_, 0, v_env_1611_);
lean_ctor_set(v___x_1617_, 1, v_mctx_1614_);
lean_ctor_set(v___x_1617_, 2, v_lctx_1615_);
lean_ctor_set(v___x_1617_, 3, v_options_1616_);
v___x_1618_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1618_, 0, v___x_1617_);
lean_ctor_set(v___x_1618_, 1, v_msgData_1602_);
v___x_1619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1619_, 0, v___x_1618_);
return v___x_1619_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0_spec__0___boxed(lean_object* v_msgData_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_){
_start:
{
lean_object* v_res_1626_; 
v_res_1626_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0_spec__0(v_msgData_1620_, v___y_1621_, v___y_1622_, v___y_1623_, v___y_1624_);
lean_dec(v___y_1624_);
lean_dec_ref(v___y_1623_);
lean_dec(v___y_1622_);
lean_dec_ref(v___y_1621_);
return v_res_1626_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0___redArg(lean_object* v_msg_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_){
_start:
{
lean_object* v_ref_1633_; lean_object* v___x_1634_; lean_object* v_a_1635_; lean_object* v___x_1637_; uint8_t v_isShared_1638_; uint8_t v_isSharedCheck_1643_; 
v_ref_1633_ = lean_ctor_get(v___y_1630_, 2);
v___x_1634_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0_spec__0(v_msg_1627_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_);
v_a_1635_ = lean_ctor_get(v___x_1634_, 0);
v_isSharedCheck_1643_ = !lean_is_exclusive(v___x_1634_);
if (v_isSharedCheck_1643_ == 0)
{
v___x_1637_ = v___x_1634_;
v_isShared_1638_ = v_isSharedCheck_1643_;
goto v_resetjp_1636_;
}
else
{
lean_inc(v_a_1635_);
lean_dec(v___x_1634_);
v___x_1637_ = lean_box(0);
v_isShared_1638_ = v_isSharedCheck_1643_;
goto v_resetjp_1636_;
}
v_resetjp_1636_:
{
lean_object* v___x_1639_; lean_object* v___x_1641_; 
lean_inc(v_ref_1633_);
v___x_1639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1639_, 0, v_ref_1633_);
lean_ctor_set(v___x_1639_, 1, v_a_1635_);
if (v_isShared_1638_ == 0)
{
lean_ctor_set_tag(v___x_1637_, 1);
lean_ctor_set(v___x_1637_, 0, v___x_1639_);
v___x_1641_ = v___x_1637_;
goto v_reusejp_1640_;
}
else
{
lean_object* v_reuseFailAlloc_1642_; 
v_reuseFailAlloc_1642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1642_, 0, v___x_1639_);
v___x_1641_ = v_reuseFailAlloc_1642_;
goto v_reusejp_1640_;
}
v_reusejp_1640_:
{
return v___x_1641_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0___redArg___boxed(lean_object* v_msg_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_){
_start:
{
lean_object* v_res_1650_; 
v_res_1650_ = l_Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0___redArg(v_msg_1644_, v___y_1645_, v___y_1646_, v___y_1647_, v___y_1648_);
lean_dec(v___y_1648_);
lean_dec_ref(v___y_1647_);
lean_dec(v___y_1646_);
lean_dec_ref(v___y_1645_);
return v_res_1650_;
}
}
static lean_object* _init_l_Lean_Meta_Rewrites_solveByElim___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1652_; lean_object* v___x_1653_; 
v___x_1652_ = ((lean_object*)(l_Lean_Meta_Rewrites_solveByElim___lam__2___closed__0));
v___x_1653_ = l_Lean_stringToMessageData(v___x_1652_);
return v___x_1653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_solveByElim___lam__2(lean_object* v_x_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_){
_start:
{
lean_object* v___x_1660_; lean_object* v___x_1661_; 
v___x_1660_ = lean_obj_once(&l_Lean_Meta_Rewrites_solveByElim___lam__2___closed__1, &l_Lean_Meta_Rewrites_solveByElim___lam__2___closed__1_once, _init_l_Lean_Meta_Rewrites_solveByElim___lam__2___closed__1);
v___x_1661_ = l_Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0___redArg(v___x_1660_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_);
return v___x_1661_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_solveByElim___lam__2___boxed(lean_object* v_x_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_){
_start:
{
lean_object* v_res_1668_; 
v_res_1668_ = l_Lean_Meta_Rewrites_solveByElim___lam__2(v_x_1662_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_);
lean_dec(v___y_1666_);
lean_dec_ref(v___y_1665_);
lean_dec(v___y_1664_);
lean_dec_ref(v___y_1663_);
lean_dec(v_x_1662_);
return v_res_1668_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_solveByElim(lean_object* v_goals_1678_, lean_object* v_depth_1679_, lean_object* v_a_1680_, lean_object* v_a_1681_, lean_object* v_a_1682_, lean_object* v_a_1683_){
_start:
{
lean_object* v___f_1685_; lean_object* v___f_1686_; lean_object* v___f_1687_; uint8_t v___x_1688_; lean_object* v___x_1689_; uint8_t v___x_1690_; lean_object* v___x_1691_; uint8_t v___x_1692_; lean_object* v___x_1693_; lean_object* v_cfg_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; 
v___f_1685_ = ((lean_object*)(l_Lean_Meta_Rewrites_solveByElim___closed__0));
v___f_1686_ = ((lean_object*)(l_Lean_Meta_Rewrites_solveByElim___closed__1));
v___f_1687_ = ((lean_object*)(l_Lean_Meta_Rewrites_solveByElim___closed__2));
v___x_1688_ = 0;
v___x_1689_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1689_, 0, v_depth_1679_);
lean_ctor_set(v___x_1689_, 1, v___f_1685_);
lean_ctor_set(v___x_1689_, 2, v___f_1686_);
lean_ctor_set(v___x_1689_, 3, v___f_1687_);
lean_ctor_set_uint8(v___x_1689_, sizeof(void*)*4, v___x_1688_);
v___x_1690_ = 1;
v___x_1691_ = ((lean_object*)(l_Lean_Meta_Rewrites_solveByElim___closed__3));
v___x_1692_ = 1;
v___x_1693_ = lean_alloc_ctor(0, 2, 3);
lean_ctor_set(v___x_1693_, 0, v___x_1689_);
lean_ctor_set(v___x_1693_, 1, v___x_1691_);
lean_ctor_set_uint8(v___x_1693_, sizeof(void*)*2, v___x_1692_);
lean_ctor_set_uint8(v___x_1693_, sizeof(void*)*2 + 1, v___x_1690_);
lean_ctor_set_uint8(v___x_1693_, sizeof(void*)*2 + 2, v___x_1688_);
v_cfg_1694_ = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(v_cfg_1694_, 0, v___x_1693_);
lean_ctor_set_uint8(v_cfg_1694_, sizeof(void*)*1, v___x_1690_);
lean_ctor_set_uint8(v_cfg_1694_, sizeof(void*)*1 + 1, v___x_1690_);
lean_ctor_set_uint8(v_cfg_1694_, sizeof(void*)*1 + 2, v___x_1690_);
lean_ctor_set_uint8(v_cfg_1694_, sizeof(void*)*1 + 3, v___x_1688_);
v___x_1695_ = lean_box(0);
v___x_1696_ = ((lean_object*)(l_Lean_Meta_Rewrites_solveByElim___closed__4));
v___x_1697_ = l_Lean_Meta_SolveByElim_mkAssumptionSet(v___x_1688_, v___x_1688_, v___x_1695_, v___x_1695_, v___x_1696_, v_a_1680_, v_a_1681_, v_a_1682_, v_a_1683_);
if (lean_obj_tag(v___x_1697_) == 0)
{
lean_object* v_a_1698_; lean_object* v_fst_1699_; lean_object* v_snd_1700_; lean_object* v___x_1701_; 
v_a_1698_ = lean_ctor_get(v___x_1697_, 0);
lean_inc(v_a_1698_);
lean_dec_ref_known(v___x_1697_, 1);
v_fst_1699_ = lean_ctor_get(v_a_1698_, 0);
lean_inc(v_fst_1699_);
v_snd_1700_ = lean_ctor_get(v_a_1698_, 1);
lean_inc(v_snd_1700_);
lean_dec(v_a_1698_);
v___x_1701_ = l_Lean_Meta_SolveByElim_solveByElim(v_cfg_1694_, v_fst_1699_, v_snd_1700_, v_goals_1678_, v_a_1680_, v_a_1681_, v_a_1682_, v_a_1683_);
if (lean_obj_tag(v___x_1701_) == 0)
{
lean_object* v_a_1702_; lean_object* v___x_1704_; uint8_t v_isShared_1705_; uint8_t v_isSharedCheck_1712_; 
v_a_1702_ = lean_ctor_get(v___x_1701_, 0);
v_isSharedCheck_1712_ = !lean_is_exclusive(v___x_1701_);
if (v_isSharedCheck_1712_ == 0)
{
v___x_1704_ = v___x_1701_;
v_isShared_1705_ = v_isSharedCheck_1712_;
goto v_resetjp_1703_;
}
else
{
lean_inc(v_a_1702_);
lean_dec(v___x_1701_);
v___x_1704_ = lean_box(0);
v_isShared_1705_ = v_isSharedCheck_1712_;
goto v_resetjp_1703_;
}
v_resetjp_1703_:
{
if (lean_obj_tag(v_a_1702_) == 0)
{
lean_object* v___x_1706_; lean_object* v___x_1708_; 
v___x_1706_ = lean_box(0);
if (v_isShared_1705_ == 0)
{
lean_ctor_set(v___x_1704_, 0, v___x_1706_);
v___x_1708_ = v___x_1704_;
goto v_reusejp_1707_;
}
else
{
lean_object* v_reuseFailAlloc_1709_; 
v_reuseFailAlloc_1709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1709_, 0, v___x_1706_);
v___x_1708_ = v_reuseFailAlloc_1709_;
goto v_reusejp_1707_;
}
v_reusejp_1707_:
{
return v___x_1708_;
}
}
else
{
lean_object* v___x_1710_; lean_object* v___x_1711_; 
lean_del_object(v___x_1704_);
lean_dec(v_a_1702_);
v___x_1710_ = lean_obj_once(&l_Lean_Meta_Rewrites_solveByElim___lam__2___closed__1, &l_Lean_Meta_Rewrites_solveByElim___lam__2___closed__1_once, _init_l_Lean_Meta_Rewrites_solveByElim___lam__2___closed__1);
v___x_1711_ = l_Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0___redArg(v___x_1710_, v_a_1680_, v_a_1681_, v_a_1682_, v_a_1683_);
return v___x_1711_;
}
}
}
else
{
lean_object* v_a_1713_; lean_object* v___x_1715_; uint8_t v_isShared_1716_; uint8_t v_isSharedCheck_1720_; 
v_a_1713_ = lean_ctor_get(v___x_1701_, 0);
v_isSharedCheck_1720_ = !lean_is_exclusive(v___x_1701_);
if (v_isSharedCheck_1720_ == 0)
{
v___x_1715_ = v___x_1701_;
v_isShared_1716_ = v_isSharedCheck_1720_;
goto v_resetjp_1714_;
}
else
{
lean_inc(v_a_1713_);
lean_dec(v___x_1701_);
v___x_1715_ = lean_box(0);
v_isShared_1716_ = v_isSharedCheck_1720_;
goto v_resetjp_1714_;
}
v_resetjp_1714_:
{
lean_object* v___x_1718_; 
if (v_isShared_1716_ == 0)
{
v___x_1718_ = v___x_1715_;
goto v_reusejp_1717_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v_a_1713_);
v___x_1718_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1717_;
}
v_reusejp_1717_:
{
return v___x_1718_;
}
}
}
}
else
{
lean_object* v_a_1721_; lean_object* v___x_1723_; uint8_t v_isShared_1724_; uint8_t v_isSharedCheck_1728_; 
lean_dec_ref_known(v_cfg_1694_, 1);
lean_dec(v_goals_1678_);
v_a_1721_ = lean_ctor_get(v___x_1697_, 0);
v_isSharedCheck_1728_ = !lean_is_exclusive(v___x_1697_);
if (v_isSharedCheck_1728_ == 0)
{
v___x_1723_ = v___x_1697_;
v_isShared_1724_ = v_isSharedCheck_1728_;
goto v_resetjp_1722_;
}
else
{
lean_inc(v_a_1721_);
lean_dec(v___x_1697_);
v___x_1723_ = lean_box(0);
v_isShared_1724_ = v_isSharedCheck_1728_;
goto v_resetjp_1722_;
}
v_resetjp_1722_:
{
lean_object* v___x_1726_; 
if (v_isShared_1724_ == 0)
{
v___x_1726_ = v___x_1723_;
goto v_reusejp_1725_;
}
else
{
lean_object* v_reuseFailAlloc_1727_; 
v_reuseFailAlloc_1727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1727_, 0, v_a_1721_);
v___x_1726_ = v_reuseFailAlloc_1727_;
goto v_reusejp_1725_;
}
v_reusejp_1725_:
{
return v___x_1726_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_solveByElim___boxed(lean_object* v_goals_1729_, lean_object* v_depth_1730_, lean_object* v_a_1731_, lean_object* v_a_1732_, lean_object* v_a_1733_, lean_object* v_a_1734_, lean_object* v_a_1735_){
_start:
{
lean_object* v_res_1736_; 
v_res_1736_ = l_Lean_Meta_Rewrites_solveByElim(v_goals_1729_, v_depth_1730_, v_a_1731_, v_a_1732_, v_a_1733_, v_a_1734_);
lean_dec(v_a_1734_);
lean_dec_ref(v_a_1733_);
lean_dec(v_a_1732_);
lean_dec_ref(v_a_1731_);
return v_res_1736_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0(lean_object* v_00_u03b1_1737_, lean_object* v_msg_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_){
_start:
{
lean_object* v___x_1744_; 
v___x_1744_ = l_Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0___redArg(v_msg_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_);
return v___x_1744_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0___boxed(lean_object* v_00_u03b1_1745_, lean_object* v_msg_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_){
_start:
{
lean_object* v_res_1752_; 
v_res_1752_ = l_Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0(v_00_u03b1_1745_, v_msg_1746_, v___y_1747_, v___y_1748_, v___y_1749_, v___y_1750_);
lean_dec(v___y_1750_);
lean_dec_ref(v___y_1749_);
lean_dec(v___y_1748_);
lean_dec_ref(v___y_1747_);
return v_res_1752_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Rewrites_rwLemma_spec__0___redArg(lean_object* v_e_1753_, lean_object* v___y_1754_){
_start:
{
uint8_t v___x_1756_; 
v___x_1756_ = l_Lean_Expr_hasMVar(v_e_1753_);
if (v___x_1756_ == 0)
{
lean_object* v___x_1757_; 
v___x_1757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1757_, 0, v_e_1753_);
return v___x_1757_;
}
else
{
lean_object* v___x_1758_; lean_object* v_mctx_1759_; lean_object* v___x_1760_; lean_object* v_fst_1761_; lean_object* v_snd_1762_; lean_object* v___x_1763_; lean_object* v_cache_1764_; lean_object* v_zetaDeltaFVarIds_1765_; lean_object* v_postponed_1766_; lean_object* v_diag_1767_; lean_object* v___x_1769_; uint8_t v_isShared_1770_; uint8_t v_isSharedCheck_1776_; 
v___x_1758_ = lean_st_ref_get(v___y_1754_);
v_mctx_1759_ = lean_ctor_get(v___x_1758_, 0);
lean_inc_ref(v_mctx_1759_);
lean_dec(v___x_1758_);
v___x_1760_ = l_Lean_instantiateMVarsCore(v_mctx_1759_, v_e_1753_);
v_fst_1761_ = lean_ctor_get(v___x_1760_, 0);
lean_inc(v_fst_1761_);
v_snd_1762_ = lean_ctor_get(v___x_1760_, 1);
lean_inc(v_snd_1762_);
lean_dec_ref(v___x_1760_);
v___x_1763_ = lean_st_ref_take(v___y_1754_);
v_cache_1764_ = lean_ctor_get(v___x_1763_, 1);
v_zetaDeltaFVarIds_1765_ = lean_ctor_get(v___x_1763_, 2);
v_postponed_1766_ = lean_ctor_get(v___x_1763_, 3);
v_diag_1767_ = lean_ctor_get(v___x_1763_, 4);
v_isSharedCheck_1776_ = !lean_is_exclusive(v___x_1763_);
if (v_isSharedCheck_1776_ == 0)
{
lean_object* v_unused_1777_; 
v_unused_1777_ = lean_ctor_get(v___x_1763_, 0);
lean_dec(v_unused_1777_);
v___x_1769_ = v___x_1763_;
v_isShared_1770_ = v_isSharedCheck_1776_;
goto v_resetjp_1768_;
}
else
{
lean_inc(v_diag_1767_);
lean_inc(v_postponed_1766_);
lean_inc(v_zetaDeltaFVarIds_1765_);
lean_inc(v_cache_1764_);
lean_dec(v___x_1763_);
v___x_1769_ = lean_box(0);
v_isShared_1770_ = v_isSharedCheck_1776_;
goto v_resetjp_1768_;
}
v_resetjp_1768_:
{
lean_object* v___x_1772_; 
if (v_isShared_1770_ == 0)
{
lean_ctor_set(v___x_1769_, 0, v_snd_1762_);
v___x_1772_ = v___x_1769_;
goto v_reusejp_1771_;
}
else
{
lean_object* v_reuseFailAlloc_1775_; 
v_reuseFailAlloc_1775_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1775_, 0, v_snd_1762_);
lean_ctor_set(v_reuseFailAlloc_1775_, 1, v_cache_1764_);
lean_ctor_set(v_reuseFailAlloc_1775_, 2, v_zetaDeltaFVarIds_1765_);
lean_ctor_set(v_reuseFailAlloc_1775_, 3, v_postponed_1766_);
lean_ctor_set(v_reuseFailAlloc_1775_, 4, v_diag_1767_);
v___x_1772_ = v_reuseFailAlloc_1775_;
goto v_reusejp_1771_;
}
v_reusejp_1771_:
{
lean_object* v___x_1773_; lean_object* v___x_1774_; 
v___x_1773_ = lean_st_ref_put(v___y_1754_, v___x_1772_);
v___x_1774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1774_, 0, v_fst_1761_);
return v___x_1774_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Rewrites_rwLemma_spec__0___redArg___boxed(lean_object* v_e_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_){
_start:
{
lean_object* v_res_1781_; 
v_res_1781_ = l_Lean_instantiateMVars___at___00Lean_Meta_Rewrites_rwLemma_spec__0___redArg(v_e_1778_, v___y_1779_);
lean_dec(v___y_1779_);
return v_res_1781_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Rewrites_rwLemma_spec__0(lean_object* v_e_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_){
_start:
{
lean_object* v___x_1788_; 
v___x_1788_ = l_Lean_instantiateMVars___at___00Lean_Meta_Rewrites_rwLemma_spec__0___redArg(v_e_1782_, v___y_1784_);
return v___x_1788_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Rewrites_rwLemma_spec__0___boxed(lean_object* v_e_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_){
_start:
{
lean_object* v_res_1795_; 
v_res_1795_ = l_Lean_instantiateMVars___at___00Lean_Meta_Rewrites_rwLemma_spec__0(v_e_1789_, v___y_1790_, v___y_1791_, v___y_1792_, v___y_1793_);
lean_dec(v___y_1793_);
lean_dec_ref(v___y_1792_);
lean_dec(v___y_1791_);
lean_dec_ref(v___y_1790_);
return v_res_1795_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1796_; double v___x_1797_; 
v___x_1796_ = lean_unsigned_to_nat(0u);
v___x_1797_ = lean_float_of_nat(v___x_1796_);
return v___x_1797_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2(lean_object* v_cls_1801_, lean_object* v_msg_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_){
_start:
{
lean_object* v_ref_1808_; lean_object* v___x_1809_; lean_object* v_a_1810_; lean_object* v___x_1812_; uint8_t v_isShared_1813_; uint8_t v_isSharedCheck_1855_; 
v_ref_1808_ = lean_ctor_get(v___y_1805_, 2);
v___x_1809_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0_spec__0(v_msg_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_);
v_a_1810_ = lean_ctor_get(v___x_1809_, 0);
v_isSharedCheck_1855_ = !lean_is_exclusive(v___x_1809_);
if (v_isSharedCheck_1855_ == 0)
{
v___x_1812_ = v___x_1809_;
v_isShared_1813_ = v_isSharedCheck_1855_;
goto v_resetjp_1811_;
}
else
{
lean_inc(v_a_1810_);
lean_dec(v___x_1809_);
v___x_1812_ = lean_box(0);
v_isShared_1813_ = v_isSharedCheck_1855_;
goto v_resetjp_1811_;
}
v_resetjp_1811_:
{
lean_object* v___x_1814_; lean_object* v_traceState_1815_; lean_object* v_env_1816_; lean_object* v_nextMacroScope_1817_; lean_object* v_ngen_1818_; lean_object* v_auxDeclNGen_1819_; lean_object* v_cache_1820_; lean_object* v_recordedDeps_1821_; lean_object* v_messages_1822_; lean_object* v_infoState_1823_; lean_object* v_snapshotTasks_1824_; lean_object* v___x_1826_; uint8_t v_isShared_1827_; uint8_t v_isSharedCheck_1854_; 
v___x_1814_ = lean_st_ref_take(v___y_1806_);
v_traceState_1815_ = lean_ctor_get(v___x_1814_, 4);
v_env_1816_ = lean_ctor_get(v___x_1814_, 0);
v_nextMacroScope_1817_ = lean_ctor_get(v___x_1814_, 1);
v_ngen_1818_ = lean_ctor_get(v___x_1814_, 2);
v_auxDeclNGen_1819_ = lean_ctor_get(v___x_1814_, 3);
v_cache_1820_ = lean_ctor_get(v___x_1814_, 5);
v_recordedDeps_1821_ = lean_ctor_get(v___x_1814_, 6);
v_messages_1822_ = lean_ctor_get(v___x_1814_, 7);
v_infoState_1823_ = lean_ctor_get(v___x_1814_, 8);
v_snapshotTasks_1824_ = lean_ctor_get(v___x_1814_, 9);
v_isSharedCheck_1854_ = !lean_is_exclusive(v___x_1814_);
if (v_isSharedCheck_1854_ == 0)
{
v___x_1826_ = v___x_1814_;
v_isShared_1827_ = v_isSharedCheck_1854_;
goto v_resetjp_1825_;
}
else
{
lean_inc(v_snapshotTasks_1824_);
lean_inc(v_infoState_1823_);
lean_inc(v_messages_1822_);
lean_inc(v_recordedDeps_1821_);
lean_inc(v_cache_1820_);
lean_inc(v_traceState_1815_);
lean_inc(v_auxDeclNGen_1819_);
lean_inc(v_ngen_1818_);
lean_inc(v_nextMacroScope_1817_);
lean_inc(v_env_1816_);
lean_dec(v___x_1814_);
v___x_1826_ = lean_box(0);
v_isShared_1827_ = v_isSharedCheck_1854_;
goto v_resetjp_1825_;
}
v_resetjp_1825_:
{
uint64_t v_tid_1828_; lean_object* v_traces_1829_; lean_object* v___x_1831_; uint8_t v_isShared_1832_; uint8_t v_isSharedCheck_1853_; 
v_tid_1828_ = lean_ctor_get_uint64(v_traceState_1815_, sizeof(void*)*1);
v_traces_1829_ = lean_ctor_get(v_traceState_1815_, 0);
v_isSharedCheck_1853_ = !lean_is_exclusive(v_traceState_1815_);
if (v_isSharedCheck_1853_ == 0)
{
v___x_1831_ = v_traceState_1815_;
v_isShared_1832_ = v_isSharedCheck_1853_;
goto v_resetjp_1830_;
}
else
{
lean_inc(v_traces_1829_);
lean_dec(v_traceState_1815_);
v___x_1831_ = lean_box(0);
v_isShared_1832_ = v_isSharedCheck_1853_;
goto v_resetjp_1830_;
}
v_resetjp_1830_:
{
lean_object* v___x_1833_; lean_object* v___x_1834_; double v___x_1835_; uint8_t v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1844_; 
v___x_1833_ = lean_box(0);
v___x_1834_ = lean_box(0);
v___x_1835_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___closed__0);
v___x_1836_ = 0;
v___x_1837_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___closed__1));
v___x_1838_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1838_, 0, v_cls_1801_);
lean_ctor_set(v___x_1838_, 1, v___x_1834_);
lean_ctor_set(v___x_1838_, 2, v___x_1837_);
lean_ctor_set_float(v___x_1838_, sizeof(void*)*3, v___x_1835_);
lean_ctor_set_float(v___x_1838_, sizeof(void*)*3 + 8, v___x_1835_);
lean_ctor_set_uint8(v___x_1838_, sizeof(void*)*3 + 16, v___x_1836_);
v___x_1839_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___closed__2));
v___x_1840_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1840_, 0, v___x_1838_);
lean_ctor_set(v___x_1840_, 1, v_a_1810_);
lean_ctor_set(v___x_1840_, 2, v___x_1839_);
lean_inc(v_ref_1808_);
v___x_1841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1841_, 0, v_ref_1808_);
lean_ctor_set(v___x_1841_, 1, v___x_1840_);
v___x_1842_ = l_Lean_PersistentArray_push___redArg(v_traces_1829_, v___x_1841_);
if (v_isShared_1832_ == 0)
{
lean_ctor_set(v___x_1831_, 0, v___x_1842_);
v___x_1844_ = v___x_1831_;
goto v_reusejp_1843_;
}
else
{
lean_object* v_reuseFailAlloc_1852_; 
v_reuseFailAlloc_1852_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1852_, 0, v___x_1842_);
lean_ctor_set_uint64(v_reuseFailAlloc_1852_, sizeof(void*)*1, v_tid_1828_);
v___x_1844_ = v_reuseFailAlloc_1852_;
goto v_reusejp_1843_;
}
v_reusejp_1843_:
{
lean_object* v___x_1846_; 
if (v_isShared_1827_ == 0)
{
lean_ctor_set(v___x_1826_, 4, v___x_1844_);
v___x_1846_ = v___x_1826_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1851_; 
v_reuseFailAlloc_1851_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1851_, 0, v_env_1816_);
lean_ctor_set(v_reuseFailAlloc_1851_, 1, v_nextMacroScope_1817_);
lean_ctor_set(v_reuseFailAlloc_1851_, 2, v_ngen_1818_);
lean_ctor_set(v_reuseFailAlloc_1851_, 3, v_auxDeclNGen_1819_);
lean_ctor_set(v_reuseFailAlloc_1851_, 4, v___x_1844_);
lean_ctor_set(v_reuseFailAlloc_1851_, 5, v_cache_1820_);
lean_ctor_set(v_reuseFailAlloc_1851_, 6, v_recordedDeps_1821_);
lean_ctor_set(v_reuseFailAlloc_1851_, 7, v_messages_1822_);
lean_ctor_set(v_reuseFailAlloc_1851_, 8, v_infoState_1823_);
lean_ctor_set(v_reuseFailAlloc_1851_, 9, v_snapshotTasks_1824_);
v___x_1846_ = v_reuseFailAlloc_1851_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
lean_object* v___x_1847_; lean_object* v___x_1849_; 
v___x_1847_ = lean_st_ref_put(v___y_1806_, v___x_1846_);
if (v_isShared_1813_ == 0)
{
lean_ctor_set(v___x_1812_, 0, v___x_1833_);
v___x_1849_ = v___x_1812_;
goto v_reusejp_1848_;
}
else
{
lean_object* v_reuseFailAlloc_1850_; 
v_reuseFailAlloc_1850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1850_, 0, v___x_1833_);
v___x_1849_ = v_reuseFailAlloc_1850_;
goto v_reusejp_1848_;
}
v_reusejp_1848_:
{
return v___x_1849_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___boxed(lean_object* v_cls_1856_, lean_object* v_msg_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_){
_start:
{
lean_object* v_res_1863_; 
v_res_1863_ = l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2(v_cls_1856_, v_msg_1857_, v___y_1858_, v___y_1859_, v___y_1860_, v___y_1861_);
lean_dec(v___y_1861_);
lean_dec_ref(v___y_1860_);
lean_dec(v___y_1859_);
lean_dec_ref(v___y_1858_);
return v_res_1863_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Rewrites_rwLemma_spec__1(lean_object* v_x_1864_, lean_object* v_x_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_){
_start:
{
if (lean_obj_tag(v_x_1864_) == 0)
{
lean_object* v___x_1871_; lean_object* v___x_1872_; 
v___x_1871_ = l_List_reverse___redArg(v_x_1865_);
v___x_1872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1872_, 0, v___x_1871_);
return v___x_1872_;
}
else
{
lean_object* v_head_1873_; lean_object* v_tail_1874_; lean_object* v___x_1876_; uint8_t v_isShared_1877_; uint8_t v_isSharedCheck_1892_; 
v_head_1873_ = lean_ctor_get(v_x_1864_, 0);
v_tail_1874_ = lean_ctor_get(v_x_1864_, 1);
v_isSharedCheck_1892_ = !lean_is_exclusive(v_x_1864_);
if (v_isSharedCheck_1892_ == 0)
{
v___x_1876_ = v_x_1864_;
v_isShared_1877_ = v_isSharedCheck_1892_;
goto v_resetjp_1875_;
}
else
{
lean_inc(v_tail_1874_);
lean_inc(v_head_1873_);
lean_dec(v_x_1864_);
v___x_1876_ = lean_box(0);
v_isShared_1877_ = v_isSharedCheck_1892_;
goto v_resetjp_1875_;
}
v_resetjp_1875_:
{
lean_object* v___x_1878_; 
v___x_1878_ = l_Lean_MVarId_assumption(v_head_1873_, v___y_1866_, v___y_1867_, v___y_1868_, v___y_1869_);
if (lean_obj_tag(v___x_1878_) == 0)
{
lean_object* v_a_1879_; lean_object* v___x_1881_; 
v_a_1879_ = lean_ctor_get(v___x_1878_, 0);
lean_inc(v_a_1879_);
lean_dec_ref_known(v___x_1878_, 1);
if (v_isShared_1877_ == 0)
{
lean_ctor_set(v___x_1876_, 1, v_x_1865_);
lean_ctor_set(v___x_1876_, 0, v_a_1879_);
v___x_1881_ = v___x_1876_;
goto v_reusejp_1880_;
}
else
{
lean_object* v_reuseFailAlloc_1883_; 
v_reuseFailAlloc_1883_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1883_, 0, v_a_1879_);
lean_ctor_set(v_reuseFailAlloc_1883_, 1, v_x_1865_);
v___x_1881_ = v_reuseFailAlloc_1883_;
goto v_reusejp_1880_;
}
v_reusejp_1880_:
{
v_x_1864_ = v_tail_1874_;
v_x_1865_ = v___x_1881_;
goto _start;
}
}
else
{
lean_object* v_a_1884_; lean_object* v___x_1886_; uint8_t v_isShared_1887_; uint8_t v_isSharedCheck_1891_; 
lean_del_object(v___x_1876_);
lean_dec(v_tail_1874_);
lean_dec(v_x_1865_);
v_a_1884_ = lean_ctor_get(v___x_1878_, 0);
v_isSharedCheck_1891_ = !lean_is_exclusive(v___x_1878_);
if (v_isSharedCheck_1891_ == 0)
{
v___x_1886_ = v___x_1878_;
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
else
{
lean_inc(v_a_1884_);
lean_dec(v___x_1878_);
v___x_1886_ = lean_box(0);
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
v_resetjp_1885_:
{
lean_object* v___x_1889_; 
if (v_isShared_1887_ == 0)
{
v___x_1889_ = v___x_1886_;
goto v_reusejp_1888_;
}
else
{
lean_object* v_reuseFailAlloc_1890_; 
v_reuseFailAlloc_1890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1890_, 0, v_a_1884_);
v___x_1889_ = v_reuseFailAlloc_1890_;
goto v_reusejp_1888_;
}
v_reusejp_1888_:
{
return v___x_1889_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Rewrites_rwLemma_spec__1___boxed(lean_object* v_x_1893_, lean_object* v_x_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_){
_start:
{
lean_object* v_res_1900_; 
v_res_1900_ = l_List_mapM_loop___at___00Lean_Meta_Rewrites_rwLemma_spec__1(v_x_1893_, v_x_1894_, v___y_1895_, v___y_1896_, v___y_1897_, v___y_1898_);
lean_dec(v___y_1898_);
lean_dec_ref(v___y_1897_);
lean_dec(v___y_1896_);
lean_dec_ref(v___y_1895_);
return v_res_1900_;
}
}
static lean_object* _init_l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__5(void){
_start:
{
lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; 
v___x_1913_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__2_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_));
v___x_1914_ = ((lean_object*)(l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__4));
v___x_1915_ = l_Lean_Name_append(v___x_1914_, v___x_1913_);
return v___x_1915_;
}
}
static lean_object* _init_l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__7(void){
_start:
{
lean_object* v___x_1917_; lean_object* v___x_1918_; 
v___x_1917_ = ((lean_object*)(l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__6));
v___x_1918_ = l_Lean_stringToMessageData(v___x_1917_);
return v___x_1918_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rwLemma___lam__0(lean_object* v_weight_1920_, lean_object* v_goal_1921_, lean_object* v_target_1922_, uint8_t v_symm_1923_, uint8_t v_side_1924_, lean_object* v_lem_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_){
_start:
{
lean_object* v___y_1932_; lean_object* v___y_1933_; lean_object* v___y_1934_; lean_object* v___y_1935_; lean_object* v___y_1936_; lean_object* v_fst_1937_; uint8_t v_snd_1938_; uint8_t v___y_1963_; lean_object* v___y_1964_; lean_object* v___y_1965_; lean_object* v___y_1966_; lean_object* v___y_1967_; lean_object* v___y_1968_; lean_object* v___y_1988_; lean_object* v___y_2128_; lean_object* v___y_2129_; lean_object* v___y_2130_; lean_object* v___y_2131_; lean_object* v_val_2146_; 
if (lean_obj_tag(v_lem_1925_) == 0)
{
lean_object* v_val_2157_; 
v_val_2157_ = lean_ctor_get(v_lem_1925_, 0);
lean_inc(v_val_2157_);
lean_dec_ref_known(v_lem_1925_, 1);
v_val_2146_ = v_val_2157_;
goto v___jp_2145_;
}
else
{
lean_object* v_val_2158_; lean_object* v___x_2159_; 
v_val_2158_ = lean_ctor_get(v_lem_1925_, 0);
lean_inc(v_val_2158_);
lean_dec_ref_known(v_lem_1925_, 1);
v___x_2159_ = l_Lean_Meta_saveState___redArg(v___y_1927_, v___y_1929_);
if (lean_obj_tag(v___x_2159_) == 0)
{
lean_object* v_a_2160_; lean_object* v___x_2161_; 
v_a_2160_ = lean_ctor_get(v___x_2159_, 0);
lean_inc(v_a_2160_);
lean_dec_ref_known(v___x_2159_, 1);
v___x_2161_ = l_Lean_Meta_mkConstWithFreshMVarLevels(v_val_2158_, v___y_1926_, v___y_1927_, v___y_1928_, v___y_1929_);
if (lean_obj_tag(v___x_2161_) == 0)
{
lean_object* v_a_2162_; 
lean_dec(v_a_2160_);
v_a_2162_ = lean_ctor_get(v___x_2161_, 0);
lean_inc(v_a_2162_);
lean_dec_ref_known(v___x_2161_, 1);
v_val_2146_ = v_a_2162_;
goto v___jp_2145_;
}
else
{
lean_object* v_a_2163_; lean_object* v___x_2165_; uint8_t v_isShared_2166_; uint8_t v_isSharedCheck_2193_; 
lean_dec_ref(v_target_1922_);
lean_dec(v_goal_1921_);
lean_dec(v_weight_1920_);
v_a_2163_ = lean_ctor_get(v___x_2161_, 0);
v_isSharedCheck_2193_ = !lean_is_exclusive(v___x_2161_);
if (v_isSharedCheck_2193_ == 0)
{
v___x_2165_ = v___x_2161_;
v_isShared_2166_ = v_isSharedCheck_2193_;
goto v_resetjp_2164_;
}
else
{
lean_inc(v_a_2163_);
lean_dec(v___x_2161_);
v___x_2165_ = lean_box(0);
v_isShared_2166_ = v_isSharedCheck_2193_;
goto v_resetjp_2164_;
}
v_resetjp_2164_:
{
uint8_t v___x_2167_; 
v___x_2167_ = l_Lean_Exception_isInterrupt(v_a_2163_);
if (v___x_2167_ == 0)
{
uint8_t v___x_2168_; 
lean_inc(v_a_2163_);
v___x_2168_ = l_Lean_Exception_isRuntime(v_a_2163_);
if (v___x_2168_ == 0)
{
lean_object* v___x_2169_; 
lean_del_object(v___x_2165_);
lean_dec(v_a_2163_);
v___x_2169_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2160_, v___y_1927_, v___y_1929_);
if (lean_obj_tag(v___x_2169_) == 0)
{
lean_object* v___x_2171_; uint8_t v_isShared_2172_; uint8_t v_isSharedCheck_2177_; 
v_isSharedCheck_2177_ = !lean_is_exclusive(v___x_2169_);
if (v_isSharedCheck_2177_ == 0)
{
lean_object* v_unused_2178_; 
v_unused_2178_ = lean_ctor_get(v___x_2169_, 0);
lean_dec(v_unused_2178_);
v___x_2171_ = v___x_2169_;
v_isShared_2172_ = v_isSharedCheck_2177_;
goto v_resetjp_2170_;
}
else
{
lean_dec(v___x_2169_);
v___x_2171_ = lean_box(0);
v_isShared_2172_ = v_isSharedCheck_2177_;
goto v_resetjp_2170_;
}
v_resetjp_2170_:
{
lean_object* v___x_2173_; lean_object* v___x_2175_; 
v___x_2173_ = lean_box(0);
if (v_isShared_2172_ == 0)
{
lean_ctor_set(v___x_2171_, 0, v___x_2173_);
v___x_2175_ = v___x_2171_;
goto v_reusejp_2174_;
}
else
{
lean_object* v_reuseFailAlloc_2176_; 
v_reuseFailAlloc_2176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2176_, 0, v___x_2173_);
v___x_2175_ = v_reuseFailAlloc_2176_;
goto v_reusejp_2174_;
}
v_reusejp_2174_:
{
return v___x_2175_;
}
}
}
else
{
lean_object* v_a_2179_; lean_object* v___x_2181_; uint8_t v_isShared_2182_; uint8_t v_isSharedCheck_2186_; 
v_a_2179_ = lean_ctor_get(v___x_2169_, 0);
v_isSharedCheck_2186_ = !lean_is_exclusive(v___x_2169_);
if (v_isSharedCheck_2186_ == 0)
{
v___x_2181_ = v___x_2169_;
v_isShared_2182_ = v_isSharedCheck_2186_;
goto v_resetjp_2180_;
}
else
{
lean_inc(v_a_2179_);
lean_dec(v___x_2169_);
v___x_2181_ = lean_box(0);
v_isShared_2182_ = v_isSharedCheck_2186_;
goto v_resetjp_2180_;
}
v_resetjp_2180_:
{
lean_object* v___x_2184_; 
if (v_isShared_2182_ == 0)
{
v___x_2184_ = v___x_2181_;
goto v_reusejp_2183_;
}
else
{
lean_object* v_reuseFailAlloc_2185_; 
v_reuseFailAlloc_2185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2185_, 0, v_a_2179_);
v___x_2184_ = v_reuseFailAlloc_2185_;
goto v_reusejp_2183_;
}
v_reusejp_2183_:
{
return v___x_2184_;
}
}
}
}
else
{
lean_object* v___x_2188_; 
lean_dec(v_a_2160_);
if (v_isShared_2166_ == 0)
{
v___x_2188_ = v___x_2165_;
goto v_reusejp_2187_;
}
else
{
lean_object* v_reuseFailAlloc_2189_; 
v_reuseFailAlloc_2189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2189_, 0, v_a_2163_);
v___x_2188_ = v_reuseFailAlloc_2189_;
goto v_reusejp_2187_;
}
v_reusejp_2187_:
{
return v___x_2188_;
}
}
}
else
{
lean_object* v___x_2191_; 
lean_dec(v_a_2160_);
if (v_isShared_2166_ == 0)
{
v___x_2191_ = v___x_2165_;
goto v_reusejp_2190_;
}
else
{
lean_object* v_reuseFailAlloc_2192_; 
v_reuseFailAlloc_2192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2192_, 0, v_a_2163_);
v___x_2191_ = v_reuseFailAlloc_2192_;
goto v_reusejp_2190_;
}
v_reusejp_2190_:
{
return v___x_2191_;
}
}
}
}
}
else
{
lean_object* v_a_2194_; lean_object* v___x_2196_; uint8_t v_isShared_2197_; uint8_t v_isSharedCheck_2201_; 
lean_dec(v_val_2158_);
lean_dec_ref(v_target_1922_);
lean_dec(v_goal_1921_);
lean_dec(v_weight_1920_);
v_a_2194_ = lean_ctor_get(v___x_2159_, 0);
v_isSharedCheck_2201_ = !lean_is_exclusive(v___x_2159_);
if (v_isSharedCheck_2201_ == 0)
{
v___x_2196_ = v___x_2159_;
v_isShared_2197_ = v_isSharedCheck_2201_;
goto v_resetjp_2195_;
}
else
{
lean_inc(v_a_2194_);
lean_dec(v___x_2159_);
v___x_2196_ = lean_box(0);
v_isShared_2197_ = v_isSharedCheck_2201_;
goto v_resetjp_2195_;
}
v_resetjp_2195_:
{
lean_object* v___x_2199_; 
if (v_isShared_2197_ == 0)
{
v___x_2199_ = v___x_2196_;
goto v_reusejp_2198_;
}
else
{
lean_object* v_reuseFailAlloc_2200_; 
v_reuseFailAlloc_2200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2200_, 0, v_a_2194_);
v___x_2199_ = v_reuseFailAlloc_2200_;
goto v_reusejp_2198_;
}
v_reusejp_2198_:
{
return v___x_2199_;
}
}
}
}
v___jp_1931_:
{
lean_object* v___x_1939_; lean_object* v_mctx_1940_; lean_object* v_eNew_1941_; lean_object* v___x_1942_; 
v___x_1939_ = lean_st_ref_get(v___y_1935_);
v_mctx_1940_ = lean_ctor_get(v___x_1939_, 0);
lean_inc_ref_n(v_mctx_1940_, 2);
lean_dec(v___x_1939_);
v_eNew_1941_ = lean_ctor_get(v___y_1936_, 0);
lean_inc_ref(v_eNew_1941_);
v___x_1942_ = l_Lean_Meta_Rewrites_dischargableWithRfl_x3f(v_mctx_1940_, v_eNew_1941_, v___y_1933_, v___y_1935_, v___y_1934_, v___y_1932_);
if (lean_obj_tag(v___x_1942_) == 0)
{
lean_object* v_a_1943_; lean_object* v___x_1945_; uint8_t v_isShared_1946_; uint8_t v_isSharedCheck_1953_; 
v_a_1943_ = lean_ctor_get(v___x_1942_, 0);
v_isSharedCheck_1953_ = !lean_is_exclusive(v___x_1942_);
if (v_isSharedCheck_1953_ == 0)
{
v___x_1945_ = v___x_1942_;
v_isShared_1946_ = v_isSharedCheck_1953_;
goto v_resetjp_1944_;
}
else
{
lean_inc(v_a_1943_);
lean_dec(v___x_1942_);
v___x_1945_ = lean_box(0);
v_isShared_1946_ = v_isSharedCheck_1953_;
goto v_resetjp_1944_;
}
v_resetjp_1944_:
{
lean_object* v___x_1947_; uint8_t v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1951_; 
v___x_1947_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_1947_, 0, v_fst_1937_);
lean_ctor_set(v___x_1947_, 1, v_weight_1920_);
lean_ctor_set(v___x_1947_, 2, v___y_1936_);
lean_ctor_set(v___x_1947_, 3, v_mctx_1940_);
lean_ctor_set_uint8(v___x_1947_, sizeof(void*)*4, v_snd_1938_);
v___x_1948_ = lean_unbox(v_a_1943_);
lean_dec(v_a_1943_);
lean_ctor_set_uint8(v___x_1947_, sizeof(void*)*4 + 1, v___x_1948_);
v___x_1949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1949_, 0, v___x_1947_);
if (v_isShared_1946_ == 0)
{
lean_ctor_set(v___x_1945_, 0, v___x_1949_);
v___x_1951_ = v___x_1945_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v___x_1949_);
v___x_1951_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
return v___x_1951_;
}
}
}
else
{
lean_object* v_a_1954_; lean_object* v___x_1956_; uint8_t v_isShared_1957_; uint8_t v_isSharedCheck_1961_; 
lean_dec_ref(v_mctx_1940_);
lean_dec_ref(v_fst_1937_);
lean_dec_ref(v___y_1936_);
lean_dec(v_weight_1920_);
v_a_1954_ = lean_ctor_get(v___x_1942_, 0);
v_isSharedCheck_1961_ = !lean_is_exclusive(v___x_1942_);
if (v_isSharedCheck_1961_ == 0)
{
v___x_1956_ = v___x_1942_;
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
else
{
lean_inc(v_a_1954_);
lean_dec(v___x_1942_);
v___x_1956_ = lean_box(0);
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
v_resetjp_1955_:
{
lean_object* v___x_1959_; 
if (v_isShared_1957_ == 0)
{
v___x_1959_ = v___x_1956_;
goto v_reusejp_1958_;
}
else
{
lean_object* v_reuseFailAlloc_1960_; 
v_reuseFailAlloc_1960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1960_, 0, v_a_1954_);
v___x_1959_ = v_reuseFailAlloc_1960_;
goto v_reusejp_1958_;
}
v_reusejp_1958_:
{
return v___x_1959_;
}
}
}
}
v___jp_1962_:
{
lean_object* v___x_1969_; 
v___x_1969_ = l_Lean_Meta_Rewrites_rewriteResultLemma(v___y_1964_);
if (lean_obj_tag(v___x_1969_) == 1)
{
lean_object* v_val_1970_; lean_object* v___x_1971_; lean_object* v_a_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; uint8_t v___x_1975_; 
v_val_1970_ = lean_ctor_get(v___x_1969_, 0);
lean_inc(v_val_1970_);
lean_dec_ref_known(v___x_1969_, 1);
v___x_1971_ = l_Lean_instantiateMVars___at___00Lean_Meta_Rewrites_rwLemma_spec__0___redArg(v_val_1970_, v___y_1966_);
v_a_1972_ = lean_ctor_get(v___x_1971_, 0);
lean_inc(v_a_1972_);
lean_dec_ref(v___x_1971_);
v___x_1973_ = ((lean_object*)(l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__1));
v___x_1974_ = lean_unsigned_to_nat(4u);
v___x_1975_ = l_Lean_Expr_isAppOfArity(v_a_1972_, v___x_1973_, v___x_1974_);
if (v___x_1975_ == 0)
{
v___y_1932_ = v___y_1968_;
v___y_1933_ = v___y_1965_;
v___y_1934_ = v___y_1967_;
v___y_1935_ = v___y_1966_;
v___y_1936_ = v___y_1964_;
v_fst_1937_ = v_a_1972_;
v_snd_1938_ = v___x_1975_;
goto v___jp_1931_;
}
else
{
lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; 
v___x_1976_ = lean_unsigned_to_nat(3u);
v___x_1977_ = l_Lean_Expr_getAppNumArgs(v_a_1972_);
v___x_1978_ = lean_nat_sub(v___x_1977_, v___x_1976_);
lean_dec(v___x_1977_);
v___x_1979_ = lean_unsigned_to_nat(1u);
v___x_1980_ = lean_nat_sub(v___x_1978_, v___x_1979_);
lean_dec(v___x_1978_);
v___x_1981_ = l_Lean_Expr_getRevArg_x21(v_a_1972_, v___x_1980_);
lean_dec(v_a_1972_);
v___y_1932_ = v___y_1968_;
v___y_1933_ = v___y_1965_;
v___y_1934_ = v___y_1967_;
v___y_1935_ = v___y_1966_;
v___y_1936_ = v___y_1964_;
v_fst_1937_ = v___x_1981_;
v_snd_1938_ = v___y_1963_;
goto v___jp_1931_;
}
}
else
{
lean_object* v___x_1982_; lean_object* v___x_1983_; 
lean_dec(v___x_1969_);
lean_dec_ref(v___y_1964_);
lean_dec(v_weight_1920_);
v___x_1982_ = lean_box(0);
v___x_1983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1983_, 0, v___x_1982_);
return v___x_1983_;
}
}
v___jp_1984_:
{
lean_object* v___x_1985_; lean_object* v___x_1986_; 
v___x_1985_ = lean_box(0);
v___x_1986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1986_, 0, v___x_1985_);
return v___x_1986_;
}
v___jp_1987_:
{
uint8_t v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; 
v___x_1989_ = 1;
v___x_1990_ = ((lean_object*)(l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__2));
v___x_1991_ = l_Lean_Meta_saveState___redArg(v___y_1927_, v___y_1929_);
if (lean_obj_tag(v___x_1991_) == 0)
{
lean_object* v_a_1992_; lean_object* v___x_1993_; 
v_a_1992_ = lean_ctor_get(v___x_1991_, 0);
lean_inc(v_a_1992_);
lean_dec_ref_known(v___x_1991_, 1);
lean_inc_ref(v___y_1988_);
v___x_1993_ = l_Lean_MVarId_rewrite(v_goal_1921_, v_target_1922_, v___y_1988_, v_symm_1923_, v___x_1990_, v___y_1926_, v___y_1927_, v___y_1928_, v___y_1929_);
if (lean_obj_tag(v___x_1993_) == 0)
{
lean_object* v_a_1994_; lean_object* v_eNew_1995_; lean_object* v_mvarIds_1996_; uint8_t v___x_1997_; 
lean_dec(v_a_1992_);
v_a_1994_ = lean_ctor_get(v___x_1993_, 0);
lean_inc(v_a_1994_);
lean_dec_ref_known(v___x_1993_, 1);
v_eNew_1995_ = lean_ctor_get(v_a_1994_, 0);
v_mvarIds_1996_ = lean_ctor_get(v_a_1994_, 2);
v___x_1997_ = l_List_isEmpty___redArg(v_mvarIds_1996_);
if (v___x_1997_ == 0)
{
lean_dec_ref(v___y_1988_);
switch(v_side_1924_)
{
case 0:
{
lean_dec(v_a_1994_);
lean_dec(v_weight_1920_);
goto v___jp_1984_;
}
case 1:
{
lean_object* v___x_1998_; lean_object* v___x_1999_; 
v___x_1998_ = lean_box(0);
v___x_1999_ = l_Lean_Meta_saveState___redArg(v___y_1927_, v___y_1929_);
if (lean_obj_tag(v___x_1999_) == 0)
{
lean_object* v_a_2000_; lean_object* v___x_2001_; 
v_a_2000_ = lean_ctor_get(v___x_1999_, 0);
lean_inc(v_a_2000_);
lean_dec_ref_known(v___x_1999_, 1);
lean_inc(v_mvarIds_1996_);
v___x_2001_ = l_List_mapM_loop___at___00Lean_Meta_Rewrites_rwLemma_spec__1(v_mvarIds_1996_, v___x_1998_, v___y_1926_, v___y_1927_, v___y_1928_, v___y_1929_);
if (lean_obj_tag(v___x_2001_) == 0)
{
lean_dec_ref_known(v___x_2001_, 1);
lean_dec(v_a_2000_);
v___y_1963_ = v___x_1989_;
v___y_1964_ = v_a_1994_;
v___y_1965_ = v___y_1926_;
v___y_1966_ = v___y_1927_;
v___y_1967_ = v___y_1928_;
v___y_1968_ = v___y_1929_;
goto v___jp_1962_;
}
else
{
lean_object* v_a_2002_; lean_object* v___x_2004_; uint8_t v_isShared_2005_; uint8_t v_isSharedCheck_2023_; 
lean_dec(v_a_1994_);
lean_dec(v_weight_1920_);
v_a_2002_ = lean_ctor_get(v___x_2001_, 0);
v_isSharedCheck_2023_ = !lean_is_exclusive(v___x_2001_);
if (v_isSharedCheck_2023_ == 0)
{
v___x_2004_ = v___x_2001_;
v_isShared_2005_ = v_isSharedCheck_2023_;
goto v_resetjp_2003_;
}
else
{
lean_inc(v_a_2002_);
lean_dec(v___x_2001_);
v___x_2004_ = lean_box(0);
v_isShared_2005_ = v_isSharedCheck_2023_;
goto v_resetjp_2003_;
}
v_resetjp_2003_:
{
uint8_t v___x_2006_; 
v___x_2006_ = l_Lean_Exception_isInterrupt(v_a_2002_);
if (v___x_2006_ == 0)
{
uint8_t v___x_2007_; 
lean_inc(v_a_2002_);
v___x_2007_ = l_Lean_Exception_isRuntime(v_a_2002_);
if (v___x_2007_ == 0)
{
lean_object* v___x_2008_; 
lean_del_object(v___x_2004_);
lean_dec(v_a_2002_);
v___x_2008_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2000_, v___y_1927_, v___y_1929_);
if (lean_obj_tag(v___x_2008_) == 0)
{
lean_dec_ref_known(v___x_2008_, 1);
goto v___jp_1984_;
}
else
{
lean_object* v_a_2009_; lean_object* v___x_2011_; uint8_t v_isShared_2012_; uint8_t v_isSharedCheck_2016_; 
v_a_2009_ = lean_ctor_get(v___x_2008_, 0);
v_isSharedCheck_2016_ = !lean_is_exclusive(v___x_2008_);
if (v_isSharedCheck_2016_ == 0)
{
v___x_2011_ = v___x_2008_;
v_isShared_2012_ = v_isSharedCheck_2016_;
goto v_resetjp_2010_;
}
else
{
lean_inc(v_a_2009_);
lean_dec(v___x_2008_);
v___x_2011_ = lean_box(0);
v_isShared_2012_ = v_isSharedCheck_2016_;
goto v_resetjp_2010_;
}
v_resetjp_2010_:
{
lean_object* v___x_2014_; 
if (v_isShared_2012_ == 0)
{
v___x_2014_ = v___x_2011_;
goto v_reusejp_2013_;
}
else
{
lean_object* v_reuseFailAlloc_2015_; 
v_reuseFailAlloc_2015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2015_, 0, v_a_2009_);
v___x_2014_ = v_reuseFailAlloc_2015_;
goto v_reusejp_2013_;
}
v_reusejp_2013_:
{
return v___x_2014_;
}
}
}
}
else
{
lean_object* v___x_2018_; 
lean_dec(v_a_2000_);
if (v_isShared_2005_ == 0)
{
v___x_2018_ = v___x_2004_;
goto v_reusejp_2017_;
}
else
{
lean_object* v_reuseFailAlloc_2019_; 
v_reuseFailAlloc_2019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2019_, 0, v_a_2002_);
v___x_2018_ = v_reuseFailAlloc_2019_;
goto v_reusejp_2017_;
}
v_reusejp_2017_:
{
return v___x_2018_;
}
}
}
else
{
lean_object* v___x_2021_; 
lean_dec(v_a_2000_);
if (v_isShared_2005_ == 0)
{
v___x_2021_ = v___x_2004_;
goto v_reusejp_2020_;
}
else
{
lean_object* v_reuseFailAlloc_2022_; 
v_reuseFailAlloc_2022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2022_, 0, v_a_2002_);
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
}
else
{
lean_object* v_a_2024_; lean_object* v___x_2026_; uint8_t v_isShared_2027_; uint8_t v_isSharedCheck_2031_; 
lean_dec(v_a_1994_);
lean_dec(v_weight_1920_);
v_a_2024_ = lean_ctor_get(v___x_1999_, 0);
v_isSharedCheck_2031_ = !lean_is_exclusive(v___x_1999_);
if (v_isSharedCheck_2031_ == 0)
{
v___x_2026_ = v___x_1999_;
v_isShared_2027_ = v_isSharedCheck_2031_;
goto v_resetjp_2025_;
}
else
{
lean_inc(v_a_2024_);
lean_dec(v___x_1999_);
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
}
default: 
{
lean_object* v___x_2032_; lean_object* v___x_2033_; 
v___x_2032_ = lean_unsigned_to_nat(6u);
v___x_2033_ = l_Lean_Meta_saveState___redArg(v___y_1927_, v___y_1929_);
if (lean_obj_tag(v___x_2033_) == 0)
{
lean_object* v_a_2034_; lean_object* v___x_2035_; 
v_a_2034_ = lean_ctor_get(v___x_2033_, 0);
lean_inc(v_a_2034_);
lean_dec_ref_known(v___x_2033_, 1);
lean_inc(v_mvarIds_1996_);
v___x_2035_ = l_Lean_Meta_Rewrites_solveByElim(v_mvarIds_1996_, v___x_2032_, v___y_1926_, v___y_1927_, v___y_1928_, v___y_1929_);
if (lean_obj_tag(v___x_2035_) == 0)
{
lean_dec_ref_known(v___x_2035_, 1);
lean_dec(v_a_2034_);
v___y_1963_ = v___x_1989_;
v___y_1964_ = v_a_1994_;
v___y_1965_ = v___y_1926_;
v___y_1966_ = v___y_1927_;
v___y_1967_ = v___y_1928_;
v___y_1968_ = v___y_1929_;
goto v___jp_1962_;
}
else
{
lean_object* v_a_2036_; lean_object* v___x_2038_; uint8_t v_isShared_2039_; uint8_t v_isSharedCheck_2057_; 
lean_dec(v_a_1994_);
lean_dec(v_weight_1920_);
v_a_2036_ = lean_ctor_get(v___x_2035_, 0);
v_isSharedCheck_2057_ = !lean_is_exclusive(v___x_2035_);
if (v_isSharedCheck_2057_ == 0)
{
v___x_2038_ = v___x_2035_;
v_isShared_2039_ = v_isSharedCheck_2057_;
goto v_resetjp_2037_;
}
else
{
lean_inc(v_a_2036_);
lean_dec(v___x_2035_);
v___x_2038_ = lean_box(0);
v_isShared_2039_ = v_isSharedCheck_2057_;
goto v_resetjp_2037_;
}
v_resetjp_2037_:
{
uint8_t v___x_2040_; 
v___x_2040_ = l_Lean_Exception_isInterrupt(v_a_2036_);
if (v___x_2040_ == 0)
{
uint8_t v___x_2041_; 
lean_inc(v_a_2036_);
v___x_2041_ = l_Lean_Exception_isRuntime(v_a_2036_);
if (v___x_2041_ == 0)
{
lean_object* v___x_2042_; 
lean_del_object(v___x_2038_);
lean_dec(v_a_2036_);
v___x_2042_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2034_, v___y_1927_, v___y_1929_);
if (lean_obj_tag(v___x_2042_) == 0)
{
lean_dec_ref_known(v___x_2042_, 1);
goto v___jp_1984_;
}
else
{
lean_object* v_a_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2050_; 
v_a_2043_ = lean_ctor_get(v___x_2042_, 0);
v_isSharedCheck_2050_ = !lean_is_exclusive(v___x_2042_);
if (v_isSharedCheck_2050_ == 0)
{
v___x_2045_ = v___x_2042_;
v_isShared_2046_ = v_isSharedCheck_2050_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_a_2043_);
lean_dec(v___x_2042_);
v___x_2045_ = lean_box(0);
v_isShared_2046_ = v_isSharedCheck_2050_;
goto v_resetjp_2044_;
}
v_resetjp_2044_:
{
lean_object* v___x_2048_; 
if (v_isShared_2046_ == 0)
{
v___x_2048_ = v___x_2045_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2049_; 
v_reuseFailAlloc_2049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2049_, 0, v_a_2043_);
v___x_2048_ = v_reuseFailAlloc_2049_;
goto v_reusejp_2047_;
}
v_reusejp_2047_:
{
return v___x_2048_;
}
}
}
}
else
{
lean_object* v___x_2052_; 
lean_dec(v_a_2034_);
if (v_isShared_2039_ == 0)
{
v___x_2052_ = v___x_2038_;
goto v_reusejp_2051_;
}
else
{
lean_object* v_reuseFailAlloc_2053_; 
v_reuseFailAlloc_2053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2053_, 0, v_a_2036_);
v___x_2052_ = v_reuseFailAlloc_2053_;
goto v_reusejp_2051_;
}
v_reusejp_2051_:
{
return v___x_2052_;
}
}
}
else
{
lean_object* v___x_2055_; 
lean_dec(v_a_2034_);
if (v_isShared_2039_ == 0)
{
v___x_2055_ = v___x_2038_;
goto v_reusejp_2054_;
}
else
{
lean_object* v_reuseFailAlloc_2056_; 
v_reuseFailAlloc_2056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2056_, 0, v_a_2036_);
v___x_2055_ = v_reuseFailAlloc_2056_;
goto v_reusejp_2054_;
}
v_reusejp_2054_:
{
return v___x_2055_;
}
}
}
}
}
else
{
lean_object* v_a_2058_; lean_object* v___x_2060_; uint8_t v_isShared_2061_; uint8_t v_isSharedCheck_2065_; 
lean_dec(v_a_1994_);
lean_dec(v_weight_1920_);
v_a_2058_ = lean_ctor_get(v___x_2033_, 0);
v_isSharedCheck_2065_ = !lean_is_exclusive(v___x_2033_);
if (v_isSharedCheck_2065_ == 0)
{
v___x_2060_ = v___x_2033_;
v_isShared_2061_ = v_isSharedCheck_2065_;
goto v_resetjp_2059_;
}
else
{
lean_inc(v_a_2058_);
lean_dec(v___x_2033_);
v___x_2060_ = lean_box(0);
v_isShared_2061_ = v_isSharedCheck_2065_;
goto v_resetjp_2059_;
}
v_resetjp_2059_:
{
lean_object* v___x_2063_; 
if (v_isShared_2061_ == 0)
{
v___x_2063_ = v___x_2060_;
goto v_reusejp_2062_;
}
else
{
lean_object* v_reuseFailAlloc_2064_; 
v_reuseFailAlloc_2064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2064_, 0, v_a_2058_);
v___x_2063_ = v_reuseFailAlloc_2064_;
goto v_reusejp_2062_;
}
v_reusejp_2062_:
{
return v___x_2063_;
}
}
}
}
}
}
else
{
lean_object* v___x_2066_; lean_object* v_mctx_2067_; lean_object* v___x_2068_; 
v___x_2066_ = lean_st_ref_get(v___y_1927_);
v_mctx_2067_ = lean_ctor_get(v___x_2066_, 0);
lean_inc_ref_n(v_mctx_2067_, 2);
lean_dec(v___x_2066_);
lean_inc_ref(v_eNew_1995_);
v___x_2068_ = l_Lean_Meta_Rewrites_dischargableWithRfl_x3f(v_mctx_2067_, v_eNew_1995_, v___y_1926_, v___y_1927_, v___y_1928_, v___y_1929_);
if (lean_obj_tag(v___x_2068_) == 0)
{
lean_object* v_a_2069_; lean_object* v___x_2071_; uint8_t v_isShared_2072_; uint8_t v_isSharedCheck_2079_; 
v_a_2069_ = lean_ctor_get(v___x_2068_, 0);
v_isSharedCheck_2079_ = !lean_is_exclusive(v___x_2068_);
if (v_isSharedCheck_2079_ == 0)
{
v___x_2071_ = v___x_2068_;
v_isShared_2072_ = v_isSharedCheck_2079_;
goto v_resetjp_2070_;
}
else
{
lean_inc(v_a_2069_);
lean_dec(v___x_2068_);
v___x_2071_ = lean_box(0);
v_isShared_2072_ = v_isSharedCheck_2079_;
goto v_resetjp_2070_;
}
v_resetjp_2070_:
{
lean_object* v___x_2073_; uint8_t v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2077_; 
v___x_2073_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2073_, 0, v___y_1988_);
lean_ctor_set(v___x_2073_, 1, v_weight_1920_);
lean_ctor_set(v___x_2073_, 2, v_a_1994_);
lean_ctor_set(v___x_2073_, 3, v_mctx_2067_);
lean_ctor_set_uint8(v___x_2073_, sizeof(void*)*4, v_symm_1923_);
v___x_2074_ = lean_unbox(v_a_2069_);
lean_dec(v_a_2069_);
lean_ctor_set_uint8(v___x_2073_, sizeof(void*)*4 + 1, v___x_2074_);
v___x_2075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2075_, 0, v___x_2073_);
if (v_isShared_2072_ == 0)
{
lean_ctor_set(v___x_2071_, 0, v___x_2075_);
v___x_2077_ = v___x_2071_;
goto v_reusejp_2076_;
}
else
{
lean_object* v_reuseFailAlloc_2078_; 
v_reuseFailAlloc_2078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2078_, 0, v___x_2075_);
v___x_2077_ = v_reuseFailAlloc_2078_;
goto v_reusejp_2076_;
}
v_reusejp_2076_:
{
return v___x_2077_;
}
}
}
else
{
lean_object* v_a_2080_; lean_object* v___x_2082_; uint8_t v_isShared_2083_; uint8_t v_isSharedCheck_2087_; 
lean_dec_ref(v_mctx_2067_);
lean_dec(v_a_1994_);
lean_dec_ref(v___y_1988_);
lean_dec(v_weight_1920_);
v_a_2080_ = lean_ctor_get(v___x_2068_, 0);
v_isSharedCheck_2087_ = !lean_is_exclusive(v___x_2068_);
if (v_isSharedCheck_2087_ == 0)
{
v___x_2082_ = v___x_2068_;
v_isShared_2083_ = v_isSharedCheck_2087_;
goto v_resetjp_2081_;
}
else
{
lean_inc(v_a_2080_);
lean_dec(v___x_2068_);
v___x_2082_ = lean_box(0);
v_isShared_2083_ = v_isSharedCheck_2087_;
goto v_resetjp_2081_;
}
v_resetjp_2081_:
{
lean_object* v___x_2085_; 
if (v_isShared_2083_ == 0)
{
v___x_2085_ = v___x_2082_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2086_; 
v_reuseFailAlloc_2086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2086_, 0, v_a_2080_);
v___x_2085_ = v_reuseFailAlloc_2086_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
return v___x_2085_;
}
}
}
}
}
else
{
lean_object* v_a_2088_; lean_object* v___x_2090_; uint8_t v_isShared_2091_; uint8_t v_isSharedCheck_2118_; 
lean_dec_ref(v___y_1988_);
lean_dec(v_weight_1920_);
v_a_2088_ = lean_ctor_get(v___x_1993_, 0);
v_isSharedCheck_2118_ = !lean_is_exclusive(v___x_1993_);
if (v_isSharedCheck_2118_ == 0)
{
v___x_2090_ = v___x_1993_;
v_isShared_2091_ = v_isSharedCheck_2118_;
goto v_resetjp_2089_;
}
else
{
lean_inc(v_a_2088_);
lean_dec(v___x_1993_);
v___x_2090_ = lean_box(0);
v_isShared_2091_ = v_isSharedCheck_2118_;
goto v_resetjp_2089_;
}
v_resetjp_2089_:
{
uint8_t v___x_2092_; 
v___x_2092_ = l_Lean_Exception_isInterrupt(v_a_2088_);
if (v___x_2092_ == 0)
{
uint8_t v___x_2093_; 
lean_inc(v_a_2088_);
v___x_2093_ = l_Lean_Exception_isRuntime(v_a_2088_);
if (v___x_2093_ == 0)
{
lean_object* v___x_2094_; 
lean_del_object(v___x_2090_);
lean_dec(v_a_2088_);
v___x_2094_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1992_, v___y_1927_, v___y_1929_);
if (lean_obj_tag(v___x_2094_) == 0)
{
lean_object* v___x_2096_; uint8_t v_isShared_2097_; uint8_t v_isSharedCheck_2102_; 
v_isSharedCheck_2102_ = !lean_is_exclusive(v___x_2094_);
if (v_isSharedCheck_2102_ == 0)
{
lean_object* v_unused_2103_; 
v_unused_2103_ = lean_ctor_get(v___x_2094_, 0);
lean_dec(v_unused_2103_);
v___x_2096_ = v___x_2094_;
v_isShared_2097_ = v_isSharedCheck_2102_;
goto v_resetjp_2095_;
}
else
{
lean_dec(v___x_2094_);
v___x_2096_ = lean_box(0);
v_isShared_2097_ = v_isSharedCheck_2102_;
goto v_resetjp_2095_;
}
v_resetjp_2095_:
{
lean_object* v___x_2098_; lean_object* v___x_2100_; 
v___x_2098_ = lean_box(0);
if (v_isShared_2097_ == 0)
{
lean_ctor_set(v___x_2096_, 0, v___x_2098_);
v___x_2100_ = v___x_2096_;
goto v_reusejp_2099_;
}
else
{
lean_object* v_reuseFailAlloc_2101_; 
v_reuseFailAlloc_2101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2101_, 0, v___x_2098_);
v___x_2100_ = v_reuseFailAlloc_2101_;
goto v_reusejp_2099_;
}
v_reusejp_2099_:
{
return v___x_2100_;
}
}
}
else
{
lean_object* v_a_2104_; lean_object* v___x_2106_; uint8_t v_isShared_2107_; uint8_t v_isSharedCheck_2111_; 
v_a_2104_ = lean_ctor_get(v___x_2094_, 0);
v_isSharedCheck_2111_ = !lean_is_exclusive(v___x_2094_);
if (v_isSharedCheck_2111_ == 0)
{
v___x_2106_ = v___x_2094_;
v_isShared_2107_ = v_isSharedCheck_2111_;
goto v_resetjp_2105_;
}
else
{
lean_inc(v_a_2104_);
lean_dec(v___x_2094_);
v___x_2106_ = lean_box(0);
v_isShared_2107_ = v_isSharedCheck_2111_;
goto v_resetjp_2105_;
}
v_resetjp_2105_:
{
lean_object* v___x_2109_; 
if (v_isShared_2107_ == 0)
{
v___x_2109_ = v___x_2106_;
goto v_reusejp_2108_;
}
else
{
lean_object* v_reuseFailAlloc_2110_; 
v_reuseFailAlloc_2110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2110_, 0, v_a_2104_);
v___x_2109_ = v_reuseFailAlloc_2110_;
goto v_reusejp_2108_;
}
v_reusejp_2108_:
{
return v___x_2109_;
}
}
}
}
else
{
lean_object* v___x_2113_; 
lean_dec(v_a_1992_);
if (v_isShared_2091_ == 0)
{
v___x_2113_ = v___x_2090_;
goto v_reusejp_2112_;
}
else
{
lean_object* v_reuseFailAlloc_2114_; 
v_reuseFailAlloc_2114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2114_, 0, v_a_2088_);
v___x_2113_ = v_reuseFailAlloc_2114_;
goto v_reusejp_2112_;
}
v_reusejp_2112_:
{
return v___x_2113_;
}
}
}
else
{
lean_object* v___x_2116_; 
lean_dec(v_a_1992_);
if (v_isShared_2091_ == 0)
{
v___x_2116_ = v___x_2090_;
goto v_reusejp_2115_;
}
else
{
lean_object* v_reuseFailAlloc_2117_; 
v_reuseFailAlloc_2117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2117_, 0, v_a_2088_);
v___x_2116_ = v_reuseFailAlloc_2117_;
goto v_reusejp_2115_;
}
v_reusejp_2115_:
{
return v___x_2116_;
}
}
}
}
}
else
{
lean_object* v_a_2119_; lean_object* v___x_2121_; uint8_t v_isShared_2122_; uint8_t v_isSharedCheck_2126_; 
lean_dec_ref(v___y_1988_);
lean_dec_ref(v_target_1922_);
lean_dec(v_goal_1921_);
lean_dec(v_weight_1920_);
v_a_2119_ = lean_ctor_get(v___x_1991_, 0);
v_isSharedCheck_2126_ = !lean_is_exclusive(v___x_1991_);
if (v_isSharedCheck_2126_ == 0)
{
v___x_2121_ = v___x_1991_;
v_isShared_2122_ = v_isSharedCheck_2126_;
goto v_resetjp_2120_;
}
else
{
lean_inc(v_a_2119_);
lean_dec(v___x_1991_);
v___x_2121_ = lean_box(0);
v_isShared_2122_ = v_isSharedCheck_2126_;
goto v_resetjp_2120_;
}
v_resetjp_2120_:
{
lean_object* v___x_2124_; 
if (v_isShared_2122_ == 0)
{
v___x_2124_ = v___x_2121_;
goto v_reusejp_2123_;
}
else
{
lean_object* v_reuseFailAlloc_2125_; 
v_reuseFailAlloc_2125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2125_, 0, v_a_2119_);
v___x_2124_ = v_reuseFailAlloc_2125_;
goto v_reusejp_2123_;
}
v_reusejp_2123_:
{
return v___x_2124_;
}
}
}
}
v___jp_2127_:
{
lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; 
lean_inc_ref(v___y_2131_);
v___x_2132_ = l_Lean_stringToMessageData(v___y_2131_);
lean_inc_ref(v___y_2130_);
v___x_2133_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2133_, 0, v___y_2130_);
lean_ctor_set(v___x_2133_, 1, v___x_2132_);
lean_inc_ref(v___y_2129_);
v___x_2134_ = l_Lean_MessageData_ofExpr(v___y_2129_);
v___x_2135_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2135_, 0, v___x_2133_);
lean_ctor_set(v___x_2135_, 1, v___x_2134_);
lean_inc(v___y_2128_);
v___x_2136_ = l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2(v___y_2128_, v___x_2135_, v___y_1926_, v___y_1927_, v___y_1928_, v___y_1929_);
if (lean_obj_tag(v___x_2136_) == 0)
{
lean_dec_ref_known(v___x_2136_, 1);
v___y_1988_ = v___y_2129_;
goto v___jp_1987_;
}
else
{
lean_object* v_a_2137_; lean_object* v___x_2139_; uint8_t v_isShared_2140_; uint8_t v_isSharedCheck_2144_; 
lean_dec_ref(v___y_2129_);
lean_dec_ref(v_target_1922_);
lean_dec(v_goal_1921_);
lean_dec(v_weight_1920_);
v_a_2137_ = lean_ctor_get(v___x_2136_, 0);
v_isSharedCheck_2144_ = !lean_is_exclusive(v___x_2136_);
if (v_isSharedCheck_2144_ == 0)
{
v___x_2139_ = v___x_2136_;
v_isShared_2140_ = v_isSharedCheck_2144_;
goto v_resetjp_2138_;
}
else
{
lean_inc(v_a_2137_);
lean_dec(v___x_2136_);
v___x_2139_ = lean_box(0);
v_isShared_2140_ = v_isSharedCheck_2144_;
goto v_resetjp_2138_;
}
v_resetjp_2138_:
{
lean_object* v___x_2142_; 
if (v_isShared_2140_ == 0)
{
v___x_2142_ = v___x_2139_;
goto v_reusejp_2141_;
}
else
{
lean_object* v_reuseFailAlloc_2143_; 
v_reuseFailAlloc_2143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2143_, 0, v_a_2137_);
v___x_2142_ = v_reuseFailAlloc_2143_;
goto v_reusejp_2141_;
}
v_reusejp_2141_:
{
return v___x_2142_;
}
}
}
}
v___jp_2145_:
{
lean_object* v_toCold_2147_; lean_object* v_options_2148_; uint8_t v_hasTrace_2149_; 
v_toCold_2147_ = lean_ctor_get(v___y_1928_, 0);
v_options_2148_ = lean_ctor_get(v_toCold_2147_, 2);
v_hasTrace_2149_ = lean_ctor_get_uint8(v_options_2148_, sizeof(void*)*1);
if (v_hasTrace_2149_ == 0)
{
v___y_1988_ = v_val_2146_;
goto v___jp_1987_;
}
else
{
lean_object* v_inheritedTraceOptions_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; uint8_t v___x_2153_; 
v_inheritedTraceOptions_2150_ = lean_ctor_get(v_toCold_2147_, 11);
v___x_2151_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__2_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_));
v___x_2152_ = lean_obj_once(&l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__5, &l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__5_once, _init_l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__5);
v___x_2153_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2150_, v_options_2148_, v___x_2152_);
if (v___x_2153_ == 0)
{
v___y_1988_ = v_val_2146_;
goto v___jp_1987_;
}
else
{
lean_object* v___x_2154_; 
v___x_2154_ = lean_obj_once(&l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__7, &l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__7_once, _init_l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__7);
if (v_symm_1923_ == 0)
{
lean_object* v___x_2155_; 
v___x_2155_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___closed__1));
v___y_2128_ = v___x_2151_;
v___y_2129_ = v_val_2146_;
v___y_2130_ = v___x_2154_;
v___y_2131_ = v___x_2155_;
goto v___jp_2127_;
}
else
{
lean_object* v___x_2156_; 
v___x_2156_ = ((lean_object*)(l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__8));
v___y_2128_ = v___x_2151_;
v___y_2129_ = v_val_2146_;
v___y_2130_ = v___x_2154_;
v___y_2131_ = v___x_2156_;
goto v___jp_2127_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rwLemma___lam__0___boxed(lean_object* v_weight_2202_, lean_object* v_goal_2203_, lean_object* v_target_2204_, lean_object* v_symm_2205_, lean_object* v_side_2206_, lean_object* v_lem_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_){
_start:
{
uint8_t v_symm_boxed_2213_; uint8_t v_side_boxed_2214_; lean_object* v_res_2215_; 
v_symm_boxed_2213_ = lean_unbox(v_symm_2205_);
v_side_boxed_2214_ = lean_unbox(v_side_2206_);
v_res_2215_ = l_Lean_Meta_Rewrites_rwLemma___lam__0(v_weight_2202_, v_goal_2203_, v_target_2204_, v_symm_boxed_2213_, v_side_boxed_2214_, v_lem_2207_, v___y_2208_, v___y_2209_, v___y_2210_, v___y_2211_);
lean_dec(v___y_2211_);
lean_dec_ref(v___y_2210_);
lean_dec(v___y_2209_);
lean_dec_ref(v___y_2208_);
return v_res_2215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rwLemma(lean_object* v_ctx_2216_, lean_object* v_goal_2217_, lean_object* v_target_2218_, uint8_t v_side_2219_, lean_object* v_lem_2220_, uint8_t v_symm_2221_, lean_object* v_weight_2222_, lean_object* v_a_2223_, lean_object* v_a_2224_, lean_object* v_a_2225_, lean_object* v_a_2226_){
_start:
{
lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___f_2230_; lean_object* v___x_2231_; 
v___x_2228_ = lean_box(v_symm_2221_);
v___x_2229_ = lean_box(v_side_2219_);
v___f_2230_ = lean_alloc_closure((void*)(l_Lean_Meta_Rewrites_rwLemma___lam__0___boxed), 11, 6);
lean_closure_set(v___f_2230_, 0, v_weight_2222_);
lean_closure_set(v___f_2230_, 1, v_goal_2217_);
lean_closure_set(v___f_2230_, 2, v_target_2218_);
lean_closure_set(v___f_2230_, 3, v___x_2228_);
lean_closure_set(v___f_2230_, 4, v___x_2229_);
lean_closure_set(v___f_2230_, 5, v_lem_2220_);
v___x_2231_ = l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__0___redArg(v_ctx_2216_, v___f_2230_, v_a_2223_, v_a_2224_, v_a_2225_, v_a_2226_);
return v___x_2231_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rwLemma___boxed(lean_object* v_ctx_2232_, lean_object* v_goal_2233_, lean_object* v_target_2234_, lean_object* v_side_2235_, lean_object* v_lem_2236_, lean_object* v_symm_2237_, lean_object* v_weight_2238_, lean_object* v_a_2239_, lean_object* v_a_2240_, lean_object* v_a_2241_, lean_object* v_a_2242_, lean_object* v_a_2243_){
_start:
{
uint8_t v_side_boxed_2244_; uint8_t v_symm_boxed_2245_; lean_object* v_res_2246_; 
v_side_boxed_2244_ = lean_unbox(v_side_2235_);
v_symm_boxed_2245_ = lean_unbox(v_symm_2237_);
v_res_2246_ = l_Lean_Meta_Rewrites_rwLemma(v_ctx_2232_, v_goal_2233_, v_target_2234_, v_side_boxed_2244_, v_lem_2236_, v_symm_boxed_2245_, v_weight_2238_, v_a_2239_, v_a_2240_, v_a_2241_, v_a_2242_);
lean_dec(v_a_2242_);
lean_dec_ref(v_a_2241_);
lean_dec(v_a_2240_);
lean_dec_ref(v_a_2239_);
return v_res_2246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__1___redArg(lean_object* v_type_2247_, lean_object* v_k_2248_, uint8_t v_cleanupAnnotations_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_){
_start:
{
lean_object* v___f_2255_; uint8_t v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; 
v___f_2255_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2255_, 0, v_k_2248_);
v___x_2256_ = 0;
v___x_2257_ = lean_box(0);
v___x_2258_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_2256_, v___x_2257_, v_type_2247_, v___f_2255_, v_cleanupAnnotations_2249_, v___x_2256_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_);
if (lean_obj_tag(v___x_2258_) == 0)
{
lean_object* v_a_2259_; lean_object* v___x_2261_; uint8_t v_isShared_2262_; uint8_t v_isSharedCheck_2266_; 
v_a_2259_ = lean_ctor_get(v___x_2258_, 0);
v_isSharedCheck_2266_ = !lean_is_exclusive(v___x_2258_);
if (v_isSharedCheck_2266_ == 0)
{
v___x_2261_ = v___x_2258_;
v_isShared_2262_ = v_isSharedCheck_2266_;
goto v_resetjp_2260_;
}
else
{
lean_inc(v_a_2259_);
lean_dec(v___x_2258_);
v___x_2261_ = lean_box(0);
v_isShared_2262_ = v_isSharedCheck_2266_;
goto v_resetjp_2260_;
}
v_resetjp_2260_:
{
lean_object* v___x_2264_; 
if (v_isShared_2262_ == 0)
{
v___x_2264_ = v___x_2261_;
goto v_reusejp_2263_;
}
else
{
lean_object* v_reuseFailAlloc_2265_; 
v_reuseFailAlloc_2265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2265_, 0, v_a_2259_);
v___x_2264_ = v_reuseFailAlloc_2265_;
goto v_reusejp_2263_;
}
v_reusejp_2263_:
{
return v___x_2264_;
}
}
}
else
{
lean_object* v_a_2267_; lean_object* v___x_2269_; uint8_t v_isShared_2270_; uint8_t v_isSharedCheck_2274_; 
v_a_2267_ = lean_ctor_get(v___x_2258_, 0);
v_isSharedCheck_2274_ = !lean_is_exclusive(v___x_2258_);
if (v_isSharedCheck_2274_ == 0)
{
v___x_2269_ = v___x_2258_;
v_isShared_2270_ = v_isSharedCheck_2274_;
goto v_resetjp_2268_;
}
else
{
lean_inc(v_a_2267_);
lean_dec(v___x_2258_);
v___x_2269_ = lean_box(0);
v_isShared_2270_ = v_isSharedCheck_2274_;
goto v_resetjp_2268_;
}
v_resetjp_2268_:
{
lean_object* v___x_2272_; 
if (v_isShared_2270_ == 0)
{
v___x_2272_ = v___x_2269_;
goto v_reusejp_2271_;
}
else
{
lean_object* v_reuseFailAlloc_2273_; 
v_reuseFailAlloc_2273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2273_, 0, v_a_2267_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__1___redArg___boxed(lean_object* v_type_2275_, lean_object* v_k_2276_, lean_object* v_cleanupAnnotations_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2283_; lean_object* v_res_2284_; 
v_cleanupAnnotations_boxed_2283_ = lean_unbox(v_cleanupAnnotations_2277_);
v_res_2284_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__1___redArg(v_type_2275_, v_k_2276_, v_cleanupAnnotations_boxed_2283_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_);
lean_dec(v___y_2281_);
lean_dec_ref(v___y_2280_);
lean_dec(v___y_2279_);
lean_dec_ref(v___y_2278_);
return v_res_2284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__1(lean_object* v_00_u03b1_2285_, lean_object* v_type_2286_, lean_object* v_k_2287_, uint8_t v_cleanupAnnotations_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_){
_start:
{
lean_object* v___x_2294_; 
v___x_2294_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__1___redArg(v_type_2286_, v_k_2287_, v_cleanupAnnotations_2288_, v___y_2289_, v___y_2290_, v___y_2291_, v___y_2292_);
return v___x_2294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__1___boxed(lean_object* v_00_u03b1_2295_, lean_object* v_type_2296_, lean_object* v_k_2297_, lean_object* v_cleanupAnnotations_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2304_; lean_object* v_res_2305_; 
v_cleanupAnnotations_boxed_2304_ = lean_unbox(v_cleanupAnnotations_2298_);
v_res_2305_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__1(v_00_u03b1_2295_, v_type_2296_, v_k_2297_, v_cleanupAnnotations_boxed_2304_, v___y_2299_, v___y_2300_, v___y_2301_, v___y_2302_);
lean_dec(v___y_2302_);
lean_dec_ref(v___y_2301_);
lean_dec(v___y_2300_);
lean_dec_ref(v___y_2299_);
return v_res_2305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__2___redArg(lean_object* v_e_2306_, lean_object* v_k_2307_, uint8_t v_cleanupAnnotations_2308_, uint8_t v_preserveNondepLet_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_){
_start:
{
lean_object* v___f_2315_; uint8_t v___x_2316_; uint8_t v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; 
v___f_2315_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2315_, 0, v_k_2307_);
v___x_2316_ = 1;
v___x_2317_ = 0;
v___x_2318_ = lean_box(0);
v___x_2319_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_2306_, v___x_2316_, v___x_2316_, v_preserveNondepLet_2309_, v___x_2317_, v___x_2318_, v___f_2315_, v_cleanupAnnotations_2308_, v___y_2310_, v___y_2311_, v___y_2312_, v___y_2313_);
if (lean_obj_tag(v___x_2319_) == 0)
{
lean_object* v_a_2320_; lean_object* v___x_2322_; uint8_t v_isShared_2323_; uint8_t v_isSharedCheck_2327_; 
v_a_2320_ = lean_ctor_get(v___x_2319_, 0);
v_isSharedCheck_2327_ = !lean_is_exclusive(v___x_2319_);
if (v_isSharedCheck_2327_ == 0)
{
v___x_2322_ = v___x_2319_;
v_isShared_2323_ = v_isSharedCheck_2327_;
goto v_resetjp_2321_;
}
else
{
lean_inc(v_a_2320_);
lean_dec(v___x_2319_);
v___x_2322_ = lean_box(0);
v_isShared_2323_ = v_isSharedCheck_2327_;
goto v_resetjp_2321_;
}
v_resetjp_2321_:
{
lean_object* v___x_2325_; 
if (v_isShared_2323_ == 0)
{
v___x_2325_ = v___x_2322_;
goto v_reusejp_2324_;
}
else
{
lean_object* v_reuseFailAlloc_2326_; 
v_reuseFailAlloc_2326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2326_, 0, v_a_2320_);
v___x_2325_ = v_reuseFailAlloc_2326_;
goto v_reusejp_2324_;
}
v_reusejp_2324_:
{
return v___x_2325_;
}
}
}
else
{
lean_object* v_a_2328_; lean_object* v___x_2330_; uint8_t v_isShared_2331_; uint8_t v_isSharedCheck_2335_; 
v_a_2328_ = lean_ctor_get(v___x_2319_, 0);
v_isSharedCheck_2335_ = !lean_is_exclusive(v___x_2319_);
if (v_isSharedCheck_2335_ == 0)
{
v___x_2330_ = v___x_2319_;
v_isShared_2331_ = v_isSharedCheck_2335_;
goto v_resetjp_2329_;
}
else
{
lean_inc(v_a_2328_);
lean_dec(v___x_2319_);
v___x_2330_ = lean_box(0);
v_isShared_2331_ = v_isSharedCheck_2335_;
goto v_resetjp_2329_;
}
v_resetjp_2329_:
{
lean_object* v___x_2333_; 
if (v_isShared_2331_ == 0)
{
v___x_2333_ = v___x_2330_;
goto v_reusejp_2332_;
}
else
{
lean_object* v_reuseFailAlloc_2334_; 
v_reuseFailAlloc_2334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2334_, 0, v_a_2328_);
v___x_2333_ = v_reuseFailAlloc_2334_;
goto v_reusejp_2332_;
}
v_reusejp_2332_:
{
return v___x_2333_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__2___redArg___boxed(lean_object* v_e_2336_, lean_object* v_k_2337_, lean_object* v_cleanupAnnotations_2338_, lean_object* v_preserveNondepLet_2339_, lean_object* v___y_2340_, lean_object* v___y_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_, lean_object* v___y_2344_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2345_; uint8_t v_preserveNondepLet_boxed_2346_; lean_object* v_res_2347_; 
v_cleanupAnnotations_boxed_2345_ = lean_unbox(v_cleanupAnnotations_2338_);
v_preserveNondepLet_boxed_2346_ = lean_unbox(v_preserveNondepLet_2339_);
v_res_2347_ = l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__2___redArg(v_e_2336_, v_k_2337_, v_cleanupAnnotations_boxed_2345_, v_preserveNondepLet_boxed_2346_, v___y_2340_, v___y_2341_, v___y_2342_, v___y_2343_);
lean_dec(v___y_2343_);
lean_dec_ref(v___y_2342_);
lean_dec(v___y_2341_);
lean_dec_ref(v___y_2340_);
return v_res_2347_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__2(lean_object* v_00_u03b1_2348_, lean_object* v_e_2349_, lean_object* v_k_2350_, uint8_t v_cleanupAnnotations_2351_, uint8_t v_preserveNondepLet_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_){
_start:
{
lean_object* v___x_2358_; 
v___x_2358_ = l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__2___redArg(v_e_2349_, v_k_2350_, v_cleanupAnnotations_2351_, v_preserveNondepLet_2352_, v___y_2353_, v___y_2354_, v___y_2355_, v___y_2356_);
return v___x_2358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__2___boxed(lean_object* v_00_u03b1_2359_, lean_object* v_e_2360_, lean_object* v_k_2361_, lean_object* v_cleanupAnnotations_2362_, lean_object* v_preserveNondepLet_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2369_; uint8_t v_preserveNondepLet_boxed_2370_; lean_object* v_res_2371_; 
v_cleanupAnnotations_boxed_2369_ = lean_unbox(v_cleanupAnnotations_2362_);
v_preserveNondepLet_boxed_2370_ = lean_unbox(v_preserveNondepLet_2363_);
v_res_2371_ = l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__2(v_00_u03b1_2359_, v_e_2360_, v_k_2361_, v_cleanupAnnotations_boxed_2369_, v_preserveNondepLet_boxed_2370_, v___y_2364_, v___y_2365_, v___y_2366_, v___y_2367_);
lean_dec(v___y_2367_);
lean_dec_ref(v___y_2366_);
lean_dec(v___y_2365_);
lean_dec_ref(v___y_2364_);
return v_res_2371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___lam__0(lean_object* v_f_2372_, lean_object* v_e_x27_2373_, lean_object* v_a_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_){
_start:
{
lean_object* v___x_2380_; 
lean_inc(v___y_2378_);
lean_inc_ref(v___y_2377_);
lean_inc(v___y_2376_);
lean_inc_ref(v___y_2375_);
lean_inc_ref(v_e_x27_2373_);
v___x_2380_ = lean_apply_7(v_f_2372_, v_a_2374_, v_e_x27_2373_, v___y_2375_, v___y_2376_, v___y_2377_, v___y_2378_, lean_box(0));
if (lean_obj_tag(v___x_2380_) == 0)
{
lean_object* v_a_2381_; lean_object* v___x_2383_; uint8_t v_isShared_2384_; uint8_t v_isSharedCheck_2389_; 
v_a_2381_ = lean_ctor_get(v___x_2380_, 0);
v_isSharedCheck_2389_ = !lean_is_exclusive(v___x_2380_);
if (v_isSharedCheck_2389_ == 0)
{
v___x_2383_ = v___x_2380_;
v_isShared_2384_ = v_isSharedCheck_2389_;
goto v_resetjp_2382_;
}
else
{
lean_inc(v_a_2381_);
lean_dec(v___x_2380_);
v___x_2383_ = lean_box(0);
v_isShared_2384_ = v_isSharedCheck_2389_;
goto v_resetjp_2382_;
}
v_resetjp_2382_:
{
lean_object* v___x_2385_; lean_object* v___x_2387_; 
v___x_2385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2385_, 0, v_e_x27_2373_);
lean_ctor_set(v___x_2385_, 1, v_a_2381_);
if (v_isShared_2384_ == 0)
{
lean_ctor_set(v___x_2383_, 0, v___x_2385_);
v___x_2387_ = v___x_2383_;
goto v_reusejp_2386_;
}
else
{
lean_object* v_reuseFailAlloc_2388_; 
v_reuseFailAlloc_2388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2388_, 0, v___x_2385_);
v___x_2387_ = v_reuseFailAlloc_2388_;
goto v_reusejp_2386_;
}
v_reusejp_2386_:
{
return v___x_2387_;
}
}
}
else
{
lean_object* v_a_2390_; lean_object* v___x_2392_; uint8_t v_isShared_2393_; uint8_t v_isSharedCheck_2397_; 
lean_dec_ref(v_e_x27_2373_);
v_a_2390_ = lean_ctor_get(v___x_2380_, 0);
v_isSharedCheck_2397_ = !lean_is_exclusive(v___x_2380_);
if (v_isSharedCheck_2397_ == 0)
{
v___x_2392_ = v___x_2380_;
v_isShared_2393_ = v_isSharedCheck_2397_;
goto v_resetjp_2391_;
}
else
{
lean_inc(v_a_2390_);
lean_dec(v___x_2380_);
v___x_2392_ = lean_box(0);
v_isShared_2393_ = v_isSharedCheck_2397_;
goto v_resetjp_2391_;
}
v_resetjp_2391_:
{
lean_object* v___x_2395_; 
if (v_isShared_2393_ == 0)
{
v___x_2395_ = v___x_2392_;
goto v_reusejp_2394_;
}
else
{
lean_object* v_reuseFailAlloc_2396_; 
v_reuseFailAlloc_2396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2396_, 0, v_a_2390_);
v___x_2395_ = v_reuseFailAlloc_2396_;
goto v_reusejp_2394_;
}
v_reusejp_2394_:
{
return v___x_2395_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___lam__0___boxed(lean_object* v_f_2398_, lean_object* v_e_x27_2399_, lean_object* v_a_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_){
_start:
{
lean_object* v_res_2406_; 
v_res_2406_ = l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___lam__0(v_f_2398_, v_e_x27_2399_, v_a_2400_, v___y_2401_, v___y_2402_, v___y_2403_, v___y_2404_);
lean_dec(v___y_2404_);
lean_dec_ref(v___y_2403_);
lean_dec(v___y_2402_);
lean_dec_ref(v___y_2401_);
return v_res_2406_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg(lean_object* v_f_2407_, lean_object* v_x_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_){
_start:
{
switch(lean_obj_tag(v_x_2408_))
{
case 7:
{
lean_object* v_binderName_2415_; lean_object* v_binderType_2416_; lean_object* v_body_2417_; uint8_t v_binderInfo_2418_; lean_object* v___x_2419_; 
v_binderName_2415_ = lean_ctor_get(v_x_2408_, 0);
v_binderType_2416_ = lean_ctor_get(v_x_2408_, 1);
v_body_2417_ = lean_ctor_get(v_x_2408_, 2);
v_binderInfo_2418_ = lean_ctor_get_uint8(v_x_2408_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_2416_);
lean_inc_ref(v_f_2407_);
v___x_2419_ = l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___lam__0(v_f_2407_, v_binderType_2416_, v___y_2409_, v___y_2410_, v___y_2411_, v___y_2412_, v___y_2413_);
if (lean_obj_tag(v___x_2419_) == 0)
{
lean_object* v_a_2420_; lean_object* v_fst_2421_; lean_object* v_snd_2422_; lean_object* v___x_2423_; 
v_a_2420_ = lean_ctor_get(v___x_2419_, 0);
lean_inc(v_a_2420_);
lean_dec_ref_known(v___x_2419_, 1);
v_fst_2421_ = lean_ctor_get(v_a_2420_, 0);
lean_inc(v_fst_2421_);
v_snd_2422_ = lean_ctor_get(v_a_2420_, 1);
lean_inc(v_snd_2422_);
lean_dec(v_a_2420_);
lean_inc_ref(v_body_2417_);
v___x_2423_ = l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___lam__0(v_f_2407_, v_body_2417_, v_snd_2422_, v___y_2410_, v___y_2411_, v___y_2412_, v___y_2413_);
if (lean_obj_tag(v___x_2423_) == 0)
{
lean_object* v_a_2424_; lean_object* v___x_2426_; uint8_t v_isShared_2427_; uint8_t v_isSharedCheck_2452_; 
v_a_2424_ = lean_ctor_get(v___x_2423_, 0);
v_isSharedCheck_2452_ = !lean_is_exclusive(v___x_2423_);
if (v_isSharedCheck_2452_ == 0)
{
v___x_2426_ = v___x_2423_;
v_isShared_2427_ = v_isSharedCheck_2452_;
goto v_resetjp_2425_;
}
else
{
lean_inc(v_a_2424_);
lean_dec(v___x_2423_);
v___x_2426_ = lean_box(0);
v_isShared_2427_ = v_isSharedCheck_2452_;
goto v_resetjp_2425_;
}
v_resetjp_2425_:
{
lean_object* v_fst_2428_; lean_object* v_snd_2429_; lean_object* v___x_2431_; uint8_t v_isShared_2432_; uint8_t v_isSharedCheck_2451_; 
v_fst_2428_ = lean_ctor_get(v_a_2424_, 0);
v_snd_2429_ = lean_ctor_get(v_a_2424_, 1);
v_isSharedCheck_2451_ = !lean_is_exclusive(v_a_2424_);
if (v_isSharedCheck_2451_ == 0)
{
v___x_2431_ = v_a_2424_;
v_isShared_2432_ = v_isSharedCheck_2451_;
goto v_resetjp_2430_;
}
else
{
lean_inc(v_snd_2429_);
lean_inc(v_fst_2428_);
lean_dec(v_a_2424_);
v___x_2431_ = lean_box(0);
v_isShared_2432_ = v_isSharedCheck_2451_;
goto v_resetjp_2430_;
}
v_resetjp_2430_:
{
lean_object* v___y_2434_; size_t v___x_2441_; size_t v___x_2442_; uint8_t v___x_2443_; 
v___x_2441_ = lean_ptr_addr(v_binderType_2416_);
v___x_2442_ = lean_ptr_addr(v_fst_2421_);
v___x_2443_ = lean_usize_dec_eq(v___x_2441_, v___x_2442_);
if (v___x_2443_ == 0)
{
lean_object* v___x_2444_; 
lean_inc(v_binderName_2415_);
lean_dec_ref_known(v_x_2408_, 3);
v___x_2444_ = l_Lean_Expr_forallE___override(v_binderName_2415_, v_fst_2421_, v_fst_2428_, v_binderInfo_2418_);
v___y_2434_ = v___x_2444_;
goto v___jp_2433_;
}
else
{
size_t v___x_2445_; size_t v___x_2446_; uint8_t v___x_2447_; 
v___x_2445_ = lean_ptr_addr(v_body_2417_);
v___x_2446_ = lean_ptr_addr(v_fst_2428_);
v___x_2447_ = lean_usize_dec_eq(v___x_2445_, v___x_2446_);
if (v___x_2447_ == 0)
{
lean_object* v___x_2448_; 
lean_inc(v_binderName_2415_);
lean_dec_ref_known(v_x_2408_, 3);
v___x_2448_ = l_Lean_Expr_forallE___override(v_binderName_2415_, v_fst_2421_, v_fst_2428_, v_binderInfo_2418_);
v___y_2434_ = v___x_2448_;
goto v___jp_2433_;
}
else
{
uint8_t v___x_2449_; 
v___x_2449_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_2418_, v_binderInfo_2418_);
if (v___x_2449_ == 0)
{
lean_object* v___x_2450_; 
lean_inc(v_binderName_2415_);
lean_dec_ref_known(v_x_2408_, 3);
v___x_2450_ = l_Lean_Expr_forallE___override(v_binderName_2415_, v_fst_2421_, v_fst_2428_, v_binderInfo_2418_);
v___y_2434_ = v___x_2450_;
goto v___jp_2433_;
}
else
{
lean_dec(v_fst_2428_);
lean_dec(v_fst_2421_);
v___y_2434_ = v_x_2408_;
goto v___jp_2433_;
}
}
}
v___jp_2433_:
{
lean_object* v___x_2436_; 
if (v_isShared_2432_ == 0)
{
lean_ctor_set(v___x_2431_, 0, v___y_2434_);
v___x_2436_ = v___x_2431_;
goto v_reusejp_2435_;
}
else
{
lean_object* v_reuseFailAlloc_2440_; 
v_reuseFailAlloc_2440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2440_, 0, v___y_2434_);
lean_ctor_set(v_reuseFailAlloc_2440_, 1, v_snd_2429_);
v___x_2436_ = v_reuseFailAlloc_2440_;
goto v_reusejp_2435_;
}
v_reusejp_2435_:
{
lean_object* v___x_2438_; 
if (v_isShared_2427_ == 0)
{
lean_ctor_set(v___x_2426_, 0, v___x_2436_);
v___x_2438_ = v___x_2426_;
goto v_reusejp_2437_;
}
else
{
lean_object* v_reuseFailAlloc_2439_; 
v_reuseFailAlloc_2439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2439_, 0, v___x_2436_);
v___x_2438_ = v_reuseFailAlloc_2439_;
goto v_reusejp_2437_;
}
v_reusejp_2437_:
{
return v___x_2438_;
}
}
}
}
}
}
else
{
lean_dec(v_fst_2421_);
lean_dec_ref_known(v_x_2408_, 3);
return v___x_2423_;
}
}
else
{
lean_dec_ref_known(v_x_2408_, 3);
lean_dec_ref(v_f_2407_);
return v___x_2419_;
}
}
case 6:
{
lean_object* v_binderName_2453_; lean_object* v_binderType_2454_; lean_object* v_body_2455_; uint8_t v_binderInfo_2456_; lean_object* v___x_2457_; 
v_binderName_2453_ = lean_ctor_get(v_x_2408_, 0);
v_binderType_2454_ = lean_ctor_get(v_x_2408_, 1);
v_body_2455_ = lean_ctor_get(v_x_2408_, 2);
v_binderInfo_2456_ = lean_ctor_get_uint8(v_x_2408_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_2454_);
lean_inc_ref(v_f_2407_);
v___x_2457_ = l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___lam__0(v_f_2407_, v_binderType_2454_, v___y_2409_, v___y_2410_, v___y_2411_, v___y_2412_, v___y_2413_);
if (lean_obj_tag(v___x_2457_) == 0)
{
lean_object* v_a_2458_; lean_object* v_fst_2459_; lean_object* v_snd_2460_; lean_object* v___x_2461_; 
v_a_2458_ = lean_ctor_get(v___x_2457_, 0);
lean_inc(v_a_2458_);
lean_dec_ref_known(v___x_2457_, 1);
v_fst_2459_ = lean_ctor_get(v_a_2458_, 0);
lean_inc(v_fst_2459_);
v_snd_2460_ = lean_ctor_get(v_a_2458_, 1);
lean_inc(v_snd_2460_);
lean_dec(v_a_2458_);
lean_inc_ref(v_body_2455_);
v___x_2461_ = l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___lam__0(v_f_2407_, v_body_2455_, v_snd_2460_, v___y_2410_, v___y_2411_, v___y_2412_, v___y_2413_);
if (lean_obj_tag(v___x_2461_) == 0)
{
lean_object* v_a_2462_; lean_object* v___x_2464_; uint8_t v_isShared_2465_; uint8_t v_isSharedCheck_2490_; 
v_a_2462_ = lean_ctor_get(v___x_2461_, 0);
v_isSharedCheck_2490_ = !lean_is_exclusive(v___x_2461_);
if (v_isSharedCheck_2490_ == 0)
{
v___x_2464_ = v___x_2461_;
v_isShared_2465_ = v_isSharedCheck_2490_;
goto v_resetjp_2463_;
}
else
{
lean_inc(v_a_2462_);
lean_dec(v___x_2461_);
v___x_2464_ = lean_box(0);
v_isShared_2465_ = v_isSharedCheck_2490_;
goto v_resetjp_2463_;
}
v_resetjp_2463_:
{
lean_object* v_fst_2466_; lean_object* v_snd_2467_; lean_object* v___x_2469_; uint8_t v_isShared_2470_; uint8_t v_isSharedCheck_2489_; 
v_fst_2466_ = lean_ctor_get(v_a_2462_, 0);
v_snd_2467_ = lean_ctor_get(v_a_2462_, 1);
v_isSharedCheck_2489_ = !lean_is_exclusive(v_a_2462_);
if (v_isSharedCheck_2489_ == 0)
{
v___x_2469_ = v_a_2462_;
v_isShared_2470_ = v_isSharedCheck_2489_;
goto v_resetjp_2468_;
}
else
{
lean_inc(v_snd_2467_);
lean_inc(v_fst_2466_);
lean_dec(v_a_2462_);
v___x_2469_ = lean_box(0);
v_isShared_2470_ = v_isSharedCheck_2489_;
goto v_resetjp_2468_;
}
v_resetjp_2468_:
{
lean_object* v___y_2472_; size_t v___x_2479_; size_t v___x_2480_; uint8_t v___x_2481_; 
v___x_2479_ = lean_ptr_addr(v_binderType_2454_);
v___x_2480_ = lean_ptr_addr(v_fst_2459_);
v___x_2481_ = lean_usize_dec_eq(v___x_2479_, v___x_2480_);
if (v___x_2481_ == 0)
{
lean_object* v___x_2482_; 
lean_inc(v_binderName_2453_);
lean_dec_ref_known(v_x_2408_, 3);
v___x_2482_ = l_Lean_Expr_lam___override(v_binderName_2453_, v_fst_2459_, v_fst_2466_, v_binderInfo_2456_);
v___y_2472_ = v___x_2482_;
goto v___jp_2471_;
}
else
{
size_t v___x_2483_; size_t v___x_2484_; uint8_t v___x_2485_; 
v___x_2483_ = lean_ptr_addr(v_body_2455_);
v___x_2484_ = lean_ptr_addr(v_fst_2466_);
v___x_2485_ = lean_usize_dec_eq(v___x_2483_, v___x_2484_);
if (v___x_2485_ == 0)
{
lean_object* v___x_2486_; 
lean_inc(v_binderName_2453_);
lean_dec_ref_known(v_x_2408_, 3);
v___x_2486_ = l_Lean_Expr_lam___override(v_binderName_2453_, v_fst_2459_, v_fst_2466_, v_binderInfo_2456_);
v___y_2472_ = v___x_2486_;
goto v___jp_2471_;
}
else
{
uint8_t v___x_2487_; 
v___x_2487_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_2456_, v_binderInfo_2456_);
if (v___x_2487_ == 0)
{
lean_object* v___x_2488_; 
lean_inc(v_binderName_2453_);
lean_dec_ref_known(v_x_2408_, 3);
v___x_2488_ = l_Lean_Expr_lam___override(v_binderName_2453_, v_fst_2459_, v_fst_2466_, v_binderInfo_2456_);
v___y_2472_ = v___x_2488_;
goto v___jp_2471_;
}
else
{
lean_dec(v_fst_2466_);
lean_dec(v_fst_2459_);
v___y_2472_ = v_x_2408_;
goto v___jp_2471_;
}
}
}
v___jp_2471_:
{
lean_object* v___x_2474_; 
if (v_isShared_2470_ == 0)
{
lean_ctor_set(v___x_2469_, 0, v___y_2472_);
v___x_2474_ = v___x_2469_;
goto v_reusejp_2473_;
}
else
{
lean_object* v_reuseFailAlloc_2478_; 
v_reuseFailAlloc_2478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2478_, 0, v___y_2472_);
lean_ctor_set(v_reuseFailAlloc_2478_, 1, v_snd_2467_);
v___x_2474_ = v_reuseFailAlloc_2478_;
goto v_reusejp_2473_;
}
v_reusejp_2473_:
{
lean_object* v___x_2476_; 
if (v_isShared_2465_ == 0)
{
lean_ctor_set(v___x_2464_, 0, v___x_2474_);
v___x_2476_ = v___x_2464_;
goto v_reusejp_2475_;
}
else
{
lean_object* v_reuseFailAlloc_2477_; 
v_reuseFailAlloc_2477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2477_, 0, v___x_2474_);
v___x_2476_ = v_reuseFailAlloc_2477_;
goto v_reusejp_2475_;
}
v_reusejp_2475_:
{
return v___x_2476_;
}
}
}
}
}
}
else
{
lean_dec(v_fst_2459_);
lean_dec_ref_known(v_x_2408_, 3);
return v___x_2461_;
}
}
else
{
lean_dec_ref_known(v_x_2408_, 3);
lean_dec_ref(v_f_2407_);
return v___x_2457_;
}
}
case 10:
{
lean_object* v_data_2491_; lean_object* v_expr_2492_; lean_object* v___x_2493_; 
v_data_2491_ = lean_ctor_get(v_x_2408_, 0);
v_expr_2492_ = lean_ctor_get(v_x_2408_, 1);
lean_inc_ref(v_expr_2492_);
v___x_2493_ = l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___lam__0(v_f_2407_, v_expr_2492_, v___y_2409_, v___y_2410_, v___y_2411_, v___y_2412_, v___y_2413_);
if (lean_obj_tag(v___x_2493_) == 0)
{
lean_object* v_a_2494_; lean_object* v___x_2496_; uint8_t v_isShared_2497_; uint8_t v_isSharedCheck_2516_; 
v_a_2494_ = lean_ctor_get(v___x_2493_, 0);
v_isSharedCheck_2516_ = !lean_is_exclusive(v___x_2493_);
if (v_isSharedCheck_2516_ == 0)
{
v___x_2496_ = v___x_2493_;
v_isShared_2497_ = v_isSharedCheck_2516_;
goto v_resetjp_2495_;
}
else
{
lean_inc(v_a_2494_);
lean_dec(v___x_2493_);
v___x_2496_ = lean_box(0);
v_isShared_2497_ = v_isSharedCheck_2516_;
goto v_resetjp_2495_;
}
v_resetjp_2495_:
{
lean_object* v_fst_2498_; lean_object* v_snd_2499_; lean_object* v___x_2501_; uint8_t v_isShared_2502_; uint8_t v_isSharedCheck_2515_; 
v_fst_2498_ = lean_ctor_get(v_a_2494_, 0);
v_snd_2499_ = lean_ctor_get(v_a_2494_, 1);
v_isSharedCheck_2515_ = !lean_is_exclusive(v_a_2494_);
if (v_isSharedCheck_2515_ == 0)
{
v___x_2501_ = v_a_2494_;
v_isShared_2502_ = v_isSharedCheck_2515_;
goto v_resetjp_2500_;
}
else
{
lean_inc(v_snd_2499_);
lean_inc(v_fst_2498_);
lean_dec(v_a_2494_);
v___x_2501_ = lean_box(0);
v_isShared_2502_ = v_isSharedCheck_2515_;
goto v_resetjp_2500_;
}
v_resetjp_2500_:
{
lean_object* v___y_2504_; size_t v___x_2511_; size_t v___x_2512_; uint8_t v___x_2513_; 
v___x_2511_ = lean_ptr_addr(v_expr_2492_);
v___x_2512_ = lean_ptr_addr(v_fst_2498_);
v___x_2513_ = lean_usize_dec_eq(v___x_2511_, v___x_2512_);
if (v___x_2513_ == 0)
{
lean_object* v___x_2514_; 
lean_inc(v_data_2491_);
lean_dec_ref_known(v_x_2408_, 2);
v___x_2514_ = l_Lean_Expr_mdata___override(v_data_2491_, v_fst_2498_);
v___y_2504_ = v___x_2514_;
goto v___jp_2503_;
}
else
{
lean_dec(v_fst_2498_);
v___y_2504_ = v_x_2408_;
goto v___jp_2503_;
}
v___jp_2503_:
{
lean_object* v___x_2506_; 
if (v_isShared_2502_ == 0)
{
lean_ctor_set(v___x_2501_, 0, v___y_2504_);
v___x_2506_ = v___x_2501_;
goto v_reusejp_2505_;
}
else
{
lean_object* v_reuseFailAlloc_2510_; 
v_reuseFailAlloc_2510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2510_, 0, v___y_2504_);
lean_ctor_set(v_reuseFailAlloc_2510_, 1, v_snd_2499_);
v___x_2506_ = v_reuseFailAlloc_2510_;
goto v_reusejp_2505_;
}
v_reusejp_2505_:
{
lean_object* v___x_2508_; 
if (v_isShared_2497_ == 0)
{
lean_ctor_set(v___x_2496_, 0, v___x_2506_);
v___x_2508_ = v___x_2496_;
goto v_reusejp_2507_;
}
else
{
lean_object* v_reuseFailAlloc_2509_; 
v_reuseFailAlloc_2509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2509_, 0, v___x_2506_);
v___x_2508_ = v_reuseFailAlloc_2509_;
goto v_reusejp_2507_;
}
v_reusejp_2507_:
{
return v___x_2508_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_x_2408_, 2);
return v___x_2493_;
}
}
case 8:
{
lean_object* v_declName_2517_; lean_object* v_type_2518_; lean_object* v_value_2519_; lean_object* v_body_2520_; uint8_t v_nondep_2521_; lean_object* v___x_2522_; 
v_declName_2517_ = lean_ctor_get(v_x_2408_, 0);
v_type_2518_ = lean_ctor_get(v_x_2408_, 1);
v_value_2519_ = lean_ctor_get(v_x_2408_, 2);
v_body_2520_ = lean_ctor_get(v_x_2408_, 3);
v_nondep_2521_ = lean_ctor_get_uint8(v_x_2408_, sizeof(void*)*4 + 8);
lean_inc_ref(v_type_2518_);
lean_inc_ref(v_f_2407_);
v___x_2522_ = l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___lam__0(v_f_2407_, v_type_2518_, v___y_2409_, v___y_2410_, v___y_2411_, v___y_2412_, v___y_2413_);
if (lean_obj_tag(v___x_2522_) == 0)
{
lean_object* v_a_2523_; lean_object* v_fst_2524_; lean_object* v_snd_2525_; lean_object* v___x_2526_; 
v_a_2523_ = lean_ctor_get(v___x_2522_, 0);
lean_inc(v_a_2523_);
lean_dec_ref_known(v___x_2522_, 1);
v_fst_2524_ = lean_ctor_get(v_a_2523_, 0);
lean_inc(v_fst_2524_);
v_snd_2525_ = lean_ctor_get(v_a_2523_, 1);
lean_inc(v_snd_2525_);
lean_dec(v_a_2523_);
lean_inc_ref(v_value_2519_);
lean_inc_ref(v_f_2407_);
v___x_2526_ = l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___lam__0(v_f_2407_, v_value_2519_, v_snd_2525_, v___y_2410_, v___y_2411_, v___y_2412_, v___y_2413_);
if (lean_obj_tag(v___x_2526_) == 0)
{
lean_object* v_a_2527_; lean_object* v_fst_2528_; lean_object* v_snd_2529_; lean_object* v___x_2530_; 
v_a_2527_ = lean_ctor_get(v___x_2526_, 0);
lean_inc(v_a_2527_);
lean_dec_ref_known(v___x_2526_, 1);
v_fst_2528_ = lean_ctor_get(v_a_2527_, 0);
lean_inc(v_fst_2528_);
v_snd_2529_ = lean_ctor_get(v_a_2527_, 1);
lean_inc(v_snd_2529_);
lean_dec(v_a_2527_);
lean_inc_ref(v_body_2520_);
v___x_2530_ = l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___lam__0(v_f_2407_, v_body_2520_, v_snd_2529_, v___y_2410_, v___y_2411_, v___y_2412_, v___y_2413_);
if (lean_obj_tag(v___x_2530_) == 0)
{
lean_object* v_a_2531_; lean_object* v___x_2533_; uint8_t v_isShared_2534_; uint8_t v_isSharedCheck_2561_; 
v_a_2531_ = lean_ctor_get(v___x_2530_, 0);
v_isSharedCheck_2561_ = !lean_is_exclusive(v___x_2530_);
if (v_isSharedCheck_2561_ == 0)
{
v___x_2533_ = v___x_2530_;
v_isShared_2534_ = v_isSharedCheck_2561_;
goto v_resetjp_2532_;
}
else
{
lean_inc(v_a_2531_);
lean_dec(v___x_2530_);
v___x_2533_ = lean_box(0);
v_isShared_2534_ = v_isSharedCheck_2561_;
goto v_resetjp_2532_;
}
v_resetjp_2532_:
{
lean_object* v_fst_2535_; lean_object* v_snd_2536_; lean_object* v___x_2538_; uint8_t v_isShared_2539_; uint8_t v_isSharedCheck_2560_; 
v_fst_2535_ = lean_ctor_get(v_a_2531_, 0);
v_snd_2536_ = lean_ctor_get(v_a_2531_, 1);
v_isSharedCheck_2560_ = !lean_is_exclusive(v_a_2531_);
if (v_isSharedCheck_2560_ == 0)
{
v___x_2538_ = v_a_2531_;
v_isShared_2539_ = v_isSharedCheck_2560_;
goto v_resetjp_2537_;
}
else
{
lean_inc(v_snd_2536_);
lean_inc(v_fst_2535_);
lean_dec(v_a_2531_);
v___x_2538_ = lean_box(0);
v_isShared_2539_ = v_isSharedCheck_2560_;
goto v_resetjp_2537_;
}
v_resetjp_2537_:
{
lean_object* v___y_2541_; size_t v___x_2548_; size_t v___x_2549_; uint8_t v___x_2550_; 
v___x_2548_ = lean_ptr_addr(v_type_2518_);
v___x_2549_ = lean_ptr_addr(v_fst_2524_);
v___x_2550_ = lean_usize_dec_eq(v___x_2548_, v___x_2549_);
if (v___x_2550_ == 0)
{
lean_object* v___x_2551_; 
lean_inc(v_declName_2517_);
lean_dec_ref_known(v_x_2408_, 4);
v___x_2551_ = l_Lean_Expr_letE___override(v_declName_2517_, v_fst_2524_, v_fst_2528_, v_fst_2535_, v_nondep_2521_);
v___y_2541_ = v___x_2551_;
goto v___jp_2540_;
}
else
{
size_t v___x_2552_; size_t v___x_2553_; uint8_t v___x_2554_; 
v___x_2552_ = lean_ptr_addr(v_value_2519_);
v___x_2553_ = lean_ptr_addr(v_fst_2528_);
v___x_2554_ = lean_usize_dec_eq(v___x_2552_, v___x_2553_);
if (v___x_2554_ == 0)
{
lean_object* v___x_2555_; 
lean_inc(v_declName_2517_);
lean_dec_ref_known(v_x_2408_, 4);
v___x_2555_ = l_Lean_Expr_letE___override(v_declName_2517_, v_fst_2524_, v_fst_2528_, v_fst_2535_, v_nondep_2521_);
v___y_2541_ = v___x_2555_;
goto v___jp_2540_;
}
else
{
size_t v___x_2556_; size_t v___x_2557_; uint8_t v___x_2558_; 
v___x_2556_ = lean_ptr_addr(v_body_2520_);
v___x_2557_ = lean_ptr_addr(v_fst_2535_);
v___x_2558_ = lean_usize_dec_eq(v___x_2556_, v___x_2557_);
if (v___x_2558_ == 0)
{
lean_object* v___x_2559_; 
lean_inc(v_declName_2517_);
lean_dec_ref_known(v_x_2408_, 4);
v___x_2559_ = l_Lean_Expr_letE___override(v_declName_2517_, v_fst_2524_, v_fst_2528_, v_fst_2535_, v_nondep_2521_);
v___y_2541_ = v___x_2559_;
goto v___jp_2540_;
}
else
{
lean_dec(v_fst_2535_);
lean_dec(v_fst_2528_);
lean_dec(v_fst_2524_);
v___y_2541_ = v_x_2408_;
goto v___jp_2540_;
}
}
}
v___jp_2540_:
{
lean_object* v___x_2543_; 
if (v_isShared_2539_ == 0)
{
lean_ctor_set(v___x_2538_, 0, v___y_2541_);
v___x_2543_ = v___x_2538_;
goto v_reusejp_2542_;
}
else
{
lean_object* v_reuseFailAlloc_2547_; 
v_reuseFailAlloc_2547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2547_, 0, v___y_2541_);
lean_ctor_set(v_reuseFailAlloc_2547_, 1, v_snd_2536_);
v___x_2543_ = v_reuseFailAlloc_2547_;
goto v_reusejp_2542_;
}
v_reusejp_2542_:
{
lean_object* v___x_2545_; 
if (v_isShared_2534_ == 0)
{
lean_ctor_set(v___x_2533_, 0, v___x_2543_);
v___x_2545_ = v___x_2533_;
goto v_reusejp_2544_;
}
else
{
lean_object* v_reuseFailAlloc_2546_; 
v_reuseFailAlloc_2546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2546_, 0, v___x_2543_);
v___x_2545_ = v_reuseFailAlloc_2546_;
goto v_reusejp_2544_;
}
v_reusejp_2544_:
{
return v___x_2545_;
}
}
}
}
}
}
else
{
lean_dec(v_fst_2528_);
lean_dec(v_fst_2524_);
lean_dec_ref_known(v_x_2408_, 4);
return v___x_2530_;
}
}
else
{
lean_dec(v_fst_2524_);
lean_dec_ref_known(v_x_2408_, 4);
lean_dec_ref(v_f_2407_);
return v___x_2526_;
}
}
else
{
lean_dec_ref_known(v_x_2408_, 4);
lean_dec_ref(v_f_2407_);
return v___x_2522_;
}
}
case 5:
{
lean_object* v_fn_2562_; lean_object* v_arg_2563_; lean_object* v___x_2564_; 
v_fn_2562_ = lean_ctor_get(v_x_2408_, 0);
v_arg_2563_ = lean_ctor_get(v_x_2408_, 1);
lean_inc_ref(v_fn_2562_);
lean_inc_ref(v_f_2407_);
v___x_2564_ = l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___lam__0(v_f_2407_, v_fn_2562_, v___y_2409_, v___y_2410_, v___y_2411_, v___y_2412_, v___y_2413_);
if (lean_obj_tag(v___x_2564_) == 0)
{
lean_object* v_a_2565_; lean_object* v_fst_2566_; lean_object* v_snd_2567_; lean_object* v___x_2568_; 
v_a_2565_ = lean_ctor_get(v___x_2564_, 0);
lean_inc(v_a_2565_);
lean_dec_ref_known(v___x_2564_, 1);
v_fst_2566_ = lean_ctor_get(v_a_2565_, 0);
lean_inc(v_fst_2566_);
v_snd_2567_ = lean_ctor_get(v_a_2565_, 1);
lean_inc(v_snd_2567_);
lean_dec(v_a_2565_);
lean_inc_ref(v_arg_2563_);
v___x_2568_ = l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___lam__0(v_f_2407_, v_arg_2563_, v_snd_2567_, v___y_2410_, v___y_2411_, v___y_2412_, v___y_2413_);
if (lean_obj_tag(v___x_2568_) == 0)
{
lean_object* v_a_2569_; lean_object* v___x_2571_; uint8_t v_isShared_2572_; uint8_t v_isSharedCheck_2595_; 
v_a_2569_ = lean_ctor_get(v___x_2568_, 0);
v_isSharedCheck_2595_ = !lean_is_exclusive(v___x_2568_);
if (v_isSharedCheck_2595_ == 0)
{
v___x_2571_ = v___x_2568_;
v_isShared_2572_ = v_isSharedCheck_2595_;
goto v_resetjp_2570_;
}
else
{
lean_inc(v_a_2569_);
lean_dec(v___x_2568_);
v___x_2571_ = lean_box(0);
v_isShared_2572_ = v_isSharedCheck_2595_;
goto v_resetjp_2570_;
}
v_resetjp_2570_:
{
lean_object* v_fst_2573_; lean_object* v_snd_2574_; lean_object* v___x_2576_; uint8_t v_isShared_2577_; uint8_t v_isSharedCheck_2594_; 
v_fst_2573_ = lean_ctor_get(v_a_2569_, 0);
v_snd_2574_ = lean_ctor_get(v_a_2569_, 1);
v_isSharedCheck_2594_ = !lean_is_exclusive(v_a_2569_);
if (v_isSharedCheck_2594_ == 0)
{
v___x_2576_ = v_a_2569_;
v_isShared_2577_ = v_isSharedCheck_2594_;
goto v_resetjp_2575_;
}
else
{
lean_inc(v_snd_2574_);
lean_inc(v_fst_2573_);
lean_dec(v_a_2569_);
v___x_2576_ = lean_box(0);
v_isShared_2577_ = v_isSharedCheck_2594_;
goto v_resetjp_2575_;
}
v_resetjp_2575_:
{
lean_object* v___y_2579_; size_t v___x_2586_; size_t v___x_2587_; uint8_t v___x_2588_; 
v___x_2586_ = lean_ptr_addr(v_fn_2562_);
v___x_2587_ = lean_ptr_addr(v_fst_2566_);
v___x_2588_ = lean_usize_dec_eq(v___x_2586_, v___x_2587_);
if (v___x_2588_ == 0)
{
lean_object* v___x_2589_; 
lean_dec_ref_known(v_x_2408_, 2);
v___x_2589_ = l_Lean_Expr_app___override(v_fst_2566_, v_fst_2573_);
v___y_2579_ = v___x_2589_;
goto v___jp_2578_;
}
else
{
size_t v___x_2590_; size_t v___x_2591_; uint8_t v___x_2592_; 
v___x_2590_ = lean_ptr_addr(v_arg_2563_);
v___x_2591_ = lean_ptr_addr(v_fst_2573_);
v___x_2592_ = lean_usize_dec_eq(v___x_2590_, v___x_2591_);
if (v___x_2592_ == 0)
{
lean_object* v___x_2593_; 
lean_dec_ref_known(v_x_2408_, 2);
v___x_2593_ = l_Lean_Expr_app___override(v_fst_2566_, v_fst_2573_);
v___y_2579_ = v___x_2593_;
goto v___jp_2578_;
}
else
{
lean_dec(v_fst_2573_);
lean_dec(v_fst_2566_);
v___y_2579_ = v_x_2408_;
goto v___jp_2578_;
}
}
v___jp_2578_:
{
lean_object* v___x_2581_; 
if (v_isShared_2577_ == 0)
{
lean_ctor_set(v___x_2576_, 0, v___y_2579_);
v___x_2581_ = v___x_2576_;
goto v_reusejp_2580_;
}
else
{
lean_object* v_reuseFailAlloc_2585_; 
v_reuseFailAlloc_2585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2585_, 0, v___y_2579_);
lean_ctor_set(v_reuseFailAlloc_2585_, 1, v_snd_2574_);
v___x_2581_ = v_reuseFailAlloc_2585_;
goto v_reusejp_2580_;
}
v_reusejp_2580_:
{
lean_object* v___x_2583_; 
if (v_isShared_2572_ == 0)
{
lean_ctor_set(v___x_2571_, 0, v___x_2581_);
v___x_2583_ = v___x_2571_;
goto v_reusejp_2582_;
}
else
{
lean_object* v_reuseFailAlloc_2584_; 
v_reuseFailAlloc_2584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2584_, 0, v___x_2581_);
v___x_2583_ = v_reuseFailAlloc_2584_;
goto v_reusejp_2582_;
}
v_reusejp_2582_:
{
return v___x_2583_;
}
}
}
}
}
}
else
{
lean_dec(v_fst_2566_);
lean_dec_ref_known(v_x_2408_, 2);
return v___x_2568_;
}
}
else
{
lean_dec_ref_known(v_x_2408_, 2);
lean_dec_ref(v_f_2407_);
return v___x_2564_;
}
}
case 11:
{
lean_object* v_typeName_2596_; lean_object* v_idx_2597_; lean_object* v_struct_2598_; lean_object* v___x_2599_; 
v_typeName_2596_ = lean_ctor_get(v_x_2408_, 0);
v_idx_2597_ = lean_ctor_get(v_x_2408_, 1);
v_struct_2598_ = lean_ctor_get(v_x_2408_, 2);
lean_inc_ref(v_struct_2598_);
v___x_2599_ = l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___lam__0(v_f_2407_, v_struct_2598_, v___y_2409_, v___y_2410_, v___y_2411_, v___y_2412_, v___y_2413_);
if (lean_obj_tag(v___x_2599_) == 0)
{
lean_object* v_a_2600_; lean_object* v___x_2602_; uint8_t v_isShared_2603_; uint8_t v_isSharedCheck_2622_; 
v_a_2600_ = lean_ctor_get(v___x_2599_, 0);
v_isSharedCheck_2622_ = !lean_is_exclusive(v___x_2599_);
if (v_isSharedCheck_2622_ == 0)
{
v___x_2602_ = v___x_2599_;
v_isShared_2603_ = v_isSharedCheck_2622_;
goto v_resetjp_2601_;
}
else
{
lean_inc(v_a_2600_);
lean_dec(v___x_2599_);
v___x_2602_ = lean_box(0);
v_isShared_2603_ = v_isSharedCheck_2622_;
goto v_resetjp_2601_;
}
v_resetjp_2601_:
{
lean_object* v_fst_2604_; lean_object* v_snd_2605_; lean_object* v___x_2607_; uint8_t v_isShared_2608_; uint8_t v_isSharedCheck_2621_; 
v_fst_2604_ = lean_ctor_get(v_a_2600_, 0);
v_snd_2605_ = lean_ctor_get(v_a_2600_, 1);
v_isSharedCheck_2621_ = !lean_is_exclusive(v_a_2600_);
if (v_isSharedCheck_2621_ == 0)
{
v___x_2607_ = v_a_2600_;
v_isShared_2608_ = v_isSharedCheck_2621_;
goto v_resetjp_2606_;
}
else
{
lean_inc(v_snd_2605_);
lean_inc(v_fst_2604_);
lean_dec(v_a_2600_);
v___x_2607_ = lean_box(0);
v_isShared_2608_ = v_isSharedCheck_2621_;
goto v_resetjp_2606_;
}
v_resetjp_2606_:
{
lean_object* v___y_2610_; size_t v___x_2617_; size_t v___x_2618_; uint8_t v___x_2619_; 
v___x_2617_ = lean_ptr_addr(v_struct_2598_);
v___x_2618_ = lean_ptr_addr(v_fst_2604_);
v___x_2619_ = lean_usize_dec_eq(v___x_2617_, v___x_2618_);
if (v___x_2619_ == 0)
{
lean_object* v___x_2620_; 
lean_inc(v_idx_2597_);
lean_inc(v_typeName_2596_);
lean_dec_ref_known(v_x_2408_, 3);
v___x_2620_ = l_Lean_Expr_proj___override(v_typeName_2596_, v_idx_2597_, v_fst_2604_);
v___y_2610_ = v___x_2620_;
goto v___jp_2609_;
}
else
{
lean_dec(v_fst_2604_);
v___y_2610_ = v_x_2408_;
goto v___jp_2609_;
}
v___jp_2609_:
{
lean_object* v___x_2612_; 
if (v_isShared_2608_ == 0)
{
lean_ctor_set(v___x_2607_, 0, v___y_2610_);
v___x_2612_ = v___x_2607_;
goto v_reusejp_2611_;
}
else
{
lean_object* v_reuseFailAlloc_2616_; 
v_reuseFailAlloc_2616_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2616_, 0, v___y_2610_);
lean_ctor_set(v_reuseFailAlloc_2616_, 1, v_snd_2605_);
v___x_2612_ = v_reuseFailAlloc_2616_;
goto v_reusejp_2611_;
}
v_reusejp_2611_:
{
lean_object* v___x_2614_; 
if (v_isShared_2603_ == 0)
{
lean_ctor_set(v___x_2602_, 0, v___x_2612_);
v___x_2614_ = v___x_2602_;
goto v_reusejp_2613_;
}
else
{
lean_object* v_reuseFailAlloc_2615_; 
v_reuseFailAlloc_2615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2615_, 0, v___x_2612_);
v___x_2614_ = v_reuseFailAlloc_2615_;
goto v_reusejp_2613_;
}
v_reusejp_2613_:
{
return v___x_2614_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_x_2408_, 3);
return v___x_2599_;
}
}
default: 
{
lean_object* v___x_2623_; lean_object* v___x_2624_; 
lean_dec_ref(v_f_2407_);
v___x_2623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2623_, 0, v_x_2408_);
lean_ctor_set(v___x_2623_, 1, v___y_2409_);
v___x_2624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2624_, 0, v___x_2623_);
return v___x_2624_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___boxed(lean_object* v_f_2625_, lean_object* v_x_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_){
_start:
{
lean_object* v_res_2633_; 
v_res_2633_ = l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg(v_f_2625_, v_x_2626_, v___y_2627_, v___y_2628_, v___y_2629_, v___y_2630_, v___y_2631_);
lean_dec(v___y_2631_);
lean_dec_ref(v___y_2630_);
lean_dec(v___y_2629_);
lean_dec_ref(v___y_2628_);
return v_res_2633_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3___redArg(lean_object* v_f_2634_, lean_object* v_init_2635_, lean_object* v_e_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_){
_start:
{
lean_object* v___x_2642_; 
v___x_2642_ = l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg(v_f_2634_, v_e_2636_, v_init_2635_, v___y_2637_, v___y_2638_, v___y_2639_, v___y_2640_);
if (lean_obj_tag(v___x_2642_) == 0)
{
lean_object* v_a_2643_; lean_object* v___x_2645_; uint8_t v_isShared_2646_; uint8_t v_isSharedCheck_2651_; 
v_a_2643_ = lean_ctor_get(v___x_2642_, 0);
v_isSharedCheck_2651_ = !lean_is_exclusive(v___x_2642_);
if (v_isSharedCheck_2651_ == 0)
{
v___x_2645_ = v___x_2642_;
v_isShared_2646_ = v_isSharedCheck_2651_;
goto v_resetjp_2644_;
}
else
{
lean_inc(v_a_2643_);
lean_dec(v___x_2642_);
v___x_2645_ = lean_box(0);
v_isShared_2646_ = v_isSharedCheck_2651_;
goto v_resetjp_2644_;
}
v_resetjp_2644_:
{
lean_object* v_snd_2647_; lean_object* v___x_2649_; 
v_snd_2647_ = lean_ctor_get(v_a_2643_, 1);
lean_inc(v_snd_2647_);
lean_dec(v_a_2643_);
if (v_isShared_2646_ == 0)
{
lean_ctor_set(v___x_2645_, 0, v_snd_2647_);
v___x_2649_ = v___x_2645_;
goto v_reusejp_2648_;
}
else
{
lean_object* v_reuseFailAlloc_2650_; 
v_reuseFailAlloc_2650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2650_, 0, v_snd_2647_);
v___x_2649_ = v_reuseFailAlloc_2650_;
goto v_reusejp_2648_;
}
v_reusejp_2648_:
{
return v___x_2649_;
}
}
}
else
{
lean_object* v_a_2652_; lean_object* v___x_2654_; uint8_t v_isShared_2655_; uint8_t v_isSharedCheck_2659_; 
v_a_2652_ = lean_ctor_get(v___x_2642_, 0);
v_isSharedCheck_2659_ = !lean_is_exclusive(v___x_2642_);
if (v_isSharedCheck_2659_ == 0)
{
v___x_2654_ = v___x_2642_;
v_isShared_2655_ = v_isSharedCheck_2659_;
goto v_resetjp_2653_;
}
else
{
lean_inc(v_a_2652_);
lean_dec(v___x_2642_);
v___x_2654_ = lean_box(0);
v_isShared_2655_ = v_isSharedCheck_2659_;
goto v_resetjp_2653_;
}
v_resetjp_2653_:
{
lean_object* v___x_2657_; 
if (v_isShared_2655_ == 0)
{
v___x_2657_ = v___x_2654_;
goto v_reusejp_2656_;
}
else
{
lean_object* v_reuseFailAlloc_2658_; 
v_reuseFailAlloc_2658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2658_, 0, v_a_2652_);
v___x_2657_ = v_reuseFailAlloc_2658_;
goto v_reusejp_2656_;
}
v_reusejp_2656_:
{
return v___x_2657_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3___redArg___boxed(lean_object* v_f_2660_, lean_object* v_init_2661_, lean_object* v_e_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_){
_start:
{
lean_object* v_res_2668_; 
v_res_2668_ = l_Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3___redArg(v_f_2660_, v_init_2661_, v_e_2662_, v___y_2663_, v___y_2664_, v___y_2665_, v___y_2666_);
lean_dec(v___y_2666_);
lean_dec_ref(v___y_2665_);
lean_dec(v___y_2664_);
lean_dec_ref(v___y_2663_);
return v_res_2668_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__0___redArg(lean_object* v_op_2671_, lean_object* v_as_2672_, size_t v_i_2673_, size_t v_stop_2674_, lean_object* v_b_2675_, lean_object* v___y_2676_, lean_object* v___y_2677_, lean_object* v___y_2678_, lean_object* v___y_2679_){
_start:
{
uint8_t v___x_2681_; 
v___x_2681_ = lean_usize_dec_eq(v_i_2673_, v_stop_2674_);
if (v___x_2681_ == 0)
{
lean_object* v___x_2682_; lean_object* v___x_2683_; 
v___x_2682_ = lean_array_uget_borrowed(v_as_2672_, v_i_2673_);
lean_inc(v___y_2679_);
lean_inc_ref(v___y_2678_);
lean_inc(v___y_2677_);
lean_inc_ref(v___y_2676_);
lean_inc(v___x_2682_);
v___x_2683_ = lean_infer_type(v___x_2682_, v___y_2676_, v___y_2677_, v___y_2678_, v___y_2679_);
if (lean_obj_tag(v___x_2683_) == 0)
{
lean_object* v_a_2684_; lean_object* v___x_2685_; 
v_a_2684_ = lean_ctor_get(v___x_2683_, 0);
lean_inc(v_a_2684_);
lean_dec_ref_known(v___x_2683_, 1);
lean_inc_ref(v_op_2671_);
v___x_2685_ = l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg(v_op_2671_, v_a_2684_, v___y_2676_, v___y_2677_, v___y_2678_, v___y_2679_);
if (lean_obj_tag(v___x_2685_) == 0)
{
lean_object* v_a_2686_; lean_object* v___x_2687_; size_t v___x_2688_; size_t v___x_2689_; 
v_a_2686_ = lean_ctor_get(v___x_2685_, 0);
lean_inc(v_a_2686_);
lean_dec_ref_known(v___x_2685_, 1);
v___x_2687_ = l_Array_append___redArg(v_b_2675_, v_a_2686_);
lean_dec(v_a_2686_);
v___x_2688_ = ((size_t)1ULL);
v___x_2689_ = lean_usize_add(v_i_2673_, v___x_2688_);
v_i_2673_ = v___x_2689_;
v_b_2675_ = v___x_2687_;
goto _start;
}
else
{
lean_dec_ref(v_b_2675_);
lean_dec_ref(v_op_2671_);
return v___x_2685_;
}
}
else
{
lean_object* v_a_2691_; lean_object* v___x_2693_; uint8_t v_isShared_2694_; uint8_t v_isSharedCheck_2698_; 
lean_dec_ref(v_b_2675_);
lean_dec_ref(v_op_2671_);
v_a_2691_ = lean_ctor_get(v___x_2683_, 0);
v_isSharedCheck_2698_ = !lean_is_exclusive(v___x_2683_);
if (v_isSharedCheck_2698_ == 0)
{
v___x_2693_ = v___x_2683_;
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
else
{
lean_inc(v_a_2691_);
lean_dec(v___x_2683_);
v___x_2693_ = lean_box(0);
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
v_resetjp_2692_:
{
lean_object* v___x_2696_; 
if (v_isShared_2694_ == 0)
{
v___x_2696_ = v___x_2693_;
goto v_reusejp_2695_;
}
else
{
lean_object* v_reuseFailAlloc_2697_; 
v_reuseFailAlloc_2697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2697_, 0, v_a_2691_);
v___x_2696_ = v_reuseFailAlloc_2697_;
goto v_reusejp_2695_;
}
v_reusejp_2695_:
{
return v___x_2696_;
}
}
}
}
else
{
lean_object* v___x_2699_; 
lean_dec_ref(v_op_2671_);
v___x_2699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2699_, 0, v_b_2675_);
return v___x_2699_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___lam__0(lean_object* v_op_2700_, lean_object* v_args_2701_, lean_object* v_body_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_){
_start:
{
lean_object* v___x_2708_; 
lean_inc_ref(v_op_2700_);
v___x_2708_ = l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg(v_op_2700_, v_body_2702_, v___y_2703_, v___y_2704_, v___y_2705_, v___y_2706_);
if (lean_obj_tag(v___x_2708_) == 0)
{
lean_object* v_a_2709_; lean_object* v___x_2711_; uint8_t v_isShared_2712_; uint8_t v_isSharedCheck_2723_; 
v_a_2709_ = lean_ctor_get(v___x_2708_, 0);
v_isSharedCheck_2723_ = !lean_is_exclusive(v___x_2708_);
if (v_isSharedCheck_2723_ == 0)
{
v___x_2711_ = v___x_2708_;
v_isShared_2712_ = v_isSharedCheck_2723_;
goto v_resetjp_2710_;
}
else
{
lean_inc(v_a_2709_);
lean_dec(v___x_2708_);
v___x_2711_ = lean_box(0);
v_isShared_2712_ = v_isSharedCheck_2723_;
goto v_resetjp_2710_;
}
v_resetjp_2710_:
{
lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; uint8_t v___x_2716_; 
v___x_2713_ = l_Array_reverse___redArg(v_a_2709_);
v___x_2714_ = lean_unsigned_to_nat(0u);
v___x_2715_ = lean_array_get_size(v_args_2701_);
v___x_2716_ = lean_nat_dec_lt(v___x_2714_, v___x_2715_);
if (v___x_2716_ == 0)
{
lean_object* v___x_2718_; 
lean_dec_ref(v_op_2700_);
if (v_isShared_2712_ == 0)
{
lean_ctor_set(v___x_2711_, 0, v___x_2713_);
v___x_2718_ = v___x_2711_;
goto v_reusejp_2717_;
}
else
{
lean_object* v_reuseFailAlloc_2719_; 
v_reuseFailAlloc_2719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2719_, 0, v___x_2713_);
v___x_2718_ = v_reuseFailAlloc_2719_;
goto v_reusejp_2717_;
}
v_reusejp_2717_:
{
return v___x_2718_;
}
}
else
{
size_t v___x_2720_; size_t v___x_2721_; lean_object* v___x_2722_; 
lean_del_object(v___x_2711_);
v___x_2720_ = ((size_t)0ULL);
v___x_2721_ = lean_usize_of_nat(v___x_2715_);
v___x_2722_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__0___redArg(v_op_2700_, v_args_2701_, v___x_2720_, v___x_2721_, v___x_2713_, v___y_2703_, v___y_2704_, v___y_2705_, v___y_2706_);
return v___x_2722_;
}
}
}
else
{
lean_dec_ref(v_op_2700_);
return v___x_2708_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___lam__0___boxed(lean_object* v_op_2724_, lean_object* v_args_2725_, lean_object* v_body_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_){
_start:
{
lean_object* v_res_2732_; 
v_res_2732_ = l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___lam__0(v_op_2724_, v_args_2725_, v_body_2726_, v___y_2727_, v___y_2728_, v___y_2729_, v___y_2730_);
lean_dec(v___y_2730_);
lean_dec_ref(v___y_2729_);
lean_dec(v___y_2728_);
lean_dec_ref(v___y_2727_);
lean_dec_ref(v_args_2725_);
return v_res_2732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___lam__3___boxed(lean_object* v_op_2733_, lean_object* v_a_2734_, lean_object* v_f_2735_, lean_object* v___y_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_, lean_object* v___y_2740_){
_start:
{
lean_object* v_res_2741_; 
v_res_2741_ = l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___lam__3(v_op_2733_, v_a_2734_, v_f_2735_, v___y_2736_, v___y_2737_, v___y_2738_, v___y_2739_);
lean_dec(v___y_2739_);
lean_dec_ref(v___y_2738_);
lean_dec(v___y_2737_);
lean_dec_ref(v___y_2736_);
return v_res_2741_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg(lean_object* v_op_2742_, lean_object* v_e_2743_, lean_object* v_a_2744_, lean_object* v_a_2745_, lean_object* v_a_2746_, lean_object* v_a_2747_){
_start:
{
switch(lean_obj_tag(v_e_2743_))
{
case 0:
{
lean_object* v___x_2749_; lean_object* v___x_2750_; 
lean_dec_ref_known(v_e_2743_, 1);
lean_dec_ref(v_op_2742_);
v___x_2749_ = ((lean_object*)(l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___closed__0));
v___x_2750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2750_, 0, v___x_2749_);
return v___x_2750_;
}
case 7:
{
lean_object* v___f_2751_; uint8_t v___x_2752_; lean_object* v___x_2753_; 
v___f_2751_ = lean_alloc_closure((void*)(l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2751_, 0, v_op_2742_);
v___x_2752_ = 0;
v___x_2753_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__1___redArg(v_e_2743_, v___f_2751_, v___x_2752_, v_a_2744_, v_a_2745_, v_a_2746_, v_a_2747_);
return v___x_2753_;
}
case 6:
{
lean_object* v___f_2754_; uint8_t v___x_2755_; uint8_t v___x_2756_; lean_object* v___x_2757_; 
v___f_2754_ = lean_alloc_closure((void*)(l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2754_, 0, v_op_2742_);
v___x_2755_ = 0;
v___x_2756_ = 1;
v___x_2757_ = l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__2___redArg(v_e_2743_, v___f_2754_, v___x_2755_, v___x_2756_, v_a_2744_, v_a_2745_, v_a_2746_, v_a_2747_);
return v___x_2757_;
}
case 8:
{
lean_object* v___f_2758_; uint8_t v___x_2759_; uint8_t v___x_2760_; lean_object* v___x_2761_; 
v___f_2758_ = lean_alloc_closure((void*)(l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2758_, 0, v_op_2742_);
v___x_2759_ = 0;
v___x_2760_ = 1;
v___x_2761_ = l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__2___redArg(v_e_2743_, v___f_2758_, v___x_2759_, v___x_2760_, v_a_2744_, v_a_2745_, v_a_2746_, v_a_2747_);
return v___x_2761_;
}
default: 
{
lean_object* v___f_2762_; lean_object* v___x_2763_; 
lean_inc_ref(v_op_2742_);
v___f_2762_ = lean_alloc_closure((void*)(l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___lam__3___boxed), 8, 1);
lean_closure_set(v___f_2762_, 0, v_op_2742_);
lean_inc(v_a_2747_);
lean_inc_ref(v_a_2746_);
lean_inc(v_a_2745_);
lean_inc_ref(v_a_2744_);
lean_inc_ref(v_e_2743_);
v___x_2763_ = lean_apply_6(v_op_2742_, v_e_2743_, v_a_2744_, v_a_2745_, v_a_2746_, v_a_2747_, lean_box(0));
if (lean_obj_tag(v___x_2763_) == 0)
{
lean_object* v_a_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; 
v_a_2764_ = lean_ctor_get(v___x_2763_, 0);
lean_inc(v_a_2764_);
lean_dec_ref_known(v___x_2763_, 1);
v___x_2765_ = l_Array_reverse___redArg(v_a_2764_);
v___x_2766_ = l_Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3___redArg(v___f_2762_, v___x_2765_, v_e_2743_, v_a_2744_, v_a_2745_, v_a_2746_, v_a_2747_);
return v___x_2766_;
}
else
{
lean_dec_ref(v___f_2762_);
lean_dec_ref(v_e_2743_);
return v___x_2763_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___lam__3(lean_object* v_op_2767_, lean_object* v_a_2768_, lean_object* v_f_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_){
_start:
{
lean_object* v___x_2775_; 
v___x_2775_ = l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg(v_op_2767_, v_f_2769_, v___y_2770_, v___y_2771_, v___y_2772_, v___y_2773_);
if (lean_obj_tag(v___x_2775_) == 0)
{
lean_object* v_a_2776_; lean_object* v___x_2778_; uint8_t v_isShared_2779_; uint8_t v_isSharedCheck_2784_; 
v_a_2776_ = lean_ctor_get(v___x_2775_, 0);
v_isSharedCheck_2784_ = !lean_is_exclusive(v___x_2775_);
if (v_isSharedCheck_2784_ == 0)
{
v___x_2778_ = v___x_2775_;
v_isShared_2779_ = v_isSharedCheck_2784_;
goto v_resetjp_2777_;
}
else
{
lean_inc(v_a_2776_);
lean_dec(v___x_2775_);
v___x_2778_ = lean_box(0);
v_isShared_2779_ = v_isSharedCheck_2784_;
goto v_resetjp_2777_;
}
v_resetjp_2777_:
{
lean_object* v___x_2780_; lean_object* v___x_2782_; 
v___x_2780_ = l_Array_append___redArg(v_a_2768_, v_a_2776_);
lean_dec(v_a_2776_);
if (v_isShared_2779_ == 0)
{
lean_ctor_set(v___x_2778_, 0, v___x_2780_);
v___x_2782_ = v___x_2778_;
goto v_reusejp_2781_;
}
else
{
lean_object* v_reuseFailAlloc_2783_; 
v_reuseFailAlloc_2783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2783_, 0, v___x_2780_);
v___x_2782_ = v_reuseFailAlloc_2783_;
goto v_reusejp_2781_;
}
v_reusejp_2781_:
{
return v___x_2782_;
}
}
}
else
{
lean_dec_ref(v_a_2768_);
return v___x_2775_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__0___redArg___boxed(lean_object* v_op_2785_, lean_object* v_as_2786_, lean_object* v_i_2787_, lean_object* v_stop_2788_, lean_object* v_b_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_){
_start:
{
size_t v_i_boxed_2795_; size_t v_stop_boxed_2796_; lean_object* v_res_2797_; 
v_i_boxed_2795_ = lean_unbox_usize(v_i_2787_);
lean_dec(v_i_2787_);
v_stop_boxed_2796_ = lean_unbox_usize(v_stop_2788_);
lean_dec(v_stop_2788_);
v_res_2797_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__0___redArg(v_op_2785_, v_as_2786_, v_i_boxed_2795_, v_stop_boxed_2796_, v_b_2789_, v___y_2790_, v___y_2791_, v___y_2792_, v___y_2793_);
lean_dec(v___y_2793_);
lean_dec_ref(v___y_2792_);
lean_dec(v___y_2791_);
lean_dec_ref(v___y_2790_);
lean_dec_ref(v_as_2786_);
return v_res_2797_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___boxed(lean_object* v_op_2798_, lean_object* v_e_2799_, lean_object* v_a_2800_, lean_object* v_a_2801_, lean_object* v_a_2802_, lean_object* v_a_2803_, lean_object* v_a_2804_){
_start:
{
lean_object* v_res_2805_; 
v_res_2805_ = l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg(v_op_2798_, v_e_2799_, v_a_2800_, v_a_2801_, v_a_2802_, v_a_2803_);
lean_dec(v_a_2803_);
lean_dec_ref(v_a_2802_);
lean_dec(v_a_2801_);
lean_dec_ref(v_a_2800_);
return v_res_2805_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches(lean_object* v_00_u03b1_2806_, lean_object* v_op_2807_, lean_object* v_e_2808_, lean_object* v_a_2809_, lean_object* v_a_2810_, lean_object* v_a_2811_, lean_object* v_a_2812_){
_start:
{
lean_object* v___x_2814_; 
v___x_2814_ = l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg(v_op_2807_, v_e_2808_, v_a_2809_, v_a_2810_, v_a_2811_, v_a_2812_);
return v___x_2814_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches___boxed(lean_object* v_00_u03b1_2815_, lean_object* v_op_2816_, lean_object* v_e_2817_, lean_object* v_a_2818_, lean_object* v_a_2819_, lean_object* v_a_2820_, lean_object* v_a_2821_, lean_object* v_a_2822_){
_start:
{
lean_object* v_res_2823_; 
v_res_2823_ = l_Lean_Meta_Rewrites_getSubexpressionMatches(v_00_u03b1_2815_, v_op_2816_, v_e_2817_, v_a_2818_, v_a_2819_, v_a_2820_, v_a_2821_);
lean_dec(v_a_2821_);
lean_dec_ref(v_a_2820_);
lean_dec(v_a_2819_);
lean_dec_ref(v_a_2818_);
return v_res_2823_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__0(lean_object* v_00_u03b1_2824_, lean_object* v_op_2825_, lean_object* v_as_2826_, size_t v_i_2827_, size_t v_stop_2828_, lean_object* v_b_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_){
_start:
{
lean_object* v___x_2835_; 
v___x_2835_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__0___redArg(v_op_2825_, v_as_2826_, v_i_2827_, v_stop_2828_, v_b_2829_, v___y_2830_, v___y_2831_, v___y_2832_, v___y_2833_);
return v___x_2835_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__0___boxed(lean_object* v_00_u03b1_2836_, lean_object* v_op_2837_, lean_object* v_as_2838_, lean_object* v_i_2839_, lean_object* v_stop_2840_, lean_object* v_b_2841_, lean_object* v___y_2842_, lean_object* v___y_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_){
_start:
{
size_t v_i_boxed_2847_; size_t v_stop_boxed_2848_; lean_object* v_res_2849_; 
v_i_boxed_2847_ = lean_unbox_usize(v_i_2839_);
lean_dec(v_i_2839_);
v_stop_boxed_2848_ = lean_unbox_usize(v_stop_2840_);
lean_dec(v_stop_2840_);
v_res_2849_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__0(v_00_u03b1_2836_, v_op_2837_, v_as_2838_, v_i_boxed_2847_, v_stop_boxed_2848_, v_b_2841_, v___y_2842_, v___y_2843_, v___y_2844_, v___y_2845_);
lean_dec(v___y_2845_);
lean_dec_ref(v___y_2844_);
lean_dec(v___y_2843_);
lean_dec_ref(v___y_2842_);
lean_dec_ref(v_as_2838_);
return v_res_2849_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3(lean_object* v_00_u03b1_2850_, lean_object* v_f_2851_, lean_object* v_x_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_){
_start:
{
lean_object* v___x_2859_; 
v___x_2859_ = l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg(v_f_2851_, v_x_2852_, v___y_2853_, v___y_2854_, v___y_2855_, v___y_2856_, v___y_2857_);
return v___x_2859_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___boxed(lean_object* v_00_u03b1_2860_, lean_object* v_f_2861_, lean_object* v_x_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_){
_start:
{
lean_object* v_res_2869_; 
v_res_2869_ = l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3(v_00_u03b1_2860_, v_f_2861_, v_x_2862_, v___y_2863_, v___y_2864_, v___y_2865_, v___y_2866_, v___y_2867_);
lean_dec(v___y_2867_);
lean_dec_ref(v___y_2866_);
lean_dec(v___y_2865_);
lean_dec_ref(v___y_2864_);
return v_res_2869_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3(lean_object* v_00_u03b1_2870_, lean_object* v_f_2871_, lean_object* v_init_2872_, lean_object* v_e_2873_, lean_object* v___y_2874_, lean_object* v___y_2875_, lean_object* v___y_2876_, lean_object* v___y_2877_){
_start:
{
lean_object* v___x_2879_; 
v___x_2879_ = l_Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3___redArg(v_f_2871_, v_init_2872_, v_e_2873_, v___y_2874_, v___y_2875_, v___y_2876_, v___y_2877_);
return v___x_2879_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3___boxed(lean_object* v_00_u03b1_2880_, lean_object* v_f_2881_, lean_object* v_init_2882_, lean_object* v_e_2883_, lean_object* v___y_2884_, lean_object* v___y_2885_, lean_object* v___y_2886_, lean_object* v___y_2887_, lean_object* v___y_2888_){
_start:
{
lean_object* v_res_2889_; 
v_res_2889_ = l_Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3(v_00_u03b1_2880_, v_f_2881_, v_init_2882_, v_e_2883_, v___y_2884_, v___y_2885_, v___y_2886_, v___y_2887_);
lean_dec(v___y_2887_);
lean_dec_ref(v___y_2886_);
lean_dec(v___y_2885_);
lean_dec_ref(v___y_2884_);
return v_res_2889_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__3(size_t v_sz_2890_, size_t v_i_2891_, lean_object* v_bs_2892_){
_start:
{
uint8_t v___x_2893_; 
v___x_2893_ = lean_usize_dec_lt(v_i_2891_, v_sz_2890_);
if (v___x_2893_ == 0)
{
return v_bs_2892_;
}
else
{
lean_object* v_v_2894_; lean_object* v_fst_2895_; lean_object* v_snd_2896_; lean_object* v___x_2898_; uint8_t v_isShared_2899_; uint8_t v_isSharedCheck_2910_; 
v_v_2894_ = lean_array_uget(v_bs_2892_, v_i_2891_);
v_fst_2895_ = lean_ctor_get(v_v_2894_, 0);
v_snd_2896_ = lean_ctor_get(v_v_2894_, 1);
v_isSharedCheck_2910_ = !lean_is_exclusive(v_v_2894_);
if (v_isSharedCheck_2910_ == 0)
{
v___x_2898_ = v_v_2894_;
v_isShared_2899_ = v_isSharedCheck_2910_;
goto v_resetjp_2897_;
}
else
{
lean_inc(v_snd_2896_);
lean_inc(v_fst_2895_);
lean_dec(v_v_2894_);
v___x_2898_ = lean_box(0);
v_isShared_2899_ = v_isSharedCheck_2910_;
goto v_resetjp_2897_;
}
v_resetjp_2897_:
{
lean_object* v___x_2900_; lean_object* v_bs_x27_2901_; lean_object* v___x_2902_; lean_object* v___x_2904_; 
v___x_2900_ = lean_unsigned_to_nat(0u);
v_bs_x27_2901_ = lean_array_uset(v_bs_2892_, v_i_2891_, v___x_2900_);
v___x_2902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2902_, 0, v_fst_2895_);
if (v_isShared_2899_ == 0)
{
lean_ctor_set(v___x_2898_, 0, v___x_2902_);
v___x_2904_ = v___x_2898_;
goto v_reusejp_2903_;
}
else
{
lean_object* v_reuseFailAlloc_2909_; 
v_reuseFailAlloc_2909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2909_, 0, v___x_2902_);
lean_ctor_set(v_reuseFailAlloc_2909_, 1, v_snd_2896_);
v___x_2904_ = v_reuseFailAlloc_2909_;
goto v_reusejp_2903_;
}
v_reusejp_2903_:
{
size_t v___x_2905_; size_t v___x_2906_; lean_object* v___x_2907_; 
v___x_2905_ = ((size_t)1ULL);
v___x_2906_ = lean_usize_add(v_i_2891_, v___x_2905_);
v___x_2907_ = lean_array_uset(v_bs_x27_2901_, v_i_2891_, v___x_2904_);
v_i_2891_ = v___x_2906_;
v_bs_2892_ = v___x_2907_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__3___boxed(lean_object* v_sz_2911_, lean_object* v_i_2912_, lean_object* v_bs_2913_){
_start:
{
size_t v_sz_boxed_2914_; size_t v_i_boxed_2915_; lean_object* v_res_2916_; 
v_sz_boxed_2914_ = lean_unbox_usize(v_sz_2911_);
lean_dec(v_sz_2911_);
v_i_boxed_2915_ = lean_unbox_usize(v_i_2912_);
lean_dec(v_i_2912_);
v_res_2916_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__3(v_sz_boxed_2914_, v_i_boxed_2915_, v_bs_2913_);
return v_res_2916_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__0_spec__0___redArg(lean_object* v_xs_2917_, lean_object* v_j_2918_){
_start:
{
lean_object* v_zero_2919_; uint8_t v_isZero_2920_; 
v_zero_2919_ = lean_unsigned_to_nat(0u);
v_isZero_2920_ = lean_nat_dec_eq(v_j_2918_, v_zero_2919_);
if (v_isZero_2920_ == 1)
{
lean_dec(v_j_2918_);
return v_xs_2917_;
}
else
{
lean_object* v___x_2921_; lean_object* v_snd_2922_; lean_object* v_snd_2923_; lean_object* v_one_2924_; lean_object* v_n_2925_; lean_object* v___x_2926_; lean_object* v_snd_2927_; lean_object* v_snd_2928_; uint8_t v___x_2929_; 
v___x_2921_ = lean_array_fget_borrowed(v_xs_2917_, v_j_2918_);
v_snd_2922_ = lean_ctor_get(v___x_2921_, 1);
v_snd_2923_ = lean_ctor_get(v_snd_2922_, 1);
v_one_2924_ = lean_unsigned_to_nat(1u);
v_n_2925_ = lean_nat_sub(v_j_2918_, v_one_2924_);
v___x_2926_ = lean_array_fget_borrowed(v_xs_2917_, v_n_2925_);
v_snd_2927_ = lean_ctor_get(v___x_2926_, 1);
v_snd_2928_ = lean_ctor_get(v_snd_2927_, 1);
v___x_2929_ = lean_nat_dec_lt(v_snd_2928_, v_snd_2923_);
if (v___x_2929_ == 0)
{
lean_dec(v_n_2925_);
lean_dec(v_j_2918_);
return v_xs_2917_;
}
else
{
lean_object* v___x_2930_; 
v___x_2930_ = lean_array_fswap(v_xs_2917_, v_j_2918_, v_n_2925_);
lean_dec(v_j_2918_);
v_xs_2917_ = v___x_2930_;
v_j_2918_ = v_n_2925_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__0(lean_object* v_xs_2932_, lean_object* v_i_2933_, lean_object* v_fuel_2934_){
_start:
{
lean_object* v_zero_2935_; uint8_t v_isZero_2936_; 
v_zero_2935_ = lean_unsigned_to_nat(0u);
v_isZero_2936_ = lean_nat_dec_eq(v_fuel_2934_, v_zero_2935_);
if (v_isZero_2936_ == 1)
{
lean_dec(v_fuel_2934_);
lean_dec(v_i_2933_);
return v_xs_2932_;
}
else
{
lean_object* v___x_2937_; uint8_t v___x_2938_; 
v___x_2937_ = lean_array_get_size(v_xs_2932_);
v___x_2938_ = lean_nat_dec_lt(v_i_2933_, v___x_2937_);
if (v___x_2938_ == 0)
{
lean_dec(v_fuel_2934_);
lean_dec(v_i_2933_);
return v_xs_2932_;
}
else
{
lean_object* v_one_2939_; lean_object* v_n_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; 
v_one_2939_ = lean_unsigned_to_nat(1u);
v_n_2940_ = lean_nat_sub(v_fuel_2934_, v_one_2939_);
lean_dec(v_fuel_2934_);
lean_inc(v_i_2933_);
v___x_2941_ = l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__0_spec__0___redArg(v_xs_2932_, v_i_2933_);
v___x_2942_ = lean_nat_add(v_i_2933_, v_one_2939_);
lean_dec(v_i_2933_);
v_xs_2932_ = v___x_2941_;
v_i_2933_ = v___x_2942_;
v_fuel_2934_ = v_n_2940_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__2(size_t v_sz_2944_, size_t v_i_2945_, lean_object* v_bs_2946_){
_start:
{
uint8_t v___x_2947_; 
v___x_2947_ = lean_usize_dec_lt(v_i_2945_, v_sz_2944_);
if (v___x_2947_ == 0)
{
return v_bs_2946_;
}
else
{
lean_object* v_v_2948_; lean_object* v_fst_2949_; lean_object* v_snd_2950_; lean_object* v___x_2952_; uint8_t v_isShared_2953_; uint8_t v_isSharedCheck_2964_; 
v_v_2948_ = lean_array_uget(v_bs_2946_, v_i_2945_);
v_fst_2949_ = lean_ctor_get(v_v_2948_, 0);
v_snd_2950_ = lean_ctor_get(v_v_2948_, 1);
v_isSharedCheck_2964_ = !lean_is_exclusive(v_v_2948_);
if (v_isSharedCheck_2964_ == 0)
{
v___x_2952_ = v_v_2948_;
v_isShared_2953_ = v_isSharedCheck_2964_;
goto v_resetjp_2951_;
}
else
{
lean_inc(v_snd_2950_);
lean_inc(v_fst_2949_);
lean_dec(v_v_2948_);
v___x_2952_ = lean_box(0);
v_isShared_2953_ = v_isSharedCheck_2964_;
goto v_resetjp_2951_;
}
v_resetjp_2951_:
{
lean_object* v___x_2954_; lean_object* v_bs_x27_2955_; lean_object* v___x_2956_; lean_object* v___x_2958_; 
v___x_2954_ = lean_unsigned_to_nat(0u);
v_bs_x27_2955_ = lean_array_uset(v_bs_2946_, v_i_2945_, v___x_2954_);
v___x_2956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2956_, 0, v_fst_2949_);
if (v_isShared_2953_ == 0)
{
lean_ctor_set(v___x_2952_, 0, v___x_2956_);
v___x_2958_ = v___x_2952_;
goto v_reusejp_2957_;
}
else
{
lean_object* v_reuseFailAlloc_2963_; 
v_reuseFailAlloc_2963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2963_, 0, v___x_2956_);
lean_ctor_set(v_reuseFailAlloc_2963_, 1, v_snd_2950_);
v___x_2958_ = v_reuseFailAlloc_2963_;
goto v_reusejp_2957_;
}
v_reusejp_2957_:
{
size_t v___x_2959_; size_t v___x_2960_; lean_object* v___x_2961_; 
v___x_2959_ = ((size_t)1ULL);
v___x_2960_ = lean_usize_add(v_i_2945_, v___x_2959_);
v___x_2961_ = lean_array_uset(v_bs_x27_2955_, v_i_2945_, v___x_2958_);
v_i_2945_ = v___x_2960_;
v_bs_2946_ = v___x_2961_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__2___boxed(lean_object* v_sz_2965_, lean_object* v_i_2966_, lean_object* v_bs_2967_){
_start:
{
size_t v_sz_boxed_2968_; size_t v_i_boxed_2969_; lean_object* v_res_2970_; 
v_sz_boxed_2968_ = lean_unbox_usize(v_sz_2965_);
lean_dec(v_sz_2965_);
v_i_boxed_2969_ = lean_unbox_usize(v_i_2966_);
lean_dec(v_i_2966_);
v_res_2970_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__2(v_sz_boxed_2968_, v_i_boxed_2969_, v_bs_2967_);
return v_res_2970_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__1___redArg(lean_object* v_forbidden_2971_, lean_object* v_as_2972_, size_t v_sz_2973_, size_t v_i_2974_, lean_object* v_b_2975_){
_start:
{
lean_object* v_a_2978_; uint8_t v___x_2982_; 
v___x_2982_ = lean_usize_dec_lt(v_i_2974_, v_sz_2973_);
if (v___x_2982_ == 0)
{
lean_object* v___x_2983_; 
v___x_2983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2983_, 0, v_b_2975_);
return v___x_2983_;
}
else
{
lean_object* v_a_2984_; lean_object* v_snd_2985_; lean_object* v_snd_2986_; lean_object* v_fst_2987_; lean_object* v_fst_2988_; lean_object* v___x_2990_; uint8_t v_isShared_2991_; uint8_t v_isSharedCheck_3027_; 
v_a_2984_ = lean_array_uget_borrowed(v_as_2972_, v_i_2974_);
v_snd_2985_ = lean_ctor_get(v_a_2984_, 1);
lean_inc(v_snd_2985_);
v_snd_2986_ = lean_ctor_get(v_b_2975_, 1);
lean_inc(v_snd_2986_);
v_fst_2987_ = lean_ctor_get(v_a_2984_, 0);
v_fst_2988_ = lean_ctor_get(v_snd_2985_, 0);
v_isSharedCheck_3027_ = !lean_is_exclusive(v_snd_2985_);
if (v_isSharedCheck_3027_ == 0)
{
lean_object* v_unused_3028_; 
v_unused_3028_ = lean_ctor_get(v_snd_2985_, 1);
lean_dec(v_unused_3028_);
v___x_2990_ = v_snd_2985_;
v_isShared_2991_ = v_isSharedCheck_3027_;
goto v_resetjp_2989_;
}
else
{
lean_inc(v_fst_2988_);
lean_dec(v_snd_2985_);
v___x_2990_ = lean_box(0);
v_isShared_2991_ = v_isSharedCheck_3027_;
goto v_resetjp_2989_;
}
v_resetjp_2989_:
{
lean_object* v_fst_2992_; lean_object* v___x_2994_; uint8_t v_isShared_2995_; uint8_t v_isSharedCheck_3025_; 
v_fst_2992_ = lean_ctor_get(v_b_2975_, 0);
v_isSharedCheck_3025_ = !lean_is_exclusive(v_b_2975_);
if (v_isSharedCheck_3025_ == 0)
{
lean_object* v_unused_3026_; 
v_unused_3026_ = lean_ctor_get(v_b_2975_, 1);
lean_dec(v_unused_3026_);
v___x_2994_ = v_b_2975_;
v_isShared_2995_ = v_isSharedCheck_3025_;
goto v_resetjp_2993_;
}
else
{
lean_inc(v_fst_2992_);
lean_dec(v_b_2975_);
v___x_2994_ = lean_box(0);
v_isShared_2995_ = v_isSharedCheck_3025_;
goto v_resetjp_2993_;
}
v_resetjp_2993_:
{
lean_object* v_fst_2996_; lean_object* v_snd_2997_; lean_object* v___x_2999_; uint8_t v_isShared_3000_; uint8_t v_isSharedCheck_3024_; 
v_fst_2996_ = lean_ctor_get(v_snd_2986_, 0);
v_snd_2997_ = lean_ctor_get(v_snd_2986_, 1);
v_isSharedCheck_3024_ = !lean_is_exclusive(v_snd_2986_);
if (v_isSharedCheck_3024_ == 0)
{
v___x_2999_ = v_snd_2986_;
v_isShared_3000_ = v_isSharedCheck_3024_;
goto v_resetjp_2998_;
}
else
{
lean_inc(v_snd_2997_);
lean_inc(v_fst_2996_);
lean_dec(v_snd_2986_);
v___x_2999_ = lean_box(0);
v_isShared_3000_ = v_isSharedCheck_3024_;
goto v_resetjp_2998_;
}
v_resetjp_2998_:
{
uint8_t v___x_3008_; 
v___x_3008_ = l_Lean_NameSet_contains(v_forbidden_2971_, v_fst_2987_);
if (v___x_3008_ == 0)
{
uint8_t v___x_3009_; 
v___x_3009_ = lean_unbox(v_fst_2988_);
lean_dec(v_fst_2988_);
if (v___x_3009_ == 0)
{
uint8_t v___x_3010_; 
v___x_3010_ = l_Lean_NameSet_contains(v_fst_2992_, v_fst_2987_);
if (v___x_3010_ == 0)
{
lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3014_; 
lean_del_object(v___x_2999_);
lean_del_object(v___x_2994_);
lean_inc(v_a_2984_);
v___x_3011_ = lean_array_push(v_snd_2997_, v_a_2984_);
lean_inc(v_fst_2987_);
v___x_3012_ = l_Lean_NameSet_insert(v_fst_2992_, v_fst_2987_);
if (v_isShared_2991_ == 0)
{
lean_ctor_set(v___x_2990_, 1, v___x_3011_);
lean_ctor_set(v___x_2990_, 0, v_fst_2996_);
v___x_3014_ = v___x_2990_;
goto v_reusejp_3013_;
}
else
{
lean_object* v_reuseFailAlloc_3016_; 
v_reuseFailAlloc_3016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3016_, 0, v_fst_2996_);
lean_ctor_set(v_reuseFailAlloc_3016_, 1, v___x_3011_);
v___x_3014_ = v_reuseFailAlloc_3016_;
goto v_reusejp_3013_;
}
v_reusejp_3013_:
{
lean_object* v___x_3015_; 
v___x_3015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3015_, 0, v___x_3012_);
lean_ctor_set(v___x_3015_, 1, v___x_3014_);
v_a_2978_ = v___x_3015_;
goto v___jp_2977_;
}
}
else
{
lean_del_object(v___x_2990_);
goto v___jp_3001_;
}
}
else
{
uint8_t v___x_3017_; 
v___x_3017_ = l_Lean_NameSet_contains(v_fst_2996_, v_fst_2987_);
if (v___x_3017_ == 0)
{
lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3021_; 
lean_del_object(v___x_2999_);
lean_del_object(v___x_2994_);
lean_inc(v_a_2984_);
v___x_3018_ = lean_array_push(v_snd_2997_, v_a_2984_);
lean_inc(v_fst_2987_);
v___x_3019_ = l_Lean_NameSet_insert(v_fst_2996_, v_fst_2987_);
if (v_isShared_2991_ == 0)
{
lean_ctor_set(v___x_2990_, 1, v___x_3018_);
lean_ctor_set(v___x_2990_, 0, v___x_3019_);
v___x_3021_ = v___x_2990_;
goto v_reusejp_3020_;
}
else
{
lean_object* v_reuseFailAlloc_3023_; 
v_reuseFailAlloc_3023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3023_, 0, v___x_3019_);
lean_ctor_set(v_reuseFailAlloc_3023_, 1, v___x_3018_);
v___x_3021_ = v_reuseFailAlloc_3023_;
goto v_reusejp_3020_;
}
v_reusejp_3020_:
{
lean_object* v___x_3022_; 
v___x_3022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3022_, 0, v_fst_2992_);
lean_ctor_set(v___x_3022_, 1, v___x_3021_);
v_a_2978_ = v___x_3022_;
goto v___jp_2977_;
}
}
else
{
lean_del_object(v___x_2990_);
goto v___jp_3001_;
}
}
}
else
{
lean_del_object(v___x_2990_);
lean_dec(v_fst_2988_);
goto v___jp_3001_;
}
v___jp_3001_:
{
lean_object* v___x_3003_; 
if (v_isShared_3000_ == 0)
{
v___x_3003_ = v___x_2999_;
goto v_reusejp_3002_;
}
else
{
lean_object* v_reuseFailAlloc_3007_; 
v_reuseFailAlloc_3007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3007_, 0, v_fst_2996_);
lean_ctor_set(v_reuseFailAlloc_3007_, 1, v_snd_2997_);
v___x_3003_ = v_reuseFailAlloc_3007_;
goto v_reusejp_3002_;
}
v_reusejp_3002_:
{
lean_object* v___x_3005_; 
if (v_isShared_2995_ == 0)
{
lean_ctor_set(v___x_2994_, 1, v___x_3003_);
v___x_3005_ = v___x_2994_;
goto v_reusejp_3004_;
}
else
{
lean_object* v_reuseFailAlloc_3006_; 
v_reuseFailAlloc_3006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3006_, 0, v_fst_2992_);
lean_ctor_set(v_reuseFailAlloc_3006_, 1, v___x_3003_);
v___x_3005_ = v_reuseFailAlloc_3006_;
goto v_reusejp_3004_;
}
v_reusejp_3004_:
{
v_a_2978_ = v___x_3005_;
goto v___jp_2977_;
}
}
}
}
}
}
}
v___jp_2977_:
{
size_t v___x_2979_; size_t v___x_2980_; 
v___x_2979_ = ((size_t)1ULL);
v___x_2980_ = lean_usize_add(v_i_2974_, v___x_2979_);
v_i_2974_ = v___x_2980_;
v_b_2975_ = v_a_2978_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__1___redArg___boxed(lean_object* v_forbidden_3029_, lean_object* v_as_3030_, lean_object* v_sz_3031_, lean_object* v_i_3032_, lean_object* v_b_3033_, lean_object* v___y_3034_){
_start:
{
size_t v_sz_boxed_3035_; size_t v_i_boxed_3036_; lean_object* v_res_3037_; 
v_sz_boxed_3035_ = lean_unbox_usize(v_sz_3031_);
lean_dec(v_sz_3031_);
v_i_boxed_3036_ = lean_unbox_usize(v_i_3032_);
lean_dec(v_i_3032_);
v_res_3037_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__1___redArg(v_forbidden_3029_, v_as_3030_, v_sz_boxed_3035_, v_i_boxed_3036_, v_b_3033_);
lean_dec_ref(v_as_3030_);
lean_dec(v_forbidden_3029_);
return v_res_3037_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__2(void){
_start:
{
lean_object* v___x_3041_; lean_object* v___x_3042_; 
v___x_3041_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__1));
v___x_3042_ = l_Lean_MessageData_ofFormat(v___x_3041_);
return v___x_3042_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__3(void){
_start:
{
lean_object* v___x_3043_; lean_object* v___x_3044_; 
v___x_3043_ = lean_box(1);
v___x_3044_ = l_Lean_MessageData_ofFormat(v___x_3043_);
return v___x_3044_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4(lean_object* v_a_3047_, lean_object* v_a_3048_){
_start:
{
if (lean_obj_tag(v_a_3047_) == 0)
{
lean_object* v___x_3049_; 
v___x_3049_ = l_List_reverse___redArg(v_a_3048_);
return v___x_3049_;
}
else
{
lean_object* v_head_3050_; lean_object* v_snd_3051_; lean_object* v_tail_3052_; lean_object* v___x_3054_; uint8_t v_isShared_3055_; uint8_t v_isSharedCheck_3097_; 
v_head_3050_ = lean_ctor_get(v_a_3047_, 0);
lean_inc(v_head_3050_);
v_snd_3051_ = lean_ctor_get(v_head_3050_, 1);
lean_inc(v_snd_3051_);
v_tail_3052_ = lean_ctor_get(v_a_3047_, 1);
v_isSharedCheck_3097_ = !lean_is_exclusive(v_a_3047_);
if (v_isSharedCheck_3097_ == 0)
{
lean_object* v_unused_3098_; 
v_unused_3098_ = lean_ctor_get(v_a_3047_, 0);
lean_dec(v_unused_3098_);
v___x_3054_ = v_a_3047_;
v_isShared_3055_ = v_isSharedCheck_3097_;
goto v_resetjp_3053_;
}
else
{
lean_inc(v_tail_3052_);
lean_dec(v_a_3047_);
v___x_3054_ = lean_box(0);
v_isShared_3055_ = v_isSharedCheck_3097_;
goto v_resetjp_3053_;
}
v_resetjp_3053_:
{
lean_object* v_fst_3056_; lean_object* v___x_3058_; uint8_t v_isShared_3059_; uint8_t v_isSharedCheck_3095_; 
v_fst_3056_ = lean_ctor_get(v_head_3050_, 0);
v_isSharedCheck_3095_ = !lean_is_exclusive(v_head_3050_);
if (v_isSharedCheck_3095_ == 0)
{
lean_object* v_unused_3096_; 
v_unused_3096_ = lean_ctor_get(v_head_3050_, 1);
lean_dec(v_unused_3096_);
v___x_3058_ = v_head_3050_;
v_isShared_3059_ = v_isSharedCheck_3095_;
goto v_resetjp_3057_;
}
else
{
lean_inc(v_fst_3056_);
lean_dec(v_head_3050_);
v___x_3058_ = lean_box(0);
v_isShared_3059_ = v_isSharedCheck_3095_;
goto v_resetjp_3057_;
}
v_resetjp_3057_:
{
lean_object* v_fst_3060_; lean_object* v_snd_3061_; lean_object* v___x_3063_; uint8_t v_isShared_3064_; uint8_t v_isSharedCheck_3094_; 
v_fst_3060_ = lean_ctor_get(v_snd_3051_, 0);
v_snd_3061_ = lean_ctor_get(v_snd_3051_, 1);
v_isSharedCheck_3094_ = !lean_is_exclusive(v_snd_3051_);
if (v_isSharedCheck_3094_ == 0)
{
v___x_3063_ = v_snd_3051_;
v_isShared_3064_ = v_isSharedCheck_3094_;
goto v_resetjp_3062_;
}
else
{
lean_inc(v_snd_3061_);
lean_inc(v_fst_3060_);
lean_dec(v_snd_3051_);
v___x_3063_ = lean_box(0);
v_isShared_3064_ = v_isSharedCheck_3094_;
goto v_resetjp_3062_;
}
v_resetjp_3062_:
{
lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3068_; 
v___x_3065_ = l_Lean_MessageData_ofName(v_fst_3056_);
v___x_3066_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__2, &l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__2_once, _init_l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__2);
if (v_isShared_3064_ == 0)
{
lean_ctor_set_tag(v___x_3063_, 7);
lean_ctor_set(v___x_3063_, 1, v___x_3066_);
lean_ctor_set(v___x_3063_, 0, v___x_3065_);
v___x_3068_ = v___x_3063_;
goto v_reusejp_3067_;
}
else
{
lean_object* v_reuseFailAlloc_3093_; 
v_reuseFailAlloc_3093_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3093_, 0, v___x_3065_);
lean_ctor_set(v_reuseFailAlloc_3093_, 1, v___x_3066_);
v___x_3068_ = v_reuseFailAlloc_3093_;
goto v_reusejp_3067_;
}
v_reusejp_3067_:
{
lean_object* v___x_3069_; lean_object* v___x_3071_; 
v___x_3069_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__3, &l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__3_once, _init_l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__3);
if (v_isShared_3059_ == 0)
{
lean_ctor_set_tag(v___x_3058_, 7);
lean_ctor_set(v___x_3058_, 1, v___x_3069_);
lean_ctor_set(v___x_3058_, 0, v___x_3068_);
v___x_3071_ = v___x_3058_;
goto v_reusejp_3070_;
}
else
{
lean_object* v_reuseFailAlloc_3092_; 
v_reuseFailAlloc_3092_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3092_, 0, v___x_3068_);
lean_ctor_set(v_reuseFailAlloc_3092_, 1, v___x_3069_);
v___x_3071_ = v_reuseFailAlloc_3092_;
goto v_reusejp_3070_;
}
v_reusejp_3070_:
{
lean_object* v___y_3073_; uint8_t v___x_3089_; 
v___x_3089_ = lean_unbox(v_fst_3060_);
lean_dec(v_fst_3060_);
if (v___x_3089_ == 0)
{
lean_object* v___x_3090_; 
v___x_3090_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__4));
v___y_3073_ = v___x_3090_;
goto v___jp_3072_;
}
else
{
lean_object* v___x_3091_; 
v___x_3091_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__5));
v___y_3073_ = v___x_3091_;
goto v___jp_3072_;
}
v___jp_3072_:
{
lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3086_; 
lean_inc_ref(v___y_3073_);
v___x_3074_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3074_, 0, v___y_3073_);
v___x_3075_ = l_Lean_MessageData_ofFormat(v___x_3074_);
v___x_3076_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3076_, 0, v___x_3075_);
lean_ctor_set(v___x_3076_, 1, v___x_3066_);
v___x_3077_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3077_, 0, v___x_3076_);
lean_ctor_set(v___x_3077_, 1, v___x_3069_);
v___x_3078_ = l_Nat_reprFast(v_snd_3061_);
v___x_3079_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3079_, 0, v___x_3078_);
v___x_3080_ = l_Lean_MessageData_ofFormat(v___x_3079_);
v___x_3081_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3081_, 0, v___x_3077_);
lean_ctor_set(v___x_3081_, 1, v___x_3080_);
v___x_3082_ = l_Lean_MessageData_paren(v___x_3081_);
v___x_3083_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3083_, 0, v___x_3071_);
lean_ctor_set(v___x_3083_, 1, v___x_3082_);
v___x_3084_ = l_Lean_MessageData_paren(v___x_3083_);
if (v_isShared_3055_ == 0)
{
lean_ctor_set(v___x_3054_, 1, v_a_3048_);
lean_ctor_set(v___x_3054_, 0, v___x_3084_);
v___x_3086_ = v___x_3054_;
goto v_reusejp_3085_;
}
else
{
lean_object* v_reuseFailAlloc_3088_; 
v_reuseFailAlloc_3088_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3088_, 0, v___x_3084_);
lean_ctor_set(v_reuseFailAlloc_3088_, 1, v_a_3048_);
v___x_3086_ = v_reuseFailAlloc_3088_;
goto v_reusejp_3085_;
}
v_reusejp_3085_:
{
v_a_3047_ = v_tail_3052_;
v_a_3048_ = v___x_3086_;
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
}
static lean_object* _init_l_Lean_Meta_Rewrites_rewriteCandidates___closed__1(void){
_start:
{
lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; 
v___x_3101_ = ((lean_object*)(l_Lean_Meta_Rewrites_rewriteCandidates___closed__0));
v___x_3102_ = l_Lean_NameSet_empty;
v___x_3103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3103_, 0, v___x_3102_);
lean_ctor_set(v___x_3103_, 1, v___x_3101_);
return v___x_3103_;
}
}
static lean_object* _init_l_Lean_Meta_Rewrites_rewriteCandidates___closed__2(void){
_start:
{
lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; 
v___x_3104_ = lean_obj_once(&l_Lean_Meta_Rewrites_rewriteCandidates___closed__1, &l_Lean_Meta_Rewrites_rewriteCandidates___closed__1_once, _init_l_Lean_Meta_Rewrites_rewriteCandidates___closed__1);
v___x_3105_ = l_Lean_NameSet_empty;
v___x_3106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3106_, 0, v___x_3105_);
lean_ctor_set(v___x_3106_, 1, v___x_3104_);
return v___x_3106_;
}
}
static lean_object* _init_l_Lean_Meta_Rewrites_rewriteCandidates___closed__3(void){
_start:
{
lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; 
v___x_3107_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__1_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_));
v___x_3108_ = ((lean_object*)(l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__4));
v___x_3109_ = l_Lean_Name_append(v___x_3108_, v___x_3107_);
return v___x_3109_;
}
}
static lean_object* _init_l_Lean_Meta_Rewrites_rewriteCandidates___closed__5(void){
_start:
{
lean_object* v___x_3111_; lean_object* v___x_3112_; 
v___x_3111_ = ((lean_object*)(l_Lean_Meta_Rewrites_rewriteCandidates___closed__4));
v___x_3112_ = l_Lean_stringToMessageData(v___x_3111_);
return v___x_3112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rewriteCandidates(lean_object* v_hyps_3113_, lean_object* v_moduleRef_3114_, lean_object* v_target_3115_, lean_object* v_forbidden_3116_, lean_object* v_a_3117_, lean_object* v_a_3118_, lean_object* v_a_3119_, lean_object* v_a_3120_){
_start:
{
lean_object* v___x_3122_; lean_object* v___x_3123_; 
v___x_3122_ = lean_alloc_closure((void*)(l_Lean_Meta_Rewrites_rwFindDecls___boxed), 7, 1);
lean_closure_set(v___x_3122_, 0, v_moduleRef_3114_);
v___x_3123_ = l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg(v___x_3122_, v_target_3115_, v_a_3117_, v_a_3118_, v_a_3119_, v_a_3120_);
if (lean_obj_tag(v___x_3123_) == 0)
{
lean_object* v_a_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; size_t v_sz_3129_; size_t v___x_3130_; lean_object* v___x_3131_; 
v_a_3124_ = lean_ctor_get(v___x_3123_, 0);
lean_inc(v_a_3124_);
lean_dec_ref_known(v___x_3123_, 1);
v___x_3125_ = lean_unsigned_to_nat(0u);
v___x_3126_ = lean_array_get_size(v_a_3124_);
v___x_3127_ = l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__0(v_a_3124_, v___x_3125_, v___x_3126_);
v___x_3128_ = lean_obj_once(&l_Lean_Meta_Rewrites_rewriteCandidates___closed__2, &l_Lean_Meta_Rewrites_rewriteCandidates___closed__2_once, _init_l_Lean_Meta_Rewrites_rewriteCandidates___closed__2);
v_sz_3129_ = lean_array_size(v___x_3127_);
v___x_3130_ = ((size_t)0ULL);
v___x_3131_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__1___redArg(v_forbidden_3116_, v___x_3127_, v_sz_3129_, v___x_3130_, v___x_3128_);
lean_dec_ref(v___x_3127_);
if (lean_obj_tag(v___x_3131_) == 0)
{
lean_object* v_a_3132_; lean_object* v___x_3134_; uint8_t v_isShared_3135_; uint8_t v_isSharedCheck_3176_; 
v_a_3132_ = lean_ctor_get(v___x_3131_, 0);
v_isSharedCheck_3176_ = !lean_is_exclusive(v___x_3131_);
if (v_isSharedCheck_3176_ == 0)
{
v___x_3134_ = v___x_3131_;
v_isShared_3135_ = v_isSharedCheck_3176_;
goto v_resetjp_3133_;
}
else
{
lean_inc(v_a_3132_);
lean_dec(v___x_3131_);
v___x_3134_ = lean_box(0);
v_isShared_3135_ = v_isSharedCheck_3176_;
goto v_resetjp_3133_;
}
v_resetjp_3133_:
{
lean_object* v_snd_3136_; lean_object* v_snd_3137_; lean_object* v___x_3139_; uint8_t v_isShared_3140_; uint8_t v_isSharedCheck_3174_; 
v_snd_3136_ = lean_ctor_get(v_a_3132_, 1);
lean_inc(v_snd_3136_);
lean_dec(v_a_3132_);
v_snd_3137_ = lean_ctor_get(v_snd_3136_, 1);
v_isSharedCheck_3174_ = !lean_is_exclusive(v_snd_3136_);
if (v_isSharedCheck_3174_ == 0)
{
lean_object* v_unused_3175_; 
v_unused_3175_ = lean_ctor_get(v_snd_3136_, 0);
lean_dec(v_unused_3175_);
v___x_3139_ = v_snd_3136_;
v_isShared_3140_ = v_isSharedCheck_3174_;
goto v_resetjp_3138_;
}
else
{
lean_inc(v_snd_3137_);
lean_dec(v_snd_3136_);
v___x_3139_ = lean_box(0);
v_isShared_3140_ = v_isSharedCheck_3174_;
goto v_resetjp_3138_;
}
v_resetjp_3138_:
{
lean_object* v_toCold_3150_; lean_object* v_options_3151_; uint8_t v_hasTrace_3152_; 
v_toCold_3150_ = lean_ctor_get(v_a_3119_, 0);
v_options_3151_ = lean_ctor_get(v_toCold_3150_, 2);
v_hasTrace_3152_ = lean_ctor_get_uint8(v_options_3151_, sizeof(void*)*1);
if (v_hasTrace_3152_ == 0)
{
lean_del_object(v___x_3139_);
goto v___jp_3141_;
}
else
{
lean_object* v_inheritedTraceOptions_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; uint8_t v___x_3156_; 
v_inheritedTraceOptions_3153_ = lean_ctor_get(v_toCold_3150_, 11);
v___x_3154_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__1_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_));
v___x_3155_ = lean_obj_once(&l_Lean_Meta_Rewrites_rewriteCandidates___closed__3, &l_Lean_Meta_Rewrites_rewriteCandidates___closed__3_once, _init_l_Lean_Meta_Rewrites_rewriteCandidates___closed__3);
v___x_3156_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3153_, v_options_3151_, v___x_3155_);
if (v___x_3156_ == 0)
{
lean_del_object(v___x_3139_);
goto v___jp_3141_;
}
else
{
lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3163_; 
v___x_3157_ = lean_obj_once(&l_Lean_Meta_Rewrites_rewriteCandidates___closed__5, &l_Lean_Meta_Rewrites_rewriteCandidates___closed__5_once, _init_l_Lean_Meta_Rewrites_rewriteCandidates___closed__5);
lean_inc(v_snd_3137_);
v___x_3158_ = lean_array_to_list(v_snd_3137_);
v___x_3159_ = lean_box(0);
v___x_3160_ = l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4(v___x_3158_, v___x_3159_);
v___x_3161_ = l_Lean_MessageData_ofList(v___x_3160_);
if (v_isShared_3140_ == 0)
{
lean_ctor_set_tag(v___x_3139_, 7);
lean_ctor_set(v___x_3139_, 1, v___x_3161_);
lean_ctor_set(v___x_3139_, 0, v___x_3157_);
v___x_3163_ = v___x_3139_;
goto v_reusejp_3162_;
}
else
{
lean_object* v_reuseFailAlloc_3173_; 
v_reuseFailAlloc_3173_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3173_, 0, v___x_3157_);
lean_ctor_set(v_reuseFailAlloc_3173_, 1, v___x_3161_);
v___x_3163_ = v_reuseFailAlloc_3173_;
goto v_reusejp_3162_;
}
v_reusejp_3162_:
{
lean_object* v___x_3164_; 
v___x_3164_ = l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2(v___x_3154_, v___x_3163_, v_a_3117_, v_a_3118_, v_a_3119_, v_a_3120_);
if (lean_obj_tag(v___x_3164_) == 0)
{
lean_dec_ref_known(v___x_3164_, 1);
goto v___jp_3141_;
}
else
{
lean_object* v_a_3165_; lean_object* v___x_3167_; uint8_t v_isShared_3168_; uint8_t v_isSharedCheck_3172_; 
lean_dec(v_snd_3137_);
lean_del_object(v___x_3134_);
lean_dec_ref(v_hyps_3113_);
v_a_3165_ = lean_ctor_get(v___x_3164_, 0);
v_isSharedCheck_3172_ = !lean_is_exclusive(v___x_3164_);
if (v_isSharedCheck_3172_ == 0)
{
v___x_3167_ = v___x_3164_;
v_isShared_3168_ = v_isSharedCheck_3172_;
goto v_resetjp_3166_;
}
else
{
lean_inc(v_a_3165_);
lean_dec(v___x_3164_);
v___x_3167_ = lean_box(0);
v_isShared_3168_ = v_isSharedCheck_3172_;
goto v_resetjp_3166_;
}
v_resetjp_3166_:
{
lean_object* v___x_3170_; 
if (v_isShared_3168_ == 0)
{
v___x_3170_ = v___x_3167_;
goto v_reusejp_3169_;
}
else
{
lean_object* v_reuseFailAlloc_3171_; 
v_reuseFailAlloc_3171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3171_, 0, v_a_3165_);
v___x_3170_ = v_reuseFailAlloc_3171_;
goto v_reusejp_3169_;
}
v_reusejp_3169_:
{
return v___x_3170_;
}
}
}
}
}
}
v___jp_3141_:
{
size_t v_sz_3142_; lean_object* v___x_3143_; size_t v_sz_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3148_; 
v_sz_3142_ = lean_array_size(v_hyps_3113_);
v___x_3143_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__2(v_sz_3142_, v___x_3130_, v_hyps_3113_);
v_sz_3144_ = lean_array_size(v_snd_3137_);
v___x_3145_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__3(v_sz_3144_, v___x_3130_, v_snd_3137_);
v___x_3146_ = l_Array_append___redArg(v___x_3143_, v___x_3145_);
lean_dec_ref(v___x_3145_);
if (v_isShared_3135_ == 0)
{
lean_ctor_set(v___x_3134_, 0, v___x_3146_);
v___x_3148_ = v___x_3134_;
goto v_reusejp_3147_;
}
else
{
lean_object* v_reuseFailAlloc_3149_; 
v_reuseFailAlloc_3149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3149_, 0, v___x_3146_);
v___x_3148_ = v_reuseFailAlloc_3149_;
goto v_reusejp_3147_;
}
v_reusejp_3147_:
{
return v___x_3148_;
}
}
}
}
}
else
{
lean_object* v_a_3177_; lean_object* v___x_3179_; uint8_t v_isShared_3180_; uint8_t v_isSharedCheck_3184_; 
lean_dec_ref(v_hyps_3113_);
v_a_3177_ = lean_ctor_get(v___x_3131_, 0);
v_isSharedCheck_3184_ = !lean_is_exclusive(v___x_3131_);
if (v_isSharedCheck_3184_ == 0)
{
v___x_3179_ = v___x_3131_;
v_isShared_3180_ = v_isSharedCheck_3184_;
goto v_resetjp_3178_;
}
else
{
lean_inc(v_a_3177_);
lean_dec(v___x_3131_);
v___x_3179_ = lean_box(0);
v_isShared_3180_ = v_isSharedCheck_3184_;
goto v_resetjp_3178_;
}
v_resetjp_3178_:
{
lean_object* v___x_3182_; 
if (v_isShared_3180_ == 0)
{
v___x_3182_ = v___x_3179_;
goto v_reusejp_3181_;
}
else
{
lean_object* v_reuseFailAlloc_3183_; 
v_reuseFailAlloc_3183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3183_, 0, v_a_3177_);
v___x_3182_ = v_reuseFailAlloc_3183_;
goto v_reusejp_3181_;
}
v_reusejp_3181_:
{
return v___x_3182_;
}
}
}
}
else
{
lean_object* v_a_3185_; lean_object* v___x_3187_; uint8_t v_isShared_3188_; uint8_t v_isSharedCheck_3192_; 
lean_dec_ref(v_hyps_3113_);
v_a_3185_ = lean_ctor_get(v___x_3123_, 0);
v_isSharedCheck_3192_ = !lean_is_exclusive(v___x_3123_);
if (v_isSharedCheck_3192_ == 0)
{
v___x_3187_ = v___x_3123_;
v_isShared_3188_ = v_isSharedCheck_3192_;
goto v_resetjp_3186_;
}
else
{
lean_inc(v_a_3185_);
lean_dec(v___x_3123_);
v___x_3187_ = lean_box(0);
v_isShared_3188_ = v_isSharedCheck_3192_;
goto v_resetjp_3186_;
}
v_resetjp_3186_:
{
lean_object* v___x_3190_; 
if (v_isShared_3188_ == 0)
{
v___x_3190_ = v___x_3187_;
goto v_reusejp_3189_;
}
else
{
lean_object* v_reuseFailAlloc_3191_; 
v_reuseFailAlloc_3191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3191_, 0, v_a_3185_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rewriteCandidates___boxed(lean_object* v_hyps_3193_, lean_object* v_moduleRef_3194_, lean_object* v_target_3195_, lean_object* v_forbidden_3196_, lean_object* v_a_3197_, lean_object* v_a_3198_, lean_object* v_a_3199_, lean_object* v_a_3200_, lean_object* v_a_3201_){
_start:
{
lean_object* v_res_3202_; 
v_res_3202_ = l_Lean_Meta_Rewrites_rewriteCandidates(v_hyps_3193_, v_moduleRef_3194_, v_target_3195_, v_forbidden_3196_, v_a_3197_, v_a_3198_, v_a_3199_, v_a_3200_);
lean_dec(v_a_3200_);
lean_dec_ref(v_a_3199_);
lean_dec(v_a_3198_);
lean_dec_ref(v_a_3197_);
lean_dec(v_forbidden_3196_);
return v_res_3202_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__1(lean_object* v_forbidden_3203_, lean_object* v_as_3204_, size_t v_sz_3205_, size_t v_i_3206_, lean_object* v_b_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_){
_start:
{
lean_object* v___x_3213_; 
v___x_3213_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__1___redArg(v_forbidden_3203_, v_as_3204_, v_sz_3205_, v_i_3206_, v_b_3207_);
return v___x_3213_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__1___boxed(lean_object* v_forbidden_3214_, lean_object* v_as_3215_, lean_object* v_sz_3216_, lean_object* v_i_3217_, lean_object* v_b_3218_, lean_object* v___y_3219_, lean_object* v___y_3220_, lean_object* v___y_3221_, lean_object* v___y_3222_, lean_object* v___y_3223_){
_start:
{
size_t v_sz_boxed_3224_; size_t v_i_boxed_3225_; lean_object* v_res_3226_; 
v_sz_boxed_3224_ = lean_unbox_usize(v_sz_3216_);
lean_dec(v_sz_3216_);
v_i_boxed_3225_ = lean_unbox_usize(v_i_3217_);
lean_dec(v_i_3217_);
v_res_3226_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__1(v_forbidden_3214_, v_as_3215_, v_sz_boxed_3224_, v_i_boxed_3225_, v_b_3218_, v___y_3219_, v___y_3220_, v___y_3221_, v___y_3222_);
lean_dec(v___y_3222_);
lean_dec_ref(v___y_3221_);
lean_dec(v___y_3220_);
lean_dec_ref(v___y_3219_);
lean_dec_ref(v_as_3215_);
lean_dec(v_forbidden_3214_);
return v_res_3226_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__0_spec__0(lean_object* v_xs_3227_, lean_object* v_j_3228_, lean_object* v_h_3229_){
_start:
{
lean_object* v___x_3230_; 
v___x_3230_ = l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__0_spec__0___redArg(v_xs_3227_, v_j_3228_);
return v___x_3230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RewriteResult_newGoal(lean_object* v_r_3231_){
_start:
{
uint8_t v_rfl_x3f_3232_; 
v_rfl_x3f_3232_ = lean_ctor_get_uint8(v_r_3231_, sizeof(void*)*4 + 1);
if (v_rfl_x3f_3232_ == 0)
{
lean_object* v_result_3233_; lean_object* v_eNew_3234_; lean_object* v___x_3235_; 
v_result_3233_ = lean_ctor_get(v_r_3231_, 2);
v_eNew_3234_ = lean_ctor_get(v_result_3233_, 0);
lean_inc_ref(v_eNew_3234_);
v___x_3235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3235_, 0, v_eNew_3234_);
return v___x_3235_;
}
else
{
lean_object* v___x_3236_; 
v___x_3236_ = lean_box(0);
return v___x_3236_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RewriteResult_newGoal___boxed(lean_object* v_r_3237_){
_start:
{
lean_object* v_res_3238_; 
v_res_3238_ = l_Lean_Meta_Rewrites_RewriteResult_newGoal(v_r_3237_);
lean_dec_ref(v_r_3237_);
return v_res_3238_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0___redArg___lam__0(lean_object* v_x_3239_, lean_object* v___y_3240_, lean_object* v___y_3241_, lean_object* v___y_3242_, lean_object* v___y_3243_, lean_object* v___y_3244_, lean_object* v___y_3245_, lean_object* v___y_3246_, lean_object* v___y_3247_){
_start:
{
lean_object* v___x_3249_; 
lean_inc(v___y_3243_);
lean_inc_ref(v___y_3242_);
lean_inc(v___y_3241_);
lean_inc_ref(v___y_3240_);
v___x_3249_ = lean_apply_9(v_x_3239_, v___y_3240_, v___y_3241_, v___y_3242_, v___y_3243_, v___y_3244_, v___y_3245_, v___y_3246_, v___y_3247_, lean_box(0));
return v___x_3249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0___redArg___lam__0___boxed(lean_object* v_x_3250_, lean_object* v___y_3251_, lean_object* v___y_3252_, lean_object* v___y_3253_, lean_object* v___y_3254_, lean_object* v___y_3255_, lean_object* v___y_3256_, lean_object* v___y_3257_, lean_object* v___y_3258_, lean_object* v___y_3259_){
_start:
{
lean_object* v_res_3260_; 
v_res_3260_ = l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0___redArg___lam__0(v_x_3250_, v___y_3251_, v___y_3252_, v___y_3253_, v___y_3254_, v___y_3255_, v___y_3256_, v___y_3257_, v___y_3258_);
lean_dec(v___y_3254_);
lean_dec_ref(v___y_3253_);
lean_dec(v___y_3252_);
lean_dec_ref(v___y_3251_);
return v_res_3260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0___redArg(lean_object* v_mctx_3261_, lean_object* v_x_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_, lean_object* v___y_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_){
_start:
{
lean_object* v___f_3272_; lean_object* v___x_3273_; 
lean_inc(v___y_3266_);
lean_inc_ref(v___y_3265_);
lean_inc(v___y_3264_);
lean_inc_ref(v___y_3263_);
v___f_3272_ = lean_alloc_closure((void*)(l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_3272_, 0, v_x_3262_);
lean_closure_set(v___f_3272_, 1, v___y_3263_);
lean_closure_set(v___f_3272_, 2, v___y_3264_);
lean_closure_set(v___f_3272_, 3, v___y_3265_);
lean_closure_set(v___f_3272_, 4, v___y_3266_);
v___x_3273_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMCtxImp(lean_box(0), v_mctx_3261_, v___f_3272_, v___y_3267_, v___y_3268_, v___y_3269_, v___y_3270_);
if (lean_obj_tag(v___x_3273_) == 0)
{
return v___x_3273_;
}
else
{
lean_object* v_a_3274_; lean_object* v___x_3276_; uint8_t v_isShared_3277_; uint8_t v_isSharedCheck_3281_; 
v_a_3274_ = lean_ctor_get(v___x_3273_, 0);
v_isSharedCheck_3281_ = !lean_is_exclusive(v___x_3273_);
if (v_isSharedCheck_3281_ == 0)
{
v___x_3276_ = v___x_3273_;
v_isShared_3277_ = v_isSharedCheck_3281_;
goto v_resetjp_3275_;
}
else
{
lean_inc(v_a_3274_);
lean_dec(v___x_3273_);
v___x_3276_ = lean_box(0);
v_isShared_3277_ = v_isSharedCheck_3281_;
goto v_resetjp_3275_;
}
v_resetjp_3275_:
{
lean_object* v___x_3279_; 
if (v_isShared_3277_ == 0)
{
v___x_3279_ = v___x_3276_;
goto v_reusejp_3278_;
}
else
{
lean_object* v_reuseFailAlloc_3280_; 
v_reuseFailAlloc_3280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3280_, 0, v_a_3274_);
v___x_3279_ = v_reuseFailAlloc_3280_;
goto v_reusejp_3278_;
}
v_reusejp_3278_:
{
return v___x_3279_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0___redArg___boxed(lean_object* v_mctx_3282_, lean_object* v_x_3283_, lean_object* v___y_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_, lean_object* v___y_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_){
_start:
{
lean_object* v_res_3293_; 
v_res_3293_ = l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0___redArg(v_mctx_3282_, v_x_3283_, v___y_3284_, v___y_3285_, v___y_3286_, v___y_3287_, v___y_3288_, v___y_3289_, v___y_3290_, v___y_3291_);
lean_dec(v___y_3291_);
lean_dec_ref(v___y_3290_);
lean_dec(v___y_3289_);
lean_dec_ref(v___y_3288_);
lean_dec(v___y_3287_);
lean_dec_ref(v___y_3286_);
lean_dec(v___y_3285_);
lean_dec_ref(v___y_3284_);
return v_res_3293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0(lean_object* v_00_u03b1_3294_, lean_object* v_mctx_3295_, lean_object* v_x_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_, lean_object* v___y_3299_, lean_object* v___y_3300_, lean_object* v___y_3301_, lean_object* v___y_3302_, lean_object* v___y_3303_, lean_object* v___y_3304_){
_start:
{
lean_object* v___x_3306_; 
v___x_3306_ = l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0___redArg(v_mctx_3295_, v_x_3296_, v___y_3297_, v___y_3298_, v___y_3299_, v___y_3300_, v___y_3301_, v___y_3302_, v___y_3303_, v___y_3304_);
return v___x_3306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0___boxed(lean_object* v_00_u03b1_3307_, lean_object* v_mctx_3308_, lean_object* v_x_3309_, lean_object* v___y_3310_, lean_object* v___y_3311_, lean_object* v___y_3312_, lean_object* v___y_3313_, lean_object* v___y_3314_, lean_object* v___y_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_, lean_object* v___y_3318_){
_start:
{
lean_object* v_res_3319_; 
v_res_3319_ = l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0(v_00_u03b1_3307_, v_mctx_3308_, v_x_3309_, v___y_3310_, v___y_3311_, v___y_3312_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_);
lean_dec(v___y_3317_);
lean_dec_ref(v___y_3316_);
lean_dec(v___y_3315_);
lean_dec_ref(v___y_3314_);
lean_dec(v___y_3313_);
lean_dec_ref(v___y_3312_);
lean_dec(v___y_3311_);
lean_dec_ref(v___y_3310_);
return v_res_3319_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RewriteResult_addSuggestion___lam__0(lean_object* v_expr_3320_, uint8_t v_symm_3321_, lean_object* v_r_3322_, lean_object* v_ref_3323_, lean_object* v_checkState_x3f_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_){
_start:
{
lean_object* v_ref_3334_; lean_object* v___x_3335_; 
v_ref_3334_ = lean_ctor_get(v___y_3331_, 2);
v___x_3335_ = l_Lean_Elab_Tactic_saveState___redArg(v___y_3326_, v___y_3328_, v___y_3330_, v___y_3332_);
if (lean_obj_tag(v___x_3335_) == 0)
{
lean_object* v_a_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___y_3346_; 
v_a_3336_ = lean_ctor_get(v___x_3335_, 0);
lean_inc(v_a_3336_);
lean_dec_ref_known(v___x_3335_, 1);
v___x_3337_ = lean_box(v_symm_3321_);
v___x_3338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3338_, 0, v_expr_3320_);
lean_ctor_set(v___x_3338_, 1, v___x_3337_);
v___x_3339_ = lean_box(0);
v___x_3340_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3340_, 0, v___x_3338_);
lean_ctor_set(v___x_3340_, 1, v___x_3339_);
v___x_3341_ = l_Lean_Meta_Rewrites_RewriteResult_newGoal(v_r_3322_);
v___x_3342_ = l_Lean_Option_toLOption___redArg(v___x_3341_);
v___x_3343_ = lean_box(0);
lean_inc(v_ref_3334_);
v___x_3344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3344_, 0, v_ref_3334_);
if (lean_obj_tag(v_checkState_x3f_3324_) == 0)
{
v___y_3346_ = v_a_3336_;
goto v___jp_3345_;
}
else
{
lean_object* v_val_3349_; 
lean_dec(v_a_3336_);
v_val_3349_ = lean_ctor_get(v_checkState_x3f_3324_, 0);
lean_inc(v_val_3349_);
lean_dec_ref_known(v_checkState_x3f_3324_, 1);
v___y_3346_ = v_val_3349_;
goto v___jp_3345_;
}
v___jp_3345_:
{
lean_object* v___x_3347_; lean_object* v___x_3348_; 
v___x_3347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3347_, 0, v___y_3346_);
v___x_3348_ = l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion(v_ref_3323_, v___x_3340_, v___x_3342_, v___x_3343_, v___x_3344_, v___x_3347_, v___y_3325_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_);
return v___x_3348_;
}
}
else
{
lean_object* v_a_3350_; lean_object* v___x_3352_; uint8_t v_isShared_3353_; uint8_t v_isSharedCheck_3357_; 
lean_dec(v_checkState_x3f_3324_);
lean_dec(v_ref_3323_);
lean_dec_ref(v_expr_3320_);
v_a_3350_ = lean_ctor_get(v___x_3335_, 0);
v_isSharedCheck_3357_ = !lean_is_exclusive(v___x_3335_);
if (v_isSharedCheck_3357_ == 0)
{
v___x_3352_ = v___x_3335_;
v_isShared_3353_ = v_isSharedCheck_3357_;
goto v_resetjp_3351_;
}
else
{
lean_inc(v_a_3350_);
lean_dec(v___x_3335_);
v___x_3352_ = lean_box(0);
v_isShared_3353_ = v_isSharedCheck_3357_;
goto v_resetjp_3351_;
}
v_resetjp_3351_:
{
lean_object* v___x_3355_; 
if (v_isShared_3353_ == 0)
{
v___x_3355_ = v___x_3352_;
goto v_reusejp_3354_;
}
else
{
lean_object* v_reuseFailAlloc_3356_; 
v_reuseFailAlloc_3356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3356_, 0, v_a_3350_);
v___x_3355_ = v_reuseFailAlloc_3356_;
goto v_reusejp_3354_;
}
v_reusejp_3354_:
{
return v___x_3355_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RewriteResult_addSuggestion___lam__0___boxed(lean_object* v_expr_3358_, lean_object* v_symm_3359_, lean_object* v_r_3360_, lean_object* v_ref_3361_, lean_object* v_checkState_x3f_3362_, lean_object* v___y_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_, lean_object* v___y_3371_){
_start:
{
uint8_t v_symm_boxed_3372_; lean_object* v_res_3373_; 
v_symm_boxed_3372_ = lean_unbox(v_symm_3359_);
v_res_3373_ = l_Lean_Meta_Rewrites_RewriteResult_addSuggestion___lam__0(v_expr_3358_, v_symm_boxed_3372_, v_r_3360_, v_ref_3361_, v_checkState_x3f_3362_, v___y_3363_, v___y_3364_, v___y_3365_, v___y_3366_, v___y_3367_, v___y_3368_, v___y_3369_, v___y_3370_);
lean_dec(v___y_3370_);
lean_dec_ref(v___y_3369_);
lean_dec(v___y_3368_);
lean_dec_ref(v___y_3367_);
lean_dec(v___y_3366_);
lean_dec_ref(v___y_3365_);
lean_dec(v___y_3364_);
lean_dec_ref(v___y_3363_);
lean_dec_ref(v_r_3360_);
return v_res_3373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RewriteResult_addSuggestion(lean_object* v_ref_3374_, lean_object* v_r_3375_, lean_object* v_checkState_x3f_3376_, lean_object* v_a_3377_, lean_object* v_a_3378_, lean_object* v_a_3379_, lean_object* v_a_3380_, lean_object* v_a_3381_, lean_object* v_a_3382_, lean_object* v_a_3383_, lean_object* v_a_3384_){
_start:
{
lean_object* v_expr_3386_; uint8_t v_symm_3387_; lean_object* v_mctx_3388_; lean_object* v___x_3389_; lean_object* v___f_3390_; lean_object* v___x_3391_; 
v_expr_3386_ = lean_ctor_get(v_r_3375_, 0);
lean_inc_ref(v_expr_3386_);
v_symm_3387_ = lean_ctor_get_uint8(v_r_3375_, sizeof(void*)*4);
v_mctx_3388_ = lean_ctor_get(v_r_3375_, 3);
lean_inc_ref(v_mctx_3388_);
v___x_3389_ = lean_box(v_symm_3387_);
v___f_3390_ = lean_alloc_closure((void*)(l_Lean_Meta_Rewrites_RewriteResult_addSuggestion___lam__0___boxed), 14, 5);
lean_closure_set(v___f_3390_, 0, v_expr_3386_);
lean_closure_set(v___f_3390_, 1, v___x_3389_);
lean_closure_set(v___f_3390_, 2, v_r_3375_);
lean_closure_set(v___f_3390_, 3, v_ref_3374_);
lean_closure_set(v___f_3390_, 4, v_checkState_x3f_3376_);
v___x_3391_ = l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0___redArg(v_mctx_3388_, v___f_3390_, v_a_3377_, v_a_3378_, v_a_3379_, v_a_3380_, v_a_3381_, v_a_3382_, v_a_3383_, v_a_3384_);
return v___x_3391_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RewriteResult_addSuggestion___boxed(lean_object* v_ref_3392_, lean_object* v_r_3393_, lean_object* v_checkState_x3f_3394_, lean_object* v_a_3395_, lean_object* v_a_3396_, lean_object* v_a_3397_, lean_object* v_a_3398_, lean_object* v_a_3399_, lean_object* v_a_3400_, lean_object* v_a_3401_, lean_object* v_a_3402_, lean_object* v_a_3403_){
_start:
{
lean_object* v_res_3404_; 
v_res_3404_ = l_Lean_Meta_Rewrites_RewriteResult_addSuggestion(v_ref_3392_, v_r_3393_, v_checkState_x3f_3394_, v_a_3395_, v_a_3396_, v_a_3397_, v_a_3398_, v_a_3399_, v_a_3400_, v_a_3401_, v_a_3402_);
lean_dec(v_a_3402_);
lean_dec_ref(v_a_3401_);
lean_dec(v_a_3400_);
lean_dec_ref(v_a_3399_);
lean_dec(v_a_3398_);
lean_dec_ref(v_a_3397_);
lean_dec(v_a_3396_);
lean_dec_ref(v_a_3395_);
return v_res_3404_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__3___redArg(lean_object* v_a_3405_, lean_object* v_b_3406_, lean_object* v_x_3407_){
_start:
{
if (lean_obj_tag(v_x_3407_) == 0)
{
lean_dec(v_b_3406_);
lean_dec_ref(v_a_3405_);
return v_x_3407_;
}
else
{
lean_object* v_key_3408_; lean_object* v_value_3409_; lean_object* v_tail_3410_; lean_object* v___x_3412_; uint8_t v_isShared_3413_; uint8_t v_isSharedCheck_3422_; 
v_key_3408_ = lean_ctor_get(v_x_3407_, 0);
v_value_3409_ = lean_ctor_get(v_x_3407_, 1);
v_tail_3410_ = lean_ctor_get(v_x_3407_, 2);
v_isSharedCheck_3422_ = !lean_is_exclusive(v_x_3407_);
if (v_isSharedCheck_3422_ == 0)
{
v___x_3412_ = v_x_3407_;
v_isShared_3413_ = v_isSharedCheck_3422_;
goto v_resetjp_3411_;
}
else
{
lean_inc(v_tail_3410_);
lean_inc(v_value_3409_);
lean_inc(v_key_3408_);
lean_dec(v_x_3407_);
v___x_3412_ = lean_box(0);
v_isShared_3413_ = v_isSharedCheck_3422_;
goto v_resetjp_3411_;
}
v_resetjp_3411_:
{
uint8_t v___x_3414_; 
v___x_3414_ = lean_string_dec_eq(v_key_3408_, v_a_3405_);
if (v___x_3414_ == 0)
{
lean_object* v___x_3415_; lean_object* v___x_3417_; 
v___x_3415_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__3___redArg(v_a_3405_, v_b_3406_, v_tail_3410_);
if (v_isShared_3413_ == 0)
{
lean_ctor_set(v___x_3412_, 2, v___x_3415_);
v___x_3417_ = v___x_3412_;
goto v_reusejp_3416_;
}
else
{
lean_object* v_reuseFailAlloc_3418_; 
v_reuseFailAlloc_3418_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3418_, 0, v_key_3408_);
lean_ctor_set(v_reuseFailAlloc_3418_, 1, v_value_3409_);
lean_ctor_set(v_reuseFailAlloc_3418_, 2, v___x_3415_);
v___x_3417_ = v_reuseFailAlloc_3418_;
goto v_reusejp_3416_;
}
v_reusejp_3416_:
{
return v___x_3417_;
}
}
else
{
lean_object* v___x_3420_; 
lean_dec(v_value_3409_);
lean_dec(v_key_3408_);
if (v_isShared_3413_ == 0)
{
lean_ctor_set(v___x_3412_, 1, v_b_3406_);
lean_ctor_set(v___x_3412_, 0, v_a_3405_);
v___x_3420_ = v___x_3412_;
goto v_reusejp_3419_;
}
else
{
lean_object* v_reuseFailAlloc_3421_; 
v_reuseFailAlloc_3421_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3421_, 0, v_a_3405_);
lean_ctor_set(v_reuseFailAlloc_3421_, 1, v_b_3406_);
lean_ctor_set(v_reuseFailAlloc_3421_, 2, v_tail_3410_);
v___x_3420_ = v_reuseFailAlloc_3421_;
goto v_reusejp_3419_;
}
v_reusejp_3419_:
{
return v___x_3420_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2_spec__3_spec__5___redArg(lean_object* v_x_3423_, lean_object* v_x_3424_){
_start:
{
if (lean_obj_tag(v_x_3424_) == 0)
{
return v_x_3423_;
}
else
{
lean_object* v_key_3425_; lean_object* v_value_3426_; lean_object* v_tail_3427_; lean_object* v___x_3429_; uint8_t v_isShared_3430_; uint8_t v_isSharedCheck_3450_; 
v_key_3425_ = lean_ctor_get(v_x_3424_, 0);
v_value_3426_ = lean_ctor_get(v_x_3424_, 1);
v_tail_3427_ = lean_ctor_get(v_x_3424_, 2);
v_isSharedCheck_3450_ = !lean_is_exclusive(v_x_3424_);
if (v_isSharedCheck_3450_ == 0)
{
v___x_3429_ = v_x_3424_;
v_isShared_3430_ = v_isSharedCheck_3450_;
goto v_resetjp_3428_;
}
else
{
lean_inc(v_tail_3427_);
lean_inc(v_value_3426_);
lean_inc(v_key_3425_);
lean_dec(v_x_3424_);
v___x_3429_ = lean_box(0);
v_isShared_3430_ = v_isSharedCheck_3450_;
goto v_resetjp_3428_;
}
v_resetjp_3428_:
{
lean_object* v___x_3431_; uint64_t v___x_3432_; uint64_t v___x_3433_; uint64_t v___x_3434_; uint64_t v_fold_3435_; uint64_t v___x_3436_; uint64_t v___x_3437_; uint64_t v___x_3438_; size_t v___x_3439_; size_t v___x_3440_; size_t v___x_3441_; size_t v___x_3442_; size_t v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3446_; 
v___x_3431_ = lean_array_get_size(v_x_3423_);
v___x_3432_ = lean_string_hash(v_key_3425_);
v___x_3433_ = 32ULL;
v___x_3434_ = lean_uint64_shift_right(v___x_3432_, v___x_3433_);
v_fold_3435_ = lean_uint64_xor(v___x_3432_, v___x_3434_);
v___x_3436_ = 16ULL;
v___x_3437_ = lean_uint64_shift_right(v_fold_3435_, v___x_3436_);
v___x_3438_ = lean_uint64_xor(v_fold_3435_, v___x_3437_);
v___x_3439_ = lean_uint64_to_usize(v___x_3438_);
v___x_3440_ = lean_usize_of_nat(v___x_3431_);
v___x_3441_ = ((size_t)1ULL);
v___x_3442_ = lean_usize_sub(v___x_3440_, v___x_3441_);
v___x_3443_ = lean_usize_land(v___x_3439_, v___x_3442_);
v___x_3444_ = lean_array_uget_borrowed(v_x_3423_, v___x_3443_);
lean_inc(v___x_3444_);
if (v_isShared_3430_ == 0)
{
lean_ctor_set(v___x_3429_, 2, v___x_3444_);
v___x_3446_ = v___x_3429_;
goto v_reusejp_3445_;
}
else
{
lean_object* v_reuseFailAlloc_3449_; 
v_reuseFailAlloc_3449_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3449_, 0, v_key_3425_);
lean_ctor_set(v_reuseFailAlloc_3449_, 1, v_value_3426_);
lean_ctor_set(v_reuseFailAlloc_3449_, 2, v___x_3444_);
v___x_3446_ = v_reuseFailAlloc_3449_;
goto v_reusejp_3445_;
}
v_reusejp_3445_:
{
lean_object* v___x_3447_; 
v___x_3447_ = lean_array_uset(v_x_3423_, v___x_3443_, v___x_3446_);
v_x_3423_ = v___x_3447_;
v_x_3424_ = v_tail_3427_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2_spec__3___redArg(lean_object* v_i_3451_, lean_object* v_source_3452_, lean_object* v_target_3453_){
_start:
{
lean_object* v___x_3454_; uint8_t v___x_3455_; 
v___x_3454_ = lean_array_get_size(v_source_3452_);
v___x_3455_ = lean_nat_dec_lt(v_i_3451_, v___x_3454_);
if (v___x_3455_ == 0)
{
lean_dec_ref(v_source_3452_);
lean_dec(v_i_3451_);
return v_target_3453_;
}
else
{
lean_object* v_es_3456_; lean_object* v___x_3457_; lean_object* v_source_3458_; lean_object* v_target_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; 
v_es_3456_ = lean_array_fget(v_source_3452_, v_i_3451_);
v___x_3457_ = lean_box(0);
v_source_3458_ = lean_array_fset(v_source_3452_, v_i_3451_, v___x_3457_);
v_target_3459_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2_spec__3_spec__5___redArg(v_target_3453_, v_es_3456_);
v___x_3460_ = lean_unsigned_to_nat(1u);
v___x_3461_ = lean_nat_add(v_i_3451_, v___x_3460_);
lean_dec(v_i_3451_);
v_i_3451_ = v___x_3461_;
v_source_3452_ = v_source_3458_;
v_target_3453_ = v_target_3459_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2___redArg(lean_object* v_data_3463_){
_start:
{
lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v_nbuckets_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; 
v___x_3464_ = lean_array_get_size(v_data_3463_);
v___x_3465_ = lean_unsigned_to_nat(2u);
v_nbuckets_3466_ = lean_nat_mul(v___x_3464_, v___x_3465_);
v___x_3467_ = lean_unsigned_to_nat(0u);
v___x_3468_ = lean_box(0);
v___x_3469_ = lean_mk_array(v_nbuckets_3466_, v___x_3468_);
v___x_3470_ = lean_array_propagate_mark(v_data_3463_, v___x_3469_);
v___x_3471_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2_spec__3___redArg(v___x_3467_, v_data_3463_, v___x_3470_);
return v___x_3471_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0_spec__0___redArg(lean_object* v_a_3472_, lean_object* v_x_3473_){
_start:
{
if (lean_obj_tag(v_x_3473_) == 0)
{
uint8_t v___x_3474_; 
v___x_3474_ = 0;
return v___x_3474_;
}
else
{
lean_object* v_key_3475_; lean_object* v_tail_3476_; uint8_t v___x_3477_; 
v_key_3475_ = lean_ctor_get(v_x_3473_, 0);
v_tail_3476_ = lean_ctor_get(v_x_3473_, 2);
v___x_3477_ = lean_string_dec_eq(v_key_3475_, v_a_3472_);
if (v___x_3477_ == 0)
{
v_x_3473_ = v_tail_3476_;
goto _start;
}
else
{
return v___x_3477_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0_spec__0___redArg___boxed(lean_object* v_a_3479_, lean_object* v_x_3480_){
_start:
{
uint8_t v_res_3481_; lean_object* v_r_3482_; 
v_res_3481_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0_spec__0___redArg(v_a_3479_, v_x_3480_);
lean_dec(v_x_3480_);
lean_dec_ref(v_a_3479_);
v_r_3482_ = lean_box(v_res_3481_);
return v_r_3482_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1___redArg(lean_object* v_m_3483_, lean_object* v_a_3484_, lean_object* v_b_3485_){
_start:
{
lean_object* v_size_3486_; lean_object* v_buckets_3487_; lean_object* v___x_3489_; uint8_t v_isShared_3490_; uint8_t v_isSharedCheck_3530_; 
v_size_3486_ = lean_ctor_get(v_m_3483_, 0);
v_buckets_3487_ = lean_ctor_get(v_m_3483_, 1);
v_isSharedCheck_3530_ = !lean_is_exclusive(v_m_3483_);
if (v_isSharedCheck_3530_ == 0)
{
v___x_3489_ = v_m_3483_;
v_isShared_3490_ = v_isSharedCheck_3530_;
goto v_resetjp_3488_;
}
else
{
lean_inc(v_buckets_3487_);
lean_inc(v_size_3486_);
lean_dec(v_m_3483_);
v___x_3489_ = lean_box(0);
v_isShared_3490_ = v_isSharedCheck_3530_;
goto v_resetjp_3488_;
}
v_resetjp_3488_:
{
lean_object* v___x_3491_; uint64_t v___x_3492_; uint64_t v___x_3493_; uint64_t v___x_3494_; uint64_t v_fold_3495_; uint64_t v___x_3496_; uint64_t v___x_3497_; uint64_t v___x_3498_; size_t v___x_3499_; size_t v___x_3500_; size_t v___x_3501_; size_t v___x_3502_; size_t v___x_3503_; lean_object* v_bkt_3504_; uint8_t v___x_3505_; 
v___x_3491_ = lean_array_get_size(v_buckets_3487_);
v___x_3492_ = lean_string_hash(v_a_3484_);
v___x_3493_ = 32ULL;
v___x_3494_ = lean_uint64_shift_right(v___x_3492_, v___x_3493_);
v_fold_3495_ = lean_uint64_xor(v___x_3492_, v___x_3494_);
v___x_3496_ = 16ULL;
v___x_3497_ = lean_uint64_shift_right(v_fold_3495_, v___x_3496_);
v___x_3498_ = lean_uint64_xor(v_fold_3495_, v___x_3497_);
v___x_3499_ = lean_uint64_to_usize(v___x_3498_);
v___x_3500_ = lean_usize_of_nat(v___x_3491_);
v___x_3501_ = ((size_t)1ULL);
v___x_3502_ = lean_usize_sub(v___x_3500_, v___x_3501_);
v___x_3503_ = lean_usize_land(v___x_3499_, v___x_3502_);
v_bkt_3504_ = lean_array_uget_borrowed(v_buckets_3487_, v___x_3503_);
v___x_3505_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0_spec__0___redArg(v_a_3484_, v_bkt_3504_);
if (v___x_3505_ == 0)
{
lean_object* v___x_3506_; lean_object* v_size_x27_3507_; lean_object* v___x_3508_; lean_object* v_buckets_x27_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; uint8_t v___x_3515_; 
v___x_3506_ = lean_unsigned_to_nat(1u);
v_size_x27_3507_ = lean_nat_add(v_size_3486_, v___x_3506_);
lean_dec(v_size_3486_);
lean_inc(v_bkt_3504_);
v___x_3508_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3508_, 0, v_a_3484_);
lean_ctor_set(v___x_3508_, 1, v_b_3485_);
lean_ctor_set(v___x_3508_, 2, v_bkt_3504_);
v_buckets_x27_3509_ = lean_array_uset(v_buckets_3487_, v___x_3503_, v___x_3508_);
v___x_3510_ = lean_unsigned_to_nat(4u);
v___x_3511_ = lean_nat_mul(v_size_x27_3507_, v___x_3510_);
v___x_3512_ = lean_unsigned_to_nat(3u);
v___x_3513_ = lean_nat_div(v___x_3511_, v___x_3512_);
lean_dec(v___x_3511_);
v___x_3514_ = lean_array_get_size(v_buckets_x27_3509_);
v___x_3515_ = lean_nat_dec_le(v___x_3513_, v___x_3514_);
lean_dec(v___x_3513_);
if (v___x_3515_ == 0)
{
lean_object* v_val_3516_; lean_object* v___x_3518_; 
v_val_3516_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2___redArg(v_buckets_x27_3509_);
if (v_isShared_3490_ == 0)
{
lean_ctor_set(v___x_3489_, 1, v_val_3516_);
lean_ctor_set(v___x_3489_, 0, v_size_x27_3507_);
v___x_3518_ = v___x_3489_;
goto v_reusejp_3517_;
}
else
{
lean_object* v_reuseFailAlloc_3519_; 
v_reuseFailAlloc_3519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3519_, 0, v_size_x27_3507_);
lean_ctor_set(v_reuseFailAlloc_3519_, 1, v_val_3516_);
v___x_3518_ = v_reuseFailAlloc_3519_;
goto v_reusejp_3517_;
}
v_reusejp_3517_:
{
return v___x_3518_;
}
}
else
{
lean_object* v___x_3521_; 
if (v_isShared_3490_ == 0)
{
lean_ctor_set(v___x_3489_, 1, v_buckets_x27_3509_);
lean_ctor_set(v___x_3489_, 0, v_size_x27_3507_);
v___x_3521_ = v___x_3489_;
goto v_reusejp_3520_;
}
else
{
lean_object* v_reuseFailAlloc_3522_; 
v_reuseFailAlloc_3522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3522_, 0, v_size_x27_3507_);
lean_ctor_set(v_reuseFailAlloc_3522_, 1, v_buckets_x27_3509_);
v___x_3521_ = v_reuseFailAlloc_3522_;
goto v_reusejp_3520_;
}
v_reusejp_3520_:
{
return v___x_3521_;
}
}
}
else
{
lean_object* v___x_3523_; lean_object* v_buckets_x27_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3528_; 
lean_inc(v_bkt_3504_);
v___x_3523_ = lean_box(0);
v_buckets_x27_3524_ = lean_array_uset(v_buckets_3487_, v___x_3503_, v___x_3523_);
v___x_3525_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__3___redArg(v_a_3484_, v_b_3485_, v_bkt_3504_);
v___x_3526_ = lean_array_uset(v_buckets_x27_3524_, v___x_3503_, v___x_3525_);
if (v_isShared_3490_ == 0)
{
lean_ctor_set(v___x_3489_, 1, v___x_3526_);
v___x_3528_ = v___x_3489_;
goto v_reusejp_3527_;
}
else
{
lean_object* v_reuseFailAlloc_3529_; 
v_reuseFailAlloc_3529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3529_, 0, v_size_3486_);
lean_ctor_set(v_reuseFailAlloc_3529_, 1, v___x_3526_);
v___x_3528_ = v_reuseFailAlloc_3529_;
goto v_reusejp_3527_;
}
v_reusejp_3527_:
{
return v___x_3528_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0___redArg(lean_object* v_m_3531_, lean_object* v_a_3532_){
_start:
{
lean_object* v_buckets_3533_; lean_object* v___x_3534_; uint64_t v___x_3535_; uint64_t v___x_3536_; uint64_t v___x_3537_; uint64_t v_fold_3538_; uint64_t v___x_3539_; uint64_t v___x_3540_; uint64_t v___x_3541_; size_t v___x_3542_; size_t v___x_3543_; size_t v___x_3544_; size_t v___x_3545_; size_t v___x_3546_; lean_object* v___x_3547_; uint8_t v___x_3548_; 
v_buckets_3533_ = lean_ctor_get(v_m_3531_, 1);
v___x_3534_ = lean_array_get_size(v_buckets_3533_);
v___x_3535_ = lean_string_hash(v_a_3532_);
v___x_3536_ = 32ULL;
v___x_3537_ = lean_uint64_shift_right(v___x_3535_, v___x_3536_);
v_fold_3538_ = lean_uint64_xor(v___x_3535_, v___x_3537_);
v___x_3539_ = 16ULL;
v___x_3540_ = lean_uint64_shift_right(v_fold_3538_, v___x_3539_);
v___x_3541_ = lean_uint64_xor(v_fold_3538_, v___x_3540_);
v___x_3542_ = lean_uint64_to_usize(v___x_3541_);
v___x_3543_ = lean_usize_of_nat(v___x_3534_);
v___x_3544_ = ((size_t)1ULL);
v___x_3545_ = lean_usize_sub(v___x_3543_, v___x_3544_);
v___x_3546_ = lean_usize_land(v___x_3542_, v___x_3545_);
v___x_3547_ = lean_array_uget_borrowed(v_buckets_3533_, v___x_3546_);
v___x_3548_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0_spec__0___redArg(v_a_3532_, v___x_3547_);
return v___x_3548_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0___redArg___boxed(lean_object* v_m_3549_, lean_object* v_a_3550_){
_start:
{
uint8_t v_res_3551_; lean_object* v_r_3552_; 
v_res_3551_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0___redArg(v_m_3549_, v_a_3550_);
lean_dec_ref(v_a_3550_);
lean_dec_ref(v_m_3549_);
v_r_3552_ = lean_box(v_res_3551_);
return v_r_3552_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Rewrites_takeListAux_spec__2___redArg(lean_object* v_cfg_3553_, lean_object* v_as_x27_3554_, lean_object* v_b_3555_, lean_object* v___y_3556_, lean_object* v___y_3557_, lean_object* v___y_3558_, lean_object* v___y_3559_){
_start:
{
if (lean_obj_tag(v_as_x27_3554_) == 0)
{
lean_object* v___x_3561_; 
lean_dec_ref(v_cfg_3553_);
v___x_3561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3561_, 0, v_b_3555_);
return v___x_3561_;
}
else
{
lean_object* v_head_3562_; lean_object* v_snd_3563_; lean_object* v_snd_3564_; lean_object* v___x_3566_; uint8_t v_isShared_3567_; uint8_t v_isSharedCheck_3684_; 
v_head_3562_ = lean_ctor_get(v_as_x27_3554_, 0);
v_snd_3563_ = lean_ctor_get(v_head_3562_, 1);
v_snd_3564_ = lean_ctor_get(v_b_3555_, 1);
v_isSharedCheck_3684_ = !lean_is_exclusive(v_b_3555_);
if (v_isSharedCheck_3684_ == 0)
{
lean_object* v_unused_3685_; 
v_unused_3685_ = lean_ctor_get(v_b_3555_, 0);
lean_dec(v_unused_3685_);
v___x_3566_ = v_b_3555_;
v_isShared_3567_ = v_isSharedCheck_3684_;
goto v_resetjp_3565_;
}
else
{
lean_inc(v_snd_3564_);
lean_dec(v_b_3555_);
v___x_3566_ = lean_box(0);
v_isShared_3567_ = v_isSharedCheck_3684_;
goto v_resetjp_3565_;
}
v_resetjp_3565_:
{
lean_object* v_tail_3568_; lean_object* v_fst_3569_; lean_object* v_fst_3570_; lean_object* v_snd_3571_; lean_object* v_fst_3572_; lean_object* v_snd_3573_; lean_object* v___x_3575_; uint8_t v_isShared_3576_; uint8_t v_isSharedCheck_3683_; 
v_tail_3568_ = lean_ctor_get(v_as_x27_3554_, 1);
v_fst_3569_ = lean_ctor_get(v_head_3562_, 0);
v_fst_3570_ = lean_ctor_get(v_snd_3563_, 0);
v_snd_3571_ = lean_ctor_get(v_snd_3563_, 1);
v_fst_3572_ = lean_ctor_get(v_snd_3564_, 0);
v_snd_3573_ = lean_ctor_get(v_snd_3564_, 1);
v_isSharedCheck_3683_ = !lean_is_exclusive(v_snd_3564_);
if (v_isSharedCheck_3683_ == 0)
{
v___x_3575_ = v_snd_3564_;
v_isShared_3576_ = v_isSharedCheck_3683_;
goto v_resetjp_3574_;
}
else
{
lean_inc(v_snd_3573_);
lean_inc(v_fst_3572_);
lean_dec(v_snd_3564_);
v___x_3575_ = lean_box(0);
v_isShared_3576_ = v_isSharedCheck_3683_;
goto v_resetjp_3574_;
}
v_resetjp_3574_:
{
lean_object* v___x_3586_; lean_object* v___x_3591_; 
v___x_3586_ = lean_box(0);
v___x_3591_ = l_Lean_getRemainingHeartbeats___redArg(v___y_3558_);
if (lean_obj_tag(v___x_3591_) == 0)
{
lean_object* v_a_3592_; uint8_t v_stopAtRfl_3593_; lean_object* v_max_3594_; lean_object* v_minHeartbeats_3595_; lean_object* v_goal_3596_; lean_object* v_target_3597_; uint8_t v_side_3598_; lean_object* v_mctx_3599_; uint8_t v___x_3600_; 
v_a_3592_ = lean_ctor_get(v___x_3591_, 0);
lean_inc(v_a_3592_);
lean_dec_ref_known(v___x_3591_, 1);
v_stopAtRfl_3593_ = lean_ctor_get_uint8(v_cfg_3553_, sizeof(void*)*5);
v_max_3594_ = lean_ctor_get(v_cfg_3553_, 0);
v_minHeartbeats_3595_ = lean_ctor_get(v_cfg_3553_, 1);
v_goal_3596_ = lean_ctor_get(v_cfg_3553_, 2);
v_target_3597_ = lean_ctor_get(v_cfg_3553_, 3);
v_side_3598_ = lean_ctor_get_uint8(v_cfg_3553_, sizeof(void*)*5 + 1);
v_mctx_3599_ = lean_ctor_get(v_cfg_3553_, 4);
v___x_3600_ = lean_nat_dec_lt(v_a_3592_, v_minHeartbeats_3595_);
lean_dec(v_a_3592_);
if (v___x_3600_ == 0)
{
lean_object* v___x_3601_; uint8_t v___x_3602_; 
v___x_3601_ = lean_array_get_size(v_snd_3573_);
v___x_3602_ = lean_nat_dec_le(v_max_3594_, v___x_3601_);
if (v___x_3602_ == 0)
{
lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; 
lean_del_object(v___x_3575_);
lean_del_object(v___x_3566_);
v___x_3603_ = lean_box(v_side_3598_);
lean_inc(v_snd_3571_);
lean_inc(v_fst_3570_);
lean_inc(v_fst_3569_);
lean_inc_ref(v_target_3597_);
lean_inc(v_goal_3596_);
lean_inc_ref_n(v_mctx_3599_, 2);
v___x_3604_ = lean_alloc_closure((void*)(l_Lean_Meta_Rewrites_rwLemma___boxed), 12, 7);
lean_closure_set(v___x_3604_, 0, v_mctx_3599_);
lean_closure_set(v___x_3604_, 1, v_goal_3596_);
lean_closure_set(v___x_3604_, 2, v_target_3597_);
lean_closure_set(v___x_3604_, 3, v___x_3603_);
lean_closure_set(v___x_3604_, 4, v_fst_3569_);
lean_closure_set(v___x_3604_, 5, v_fst_3570_);
lean_closure_set(v___x_3604_, 6, v_snd_3571_);
v___x_3605_ = lean_alloc_closure((void*)(l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__0___boxed), 8, 3);
lean_closure_set(v___x_3605_, 0, lean_box(0));
lean_closure_set(v___x_3605_, 1, v_mctx_3599_);
lean_closure_set(v___x_3605_, 2, v___x_3604_);
v___x_3606_ = l_Lean_withoutModifyingState___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__1___redArg(v___x_3605_, v___y_3556_, v___y_3557_, v___y_3558_, v___y_3559_);
if (lean_obj_tag(v___x_3606_) == 0)
{
lean_object* v_a_3607_; 
v_a_3607_ = lean_ctor_get(v___x_3606_, 0);
lean_inc(v_a_3607_);
lean_dec_ref_known(v___x_3606_, 1);
if (lean_obj_tag(v_a_3607_) == 0)
{
goto v___jp_3587_;
}
else
{
lean_object* v_val_3608_; lean_object* v___x_3610_; uint8_t v_isShared_3611_; uint8_t v_isSharedCheck_3666_; 
v_val_3608_ = lean_ctor_get(v_a_3607_, 0);
v_isSharedCheck_3666_ = !lean_is_exclusive(v_a_3607_);
if (v_isSharedCheck_3666_ == 0)
{
v___x_3610_ = v_a_3607_;
v_isShared_3611_ = v_isSharedCheck_3666_;
goto v_resetjp_3609_;
}
else
{
lean_inc(v_val_3608_);
lean_dec(v_a_3607_);
v___x_3610_ = lean_box(0);
v_isShared_3611_ = v_isSharedCheck_3666_;
goto v_resetjp_3609_;
}
v_resetjp_3609_:
{
lean_object* v_result_3612_; lean_object* v_mctx_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; 
v_result_3612_ = lean_ctor_get(v_val_3608_, 2);
v_mctx_3613_ = lean_ctor_get(v_val_3608_, 3);
lean_inc(v_val_3608_);
v___x_3614_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_RewriteResult_ppResult___boxed), 6, 1);
lean_closure_set(v___x_3614_, 0, v_val_3608_);
lean_inc_ref(v_mctx_3613_);
v___x_3615_ = lean_alloc_closure((void*)(l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__0___boxed), 8, 3);
lean_closure_set(v___x_3615_, 0, lean_box(0));
lean_closure_set(v___x_3615_, 1, v_mctx_3613_);
lean_closure_set(v___x_3615_, 2, v___x_3614_);
v___x_3616_ = l_Lean_withoutModifyingState___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__1___redArg(v___x_3615_, v___y_3556_, v___y_3557_, v___y_3558_, v___y_3559_);
if (lean_obj_tag(v___x_3616_) == 0)
{
lean_object* v_a_3617_; uint8_t v___x_3618_; 
v_a_3617_ = lean_ctor_get(v___x_3616_, 0);
lean_inc(v_a_3617_);
lean_dec_ref_known(v___x_3616_, 1);
v___x_3618_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0___redArg(v_fst_3572_, v_a_3617_);
if (v___x_3618_ == 0)
{
lean_object* v_eNew_3619_; lean_object* v___x_3620_; 
v_eNew_3619_ = lean_ctor_get(v_result_3612_, 0);
lean_inc_ref(v_eNew_3619_);
lean_inc_ref(v_mctx_3613_);
v___x_3620_ = l_Lean_Meta_Rewrites_dischargableWithRfl_x3f(v_mctx_3613_, v_eNew_3619_, v___y_3556_, v___y_3557_, v___y_3558_, v___y_3559_);
if (lean_obj_tag(v___x_3620_) == 0)
{
if (v_stopAtRfl_3593_ == 0)
{
lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; 
lean_dec_ref_known(v___x_3620_, 1);
lean_del_object(v___x_3610_);
v___x_3621_ = lean_box(0);
v___x_3622_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1___redArg(v_fst_3572_, v_a_3617_, v___x_3621_);
v___x_3623_ = lean_array_push(v_snd_3573_, v_val_3608_);
v___x_3624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3624_, 0, v___x_3622_);
lean_ctor_set(v___x_3624_, 1, v___x_3623_);
v___x_3625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3625_, 0, v___x_3586_);
lean_ctor_set(v___x_3625_, 1, v___x_3624_);
v_as_x27_3554_ = v_tail_3568_;
v_b_3555_ = v___x_3625_;
goto _start;
}
else
{
lean_object* v_a_3627_; lean_object* v___x_3629_; uint8_t v_isShared_3630_; uint8_t v_isSharedCheck_3649_; 
v_a_3627_ = lean_ctor_get(v___x_3620_, 0);
v_isSharedCheck_3649_ = !lean_is_exclusive(v___x_3620_);
if (v_isSharedCheck_3649_ == 0)
{
v___x_3629_ = v___x_3620_;
v_isShared_3630_ = v_isSharedCheck_3649_;
goto v_resetjp_3628_;
}
else
{
lean_inc(v_a_3627_);
lean_dec(v___x_3620_);
v___x_3629_ = lean_box(0);
v_isShared_3630_ = v_isSharedCheck_3649_;
goto v_resetjp_3628_;
}
v_resetjp_3628_:
{
uint8_t v___x_3631_; 
v___x_3631_ = lean_unbox(v_a_3627_);
lean_dec(v_a_3627_);
if (v___x_3631_ == 0)
{
lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; 
lean_del_object(v___x_3629_);
lean_del_object(v___x_3610_);
v___x_3632_ = lean_box(0);
v___x_3633_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1___redArg(v_fst_3572_, v_a_3617_, v___x_3632_);
v___x_3634_ = lean_array_push(v_snd_3573_, v_val_3608_);
v___x_3635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3635_, 0, v___x_3633_);
lean_ctor_set(v___x_3635_, 1, v___x_3634_);
v___x_3636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3636_, 0, v___x_3586_);
lean_ctor_set(v___x_3636_, 1, v___x_3635_);
v_as_x27_3554_ = v_tail_3568_;
v_b_3555_ = v___x_3636_;
goto _start;
}
else
{
lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3640_; lean_object* v___x_3642_; 
lean_dec(v_a_3617_);
lean_dec_ref(v_cfg_3553_);
v___x_3638_ = lean_unsigned_to_nat(1u);
v___x_3639_ = lean_mk_empty_array_with_capacity(v___x_3638_);
v___x_3640_ = lean_array_push(v___x_3639_, v_val_3608_);
if (v_isShared_3611_ == 0)
{
lean_ctor_set(v___x_3610_, 0, v___x_3640_);
v___x_3642_ = v___x_3610_;
goto v_reusejp_3641_;
}
else
{
lean_object* v_reuseFailAlloc_3648_; 
v_reuseFailAlloc_3648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3648_, 0, v___x_3640_);
v___x_3642_ = v_reuseFailAlloc_3648_;
goto v_reusejp_3641_;
}
v_reusejp_3641_:
{
lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3646_; 
v___x_3643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3643_, 0, v_fst_3572_);
lean_ctor_set(v___x_3643_, 1, v_snd_3573_);
v___x_3644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3644_, 0, v___x_3642_);
lean_ctor_set(v___x_3644_, 1, v___x_3643_);
if (v_isShared_3630_ == 0)
{
lean_ctor_set(v___x_3629_, 0, v___x_3644_);
v___x_3646_ = v___x_3629_;
goto v_reusejp_3645_;
}
else
{
lean_object* v_reuseFailAlloc_3647_; 
v_reuseFailAlloc_3647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3647_, 0, v___x_3644_);
v___x_3646_ = v_reuseFailAlloc_3647_;
goto v_reusejp_3645_;
}
v_reusejp_3645_:
{
return v___x_3646_;
}
}
}
}
}
}
else
{
lean_object* v_a_3650_; lean_object* v___x_3652_; uint8_t v_isShared_3653_; uint8_t v_isSharedCheck_3657_; 
lean_dec(v_a_3617_);
lean_del_object(v___x_3610_);
lean_dec(v_val_3608_);
lean_dec(v_snd_3573_);
lean_dec(v_fst_3572_);
lean_dec_ref(v_cfg_3553_);
v_a_3650_ = lean_ctor_get(v___x_3620_, 0);
v_isSharedCheck_3657_ = !lean_is_exclusive(v___x_3620_);
if (v_isSharedCheck_3657_ == 0)
{
v___x_3652_ = v___x_3620_;
v_isShared_3653_ = v_isSharedCheck_3657_;
goto v_resetjp_3651_;
}
else
{
lean_inc(v_a_3650_);
lean_dec(v___x_3620_);
v___x_3652_ = lean_box(0);
v_isShared_3653_ = v_isSharedCheck_3657_;
goto v_resetjp_3651_;
}
v_resetjp_3651_:
{
lean_object* v___x_3655_; 
if (v_isShared_3653_ == 0)
{
v___x_3655_ = v___x_3652_;
goto v_reusejp_3654_;
}
else
{
lean_object* v_reuseFailAlloc_3656_; 
v_reuseFailAlloc_3656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3656_, 0, v_a_3650_);
v___x_3655_ = v_reuseFailAlloc_3656_;
goto v_reusejp_3654_;
}
v_reusejp_3654_:
{
return v___x_3655_;
}
}
}
}
else
{
lean_dec(v_a_3617_);
lean_del_object(v___x_3610_);
lean_dec(v_val_3608_);
goto v___jp_3587_;
}
}
else
{
lean_object* v_a_3658_; lean_object* v___x_3660_; uint8_t v_isShared_3661_; uint8_t v_isSharedCheck_3665_; 
lean_del_object(v___x_3610_);
lean_dec(v_val_3608_);
lean_dec(v_snd_3573_);
lean_dec(v_fst_3572_);
lean_dec_ref(v_cfg_3553_);
v_a_3658_ = lean_ctor_get(v___x_3616_, 0);
v_isSharedCheck_3665_ = !lean_is_exclusive(v___x_3616_);
if (v_isSharedCheck_3665_ == 0)
{
v___x_3660_ = v___x_3616_;
v_isShared_3661_ = v_isSharedCheck_3665_;
goto v_resetjp_3659_;
}
else
{
lean_inc(v_a_3658_);
lean_dec(v___x_3616_);
v___x_3660_ = lean_box(0);
v_isShared_3661_ = v_isSharedCheck_3665_;
goto v_resetjp_3659_;
}
v_resetjp_3659_:
{
lean_object* v___x_3663_; 
if (v_isShared_3661_ == 0)
{
v___x_3663_ = v___x_3660_;
goto v_reusejp_3662_;
}
else
{
lean_object* v_reuseFailAlloc_3664_; 
v_reuseFailAlloc_3664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3664_, 0, v_a_3658_);
v___x_3663_ = v_reuseFailAlloc_3664_;
goto v_reusejp_3662_;
}
v_reusejp_3662_:
{
return v___x_3663_;
}
}
}
}
}
}
else
{
lean_object* v_a_3667_; lean_object* v___x_3669_; uint8_t v_isShared_3670_; uint8_t v_isSharedCheck_3674_; 
lean_dec(v_snd_3573_);
lean_dec(v_fst_3572_);
lean_dec_ref(v_cfg_3553_);
v_a_3667_ = lean_ctor_get(v___x_3606_, 0);
v_isSharedCheck_3674_ = !lean_is_exclusive(v___x_3606_);
if (v_isSharedCheck_3674_ == 0)
{
v___x_3669_ = v___x_3606_;
v_isShared_3670_ = v_isSharedCheck_3674_;
goto v_resetjp_3668_;
}
else
{
lean_inc(v_a_3667_);
lean_dec(v___x_3606_);
v___x_3669_ = lean_box(0);
v_isShared_3670_ = v_isSharedCheck_3674_;
goto v_resetjp_3668_;
}
v_resetjp_3668_:
{
lean_object* v___x_3672_; 
if (v_isShared_3670_ == 0)
{
v___x_3672_ = v___x_3669_;
goto v_reusejp_3671_;
}
else
{
lean_object* v_reuseFailAlloc_3673_; 
v_reuseFailAlloc_3673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3673_, 0, v_a_3667_);
v___x_3672_ = v_reuseFailAlloc_3673_;
goto v_reusejp_3671_;
}
v_reusejp_3671_:
{
return v___x_3672_;
}
}
}
}
else
{
lean_dec_ref(v_cfg_3553_);
goto v___jp_3577_;
}
}
else
{
lean_dec_ref(v_cfg_3553_);
goto v___jp_3577_;
}
}
else
{
lean_object* v_a_3675_; lean_object* v___x_3677_; uint8_t v_isShared_3678_; uint8_t v_isSharedCheck_3682_; 
lean_del_object(v___x_3575_);
lean_dec(v_snd_3573_);
lean_dec(v_fst_3572_);
lean_del_object(v___x_3566_);
lean_dec_ref(v_cfg_3553_);
v_a_3675_ = lean_ctor_get(v___x_3591_, 0);
v_isSharedCheck_3682_ = !lean_is_exclusive(v___x_3591_);
if (v_isSharedCheck_3682_ == 0)
{
v___x_3677_ = v___x_3591_;
v_isShared_3678_ = v_isSharedCheck_3682_;
goto v_resetjp_3676_;
}
else
{
lean_inc(v_a_3675_);
lean_dec(v___x_3591_);
v___x_3677_ = lean_box(0);
v_isShared_3678_ = v_isSharedCheck_3682_;
goto v_resetjp_3676_;
}
v_resetjp_3676_:
{
lean_object* v___x_3680_; 
if (v_isShared_3678_ == 0)
{
v___x_3680_ = v___x_3677_;
goto v_reusejp_3679_;
}
else
{
lean_object* v_reuseFailAlloc_3681_; 
v_reuseFailAlloc_3681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3681_, 0, v_a_3675_);
v___x_3680_ = v_reuseFailAlloc_3681_;
goto v_reusejp_3679_;
}
v_reusejp_3679_:
{
return v___x_3680_;
}
}
}
v___jp_3577_:
{
lean_object* v___x_3578_; lean_object* v___x_3580_; 
lean_inc(v_snd_3573_);
v___x_3578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3578_, 0, v_snd_3573_);
if (v_isShared_3576_ == 0)
{
v___x_3580_ = v___x_3575_;
goto v_reusejp_3579_;
}
else
{
lean_object* v_reuseFailAlloc_3585_; 
v_reuseFailAlloc_3585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3585_, 0, v_fst_3572_);
lean_ctor_set(v_reuseFailAlloc_3585_, 1, v_snd_3573_);
v___x_3580_ = v_reuseFailAlloc_3585_;
goto v_reusejp_3579_;
}
v_reusejp_3579_:
{
lean_object* v___x_3582_; 
if (v_isShared_3567_ == 0)
{
lean_ctor_set(v___x_3566_, 1, v___x_3580_);
lean_ctor_set(v___x_3566_, 0, v___x_3578_);
v___x_3582_ = v___x_3566_;
goto v_reusejp_3581_;
}
else
{
lean_object* v_reuseFailAlloc_3584_; 
v_reuseFailAlloc_3584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3584_, 0, v___x_3578_);
lean_ctor_set(v_reuseFailAlloc_3584_, 1, v___x_3580_);
v___x_3582_ = v_reuseFailAlloc_3584_;
goto v_reusejp_3581_;
}
v_reusejp_3581_:
{
lean_object* v___x_3583_; 
v___x_3583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3583_, 0, v___x_3582_);
return v___x_3583_;
}
}
}
v___jp_3587_:
{
lean_object* v___x_3588_; lean_object* v___x_3589_; 
v___x_3588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3588_, 0, v_fst_3572_);
lean_ctor_set(v___x_3588_, 1, v_snd_3573_);
v___x_3589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3589_, 0, v___x_3586_);
lean_ctor_set(v___x_3589_, 1, v___x_3588_);
v_as_x27_3554_ = v_tail_3568_;
v_b_3555_ = v___x_3589_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Rewrites_takeListAux_spec__2___redArg___boxed(lean_object* v_cfg_3686_, lean_object* v_as_x27_3687_, lean_object* v_b_3688_, lean_object* v___y_3689_, lean_object* v___y_3690_, lean_object* v___y_3691_, lean_object* v___y_3692_, lean_object* v___y_3693_){
_start:
{
lean_object* v_res_3694_; 
v_res_3694_ = l_List_forIn_x27_loop___at___00Lean_Meta_Rewrites_takeListAux_spec__2___redArg(v_cfg_3686_, v_as_x27_3687_, v_b_3688_, v___y_3689_, v___y_3690_, v___y_3691_, v___y_3692_);
lean_dec(v___y_3692_);
lean_dec_ref(v___y_3691_);
lean_dec(v___y_3690_);
lean_dec_ref(v___y_3689_);
lean_dec(v_as_x27_3687_);
return v_res_3694_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_takeListAux(lean_object* v_cfg_3695_, lean_object* v_seen_3696_, lean_object* v_acc_3697_, lean_object* v_xs_3698_, lean_object* v_a_3699_, lean_object* v_a_3700_, lean_object* v_a_3701_, lean_object* v_a_3702_){
_start:
{
lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; lean_object* v___x_3707_; 
v___x_3704_ = lean_box(0);
v___x_3705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3705_, 0, v_seen_3696_);
lean_ctor_set(v___x_3705_, 1, v_acc_3697_);
v___x_3706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3706_, 0, v___x_3704_);
lean_ctor_set(v___x_3706_, 1, v___x_3705_);
v___x_3707_ = l_List_forIn_x27_loop___at___00Lean_Meta_Rewrites_takeListAux_spec__2___redArg(v_cfg_3695_, v_xs_3698_, v___x_3706_, v_a_3699_, v_a_3700_, v_a_3701_, v_a_3702_);
if (lean_obj_tag(v___x_3707_) == 0)
{
lean_object* v_a_3708_; lean_object* v___x_3710_; uint8_t v_isShared_3711_; uint8_t v_isSharedCheck_3722_; 
v_a_3708_ = lean_ctor_get(v___x_3707_, 0);
v_isSharedCheck_3722_ = !lean_is_exclusive(v___x_3707_);
if (v_isSharedCheck_3722_ == 0)
{
v___x_3710_ = v___x_3707_;
v_isShared_3711_ = v_isSharedCheck_3722_;
goto v_resetjp_3709_;
}
else
{
lean_inc(v_a_3708_);
lean_dec(v___x_3707_);
v___x_3710_ = lean_box(0);
v_isShared_3711_ = v_isSharedCheck_3722_;
goto v_resetjp_3709_;
}
v_resetjp_3709_:
{
lean_object* v_fst_3712_; 
v_fst_3712_ = lean_ctor_get(v_a_3708_, 0);
if (lean_obj_tag(v_fst_3712_) == 0)
{
lean_object* v_snd_3713_; lean_object* v_snd_3714_; lean_object* v___x_3716_; 
v_snd_3713_ = lean_ctor_get(v_a_3708_, 1);
lean_inc(v_snd_3713_);
lean_dec(v_a_3708_);
v_snd_3714_ = lean_ctor_get(v_snd_3713_, 1);
lean_inc(v_snd_3714_);
lean_dec(v_snd_3713_);
if (v_isShared_3711_ == 0)
{
lean_ctor_set(v___x_3710_, 0, v_snd_3714_);
v___x_3716_ = v___x_3710_;
goto v_reusejp_3715_;
}
else
{
lean_object* v_reuseFailAlloc_3717_; 
v_reuseFailAlloc_3717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3717_, 0, v_snd_3714_);
v___x_3716_ = v_reuseFailAlloc_3717_;
goto v_reusejp_3715_;
}
v_reusejp_3715_:
{
return v___x_3716_;
}
}
else
{
lean_object* v_val_3718_; lean_object* v___x_3720_; 
lean_inc_ref(v_fst_3712_);
lean_dec(v_a_3708_);
v_val_3718_ = lean_ctor_get(v_fst_3712_, 0);
lean_inc(v_val_3718_);
lean_dec_ref_known(v_fst_3712_, 1);
if (v_isShared_3711_ == 0)
{
lean_ctor_set(v___x_3710_, 0, v_val_3718_);
v___x_3720_ = v___x_3710_;
goto v_reusejp_3719_;
}
else
{
lean_object* v_reuseFailAlloc_3721_; 
v_reuseFailAlloc_3721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3721_, 0, v_val_3718_);
v___x_3720_ = v_reuseFailAlloc_3721_;
goto v_reusejp_3719_;
}
v_reusejp_3719_:
{
return v___x_3720_;
}
}
}
}
else
{
lean_object* v_a_3723_; lean_object* v___x_3725_; uint8_t v_isShared_3726_; uint8_t v_isSharedCheck_3730_; 
v_a_3723_ = lean_ctor_get(v___x_3707_, 0);
v_isSharedCheck_3730_ = !lean_is_exclusive(v___x_3707_);
if (v_isSharedCheck_3730_ == 0)
{
v___x_3725_ = v___x_3707_;
v_isShared_3726_ = v_isSharedCheck_3730_;
goto v_resetjp_3724_;
}
else
{
lean_inc(v_a_3723_);
lean_dec(v___x_3707_);
v___x_3725_ = lean_box(0);
v_isShared_3726_ = v_isSharedCheck_3730_;
goto v_resetjp_3724_;
}
v_resetjp_3724_:
{
lean_object* v___x_3728_; 
if (v_isShared_3726_ == 0)
{
v___x_3728_ = v___x_3725_;
goto v_reusejp_3727_;
}
else
{
lean_object* v_reuseFailAlloc_3729_; 
v_reuseFailAlloc_3729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3729_, 0, v_a_3723_);
v___x_3728_ = v_reuseFailAlloc_3729_;
goto v_reusejp_3727_;
}
v_reusejp_3727_:
{
return v___x_3728_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_takeListAux___boxed(lean_object* v_cfg_3731_, lean_object* v_seen_3732_, lean_object* v_acc_3733_, lean_object* v_xs_3734_, lean_object* v_a_3735_, lean_object* v_a_3736_, lean_object* v_a_3737_, lean_object* v_a_3738_, lean_object* v_a_3739_){
_start:
{
lean_object* v_res_3740_; 
v_res_3740_ = l_Lean_Meta_Rewrites_takeListAux(v_cfg_3731_, v_seen_3732_, v_acc_3733_, v_xs_3734_, v_a_3735_, v_a_3736_, v_a_3737_, v_a_3738_);
lean_dec(v_a_3738_);
lean_dec_ref(v_a_3737_);
lean_dec(v_a_3736_);
lean_dec_ref(v_a_3735_);
lean_dec(v_xs_3734_);
return v_res_3740_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0(lean_object* v_00_u03b2_3741_, lean_object* v_m_3742_, lean_object* v_a_3743_){
_start:
{
uint8_t v___x_3744_; 
v___x_3744_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0___redArg(v_m_3742_, v_a_3743_);
return v___x_3744_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0___boxed(lean_object* v_00_u03b2_3745_, lean_object* v_m_3746_, lean_object* v_a_3747_){
_start:
{
uint8_t v_res_3748_; lean_object* v_r_3749_; 
v_res_3748_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0(v_00_u03b2_3745_, v_m_3746_, v_a_3747_);
lean_dec_ref(v_a_3747_);
lean_dec_ref(v_m_3746_);
v_r_3749_ = lean_box(v_res_3748_);
return v_r_3749_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1(lean_object* v_00_u03b2_3750_, lean_object* v_m_3751_, lean_object* v_a_3752_, lean_object* v_b_3753_){
_start:
{
lean_object* v___x_3754_; 
v___x_3754_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1___redArg(v_m_3751_, v_a_3752_, v_b_3753_);
return v___x_3754_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Rewrites_takeListAux_spec__2(lean_object* v_cfg_3755_, lean_object* v_as_3756_, lean_object* v_as_x27_3757_, lean_object* v_b_3758_, lean_object* v_a_3759_, lean_object* v___y_3760_, lean_object* v___y_3761_, lean_object* v___y_3762_, lean_object* v___y_3763_){
_start:
{
lean_object* v___x_3765_; 
v___x_3765_ = l_List_forIn_x27_loop___at___00Lean_Meta_Rewrites_takeListAux_spec__2___redArg(v_cfg_3755_, v_as_x27_3757_, v_b_3758_, v___y_3760_, v___y_3761_, v___y_3762_, v___y_3763_);
return v___x_3765_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Rewrites_takeListAux_spec__2___boxed(lean_object* v_cfg_3766_, lean_object* v_as_3767_, lean_object* v_as_x27_3768_, lean_object* v_b_3769_, lean_object* v_a_3770_, lean_object* v___y_3771_, lean_object* v___y_3772_, lean_object* v___y_3773_, lean_object* v___y_3774_, lean_object* v___y_3775_){
_start:
{
lean_object* v_res_3776_; 
v_res_3776_ = l_List_forIn_x27_loop___at___00Lean_Meta_Rewrites_takeListAux_spec__2(v_cfg_3766_, v_as_3767_, v_as_x27_3768_, v_b_3769_, v_a_3770_, v___y_3771_, v___y_3772_, v___y_3773_, v___y_3774_);
lean_dec(v___y_3774_);
lean_dec_ref(v___y_3773_);
lean_dec(v___y_3772_);
lean_dec_ref(v___y_3771_);
lean_dec(v_as_x27_3768_);
lean_dec(v_as_3767_);
return v_res_3776_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0_spec__0(lean_object* v_00_u03b2_3777_, lean_object* v_a_3778_, lean_object* v_x_3779_){
_start:
{
uint8_t v___x_3780_; 
v___x_3780_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0_spec__0___redArg(v_a_3778_, v_x_3779_);
return v___x_3780_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3781_, lean_object* v_a_3782_, lean_object* v_x_3783_){
_start:
{
uint8_t v_res_3784_; lean_object* v_r_3785_; 
v_res_3784_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0_spec__0(v_00_u03b2_3781_, v_a_3782_, v_x_3783_);
lean_dec(v_x_3783_);
lean_dec_ref(v_a_3782_);
v_r_3785_ = lean_box(v_res_3784_);
return v_r_3785_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2(lean_object* v_00_u03b2_3786_, lean_object* v_data_3787_){
_start:
{
lean_object* v___x_3788_; 
v___x_3788_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2___redArg(v_data_3787_);
return v___x_3788_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__3(lean_object* v_00_u03b2_3789_, lean_object* v_a_3790_, lean_object* v_b_3791_, lean_object* v_x_3792_){
_start:
{
lean_object* v___x_3793_; 
v___x_3793_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__3___redArg(v_a_3790_, v_b_3791_, v_x_3792_);
return v___x_3793_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_3794_, lean_object* v_i_3795_, lean_object* v_source_3796_, lean_object* v_target_3797_){
_start:
{
lean_object* v___x_3798_; 
v___x_3798_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2_spec__3___redArg(v_i_3795_, v_source_3796_, v_target_3797_);
return v___x_3798_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2_spec__3_spec__5(lean_object* v_00_u03b2_3799_, lean_object* v_x_3800_, lean_object* v_x_3801_){
_start:
{
lean_object* v___x_3802_; 
v___x_3802_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2_spec__3_spec__5___redArg(v_x_3800_, v_x_3801_);
return v___x_3802_;
}
}
static lean_object* _init_l_Lean_Meta_Rewrites_findRewrites___closed__0(void){
_start:
{
lean_object* v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; 
v___x_3803_ = lean_box(0);
v___x_3804_ = lean_unsigned_to_nat(16u);
v___x_3805_ = lean_mk_array(v___x_3804_, v___x_3803_);
return v___x_3805_;
}
}
static lean_object* _init_l_Lean_Meta_Rewrites_findRewrites___closed__1(void){
_start:
{
lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; 
v___x_3806_ = lean_obj_once(&l_Lean_Meta_Rewrites_findRewrites___closed__0, &l_Lean_Meta_Rewrites_findRewrites___closed__0_once, _init_l_Lean_Meta_Rewrites_findRewrites___closed__0);
v___x_3807_ = lean_unsigned_to_nat(0u);
v___x_3808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3808_, 0, v___x_3807_);
lean_ctor_set(v___x_3808_, 1, v___x_3806_);
return v___x_3808_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_findRewrites(lean_object* v_hyps_3809_, lean_object* v_moduleRef_3810_, lean_object* v_goal_3811_, lean_object* v_target_3812_, lean_object* v_forbidden_3813_, uint8_t v_side_3814_, uint8_t v_stopAtRfl_3815_, lean_object* v_max_3816_, lean_object* v_leavePercentHeartbeats_3817_, lean_object* v_a_3818_, lean_object* v_a_3819_, lean_object* v_a_3820_, lean_object* v_a_3821_){
_start:
{
lean_object* v___x_3823_; lean_object* v_mctx_3824_; lean_object* v___x_3825_; 
v___x_3823_ = lean_st_ref_get(v_a_3819_);
v_mctx_3824_ = lean_ctor_get(v___x_3823_, 0);
lean_inc_ref(v_mctx_3824_);
lean_dec(v___x_3823_);
lean_inc_ref(v_target_3812_);
v___x_3825_ = l_Lean_Meta_Rewrites_rewriteCandidates(v_hyps_3809_, v_moduleRef_3810_, v_target_3812_, v_forbidden_3813_, v_a_3818_, v_a_3819_, v_a_3820_, v_a_3821_);
if (lean_obj_tag(v___x_3825_) == 0)
{
lean_object* v_a_3826_; lean_object* v_minHeartbeats_3828_; lean_object* v___y_3829_; lean_object* v___y_3830_; lean_object* v___y_3831_; lean_object* v___y_3832_; lean_object* v___x_3855_; 
v_a_3826_ = lean_ctor_get(v___x_3825_, 0);
lean_inc(v_a_3826_);
lean_dec_ref_known(v___x_3825_, 1);
v___x_3855_ = l_Lean_getMaxHeartbeats___redArg(v_a_3820_);
if (lean_obj_tag(v___x_3855_) == 0)
{
lean_object* v_a_3856_; lean_object* v___x_3857_; uint8_t v___x_3858_; 
v_a_3856_ = lean_ctor_get(v___x_3855_, 0);
lean_inc(v_a_3856_);
lean_dec_ref_known(v___x_3855_, 1);
v___x_3857_ = lean_unsigned_to_nat(0u);
v___x_3858_ = lean_nat_dec_eq(v_a_3856_, v___x_3857_);
lean_dec(v_a_3856_);
if (v___x_3858_ == 0)
{
lean_object* v___x_3859_; 
v___x_3859_ = l_Lean_getRemainingHeartbeats___redArg(v_a_3820_);
if (lean_obj_tag(v___x_3859_) == 0)
{
lean_object* v_a_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; lean_object* v___x_3863_; 
v_a_3860_ = lean_ctor_get(v___x_3859_, 0);
lean_inc(v_a_3860_);
lean_dec_ref_known(v___x_3859_, 1);
v___x_3861_ = lean_nat_mul(v_leavePercentHeartbeats_3817_, v_a_3860_);
lean_dec(v_a_3860_);
v___x_3862_ = lean_unsigned_to_nat(100u);
v___x_3863_ = lean_nat_div(v___x_3861_, v___x_3862_);
lean_dec(v___x_3861_);
v_minHeartbeats_3828_ = v___x_3863_;
v___y_3829_ = v_a_3818_;
v___y_3830_ = v_a_3819_;
v___y_3831_ = v_a_3820_;
v___y_3832_ = v_a_3821_;
goto v___jp_3827_;
}
else
{
lean_object* v_a_3864_; lean_object* v___x_3866_; uint8_t v_isShared_3867_; uint8_t v_isSharedCheck_3871_; 
lean_dec(v_a_3826_);
lean_dec_ref(v_mctx_3824_);
lean_dec(v_max_3816_);
lean_dec_ref(v_target_3812_);
lean_dec(v_goal_3811_);
v_a_3864_ = lean_ctor_get(v___x_3859_, 0);
v_isSharedCheck_3871_ = !lean_is_exclusive(v___x_3859_);
if (v_isSharedCheck_3871_ == 0)
{
v___x_3866_ = v___x_3859_;
v_isShared_3867_ = v_isSharedCheck_3871_;
goto v_resetjp_3865_;
}
else
{
lean_inc(v_a_3864_);
lean_dec(v___x_3859_);
v___x_3866_ = lean_box(0);
v_isShared_3867_ = v_isSharedCheck_3871_;
goto v_resetjp_3865_;
}
v_resetjp_3865_:
{
lean_object* v___x_3869_; 
if (v_isShared_3867_ == 0)
{
v___x_3869_ = v___x_3866_;
goto v_reusejp_3868_;
}
else
{
lean_object* v_reuseFailAlloc_3870_; 
v_reuseFailAlloc_3870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3870_, 0, v_a_3864_);
v___x_3869_ = v_reuseFailAlloc_3870_;
goto v_reusejp_3868_;
}
v_reusejp_3868_:
{
return v___x_3869_;
}
}
}
}
else
{
v_minHeartbeats_3828_ = v___x_3857_;
v___y_3829_ = v_a_3818_;
v___y_3830_ = v_a_3819_;
v___y_3831_ = v_a_3820_;
v___y_3832_ = v_a_3821_;
goto v___jp_3827_;
}
}
else
{
lean_object* v_a_3872_; lean_object* v___x_3874_; uint8_t v_isShared_3875_; uint8_t v_isSharedCheck_3879_; 
lean_dec(v_a_3826_);
lean_dec_ref(v_mctx_3824_);
lean_dec(v_max_3816_);
lean_dec_ref(v_target_3812_);
lean_dec(v_goal_3811_);
v_a_3872_ = lean_ctor_get(v___x_3855_, 0);
v_isSharedCheck_3879_ = !lean_is_exclusive(v___x_3855_);
if (v_isSharedCheck_3879_ == 0)
{
v___x_3874_ = v___x_3855_;
v_isShared_3875_ = v_isSharedCheck_3879_;
goto v_resetjp_3873_;
}
else
{
lean_inc(v_a_3872_);
lean_dec(v___x_3855_);
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
v___jp_3827_:
{
lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; 
lean_inc(v_max_3816_);
v___x_3833_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_3833_, 0, v_max_3816_);
lean_ctor_set(v___x_3833_, 1, v_minHeartbeats_3828_);
lean_ctor_set(v___x_3833_, 2, v_goal_3811_);
lean_ctor_set(v___x_3833_, 3, v_target_3812_);
lean_ctor_set(v___x_3833_, 4, v_mctx_3824_);
lean_ctor_set_uint8(v___x_3833_, sizeof(void*)*5, v_stopAtRfl_3815_);
lean_ctor_set_uint8(v___x_3833_, sizeof(void*)*5 + 1, v_side_3814_);
v___x_3834_ = lean_obj_once(&l_Lean_Meta_Rewrites_findRewrites___closed__1, &l_Lean_Meta_Rewrites_findRewrites___closed__1_once, _init_l_Lean_Meta_Rewrites_findRewrites___closed__1);
v___x_3835_ = lean_mk_empty_array_with_capacity(v_max_3816_);
lean_dec(v_max_3816_);
v___x_3836_ = lean_array_to_list(v_a_3826_);
v___x_3837_ = l_Lean_Meta_Rewrites_takeListAux(v___x_3833_, v___x_3834_, v___x_3835_, v___x_3836_, v___y_3829_, v___y_3830_, v___y_3831_, v___y_3832_);
lean_dec(v___x_3836_);
if (lean_obj_tag(v___x_3837_) == 0)
{
lean_object* v_a_3838_; lean_object* v___x_3840_; uint8_t v_isShared_3841_; uint8_t v_isSharedCheck_3846_; 
v_a_3838_ = lean_ctor_get(v___x_3837_, 0);
v_isSharedCheck_3846_ = !lean_is_exclusive(v___x_3837_);
if (v_isSharedCheck_3846_ == 0)
{
v___x_3840_ = v___x_3837_;
v_isShared_3841_ = v_isSharedCheck_3846_;
goto v_resetjp_3839_;
}
else
{
lean_inc(v_a_3838_);
lean_dec(v___x_3837_);
v___x_3840_ = lean_box(0);
v_isShared_3841_ = v_isSharedCheck_3846_;
goto v_resetjp_3839_;
}
v_resetjp_3839_:
{
lean_object* v___x_3842_; lean_object* v___x_3844_; 
v___x_3842_ = lean_array_to_list(v_a_3838_);
if (v_isShared_3841_ == 0)
{
lean_ctor_set(v___x_3840_, 0, v___x_3842_);
v___x_3844_ = v___x_3840_;
goto v_reusejp_3843_;
}
else
{
lean_object* v_reuseFailAlloc_3845_; 
v_reuseFailAlloc_3845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3845_, 0, v___x_3842_);
v___x_3844_ = v_reuseFailAlloc_3845_;
goto v_reusejp_3843_;
}
v_reusejp_3843_:
{
return v___x_3844_;
}
}
}
else
{
lean_object* v_a_3847_; lean_object* v___x_3849_; uint8_t v_isShared_3850_; uint8_t v_isSharedCheck_3854_; 
v_a_3847_ = lean_ctor_get(v___x_3837_, 0);
v_isSharedCheck_3854_ = !lean_is_exclusive(v___x_3837_);
if (v_isSharedCheck_3854_ == 0)
{
v___x_3849_ = v___x_3837_;
v_isShared_3850_ = v_isSharedCheck_3854_;
goto v_resetjp_3848_;
}
else
{
lean_inc(v_a_3847_);
lean_dec(v___x_3837_);
v___x_3849_ = lean_box(0);
v_isShared_3850_ = v_isSharedCheck_3854_;
goto v_resetjp_3848_;
}
v_resetjp_3848_:
{
lean_object* v___x_3852_; 
if (v_isShared_3850_ == 0)
{
v___x_3852_ = v___x_3849_;
goto v_reusejp_3851_;
}
else
{
lean_object* v_reuseFailAlloc_3853_; 
v_reuseFailAlloc_3853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3853_, 0, v_a_3847_);
v___x_3852_ = v_reuseFailAlloc_3853_;
goto v_reusejp_3851_;
}
v_reusejp_3851_:
{
return v___x_3852_;
}
}
}
}
}
else
{
lean_object* v_a_3880_; lean_object* v___x_3882_; uint8_t v_isShared_3883_; uint8_t v_isSharedCheck_3887_; 
lean_dec_ref(v_mctx_3824_);
lean_dec(v_max_3816_);
lean_dec_ref(v_target_3812_);
lean_dec(v_goal_3811_);
v_a_3880_ = lean_ctor_get(v___x_3825_, 0);
v_isSharedCheck_3887_ = !lean_is_exclusive(v___x_3825_);
if (v_isSharedCheck_3887_ == 0)
{
v___x_3882_ = v___x_3825_;
v_isShared_3883_ = v_isSharedCheck_3887_;
goto v_resetjp_3881_;
}
else
{
lean_inc(v_a_3880_);
lean_dec(v___x_3825_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_findRewrites___boxed(lean_object* v_hyps_3888_, lean_object* v_moduleRef_3889_, lean_object* v_goal_3890_, lean_object* v_target_3891_, lean_object* v_forbidden_3892_, lean_object* v_side_3893_, lean_object* v_stopAtRfl_3894_, lean_object* v_max_3895_, lean_object* v_leavePercentHeartbeats_3896_, lean_object* v_a_3897_, lean_object* v_a_3898_, lean_object* v_a_3899_, lean_object* v_a_3900_, lean_object* v_a_3901_){
_start:
{
uint8_t v_side_boxed_3902_; uint8_t v_stopAtRfl_boxed_3903_; lean_object* v_res_3904_; 
v_side_boxed_3902_ = lean_unbox(v_side_3893_);
v_stopAtRfl_boxed_3903_ = lean_unbox(v_stopAtRfl_3894_);
v_res_3904_ = l_Lean_Meta_Rewrites_findRewrites(v_hyps_3888_, v_moduleRef_3889_, v_goal_3890_, v_target_3891_, v_forbidden_3892_, v_side_boxed_3902_, v_stopAtRfl_boxed_3903_, v_max_3895_, v_leavePercentHeartbeats_3896_, v_a_3897_, v_a_3898_, v_a_3899_, v_a_3900_);
lean_dec(v_a_3900_);
lean_dec_ref(v_a_3899_);
lean_dec(v_a_3898_);
lean_dec_ref(v_a_3897_);
lean_dec(v_leavePercentHeartbeats_3896_);
lean_dec(v_forbidden_3892_);
return v_res_3904_;
}
}
lean_object* runtime_initialize_Lean_Meta_LazyDiscrTree(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_SolveByElim(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_TryThis(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_Heartbeats(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Rewrites(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_LazyDiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_SolveByElim(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_TryThis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_Heartbeats(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Rewrites_forwardWeight = _init_l_Lean_Meta_Rewrites_forwardWeight();
lean_mark_persistent(l_Lean_Meta_Rewrites_forwardWeight);
l_Lean_Meta_Rewrites_backwardWeight = _init_l_Lean_Meta_Rewrites_backwardWeight();
lean_mark_persistent(l_Lean_Meta_Rewrites_backwardWeight);
res = l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_1824551397____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_ext = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_ext);
lean_dec_ref(res);
l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_constantsPerImportTask = _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_constantsPerImportTask();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_constantsPerImportTask);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Rewrites(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_LazyDiscrTree(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_SolveByElim(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_TryThis(uint8_t builtin);
lean_object* initialize_Lean_Util_Heartbeats(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Rewrites(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_LazyDiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_SolveByElim(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_TryThis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_Heartbeats(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Rewrites(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Rewrites(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Rewrites(builtin);
}
#ifdef __cplusplus
}
#endif
