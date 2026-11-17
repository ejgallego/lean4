// Lean compiler output
// Module: Lean.Elab.PreDefinition.FixedParams
// Imports: public import Lean.Elab.PreDefinition.Basic import Init.Omega
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
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
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
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Array_range(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Option_instDecidableEq___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedPreDefinition_default;
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Std_Format_indentD(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_init(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_addSelfCalls(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0;
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParams_Info_mayBeFixed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_mayBeFixed___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setVarying(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setVarying___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_getCallerParam_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_getCallerParam_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setCallerParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setCallerParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Elab_FixedParams_Info_format_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1(lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__0_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__0_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__1_value;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__2 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__2_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__2_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__3 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0(lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "❌"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__0_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__0_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__1_value;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3_value;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4_value;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__5 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__5_value;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__8 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__8_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__5_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3(lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "• "};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__0_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__0_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__1_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_format(lean_object*);
static const lean_closure_object l_Lean_Elab_FixedParams_instToFormatInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_FixedParams_Info_format, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_FixedParams_instToFormatInfo___closed__0 = (const lean_object*)&l_Lean_Elab_FixedParams_instToFormatInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_FixedParams_instToFormatInfo = (const lean_object*)&l_Lean_Elab_FixedParams_instToFormatInfo___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__0_value;
static lean_once_cell_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_getParamRevDeps___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_getParamRevDeps___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_getParamRevDeps___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_getParamRevDeps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_getParamRevDeps___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_getParamRevDeps___closed__0 = (const lean_object*)&l_Lean_Elab_getParamRevDeps___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0 = (const lean_object*)&l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transform"};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___closed__0_value;
static const lean_array_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "fixedParams"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__2_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(80, 131, 105, 217, 25, 82, 145, 102)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__4_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__5_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "getFixedParams: notFixed "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__7 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__7_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = ":\nIn "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__10 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__10_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "\ntoo few arguments for "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__12 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__12_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__14 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__14_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " =/= "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__16 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__16_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = " not matched"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__18 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__18_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Elab.PreDefinition.FixedParams"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Elab.getFixedParamsInfo"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 185, .m_capacity = 185, .m_length = 184, .m_data = "assertion violation: params.size = arities[callerIdx]!\n\n      -- TODO: transform is overkill, a simple visit-all-subexpression that takes applications\n      -- as whole suffices\n      "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__2_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_getFixedParamsInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "getFixedParams:"};
static const lean_object* l_Lean_Elab_getFixedParamsInfo___closed__0 = (const lean_object*)&l_Lean_Elab_getFixedParamsInfo___closed__0_value;
static lean_once_cell_t l_Lean_Elab_getFixedParamsInfo___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getFixedParamsInfo___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamsInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamsInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__0 = (const lean_object*)&l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__0_value;
static const lean_ctor_object l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__0_value),((lean_object*)&l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__0_value)}};
static const lean_object* l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__1 = (const lean_object*)&l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instInhabitedFixedParamPerms_default = (const lean_object*)&l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instInhabitedFixedParamPerms = (const lean_object*)&l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__1_value;
static const lean_string_object l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__0_value)}};
static const lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__1_value;
static const lean_string_object l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__2 = (const lean_object*)&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__2_value;
static const lean_ctor_object l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__2_value)}};
static const lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__3 = (const lean_object*)&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__3_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__0 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__1 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__1_value;
static const lean_ctor_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__1_value)}};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__2 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__2_value;
static const lean_ctor_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3_value;
static lean_once_cell_t l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5;
static const lean_ctor_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6_value;
static const lean_string_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__7 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__7_value;
static const lean_ctor_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__7_value)}};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1(lean_object*);
static const lean_string_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "numFixed"};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__3_value),((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7;
static const lean_string_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "perms"};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__9 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__9_value;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10;
static const lean_string_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "revDeps"};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__11 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__11_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__11_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__12 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__12_value;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13;
static const lean_string_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__14 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__14_value;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__17 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__17_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__14_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__18 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__18_value;
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_instReprFixedParamPerms___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_instReprFixedParamPerms_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instReprFixedParamPerms___closed__0 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instReprFixedParamPerms = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Elab.getFixedParamPerms"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "assertion violation: firstPerm[firstParamIdx]!.isSome\n            "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Incomplete paramInfo"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__3_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "assertion violation: paramInfo[0]! = some paramIdx\n        "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_getFixedParamPerms___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "assertion violation: xs.size = paramInfos.size\n\n    "};
static const lean_object* l_Lean_Elab_getFixedParamPerms___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_getFixedParamPerms___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_getFixedParamPerms___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getFixedParamPerms___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_numFixed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_numFixed___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParamPerm_isFixed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_isFixed___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 95, .m_capacity = 95, .m_length = 94, .m_data = "_private.Lean.Elab.PreDefinition.FixedParams.0.Lean.Elab.FixedParamPerm.forallTelescopeImpl.go"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "assertion violation: type.isForall\n      "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "assertion violation: xs'.size = 1\n        "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "assertion violation: fixedParamIdx < xs.size\n        "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 126, .m_capacity = 126, .m_length = 125, .m_data = "assertion violation: !( __do_lift._@.Lean.Elab.PreDefinition.FixedParams.75993854._hygCtx._hyg.101.0 ).hasLooseBVars\n        "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 93, .m_capacity = 93, .m_length = 92, .m_data = "_private.Lean.Elab.PreDefinition.FixedParams.0.Lean.Elab.FixedParamPerm.instantiateForall.go"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "assertion violation: ys.size = 1\n          "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_FixedParamPerm_instantiateForall___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Lean.Elab.FixedParamPerm.instantiateForall"};
static const lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall___closed__0 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_instantiateForall___closed__0_value;
static const lean_string_object l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "assertion violation: xs.size = perm.numFixed\n  "};
static const lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 93, .m_capacity = 93, .m_length = 92, .m_data = "_private.Lean.Elab.PreDefinition.FixedParams.0.Lean.Elab.FixedParamPerm.instantiateLambda.go"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "assertion violation: ys.size = 1\n            "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Lean.Elab.FixedParamPerm.instantiateLambda"};
static const lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__0 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__0_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "_private.Lean.Elab.PreDefinition.FixedParams.0.Lean.Elab.FixedParamPerm.pickFixed.go"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "assertion violation: fixedParamIdx < ys.size\n        "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Elab.FixedParamPerm.pickFixed"};
static const lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "assertion violation: xs.size = perm.size\n  "};
static const lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2;
static const lean_array_object l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "_private.Lean.Elab.PreDefinition.FixedParams.0.Lean.Elab.FixedParamPerm.buildArgs.go"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "FixedParams.buildArgs: too few fixed args"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "FixedParams.buildArgs: too few varying args"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Elab.FixedParamPerm.buildArgs"};
static const lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "assertion violation: fixedArgs.size = perm.numFixed\n  "};
static const lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParamPerms_fixedArePrefix(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerms_fixedArePrefix___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Elab.FixedParamPerms.erase"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "assertion violation: paramIdx < mapping.size\n      "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_FixedParamPerms_erase___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "assertion violation: fixedParamPerms.numFixed  = xs.size\n  "};
static const lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__0 = (const lean_object*)&l_Lean_Elab_FixedParamPerms_erase___closed__0_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerms_erase___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__1;
static const lean_string_object l_Lean_Elab_FixedParamPerms_erase___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 134, .m_capacity = 134, .m_length = 133, .m_data = "assertion violation: toErase.size = fixedParamPerms.perms.size\n  -- Calculate a mask on the fixed parameters of variables to erase\n  "};
static const lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__2 = (const lean_object*)&l_Lean_Elab_FixedParamPerms_erase___closed__2_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerms_erase___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__3;
static const lean_string_object l_Lean_Elab_FixedParamPerms_erase___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 41, .m_data = "assertion violation: xs.all (·.isFVar)\n  "};
static const lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__4 = (const lean_object*)&l_Lean_Elab_FixedParamPerms_erase___closed__4_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerms_erase___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerms_erase(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PreDefinition"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 172, 242, 185, 134, 214, 81, 182)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "FixedParams"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(201, 87, 32, 251, 113, 133, 158, 252)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(140, 135, 17, 208, 62, 57, 192, 16)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(249, 225, 135, 56, 213, 49, 154, 134)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(180, 208, 124, 62, 167, 39, 159, 30)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(181, 118, 73, 0, 78, 121, 48, 169)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 144, 90, 0, 164, 70, 155, 205)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(80, 80, 200, 145, 119, 202, 92, 1)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(26, 27, 9, 206, 200, 16, 168, 251)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)(((size_t)(791000795) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(47, 149, 235, 94, 82, 130, 210, 117)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(36, 33, 115, 184, 239, 184, 190, 148)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(48, 81, 13, 137, 134, 8, 99, 98)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(225, 58, 56, 207, 96, 242, 57, 49)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0(lean_object* v_revDeps_1_, size_t v_sz_2_, size_t v_i_3_, lean_object* v_bs_4_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = lean_usize_dec_lt(v_i_3_, v_sz_2_);
if (v___x_5_ == 0)
{
return v_bs_4_;
}
else
{
lean_object* v_v_6_; lean_object* v___x_7_; lean_object* v_bs_x27_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; size_t v___x_15_; size_t v___x_16_; lean_object* v___x_17_; 
v_v_6_ = lean_array_uget(v_bs_4_, v_i_3_);
v___x_7_ = lean_unsigned_to_nat(0u);
v_bs_x27_8_ = lean_array_uset(v_bs_4_, v_i_3_, v___x_7_);
v___x_9_ = lean_array_get_size(v_v_6_);
lean_dec(v_v_6_);
v___x_10_ = lean_array_get_size(v_revDeps_1_);
v___x_11_ = lean_box(0);
v___x_12_ = lean_mk_array(v___x_10_, v___x_11_);
v___x_13_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_13_, 0, v___x_12_);
v___x_14_ = lean_mk_array(v___x_9_, v___x_13_);
v___x_15_ = ((size_t)1ULL);
v___x_16_ = lean_usize_add(v_i_3_, v___x_15_);
v___x_17_ = lean_array_uset(v_bs_x27_8_, v_i_3_, v___x_14_);
v_i_3_ = v___x_16_;
v_bs_4_ = v___x_17_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0___boxed(lean_object* v_revDeps_19_, lean_object* v_sz_20_, lean_object* v_i_21_, lean_object* v_bs_22_){
_start:
{
size_t v_sz_boxed_23_; size_t v_i_boxed_24_; lean_object* v_res_25_; 
v_sz_boxed_23_ = lean_unbox_usize(v_sz_20_);
lean_dec(v_sz_20_);
v_i_boxed_24_ = lean_unbox_usize(v_i_21_);
lean_dec(v_i_21_);
v_res_25_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0(v_revDeps_19_, v_sz_boxed_23_, v_i_boxed_24_, v_bs_22_);
lean_dec_ref(v_revDeps_19_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_init(lean_object* v_revDeps_26_){
_start:
{
size_t v_sz_27_; size_t v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v_sz_27_ = lean_array_size(v_revDeps_26_);
v___x_28_ = ((size_t)0ULL);
lean_inc_ref(v_revDeps_26_);
v___x_29_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0(v_revDeps_26_, v_sz_27_, v___x_28_, v_revDeps_26_);
v___x_30_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
lean_ctor_set(v___x_30_, 1, v_revDeps_26_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg(lean_object* v_i_31_, size_t v_sz_32_, size_t v_i_33_, lean_object* v_bs_34_){
_start:
{
uint8_t v___x_35_; 
v___x_35_ = lean_usize_dec_lt(v_i_33_, v_sz_32_);
if (v___x_35_ == 0)
{
return v_bs_34_;
}
else
{
lean_object* v_v_36_; lean_object* v___x_37_; lean_object* v_bs_x27_38_; lean_object* v___y_40_; 
v_v_36_ = lean_array_uget(v_bs_34_, v_i_33_);
v___x_37_ = lean_unsigned_to_nat(0u);
v_bs_x27_38_ = lean_array_uset(v_bs_34_, v_i_33_, v___x_37_);
if (lean_obj_tag(v_v_36_) == 0)
{
v___y_40_ = v_v_36_;
goto v___jp_39_;
}
else
{
lean_object* v_val_45_; lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_55_; 
v_val_45_ = lean_ctor_get(v_v_36_, 0);
v_isSharedCheck_55_ = !lean_is_exclusive(v_v_36_);
if (v_isSharedCheck_55_ == 0)
{
v___x_47_ = v_v_36_;
v_isShared_48_ = v_isSharedCheck_55_;
goto v_resetjp_46_;
}
else
{
lean_inc(v_val_45_);
lean_dec(v_v_36_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_55_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
lean_object* v___x_49_; lean_object* v___x_51_; 
v___x_49_ = lean_usize_to_nat(v_i_33_);
if (v_isShared_48_ == 0)
{
lean_ctor_set(v___x_47_, 0, v___x_49_);
v___x_51_ = v___x_47_;
goto v_reusejp_50_;
}
else
{
lean_object* v_reuseFailAlloc_54_; 
v_reuseFailAlloc_54_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_54_, 0, v___x_49_);
v___x_51_ = v_reuseFailAlloc_54_;
goto v_reusejp_50_;
}
v_reusejp_50_:
{
lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_52_ = lean_array_set(v_val_45_, v_i_31_, v___x_51_);
v___x_53_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
v___y_40_ = v___x_53_;
goto v___jp_39_;
}
}
}
v___jp_39_:
{
size_t v___x_41_; size_t v___x_42_; lean_object* v___x_43_; 
v___x_41_ = ((size_t)1ULL);
v___x_42_ = lean_usize_add(v_i_33_, v___x_41_);
v___x_43_ = lean_array_uset(v_bs_x27_38_, v_i_33_, v___y_40_);
v_i_33_ = v___x_42_;
v_bs_34_ = v___x_43_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg___boxed(lean_object* v_i_56_, lean_object* v_sz_57_, lean_object* v_i_58_, lean_object* v_bs_59_){
_start:
{
size_t v_sz_boxed_60_; size_t v_i_boxed_61_; lean_object* v_res_62_; 
v_sz_boxed_60_ = lean_unbox_usize(v_sz_57_);
lean_dec(v_sz_57_);
v_i_boxed_61_ = lean_unbox_usize(v_i_58_);
lean_dec(v_i_58_);
v_res_62_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg(v_i_56_, v_sz_boxed_60_, v_i_boxed_61_, v_bs_59_);
lean_dec(v_i_56_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg(size_t v_sz_63_, size_t v_i_64_, lean_object* v_bs_65_){
_start:
{
uint8_t v___x_66_; 
v___x_66_ = lean_usize_dec_lt(v_i_64_, v_sz_63_);
if (v___x_66_ == 0)
{
return v_bs_65_;
}
else
{
lean_object* v_v_67_; lean_object* v___x_68_; lean_object* v_bs_x27_69_; lean_object* v___x_70_; size_t v_sz_71_; size_t v___x_72_; lean_object* v___x_73_; size_t v___x_74_; size_t v___x_75_; lean_object* v___x_76_; 
v_v_67_ = lean_array_uget(v_bs_65_, v_i_64_);
v___x_68_ = lean_unsigned_to_nat(0u);
v_bs_x27_69_ = lean_array_uset(v_bs_65_, v_i_64_, v___x_68_);
v___x_70_ = lean_usize_to_nat(v_i_64_);
v_sz_71_ = lean_array_size(v_v_67_);
v___x_72_ = ((size_t)0ULL);
v___x_73_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg(v___x_70_, v_sz_71_, v___x_72_, v_v_67_);
lean_dec(v___x_70_);
v___x_74_ = ((size_t)1ULL);
v___x_75_ = lean_usize_add(v_i_64_, v___x_74_);
v___x_76_ = lean_array_uset(v_bs_x27_69_, v_i_64_, v___x_73_);
v_i_64_ = v___x_75_;
v_bs_65_ = v___x_76_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg___boxed(lean_object* v_sz_78_, lean_object* v_i_79_, lean_object* v_bs_80_){
_start:
{
size_t v_sz_boxed_81_; size_t v_i_boxed_82_; lean_object* v_res_83_; 
v_sz_boxed_81_ = lean_unbox_usize(v_sz_78_);
lean_dec(v_sz_78_);
v_i_boxed_82_ = lean_unbox_usize(v_i_79_);
lean_dec(v_i_79_);
v_res_83_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg(v_sz_boxed_81_, v_i_boxed_82_, v_bs_80_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_addSelfCalls(lean_object* v_info_84_){
_start:
{
lean_object* v_graph_85_; lean_object* v_revDeps_86_; lean_object* v___x_88_; uint8_t v_isShared_89_; uint8_t v_isSharedCheck_96_; 
v_graph_85_ = lean_ctor_get(v_info_84_, 0);
v_revDeps_86_ = lean_ctor_get(v_info_84_, 1);
v_isSharedCheck_96_ = !lean_is_exclusive(v_info_84_);
if (v_isSharedCheck_96_ == 0)
{
v___x_88_ = v_info_84_;
v_isShared_89_ = v_isSharedCheck_96_;
goto v_resetjp_87_;
}
else
{
lean_inc(v_revDeps_86_);
lean_inc(v_graph_85_);
lean_dec(v_info_84_);
v___x_88_ = lean_box(0);
v_isShared_89_ = v_isSharedCheck_96_;
goto v_resetjp_87_;
}
v_resetjp_87_:
{
size_t v_sz_90_; size_t v___x_91_; lean_object* v___x_92_; lean_object* v___x_94_; 
v_sz_90_ = lean_array_size(v_graph_85_);
v___x_91_ = ((size_t)0ULL);
v___x_92_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg(v_sz_90_, v___x_91_, v_graph_85_);
if (v_isShared_89_ == 0)
{
lean_ctor_set(v___x_88_, 0, v___x_92_);
v___x_94_ = v___x_88_;
goto v_reusejp_93_;
}
else
{
lean_object* v_reuseFailAlloc_95_; 
v_reuseFailAlloc_95_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_95_, 0, v___x_92_);
lean_ctor_set(v_reuseFailAlloc_95_, 1, v_revDeps_86_);
v___x_94_ = v_reuseFailAlloc_95_;
goto v_reusejp_93_;
}
v_reusejp_93_:
{
return v___x_94_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0(lean_object* v_i_97_, lean_object* v_as_98_, size_t v_sz_99_, size_t v_i_100_, lean_object* v_bs_101_){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg(v_i_97_, v_sz_99_, v_i_100_, v_bs_101_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___boxed(lean_object* v_i_103_, lean_object* v_as_104_, lean_object* v_sz_105_, lean_object* v_i_106_, lean_object* v_bs_107_){
_start:
{
size_t v_sz_boxed_108_; size_t v_i_boxed_109_; lean_object* v_res_110_; 
v_sz_boxed_108_ = lean_unbox_usize(v_sz_105_);
lean_dec(v_sz_105_);
v_i_boxed_109_ = lean_unbox_usize(v_i_106_);
lean_dec(v_i_106_);
v_res_110_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0(v_i_103_, v_as_104_, v_sz_boxed_108_, v_i_boxed_109_, v_bs_107_);
lean_dec_ref(v_as_104_);
lean_dec(v_i_103_);
return v_res_110_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1(lean_object* v_as_111_, size_t v_sz_112_, size_t v_i_113_, lean_object* v_bs_114_){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg(v_sz_112_, v_i_113_, v_bs_114_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___boxed(lean_object* v_as_116_, lean_object* v_sz_117_, lean_object* v_i_118_, lean_object* v_bs_119_){
_start:
{
size_t v_sz_boxed_120_; size_t v_i_boxed_121_; lean_object* v_res_122_; 
v_sz_boxed_120_ = lean_unbox_usize(v_sz_117_);
lean_dec(v_sz_117_);
v_i_boxed_121_ = lean_unbox_usize(v_i_118_);
lean_dec(v_i_118_);
v_res_122_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1(v_as_116_, v_sz_boxed_120_, v_i_boxed_121_, v_bs_119_);
lean_dec_ref(v_as_116_);
return v_res_122_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0(void){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = l_Array_instInhabited___redArg();
return v___x_123_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParams_Info_mayBeFixed(lean_object* v_callerIdx_124_, lean_object* v_paramIdx_125_, lean_object* v_info_126_){
_start:
{
lean_object* v_graph_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v_graph_127_ = lean_ctor_get(v_info_126_, 0);
v___x_128_ = lean_box(0);
v___x_129_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_130_ = lean_array_get_borrowed(v___x_129_, v_graph_127_, v_callerIdx_124_);
v___x_131_ = lean_array_get_borrowed(v___x_128_, v___x_130_, v_paramIdx_125_);
if (lean_obj_tag(v___x_131_) == 0)
{
uint8_t v___x_132_; 
v___x_132_ = 0;
return v___x_132_;
}
else
{
uint8_t v___x_133_; 
v___x_133_ = 1;
return v___x_133_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_mayBeFixed___boxed(lean_object* v_callerIdx_134_, lean_object* v_paramIdx_135_, lean_object* v_info_136_){
_start:
{
uint8_t v_res_137_; lean_object* v_r_138_; 
v_res_137_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_callerIdx_134_, v_paramIdx_135_, v_info_136_);
lean_dec_ref(v_info_136_);
lean_dec(v_paramIdx_135_);
lean_dec(v_callerIdx_134_);
v_r_138_ = lean_box(v_res_137_);
return v_r_138_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg(lean_object* v_upperBound_139_, lean_object* v_next_140_, lean_object* v_funIdx_141_, lean_object* v_paramIdx_142_, lean_object* v_a_143_, lean_object* v_b_144_){
_start:
{
lean_object* v_a_146_; uint8_t v___x_150_; 
v___x_150_ = lean_nat_dec_lt(v_a_143_, v_upperBound_139_);
if (v___x_150_ == 0)
{
lean_dec(v_a_143_);
lean_dec(v_paramIdx_142_);
return v_b_144_;
}
else
{
lean_object* v_graph_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
v_graph_151_ = lean_ctor_get(v_b_144_, 0);
v___x_152_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_153_ = lean_box(0);
v___x_154_ = lean_array_get_borrowed(v___x_152_, v_graph_151_, v_next_140_);
v___x_155_ = lean_array_get(v___x_153_, v___x_154_, v_a_143_);
if (lean_obj_tag(v___x_155_) == 1)
{
lean_object* v_val_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_167_; 
v_val_156_ = lean_ctor_get(v___x_155_, 0);
v_isSharedCheck_167_ = !lean_is_exclusive(v___x_155_);
if (v_isSharedCheck_167_ == 0)
{
v___x_158_ = v___x_155_;
v_isShared_159_ = v_isSharedCheck_167_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_val_156_);
lean_dec(v___x_155_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_167_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_163_; 
v___x_160_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___x_161_ = lean_array_get(v___x_153_, v_val_156_, v_funIdx_141_);
lean_dec(v_val_156_);
lean_inc(v_paramIdx_142_);
if (v_isShared_159_ == 0)
{
lean_ctor_set(v___x_158_, 0, v_paramIdx_142_);
v___x_163_ = v___x_158_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_paramIdx_142_);
v___x_163_ = v_reuseFailAlloc_166_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
uint8_t v___x_164_; 
v___x_164_ = l_Option_instDecidableEq___redArg(v___x_160_, v___x_161_, v___x_163_);
if (v___x_164_ == 0)
{
v_a_146_ = v_b_144_;
goto v___jp_145_;
}
else
{
lean_object* v___x_165_; 
lean_inc(v_a_143_);
v___x_165_ = l_Lean_Elab_FixedParams_Info_setVarying(v_next_140_, v_a_143_, v_b_144_);
v_a_146_ = v___x_165_;
goto v___jp_145_;
}
}
}
}
else
{
lean_dec(v___x_155_);
v_a_146_ = v_b_144_;
goto v___jp_145_;
}
}
v___jp_145_:
{
lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_147_ = lean_unsigned_to_nat(1u);
v___x_148_ = lean_nat_add(v_a_143_, v___x_147_);
lean_dec(v_a_143_);
v_a_143_ = v___x_148_;
v_b_144_ = v_a_146_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg(lean_object* v_upperBound_168_, lean_object* v_funIdx_169_, lean_object* v_paramIdx_170_, lean_object* v_a_171_, lean_object* v_b_172_){
_start:
{
uint8_t v___x_173_; 
v___x_173_ = lean_nat_dec_lt(v_a_171_, v_upperBound_168_);
if (v___x_173_ == 0)
{
lean_dec(v_a_171_);
lean_dec(v_paramIdx_170_);
return v_b_172_;
}
else
{
lean_object* v_graph_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v_graph_174_ = lean_ctor_get(v_b_172_, 0);
v___x_175_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_176_ = lean_array_get_borrowed(v___x_175_, v_graph_174_, v_a_171_);
v___x_177_ = lean_array_get_size(v___x_176_);
v___x_178_ = lean_unsigned_to_nat(0u);
lean_inc(v_paramIdx_170_);
v___x_179_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg(v___x_177_, v_a_171_, v_funIdx_169_, v_paramIdx_170_, v___x_178_, v_b_172_);
v___x_180_ = lean_unsigned_to_nat(1u);
v___x_181_ = lean_nat_add(v_a_171_, v___x_180_);
lean_dec(v_a_171_);
v_a_171_ = v___x_181_;
v_b_172_ = v___x_179_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setVarying(lean_object* v_funIdx_183_, lean_object* v_paramIdx_184_, lean_object* v_info_185_){
_start:
{
uint8_t v___x_186_; 
v___x_186_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_funIdx_183_, v_paramIdx_184_, v_info_185_);
if (v___x_186_ == 0)
{
lean_dec(v_paramIdx_184_);
return v_info_185_;
}
else
{
lean_object* v_graph_187_; lean_object* v_revDeps_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_215_; 
v_graph_187_ = lean_ctor_get(v_info_185_, 0);
v_revDeps_188_ = lean_ctor_get(v_info_185_, 1);
v_isSharedCheck_215_ = !lean_is_exclusive(v_info_185_);
if (v_isSharedCheck_215_ == 0)
{
v___x_190_ = v_info_185_;
v_isShared_191_ = v_isSharedCheck_215_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_revDeps_188_);
lean_inc(v_graph_187_);
lean_dec(v_info_185_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_215_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v___x_192_; lean_object* v___y_194_; lean_object* v___x_207_; uint8_t v___x_208_; 
v___x_192_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_207_ = lean_array_get_size(v_graph_187_);
v___x_208_ = lean_nat_dec_lt(v_funIdx_183_, v___x_207_);
if (v___x_208_ == 0)
{
v___y_194_ = v_graph_187_;
goto v___jp_193_;
}
else
{
lean_object* v_v_209_; lean_object* v___x_210_; lean_object* v_xs_x27_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v_v_209_ = lean_array_fget(v_graph_187_, v_funIdx_183_);
v___x_210_ = lean_box(0);
v_xs_x27_211_ = lean_array_fset(v_graph_187_, v_funIdx_183_, v___x_210_);
v___x_212_ = lean_box(0);
v___x_213_ = lean_array_set(v_v_209_, v_paramIdx_184_, v___x_212_);
v___x_214_ = lean_array_fset(v_xs_x27_211_, v_funIdx_183_, v___x_213_);
v___y_194_ = v___x_214_;
goto v___jp_193_;
}
v___jp_193_:
{
lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v_info_198_; 
v___x_195_ = lean_array_get_size(v___y_194_);
v___x_196_ = lean_unsigned_to_nat(0u);
if (v_isShared_191_ == 0)
{
lean_ctor_set(v___x_190_, 0, v___y_194_);
v_info_198_ = v___x_190_;
goto v_reusejp_197_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v___y_194_);
lean_ctor_set(v_reuseFailAlloc_206_, 1, v_revDeps_188_);
v_info_198_ = v_reuseFailAlloc_206_;
goto v_reusejp_197_;
}
v_reusejp_197_:
{
lean_object* v___x_199_; lean_object* v_revDeps_200_; lean_object* v___x_201_; lean_object* v___x_202_; size_t v_sz_203_; size_t v___x_204_; lean_object* v___x_205_; 
lean_inc(v_paramIdx_184_);
v___x_199_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg(v___x_195_, v_funIdx_183_, v_paramIdx_184_, v___x_196_, v_info_198_);
v_revDeps_200_ = lean_ctor_get(v___x_199_, 1);
v___x_201_ = lean_array_get_borrowed(v___x_192_, v_revDeps_200_, v_funIdx_183_);
v___x_202_ = lean_array_get(v___x_192_, v___x_201_, v_paramIdx_184_);
lean_dec(v_paramIdx_184_);
v_sz_203_ = lean_array_size(v___x_202_);
v___x_204_ = ((size_t)0ULL);
v___x_205_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0(v_funIdx_183_, v___x_202_, v_sz_203_, v___x_204_, v___x_199_);
lean_dec(v___x_202_);
return v___x_205_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0(lean_object* v_funIdx_216_, lean_object* v_as_217_, size_t v_sz_218_, size_t v_i_219_, lean_object* v_b_220_){
_start:
{
uint8_t v___x_221_; 
v___x_221_ = lean_usize_dec_lt(v_i_219_, v_sz_218_);
if (v___x_221_ == 0)
{
return v_b_220_;
}
else
{
lean_object* v_a_222_; lean_object* v___x_223_; size_t v___x_224_; size_t v___x_225_; 
v_a_222_ = lean_array_uget_borrowed(v_as_217_, v_i_219_);
lean_inc(v_a_222_);
v___x_223_ = l_Lean_Elab_FixedParams_Info_setVarying(v_funIdx_216_, v_a_222_, v_b_220_);
v___x_224_ = ((size_t)1ULL);
v___x_225_ = lean_usize_add(v_i_219_, v___x_224_);
v_i_219_ = v___x_225_;
v_b_220_ = v___x_223_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0___boxed(lean_object* v_funIdx_227_, lean_object* v_as_228_, lean_object* v_sz_229_, lean_object* v_i_230_, lean_object* v_b_231_){
_start:
{
size_t v_sz_boxed_232_; size_t v_i_boxed_233_; lean_object* v_res_234_; 
v_sz_boxed_232_ = lean_unbox_usize(v_sz_229_);
lean_dec(v_sz_229_);
v_i_boxed_233_ = lean_unbox_usize(v_i_230_);
lean_dec(v_i_230_);
v_res_234_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0(v_funIdx_227_, v_as_228_, v_sz_boxed_232_, v_i_boxed_233_, v_b_231_);
lean_dec_ref(v_as_228_);
lean_dec(v_funIdx_227_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg___boxed(lean_object* v_upperBound_235_, lean_object* v_funIdx_236_, lean_object* v_paramIdx_237_, lean_object* v_a_238_, lean_object* v_b_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg(v_upperBound_235_, v_funIdx_236_, v_paramIdx_237_, v_a_238_, v_b_239_);
lean_dec(v_funIdx_236_);
lean_dec(v_upperBound_235_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg___boxed(lean_object* v_upperBound_241_, lean_object* v_next_242_, lean_object* v_funIdx_243_, lean_object* v_paramIdx_244_, lean_object* v_a_245_, lean_object* v_b_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg(v_upperBound_241_, v_next_242_, v_funIdx_243_, v_paramIdx_244_, v_a_245_, v_b_246_);
lean_dec(v_funIdx_243_);
lean_dec(v_next_242_);
lean_dec(v_upperBound_241_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setVarying___boxed(lean_object* v_funIdx_248_, lean_object* v_paramIdx_249_, lean_object* v_info_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l_Lean_Elab_FixedParams_Info_setVarying(v_funIdx_248_, v_paramIdx_249_, v_info_250_);
lean_dec(v_funIdx_248_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1(lean_object* v_upperBound_252_, lean_object* v_next_253_, lean_object* v_funIdx_254_, lean_object* v_paramIdx_255_, lean_object* v_inst_256_, lean_object* v_R_257_, lean_object* v_a_258_, lean_object* v_b_259_, lean_object* v_c_260_){
_start:
{
lean_object* v___x_261_; 
v___x_261_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg(v_upperBound_252_, v_next_253_, v_funIdx_254_, v_paramIdx_255_, v_a_258_, v_b_259_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___boxed(lean_object* v_upperBound_262_, lean_object* v_next_263_, lean_object* v_funIdx_264_, lean_object* v_paramIdx_265_, lean_object* v_inst_266_, lean_object* v_R_267_, lean_object* v_a_268_, lean_object* v_b_269_, lean_object* v_c_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1(v_upperBound_262_, v_next_263_, v_funIdx_264_, v_paramIdx_265_, v_inst_266_, v_R_267_, v_a_268_, v_b_269_, v_c_270_);
lean_dec(v_funIdx_264_);
lean_dec(v_next_263_);
lean_dec(v_upperBound_262_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2(lean_object* v_upperBound_272_, lean_object* v_funIdx_273_, lean_object* v_paramIdx_274_, lean_object* v_inst_275_, lean_object* v_R_276_, lean_object* v_a_277_, lean_object* v_b_278_, lean_object* v_c_279_){
_start:
{
lean_object* v___x_280_; 
v___x_280_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg(v_upperBound_272_, v_funIdx_273_, v_paramIdx_274_, v_a_277_, v_b_278_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___boxed(lean_object* v_upperBound_281_, lean_object* v_funIdx_282_, lean_object* v_paramIdx_283_, lean_object* v_inst_284_, lean_object* v_R_285_, lean_object* v_a_286_, lean_object* v_b_287_, lean_object* v_c_288_){
_start:
{
lean_object* v_res_289_; 
v_res_289_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2(v_upperBound_281_, v_funIdx_282_, v_paramIdx_283_, v_inst_284_, v_R_285_, v_a_286_, v_b_287_, v_c_288_);
lean_dec(v_funIdx_282_);
lean_dec(v_upperBound_281_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_getCallerParam_x3f(lean_object* v_calleeIdx_290_, lean_object* v_argIdx_291_, lean_object* v_callerIdx_292_, lean_object* v_info_293_){
_start:
{
lean_object* v_graph_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v_graph_294_ = lean_ctor_get(v_info_293_, 0);
v___x_295_ = lean_box(0);
v___x_296_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_297_ = lean_array_get_borrowed(v___x_296_, v_graph_294_, v_calleeIdx_290_);
v___x_298_ = lean_array_get_borrowed(v___x_295_, v___x_297_, v_argIdx_291_);
if (lean_obj_tag(v___x_298_) == 0)
{
return v___x_295_;
}
else
{
lean_object* v_val_299_; lean_object* v___x_300_; 
v_val_299_ = lean_ctor_get(v___x_298_, 0);
v___x_300_ = lean_array_get_borrowed(v___x_295_, v_val_299_, v_callerIdx_292_);
lean_inc(v___x_300_);
return v___x_300_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_getCallerParam_x3f___boxed(lean_object* v_calleeIdx_301_, lean_object* v_argIdx_302_, lean_object* v_callerIdx_303_, lean_object* v_info_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l_Lean_Elab_FixedParams_Info_getCallerParam_x3f(v_calleeIdx_301_, v_argIdx_302_, v_callerIdx_303_, v_info_304_);
lean_dec_ref(v_info_304_);
lean_dec(v_callerIdx_303_);
lean_dec(v_argIdx_302_);
lean_dec(v_calleeIdx_301_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg(lean_object* v_upperBound_306_, lean_object* v_val_307_, lean_object* v_calleeIdx_308_, lean_object* v_argIdx_309_, lean_object* v_a_310_, lean_object* v_b_311_){
_start:
{
lean_object* v_a_313_; uint8_t v___x_317_; 
v___x_317_ = lean_nat_dec_lt(v_a_310_, v_upperBound_306_);
if (v___x_317_ == 0)
{
lean_dec(v_a_310_);
lean_dec(v_argIdx_309_);
return v_b_311_;
}
else
{
lean_object* v___x_318_; 
v___x_318_ = lean_array_fget_borrowed(v_val_307_, v_a_310_);
if (lean_obj_tag(v___x_318_) == 1)
{
lean_object* v_val_319_; lean_object* v___x_320_; 
v_val_319_ = lean_ctor_get(v___x_318_, 0);
lean_inc(v_val_319_);
lean_inc(v_argIdx_309_);
v___x_320_ = l_Lean_Elab_FixedParams_Info_setCallerParam(v_calleeIdx_308_, v_argIdx_309_, v_a_310_, v_val_319_, v_b_311_);
v_a_313_ = v___x_320_;
goto v___jp_312_;
}
else
{
v_a_313_ = v_b_311_;
goto v___jp_312_;
}
}
v___jp_312_:
{
lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_314_ = lean_unsigned_to_nat(1u);
v___x_315_ = lean_nat_add(v_a_310_, v___x_314_);
lean_dec(v_a_310_);
v_a_310_ = v___x_315_;
v_b_311_ = v_a_313_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setCallerParam(lean_object* v_calleeIdx_321_, lean_object* v_argIdx_322_, lean_object* v_callerIdx_323_, lean_object* v_paramIdx_324_, lean_object* v_info_325_){
_start:
{
lean_object* v_info_327_; lean_object* v_graph_328_; uint8_t v___x_332_; 
v___x_332_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_calleeIdx_321_, v_argIdx_322_, v_info_325_);
if (v___x_332_ == 0)
{
lean_dec(v_paramIdx_324_);
lean_dec(v_argIdx_322_);
return v_info_325_;
}
else
{
uint8_t v___x_333_; 
v___x_333_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_callerIdx_323_, v_paramIdx_324_, v_info_325_);
if (v___x_333_ == 0)
{
lean_object* v___x_334_; 
lean_dec(v_paramIdx_324_);
v___x_334_ = l_Lean_Elab_FixedParams_Info_setVarying(v_calleeIdx_321_, v_argIdx_322_, v_info_325_);
return v___x_334_;
}
else
{
lean_object* v___x_335_; 
v___x_335_ = l_Lean_Elab_FixedParams_Info_getCallerParam_x3f(v_calleeIdx_321_, v_argIdx_322_, v_callerIdx_323_, v_info_325_);
if (lean_obj_tag(v___x_335_) == 1)
{
lean_object* v_val_336_; uint8_t v___x_337_; 
v_val_336_ = lean_ctor_get(v___x_335_, 0);
lean_inc(v_val_336_);
lean_dec_ref_known(v___x_335_, 1);
v___x_337_ = lean_nat_dec_eq(v_paramIdx_324_, v_val_336_);
lean_dec(v_val_336_);
lean_dec(v_paramIdx_324_);
if (v___x_337_ == 0)
{
lean_object* v___x_338_; 
v___x_338_ = l_Lean_Elab_FixedParams_Info_setVarying(v_calleeIdx_321_, v_argIdx_322_, v_info_325_);
return v___x_338_;
}
else
{
lean_dec(v_argIdx_322_);
return v_info_325_;
}
}
else
{
lean_object* v_graph_339_; lean_object* v_revDeps_340_; lean_object* v___x_342_; uint8_t v_isShared_343_; uint8_t v_isSharedCheck_383_; 
lean_dec(v___x_335_);
v_graph_339_ = lean_ctor_get(v_info_325_, 0);
v_revDeps_340_ = lean_ctor_get(v_info_325_, 1);
v_isSharedCheck_383_ = !lean_is_exclusive(v_info_325_);
if (v_isSharedCheck_383_ == 0)
{
v___x_342_ = v_info_325_;
v_isShared_343_ = v_isSharedCheck_383_;
goto v_resetjp_341_;
}
else
{
lean_inc(v_revDeps_340_);
lean_inc(v_graph_339_);
lean_dec(v_info_325_);
v___x_342_ = lean_box(0);
v_isShared_343_ = v_isSharedCheck_383_;
goto v_resetjp_341_;
}
v_resetjp_341_:
{
lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___y_347_; lean_object* v___x_358_; uint8_t v___x_359_; 
v___x_344_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_345_ = lean_box(0);
v___x_358_ = lean_array_get_size(v_graph_339_);
v___x_359_ = lean_nat_dec_lt(v_calleeIdx_321_, v___x_358_);
if (v___x_359_ == 0)
{
v___y_347_ = v_graph_339_;
goto v___jp_346_;
}
else
{
lean_object* v_v_360_; lean_object* v___x_361_; lean_object* v_xs_x27_362_; lean_object* v___y_364_; lean_object* v___x_366_; uint8_t v___x_367_; 
v_v_360_ = lean_array_fget(v_graph_339_, v_calleeIdx_321_);
v___x_361_ = lean_box(0);
v_xs_x27_362_ = lean_array_fset(v_graph_339_, v_calleeIdx_321_, v___x_361_);
v___x_366_ = lean_array_get_size(v_v_360_);
v___x_367_ = lean_nat_dec_lt(v_argIdx_322_, v___x_366_);
if (v___x_367_ == 0)
{
v___y_364_ = v_v_360_;
goto v___jp_363_;
}
else
{
lean_object* v_v_368_; lean_object* v_xs_x27_369_; lean_object* v___y_371_; 
v_v_368_ = lean_array_fget(v_v_360_, v_argIdx_322_);
v_xs_x27_369_ = lean_array_fset(v_v_360_, v_argIdx_322_, v___x_361_);
if (lean_obj_tag(v_v_368_) == 0)
{
v___y_371_ = v_v_368_;
goto v___jp_370_;
}
else
{
lean_object* v_val_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_382_; 
v_val_373_ = lean_ctor_get(v_v_368_, 0);
v_isSharedCheck_382_ = !lean_is_exclusive(v_v_368_);
if (v_isSharedCheck_382_ == 0)
{
v___x_375_ = v_v_368_;
v_isShared_376_ = v_isSharedCheck_382_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_val_373_);
lean_dec(v_v_368_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_382_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v___x_378_; 
lean_inc(v_paramIdx_324_);
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 0, v_paramIdx_324_);
v___x_378_ = v___x_375_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v_paramIdx_324_);
v___x_378_ = v_reuseFailAlloc_381_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_379_ = lean_array_set(v_val_373_, v_callerIdx_323_, v___x_378_);
v___x_380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
v___y_371_ = v___x_380_;
goto v___jp_370_;
}
}
}
v___jp_370_:
{
lean_object* v___x_372_; 
v___x_372_ = lean_array_fset(v_xs_x27_369_, v_argIdx_322_, v___y_371_);
v___y_364_ = v___x_372_;
goto v___jp_363_;
}
}
v___jp_363_:
{
lean_object* v___x_365_; 
v___x_365_ = lean_array_fset(v_xs_x27_362_, v_calleeIdx_321_, v___y_364_);
v___y_347_ = v___x_365_;
goto v___jp_346_;
}
}
v___jp_346_:
{
lean_object* v_info_349_; 
lean_inc_ref(v___y_347_);
if (v_isShared_343_ == 0)
{
lean_ctor_set(v___x_342_, 0, v___y_347_);
v_info_349_ = v___x_342_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v___y_347_);
lean_ctor_set(v_reuseFailAlloc_357_, 1, v_revDeps_340_);
v_info_349_ = v_reuseFailAlloc_357_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = lean_array_get_borrowed(v___x_344_, v___y_347_, v_callerIdx_323_);
v___x_351_ = lean_array_get_borrowed(v___x_345_, v___x_350_, v_paramIdx_324_);
if (lean_obj_tag(v___x_351_) == 1)
{
lean_object* v_val_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v_graph_356_; 
lean_inc_ref(v___x_351_);
lean_dec_ref(v___y_347_);
v_val_352_ = lean_ctor_get(v___x_351_, 0);
lean_inc(v_val_352_);
lean_dec_ref_known(v___x_351_, 1);
v___x_353_ = lean_array_get_size(v_val_352_);
v___x_354_ = lean_unsigned_to_nat(0u);
lean_inc(v_argIdx_322_);
v___x_355_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg(v___x_353_, v_val_352_, v_calleeIdx_321_, v_argIdx_322_, v___x_354_, v_info_349_);
lean_dec(v_val_352_);
v_graph_356_ = lean_ctor_get(v___x_355_, 0);
lean_inc_ref(v_graph_356_);
v_info_327_ = v___x_355_;
v_graph_328_ = v_graph_356_;
goto v___jp_326_;
}
else
{
v_info_327_ = v_info_349_;
v_graph_328_ = v___y_347_;
goto v___jp_326_;
}
}
}
}
}
}
}
v___jp_326_:
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_329_ = lean_array_get_size(v_graph_328_);
lean_dec_ref(v_graph_328_);
v___x_330_ = lean_unsigned_to_nat(0u);
v___x_331_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg(v___x_329_, v_calleeIdx_321_, v_argIdx_322_, v_callerIdx_323_, v_paramIdx_324_, v___x_330_, v_info_327_);
lean_dec(v_argIdx_322_);
return v___x_331_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg(lean_object* v_upperBound_384_, lean_object* v_next_385_, lean_object* v_calleeIdx_386_, lean_object* v_argIdx_387_, lean_object* v_callerIdx_388_, lean_object* v_paramIdx_389_, lean_object* v_a_390_, lean_object* v_b_391_){
_start:
{
lean_object* v_a_393_; uint8_t v___x_397_; 
v___x_397_ = lean_nat_dec_lt(v_a_390_, v_upperBound_384_);
if (v___x_397_ == 0)
{
lean_dec(v_a_390_);
lean_dec(v_paramIdx_389_);
return v_b_391_;
}
else
{
lean_object* v_graph_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v_graph_398_ = lean_ctor_get(v_b_391_, 0);
v___x_399_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_400_ = lean_box(0);
v___x_401_ = lean_array_get_borrowed(v___x_399_, v_graph_398_, v_next_385_);
v___x_402_ = lean_array_get_borrowed(v___x_400_, v___x_401_, v_a_390_);
if (lean_obj_tag(v___x_402_) == 1)
{
lean_object* v_val_403_; lean_object* v___x_404_; 
v_val_403_ = lean_ctor_get(v___x_402_, 0);
v___x_404_ = lean_array_get_borrowed(v___x_400_, v_val_403_, v_calleeIdx_386_);
if (lean_obj_tag(v___x_404_) == 1)
{
lean_object* v_val_405_; uint8_t v___x_406_; 
v_val_405_ = lean_ctor_get(v___x_404_, 0);
v___x_406_ = lean_nat_dec_eq(v_val_405_, v_argIdx_387_);
if (v___x_406_ == 0)
{
v_a_393_ = v_b_391_;
goto v___jp_392_;
}
else
{
lean_object* v___x_407_; 
lean_inc(v_paramIdx_389_);
lean_inc(v_a_390_);
v___x_407_ = l_Lean_Elab_FixedParams_Info_setCallerParam(v_next_385_, v_a_390_, v_callerIdx_388_, v_paramIdx_389_, v_b_391_);
v_a_393_ = v___x_407_;
goto v___jp_392_;
}
}
else
{
v_a_393_ = v_b_391_;
goto v___jp_392_;
}
}
else
{
v_a_393_ = v_b_391_;
goto v___jp_392_;
}
}
v___jp_392_:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = lean_unsigned_to_nat(1u);
v___x_395_ = lean_nat_add(v_a_390_, v___x_394_);
lean_dec(v_a_390_);
v_a_390_ = v___x_395_;
v_b_391_ = v_a_393_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg(lean_object* v_upperBound_408_, lean_object* v_calleeIdx_409_, lean_object* v_argIdx_410_, lean_object* v_callerIdx_411_, lean_object* v_paramIdx_412_, lean_object* v_a_413_, lean_object* v_b_414_){
_start:
{
uint8_t v___x_415_; 
v___x_415_ = lean_nat_dec_lt(v_a_413_, v_upperBound_408_);
if (v___x_415_ == 0)
{
lean_dec(v_a_413_);
lean_dec(v_paramIdx_412_);
return v_b_414_;
}
else
{
lean_object* v_graph_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; 
v_graph_416_ = lean_ctor_get(v_b_414_, 0);
v___x_417_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_418_ = lean_array_get_borrowed(v___x_417_, v_graph_416_, v_a_413_);
v___x_419_ = lean_array_get_size(v___x_418_);
v___x_420_ = lean_unsigned_to_nat(0u);
lean_inc(v_paramIdx_412_);
v___x_421_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg(v___x_419_, v_a_413_, v_calleeIdx_409_, v_argIdx_410_, v_callerIdx_411_, v_paramIdx_412_, v___x_420_, v_b_414_);
v___x_422_ = lean_unsigned_to_nat(1u);
v___x_423_ = lean_nat_add(v_a_413_, v___x_422_);
lean_dec(v_a_413_);
v_a_413_ = v___x_423_;
v_b_414_ = v___x_421_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg___boxed(lean_object* v_upperBound_425_, lean_object* v_calleeIdx_426_, lean_object* v_argIdx_427_, lean_object* v_callerIdx_428_, lean_object* v_paramIdx_429_, lean_object* v_a_430_, lean_object* v_b_431_){
_start:
{
lean_object* v_res_432_; 
v_res_432_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg(v_upperBound_425_, v_calleeIdx_426_, v_argIdx_427_, v_callerIdx_428_, v_paramIdx_429_, v_a_430_, v_b_431_);
lean_dec(v_callerIdx_428_);
lean_dec(v_argIdx_427_);
lean_dec(v_calleeIdx_426_);
lean_dec(v_upperBound_425_);
return v_res_432_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg___boxed(lean_object* v_upperBound_433_, lean_object* v_val_434_, lean_object* v_calleeIdx_435_, lean_object* v_argIdx_436_, lean_object* v_a_437_, lean_object* v_b_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg(v_upperBound_433_, v_val_434_, v_calleeIdx_435_, v_argIdx_436_, v_a_437_, v_b_438_);
lean_dec(v_calleeIdx_435_);
lean_dec_ref(v_val_434_);
lean_dec(v_upperBound_433_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg___boxed(lean_object* v_upperBound_440_, lean_object* v_next_441_, lean_object* v_calleeIdx_442_, lean_object* v_argIdx_443_, lean_object* v_callerIdx_444_, lean_object* v_paramIdx_445_, lean_object* v_a_446_, lean_object* v_b_447_){
_start:
{
lean_object* v_res_448_; 
v_res_448_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg(v_upperBound_440_, v_next_441_, v_calleeIdx_442_, v_argIdx_443_, v_callerIdx_444_, v_paramIdx_445_, v_a_446_, v_b_447_);
lean_dec(v_callerIdx_444_);
lean_dec(v_argIdx_443_);
lean_dec(v_calleeIdx_442_);
lean_dec(v_next_441_);
lean_dec(v_upperBound_440_);
return v_res_448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setCallerParam___boxed(lean_object* v_calleeIdx_449_, lean_object* v_argIdx_450_, lean_object* v_callerIdx_451_, lean_object* v_paramIdx_452_, lean_object* v_info_453_){
_start:
{
lean_object* v_res_454_; 
v_res_454_ = l_Lean_Elab_FixedParams_Info_setCallerParam(v_calleeIdx_449_, v_argIdx_450_, v_callerIdx_451_, v_paramIdx_452_, v_info_453_);
lean_dec(v_callerIdx_451_);
lean_dec(v_calleeIdx_449_);
return v_res_454_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0(lean_object* v_upperBound_455_, lean_object* v_next_456_, lean_object* v_calleeIdx_457_, lean_object* v_argIdx_458_, lean_object* v_callerIdx_459_, lean_object* v_paramIdx_460_, lean_object* v_inst_461_, lean_object* v_R_462_, lean_object* v_a_463_, lean_object* v_b_464_, lean_object* v_c_465_){
_start:
{
lean_object* v___x_466_; 
v___x_466_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg(v_upperBound_455_, v_next_456_, v_calleeIdx_457_, v_argIdx_458_, v_callerIdx_459_, v_paramIdx_460_, v_a_463_, v_b_464_);
return v___x_466_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___boxed(lean_object* v_upperBound_467_, lean_object* v_next_468_, lean_object* v_calleeIdx_469_, lean_object* v_argIdx_470_, lean_object* v_callerIdx_471_, lean_object* v_paramIdx_472_, lean_object* v_inst_473_, lean_object* v_R_474_, lean_object* v_a_475_, lean_object* v_b_476_, lean_object* v_c_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0(v_upperBound_467_, v_next_468_, v_calleeIdx_469_, v_argIdx_470_, v_callerIdx_471_, v_paramIdx_472_, v_inst_473_, v_R_474_, v_a_475_, v_b_476_, v_c_477_);
lean_dec(v_callerIdx_471_);
lean_dec(v_argIdx_470_);
lean_dec(v_calleeIdx_469_);
lean_dec(v_next_468_);
lean_dec(v_upperBound_467_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1(lean_object* v_upperBound_479_, lean_object* v_calleeIdx_480_, lean_object* v_argIdx_481_, lean_object* v_callerIdx_482_, lean_object* v_paramIdx_483_, lean_object* v_inst_484_, lean_object* v_R_485_, lean_object* v_a_486_, lean_object* v_b_487_, lean_object* v_c_488_){
_start:
{
lean_object* v___x_489_; 
v___x_489_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg(v_upperBound_479_, v_calleeIdx_480_, v_argIdx_481_, v_callerIdx_482_, v_paramIdx_483_, v_a_486_, v_b_487_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___boxed(lean_object* v_upperBound_490_, lean_object* v_calleeIdx_491_, lean_object* v_argIdx_492_, lean_object* v_callerIdx_493_, lean_object* v_paramIdx_494_, lean_object* v_inst_495_, lean_object* v_R_496_, lean_object* v_a_497_, lean_object* v_b_498_, lean_object* v_c_499_){
_start:
{
lean_object* v_res_500_; 
v_res_500_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1(v_upperBound_490_, v_calleeIdx_491_, v_argIdx_492_, v_callerIdx_493_, v_paramIdx_494_, v_inst_495_, v_R_496_, v_a_497_, v_b_498_, v_c_499_);
lean_dec(v_callerIdx_493_);
lean_dec(v_argIdx_492_);
lean_dec(v_calleeIdx_491_);
lean_dec(v_upperBound_490_);
return v_res_500_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2(lean_object* v_upperBound_501_, lean_object* v_val_502_, lean_object* v_calleeIdx_503_, lean_object* v_argIdx_504_, lean_object* v_inst_505_, lean_object* v_R_506_, lean_object* v_a_507_, lean_object* v_b_508_, lean_object* v_c_509_){
_start:
{
lean_object* v___x_510_; 
v___x_510_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg(v_upperBound_501_, v_val_502_, v_calleeIdx_503_, v_argIdx_504_, v_a_507_, v_b_508_);
return v___x_510_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___boxed(lean_object* v_upperBound_511_, lean_object* v_val_512_, lean_object* v_calleeIdx_513_, lean_object* v_argIdx_514_, lean_object* v_inst_515_, lean_object* v_R_516_, lean_object* v_a_517_, lean_object* v_b_518_, lean_object* v_c_519_){
_start:
{
lean_object* v_res_520_; 
v_res_520_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2(v_upperBound_511_, v_val_512_, v_calleeIdx_513_, v_argIdx_514_, v_inst_515_, v_R_516_, v_a_517_, v_b_518_, v_c_519_);
lean_dec(v_calleeIdx_513_);
lean_dec_ref(v_val_512_);
lean_dec(v_upperBound_511_);
return v_res_520_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Elab_FixedParams_Info_format_spec__2(lean_object* v_a_521_){
_start:
{
lean_object* v___x_522_; 
v___x_522_ = lean_nat_to_int(v_a_521_);
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1_spec__1(lean_object* v_x_523_, lean_object* v_x_524_, lean_object* v_x_525_){
_start:
{
if (lean_obj_tag(v_x_525_) == 0)
{
lean_dec(v_x_523_);
return v_x_524_;
}
else
{
lean_object* v_head_526_; lean_object* v_tail_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_536_; 
v_head_526_ = lean_ctor_get(v_x_525_, 0);
v_tail_527_ = lean_ctor_get(v_x_525_, 1);
v_isSharedCheck_536_ = !lean_is_exclusive(v_x_525_);
if (v_isSharedCheck_536_ == 0)
{
v___x_529_ = v_x_525_;
v_isShared_530_ = v_isSharedCheck_536_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_tail_527_);
lean_inc(v_head_526_);
lean_dec(v_x_525_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_536_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v___x_532_; 
lean_inc(v_x_523_);
if (v_isShared_530_ == 0)
{
lean_ctor_set_tag(v___x_529_, 5);
lean_ctor_set(v___x_529_, 1, v_x_523_);
lean_ctor_set(v___x_529_, 0, v_x_524_);
v___x_532_ = v___x_529_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v_x_524_);
lean_ctor_set(v_reuseFailAlloc_535_, 1, v_x_523_);
v___x_532_ = v_reuseFailAlloc_535_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
lean_object* v___x_533_; 
v___x_533_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_533_, 0, v___x_532_);
lean_ctor_set(v___x_533_, 1, v_head_526_);
v_x_524_ = v___x_533_;
v_x_525_ = v_tail_527_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1(lean_object* v_x_537_, lean_object* v_x_538_){
_start:
{
if (lean_obj_tag(v_x_537_) == 0)
{
lean_object* v___x_539_; 
lean_dec(v_x_538_);
v___x_539_ = lean_box(0);
return v___x_539_;
}
else
{
lean_object* v_tail_540_; 
v_tail_540_ = lean_ctor_get(v_x_537_, 1);
if (lean_obj_tag(v_tail_540_) == 0)
{
lean_object* v_head_541_; 
lean_dec(v_x_538_);
v_head_541_ = lean_ctor_get(v_x_537_, 0);
lean_inc(v_head_541_);
lean_dec_ref_known(v_x_537_, 2);
return v_head_541_;
}
else
{
lean_object* v_head_542_; lean_object* v___x_543_; 
lean_inc(v_tail_540_);
v_head_542_ = lean_ctor_get(v_x_537_, 0);
lean_inc(v_head_542_);
lean_dec_ref_known(v_x_537_, 2);
v___x_543_ = l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1_spec__1(v_x_538_, v_head_542_, v_tail_540_);
return v___x_543_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0(lean_object* v_a_550_, lean_object* v_a_551_){
_start:
{
if (lean_obj_tag(v_a_550_) == 0)
{
lean_object* v___x_552_; 
v___x_552_ = l_List_reverse___redArg(v_a_551_);
return v___x_552_;
}
else
{
lean_object* v_head_553_; lean_object* v_tail_554_; lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_578_; 
v_head_553_ = lean_ctor_get(v_a_550_, 0);
v_tail_554_ = lean_ctor_get(v_a_550_, 1);
v_isSharedCheck_578_ = !lean_is_exclusive(v_a_550_);
if (v_isSharedCheck_578_ == 0)
{
v___x_556_ = v_a_550_;
v_isShared_557_ = v_isSharedCheck_578_;
goto v_resetjp_555_;
}
else
{
lean_inc(v_tail_554_);
lean_inc(v_head_553_);
lean_dec(v_a_550_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_578_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
lean_object* v___y_559_; 
if (lean_obj_tag(v_head_553_) == 0)
{
lean_object* v___x_564_; 
v___x_564_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__1));
v___y_559_ = v___x_564_;
goto v___jp_558_;
}
else
{
lean_object* v_val_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_577_; 
v_val_565_ = lean_ctor_get(v_head_553_, 0);
v_isSharedCheck_577_ = !lean_is_exclusive(v_head_553_);
if (v_isSharedCheck_577_ == 0)
{
v___x_567_ = v_head_553_;
v_isShared_568_ = v_isSharedCheck_577_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_val_565_);
lean_dec(v_head_553_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_577_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_574_; 
v___x_569_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__3));
v___x_570_ = lean_unsigned_to_nat(1u);
v___x_571_ = lean_nat_add(v_val_565_, v___x_570_);
lean_dec(v_val_565_);
v___x_572_ = l_Nat_reprFast(v___x_571_);
if (v_isShared_568_ == 0)
{
lean_ctor_set_tag(v___x_567_, 3);
lean_ctor_set(v___x_567_, 0, v___x_572_);
v___x_574_ = v___x_567_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v___x_572_);
v___x_574_ = v_reuseFailAlloc_576_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
lean_object* v___x_575_; 
v___x_575_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_575_, 0, v___x_569_);
lean_ctor_set(v___x_575_, 1, v___x_574_);
v___y_559_ = v___x_575_;
goto v___jp_558_;
}
}
}
v___jp_558_:
{
lean_object* v___x_561_; 
if (v_isShared_557_ == 0)
{
lean_ctor_set(v___x_556_, 1, v_a_551_);
lean_ctor_set(v___x_556_, 0, v___y_559_);
v___x_561_ = v___x_556_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v___y_559_);
lean_ctor_set(v_reuseFailAlloc_563_, 1, v_a_551_);
v___x_561_ = v_reuseFailAlloc_563_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
v_a_550_ = v_tail_554_;
v_a_551_ = v___x_561_;
goto _start;
}
}
}
}
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6(void){
_start:
{
lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_587_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4));
v___x_588_ = lean_string_length(v___x_587_);
return v___x_588_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7(void){
_start:
{
lean_object* v___x_589_; lean_object* v___x_590_; 
v___x_589_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6);
v___x_590_ = lean_nat_to_int(v___x_589_);
return v___x_590_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3(lean_object* v_a_595_, lean_object* v_a_596_){
_start:
{
if (lean_obj_tag(v_a_595_) == 0)
{
lean_object* v___x_597_; 
v___x_597_ = l_List_reverse___redArg(v_a_596_);
return v___x_597_;
}
else
{
lean_object* v_head_598_; lean_object* v_tail_599_; lean_object* v___x_601_; uint8_t v_isShared_602_; uint8_t v_isSharedCheck_624_; 
v_head_598_ = lean_ctor_get(v_a_595_, 0);
v_tail_599_ = lean_ctor_get(v_a_595_, 1);
v_isSharedCheck_624_ = !lean_is_exclusive(v_a_595_);
if (v_isSharedCheck_624_ == 0)
{
v___x_601_ = v_a_595_;
v_isShared_602_ = v_isSharedCheck_624_;
goto v_resetjp_600_;
}
else
{
lean_inc(v_tail_599_);
lean_inc(v_head_598_);
lean_dec(v_a_595_);
v___x_601_ = lean_box(0);
v_isShared_602_ = v_isSharedCheck_624_;
goto v_resetjp_600_;
}
v_resetjp_600_:
{
lean_object* v___y_604_; 
if (lean_obj_tag(v_head_598_) == 0)
{
lean_object* v___x_609_; 
v___x_609_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__1));
v___y_604_ = v___x_609_;
goto v___jp_603_;
}
else
{
lean_object* v_val_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; uint8_t v___x_622_; lean_object* v___x_623_; 
v_val_610_ = lean_ctor_get(v_head_598_, 0);
lean_inc(v_val_610_);
lean_dec_ref_known(v_head_598_, 1);
v___x_611_ = lean_array_to_list(v_val_610_);
v___x_612_ = lean_box(0);
v___x_613_ = l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0(v___x_611_, v___x_612_);
v___x_614_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3));
v___x_615_ = l_Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1(v___x_613_, v___x_614_);
v___x_616_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7);
v___x_617_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__8));
v___x_618_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_618_, 0, v___x_617_);
lean_ctor_set(v___x_618_, 1, v___x_615_);
v___x_619_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_620_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_620_, 0, v___x_618_);
lean_ctor_set(v___x_620_, 1, v___x_619_);
v___x_621_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_621_, 0, v___x_616_);
lean_ctor_set(v___x_621_, 1, v___x_620_);
v___x_622_ = 0;
v___x_623_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_623_, 0, v___x_621_);
lean_ctor_set_uint8(v___x_623_, sizeof(void*)*1, v___x_622_);
v___y_604_ = v___x_623_;
goto v___jp_603_;
}
v___jp_603_:
{
lean_object* v___x_606_; 
if (v_isShared_602_ == 0)
{
lean_ctor_set(v___x_601_, 1, v_a_596_);
lean_ctor_set(v___x_601_, 0, v___y_604_);
v___x_606_ = v___x_601_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v___y_604_);
lean_ctor_set(v_reuseFailAlloc_608_, 1, v_a_596_);
v___x_606_ = v_reuseFailAlloc_608_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
v_a_595_ = v_tail_599_;
v_a_596_ = v___x_606_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4(lean_object* v_a_628_, lean_object* v_a_629_){
_start:
{
if (lean_obj_tag(v_a_628_) == 0)
{
lean_object* v___x_630_; 
v___x_630_ = l_List_reverse___redArg(v_a_629_);
return v___x_630_;
}
else
{
lean_object* v_head_631_; lean_object* v_tail_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_647_; 
v_head_631_ = lean_ctor_get(v_a_628_, 0);
v_tail_632_ = lean_ctor_get(v_a_628_, 1);
v_isSharedCheck_647_ = !lean_is_exclusive(v_a_628_);
if (v_isSharedCheck_647_ == 0)
{
v___x_634_ = v_a_628_;
v_isShared_635_ = v_isSharedCheck_647_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_tail_632_);
lean_inc(v_head_631_);
lean_dec(v_a_628_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_647_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_644_; 
v___x_636_ = lean_array_to_list(v_head_631_);
v___x_637_ = lean_box(0);
v___x_638_ = l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3(v___x_636_, v___x_637_);
v___x_639_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3));
v___x_640_ = l_Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1(v___x_638_, v___x_639_);
v___x_641_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__1));
v___x_642_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_642_, 0, v___x_641_);
lean_ctor_set(v___x_642_, 1, v___x_640_);
if (v_isShared_635_ == 0)
{
lean_ctor_set(v___x_634_, 1, v_a_629_);
lean_ctor_set(v___x_634_, 0, v___x_642_);
v___x_644_ = v___x_634_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v___x_642_);
lean_ctor_set(v_reuseFailAlloc_646_, 1, v_a_629_);
v___x_644_ = v_reuseFailAlloc_646_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
v_a_628_ = v_tail_632_;
v_a_629_ = v___x_644_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_format(lean_object* v_info_648_){
_start:
{
lean_object* v_graph_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; 
v_graph_649_ = lean_ctor_get(v_info_648_, 0);
lean_inc_ref(v_graph_649_);
lean_dec_ref(v_info_648_);
v___x_650_ = lean_array_to_list(v_graph_649_);
v___x_651_ = lean_box(0);
v___x_652_ = l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4(v___x_650_, v___x_651_);
v___x_653_ = lean_box(1);
v___x_654_ = l_Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1(v___x_652_, v___x_653_);
return v___x_654_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0(lean_object* v_x_657_){
_start:
{
uint8_t v___x_658_; 
v___x_658_ = 0;
return v___x_658_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0___boxed(lean_object* v_x_659_){
_start:
{
uint8_t v_res_660_; lean_object* v_r_661_; 
v_res_660_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0(v_x_659_);
lean_dec(v_x_659_);
v_r_661_ = lean_box(v_res_660_);
return v_r_661_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1(lean_object* v_fvarId_662_, lean_object* v_x_663_){
_start:
{
uint8_t v___x_664_; 
v___x_664_ = l_Lean_instBEqFVarId_beq(v_fvarId_662_, v_x_663_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1___boxed(lean_object* v_fvarId_665_, lean_object* v_x_666_){
_start:
{
uint8_t v_res_667_; lean_object* v_r_668_; 
v_res_667_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1(v_fvarId_665_, v_x_666_);
lean_dec(v_x_666_);
lean_dec(v_fvarId_665_);
v_r_668_ = lean_box(v_res_667_);
return v_r_668_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_670_ = lean_box(0);
v___x_671_ = lean_unsigned_to_nat(16u);
v___x_672_ = lean_mk_array(v___x_671_, v___x_670_);
return v___x_672_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_673_ = lean_obj_once(&l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1, &l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1_once, _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1);
v___x_674_ = lean_unsigned_to_nat(0u);
v___x_675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_675_, 0, v___x_674_);
lean_ctor_set(v___x_675_, 1, v___x_673_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg(lean_object* v_e_676_, lean_object* v_fvarId_677_, lean_object* v___y_678_){
_start:
{
lean_object* v___f_680_; lean_object* v___f_681_; lean_object* v___x_682_; uint8_t v_fst_684_; lean_object* v_mctx_685_; lean_object* v___y_703_; lean_object* v_mctx_708_; lean_object* v___x_709_; lean_object* v___x_710_; uint8_t v___x_711_; 
v___f_680_ = ((lean_object*)(l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__0));
v___f_681_ = lean_alloc_closure((void*)(l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_681_, 0, v_fvarId_677_);
v___x_682_ = lean_st_ref_get(v___y_678_);
v_mctx_708_ = lean_ctor_get(v___x_682_, 0);
lean_inc_ref_n(v_mctx_708_, 2);
lean_dec(v___x_682_);
v___x_709_ = lean_obj_once(&l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2, &l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2_once, _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2);
v___x_710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_710_, 0, v___x_709_);
lean_ctor_set(v___x_710_, 1, v_mctx_708_);
v___x_711_ = l_Lean_Expr_hasFVar(v_e_676_);
if (v___x_711_ == 0)
{
uint8_t v___x_712_; 
v___x_712_ = l_Lean_Expr_hasMVar(v_e_676_);
if (v___x_712_ == 0)
{
lean_dec_ref_known(v___x_710_, 2);
lean_dec_ref(v___f_681_);
lean_dec_ref(v_e_676_);
v_fst_684_ = v___x_712_;
v_mctx_685_ = v_mctx_708_;
goto v___jp_683_;
}
else
{
lean_object* v___x_713_; 
lean_dec_ref(v_mctx_708_);
v___x_713_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_681_, v___f_680_, v_e_676_, v___x_710_);
v___y_703_ = v___x_713_;
goto v___jp_702_;
}
}
else
{
lean_object* v___x_714_; 
lean_dec_ref(v_mctx_708_);
v___x_714_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_681_, v___f_680_, v_e_676_, v___x_710_);
v___y_703_ = v___x_714_;
goto v___jp_702_;
}
v___jp_683_:
{
lean_object* v___x_686_; lean_object* v_cache_687_; lean_object* v_zetaDeltaFVarIds_688_; lean_object* v_postponed_689_; lean_object* v_diag_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_700_; 
v___x_686_ = lean_st_ref_take(v___y_678_);
v_cache_687_ = lean_ctor_get(v___x_686_, 1);
v_zetaDeltaFVarIds_688_ = lean_ctor_get(v___x_686_, 2);
v_postponed_689_ = lean_ctor_get(v___x_686_, 3);
v_diag_690_ = lean_ctor_get(v___x_686_, 4);
v_isSharedCheck_700_ = !lean_is_exclusive(v___x_686_);
if (v_isSharedCheck_700_ == 0)
{
lean_object* v_unused_701_; 
v_unused_701_ = lean_ctor_get(v___x_686_, 0);
lean_dec(v_unused_701_);
v___x_692_ = v___x_686_;
v_isShared_693_ = v_isSharedCheck_700_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_diag_690_);
lean_inc(v_postponed_689_);
lean_inc(v_zetaDeltaFVarIds_688_);
lean_inc(v_cache_687_);
lean_dec(v___x_686_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_700_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v___x_695_; 
if (v_isShared_693_ == 0)
{
lean_ctor_set(v___x_692_, 0, v_mctx_685_);
v___x_695_ = v___x_692_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v_mctx_685_);
lean_ctor_set(v_reuseFailAlloc_699_, 1, v_cache_687_);
lean_ctor_set(v_reuseFailAlloc_699_, 2, v_zetaDeltaFVarIds_688_);
lean_ctor_set(v_reuseFailAlloc_699_, 3, v_postponed_689_);
lean_ctor_set(v_reuseFailAlloc_699_, 4, v_diag_690_);
v___x_695_ = v_reuseFailAlloc_699_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_696_ = lean_st_ref_put(v___y_678_, v___x_695_);
v___x_697_ = lean_box(v_fst_684_);
v___x_698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_698_, 0, v___x_697_);
return v___x_698_;
}
}
}
v___jp_702_:
{
lean_object* v_snd_704_; lean_object* v_fst_705_; lean_object* v_mctx_706_; uint8_t v___x_707_; 
v_snd_704_ = lean_ctor_get(v___y_703_, 1);
lean_inc(v_snd_704_);
v_fst_705_ = lean_ctor_get(v___y_703_, 0);
lean_inc(v_fst_705_);
lean_dec_ref(v___y_703_);
v_mctx_706_ = lean_ctor_get(v_snd_704_, 1);
lean_inc_ref(v_mctx_706_);
lean_dec(v_snd_704_);
v___x_707_ = lean_unbox(v_fst_705_);
lean_dec(v_fst_705_);
v_fst_684_ = v___x_707_;
v_mctx_685_ = v_mctx_706_;
goto v___jp_683_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___boxed(lean_object* v_e_715_, lean_object* v_fvarId_716_, lean_object* v___y_717_, lean_object* v___y_718_){
_start:
{
lean_object* v_res_719_; 
v_res_719_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg(v_e_715_, v_fvarId_716_, v___y_717_);
lean_dec(v___y_717_);
return v_res_719_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0(lean_object* v_e_720_, lean_object* v_fvarId_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_){
_start:
{
lean_object* v___x_727_; 
v___x_727_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg(v_e_720_, v_fvarId_721_, v___y_723_);
return v___x_727_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___boxed(lean_object* v_e_728_, lean_object* v_fvarId_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_){
_start:
{
lean_object* v_res_735_; 
v_res_735_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0(v_e_728_, v_fvarId_729_, v___y_730_, v___y_731_, v___y_732_, v___y_733_);
lean_dec(v___y_733_);
lean_dec_ref(v___y_732_);
lean_dec(v___y_731_);
lean_dec_ref(v___y_730_);
return v_res_735_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0(lean_object* v_k_736_, lean_object* v_b_737_, lean_object* v_c_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_){
_start:
{
lean_object* v___x_744_; 
lean_inc(v___y_742_);
lean_inc_ref(v___y_741_);
lean_inc(v___y_740_);
lean_inc_ref(v___y_739_);
v___x_744_ = lean_apply_7(v_k_736_, v_b_737_, v_c_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, lean_box(0));
return v___x_744_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0___boxed(lean_object* v_k_745_, lean_object* v_b_746_, lean_object* v_c_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_){
_start:
{
lean_object* v_res_753_; 
v_res_753_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0(v_k_745_, v_b_746_, v_c_747_, v___y_748_, v___y_749_, v___y_750_, v___y_751_);
lean_dec(v___y_751_);
lean_dec_ref(v___y_750_);
lean_dec(v___y_749_);
lean_dec_ref(v___y_748_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(lean_object* v_e_754_, lean_object* v_k_755_, uint8_t v_cleanupAnnotations_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_){
_start:
{
lean_object* v___f_762_; uint8_t v___x_763_; uint8_t v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; 
v___f_762_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_762_, 0, v_k_755_);
v___x_763_ = 1;
v___x_764_ = 0;
v___x_765_ = lean_box(0);
v___x_766_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_754_, v___x_763_, v___x_764_, v___x_763_, v___x_764_, v___x_765_, v___f_762_, v_cleanupAnnotations_756_, v___y_757_, v___y_758_, v___y_759_, v___y_760_);
if (lean_obj_tag(v___x_766_) == 0)
{
lean_object* v_a_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_774_; 
v_a_767_ = lean_ctor_get(v___x_766_, 0);
v_isSharedCheck_774_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_774_ == 0)
{
v___x_769_ = v___x_766_;
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_a_767_);
lean_dec(v___x_766_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v___x_772_; 
if (v_isShared_770_ == 0)
{
v___x_772_ = v___x_769_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v_a_767_);
v___x_772_ = v_reuseFailAlloc_773_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
return v___x_772_;
}
}
}
else
{
lean_object* v_a_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_782_; 
v_a_775_ = lean_ctor_get(v___x_766_, 0);
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_782_ == 0)
{
v___x_777_ = v___x_766_;
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_a_775_);
lean_dec(v___x_766_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_780_; 
if (v_isShared_778_ == 0)
{
v___x_780_ = v___x_777_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_a_775_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
return v___x_780_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___boxed(lean_object* v_e_783_, lean_object* v_k_784_, lean_object* v_cleanupAnnotations_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_791_; lean_object* v_res_792_; 
v_cleanupAnnotations_boxed_791_ = lean_unbox(v_cleanupAnnotations_785_);
v_res_792_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_e_783_, v_k_784_, v_cleanupAnnotations_boxed_791_, v___y_786_, v___y_787_, v___y_788_, v___y_789_);
lean_dec(v___y_789_);
lean_dec_ref(v___y_788_);
lean_dec(v___y_787_);
lean_dec_ref(v___y_786_);
return v_res_792_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3(lean_object* v_00_u03b1_793_, lean_object* v_e_794_, lean_object* v_k_795_, uint8_t v_cleanupAnnotations_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_){
_start:
{
lean_object* v___x_802_; 
v___x_802_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_e_794_, v_k_795_, v_cleanupAnnotations_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_);
return v___x_802_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___boxed(lean_object* v_00_u03b1_803_, lean_object* v_e_804_, lean_object* v_k_805_, lean_object* v_cleanupAnnotations_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_812_; lean_object* v_res_813_; 
v_cleanupAnnotations_boxed_812_ = lean_unbox(v_cleanupAnnotations_806_);
v_res_813_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3(v_00_u03b1_803_, v_e_804_, v_k_805_, v_cleanupAnnotations_boxed_812_, v___y_807_, v___y_808_, v___y_809_, v___y_810_);
lean_dec(v___y_810_);
lean_dec_ref(v___y_809_);
lean_dec(v___y_808_);
lean_dec_ref(v___y_807_);
return v_res_813_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg(lean_object* v_upperBound_814_, lean_object* v_xs_815_, lean_object* v_next_816_, lean_object* v_a_817_, lean_object* v_b_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_){
_start:
{
lean_object* v_a_825_; uint8_t v___x_829_; 
v___x_829_ = lean_nat_dec_lt(v_a_817_, v_upperBound_814_);
if (v___x_829_ == 0)
{
lean_object* v___x_830_; 
lean_dec(v_a_817_);
v___x_830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_830_, 0, v_b_818_);
return v___x_830_;
}
else
{
lean_object* v___x_831_; lean_object* v___x_832_; 
v___x_831_ = lean_array_fget_borrowed(v_xs_815_, v_a_817_);
lean_inc(v___y_822_);
lean_inc_ref(v___y_821_);
lean_inc(v___y_820_);
lean_inc_ref(v___y_819_);
lean_inc(v___x_831_);
v___x_832_ = lean_infer_type(v___x_831_, v___y_819_, v___y_820_, v___y_821_, v___y_822_);
if (lean_obj_tag(v___x_832_) == 0)
{
lean_object* v_a_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; 
v_a_833_ = lean_ctor_get(v___x_832_, 0);
lean_inc(v_a_833_);
lean_dec_ref_known(v___x_832_, 1);
v___x_834_ = lean_array_fget_borrowed(v_xs_815_, v_next_816_);
v___x_835_ = l_Lean_Expr_fvarId_x21(v___x_834_);
v___x_836_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg(v_a_833_, v___x_835_, v___y_820_);
if (lean_obj_tag(v___x_836_) == 0)
{
lean_object* v_a_837_; uint8_t v___x_838_; 
v_a_837_ = lean_ctor_get(v___x_836_, 0);
lean_inc(v_a_837_);
lean_dec_ref_known(v___x_836_, 1);
v___x_838_ = lean_unbox(v_a_837_);
lean_dec(v_a_837_);
if (v___x_838_ == 0)
{
v_a_825_ = v_b_818_;
goto v___jp_824_;
}
else
{
lean_object* v___x_839_; 
lean_inc(v_a_817_);
v___x_839_ = lean_array_push(v_b_818_, v_a_817_);
v_a_825_ = v___x_839_;
goto v___jp_824_;
}
}
else
{
lean_object* v_a_840_; lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_847_; 
lean_dec_ref(v_b_818_);
lean_dec(v_a_817_);
v_a_840_ = lean_ctor_get(v___x_836_, 0);
v_isSharedCheck_847_ = !lean_is_exclusive(v___x_836_);
if (v_isSharedCheck_847_ == 0)
{
v___x_842_ = v___x_836_;
v_isShared_843_ = v_isSharedCheck_847_;
goto v_resetjp_841_;
}
else
{
lean_inc(v_a_840_);
lean_dec(v___x_836_);
v___x_842_ = lean_box(0);
v_isShared_843_ = v_isSharedCheck_847_;
goto v_resetjp_841_;
}
v_resetjp_841_:
{
lean_object* v___x_845_; 
if (v_isShared_843_ == 0)
{
v___x_845_ = v___x_842_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v_a_840_);
v___x_845_ = v_reuseFailAlloc_846_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
return v___x_845_;
}
}
}
}
else
{
lean_object* v_a_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_855_; 
lean_dec_ref(v_b_818_);
lean_dec(v_a_817_);
v_a_848_ = lean_ctor_get(v___x_832_, 0);
v_isSharedCheck_855_ = !lean_is_exclusive(v___x_832_);
if (v_isSharedCheck_855_ == 0)
{
v___x_850_ = v___x_832_;
v_isShared_851_ = v_isSharedCheck_855_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_a_848_);
lean_dec(v___x_832_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_855_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v___x_853_; 
if (v_isShared_851_ == 0)
{
v___x_853_ = v___x_850_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_854_; 
v_reuseFailAlloc_854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_854_, 0, v_a_848_);
v___x_853_ = v_reuseFailAlloc_854_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
return v___x_853_;
}
}
}
}
v___jp_824_:
{
lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_826_ = lean_unsigned_to_nat(1u);
v___x_827_ = lean_nat_add(v_a_817_, v___x_826_);
lean_dec(v_a_817_);
v_a_817_ = v___x_827_;
v_b_818_ = v_a_825_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg___boxed(lean_object* v_upperBound_856_, lean_object* v_xs_857_, lean_object* v_next_858_, lean_object* v_a_859_, lean_object* v_b_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_){
_start:
{
lean_object* v_res_866_; 
v_res_866_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg(v_upperBound_856_, v_xs_857_, v_next_858_, v_a_859_, v_b_860_, v___y_861_, v___y_862_, v___y_863_, v___y_864_);
lean_dec(v___y_864_);
lean_dec_ref(v___y_863_);
lean_dec(v___y_862_);
lean_dec_ref(v___y_861_);
lean_dec(v_next_858_);
lean_dec_ref(v_xs_857_);
lean_dec(v_upperBound_856_);
return v_res_866_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg(lean_object* v_upperBound_869_, lean_object* v___x_870_, lean_object* v_xs_871_, lean_object* v_a_872_, lean_object* v_b_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_){
_start:
{
uint8_t v___x_879_; 
v___x_879_ = lean_nat_dec_lt(v_a_872_, v_upperBound_869_);
if (v___x_879_ == 0)
{
lean_object* v___x_880_; 
lean_dec(v_a_872_);
v___x_880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_880_, 0, v_b_873_);
return v___x_880_;
}
else
{
lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; 
v___x_881_ = lean_unsigned_to_nat(1u);
v___x_882_ = lean_nat_add(v_a_872_, v___x_881_);
v___x_883_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___closed__0));
lean_inc(v___x_882_);
v___x_884_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg(v___x_870_, v_xs_871_, v_a_872_, v___x_882_, v___x_883_, v___y_874_, v___y_875_, v___y_876_, v___y_877_);
lean_dec(v_a_872_);
if (lean_obj_tag(v___x_884_) == 0)
{
lean_object* v_a_885_; lean_object* v___x_886_; 
v_a_885_ = lean_ctor_get(v___x_884_, 0);
lean_inc(v_a_885_);
lean_dec_ref_known(v___x_884_, 1);
v___x_886_ = lean_array_push(v_b_873_, v_a_885_);
v_a_872_ = v___x_882_;
v_b_873_ = v___x_886_;
goto _start;
}
else
{
lean_object* v_a_888_; lean_object* v___x_890_; uint8_t v_isShared_891_; uint8_t v_isSharedCheck_895_; 
lean_dec(v___x_882_);
lean_dec_ref(v_b_873_);
v_a_888_ = lean_ctor_get(v___x_884_, 0);
v_isSharedCheck_895_ = !lean_is_exclusive(v___x_884_);
if (v_isSharedCheck_895_ == 0)
{
v___x_890_ = v___x_884_;
v_isShared_891_ = v_isSharedCheck_895_;
goto v_resetjp_889_;
}
else
{
lean_inc(v_a_888_);
lean_dec(v___x_884_);
v___x_890_ = lean_box(0);
v_isShared_891_ = v_isSharedCheck_895_;
goto v_resetjp_889_;
}
v_resetjp_889_:
{
lean_object* v___x_893_; 
if (v_isShared_891_ == 0)
{
v___x_893_ = v___x_890_;
goto v_reusejp_892_;
}
else
{
lean_object* v_reuseFailAlloc_894_; 
v_reuseFailAlloc_894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_894_, 0, v_a_888_);
v___x_893_ = v_reuseFailAlloc_894_;
goto v_reusejp_892_;
}
v_reusejp_892_:
{
return v___x_893_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___boxed(lean_object* v_upperBound_896_, lean_object* v___x_897_, lean_object* v_xs_898_, lean_object* v_a_899_, lean_object* v_b_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_){
_start:
{
lean_object* v_res_906_; 
v_res_906_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg(v_upperBound_896_, v___x_897_, v_xs_898_, v_a_899_, v_b_900_, v___y_901_, v___y_902_, v___y_903_, v___y_904_);
lean_dec(v___y_904_);
lean_dec_ref(v___y_903_);
lean_dec(v___y_902_);
lean_dec_ref(v___y_901_);
lean_dec_ref(v_xs_898_);
lean_dec(v___x_897_);
lean_dec(v_upperBound_896_);
return v_res_906_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___lam__0(lean_object* v_xs_909_, lean_object* v_x_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_){
_start:
{
lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v_revDeps_918_; lean_object* v___x_919_; 
v___x_916_ = lean_array_get_size(v_xs_909_);
v___x_917_ = lean_unsigned_to_nat(0u);
v_revDeps_918_ = ((lean_object*)(l_Lean_Elab_getParamRevDeps___lam__0___closed__0));
v___x_919_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg(v___x_916_, v___x_916_, v_xs_909_, v___x_917_, v_revDeps_918_, v___y_911_, v___y_912_, v___y_913_, v___y_914_);
return v___x_919_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___lam__0___boxed(lean_object* v_xs_920_, lean_object* v_x_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_){
_start:
{
lean_object* v_res_927_; 
v_res_927_ = l_Lean_Elab_getParamRevDeps___lam__0(v_xs_920_, v_x_921_, v___y_922_, v___y_923_, v___y_924_, v___y_925_);
lean_dec(v___y_925_);
lean_dec_ref(v___y_924_);
lean_dec(v___y_923_);
lean_dec_ref(v___y_922_);
lean_dec_ref(v_x_921_);
lean_dec_ref(v_xs_920_);
return v_res_927_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps(lean_object* v_value_929_, lean_object* v_a_930_, lean_object* v_a_931_, lean_object* v_a_932_, lean_object* v_a_933_){
_start:
{
lean_object* v___f_935_; uint8_t v___x_936_; lean_object* v___x_937_; 
v___f_935_ = ((lean_object*)(l_Lean_Elab_getParamRevDeps___closed__0));
v___x_936_ = 1;
v___x_937_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_value_929_, v___f_935_, v___x_936_, v_a_930_, v_a_931_, v_a_932_, v_a_933_);
return v___x_937_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___boxed(lean_object* v_value_938_, lean_object* v_a_939_, lean_object* v_a_940_, lean_object* v_a_941_, lean_object* v_a_942_, lean_object* v_a_943_){
_start:
{
lean_object* v_res_944_; 
v_res_944_ = l_Lean_Elab_getParamRevDeps(v_value_938_, v_a_939_, v_a_940_, v_a_941_, v_a_942_);
lean_dec(v_a_942_);
lean_dec_ref(v_a_941_);
lean_dec(v_a_940_);
lean_dec_ref(v_a_939_);
return v_res_944_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1(lean_object* v_upperBound_945_, lean_object* v_xs_946_, lean_object* v_next_947_, lean_object* v_inst_948_, lean_object* v_R_949_, lean_object* v_a_950_, lean_object* v_b_951_, lean_object* v_c_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_){
_start:
{
lean_object* v___x_958_; 
v___x_958_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg(v_upperBound_945_, v_xs_946_, v_next_947_, v_a_950_, v_b_951_, v___y_953_, v___y_954_, v___y_955_, v___y_956_);
return v___x_958_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___boxed(lean_object* v_upperBound_959_, lean_object* v_xs_960_, lean_object* v_next_961_, lean_object* v_inst_962_, lean_object* v_R_963_, lean_object* v_a_964_, lean_object* v_b_965_, lean_object* v_c_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_){
_start:
{
lean_object* v_res_972_; 
v_res_972_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1(v_upperBound_959_, v_xs_960_, v_next_961_, v_inst_962_, v_R_963_, v_a_964_, v_b_965_, v_c_966_, v___y_967_, v___y_968_, v___y_969_, v___y_970_);
lean_dec(v___y_970_);
lean_dec_ref(v___y_969_);
lean_dec(v___y_968_);
lean_dec_ref(v___y_967_);
lean_dec(v_next_961_);
lean_dec_ref(v_xs_960_);
lean_dec(v_upperBound_959_);
return v_res_972_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2(lean_object* v_upperBound_973_, lean_object* v___x_974_, lean_object* v_xs_975_, lean_object* v_inst_976_, lean_object* v_R_977_, lean_object* v_a_978_, lean_object* v_b_979_, lean_object* v_c_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_){
_start:
{
lean_object* v___x_986_; 
v___x_986_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg(v_upperBound_973_, v___x_974_, v_xs_975_, v_a_978_, v_b_979_, v___y_981_, v___y_982_, v___y_983_, v___y_984_);
return v___x_986_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___boxed(lean_object* v_upperBound_987_, lean_object* v___x_988_, lean_object* v_xs_989_, lean_object* v_inst_990_, lean_object* v_R_991_, lean_object* v_a_992_, lean_object* v_b_993_, lean_object* v_c_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_){
_start:
{
lean_object* v_res_1000_; 
v_res_1000_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2(v_upperBound_987_, v___x_988_, v_xs_989_, v_inst_990_, v_R_991_, v_a_992_, v_b_993_, v_c_994_, v___y_995_, v___y_996_, v___y_997_, v___y_998_);
lean_dec(v___y_998_);
lean_dec_ref(v___y_997_);
lean_dec(v___y_996_);
lean_dec_ref(v___y_995_);
lean_dec_ref(v_xs_989_);
lean_dec(v___x_988_);
lean_dec(v_upperBound_987_);
return v_res_1000_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7(lean_object* v_msg_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_){
_start:
{
lean_object* v___f_1008_; lean_object* v___x_30003__overap_1009_; lean_object* v___x_1010_; 
v___f_1008_ = ((lean_object*)(l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0));
v___x_30003__overap_1009_ = lean_panic_fn_borrowed(v___f_1008_, v_msg_1002_);
lean_inc(v___y_1006_);
lean_inc_ref(v___y_1005_);
lean_inc(v___y_1004_);
lean_inc_ref(v___y_1003_);
v___x_1010_ = lean_apply_5(v___x_30003__overap_1009_, v___y_1003_, v___y_1004_, v___y_1005_, v___y_1006_, lean_box(0));
return v___x_1010_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___boxed(lean_object* v_msg_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_){
_start:
{
lean_object* v_res_1017_; 
v_res_1017_ = l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7(v_msg_1011_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_);
lean_dec(v___y_1015_);
lean_dec_ref(v___y_1014_);
lean_dec(v___y_1013_);
lean_dec_ref(v___y_1012_);
return v_res_1017_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1(size_t v_sz_1018_, size_t v_i_1019_, lean_object* v_bs_1020_){
_start:
{
uint8_t v___x_1021_; 
v___x_1021_ = lean_usize_dec_lt(v_i_1019_, v_sz_1018_);
if (v___x_1021_ == 0)
{
return v_bs_1020_;
}
else
{
lean_object* v_v_1022_; lean_object* v___x_1023_; lean_object* v_bs_x27_1024_; lean_object* v___x_1025_; size_t v___x_1026_; size_t v___x_1027_; lean_object* v___x_1028_; 
v_v_1022_ = lean_array_uget(v_bs_1020_, v_i_1019_);
v___x_1023_ = lean_unsigned_to_nat(0u);
v_bs_x27_1024_ = lean_array_uset(v_bs_1020_, v_i_1019_, v___x_1023_);
v___x_1025_ = lean_array_get_size(v_v_1022_);
lean_dec(v_v_1022_);
v___x_1026_ = ((size_t)1ULL);
v___x_1027_ = lean_usize_add(v_i_1019_, v___x_1026_);
v___x_1028_ = lean_array_uset(v_bs_x27_1024_, v_i_1019_, v___x_1025_);
v_i_1019_ = v___x_1027_;
v_bs_1020_ = v___x_1028_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1___boxed(lean_object* v_sz_1030_, lean_object* v_i_1031_, lean_object* v_bs_1032_){
_start:
{
size_t v_sz_boxed_1033_; size_t v_i_boxed_1034_; lean_object* v_res_1035_; 
v_sz_boxed_1033_ = lean_unbox_usize(v_sz_1030_);
lean_dec(v_sz_1030_);
v_i_boxed_1034_ = lean_unbox_usize(v_i_1031_);
lean_dec(v_i_1031_);
v_res_1035_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1(v_sz_boxed_1033_, v_i_boxed_1034_, v_bs_1032_);
return v_res_1035_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0(size_t v_sz_1036_, size_t v_i_1037_, lean_object* v_bs_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_){
_start:
{
uint8_t v___x_1044_; 
v___x_1044_ = lean_usize_dec_lt(v_i_1037_, v_sz_1036_);
if (v___x_1044_ == 0)
{
lean_object* v___x_1045_; 
v___x_1045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1045_, 0, v_bs_1038_);
return v___x_1045_;
}
else
{
lean_object* v_v_1046_; lean_object* v_value_1047_; lean_object* v___x_1048_; lean_object* v_bs_x27_1049_; lean_object* v___x_1050_; 
v_v_1046_ = lean_array_uget_borrowed(v_bs_1038_, v_i_1037_);
v_value_1047_ = lean_ctor_get(v_v_1046_, 7);
lean_inc_ref(v_value_1047_);
v___x_1048_ = lean_unsigned_to_nat(0u);
v_bs_x27_1049_ = lean_array_uset(v_bs_1038_, v_i_1037_, v___x_1048_);
v___x_1050_ = l_Lean_Elab_getParamRevDeps(v_value_1047_, v___y_1039_, v___y_1040_, v___y_1041_, v___y_1042_);
if (lean_obj_tag(v___x_1050_) == 0)
{
lean_object* v_a_1051_; size_t v___x_1052_; size_t v___x_1053_; lean_object* v___x_1054_; 
v_a_1051_ = lean_ctor_get(v___x_1050_, 0);
lean_inc(v_a_1051_);
lean_dec_ref_known(v___x_1050_, 1);
v___x_1052_ = ((size_t)1ULL);
v___x_1053_ = lean_usize_add(v_i_1037_, v___x_1052_);
v___x_1054_ = lean_array_uset(v_bs_x27_1049_, v_i_1037_, v_a_1051_);
v_i_1037_ = v___x_1053_;
v_bs_1038_ = v___x_1054_;
goto _start;
}
else
{
lean_object* v_a_1056_; lean_object* v___x_1058_; uint8_t v_isShared_1059_; uint8_t v_isSharedCheck_1063_; 
lean_dec_ref(v_bs_x27_1049_);
v_a_1056_ = lean_ctor_get(v___x_1050_, 0);
v_isSharedCheck_1063_ = !lean_is_exclusive(v___x_1050_);
if (v_isSharedCheck_1063_ == 0)
{
v___x_1058_ = v___x_1050_;
v_isShared_1059_ = v_isSharedCheck_1063_;
goto v_resetjp_1057_;
}
else
{
lean_inc(v_a_1056_);
lean_dec(v___x_1050_);
v___x_1058_ = lean_box(0);
v_isShared_1059_ = v_isSharedCheck_1063_;
goto v_resetjp_1057_;
}
v_resetjp_1057_:
{
lean_object* v___x_1061_; 
if (v_isShared_1059_ == 0)
{
v___x_1061_ = v___x_1058_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v_a_1056_);
v___x_1061_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
return v___x_1061_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0___boxed(lean_object* v_sz_1064_, lean_object* v_i_1065_, lean_object* v_bs_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_){
_start:
{
size_t v_sz_boxed_1072_; size_t v_i_boxed_1073_; lean_object* v_res_1074_; 
v_sz_boxed_1072_ = lean_unbox_usize(v_sz_1064_);
lean_dec(v_sz_1064_);
v_i_boxed_1073_ = lean_unbox_usize(v_i_1065_);
lean_dec(v_i_1065_);
v_res_1074_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0(v_sz_boxed_1072_, v_i_boxed_1073_, v_bs_1066_, v___y_1067_, v___y_1068_, v___y_1069_, v___y_1070_);
lean_dec(v___y_1070_);
lean_dec_ref(v___y_1069_);
lean_dec(v___y_1068_);
lean_dec_ref(v___y_1067_);
return v_res_1074_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2(lean_object* v_msgData_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_){
_start:
{
lean_object* v___x_1081_; lean_object* v_env_1082_; uint8_t v___x_1083_; lean_object* v_env_1084_; lean_object* v___x_1085_; lean_object* v_toCold_1086_; lean_object* v_mctx_1087_; lean_object* v_lctx_1088_; lean_object* v_options_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; 
v___x_1081_ = lean_st_ref_get(v___y_1079_);
v_env_1082_ = lean_ctor_get(v___x_1081_, 0);
lean_inc_ref(v_env_1082_);
lean_dec(v___x_1081_);
v___x_1083_ = 0;
v_env_1084_ = l_Lean_Environment_setRecordingDeps(v_env_1082_, v___x_1083_);
v___x_1085_ = lean_st_ref_get(v___y_1077_);
v_toCold_1086_ = lean_ctor_get(v___y_1078_, 0);
v_mctx_1087_ = lean_ctor_get(v___x_1085_, 0);
lean_inc_ref(v_mctx_1087_);
lean_dec(v___x_1085_);
v_lctx_1088_ = lean_ctor_get(v___y_1076_, 2);
v_options_1089_ = lean_ctor_get(v_toCold_1086_, 2);
lean_inc_ref(v_options_1089_);
lean_inc_ref(v_lctx_1088_);
v___x_1090_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1090_, 0, v_env_1084_);
lean_ctor_set(v___x_1090_, 1, v_mctx_1087_);
lean_ctor_set(v___x_1090_, 2, v_lctx_1088_);
lean_ctor_set(v___x_1090_, 3, v_options_1089_);
v___x_1091_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1090_);
lean_ctor_set(v___x_1091_, 1, v_msgData_1075_);
v___x_1092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1092_, 0, v___x_1091_);
return v___x_1092_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2___boxed(lean_object* v_msgData_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_){
_start:
{
lean_object* v_res_1099_; 
v_res_1099_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2(v_msgData_1093_, v___y_1094_, v___y_1095_, v___y_1096_, v___y_1097_);
lean_dec(v___y_1097_);
lean_dec_ref(v___y_1096_);
lean_dec(v___y_1095_);
lean_dec_ref(v___y_1094_);
return v_res_1099_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1100_; double v___x_1101_; 
v___x_1100_ = lean_unsigned_to_nat(0u);
v___x_1101_ = lean_float_of_nat(v___x_1100_);
return v___x_1101_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(lean_object* v_cls_1105_, lean_object* v_msg_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_){
_start:
{
lean_object* v_ref_1112_; lean_object* v___x_1113_; lean_object* v_a_1114_; lean_object* v___x_1116_; uint8_t v_isShared_1117_; uint8_t v_isSharedCheck_1159_; 
v_ref_1112_ = lean_ctor_get(v___y_1109_, 2);
v___x_1113_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2(v_msg_1106_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_);
v_a_1114_ = lean_ctor_get(v___x_1113_, 0);
v_isSharedCheck_1159_ = !lean_is_exclusive(v___x_1113_);
if (v_isSharedCheck_1159_ == 0)
{
v___x_1116_ = v___x_1113_;
v_isShared_1117_ = v_isSharedCheck_1159_;
goto v_resetjp_1115_;
}
else
{
lean_inc(v_a_1114_);
lean_dec(v___x_1113_);
v___x_1116_ = lean_box(0);
v_isShared_1117_ = v_isSharedCheck_1159_;
goto v_resetjp_1115_;
}
v_resetjp_1115_:
{
lean_object* v___x_1118_; lean_object* v_traceState_1119_; lean_object* v_env_1120_; lean_object* v_nextMacroScope_1121_; lean_object* v_ngen_1122_; lean_object* v_auxDeclNGen_1123_; lean_object* v_cache_1124_; lean_object* v_recordedDeps_1125_; lean_object* v_messages_1126_; lean_object* v_infoState_1127_; lean_object* v_snapshotTasks_1128_; lean_object* v___x_1130_; uint8_t v_isShared_1131_; uint8_t v_isSharedCheck_1158_; 
v___x_1118_ = lean_st_ref_take(v___y_1110_);
v_traceState_1119_ = lean_ctor_get(v___x_1118_, 4);
v_env_1120_ = lean_ctor_get(v___x_1118_, 0);
v_nextMacroScope_1121_ = lean_ctor_get(v___x_1118_, 1);
v_ngen_1122_ = lean_ctor_get(v___x_1118_, 2);
v_auxDeclNGen_1123_ = lean_ctor_get(v___x_1118_, 3);
v_cache_1124_ = lean_ctor_get(v___x_1118_, 5);
v_recordedDeps_1125_ = lean_ctor_get(v___x_1118_, 6);
v_messages_1126_ = lean_ctor_get(v___x_1118_, 7);
v_infoState_1127_ = lean_ctor_get(v___x_1118_, 8);
v_snapshotTasks_1128_ = lean_ctor_get(v___x_1118_, 9);
v_isSharedCheck_1158_ = !lean_is_exclusive(v___x_1118_);
if (v_isSharedCheck_1158_ == 0)
{
v___x_1130_ = v___x_1118_;
v_isShared_1131_ = v_isSharedCheck_1158_;
goto v_resetjp_1129_;
}
else
{
lean_inc(v_snapshotTasks_1128_);
lean_inc(v_infoState_1127_);
lean_inc(v_messages_1126_);
lean_inc(v_recordedDeps_1125_);
lean_inc(v_cache_1124_);
lean_inc(v_traceState_1119_);
lean_inc(v_auxDeclNGen_1123_);
lean_inc(v_ngen_1122_);
lean_inc(v_nextMacroScope_1121_);
lean_inc(v_env_1120_);
lean_dec(v___x_1118_);
v___x_1130_ = lean_box(0);
v_isShared_1131_ = v_isSharedCheck_1158_;
goto v_resetjp_1129_;
}
v_resetjp_1129_:
{
uint64_t v_tid_1132_; lean_object* v_traces_1133_; lean_object* v___x_1135_; uint8_t v_isShared_1136_; uint8_t v_isSharedCheck_1157_; 
v_tid_1132_ = lean_ctor_get_uint64(v_traceState_1119_, sizeof(void*)*1);
v_traces_1133_ = lean_ctor_get(v_traceState_1119_, 0);
v_isSharedCheck_1157_ = !lean_is_exclusive(v_traceState_1119_);
if (v_isSharedCheck_1157_ == 0)
{
v___x_1135_ = v_traceState_1119_;
v_isShared_1136_ = v_isSharedCheck_1157_;
goto v_resetjp_1134_;
}
else
{
lean_inc(v_traces_1133_);
lean_dec(v_traceState_1119_);
v___x_1135_ = lean_box(0);
v_isShared_1136_ = v_isSharedCheck_1157_;
goto v_resetjp_1134_;
}
v_resetjp_1134_:
{
lean_object* v___x_1137_; lean_object* v___x_1138_; double v___x_1139_; uint8_t v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1148_; 
v___x_1137_ = lean_box(0);
v___x_1138_ = lean_box(0);
v___x_1139_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0, &l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0);
v___x_1140_ = 0;
v___x_1141_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__1));
v___x_1142_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1142_, 0, v_cls_1105_);
lean_ctor_set(v___x_1142_, 1, v___x_1138_);
lean_ctor_set(v___x_1142_, 2, v___x_1141_);
lean_ctor_set_float(v___x_1142_, sizeof(void*)*3, v___x_1139_);
lean_ctor_set_float(v___x_1142_, sizeof(void*)*3 + 8, v___x_1139_);
lean_ctor_set_uint8(v___x_1142_, sizeof(void*)*3 + 16, v___x_1140_);
v___x_1143_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__2));
v___x_1144_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1144_, 0, v___x_1142_);
lean_ctor_set(v___x_1144_, 1, v_a_1114_);
lean_ctor_set(v___x_1144_, 2, v___x_1143_);
lean_inc(v_ref_1112_);
v___x_1145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1145_, 0, v_ref_1112_);
lean_ctor_set(v___x_1145_, 1, v___x_1144_);
v___x_1146_ = l_Lean_PersistentArray_push___redArg(v_traces_1133_, v___x_1145_);
if (v_isShared_1136_ == 0)
{
lean_ctor_set(v___x_1135_, 0, v___x_1146_);
v___x_1148_ = v___x_1135_;
goto v_reusejp_1147_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v___x_1146_);
lean_ctor_set_uint64(v_reuseFailAlloc_1156_, sizeof(void*)*1, v_tid_1132_);
v___x_1148_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1147_;
}
v_reusejp_1147_:
{
lean_object* v___x_1150_; 
if (v_isShared_1131_ == 0)
{
lean_ctor_set(v___x_1130_, 4, v___x_1148_);
v___x_1150_ = v___x_1130_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1155_; 
v_reuseFailAlloc_1155_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1155_, 0, v_env_1120_);
lean_ctor_set(v_reuseFailAlloc_1155_, 1, v_nextMacroScope_1121_);
lean_ctor_set(v_reuseFailAlloc_1155_, 2, v_ngen_1122_);
lean_ctor_set(v_reuseFailAlloc_1155_, 3, v_auxDeclNGen_1123_);
lean_ctor_set(v_reuseFailAlloc_1155_, 4, v___x_1148_);
lean_ctor_set(v_reuseFailAlloc_1155_, 5, v_cache_1124_);
lean_ctor_set(v_reuseFailAlloc_1155_, 6, v_recordedDeps_1125_);
lean_ctor_set(v_reuseFailAlloc_1155_, 7, v_messages_1126_);
lean_ctor_set(v_reuseFailAlloc_1155_, 8, v_infoState_1127_);
lean_ctor_set(v_reuseFailAlloc_1155_, 9, v_snapshotTasks_1128_);
v___x_1150_ = v_reuseFailAlloc_1155_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
lean_object* v___x_1151_; lean_object* v___x_1153_; 
v___x_1151_ = lean_st_ref_put(v___y_1110_, v___x_1150_);
if (v_isShared_1117_ == 0)
{
lean_ctor_set(v___x_1116_, 0, v___x_1137_);
v___x_1153_ = v___x_1116_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v___x_1137_);
v___x_1153_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
return v___x_1153_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___boxed(lean_object* v_cls_1160_, lean_object* v_msg_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_){
_start:
{
lean_object* v_res_1167_; 
v_res_1167_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v_cls_1160_, v_msg_1161_, v___y_1162_, v___y_1163_, v___y_1164_, v___y_1165_);
lean_dec(v___y_1165_);
lean_dec_ref(v___y_1164_);
lean_dec(v___y_1163_);
lean_dec_ref(v___y_1162_);
return v_res_1167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0(lean_object* v_00_u03b1_1168_, lean_object* v_x_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_){
_start:
{
lean_object* v___x_1175_; lean_object* v___x_1176_; 
v___x_1175_ = lean_apply_1(v_x_1169_, lean_box(0));
v___x_1176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1176_, 0, v___x_1175_);
return v___x_1176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0___boxed(lean_object* v_00_u03b1_1177_, lean_object* v_x_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_){
_start:
{
lean_object* v_res_1184_; 
v_res_1184_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0(v_00_u03b1_1177_, v_x_1178_, v___y_1179_, v___y_1180_, v___y_1181_, v___y_1182_);
lean_dec(v___y_1182_);
lean_dec_ref(v___y_1181_);
lean_dec(v___y_1180_);
lean_dec_ref(v___y_1179_);
return v_res_1184_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28___redArg(lean_object* v_x_1185_, lean_object* v_x_1186_){
_start:
{
if (lean_obj_tag(v_x_1186_) == 0)
{
return v_x_1185_;
}
else
{
lean_object* v_key_1187_; lean_object* v_value_1188_; lean_object* v_tail_1189_; lean_object* v___x_1191_; uint8_t v_isShared_1192_; uint8_t v_isSharedCheck_1212_; 
v_key_1187_ = lean_ctor_get(v_x_1186_, 0);
v_value_1188_ = lean_ctor_get(v_x_1186_, 1);
v_tail_1189_ = lean_ctor_get(v_x_1186_, 2);
v_isSharedCheck_1212_ = !lean_is_exclusive(v_x_1186_);
if (v_isSharedCheck_1212_ == 0)
{
v___x_1191_ = v_x_1186_;
v_isShared_1192_ = v_isSharedCheck_1212_;
goto v_resetjp_1190_;
}
else
{
lean_inc(v_tail_1189_);
lean_inc(v_value_1188_);
lean_inc(v_key_1187_);
lean_dec(v_x_1186_);
v___x_1191_ = lean_box(0);
v_isShared_1192_ = v_isSharedCheck_1212_;
goto v_resetjp_1190_;
}
v_resetjp_1190_:
{
lean_object* v___x_1193_; uint64_t v___x_1194_; uint64_t v___x_1195_; uint64_t v___x_1196_; uint64_t v_fold_1197_; uint64_t v___x_1198_; uint64_t v___x_1199_; uint64_t v___x_1200_; size_t v___x_1201_; size_t v___x_1202_; size_t v___x_1203_; size_t v___x_1204_; size_t v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1208_; 
v___x_1193_ = lean_array_get_size(v_x_1185_);
v___x_1194_ = l_Lean_ExprStructEq_hash(v_key_1187_);
v___x_1195_ = 32ULL;
v___x_1196_ = lean_uint64_shift_right(v___x_1194_, v___x_1195_);
v_fold_1197_ = lean_uint64_xor(v___x_1194_, v___x_1196_);
v___x_1198_ = 16ULL;
v___x_1199_ = lean_uint64_shift_right(v_fold_1197_, v___x_1198_);
v___x_1200_ = lean_uint64_xor(v_fold_1197_, v___x_1199_);
v___x_1201_ = lean_uint64_to_usize(v___x_1200_);
v___x_1202_ = lean_usize_of_nat(v___x_1193_);
v___x_1203_ = ((size_t)1ULL);
v___x_1204_ = lean_usize_sub(v___x_1202_, v___x_1203_);
v___x_1205_ = lean_usize_land(v___x_1201_, v___x_1204_);
v___x_1206_ = lean_array_uget_borrowed(v_x_1185_, v___x_1205_);
lean_inc(v___x_1206_);
if (v_isShared_1192_ == 0)
{
lean_ctor_set(v___x_1191_, 2, v___x_1206_);
v___x_1208_ = v___x_1191_;
goto v_reusejp_1207_;
}
else
{
lean_object* v_reuseFailAlloc_1211_; 
v_reuseFailAlloc_1211_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1211_, 0, v_key_1187_);
lean_ctor_set(v_reuseFailAlloc_1211_, 1, v_value_1188_);
lean_ctor_set(v_reuseFailAlloc_1211_, 2, v___x_1206_);
v___x_1208_ = v_reuseFailAlloc_1211_;
goto v_reusejp_1207_;
}
v_reusejp_1207_:
{
lean_object* v___x_1209_; 
v___x_1209_ = lean_array_uset(v_x_1185_, v___x_1205_, v___x_1208_);
v_x_1185_ = v___x_1209_;
v_x_1186_ = v_tail_1189_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27___redArg(lean_object* v_i_1213_, lean_object* v_source_1214_, lean_object* v_target_1215_){
_start:
{
lean_object* v___x_1216_; uint8_t v___x_1217_; 
v___x_1216_ = lean_array_get_size(v_source_1214_);
v___x_1217_ = lean_nat_dec_lt(v_i_1213_, v___x_1216_);
if (v___x_1217_ == 0)
{
lean_dec_ref(v_source_1214_);
lean_dec(v_i_1213_);
return v_target_1215_;
}
else
{
lean_object* v_es_1218_; lean_object* v___x_1219_; lean_object* v_source_1220_; lean_object* v_target_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; 
v_es_1218_ = lean_array_fget(v_source_1214_, v_i_1213_);
v___x_1219_ = lean_box(0);
v_source_1220_ = lean_array_fset(v_source_1214_, v_i_1213_, v___x_1219_);
v_target_1221_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28___redArg(v_target_1215_, v_es_1218_);
v___x_1222_ = lean_unsigned_to_nat(1u);
v___x_1223_ = lean_nat_add(v_i_1213_, v___x_1222_);
lean_dec(v_i_1213_);
v_i_1213_ = v___x_1223_;
v_source_1214_ = v_source_1220_;
v_target_1215_ = v_target_1221_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26___redArg(lean_object* v_data_1225_){
_start:
{
lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v_nbuckets_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; 
v___x_1226_ = lean_array_get_size(v_data_1225_);
v___x_1227_ = lean_unsigned_to_nat(2u);
v_nbuckets_1228_ = lean_nat_mul(v___x_1226_, v___x_1227_);
v___x_1229_ = lean_unsigned_to_nat(0u);
v___x_1230_ = lean_box(0);
v___x_1231_ = lean_mk_array(v_nbuckets_1228_, v___x_1230_);
v___x_1232_ = lean_array_propagate_mark(v_data_1225_, v___x_1231_);
v___x_1233_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27___redArg(v___x_1229_, v_data_1225_, v___x_1232_);
return v___x_1233_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27___redArg(lean_object* v_a_1234_, lean_object* v_b_1235_, lean_object* v_x_1236_){
_start:
{
if (lean_obj_tag(v_x_1236_) == 0)
{
lean_dec(v_b_1235_);
lean_dec_ref(v_a_1234_);
return v_x_1236_;
}
else
{
lean_object* v_key_1237_; lean_object* v_value_1238_; lean_object* v_tail_1239_; lean_object* v___x_1241_; uint8_t v_isShared_1242_; uint8_t v_isSharedCheck_1251_; 
v_key_1237_ = lean_ctor_get(v_x_1236_, 0);
v_value_1238_ = lean_ctor_get(v_x_1236_, 1);
v_tail_1239_ = lean_ctor_get(v_x_1236_, 2);
v_isSharedCheck_1251_ = !lean_is_exclusive(v_x_1236_);
if (v_isSharedCheck_1251_ == 0)
{
v___x_1241_ = v_x_1236_;
v_isShared_1242_ = v_isSharedCheck_1251_;
goto v_resetjp_1240_;
}
else
{
lean_inc(v_tail_1239_);
lean_inc(v_value_1238_);
lean_inc(v_key_1237_);
lean_dec(v_x_1236_);
v___x_1241_ = lean_box(0);
v_isShared_1242_ = v_isSharedCheck_1251_;
goto v_resetjp_1240_;
}
v_resetjp_1240_:
{
uint8_t v___x_1243_; 
v___x_1243_ = l_Lean_ExprStructEq_beq(v_key_1237_, v_a_1234_);
if (v___x_1243_ == 0)
{
lean_object* v___x_1244_; lean_object* v___x_1246_; 
v___x_1244_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27___redArg(v_a_1234_, v_b_1235_, v_tail_1239_);
if (v_isShared_1242_ == 0)
{
lean_ctor_set(v___x_1241_, 2, v___x_1244_);
v___x_1246_ = v___x_1241_;
goto v_reusejp_1245_;
}
else
{
lean_object* v_reuseFailAlloc_1247_; 
v_reuseFailAlloc_1247_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1247_, 0, v_key_1237_);
lean_ctor_set(v_reuseFailAlloc_1247_, 1, v_value_1238_);
lean_ctor_set(v_reuseFailAlloc_1247_, 2, v___x_1244_);
v___x_1246_ = v_reuseFailAlloc_1247_;
goto v_reusejp_1245_;
}
v_reusejp_1245_:
{
return v___x_1246_;
}
}
else
{
lean_object* v___x_1249_; 
lean_dec(v_value_1238_);
lean_dec(v_key_1237_);
if (v_isShared_1242_ == 0)
{
lean_ctor_set(v___x_1241_, 1, v_b_1235_);
lean_ctor_set(v___x_1241_, 0, v_a_1234_);
v___x_1249_ = v___x_1241_;
goto v_reusejp_1248_;
}
else
{
lean_object* v_reuseFailAlloc_1250_; 
v_reuseFailAlloc_1250_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1250_, 0, v_a_1234_);
lean_ctor_set(v_reuseFailAlloc_1250_, 1, v_b_1235_);
lean_ctor_set(v_reuseFailAlloc_1250_, 2, v_tail_1239_);
v___x_1249_ = v_reuseFailAlloc_1250_;
goto v_reusejp_1248_;
}
v_reusejp_1248_:
{
return v___x_1249_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg(lean_object* v_a_1252_, lean_object* v_x_1253_){
_start:
{
if (lean_obj_tag(v_x_1253_) == 0)
{
uint8_t v___x_1254_; 
v___x_1254_ = 0;
return v___x_1254_;
}
else
{
lean_object* v_key_1255_; lean_object* v_tail_1256_; uint8_t v___x_1257_; 
v_key_1255_ = lean_ctor_get(v_x_1253_, 0);
v_tail_1256_ = lean_ctor_get(v_x_1253_, 2);
v___x_1257_ = l_Lean_ExprStructEq_beq(v_key_1255_, v_a_1252_);
if (v___x_1257_ == 0)
{
v_x_1253_ = v_tail_1256_;
goto _start;
}
else
{
return v___x_1257_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg___boxed(lean_object* v_a_1259_, lean_object* v_x_1260_){
_start:
{
uint8_t v_res_1261_; lean_object* v_r_1262_; 
v_res_1261_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg(v_a_1259_, v_x_1260_);
lean_dec(v_x_1260_);
lean_dec_ref(v_a_1259_);
v_r_1262_ = lean_box(v_res_1261_);
return v_r_1262_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19___redArg(lean_object* v_m_1263_, lean_object* v_a_1264_, lean_object* v_b_1265_){
_start:
{
lean_object* v_size_1266_; lean_object* v_buckets_1267_; lean_object* v___x_1269_; uint8_t v_isShared_1270_; uint8_t v_isSharedCheck_1310_; 
v_size_1266_ = lean_ctor_get(v_m_1263_, 0);
v_buckets_1267_ = lean_ctor_get(v_m_1263_, 1);
v_isSharedCheck_1310_ = !lean_is_exclusive(v_m_1263_);
if (v_isSharedCheck_1310_ == 0)
{
v___x_1269_ = v_m_1263_;
v_isShared_1270_ = v_isSharedCheck_1310_;
goto v_resetjp_1268_;
}
else
{
lean_inc(v_buckets_1267_);
lean_inc(v_size_1266_);
lean_dec(v_m_1263_);
v___x_1269_ = lean_box(0);
v_isShared_1270_ = v_isSharedCheck_1310_;
goto v_resetjp_1268_;
}
v_resetjp_1268_:
{
lean_object* v___x_1271_; uint64_t v___x_1272_; uint64_t v___x_1273_; uint64_t v___x_1274_; uint64_t v_fold_1275_; uint64_t v___x_1276_; uint64_t v___x_1277_; uint64_t v___x_1278_; size_t v___x_1279_; size_t v___x_1280_; size_t v___x_1281_; size_t v___x_1282_; size_t v___x_1283_; lean_object* v_bkt_1284_; uint8_t v___x_1285_; 
v___x_1271_ = lean_array_get_size(v_buckets_1267_);
v___x_1272_ = l_Lean_ExprStructEq_hash(v_a_1264_);
v___x_1273_ = 32ULL;
v___x_1274_ = lean_uint64_shift_right(v___x_1272_, v___x_1273_);
v_fold_1275_ = lean_uint64_xor(v___x_1272_, v___x_1274_);
v___x_1276_ = 16ULL;
v___x_1277_ = lean_uint64_shift_right(v_fold_1275_, v___x_1276_);
v___x_1278_ = lean_uint64_xor(v_fold_1275_, v___x_1277_);
v___x_1279_ = lean_uint64_to_usize(v___x_1278_);
v___x_1280_ = lean_usize_of_nat(v___x_1271_);
v___x_1281_ = ((size_t)1ULL);
v___x_1282_ = lean_usize_sub(v___x_1280_, v___x_1281_);
v___x_1283_ = lean_usize_land(v___x_1279_, v___x_1282_);
v_bkt_1284_ = lean_array_uget_borrowed(v_buckets_1267_, v___x_1283_);
v___x_1285_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg(v_a_1264_, v_bkt_1284_);
if (v___x_1285_ == 0)
{
lean_object* v___x_1286_; lean_object* v_size_x27_1287_; lean_object* v___x_1288_; lean_object* v_buckets_x27_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; uint8_t v___x_1295_; 
v___x_1286_ = lean_unsigned_to_nat(1u);
v_size_x27_1287_ = lean_nat_add(v_size_1266_, v___x_1286_);
lean_dec(v_size_1266_);
lean_inc(v_bkt_1284_);
v___x_1288_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1288_, 0, v_a_1264_);
lean_ctor_set(v___x_1288_, 1, v_b_1265_);
lean_ctor_set(v___x_1288_, 2, v_bkt_1284_);
v_buckets_x27_1289_ = lean_array_uset(v_buckets_1267_, v___x_1283_, v___x_1288_);
v___x_1290_ = lean_unsigned_to_nat(4u);
v___x_1291_ = lean_nat_mul(v_size_x27_1287_, v___x_1290_);
v___x_1292_ = lean_unsigned_to_nat(3u);
v___x_1293_ = lean_nat_div(v___x_1291_, v___x_1292_);
lean_dec(v___x_1291_);
v___x_1294_ = lean_array_get_size(v_buckets_x27_1289_);
v___x_1295_ = lean_nat_dec_le(v___x_1293_, v___x_1294_);
lean_dec(v___x_1293_);
if (v___x_1295_ == 0)
{
lean_object* v_val_1296_; lean_object* v___x_1298_; 
v_val_1296_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26___redArg(v_buckets_x27_1289_);
if (v_isShared_1270_ == 0)
{
lean_ctor_set(v___x_1269_, 1, v_val_1296_);
lean_ctor_set(v___x_1269_, 0, v_size_x27_1287_);
v___x_1298_ = v___x_1269_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1299_; 
v_reuseFailAlloc_1299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1299_, 0, v_size_x27_1287_);
lean_ctor_set(v_reuseFailAlloc_1299_, 1, v_val_1296_);
v___x_1298_ = v_reuseFailAlloc_1299_;
goto v_reusejp_1297_;
}
v_reusejp_1297_:
{
return v___x_1298_;
}
}
else
{
lean_object* v___x_1301_; 
if (v_isShared_1270_ == 0)
{
lean_ctor_set(v___x_1269_, 1, v_buckets_x27_1289_);
lean_ctor_set(v___x_1269_, 0, v_size_x27_1287_);
v___x_1301_ = v___x_1269_;
goto v_reusejp_1300_;
}
else
{
lean_object* v_reuseFailAlloc_1302_; 
v_reuseFailAlloc_1302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1302_, 0, v_size_x27_1287_);
lean_ctor_set(v_reuseFailAlloc_1302_, 1, v_buckets_x27_1289_);
v___x_1301_ = v_reuseFailAlloc_1302_;
goto v_reusejp_1300_;
}
v_reusejp_1300_:
{
return v___x_1301_;
}
}
}
else
{
lean_object* v___x_1303_; lean_object* v_buckets_x27_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1308_; 
lean_inc(v_bkt_1284_);
v___x_1303_ = lean_box(0);
v_buckets_x27_1304_ = lean_array_uset(v_buckets_1267_, v___x_1283_, v___x_1303_);
v___x_1305_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27___redArg(v_a_1264_, v_b_1265_, v_bkt_1284_);
v___x_1306_ = lean_array_uset(v_buckets_x27_1304_, v___x_1283_, v___x_1305_);
if (v_isShared_1270_ == 0)
{
lean_ctor_set(v___x_1269_, 1, v___x_1306_);
v___x_1308_ = v___x_1269_;
goto v_reusejp_1307_;
}
else
{
lean_object* v_reuseFailAlloc_1309_; 
v_reuseFailAlloc_1309_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1309_, 0, v_size_1266_);
lean_ctor_set(v_reuseFailAlloc_1309_, 1, v___x_1306_);
v___x_1308_ = v_reuseFailAlloc_1309_;
goto v_reusejp_1307_;
}
v_reusejp_1307_:
{
return v___x_1308_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2(lean_object* v_a_1311_, lean_object* v_e_1312_, lean_object* v_a_1313_){
_start:
{
lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; 
v___x_1315_ = lean_st_ref_take(v_a_1311_);
v___x_1316_ = lean_box(0);
v___x_1317_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19___redArg(v___x_1315_, v_e_1312_, v_a_1313_);
v___x_1318_ = lean_st_ref_put(v_a_1311_, v___x_1317_);
return v___x_1316_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2___boxed(lean_object* v_a_1319_, lean_object* v_e_1320_, lean_object* v_a_1321_, lean_object* v___y_1322_){
_start:
{
lean_object* v_res_1323_; 
v_res_1323_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2(v_a_1319_, v_e_1320_, v_a_1321_);
lean_dec(v_a_1319_);
return v_res_1323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0(lean_object* v_k_1324_, lean_object* v___y_1325_, lean_object* v_b_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_){
_start:
{
lean_object* v___x_1332_; 
lean_inc(v___y_1330_);
lean_inc_ref(v___y_1329_);
lean_inc(v___y_1328_);
lean_inc_ref(v___y_1327_);
lean_inc(v___y_1325_);
v___x_1332_ = lean_apply_7(v_k_1324_, v_b_1326_, v___y_1325_, v___y_1327_, v___y_1328_, v___y_1329_, v___y_1330_, lean_box(0));
return v___x_1332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0___boxed(lean_object* v_k_1333_, lean_object* v___y_1334_, lean_object* v_b_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_){
_start:
{
lean_object* v_res_1341_; 
v_res_1341_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0(v_k_1333_, v___y_1334_, v_b_1335_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_);
lean_dec(v___y_1339_);
lean_dec_ref(v___y_1338_);
lean_dec(v___y_1337_);
lean_dec_ref(v___y_1336_);
lean_dec(v___y_1334_);
return v_res_1341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(lean_object* v_name_1342_, uint8_t v_bi_1343_, lean_object* v_type_1344_, lean_object* v_k_1345_, uint8_t v_kind_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_){
_start:
{
lean_object* v___f_1353_; lean_object* v___x_1354_; 
lean_inc(v___y_1347_);
v___f_1353_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1353_, 0, v_k_1345_);
lean_closure_set(v___f_1353_, 1, v___y_1347_);
v___x_1354_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1342_, v_bi_1343_, v_type_1344_, v___f_1353_, v_kind_1346_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_);
if (lean_obj_tag(v___x_1354_) == 0)
{
return v___x_1354_;
}
else
{
lean_object* v_a_1355_; lean_object* v___x_1357_; uint8_t v_isShared_1358_; uint8_t v_isSharedCheck_1362_; 
v_a_1355_ = lean_ctor_get(v___x_1354_, 0);
v_isSharedCheck_1362_ = !lean_is_exclusive(v___x_1354_);
if (v_isSharedCheck_1362_ == 0)
{
v___x_1357_ = v___x_1354_;
v_isShared_1358_ = v_isSharedCheck_1362_;
goto v_resetjp_1356_;
}
else
{
lean_inc(v_a_1355_);
lean_dec(v___x_1354_);
v___x_1357_ = lean_box(0);
v_isShared_1358_ = v_isSharedCheck_1362_;
goto v_resetjp_1356_;
}
v_resetjp_1356_:
{
lean_object* v___x_1360_; 
if (v_isShared_1358_ == 0)
{
v___x_1360_ = v___x_1357_;
goto v_reusejp_1359_;
}
else
{
lean_object* v_reuseFailAlloc_1361_; 
v_reuseFailAlloc_1361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1361_, 0, v_a_1355_);
v___x_1360_ = v_reuseFailAlloc_1361_;
goto v_reusejp_1359_;
}
v_reusejp_1359_:
{
return v___x_1360_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___boxed(lean_object* v_name_1363_, lean_object* v_bi_1364_, lean_object* v_type_1365_, lean_object* v_k_1366_, lean_object* v_kind_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_){
_start:
{
uint8_t v_bi_boxed_1374_; uint8_t v_kind_boxed_1375_; lean_object* v_res_1376_; 
v_bi_boxed_1374_ = lean_unbox(v_bi_1364_);
v_kind_boxed_1375_ = lean_unbox(v_kind_1367_);
v_res_1376_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(v_name_1363_, v_bi_boxed_1374_, v_type_1365_, v_k_1366_, v_kind_boxed_1375_, v___y_1368_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_);
lean_dec(v___y_1372_);
lean_dec_ref(v___y_1371_);
lean_dec(v___y_1370_);
lean_dec_ref(v___y_1369_);
lean_dec(v___y_1368_);
return v_res_1376_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__2(lean_object* v___x_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_){
_start:
{
lean_object* v___x_1383_; 
v___x_1383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1383_, 0, v___x_1377_);
return v___x_1383_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__2___boxed(lean_object* v___x_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_){
_start:
{
lean_object* v_res_1390_; 
v_res_1390_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__2(v___x_1384_, v___y_1385_, v___y_1386_, v___y_1387_, v___y_1388_);
lean_dec(v___y_1388_);
lean_dec_ref(v___y_1387_);
lean_dec(v___y_1386_);
lean_dec_ref(v___y_1385_);
return v_res_1390_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg(lean_object* v_name_1391_, lean_object* v_type_1392_, lean_object* v_val_1393_, lean_object* v_k_1394_, uint8_t v_nondep_1395_, uint8_t v_kind_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_){
_start:
{
lean_object* v___f_1403_; lean_object* v___x_1404_; 
lean_inc(v___y_1397_);
v___f_1403_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1403_, 0, v_k_1394_);
lean_closure_set(v___f_1403_, 1, v___y_1397_);
v___x_1404_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1391_, v_type_1392_, v_val_1393_, v___f_1403_, v_nondep_1395_, v_kind_1396_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_);
if (lean_obj_tag(v___x_1404_) == 0)
{
return v___x_1404_;
}
else
{
lean_object* v_a_1405_; lean_object* v___x_1407_; uint8_t v_isShared_1408_; uint8_t v_isSharedCheck_1412_; 
v_a_1405_ = lean_ctor_get(v___x_1404_, 0);
v_isSharedCheck_1412_ = !lean_is_exclusive(v___x_1404_);
if (v_isSharedCheck_1412_ == 0)
{
v___x_1407_ = v___x_1404_;
v_isShared_1408_ = v_isSharedCheck_1412_;
goto v_resetjp_1406_;
}
else
{
lean_inc(v_a_1405_);
lean_dec(v___x_1404_);
v___x_1407_ = lean_box(0);
v_isShared_1408_ = v_isSharedCheck_1412_;
goto v_resetjp_1406_;
}
v_resetjp_1406_:
{
lean_object* v___x_1410_; 
if (v_isShared_1408_ == 0)
{
v___x_1410_ = v___x_1407_;
goto v_reusejp_1409_;
}
else
{
lean_object* v_reuseFailAlloc_1411_; 
v_reuseFailAlloc_1411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1411_, 0, v_a_1405_);
v___x_1410_ = v_reuseFailAlloc_1411_;
goto v_reusejp_1409_;
}
v_reusejp_1409_:
{
return v___x_1410_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg___boxed(lean_object* v_name_1413_, lean_object* v_type_1414_, lean_object* v_val_1415_, lean_object* v_k_1416_, lean_object* v_nondep_1417_, lean_object* v_kind_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_){
_start:
{
uint8_t v_nondep_boxed_1425_; uint8_t v_kind_boxed_1426_; lean_object* v_res_1427_; 
v_nondep_boxed_1425_ = lean_unbox(v_nondep_1417_);
v_kind_boxed_1426_ = lean_unbox(v_kind_1418_);
v_res_1427_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg(v_name_1413_, v_type_1414_, v_val_1415_, v_k_1416_, v_nondep_boxed_1425_, v_kind_boxed_1426_, v___y_1419_, v___y_1420_, v___y_1421_, v___y_1422_, v___y_1423_);
lean_dec(v___y_1423_);
lean_dec_ref(v___y_1422_);
lean_dec(v___y_1421_);
lean_dec_ref(v___y_1420_);
lean_dec(v___y_1419_);
return v_res_1427_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0(lean_object* v_00_u03b1_1428_, lean_object* v_x_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_){
_start:
{
lean_object* v___x_1435_; lean_object* v___x_1436_; 
v___x_1435_ = lean_apply_1(v_x_1429_, lean_box(0));
v___x_1436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1436_, 0, v___x_1435_);
return v___x_1436_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0___boxed(lean_object* v_00_u03b1_1437_, lean_object* v_x_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_){
_start:
{
lean_object* v_res_1444_; 
v_res_1444_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0(v_00_u03b1_1437_, v_x_1438_, v___y_1439_, v___y_1440_, v___y_1441_, v___y_1442_);
lean_dec(v___y_1442_);
lean_dec_ref(v___y_1441_);
lean_dec(v___y_1440_);
lean_dec_ref(v___y_1439_);
return v_res_1444_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3(void){
_start:
{
lean_object* v___x_1450_; lean_object* v___x_1451_; 
v___x_1450_ = l_Lean_maxRecDepthErrorMessage;
v___x_1451_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1451_, 0, v___x_1450_);
return v___x_1451_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4(void){
_start:
{
lean_object* v___x_1452_; lean_object* v___x_1453_; 
v___x_1452_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3);
v___x_1453_ = l_Lean_MessageData_ofFormat(v___x_1452_);
return v___x_1453_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5(void){
_start:
{
lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; 
v___x_1454_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4);
v___x_1455_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__2));
v___x_1456_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1456_, 0, v___x_1455_);
lean_ctor_set(v___x_1456_, 1, v___x_1454_);
return v___x_1456_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg(lean_object* v_ref_1457_){
_start:
{
lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; 
v___x_1459_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5);
v___x_1460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1460_, 0, v_ref_1457_);
lean_ctor_set(v___x_1460_, 1, v___x_1459_);
v___x_1461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1461_, 0, v___x_1460_);
return v___x_1461_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___boxed(lean_object* v_ref_1462_, lean_object* v___y_1463_){
_start:
{
lean_object* v_res_1464_; 
v_res_1464_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg(v_ref_1462_);
return v_res_1464_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg(lean_object* v_x_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_){
_start:
{
lean_object* v___y_1473_; lean_object* v_toCold_1482_; lean_object* v_currRecDepth_1483_; lean_object* v_ref_1484_; uint16_t v_optionFlags_1485_; uint8_t v_suppressElabErrors_1486_; uint8_t v_checkDeprecated_1487_; uint8_t v_isRecordingDeps_1488_; lean_object* v_maxRecDepth_1494_; lean_object* v___x_1495_; uint8_t v___x_1496_; 
v_toCold_1482_ = lean_ctor_get(v___y_1469_, 0);
v_currRecDepth_1483_ = lean_ctor_get(v___y_1469_, 1);
v_ref_1484_ = lean_ctor_get(v___y_1469_, 2);
v_optionFlags_1485_ = lean_ctor_get_uint16(v___y_1469_, sizeof(void*)*3);
v_suppressElabErrors_1486_ = lean_ctor_get_uint8(v___y_1469_, sizeof(void*)*3 + 2);
v_checkDeprecated_1487_ = lean_ctor_get_uint8(v___y_1469_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1488_ = lean_ctor_get_uint8(v___y_1469_, sizeof(void*)*3 + 4);
v_maxRecDepth_1494_ = lean_ctor_get(v_toCold_1482_, 3);
v___x_1495_ = lean_unsigned_to_nat(0u);
v___x_1496_ = lean_nat_dec_eq(v_maxRecDepth_1494_, v___x_1495_);
if (v___x_1496_ == 0)
{
uint8_t v___x_1497_; 
v___x_1497_ = lean_nat_dec_eq(v_currRecDepth_1483_, v_maxRecDepth_1494_);
if (v___x_1497_ == 0)
{
goto v___jp_1489_;
}
else
{
lean_object* v___x_1498_; 
lean_dec_ref(v_x_1465_);
lean_inc(v_ref_1484_);
v___x_1498_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg(v_ref_1484_);
v___y_1473_ = v___x_1498_;
goto v___jp_1472_;
}
}
else
{
goto v___jp_1489_;
}
v___jp_1472_:
{
if (lean_obj_tag(v___y_1473_) == 0)
{
return v___y_1473_;
}
else
{
lean_object* v_a_1474_; lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1481_; 
v_a_1474_ = lean_ctor_get(v___y_1473_, 0);
v_isSharedCheck_1481_ = !lean_is_exclusive(v___y_1473_);
if (v_isSharedCheck_1481_ == 0)
{
v___x_1476_ = v___y_1473_;
v_isShared_1477_ = v_isSharedCheck_1481_;
goto v_resetjp_1475_;
}
else
{
lean_inc(v_a_1474_);
lean_dec(v___y_1473_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1481_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
lean_object* v___x_1479_; 
if (v_isShared_1477_ == 0)
{
v___x_1479_ = v___x_1476_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v_a_1474_);
v___x_1479_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1478_;
}
v_reusejp_1478_:
{
return v___x_1479_;
}
}
}
}
v___jp_1489_:
{
lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; 
v___x_1490_ = lean_unsigned_to_nat(1u);
v___x_1491_ = lean_nat_add(v_currRecDepth_1483_, v___x_1490_);
lean_inc(v_ref_1484_);
lean_inc_ref(v_toCold_1482_);
v___x_1492_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1492_, 0, v_toCold_1482_);
lean_ctor_set(v___x_1492_, 1, v___x_1491_);
lean_ctor_set(v___x_1492_, 2, v_ref_1484_);
lean_ctor_set_uint16(v___x_1492_, sizeof(void*)*3, v_optionFlags_1485_);
lean_ctor_set_uint8(v___x_1492_, sizeof(void*)*3 + 2, v_suppressElabErrors_1486_);
lean_ctor_set_uint8(v___x_1492_, sizeof(void*)*3 + 3, v_checkDeprecated_1487_);
lean_ctor_set_uint8(v___x_1492_, sizeof(void*)*3 + 4, v_isRecordingDeps_1488_);
lean_inc(v___y_1470_);
lean_inc(v___y_1468_);
lean_inc_ref(v___y_1467_);
lean_inc(v___y_1466_);
v___x_1493_ = lean_apply_6(v_x_1465_, v___y_1466_, v___y_1467_, v___y_1468_, v___x_1492_, v___y_1470_, lean_box(0));
v___y_1473_ = v___x_1493_;
goto v___jp_1472_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg___boxed(lean_object* v_x_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_){
_start:
{
lean_object* v_res_1506_; 
v_res_1506_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg(v_x_1499_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_, v___y_1504_);
lean_dec(v___y_1504_);
lean_dec_ref(v___y_1503_);
lean_dec(v___y_1502_);
lean_dec_ref(v___y_1501_);
lean_dec(v___y_1500_);
return v_res_1506_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg(lean_object* v_a_1507_, lean_object* v_x_1508_){
_start:
{
if (lean_obj_tag(v_x_1508_) == 0)
{
lean_object* v___x_1509_; 
v___x_1509_ = lean_box(0);
return v___x_1509_;
}
else
{
lean_object* v_key_1510_; lean_object* v_value_1511_; lean_object* v_tail_1512_; uint8_t v___x_1513_; 
v_key_1510_ = lean_ctor_get(v_x_1508_, 0);
v_value_1511_ = lean_ctor_get(v_x_1508_, 1);
v_tail_1512_ = lean_ctor_get(v_x_1508_, 2);
v___x_1513_ = l_Lean_ExprStructEq_beq(v_key_1510_, v_a_1507_);
if (v___x_1513_ == 0)
{
v_x_1508_ = v_tail_1512_;
goto _start;
}
else
{
lean_object* v___x_1515_; 
lean_inc(v_value_1511_);
v___x_1515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1515_, 0, v_value_1511_);
return v___x_1515_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg___boxed(lean_object* v_a_1516_, lean_object* v_x_1517_){
_start:
{
lean_object* v_res_1518_; 
v_res_1518_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg(v_a_1516_, v_x_1517_);
lean_dec(v_x_1517_);
lean_dec_ref(v_a_1516_);
return v_res_1518_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg(lean_object* v_m_1519_, lean_object* v_a_1520_){
_start:
{
lean_object* v_buckets_1521_; lean_object* v___x_1522_; uint64_t v___x_1523_; uint64_t v___x_1524_; uint64_t v___x_1525_; uint64_t v_fold_1526_; uint64_t v___x_1527_; uint64_t v___x_1528_; uint64_t v___x_1529_; size_t v___x_1530_; size_t v___x_1531_; size_t v___x_1532_; size_t v___x_1533_; size_t v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; 
v_buckets_1521_ = lean_ctor_get(v_m_1519_, 1);
v___x_1522_ = lean_array_get_size(v_buckets_1521_);
v___x_1523_ = l_Lean_ExprStructEq_hash(v_a_1520_);
v___x_1524_ = 32ULL;
v___x_1525_ = lean_uint64_shift_right(v___x_1523_, v___x_1524_);
v_fold_1526_ = lean_uint64_xor(v___x_1523_, v___x_1525_);
v___x_1527_ = 16ULL;
v___x_1528_ = lean_uint64_shift_right(v_fold_1526_, v___x_1527_);
v___x_1529_ = lean_uint64_xor(v_fold_1526_, v___x_1528_);
v___x_1530_ = lean_uint64_to_usize(v___x_1529_);
v___x_1531_ = lean_usize_of_nat(v___x_1522_);
v___x_1532_ = ((size_t)1ULL);
v___x_1533_ = lean_usize_sub(v___x_1531_, v___x_1532_);
v___x_1534_ = lean_usize_land(v___x_1530_, v___x_1533_);
v___x_1535_ = lean_array_uget_borrowed(v_buckets_1521_, v___x_1534_);
v___x_1536_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg(v_a_1520_, v___x_1535_);
return v___x_1536_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg___boxed(lean_object* v_m_1537_, lean_object* v_a_1538_){
_start:
{
lean_object* v_res_1539_; 
v_res_1539_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg(v_m_1537_, v_a_1538_);
lean_dec_ref(v_a_1538_);
lean_dec_ref(v_m_1537_);
return v_res_1539_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0___boxed(lean_object* v_fvars_1540_, lean_object* v_pre_1541_, lean_object* v_post_1542_, lean_object* v_usedLetOnly_1543_, lean_object* v_skipConstInApp_1544_, lean_object* v_skipInstances_1545_, lean_object* v_body_1546_, lean_object* v_x_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_){
_start:
{
uint8_t v_usedLetOnly_boxed_1554_; uint8_t v_skipConstInApp_boxed_1555_; uint8_t v_skipInstances_boxed_1556_; lean_object* v_res_1557_; 
v_usedLetOnly_boxed_1554_ = lean_unbox(v_usedLetOnly_1543_);
v_skipConstInApp_boxed_1555_ = lean_unbox(v_skipConstInApp_1544_);
v_skipInstances_boxed_1556_ = lean_unbox(v_skipInstances_1545_);
v_res_1557_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0(v_fvars_1540_, v_pre_1541_, v_post_1542_, v_usedLetOnly_boxed_1554_, v_skipConstInApp_boxed_1555_, v_skipInstances_boxed_1556_, v_body_1546_, v_x_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_);
lean_dec(v___y_1552_);
lean_dec_ref(v___y_1551_);
lean_dec(v___y_1550_);
lean_dec_ref(v___y_1549_);
lean_dec(v___y_1548_);
return v_res_1557_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0(lean_object* v_fvars_1561_, lean_object* v_pre_1562_, lean_object* v_post_1563_, uint8_t v_usedLetOnly_1564_, uint8_t v_skipConstInApp_1565_, uint8_t v_skipInstances_1566_, lean_object* v_body_1567_, lean_object* v_x_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_){
_start:
{
lean_object* v___x_1575_; lean_object* v___x_1576_; 
v___x_1575_ = lean_array_push(v_fvars_1561_, v_x_1568_);
v___x_1576_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15(v_pre_1562_, v_post_1563_, v_usedLetOnly_1564_, v_skipConstInApp_1565_, v_skipInstances_1566_, v___x_1575_, v_body_1567_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_);
return v___x_1576_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0___boxed(lean_object* v_fvars_1577_, lean_object* v_pre_1578_, lean_object* v_post_1579_, lean_object* v_usedLetOnly_1580_, lean_object* v_skipConstInApp_1581_, lean_object* v_skipInstances_1582_, lean_object* v_body_1583_, lean_object* v_x_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_){
_start:
{
uint8_t v_usedLetOnly_boxed_1591_; uint8_t v_skipConstInApp_boxed_1592_; uint8_t v_skipInstances_boxed_1593_; lean_object* v_res_1594_; 
v_usedLetOnly_boxed_1591_ = lean_unbox(v_usedLetOnly_1580_);
v_skipConstInApp_boxed_1592_ = lean_unbox(v_skipConstInApp_1581_);
v_skipInstances_boxed_1593_ = lean_unbox(v_skipInstances_1582_);
v_res_1594_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0(v_fvars_1577_, v_pre_1578_, v_post_1579_, v_usedLetOnly_boxed_1591_, v_skipConstInApp_boxed_1592_, v_skipInstances_boxed_1593_, v_body_1583_, v_x_1584_, v___y_1585_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_);
lean_dec(v___y_1589_);
lean_dec_ref(v___y_1588_);
lean_dec(v___y_1587_);
lean_dec_ref(v___y_1586_);
lean_dec(v___y_1585_);
return v_res_1594_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(lean_object* v_pre_1595_, lean_object* v_post_1596_, uint8_t v_usedLetOnly_1597_, uint8_t v_skipConstInApp_1598_, uint8_t v_skipInstances_1599_, lean_object* v_e_1600_, lean_object* v_a_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_){
_start:
{
lean_object* v___x_1607_; 
lean_inc_ref(v_post_1596_);
lean_inc(v___y_1605_);
lean_inc_ref(v___y_1604_);
lean_inc(v___y_1603_);
lean_inc_ref(v___y_1602_);
lean_inc_ref(v_e_1600_);
v___x_1607_ = lean_apply_6(v_post_1596_, v_e_1600_, v___y_1602_, v___y_1603_, v___y_1604_, v___y_1605_, lean_box(0));
if (lean_obj_tag(v___x_1607_) == 0)
{
lean_object* v_a_1608_; lean_object* v___x_1610_; uint8_t v_isShared_1611_; uint8_t v_isSharedCheck_1626_; 
v_a_1608_ = lean_ctor_get(v___x_1607_, 0);
v_isSharedCheck_1626_ = !lean_is_exclusive(v___x_1607_);
if (v_isSharedCheck_1626_ == 0)
{
v___x_1610_ = v___x_1607_;
v_isShared_1611_ = v_isSharedCheck_1626_;
goto v_resetjp_1609_;
}
else
{
lean_inc(v_a_1608_);
lean_dec(v___x_1607_);
v___x_1610_ = lean_box(0);
v_isShared_1611_ = v_isSharedCheck_1626_;
goto v_resetjp_1609_;
}
v_resetjp_1609_:
{
switch(lean_obj_tag(v_a_1608_))
{
case 0:
{
lean_object* v_e_1612_; lean_object* v___x_1614_; 
lean_dec_ref(v_e_1600_);
lean_dec_ref(v_post_1596_);
lean_dec_ref(v_pre_1595_);
v_e_1612_ = lean_ctor_get(v_a_1608_, 0);
lean_inc_ref(v_e_1612_);
lean_dec_ref_known(v_a_1608_, 1);
if (v_isShared_1611_ == 0)
{
lean_ctor_set(v___x_1610_, 0, v_e_1612_);
v___x_1614_ = v___x_1610_;
goto v_reusejp_1613_;
}
else
{
lean_object* v_reuseFailAlloc_1615_; 
v_reuseFailAlloc_1615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1615_, 0, v_e_1612_);
v___x_1614_ = v_reuseFailAlloc_1615_;
goto v_reusejp_1613_;
}
v_reusejp_1613_:
{
return v___x_1614_;
}
}
case 1:
{
lean_object* v_e_1616_; lean_object* v___x_1617_; 
lean_del_object(v___x_1610_);
lean_dec_ref(v_e_1600_);
v_e_1616_ = lean_ctor_get(v_a_1608_, 0);
lean_inc_ref(v_e_1616_);
lean_dec_ref_known(v_a_1608_, 1);
v___x_1617_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1595_, v_post_1596_, v_usedLetOnly_1597_, v_skipConstInApp_1598_, v_skipInstances_1599_, v_e_1616_, v_a_1601_, v___y_1602_, v___y_1603_, v___y_1604_, v___y_1605_);
return v___x_1617_;
}
default: 
{
lean_object* v_e_x3f_1618_; 
lean_dec_ref(v_post_1596_);
lean_dec_ref(v_pre_1595_);
v_e_x3f_1618_ = lean_ctor_get(v_a_1608_, 0);
lean_inc(v_e_x3f_1618_);
lean_dec_ref_known(v_a_1608_, 1);
if (lean_obj_tag(v_e_x3f_1618_) == 0)
{
lean_object* v___x_1620_; 
if (v_isShared_1611_ == 0)
{
lean_ctor_set(v___x_1610_, 0, v_e_1600_);
v___x_1620_ = v___x_1610_;
goto v_reusejp_1619_;
}
else
{
lean_object* v_reuseFailAlloc_1621_; 
v_reuseFailAlloc_1621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1621_, 0, v_e_1600_);
v___x_1620_ = v_reuseFailAlloc_1621_;
goto v_reusejp_1619_;
}
v_reusejp_1619_:
{
return v___x_1620_;
}
}
else
{
lean_object* v_val_1622_; lean_object* v___x_1624_; 
lean_dec_ref(v_e_1600_);
v_val_1622_ = lean_ctor_get(v_e_x3f_1618_, 0);
lean_inc(v_val_1622_);
lean_dec_ref_known(v_e_x3f_1618_, 1);
if (v_isShared_1611_ == 0)
{
lean_ctor_set(v___x_1610_, 0, v_val_1622_);
v___x_1624_ = v___x_1610_;
goto v_reusejp_1623_;
}
else
{
lean_object* v_reuseFailAlloc_1625_; 
v_reuseFailAlloc_1625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1625_, 0, v_val_1622_);
v___x_1624_ = v_reuseFailAlloc_1625_;
goto v_reusejp_1623_;
}
v_reusejp_1623_:
{
return v___x_1624_;
}
}
}
}
}
}
else
{
lean_object* v_a_1627_; lean_object* v___x_1629_; uint8_t v_isShared_1630_; uint8_t v_isSharedCheck_1634_; 
lean_dec_ref(v_e_1600_);
lean_dec_ref(v_post_1596_);
lean_dec_ref(v_pre_1595_);
v_a_1627_ = lean_ctor_get(v___x_1607_, 0);
v_isSharedCheck_1634_ = !lean_is_exclusive(v___x_1607_);
if (v_isSharedCheck_1634_ == 0)
{
v___x_1629_ = v___x_1607_;
v_isShared_1630_ = v_isSharedCheck_1634_;
goto v_resetjp_1628_;
}
else
{
lean_inc(v_a_1627_);
lean_dec(v___x_1607_);
v___x_1629_ = lean_box(0);
v_isShared_1630_ = v_isSharedCheck_1634_;
goto v_resetjp_1628_;
}
v_resetjp_1628_:
{
lean_object* v___x_1632_; 
if (v_isShared_1630_ == 0)
{
v___x_1632_ = v___x_1629_;
goto v_reusejp_1631_;
}
else
{
lean_object* v_reuseFailAlloc_1633_; 
v_reuseFailAlloc_1633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1633_, 0, v_a_1627_);
v___x_1632_ = v_reuseFailAlloc_1633_;
goto v_reusejp_1631_;
}
v_reusejp_1631_:
{
return v___x_1632_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15(lean_object* v_pre_1635_, lean_object* v_post_1636_, uint8_t v_usedLetOnly_1637_, uint8_t v_skipConstInApp_1638_, uint8_t v_skipInstances_1639_, lean_object* v_fvars_1640_, lean_object* v_e_1641_, lean_object* v_a_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_){
_start:
{
if (lean_obj_tag(v_e_1641_) == 6)
{
lean_object* v_binderName_1648_; lean_object* v_binderType_1649_; lean_object* v_body_1650_; uint8_t v_binderInfo_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___f_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; 
v_binderName_1648_ = lean_ctor_get(v_e_1641_, 0);
lean_inc(v_binderName_1648_);
v_binderType_1649_ = lean_ctor_get(v_e_1641_, 1);
lean_inc_ref(v_binderType_1649_);
v_body_1650_ = lean_ctor_get(v_e_1641_, 2);
lean_inc_ref(v_body_1650_);
v_binderInfo_1651_ = lean_ctor_get_uint8(v_e_1641_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_1641_, 3);
v___x_1652_ = lean_box(v_usedLetOnly_1637_);
v___x_1653_ = lean_box(v_skipConstInApp_1638_);
v___x_1654_ = lean_box(v_skipInstances_1639_);
lean_inc_ref(v_post_1636_);
lean_inc_ref(v_pre_1635_);
lean_inc_ref(v_fvars_1640_);
v___f_1655_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0___boxed), 14, 7);
lean_closure_set(v___f_1655_, 0, v_fvars_1640_);
lean_closure_set(v___f_1655_, 1, v_pre_1635_);
lean_closure_set(v___f_1655_, 2, v_post_1636_);
lean_closure_set(v___f_1655_, 3, v___x_1652_);
lean_closure_set(v___f_1655_, 4, v___x_1653_);
lean_closure_set(v___f_1655_, 5, v___x_1654_);
lean_closure_set(v___f_1655_, 6, v_body_1650_);
v___x_1656_ = lean_expr_instantiate_rev(v_binderType_1649_, v_fvars_1640_);
lean_dec_ref(v_fvars_1640_);
lean_dec_ref(v_binderType_1649_);
v___x_1657_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1635_, v_post_1636_, v_usedLetOnly_1637_, v_skipConstInApp_1638_, v_skipInstances_1639_, v___x_1656_, v_a_1642_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_);
if (lean_obj_tag(v___x_1657_) == 0)
{
lean_object* v_a_1658_; uint8_t v___x_1659_; lean_object* v___x_1660_; 
v_a_1658_ = lean_ctor_get(v___x_1657_, 0);
lean_inc(v_a_1658_);
lean_dec_ref_known(v___x_1657_, 1);
v___x_1659_ = 0;
v___x_1660_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(v_binderName_1648_, v_binderInfo_1651_, v_a_1658_, v___f_1655_, v___x_1659_, v_a_1642_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_);
return v___x_1660_;
}
else
{
lean_dec_ref(v___f_1655_);
lean_dec(v_binderName_1648_);
return v___x_1657_;
}
}
else
{
lean_object* v___x_1661_; lean_object* v___x_1662_; 
v___x_1661_ = lean_expr_instantiate_rev(v_e_1641_, v_fvars_1640_);
lean_dec_ref(v_e_1641_);
lean_inc_ref(v_post_1636_);
lean_inc_ref(v_pre_1635_);
v___x_1662_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1635_, v_post_1636_, v_usedLetOnly_1637_, v_skipConstInApp_1638_, v_skipInstances_1639_, v___x_1661_, v_a_1642_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_);
if (lean_obj_tag(v___x_1662_) == 0)
{
lean_object* v_a_1663_; uint8_t v___x_1664_; uint8_t v___x_1665_; uint8_t v___x_1666_; lean_object* v___x_1667_; 
v_a_1663_ = lean_ctor_get(v___x_1662_, 0);
lean_inc(v_a_1663_);
lean_dec_ref_known(v___x_1662_, 1);
v___x_1664_ = 0;
v___x_1665_ = 1;
v___x_1666_ = 1;
v___x_1667_ = l_Lean_Meta_mkLambdaFVars(v_fvars_1640_, v_a_1663_, v___x_1664_, v_usedLetOnly_1637_, v___x_1664_, v___x_1665_, v___x_1666_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_);
lean_dec_ref(v_fvars_1640_);
if (lean_obj_tag(v___x_1667_) == 0)
{
lean_object* v_a_1668_; lean_object* v___x_1669_; 
v_a_1668_ = lean_ctor_get(v___x_1667_, 0);
lean_inc(v_a_1668_);
lean_dec_ref_known(v___x_1667_, 1);
v___x_1669_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_1635_, v_post_1636_, v_usedLetOnly_1637_, v_skipConstInApp_1638_, v_skipInstances_1639_, v_a_1668_, v_a_1642_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_);
return v___x_1669_;
}
else
{
lean_dec_ref(v_post_1636_);
lean_dec_ref(v_pre_1635_);
return v___x_1667_;
}
}
else
{
lean_dec_ref(v_fvars_1640_);
lean_dec_ref(v_post_1636_);
lean_dec_ref(v_pre_1635_);
return v___x_1662_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0(lean_object* v_fvars_1670_, lean_object* v_pre_1671_, lean_object* v_post_1672_, uint8_t v_usedLetOnly_1673_, uint8_t v_skipConstInApp_1674_, uint8_t v_skipInstances_1675_, lean_object* v_body_1676_, lean_object* v_x_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_){
_start:
{
lean_object* v___x_1684_; lean_object* v___x_1685_; 
v___x_1684_ = lean_array_push(v_fvars_1670_, v_x_1677_);
v___x_1685_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16(v_pre_1671_, v_post_1672_, v_usedLetOnly_1673_, v_skipConstInApp_1674_, v_skipInstances_1675_, v___x_1684_, v_body_1676_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_);
return v___x_1685_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0___boxed(lean_object* v_fvars_1686_, lean_object* v_pre_1687_, lean_object* v_post_1688_, lean_object* v_usedLetOnly_1689_, lean_object* v_skipConstInApp_1690_, lean_object* v_skipInstances_1691_, lean_object* v_body_1692_, lean_object* v_x_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_){
_start:
{
uint8_t v_usedLetOnly_boxed_1700_; uint8_t v_skipConstInApp_boxed_1701_; uint8_t v_skipInstances_boxed_1702_; lean_object* v_res_1703_; 
v_usedLetOnly_boxed_1700_ = lean_unbox(v_usedLetOnly_1689_);
v_skipConstInApp_boxed_1701_ = lean_unbox(v_skipConstInApp_1690_);
v_skipInstances_boxed_1702_ = lean_unbox(v_skipInstances_1691_);
v_res_1703_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0(v_fvars_1686_, v_pre_1687_, v_post_1688_, v_usedLetOnly_boxed_1700_, v_skipConstInApp_boxed_1701_, v_skipInstances_boxed_1702_, v_body_1692_, v_x_1693_, v___y_1694_, v___y_1695_, v___y_1696_, v___y_1697_, v___y_1698_);
lean_dec(v___y_1698_);
lean_dec_ref(v___y_1697_);
lean_dec(v___y_1696_);
lean_dec_ref(v___y_1695_);
lean_dec(v___y_1694_);
return v_res_1703_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16(lean_object* v_pre_1704_, lean_object* v_post_1705_, uint8_t v_usedLetOnly_1706_, uint8_t v_skipConstInApp_1707_, uint8_t v_skipInstances_1708_, lean_object* v_fvars_1709_, lean_object* v_e_1710_, lean_object* v_a_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_){
_start:
{
if (lean_obj_tag(v_e_1710_) == 8)
{
lean_object* v_declName_1717_; lean_object* v_type_1718_; lean_object* v_value_1719_; lean_object* v_body_1720_; uint8_t v_nondep_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___f_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; 
v_declName_1717_ = lean_ctor_get(v_e_1710_, 0);
lean_inc(v_declName_1717_);
v_type_1718_ = lean_ctor_get(v_e_1710_, 1);
lean_inc_ref(v_type_1718_);
v_value_1719_ = lean_ctor_get(v_e_1710_, 2);
lean_inc_ref(v_value_1719_);
v_body_1720_ = lean_ctor_get(v_e_1710_, 3);
lean_inc_ref(v_body_1720_);
v_nondep_1721_ = lean_ctor_get_uint8(v_e_1710_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_1710_, 4);
v___x_1722_ = lean_box(v_usedLetOnly_1706_);
v___x_1723_ = lean_box(v_skipConstInApp_1707_);
v___x_1724_ = lean_box(v_skipInstances_1708_);
lean_inc_ref_n(v_post_1705_, 2);
lean_inc_ref_n(v_pre_1704_, 2);
lean_inc_ref(v_fvars_1709_);
v___f_1725_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0___boxed), 14, 7);
lean_closure_set(v___f_1725_, 0, v_fvars_1709_);
lean_closure_set(v___f_1725_, 1, v_pre_1704_);
lean_closure_set(v___f_1725_, 2, v_post_1705_);
lean_closure_set(v___f_1725_, 3, v___x_1722_);
lean_closure_set(v___f_1725_, 4, v___x_1723_);
lean_closure_set(v___f_1725_, 5, v___x_1724_);
lean_closure_set(v___f_1725_, 6, v_body_1720_);
v___x_1726_ = lean_expr_instantiate_rev(v_type_1718_, v_fvars_1709_);
lean_dec_ref(v_type_1718_);
v___x_1727_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1704_, v_post_1705_, v_usedLetOnly_1706_, v_skipConstInApp_1707_, v_skipInstances_1708_, v___x_1726_, v_a_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_);
if (lean_obj_tag(v___x_1727_) == 0)
{
lean_object* v_a_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; 
v_a_1728_ = lean_ctor_get(v___x_1727_, 0);
lean_inc(v_a_1728_);
lean_dec_ref_known(v___x_1727_, 1);
v___x_1729_ = lean_expr_instantiate_rev(v_value_1719_, v_fvars_1709_);
lean_dec_ref(v_fvars_1709_);
lean_dec_ref(v_value_1719_);
v___x_1730_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1704_, v_post_1705_, v_usedLetOnly_1706_, v_skipConstInApp_1707_, v_skipInstances_1708_, v___x_1729_, v_a_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_);
if (lean_obj_tag(v___x_1730_) == 0)
{
lean_object* v_a_1731_; uint8_t v___x_1732_; lean_object* v___x_1733_; 
v_a_1731_ = lean_ctor_get(v___x_1730_, 0);
lean_inc(v_a_1731_);
lean_dec_ref_known(v___x_1730_, 1);
v___x_1732_ = 0;
v___x_1733_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg(v_declName_1717_, v_a_1728_, v_a_1731_, v___f_1725_, v_nondep_1721_, v___x_1732_, v_a_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_);
return v___x_1733_;
}
else
{
lean_dec(v_a_1728_);
lean_dec_ref(v___f_1725_);
lean_dec(v_declName_1717_);
return v___x_1730_;
}
}
else
{
lean_dec_ref(v___f_1725_);
lean_dec_ref(v_value_1719_);
lean_dec(v_declName_1717_);
lean_dec_ref(v_fvars_1709_);
lean_dec_ref(v_post_1705_);
lean_dec_ref(v_pre_1704_);
return v___x_1727_;
}
}
else
{
lean_object* v___x_1734_; lean_object* v___x_1735_; 
v___x_1734_ = lean_expr_instantiate_rev(v_e_1710_, v_fvars_1709_);
lean_dec_ref(v_e_1710_);
lean_inc_ref(v_post_1705_);
lean_inc_ref(v_pre_1704_);
v___x_1735_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1704_, v_post_1705_, v_usedLetOnly_1706_, v_skipConstInApp_1707_, v_skipInstances_1708_, v___x_1734_, v_a_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_);
if (lean_obj_tag(v___x_1735_) == 0)
{
lean_object* v_a_1736_; uint8_t v___x_1737_; uint8_t v___x_1738_; lean_object* v___x_1739_; 
v_a_1736_ = lean_ctor_get(v___x_1735_, 0);
lean_inc(v_a_1736_);
lean_dec_ref_known(v___x_1735_, 1);
v___x_1737_ = 0;
v___x_1738_ = 1;
v___x_1739_ = l_Lean_Meta_mkLetFVars(v_fvars_1709_, v_a_1736_, v_usedLetOnly_1706_, v___x_1737_, v___x_1738_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_);
lean_dec_ref(v_fvars_1709_);
if (lean_obj_tag(v___x_1739_) == 0)
{
lean_object* v_a_1740_; lean_object* v___x_1741_; 
v_a_1740_ = lean_ctor_get(v___x_1739_, 0);
lean_inc(v_a_1740_);
lean_dec_ref_known(v___x_1739_, 1);
v___x_1741_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_1704_, v_post_1705_, v_usedLetOnly_1706_, v_skipConstInApp_1707_, v_skipInstances_1708_, v_a_1740_, v_a_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_);
return v___x_1741_;
}
else
{
lean_dec_ref(v_post_1705_);
lean_dec_ref(v_pre_1704_);
return v___x_1739_;
}
}
else
{
lean_dec_ref(v_fvars_1709_);
lean_dec_ref(v_post_1705_);
lean_dec_ref(v_pre_1704_);
return v___x_1735_;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1742_; lean_object* v_dummy_1743_; 
v___x_1742_ = lean_box(0);
v_dummy_1743_ = l_Lean_Expr_sort___override(v___x_1742_);
return v_dummy_1743_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10(lean_object* v_pre_1744_, lean_object* v_post_1745_, uint8_t v_usedLetOnly_1746_, uint8_t v_skipConstInApp_1747_, uint8_t v_skipInstances_1748_, size_t v_sz_1749_, size_t v_i_1750_, lean_object* v_bs_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_){
_start:
{
uint8_t v___x_1758_; 
v___x_1758_ = lean_usize_dec_lt(v_i_1750_, v_sz_1749_);
if (v___x_1758_ == 0)
{
lean_object* v___x_1759_; 
lean_dec_ref(v_post_1745_);
lean_dec_ref(v_pre_1744_);
v___x_1759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1759_, 0, v_bs_1751_);
return v___x_1759_;
}
else
{
lean_object* v_v_1760_; lean_object* v___x_1761_; lean_object* v_bs_x27_1762_; lean_object* v___x_1763_; 
v_v_1760_ = lean_array_uget(v_bs_1751_, v_i_1750_);
v___x_1761_ = lean_unsigned_to_nat(0u);
v_bs_x27_1762_ = lean_array_uset(v_bs_1751_, v_i_1750_, v___x_1761_);
lean_inc_ref(v_post_1745_);
lean_inc_ref(v_pre_1744_);
v___x_1763_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1744_, v_post_1745_, v_usedLetOnly_1746_, v_skipConstInApp_1747_, v_skipInstances_1748_, v_v_1760_, v___y_1752_, v___y_1753_, v___y_1754_, v___y_1755_, v___y_1756_);
if (lean_obj_tag(v___x_1763_) == 0)
{
lean_object* v_a_1764_; size_t v___x_1765_; size_t v___x_1766_; lean_object* v___x_1767_; 
v_a_1764_ = lean_ctor_get(v___x_1763_, 0);
lean_inc(v_a_1764_);
lean_dec_ref_known(v___x_1763_, 1);
v___x_1765_ = ((size_t)1ULL);
v___x_1766_ = lean_usize_add(v_i_1750_, v___x_1765_);
v___x_1767_ = lean_array_uset(v_bs_x27_1762_, v_i_1750_, v_a_1764_);
v_i_1750_ = v___x_1766_;
v_bs_1751_ = v___x_1767_;
goto _start;
}
else
{
lean_object* v_a_1769_; lean_object* v___x_1771_; uint8_t v_isShared_1772_; uint8_t v_isSharedCheck_1776_; 
lean_dec_ref(v_bs_x27_1762_);
lean_dec_ref(v_post_1745_);
lean_dec_ref(v_pre_1744_);
v_a_1769_ = lean_ctor_get(v___x_1763_, 0);
v_isSharedCheck_1776_ = !lean_is_exclusive(v___x_1763_);
if (v_isSharedCheck_1776_ == 0)
{
v___x_1771_ = v___x_1763_;
v_isShared_1772_ = v_isSharedCheck_1776_;
goto v_resetjp_1770_;
}
else
{
lean_inc(v_a_1769_);
lean_dec(v___x_1763_);
v___x_1771_ = lean_box(0);
v_isShared_1772_ = v_isSharedCheck_1776_;
goto v_resetjp_1770_;
}
v_resetjp_1770_:
{
lean_object* v___x_1774_; 
if (v_isShared_1772_ == 0)
{
v___x_1774_ = v___x_1771_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1775_; 
v_reuseFailAlloc_1775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1775_, 0, v_a_1769_);
v___x_1774_ = v_reuseFailAlloc_1775_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
return v___x_1774_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__0(lean_object* v_pre_1777_, lean_object* v_post_1778_, uint8_t v_usedLetOnly_1779_, uint8_t v_skipConstInApp_1780_, uint8_t v_skipInstances_1781_, lean_object* v___x_1782_, lean_object* v___y_1783_, lean_object* v_b_1784_, lean_object* v_a_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_){
_start:
{
lean_object* v___x_1791_; 
v___x_1791_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1777_, v_post_1778_, v_usedLetOnly_1779_, v_skipConstInApp_1780_, v_skipInstances_1781_, v___x_1782_, v___y_1783_, v___y_1786_, v___y_1787_, v___y_1788_, v___y_1789_);
if (lean_obj_tag(v___x_1791_) == 0)
{
lean_object* v_a_1792_; lean_object* v___x_1794_; uint8_t v_isShared_1795_; uint8_t v_isSharedCheck_1801_; 
v_a_1792_ = lean_ctor_get(v___x_1791_, 0);
v_isSharedCheck_1801_ = !lean_is_exclusive(v___x_1791_);
if (v_isSharedCheck_1801_ == 0)
{
v___x_1794_ = v___x_1791_;
v_isShared_1795_ = v_isSharedCheck_1801_;
goto v_resetjp_1793_;
}
else
{
lean_inc(v_a_1792_);
lean_dec(v___x_1791_);
v___x_1794_ = lean_box(0);
v_isShared_1795_ = v_isSharedCheck_1801_;
goto v_resetjp_1793_;
}
v_resetjp_1793_:
{
lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1799_; 
v___x_1796_ = lean_array_fset(v_b_1784_, v_a_1785_, v_a_1792_);
v___x_1797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1797_, 0, v___x_1796_);
if (v_isShared_1795_ == 0)
{
lean_ctor_set(v___x_1794_, 0, v___x_1797_);
v___x_1799_ = v___x_1794_;
goto v_reusejp_1798_;
}
else
{
lean_object* v_reuseFailAlloc_1800_; 
v_reuseFailAlloc_1800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1800_, 0, v___x_1797_);
v___x_1799_ = v_reuseFailAlloc_1800_;
goto v_reusejp_1798_;
}
v_reusejp_1798_:
{
return v___x_1799_;
}
}
}
else
{
lean_object* v_a_1802_; lean_object* v___x_1804_; uint8_t v_isShared_1805_; uint8_t v_isSharedCheck_1809_; 
lean_dec_ref(v_b_1784_);
v_a_1802_ = lean_ctor_get(v___x_1791_, 0);
v_isSharedCheck_1809_ = !lean_is_exclusive(v___x_1791_);
if (v_isSharedCheck_1809_ == 0)
{
v___x_1804_ = v___x_1791_;
v_isShared_1805_ = v_isSharedCheck_1809_;
goto v_resetjp_1803_;
}
else
{
lean_inc(v_a_1802_);
lean_dec(v___x_1791_);
v___x_1804_ = lean_box(0);
v_isShared_1805_ = v_isSharedCheck_1809_;
goto v_resetjp_1803_;
}
v_resetjp_1803_:
{
lean_object* v___x_1807_; 
if (v_isShared_1805_ == 0)
{
v___x_1807_ = v___x_1804_;
goto v_reusejp_1806_;
}
else
{
lean_object* v_reuseFailAlloc_1808_; 
v_reuseFailAlloc_1808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1808_, 0, v_a_1802_);
v___x_1807_ = v_reuseFailAlloc_1808_;
goto v_reusejp_1806_;
}
v_reusejp_1806_:
{
return v___x_1807_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__0___boxed(lean_object* v_pre_1810_, lean_object* v_post_1811_, lean_object* v_usedLetOnly_1812_, lean_object* v_skipConstInApp_1813_, lean_object* v_skipInstances_1814_, lean_object* v___x_1815_, lean_object* v___y_1816_, lean_object* v_b_1817_, lean_object* v_a_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_, lean_object* v___y_1823_){
_start:
{
uint8_t v_usedLetOnly_boxed_1824_; uint8_t v_skipConstInApp_boxed_1825_; uint8_t v_skipInstances_boxed_1826_; lean_object* v_res_1827_; 
v_usedLetOnly_boxed_1824_ = lean_unbox(v_usedLetOnly_1812_);
v_skipConstInApp_boxed_1825_ = lean_unbox(v_skipConstInApp_1813_);
v_skipInstances_boxed_1826_ = lean_unbox(v_skipInstances_1814_);
v_res_1827_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__0(v_pre_1810_, v_post_1811_, v_usedLetOnly_boxed_1824_, v_skipConstInApp_boxed_1825_, v_skipInstances_boxed_1826_, v___x_1815_, v___y_1816_, v_b_1817_, v_a_1818_, v___y_1819_, v___y_1820_, v___y_1821_, v___y_1822_);
lean_dec(v___y_1822_);
lean_dec_ref(v___y_1821_);
lean_dec(v___y_1820_);
lean_dec_ref(v___y_1819_);
lean_dec(v_a_1818_);
lean_dec(v___y_1816_);
return v_res_1827_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg(lean_object* v_upperBound_1828_, lean_object* v___x_1829_, lean_object* v_pre_1830_, lean_object* v_post_1831_, uint8_t v_usedLetOnly_1832_, uint8_t v_skipConstInApp_1833_, uint8_t v_skipInstances_1834_, lean_object* v_a_1835_, lean_object* v_b_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_){
_start:
{
lean_object* v___y_1844_; uint8_t v___x_1867_; 
v___x_1867_ = lean_nat_dec_lt(v_a_1835_, v_upperBound_1828_);
if (v___x_1867_ == 0)
{
lean_object* v___x_1868_; 
lean_dec(v_a_1835_);
lean_dec_ref(v_post_1831_);
lean_dec_ref(v_pre_1830_);
v___x_1868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1868_, 0, v_b_1836_);
return v___x_1868_;
}
else
{
lean_object* v___x_1869_; lean_object* v___x_1870_; uint8_t v___x_1871_; 
v___x_1869_ = lean_array_fget_borrowed(v_b_1836_, v_a_1835_);
v___x_1870_ = lean_array_get_size(v___x_1829_);
v___x_1871_ = lean_nat_dec_lt(v_a_1835_, v___x_1870_);
if (v___x_1871_ == 0)
{
lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___f_1875_; 
lean_inc(v___x_1869_);
v___x_1872_ = lean_box(v_usedLetOnly_1832_);
v___x_1873_ = lean_box(v_skipConstInApp_1833_);
v___x_1874_ = lean_box(v_skipInstances_1834_);
lean_inc(v_a_1835_);
lean_inc(v___y_1837_);
lean_inc_ref(v_post_1831_);
lean_inc_ref(v_pre_1830_);
v___f_1875_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_1875_, 0, v_pre_1830_);
lean_closure_set(v___f_1875_, 1, v_post_1831_);
lean_closure_set(v___f_1875_, 2, v___x_1872_);
lean_closure_set(v___f_1875_, 3, v___x_1873_);
lean_closure_set(v___f_1875_, 4, v___x_1874_);
lean_closure_set(v___f_1875_, 5, v___x_1869_);
lean_closure_set(v___f_1875_, 6, v___y_1837_);
lean_closure_set(v___f_1875_, 7, v_b_1836_);
lean_closure_set(v___f_1875_, 8, v_a_1835_);
v___y_1844_ = v___f_1875_;
goto v___jp_1843_;
}
else
{
lean_object* v___x_1876_; uint8_t v_isInstance_1877_; 
v___x_1876_ = lean_array_fget_borrowed(v___x_1829_, v_a_1835_);
v_isInstance_1877_ = lean_ctor_get_uint8(v___x_1876_, sizeof(void*)*1 + 4);
if (v_isInstance_1877_ == 0)
{
lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___f_1881_; 
lean_inc(v___x_1869_);
v___x_1878_ = lean_box(v_usedLetOnly_1832_);
v___x_1879_ = lean_box(v_skipConstInApp_1833_);
v___x_1880_ = lean_box(v_skipInstances_1834_);
lean_inc(v_a_1835_);
lean_inc(v___y_1837_);
lean_inc_ref(v_post_1831_);
lean_inc_ref(v_pre_1830_);
v___f_1881_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_1881_, 0, v_pre_1830_);
lean_closure_set(v___f_1881_, 1, v_post_1831_);
lean_closure_set(v___f_1881_, 2, v___x_1878_);
lean_closure_set(v___f_1881_, 3, v___x_1879_);
lean_closure_set(v___f_1881_, 4, v___x_1880_);
lean_closure_set(v___f_1881_, 5, v___x_1869_);
lean_closure_set(v___f_1881_, 6, v___y_1837_);
lean_closure_set(v___f_1881_, 7, v_b_1836_);
lean_closure_set(v___f_1881_, 8, v_a_1835_);
v___y_1844_ = v___f_1881_;
goto v___jp_1843_;
}
else
{
lean_object* v___x_1882_; lean_object* v___f_1883_; 
v___x_1882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1882_, 0, v_b_1836_);
v___f_1883_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__2___boxed), 6, 1);
lean_closure_set(v___f_1883_, 0, v___x_1882_);
v___y_1844_ = v___f_1883_;
goto v___jp_1843_;
}
}
}
v___jp_1843_:
{
lean_object* v___x_1845_; 
lean_inc(v___y_1841_);
lean_inc_ref(v___y_1840_);
lean_inc(v___y_1839_);
lean_inc_ref(v___y_1838_);
v___x_1845_ = lean_apply_5(v___y_1844_, v___y_1838_, v___y_1839_, v___y_1840_, v___y_1841_, lean_box(0));
if (lean_obj_tag(v___x_1845_) == 0)
{
lean_object* v_a_1846_; lean_object* v___x_1848_; uint8_t v_isShared_1849_; uint8_t v_isSharedCheck_1858_; 
v_a_1846_ = lean_ctor_get(v___x_1845_, 0);
v_isSharedCheck_1858_ = !lean_is_exclusive(v___x_1845_);
if (v_isSharedCheck_1858_ == 0)
{
v___x_1848_ = v___x_1845_;
v_isShared_1849_ = v_isSharedCheck_1858_;
goto v_resetjp_1847_;
}
else
{
lean_inc(v_a_1846_);
lean_dec(v___x_1845_);
v___x_1848_ = lean_box(0);
v_isShared_1849_ = v_isSharedCheck_1858_;
goto v_resetjp_1847_;
}
v_resetjp_1847_:
{
if (lean_obj_tag(v_a_1846_) == 0)
{
lean_object* v_a_1850_; lean_object* v___x_1852_; 
lean_dec(v_a_1835_);
lean_dec_ref(v_post_1831_);
lean_dec_ref(v_pre_1830_);
v_a_1850_ = lean_ctor_get(v_a_1846_, 0);
lean_inc(v_a_1850_);
lean_dec_ref_known(v_a_1846_, 1);
if (v_isShared_1849_ == 0)
{
lean_ctor_set(v___x_1848_, 0, v_a_1850_);
v___x_1852_ = v___x_1848_;
goto v_reusejp_1851_;
}
else
{
lean_object* v_reuseFailAlloc_1853_; 
v_reuseFailAlloc_1853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1853_, 0, v_a_1850_);
v___x_1852_ = v_reuseFailAlloc_1853_;
goto v_reusejp_1851_;
}
v_reusejp_1851_:
{
return v___x_1852_;
}
}
else
{
lean_object* v_a_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; 
lean_del_object(v___x_1848_);
v_a_1854_ = lean_ctor_get(v_a_1846_, 0);
lean_inc(v_a_1854_);
lean_dec_ref_known(v_a_1846_, 1);
v___x_1855_ = lean_unsigned_to_nat(1u);
v___x_1856_ = lean_nat_add(v_a_1835_, v___x_1855_);
lean_dec(v_a_1835_);
v_a_1835_ = v___x_1856_;
v_b_1836_ = v_a_1854_;
goto _start;
}
}
}
else
{
lean_object* v_a_1859_; lean_object* v___x_1861_; uint8_t v_isShared_1862_; uint8_t v_isSharedCheck_1866_; 
lean_dec(v_a_1835_);
lean_dec_ref(v_post_1831_);
lean_dec_ref(v_pre_1830_);
v_a_1859_ = lean_ctor_get(v___x_1845_, 0);
v_isSharedCheck_1866_ = !lean_is_exclusive(v___x_1845_);
if (v_isSharedCheck_1866_ == 0)
{
v___x_1861_ = v___x_1845_;
v_isShared_1862_ = v_isSharedCheck_1866_;
goto v_resetjp_1860_;
}
else
{
lean_inc(v_a_1859_);
lean_dec(v___x_1845_);
v___x_1861_ = lean_box(0);
v_isShared_1862_ = v_isSharedCheck_1866_;
goto v_resetjp_1860_;
}
v_resetjp_1860_:
{
lean_object* v___x_1864_; 
if (v_isShared_1862_ == 0)
{
v___x_1864_ = v___x_1861_;
goto v_reusejp_1863_;
}
else
{
lean_object* v_reuseFailAlloc_1865_; 
v_reuseFailAlloc_1865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1865_, 0, v_a_1859_);
v___x_1864_ = v_reuseFailAlloc_1865_;
goto v_reusejp_1863_;
}
v_reusejp_1863_:
{
return v___x_1864_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17(uint8_t v_skipInstances_1884_, lean_object* v_pre_1885_, lean_object* v_post_1886_, uint8_t v_usedLetOnly_1887_, uint8_t v_skipConstInApp_1888_, lean_object* v_x_1889_, lean_object* v_x_1890_, lean_object* v_x_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_){
_start:
{
lean_object* v_f_1899_; lean_object* v___y_1900_; lean_object* v___y_1901_; lean_object* v___y_1902_; lean_object* v___y_1903_; lean_object* v___y_1904_; 
if (lean_obj_tag(v_x_1889_) == 5)
{
lean_object* v_fn_1947_; lean_object* v_arg_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; 
v_fn_1947_ = lean_ctor_get(v_x_1889_, 0);
lean_inc_ref(v_fn_1947_);
v_arg_1948_ = lean_ctor_get(v_x_1889_, 1);
lean_inc_ref(v_arg_1948_);
lean_dec_ref_known(v_x_1889_, 2);
v___x_1949_ = lean_array_set(v_x_1890_, v_x_1891_, v_arg_1948_);
v___x_1950_ = lean_unsigned_to_nat(1u);
v___x_1951_ = lean_nat_sub(v_x_1891_, v___x_1950_);
lean_dec(v_x_1891_);
v_x_1889_ = v_fn_1947_;
v_x_1890_ = v___x_1949_;
v_x_1891_ = v___x_1951_;
goto _start;
}
else
{
lean_dec(v_x_1891_);
if (v_skipConstInApp_1888_ == 0)
{
goto v___jp_1944_;
}
else
{
uint8_t v___x_1953_; 
v___x_1953_ = l_Lean_Expr_isConst(v_x_1889_);
if (v___x_1953_ == 0)
{
goto v___jp_1944_;
}
else
{
v_f_1899_ = v_x_1889_;
v___y_1900_ = v___y_1892_;
v___y_1901_ = v___y_1893_;
v___y_1902_ = v___y_1894_;
v___y_1903_ = v___y_1895_;
v___y_1904_ = v___y_1896_;
goto v___jp_1898_;
}
}
}
v___jp_1898_:
{
if (v_skipInstances_1884_ == 0)
{
size_t v_sz_1905_; size_t v___x_1906_; lean_object* v___x_1907_; 
v_sz_1905_ = lean_array_size(v_x_1890_);
v___x_1906_ = ((size_t)0ULL);
lean_inc_ref(v_post_1886_);
lean_inc_ref(v_pre_1885_);
v___x_1907_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10(v_pre_1885_, v_post_1886_, v_usedLetOnly_1887_, v_skipConstInApp_1888_, v_skipInstances_1884_, v_sz_1905_, v___x_1906_, v_x_1890_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_);
if (lean_obj_tag(v___x_1907_) == 0)
{
lean_object* v_a_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; 
v_a_1908_ = lean_ctor_get(v___x_1907_, 0);
lean_inc(v_a_1908_);
lean_dec_ref_known(v___x_1907_, 1);
v___x_1909_ = l_Lean_mkAppN(v_f_1899_, v_a_1908_);
lean_dec(v_a_1908_);
v___x_1910_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_1885_, v_post_1886_, v_usedLetOnly_1887_, v_skipConstInApp_1888_, v_skipInstances_1884_, v___x_1909_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_);
return v___x_1910_;
}
else
{
lean_object* v_a_1911_; lean_object* v___x_1913_; uint8_t v_isShared_1914_; uint8_t v_isSharedCheck_1918_; 
lean_dec_ref(v_f_1899_);
lean_dec_ref(v_post_1886_);
lean_dec_ref(v_pre_1885_);
v_a_1911_ = lean_ctor_get(v___x_1907_, 0);
v_isSharedCheck_1918_ = !lean_is_exclusive(v___x_1907_);
if (v_isSharedCheck_1918_ == 0)
{
v___x_1913_ = v___x_1907_;
v_isShared_1914_ = v_isSharedCheck_1918_;
goto v_resetjp_1912_;
}
else
{
lean_inc(v_a_1911_);
lean_dec(v___x_1907_);
v___x_1913_ = lean_box(0);
v_isShared_1914_ = v_isSharedCheck_1918_;
goto v_resetjp_1912_;
}
v_resetjp_1912_:
{
lean_object* v___x_1916_; 
if (v_isShared_1914_ == 0)
{
v___x_1916_ = v___x_1913_;
goto v_reusejp_1915_;
}
else
{
lean_object* v_reuseFailAlloc_1917_; 
v_reuseFailAlloc_1917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1917_, 0, v_a_1911_);
v___x_1916_ = v_reuseFailAlloc_1917_;
goto v_reusejp_1915_;
}
v_reusejp_1915_:
{
return v___x_1916_;
}
}
}
}
else
{
lean_object* v___x_1919_; lean_object* v___x_1920_; 
v___x_1919_ = lean_array_get_size(v_x_1890_);
lean_inc_ref(v_f_1899_);
v___x_1920_ = l_Lean_Meta_getFunInfoNArgs(v_f_1899_, v___x_1919_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_);
if (lean_obj_tag(v___x_1920_) == 0)
{
lean_object* v_a_1921_; lean_object* v_paramInfo_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; 
v_a_1921_ = lean_ctor_get(v___x_1920_, 0);
lean_inc(v_a_1921_);
lean_dec_ref_known(v___x_1920_, 1);
v_paramInfo_1922_ = lean_ctor_get(v_a_1921_, 0);
lean_inc_ref(v_paramInfo_1922_);
lean_dec(v_a_1921_);
v___x_1923_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_post_1886_);
lean_inc_ref(v_pre_1885_);
v___x_1924_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg(v___x_1919_, v_paramInfo_1922_, v_pre_1885_, v_post_1886_, v_usedLetOnly_1887_, v_skipConstInApp_1888_, v_skipInstances_1884_, v___x_1923_, v_x_1890_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_);
lean_dec_ref(v_paramInfo_1922_);
if (lean_obj_tag(v___x_1924_) == 0)
{
lean_object* v_a_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; 
v_a_1925_ = lean_ctor_get(v___x_1924_, 0);
lean_inc(v_a_1925_);
lean_dec_ref_known(v___x_1924_, 1);
v___x_1926_ = l_Lean_mkAppN(v_f_1899_, v_a_1925_);
lean_dec(v_a_1925_);
v___x_1927_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_1885_, v_post_1886_, v_usedLetOnly_1887_, v_skipConstInApp_1888_, v_skipInstances_1884_, v___x_1926_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_);
return v___x_1927_;
}
else
{
lean_object* v_a_1928_; lean_object* v___x_1930_; uint8_t v_isShared_1931_; uint8_t v_isSharedCheck_1935_; 
lean_dec_ref(v_f_1899_);
lean_dec_ref(v_post_1886_);
lean_dec_ref(v_pre_1885_);
v_a_1928_ = lean_ctor_get(v___x_1924_, 0);
v_isSharedCheck_1935_ = !lean_is_exclusive(v___x_1924_);
if (v_isSharedCheck_1935_ == 0)
{
v___x_1930_ = v___x_1924_;
v_isShared_1931_ = v_isSharedCheck_1935_;
goto v_resetjp_1929_;
}
else
{
lean_inc(v_a_1928_);
lean_dec(v___x_1924_);
v___x_1930_ = lean_box(0);
v_isShared_1931_ = v_isSharedCheck_1935_;
goto v_resetjp_1929_;
}
v_resetjp_1929_:
{
lean_object* v___x_1933_; 
if (v_isShared_1931_ == 0)
{
v___x_1933_ = v___x_1930_;
goto v_reusejp_1932_;
}
else
{
lean_object* v_reuseFailAlloc_1934_; 
v_reuseFailAlloc_1934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1934_, 0, v_a_1928_);
v___x_1933_ = v_reuseFailAlloc_1934_;
goto v_reusejp_1932_;
}
v_reusejp_1932_:
{
return v___x_1933_;
}
}
}
}
else
{
lean_object* v_a_1936_; lean_object* v___x_1938_; uint8_t v_isShared_1939_; uint8_t v_isSharedCheck_1943_; 
lean_dec_ref(v_f_1899_);
lean_dec_ref(v_x_1890_);
lean_dec_ref(v_post_1886_);
lean_dec_ref(v_pre_1885_);
v_a_1936_ = lean_ctor_get(v___x_1920_, 0);
v_isSharedCheck_1943_ = !lean_is_exclusive(v___x_1920_);
if (v_isSharedCheck_1943_ == 0)
{
v___x_1938_ = v___x_1920_;
v_isShared_1939_ = v_isSharedCheck_1943_;
goto v_resetjp_1937_;
}
else
{
lean_inc(v_a_1936_);
lean_dec(v___x_1920_);
v___x_1938_ = lean_box(0);
v_isShared_1939_ = v_isSharedCheck_1943_;
goto v_resetjp_1937_;
}
v_resetjp_1937_:
{
lean_object* v___x_1941_; 
if (v_isShared_1939_ == 0)
{
v___x_1941_ = v___x_1938_;
goto v_reusejp_1940_;
}
else
{
lean_object* v_reuseFailAlloc_1942_; 
v_reuseFailAlloc_1942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1942_, 0, v_a_1936_);
v___x_1941_ = v_reuseFailAlloc_1942_;
goto v_reusejp_1940_;
}
v_reusejp_1940_:
{
return v___x_1941_;
}
}
}
}
}
v___jp_1944_:
{
lean_object* v___x_1945_; 
lean_inc_ref(v_post_1886_);
lean_inc_ref(v_pre_1885_);
v___x_1945_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1885_, v_post_1886_, v_usedLetOnly_1887_, v_skipConstInApp_1888_, v_skipInstances_1884_, v_x_1889_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_);
if (lean_obj_tag(v___x_1945_) == 0)
{
lean_object* v_a_1946_; 
v_a_1946_ = lean_ctor_get(v___x_1945_, 0);
lean_inc(v_a_1946_);
lean_dec_ref_known(v___x_1945_, 1);
v_f_1899_ = v_a_1946_;
v___y_1900_ = v___y_1892_;
v___y_1901_ = v___y_1893_;
v___y_1902_ = v___y_1894_;
v___y_1903_ = v___y_1895_;
v___y_1904_ = v___y_1896_;
goto v___jp_1898_;
}
else
{
lean_dec_ref(v_x_1890_);
lean_dec_ref(v_post_1886_);
lean_dec_ref(v_pre_1885_);
return v___x_1945_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1(lean_object* v___x_1954_, lean_object* v_pre_1955_, lean_object* v_e_1956_, lean_object* v_post_1957_, uint8_t v_usedLetOnly_1958_, uint8_t v_skipConstInApp_1959_, uint8_t v_skipInstances_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_){
_start:
{
lean_object* v___x_1967_; 
v___x_1967_ = l_Lean_Core_checkSystem(v___x_1954_, v___y_1964_, v___y_1965_);
if (lean_obj_tag(v___x_1967_) == 0)
{
lean_object* v___x_1968_; 
lean_dec_ref_known(v___x_1967_, 1);
lean_inc_ref(v_pre_1955_);
lean_inc(v___y_1965_);
lean_inc_ref(v___y_1964_);
lean_inc(v___y_1963_);
lean_inc_ref(v___y_1962_);
lean_inc_ref(v_e_1956_);
v___x_1968_ = lean_apply_6(v_pre_1955_, v_e_1956_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_, lean_box(0));
if (lean_obj_tag(v___x_1968_) == 0)
{
lean_object* v_a_1969_; lean_object* v___x_1971_; uint8_t v_isShared_1972_; uint8_t v_isSharedCheck_2017_; 
v_a_1969_ = lean_ctor_get(v___x_1968_, 0);
v_isSharedCheck_2017_ = !lean_is_exclusive(v___x_1968_);
if (v_isSharedCheck_2017_ == 0)
{
v___x_1971_ = v___x_1968_;
v_isShared_1972_ = v_isSharedCheck_2017_;
goto v_resetjp_1970_;
}
else
{
lean_inc(v_a_1969_);
lean_dec(v___x_1968_);
v___x_1971_ = lean_box(0);
v_isShared_1972_ = v_isSharedCheck_2017_;
goto v_resetjp_1970_;
}
v_resetjp_1970_:
{
lean_object* v___y_1974_; 
switch(lean_obj_tag(v_a_1969_))
{
case 0:
{
lean_object* v_e_2009_; lean_object* v___x_2011_; 
lean_dec_ref(v_post_1957_);
lean_dec_ref(v_e_1956_);
lean_dec_ref(v_pre_1955_);
v_e_2009_ = lean_ctor_get(v_a_1969_, 0);
lean_inc_ref(v_e_2009_);
lean_dec_ref_known(v_a_1969_, 1);
if (v_isShared_1972_ == 0)
{
lean_ctor_set(v___x_1971_, 0, v_e_2009_);
v___x_2011_ = v___x_1971_;
goto v_reusejp_2010_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v_e_2009_);
v___x_2011_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2010_;
}
v_reusejp_2010_:
{
return v___x_2011_;
}
}
case 1:
{
lean_object* v_e_2013_; lean_object* v___x_2014_; 
lean_del_object(v___x_1971_);
lean_dec_ref(v_e_1956_);
v_e_2013_ = lean_ctor_get(v_a_1969_, 0);
lean_inc_ref(v_e_2013_);
lean_dec_ref_known(v_a_1969_, 1);
v___x_2014_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1955_, v_post_1957_, v_usedLetOnly_1958_, v_skipConstInApp_1959_, v_skipInstances_1960_, v_e_2013_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
return v___x_2014_;
}
default: 
{
lean_object* v_e_x3f_2015_; 
lean_del_object(v___x_1971_);
v_e_x3f_2015_ = lean_ctor_get(v_a_1969_, 0);
lean_inc(v_e_x3f_2015_);
lean_dec_ref_known(v_a_1969_, 1);
if (lean_obj_tag(v_e_x3f_2015_) == 0)
{
v___y_1974_ = v_e_1956_;
goto v___jp_1973_;
}
else
{
lean_object* v_val_2016_; 
lean_dec_ref(v_e_1956_);
v_val_2016_ = lean_ctor_get(v_e_x3f_2015_, 0);
lean_inc(v_val_2016_);
lean_dec_ref_known(v_e_x3f_2015_, 1);
v___y_1974_ = v_val_2016_;
goto v___jp_1973_;
}
}
}
v___jp_1973_:
{
switch(lean_obj_tag(v___y_1974_))
{
case 7:
{
lean_object* v___x_1975_; lean_object* v___x_1976_; 
v___x_1975_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0));
v___x_1976_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14(v_pre_1955_, v_post_1957_, v_usedLetOnly_1958_, v_skipConstInApp_1959_, v_skipInstances_1960_, v___x_1975_, v___y_1974_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
return v___x_1976_;
}
case 6:
{
lean_object* v___x_1977_; lean_object* v___x_1978_; 
v___x_1977_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0));
v___x_1978_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15(v_pre_1955_, v_post_1957_, v_usedLetOnly_1958_, v_skipConstInApp_1959_, v_skipInstances_1960_, v___x_1977_, v___y_1974_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
return v___x_1978_;
}
case 8:
{
lean_object* v___x_1979_; lean_object* v___x_1980_; 
v___x_1979_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0));
v___x_1980_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16(v_pre_1955_, v_post_1957_, v_usedLetOnly_1958_, v_skipConstInApp_1959_, v_skipInstances_1960_, v___x_1979_, v___y_1974_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
return v___x_1980_;
}
case 5:
{
lean_object* v_dummy_1981_; lean_object* v_nargs_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; 
v_dummy_1981_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1);
v_nargs_1982_ = l_Lean_Expr_getAppNumArgs(v___y_1974_);
lean_inc(v_nargs_1982_);
v___x_1983_ = lean_mk_array(v_nargs_1982_, v_dummy_1981_);
v___x_1984_ = lean_unsigned_to_nat(1u);
v___x_1985_ = lean_nat_sub(v_nargs_1982_, v___x_1984_);
lean_dec(v_nargs_1982_);
v___x_1986_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17(v_skipInstances_1960_, v_pre_1955_, v_post_1957_, v_usedLetOnly_1958_, v_skipConstInApp_1959_, v___y_1974_, v___x_1983_, v___x_1985_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
return v___x_1986_;
}
case 10:
{
lean_object* v_data_1987_; lean_object* v_expr_1988_; lean_object* v___x_1989_; 
v_data_1987_ = lean_ctor_get(v___y_1974_, 0);
v_expr_1988_ = lean_ctor_get(v___y_1974_, 1);
lean_inc_ref(v_expr_1988_);
lean_inc_ref(v_post_1957_);
lean_inc_ref(v_pre_1955_);
v___x_1989_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1955_, v_post_1957_, v_usedLetOnly_1958_, v_skipConstInApp_1959_, v_skipInstances_1960_, v_expr_1988_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
if (lean_obj_tag(v___x_1989_) == 0)
{
lean_object* v_a_1990_; size_t v___x_1991_; size_t v___x_1992_; uint8_t v___x_1993_; 
v_a_1990_ = lean_ctor_get(v___x_1989_, 0);
lean_inc(v_a_1990_);
lean_dec_ref_known(v___x_1989_, 1);
v___x_1991_ = lean_ptr_addr(v_expr_1988_);
v___x_1992_ = lean_ptr_addr(v_a_1990_);
v___x_1993_ = lean_usize_dec_eq(v___x_1991_, v___x_1992_);
if (v___x_1993_ == 0)
{
lean_object* v___x_1994_; lean_object* v___x_1995_; 
lean_inc(v_data_1987_);
lean_dec_ref_known(v___y_1974_, 2);
v___x_1994_ = l_Lean_Expr_mdata___override(v_data_1987_, v_a_1990_);
v___x_1995_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_1955_, v_post_1957_, v_usedLetOnly_1958_, v_skipConstInApp_1959_, v_skipInstances_1960_, v___x_1994_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
return v___x_1995_;
}
else
{
lean_object* v___x_1996_; 
lean_dec(v_a_1990_);
v___x_1996_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_1955_, v_post_1957_, v_usedLetOnly_1958_, v_skipConstInApp_1959_, v_skipInstances_1960_, v___y_1974_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
return v___x_1996_;
}
}
else
{
lean_dec_ref_known(v___y_1974_, 2);
lean_dec_ref(v_post_1957_);
lean_dec_ref(v_pre_1955_);
return v___x_1989_;
}
}
case 11:
{
lean_object* v_typeName_1997_; lean_object* v_idx_1998_; lean_object* v_struct_1999_; lean_object* v___x_2000_; 
v_typeName_1997_ = lean_ctor_get(v___y_1974_, 0);
v_idx_1998_ = lean_ctor_get(v___y_1974_, 1);
v_struct_1999_ = lean_ctor_get(v___y_1974_, 2);
lean_inc_ref(v_struct_1999_);
lean_inc_ref(v_post_1957_);
lean_inc_ref(v_pre_1955_);
v___x_2000_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1955_, v_post_1957_, v_usedLetOnly_1958_, v_skipConstInApp_1959_, v_skipInstances_1960_, v_struct_1999_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
if (lean_obj_tag(v___x_2000_) == 0)
{
lean_object* v_a_2001_; size_t v___x_2002_; size_t v___x_2003_; uint8_t v___x_2004_; 
v_a_2001_ = lean_ctor_get(v___x_2000_, 0);
lean_inc(v_a_2001_);
lean_dec_ref_known(v___x_2000_, 1);
v___x_2002_ = lean_ptr_addr(v_struct_1999_);
v___x_2003_ = lean_ptr_addr(v_a_2001_);
v___x_2004_ = lean_usize_dec_eq(v___x_2002_, v___x_2003_);
if (v___x_2004_ == 0)
{
lean_object* v___x_2005_; lean_object* v___x_2006_; 
lean_inc(v_idx_1998_);
lean_inc(v_typeName_1997_);
lean_dec_ref_known(v___y_1974_, 3);
v___x_2005_ = l_Lean_Expr_proj___override(v_typeName_1997_, v_idx_1998_, v_a_2001_);
v___x_2006_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_1955_, v_post_1957_, v_usedLetOnly_1958_, v_skipConstInApp_1959_, v_skipInstances_1960_, v___x_2005_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
return v___x_2006_;
}
else
{
lean_object* v___x_2007_; 
lean_dec(v_a_2001_);
v___x_2007_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_1955_, v_post_1957_, v_usedLetOnly_1958_, v_skipConstInApp_1959_, v_skipInstances_1960_, v___y_1974_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
return v___x_2007_;
}
}
else
{
lean_dec_ref_known(v___y_1974_, 3);
lean_dec_ref(v_post_1957_);
lean_dec_ref(v_pre_1955_);
return v___x_2000_;
}
}
default: 
{
lean_object* v___x_2008_; 
v___x_2008_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_1955_, v_post_1957_, v_usedLetOnly_1958_, v_skipConstInApp_1959_, v_skipInstances_1960_, v___y_1974_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
return v___x_2008_;
}
}
}
}
}
else
{
lean_object* v_a_2018_; lean_object* v___x_2020_; uint8_t v_isShared_2021_; uint8_t v_isSharedCheck_2025_; 
lean_dec_ref(v_post_1957_);
lean_dec_ref(v_e_1956_);
lean_dec_ref(v_pre_1955_);
v_a_2018_ = lean_ctor_get(v___x_1968_, 0);
v_isSharedCheck_2025_ = !lean_is_exclusive(v___x_1968_);
if (v_isSharedCheck_2025_ == 0)
{
v___x_2020_ = v___x_1968_;
v_isShared_2021_ = v_isSharedCheck_2025_;
goto v_resetjp_2019_;
}
else
{
lean_inc(v_a_2018_);
lean_dec(v___x_1968_);
v___x_2020_ = lean_box(0);
v_isShared_2021_ = v_isSharedCheck_2025_;
goto v_resetjp_2019_;
}
v_resetjp_2019_:
{
lean_object* v___x_2023_; 
if (v_isShared_2021_ == 0)
{
v___x_2023_ = v___x_2020_;
goto v_reusejp_2022_;
}
else
{
lean_object* v_reuseFailAlloc_2024_; 
v_reuseFailAlloc_2024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2024_, 0, v_a_2018_);
v___x_2023_ = v_reuseFailAlloc_2024_;
goto v_reusejp_2022_;
}
v_reusejp_2022_:
{
return v___x_2023_;
}
}
}
}
else
{
lean_object* v_a_2026_; lean_object* v___x_2028_; uint8_t v_isShared_2029_; uint8_t v_isSharedCheck_2033_; 
lean_dec_ref(v_post_1957_);
lean_dec_ref(v_e_1956_);
lean_dec_ref(v_pre_1955_);
v_a_2026_ = lean_ctor_get(v___x_1967_, 0);
v_isSharedCheck_2033_ = !lean_is_exclusive(v___x_1967_);
if (v_isSharedCheck_2033_ == 0)
{
v___x_2028_ = v___x_1967_;
v_isShared_2029_ = v_isSharedCheck_2033_;
goto v_resetjp_2027_;
}
else
{
lean_inc(v_a_2026_);
lean_dec(v___x_1967_);
v___x_2028_ = lean_box(0);
v_isShared_2029_ = v_isSharedCheck_2033_;
goto v_resetjp_2027_;
}
v_resetjp_2027_:
{
lean_object* v___x_2031_; 
if (v_isShared_2029_ == 0)
{
v___x_2031_ = v___x_2028_;
goto v_reusejp_2030_;
}
else
{
lean_object* v_reuseFailAlloc_2032_; 
v_reuseFailAlloc_2032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2032_, 0, v_a_2026_);
v___x_2031_ = v_reuseFailAlloc_2032_;
goto v_reusejp_2030_;
}
v_reusejp_2030_:
{
return v___x_2031_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___boxed(lean_object* v___x_2034_, lean_object* v_pre_2035_, lean_object* v_e_2036_, lean_object* v_post_2037_, lean_object* v_usedLetOnly_2038_, lean_object* v_skipConstInApp_2039_, lean_object* v_skipInstances_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_){
_start:
{
uint8_t v_usedLetOnly_boxed_2047_; uint8_t v_skipConstInApp_boxed_2048_; uint8_t v_skipInstances_boxed_2049_; lean_object* v_res_2050_; 
v_usedLetOnly_boxed_2047_ = lean_unbox(v_usedLetOnly_2038_);
v_skipConstInApp_boxed_2048_ = lean_unbox(v_skipConstInApp_2039_);
v_skipInstances_boxed_2049_ = lean_unbox(v_skipInstances_2040_);
v_res_2050_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1(v___x_2034_, v_pre_2035_, v_e_2036_, v_post_2037_, v_usedLetOnly_boxed_2047_, v_skipConstInApp_boxed_2048_, v_skipInstances_boxed_2049_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_);
lean_dec(v___y_2045_);
lean_dec_ref(v___y_2044_);
lean_dec(v___y_2043_);
lean_dec_ref(v___y_2042_);
lean_dec(v___y_2041_);
return v_res_2050_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(lean_object* v_pre_2051_, lean_object* v_post_2052_, uint8_t v_usedLetOnly_2053_, uint8_t v_skipConstInApp_2054_, uint8_t v_skipInstances_2055_, lean_object* v_e_2056_, lean_object* v_a_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_){
_start:
{
lean_object* v___x_2063_; lean_object* v___x_2064_; 
lean_inc(v_a_2057_);
v___x_2063_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2063_, 0, lean_box(0));
lean_closure_set(v___x_2063_, 1, lean_box(0));
lean_closure_set(v___x_2063_, 2, v_a_2057_);
v___x_2064_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0(lean_box(0), v___x_2063_, v___y_2058_, v___y_2059_, v___y_2060_, v___y_2061_);
if (lean_obj_tag(v___x_2064_) == 0)
{
lean_object* v_a_2065_; lean_object* v___x_2067_; uint8_t v_isShared_2068_; uint8_t v_isSharedCheck_2099_; 
v_a_2065_ = lean_ctor_get(v___x_2064_, 0);
v_isSharedCheck_2099_ = !lean_is_exclusive(v___x_2064_);
if (v_isSharedCheck_2099_ == 0)
{
v___x_2067_ = v___x_2064_;
v_isShared_2068_ = v_isSharedCheck_2099_;
goto v_resetjp_2066_;
}
else
{
lean_inc(v_a_2065_);
lean_dec(v___x_2064_);
v___x_2067_ = lean_box(0);
v_isShared_2068_ = v_isSharedCheck_2099_;
goto v_resetjp_2066_;
}
v_resetjp_2066_:
{
lean_object* v___x_2069_; 
v___x_2069_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg(v_a_2065_, v_e_2056_);
lean_dec(v_a_2065_);
if (lean_obj_tag(v___x_2069_) == 0)
{
lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___f_2074_; lean_object* v___x_2075_; 
lean_del_object(v___x_2067_);
v___x_2070_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___closed__0));
v___x_2071_ = lean_box(v_usedLetOnly_2053_);
v___x_2072_ = lean_box(v_skipConstInApp_2054_);
v___x_2073_ = lean_box(v_skipInstances_2055_);
lean_inc_ref(v_e_2056_);
v___f_2074_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___boxed), 13, 7);
lean_closure_set(v___f_2074_, 0, v___x_2070_);
lean_closure_set(v___f_2074_, 1, v_pre_2051_);
lean_closure_set(v___f_2074_, 2, v_e_2056_);
lean_closure_set(v___f_2074_, 3, v_post_2052_);
lean_closure_set(v___f_2074_, 4, v___x_2071_);
lean_closure_set(v___f_2074_, 5, v___x_2072_);
lean_closure_set(v___f_2074_, 6, v___x_2073_);
v___x_2075_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg(v___f_2074_, v_a_2057_, v___y_2058_, v___y_2059_, v___y_2060_, v___y_2061_);
if (lean_obj_tag(v___x_2075_) == 0)
{
lean_object* v_a_2076_; lean_object* v___f_2077_; lean_object* v___x_2078_; 
v_a_2076_ = lean_ctor_get(v___x_2075_, 0);
lean_inc_n(v_a_2076_, 2);
lean_dec_ref_known(v___x_2075_, 1);
lean_inc(v_a_2057_);
v___f_2077_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2___boxed), 4, 3);
lean_closure_set(v___f_2077_, 0, v_a_2057_);
lean_closure_set(v___f_2077_, 1, v_e_2056_);
lean_closure_set(v___f_2077_, 2, v_a_2076_);
v___x_2078_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0(lean_box(0), v___f_2077_, v___y_2058_, v___y_2059_, v___y_2060_, v___y_2061_);
if (lean_obj_tag(v___x_2078_) == 0)
{
lean_object* v___x_2080_; uint8_t v_isShared_2081_; uint8_t v_isSharedCheck_2085_; 
v_isSharedCheck_2085_ = !lean_is_exclusive(v___x_2078_);
if (v_isSharedCheck_2085_ == 0)
{
lean_object* v_unused_2086_; 
v_unused_2086_ = lean_ctor_get(v___x_2078_, 0);
lean_dec(v_unused_2086_);
v___x_2080_ = v___x_2078_;
v_isShared_2081_ = v_isSharedCheck_2085_;
goto v_resetjp_2079_;
}
else
{
lean_dec(v___x_2078_);
v___x_2080_ = lean_box(0);
v_isShared_2081_ = v_isSharedCheck_2085_;
goto v_resetjp_2079_;
}
v_resetjp_2079_:
{
lean_object* v___x_2083_; 
if (v_isShared_2081_ == 0)
{
lean_ctor_set(v___x_2080_, 0, v_a_2076_);
v___x_2083_ = v___x_2080_;
goto v_reusejp_2082_;
}
else
{
lean_object* v_reuseFailAlloc_2084_; 
v_reuseFailAlloc_2084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2084_, 0, v_a_2076_);
v___x_2083_ = v_reuseFailAlloc_2084_;
goto v_reusejp_2082_;
}
v_reusejp_2082_:
{
return v___x_2083_;
}
}
}
else
{
lean_object* v_a_2087_; lean_object* v___x_2089_; uint8_t v_isShared_2090_; uint8_t v_isSharedCheck_2094_; 
lean_dec(v_a_2076_);
v_a_2087_ = lean_ctor_get(v___x_2078_, 0);
v_isSharedCheck_2094_ = !lean_is_exclusive(v___x_2078_);
if (v_isSharedCheck_2094_ == 0)
{
v___x_2089_ = v___x_2078_;
v_isShared_2090_ = v_isSharedCheck_2094_;
goto v_resetjp_2088_;
}
else
{
lean_inc(v_a_2087_);
lean_dec(v___x_2078_);
v___x_2089_ = lean_box(0);
v_isShared_2090_ = v_isSharedCheck_2094_;
goto v_resetjp_2088_;
}
v_resetjp_2088_:
{
lean_object* v___x_2092_; 
if (v_isShared_2090_ == 0)
{
v___x_2092_ = v___x_2089_;
goto v_reusejp_2091_;
}
else
{
lean_object* v_reuseFailAlloc_2093_; 
v_reuseFailAlloc_2093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2093_, 0, v_a_2087_);
v___x_2092_ = v_reuseFailAlloc_2093_;
goto v_reusejp_2091_;
}
v_reusejp_2091_:
{
return v___x_2092_;
}
}
}
}
else
{
lean_dec_ref(v_e_2056_);
return v___x_2075_;
}
}
else
{
lean_object* v_val_2095_; lean_object* v___x_2097_; 
lean_dec_ref(v_e_2056_);
lean_dec_ref(v_post_2052_);
lean_dec_ref(v_pre_2051_);
v_val_2095_ = lean_ctor_get(v___x_2069_, 0);
lean_inc(v_val_2095_);
lean_dec_ref_known(v___x_2069_, 1);
if (v_isShared_2068_ == 0)
{
lean_ctor_set(v___x_2067_, 0, v_val_2095_);
v___x_2097_ = v___x_2067_;
goto v_reusejp_2096_;
}
else
{
lean_object* v_reuseFailAlloc_2098_; 
v_reuseFailAlloc_2098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2098_, 0, v_val_2095_);
v___x_2097_ = v_reuseFailAlloc_2098_;
goto v_reusejp_2096_;
}
v_reusejp_2096_:
{
return v___x_2097_;
}
}
}
}
else
{
lean_object* v_a_2100_; lean_object* v___x_2102_; uint8_t v_isShared_2103_; uint8_t v_isSharedCheck_2107_; 
lean_dec_ref(v_e_2056_);
lean_dec_ref(v_post_2052_);
lean_dec_ref(v_pre_2051_);
v_a_2100_ = lean_ctor_get(v___x_2064_, 0);
v_isSharedCheck_2107_ = !lean_is_exclusive(v___x_2064_);
if (v_isSharedCheck_2107_ == 0)
{
v___x_2102_ = v___x_2064_;
v_isShared_2103_ = v_isSharedCheck_2107_;
goto v_resetjp_2101_;
}
else
{
lean_inc(v_a_2100_);
lean_dec(v___x_2064_);
v___x_2102_ = lean_box(0);
v_isShared_2103_ = v_isSharedCheck_2107_;
goto v_resetjp_2101_;
}
v_resetjp_2101_:
{
lean_object* v___x_2105_; 
if (v_isShared_2103_ == 0)
{
v___x_2105_ = v___x_2102_;
goto v_reusejp_2104_;
}
else
{
lean_object* v_reuseFailAlloc_2106_; 
v_reuseFailAlloc_2106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2106_, 0, v_a_2100_);
v___x_2105_ = v_reuseFailAlloc_2106_;
goto v_reusejp_2104_;
}
v_reusejp_2104_:
{
return v___x_2105_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14(lean_object* v_pre_2108_, lean_object* v_post_2109_, uint8_t v_usedLetOnly_2110_, uint8_t v_skipConstInApp_2111_, uint8_t v_skipInstances_2112_, lean_object* v_fvars_2113_, lean_object* v_e_2114_, lean_object* v_a_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_, lean_object* v___y_2119_){
_start:
{
if (lean_obj_tag(v_e_2114_) == 7)
{
lean_object* v_binderName_2121_; lean_object* v_binderType_2122_; lean_object* v_body_2123_; uint8_t v_binderInfo_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___f_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; 
v_binderName_2121_ = lean_ctor_get(v_e_2114_, 0);
lean_inc(v_binderName_2121_);
v_binderType_2122_ = lean_ctor_get(v_e_2114_, 1);
lean_inc_ref(v_binderType_2122_);
v_body_2123_ = lean_ctor_get(v_e_2114_, 2);
lean_inc_ref(v_body_2123_);
v_binderInfo_2124_ = lean_ctor_get_uint8(v_e_2114_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_2114_, 3);
v___x_2125_ = lean_box(v_usedLetOnly_2110_);
v___x_2126_ = lean_box(v_skipConstInApp_2111_);
v___x_2127_ = lean_box(v_skipInstances_2112_);
lean_inc_ref(v_post_2109_);
lean_inc_ref(v_pre_2108_);
lean_inc_ref(v_fvars_2113_);
v___f_2128_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0___boxed), 14, 7);
lean_closure_set(v___f_2128_, 0, v_fvars_2113_);
lean_closure_set(v___f_2128_, 1, v_pre_2108_);
lean_closure_set(v___f_2128_, 2, v_post_2109_);
lean_closure_set(v___f_2128_, 3, v___x_2125_);
lean_closure_set(v___f_2128_, 4, v___x_2126_);
lean_closure_set(v___f_2128_, 5, v___x_2127_);
lean_closure_set(v___f_2128_, 6, v_body_2123_);
v___x_2129_ = lean_expr_instantiate_rev(v_binderType_2122_, v_fvars_2113_);
lean_dec_ref(v_fvars_2113_);
lean_dec_ref(v_binderType_2122_);
v___x_2130_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2108_, v_post_2109_, v_usedLetOnly_2110_, v_skipConstInApp_2111_, v_skipInstances_2112_, v___x_2129_, v_a_2115_, v___y_2116_, v___y_2117_, v___y_2118_, v___y_2119_);
if (lean_obj_tag(v___x_2130_) == 0)
{
lean_object* v_a_2131_; uint8_t v___x_2132_; lean_object* v___x_2133_; 
v_a_2131_ = lean_ctor_get(v___x_2130_, 0);
lean_inc(v_a_2131_);
lean_dec_ref_known(v___x_2130_, 1);
v___x_2132_ = 0;
v___x_2133_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(v_binderName_2121_, v_binderInfo_2124_, v_a_2131_, v___f_2128_, v___x_2132_, v_a_2115_, v___y_2116_, v___y_2117_, v___y_2118_, v___y_2119_);
return v___x_2133_;
}
else
{
lean_dec_ref(v___f_2128_);
lean_dec(v_binderName_2121_);
return v___x_2130_;
}
}
else
{
lean_object* v___x_2134_; lean_object* v___x_2135_; 
v___x_2134_ = lean_expr_instantiate_rev(v_e_2114_, v_fvars_2113_);
lean_dec_ref(v_e_2114_);
lean_inc_ref(v_post_2109_);
lean_inc_ref(v_pre_2108_);
v___x_2135_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2108_, v_post_2109_, v_usedLetOnly_2110_, v_skipConstInApp_2111_, v_skipInstances_2112_, v___x_2134_, v_a_2115_, v___y_2116_, v___y_2117_, v___y_2118_, v___y_2119_);
if (lean_obj_tag(v___x_2135_) == 0)
{
lean_object* v_a_2136_; uint8_t v___x_2137_; uint8_t v___x_2138_; uint8_t v___x_2139_; lean_object* v___x_2140_; 
v_a_2136_ = lean_ctor_get(v___x_2135_, 0);
lean_inc(v_a_2136_);
lean_dec_ref_known(v___x_2135_, 1);
v___x_2137_ = 0;
v___x_2138_ = 1;
v___x_2139_ = 1;
v___x_2140_ = l_Lean_Meta_mkForallFVars(v_fvars_2113_, v_a_2136_, v___x_2137_, v_usedLetOnly_2110_, v___x_2138_, v___x_2139_, v___y_2116_, v___y_2117_, v___y_2118_, v___y_2119_);
lean_dec_ref(v_fvars_2113_);
if (lean_obj_tag(v___x_2140_) == 0)
{
lean_object* v_a_2141_; lean_object* v___x_2142_; 
v_a_2141_ = lean_ctor_get(v___x_2140_, 0);
lean_inc(v_a_2141_);
lean_dec_ref_known(v___x_2140_, 1);
v___x_2142_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_2108_, v_post_2109_, v_usedLetOnly_2110_, v_skipConstInApp_2111_, v_skipInstances_2112_, v_a_2141_, v_a_2115_, v___y_2116_, v___y_2117_, v___y_2118_, v___y_2119_);
return v___x_2142_;
}
else
{
lean_dec_ref(v_post_2109_);
lean_dec_ref(v_pre_2108_);
return v___x_2140_;
}
}
else
{
lean_dec_ref(v_fvars_2113_);
lean_dec_ref(v_post_2109_);
lean_dec_ref(v_pre_2108_);
return v___x_2135_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0(lean_object* v_fvars_2143_, lean_object* v_pre_2144_, lean_object* v_post_2145_, uint8_t v_usedLetOnly_2146_, uint8_t v_skipConstInApp_2147_, uint8_t v_skipInstances_2148_, lean_object* v_body_2149_, lean_object* v_x_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_){
_start:
{
lean_object* v___x_2157_; lean_object* v___x_2158_; 
v___x_2157_ = lean_array_push(v_fvars_2143_, v_x_2150_);
v___x_2158_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14(v_pre_2144_, v_post_2145_, v_usedLetOnly_2146_, v_skipConstInApp_2147_, v_skipInstances_2148_, v___x_2157_, v_body_2149_, v___y_2151_, v___y_2152_, v___y_2153_, v___y_2154_, v___y_2155_);
return v___x_2158_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11___boxed(lean_object* v_pre_2159_, lean_object* v_post_2160_, lean_object* v_usedLetOnly_2161_, lean_object* v_skipConstInApp_2162_, lean_object* v_skipInstances_2163_, lean_object* v_e_2164_, lean_object* v_a_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_){
_start:
{
uint8_t v_usedLetOnly_boxed_2171_; uint8_t v_skipConstInApp_boxed_2172_; uint8_t v_skipInstances_boxed_2173_; lean_object* v_res_2174_; 
v_usedLetOnly_boxed_2171_ = lean_unbox(v_usedLetOnly_2161_);
v_skipConstInApp_boxed_2172_ = lean_unbox(v_skipConstInApp_2162_);
v_skipInstances_boxed_2173_ = lean_unbox(v_skipInstances_2163_);
v_res_2174_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_2159_, v_post_2160_, v_usedLetOnly_boxed_2171_, v_skipConstInApp_boxed_2172_, v_skipInstances_boxed_2173_, v_e_2164_, v_a_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_);
lean_dec(v___y_2169_);
lean_dec_ref(v___y_2168_);
lean_dec(v___y_2167_);
lean_dec_ref(v___y_2166_);
lean_dec(v_a_2165_);
return v_res_2174_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10___boxed(lean_object* v_pre_2175_, lean_object* v_post_2176_, lean_object* v_usedLetOnly_2177_, lean_object* v_skipConstInApp_2178_, lean_object* v_skipInstances_2179_, lean_object* v_sz_2180_, lean_object* v_i_2181_, lean_object* v_bs_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_){
_start:
{
uint8_t v_usedLetOnly_boxed_2189_; uint8_t v_skipConstInApp_boxed_2190_; uint8_t v_skipInstances_boxed_2191_; size_t v_sz_boxed_2192_; size_t v_i_boxed_2193_; lean_object* v_res_2194_; 
v_usedLetOnly_boxed_2189_ = lean_unbox(v_usedLetOnly_2177_);
v_skipConstInApp_boxed_2190_ = lean_unbox(v_skipConstInApp_2178_);
v_skipInstances_boxed_2191_ = lean_unbox(v_skipInstances_2179_);
v_sz_boxed_2192_ = lean_unbox_usize(v_sz_2180_);
lean_dec(v_sz_2180_);
v_i_boxed_2193_ = lean_unbox_usize(v_i_2181_);
lean_dec(v_i_2181_);
v_res_2194_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10(v_pre_2175_, v_post_2176_, v_usedLetOnly_boxed_2189_, v_skipConstInApp_boxed_2190_, v_skipInstances_boxed_2191_, v_sz_boxed_2192_, v_i_boxed_2193_, v_bs_2182_, v___y_2183_, v___y_2184_, v___y_2185_, v___y_2186_, v___y_2187_);
lean_dec(v___y_2187_);
lean_dec_ref(v___y_2186_);
lean_dec(v___y_2185_);
lean_dec_ref(v___y_2184_);
lean_dec(v___y_2183_);
return v_res_2194_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___boxed(lean_object* v_pre_2195_, lean_object* v_post_2196_, lean_object* v_usedLetOnly_2197_, lean_object* v_skipConstInApp_2198_, lean_object* v_skipInstances_2199_, lean_object* v_e_2200_, lean_object* v_a_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_){
_start:
{
uint8_t v_usedLetOnly_boxed_2207_; uint8_t v_skipConstInApp_boxed_2208_; uint8_t v_skipInstances_boxed_2209_; lean_object* v_res_2210_; 
v_usedLetOnly_boxed_2207_ = lean_unbox(v_usedLetOnly_2197_);
v_skipConstInApp_boxed_2208_ = lean_unbox(v_skipConstInApp_2198_);
v_skipInstances_boxed_2209_ = lean_unbox(v_skipInstances_2199_);
v_res_2210_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2195_, v_post_2196_, v_usedLetOnly_boxed_2207_, v_skipConstInApp_boxed_2208_, v_skipInstances_boxed_2209_, v_e_2200_, v_a_2201_, v___y_2202_, v___y_2203_, v___y_2204_, v___y_2205_);
lean_dec(v___y_2205_);
lean_dec_ref(v___y_2204_);
lean_dec(v___y_2203_);
lean_dec_ref(v___y_2202_);
lean_dec(v_a_2201_);
return v_res_2210_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___boxed(lean_object* v_pre_2211_, lean_object* v_post_2212_, lean_object* v_usedLetOnly_2213_, lean_object* v_skipConstInApp_2214_, lean_object* v_skipInstances_2215_, lean_object* v_fvars_2216_, lean_object* v_e_2217_, lean_object* v_a_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_){
_start:
{
uint8_t v_usedLetOnly_boxed_2224_; uint8_t v_skipConstInApp_boxed_2225_; uint8_t v_skipInstances_boxed_2226_; lean_object* v_res_2227_; 
v_usedLetOnly_boxed_2224_ = lean_unbox(v_usedLetOnly_2213_);
v_skipConstInApp_boxed_2225_ = lean_unbox(v_skipConstInApp_2214_);
v_skipInstances_boxed_2226_ = lean_unbox(v_skipInstances_2215_);
v_res_2227_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14(v_pre_2211_, v_post_2212_, v_usedLetOnly_boxed_2224_, v_skipConstInApp_boxed_2225_, v_skipInstances_boxed_2226_, v_fvars_2216_, v_e_2217_, v_a_2218_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_);
lean_dec(v___y_2222_);
lean_dec_ref(v___y_2221_);
lean_dec(v___y_2220_);
lean_dec_ref(v___y_2219_);
lean_dec(v_a_2218_);
return v_res_2227_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___boxed(lean_object* v_pre_2228_, lean_object* v_post_2229_, lean_object* v_usedLetOnly_2230_, lean_object* v_skipConstInApp_2231_, lean_object* v_skipInstances_2232_, lean_object* v_fvars_2233_, lean_object* v_e_2234_, lean_object* v_a_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_){
_start:
{
uint8_t v_usedLetOnly_boxed_2241_; uint8_t v_skipConstInApp_boxed_2242_; uint8_t v_skipInstances_boxed_2243_; lean_object* v_res_2244_; 
v_usedLetOnly_boxed_2241_ = lean_unbox(v_usedLetOnly_2230_);
v_skipConstInApp_boxed_2242_ = lean_unbox(v_skipConstInApp_2231_);
v_skipInstances_boxed_2243_ = lean_unbox(v_skipInstances_2232_);
v_res_2244_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15(v_pre_2228_, v_post_2229_, v_usedLetOnly_boxed_2241_, v_skipConstInApp_boxed_2242_, v_skipInstances_boxed_2243_, v_fvars_2233_, v_e_2234_, v_a_2235_, v___y_2236_, v___y_2237_, v___y_2238_, v___y_2239_);
lean_dec(v___y_2239_);
lean_dec_ref(v___y_2238_);
lean_dec(v___y_2237_);
lean_dec_ref(v___y_2236_);
lean_dec(v_a_2235_);
return v_res_2244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___boxed(lean_object* v_pre_2245_, lean_object* v_post_2246_, lean_object* v_usedLetOnly_2247_, lean_object* v_skipConstInApp_2248_, lean_object* v_skipInstances_2249_, lean_object* v_fvars_2250_, lean_object* v_e_2251_, lean_object* v_a_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_){
_start:
{
uint8_t v_usedLetOnly_boxed_2258_; uint8_t v_skipConstInApp_boxed_2259_; uint8_t v_skipInstances_boxed_2260_; lean_object* v_res_2261_; 
v_usedLetOnly_boxed_2258_ = lean_unbox(v_usedLetOnly_2247_);
v_skipConstInApp_boxed_2259_ = lean_unbox(v_skipConstInApp_2248_);
v_skipInstances_boxed_2260_ = lean_unbox(v_skipInstances_2249_);
v_res_2261_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16(v_pre_2245_, v_post_2246_, v_usedLetOnly_boxed_2258_, v_skipConstInApp_boxed_2259_, v_skipInstances_boxed_2260_, v_fvars_2250_, v_e_2251_, v_a_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_);
lean_dec(v___y_2256_);
lean_dec_ref(v___y_2255_);
lean_dec(v___y_2254_);
lean_dec_ref(v___y_2253_);
lean_dec(v_a_2252_);
return v_res_2261_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___boxed(lean_object* v_upperBound_2262_, lean_object* v___x_2263_, lean_object* v_pre_2264_, lean_object* v_post_2265_, lean_object* v_usedLetOnly_2266_, lean_object* v_skipConstInApp_2267_, lean_object* v_skipInstances_2268_, lean_object* v_a_2269_, lean_object* v_b_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_){
_start:
{
uint8_t v_usedLetOnly_boxed_2277_; uint8_t v_skipConstInApp_boxed_2278_; uint8_t v_skipInstances_boxed_2279_; lean_object* v_res_2280_; 
v_usedLetOnly_boxed_2277_ = lean_unbox(v_usedLetOnly_2266_);
v_skipConstInApp_boxed_2278_ = lean_unbox(v_skipConstInApp_2267_);
v_skipInstances_boxed_2279_ = lean_unbox(v_skipInstances_2268_);
v_res_2280_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg(v_upperBound_2262_, v___x_2263_, v_pre_2264_, v_post_2265_, v_usedLetOnly_boxed_2277_, v_skipConstInApp_boxed_2278_, v_skipInstances_boxed_2279_, v_a_2269_, v_b_2270_, v___y_2271_, v___y_2272_, v___y_2273_, v___y_2274_, v___y_2275_);
lean_dec(v___y_2275_);
lean_dec_ref(v___y_2274_);
lean_dec(v___y_2273_);
lean_dec_ref(v___y_2272_);
lean_dec(v___y_2271_);
lean_dec_ref(v___x_2263_);
lean_dec(v_upperBound_2262_);
return v_res_2280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17___boxed(lean_object* v_skipInstances_2281_, lean_object* v_pre_2282_, lean_object* v_post_2283_, lean_object* v_usedLetOnly_2284_, lean_object* v_skipConstInApp_2285_, lean_object* v_x_2286_, lean_object* v_x_2287_, lean_object* v_x_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_){
_start:
{
uint8_t v_skipInstances_boxed_2295_; uint8_t v_usedLetOnly_boxed_2296_; uint8_t v_skipConstInApp_boxed_2297_; lean_object* v_res_2298_; 
v_skipInstances_boxed_2295_ = lean_unbox(v_skipInstances_2281_);
v_usedLetOnly_boxed_2296_ = lean_unbox(v_usedLetOnly_2284_);
v_skipConstInApp_boxed_2297_ = lean_unbox(v_skipConstInApp_2285_);
v_res_2298_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17(v_skipInstances_boxed_2295_, v_pre_2282_, v_post_2283_, v_usedLetOnly_boxed_2296_, v_skipConstInApp_boxed_2297_, v_x_2286_, v_x_2287_, v_x_2288_, v___y_2289_, v___y_2290_, v___y_2291_, v___y_2292_, v___y_2293_);
lean_dec(v___y_2293_);
lean_dec_ref(v___y_2292_);
lean_dec(v___y_2291_);
lean_dec_ref(v___y_2290_);
lean_dec(v___y_2289_);
return v_res_2298_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0(void){
_start:
{
lean_object* v___x_2299_; lean_object* v___x_2300_; 
v___x_2299_ = lean_obj_once(&l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2, &l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2_once, _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2);
v___x_2300_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_2300_, 0, lean_box(0));
lean_closure_set(v___x_2300_, 1, lean_box(0));
lean_closure_set(v___x_2300_, 2, v___x_2299_);
return v___x_2300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8(lean_object* v_input_2301_, lean_object* v_pre_2302_, lean_object* v_post_2303_, uint8_t v_usedLetOnly_2304_, uint8_t v_skipConstInApp_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_){
_start:
{
uint8_t v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v_a_2314_; lean_object* v___x_2315_; 
v___x_2311_ = 0;
v___x_2312_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0, &l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0_once, _init_l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0);
v___x_2313_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0(lean_box(0), v___x_2312_, v___y_2306_, v___y_2307_, v___y_2308_, v___y_2309_);
v_a_2314_ = lean_ctor_get(v___x_2313_, 0);
lean_inc(v_a_2314_);
lean_dec_ref(v___x_2313_);
v___x_2315_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2302_, v_post_2303_, v_usedLetOnly_2304_, v_skipConstInApp_2305_, v___x_2311_, v_input_2301_, v_a_2314_, v___y_2306_, v___y_2307_, v___y_2308_, v___y_2309_);
if (lean_obj_tag(v___x_2315_) == 0)
{
lean_object* v_a_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2320_; uint8_t v_isShared_2321_; uint8_t v_isSharedCheck_2325_; 
v_a_2316_ = lean_ctor_get(v___x_2315_, 0);
lean_inc(v_a_2316_);
lean_dec_ref_known(v___x_2315_, 1);
v___x_2317_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2317_, 0, lean_box(0));
lean_closure_set(v___x_2317_, 1, lean_box(0));
lean_closure_set(v___x_2317_, 2, v_a_2314_);
v___x_2318_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0(lean_box(0), v___x_2317_, v___y_2306_, v___y_2307_, v___y_2308_, v___y_2309_);
v_isSharedCheck_2325_ = !lean_is_exclusive(v___x_2318_);
if (v_isSharedCheck_2325_ == 0)
{
lean_object* v_unused_2326_; 
v_unused_2326_ = lean_ctor_get(v___x_2318_, 0);
lean_dec(v_unused_2326_);
v___x_2320_ = v___x_2318_;
v_isShared_2321_ = v_isSharedCheck_2325_;
goto v_resetjp_2319_;
}
else
{
lean_dec(v___x_2318_);
v___x_2320_ = lean_box(0);
v_isShared_2321_ = v_isSharedCheck_2325_;
goto v_resetjp_2319_;
}
v_resetjp_2319_:
{
lean_object* v___x_2323_; 
if (v_isShared_2321_ == 0)
{
lean_ctor_set(v___x_2320_, 0, v_a_2316_);
v___x_2323_ = v___x_2320_;
goto v_reusejp_2322_;
}
else
{
lean_object* v_reuseFailAlloc_2324_; 
v_reuseFailAlloc_2324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2324_, 0, v_a_2316_);
v___x_2323_ = v_reuseFailAlloc_2324_;
goto v_reusejp_2322_;
}
v_reusejp_2322_:
{
return v___x_2323_;
}
}
}
else
{
lean_dec(v_a_2314_);
return v___x_2315_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___boxed(lean_object* v_input_2327_, lean_object* v_pre_2328_, lean_object* v_post_2329_, lean_object* v_usedLetOnly_2330_, lean_object* v_skipConstInApp_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_){
_start:
{
uint8_t v_usedLetOnly_boxed_2337_; uint8_t v_skipConstInApp_boxed_2338_; lean_object* v_res_2339_; 
v_usedLetOnly_boxed_2337_ = lean_unbox(v_usedLetOnly_2330_);
v_skipConstInApp_boxed_2338_ = lean_unbox(v_skipConstInApp_2331_);
v_res_2339_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8(v_input_2327_, v_pre_2328_, v_post_2329_, v_usedLetOnly_boxed_2337_, v_skipConstInApp_boxed_2338_, v___y_2332_, v___y_2333_, v___y_2334_, v___y_2335_);
lean_dec(v___y_2335_);
lean_dec_ref(v___y_2334_);
lean_dec(v___y_2333_);
lean_dec_ref(v___y_2332_);
return v_res_2339_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3(lean_object* v___x_2340_, lean_object* v_as_2341_, lean_object* v_j_2342_){
_start:
{
lean_object* v___x_2343_; uint8_t v___x_2344_; 
v___x_2343_ = lean_array_get_size(v_as_2341_);
v___x_2344_ = lean_nat_dec_lt(v_j_2342_, v___x_2343_);
if (v___x_2344_ == 0)
{
lean_object* v___x_2345_; 
lean_dec(v_j_2342_);
v___x_2345_ = lean_box(0);
return v___x_2345_;
}
else
{
lean_object* v___x_2346_; lean_object* v_declName_2347_; uint8_t v___x_2348_; 
v___x_2346_ = lean_array_fget_borrowed(v_as_2341_, v_j_2342_);
v_declName_2347_ = lean_ctor_get(v___x_2346_, 3);
v___x_2348_ = lean_name_eq(v_declName_2347_, v___x_2340_);
if (v___x_2348_ == 0)
{
lean_object* v___x_2349_; lean_object* v___x_2350_; 
v___x_2349_ = lean_unsigned_to_nat(1u);
v___x_2350_ = lean_nat_add(v_j_2342_, v___x_2349_);
lean_dec(v_j_2342_);
v_j_2342_ = v___x_2350_;
goto _start;
}
else
{
lean_object* v___x_2352_; 
v___x_2352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2352_, 0, v_j_2342_);
return v___x_2352_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3___boxed(lean_object* v___x_2353_, lean_object* v_as_2354_, lean_object* v_j_2355_){
_start:
{
lean_object* v_res_2356_; 
v_res_2356_ = l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3(v___x_2353_, v_as_2354_, v_j_2355_);
lean_dec_ref(v_as_2354_);
lean_dec(v___x_2353_);
return v_res_2356_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0(lean_object* v_val_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_){
_start:
{
lean_object* v___x_2363_; lean_object* v___x_2364_; 
v___x_2363_ = lean_st_ref_get(v_val_2357_);
v___x_2364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2364_, 0, v___x_2363_);
return v___x_2364_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0___boxed(lean_object* v_val_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_){
_start:
{
lean_object* v_res_2371_; 
v_res_2371_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0(v_val_2365_, v___y_2366_, v___y_2367_, v___y_2368_, v___y_2369_);
lean_dec(v___y_2369_);
lean_dec_ref(v___y_2368_);
lean_dec(v___y_2367_);
lean_dec_ref(v___y_2366_);
lean_dec(v_val_2365_);
return v_res_2371_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(lean_object* v_val_2372_, lean_object* v_val_2373_, lean_object* v_a_2374_, lean_object* v___x_2375_, lean_object* v_____r_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_){
_start:
{
lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; 
v___x_2382_ = lean_st_ref_take(v_val_2372_);
v___x_2383_ = l_Lean_Elab_FixedParams_Info_setVarying(v_val_2373_, v_a_2374_, v___x_2382_);
v___x_2384_ = lean_st_ref_put(v_val_2372_, v___x_2383_);
v___x_2385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2385_, 0, v___x_2375_);
v___x_2386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2386_, 0, v___x_2385_);
return v___x_2386_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1___boxed(lean_object* v_val_2387_, lean_object* v_val_2388_, lean_object* v_a_2389_, lean_object* v___x_2390_, lean_object* v_____r_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_){
_start:
{
lean_object* v_res_2397_; 
v_res_2397_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2387_, v_val_2388_, v_a_2389_, v___x_2390_, v_____r_2391_, v___y_2392_, v___y_2393_, v___y_2394_, v___y_2395_);
lean_dec(v___y_2395_);
lean_dec_ref(v___y_2394_);
lean_dec(v___y_2393_);
lean_dec_ref(v___y_2392_);
lean_dec(v_val_2388_);
lean_dec(v_val_2387_);
return v_res_2397_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(lean_object* v_val_2398_, lean_object* v_val_2399_, lean_object* v_next_2400_, lean_object* v_next_2401_, lean_object* v___x_2402_, lean_object* v_upperBound_2403_, lean_object* v_params_2404_, lean_object* v___x_2405_, lean_object* v_a_2406_, uint8_t v_b_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_){
_start:
{
uint8_t v_a_2414_; uint8_t v___x_2418_; 
v___x_2418_ = lean_nat_dec_lt(v_a_2406_, v_upperBound_2403_);
if (v___x_2418_ == 0)
{
lean_object* v___x_2419_; lean_object* v___x_2420_; 
lean_dec(v_a_2406_);
lean_dec_ref(v___x_2405_);
lean_dec(v_next_2400_);
v___x_2419_ = lean_box(v_b_2407_);
v___x_2420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2420_, 0, v___x_2419_);
return v___x_2420_;
}
else
{
uint8_t v___x_2421_; lean_object* v___y_2423_; lean_object* v___x_2437_; uint8_t v___x_2438_; 
v___x_2421_ = lean_nat_dec_lt(v_next_2400_, v___x_2402_);
v___x_2437_ = lean_st_ref_get(v_val_2398_);
v___x_2438_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_next_2401_, v_a_2406_, v___x_2437_);
lean_dec(v___x_2437_);
if (v___x_2438_ == 0)
{
v_a_2414_ = v_b_2407_;
goto v___jp_2413_;
}
else
{
lean_object* v___x_2439_; uint8_t v_foApprox_2440_; uint8_t v_ctxApprox_2441_; uint8_t v_quasiPatternApprox_2442_; uint8_t v_constApprox_2443_; uint8_t v_isDefEqStuckEx_2444_; uint8_t v_unificationHints_2445_; uint8_t v_assignSyntheticOpaque_2446_; uint8_t v_offsetCnstrs_2447_; uint8_t v_transparency_2448_; uint8_t v_etaStruct_2449_; uint8_t v_univApprox_2450_; uint8_t v_iota_2451_; uint8_t v_beta_2452_; uint8_t v_proj_2453_; uint8_t v_zeta_2454_; uint8_t v_zetaDelta_2455_; uint8_t v_zetaUnused_2456_; uint8_t v_zetaHave_2457_; uint8_t v_canUnfoldPredicateConfig_2458_; lean_object* v___x_2460_; uint8_t v_isShared_2461_; uint8_t v_isSharedCheck_2488_; 
v___x_2439_ = l_Lean_Meta_Context_config(v___y_2408_);
v_foApprox_2440_ = lean_ctor_get_uint8(v___x_2439_, 0);
v_ctxApprox_2441_ = lean_ctor_get_uint8(v___x_2439_, 1);
v_quasiPatternApprox_2442_ = lean_ctor_get_uint8(v___x_2439_, 2);
v_constApprox_2443_ = lean_ctor_get_uint8(v___x_2439_, 3);
v_isDefEqStuckEx_2444_ = lean_ctor_get_uint8(v___x_2439_, 4);
v_unificationHints_2445_ = lean_ctor_get_uint8(v___x_2439_, 5);
v_assignSyntheticOpaque_2446_ = lean_ctor_get_uint8(v___x_2439_, 7);
v_offsetCnstrs_2447_ = lean_ctor_get_uint8(v___x_2439_, 8);
v_transparency_2448_ = lean_ctor_get_uint8(v___x_2439_, 9);
v_etaStruct_2449_ = lean_ctor_get_uint8(v___x_2439_, 10);
v_univApprox_2450_ = lean_ctor_get_uint8(v___x_2439_, 11);
v_iota_2451_ = lean_ctor_get_uint8(v___x_2439_, 12);
v_beta_2452_ = lean_ctor_get_uint8(v___x_2439_, 13);
v_proj_2453_ = lean_ctor_get_uint8(v___x_2439_, 14);
v_zeta_2454_ = lean_ctor_get_uint8(v___x_2439_, 15);
v_zetaDelta_2455_ = lean_ctor_get_uint8(v___x_2439_, 16);
v_zetaUnused_2456_ = lean_ctor_get_uint8(v___x_2439_, 17);
v_zetaHave_2457_ = lean_ctor_get_uint8(v___x_2439_, 18);
v_canUnfoldPredicateConfig_2458_ = lean_ctor_get_uint8(v___x_2439_, 19);
v_isSharedCheck_2488_ = !lean_is_exclusive(v___x_2439_);
if (v_isSharedCheck_2488_ == 0)
{
v___x_2460_ = v___x_2439_;
v_isShared_2461_ = v_isSharedCheck_2488_;
goto v_resetjp_2459_;
}
else
{
lean_dec(v___x_2439_);
v___x_2460_ = lean_box(0);
v_isShared_2461_ = v_isSharedCheck_2488_;
goto v_resetjp_2459_;
}
v_resetjp_2459_:
{
uint8_t v_trackZetaDelta_2462_; lean_object* v_zetaDeltaSet_2463_; lean_object* v_lctx_2464_; lean_object* v_localInstances_2465_; lean_object* v_defEqCtx_x3f_2466_; lean_object* v_synthPendingDepth_2467_; lean_object* v_customCanUnfoldPredicate_x3f_2468_; uint8_t v_univApprox_2469_; uint8_t v_inTypeClassResolution_2470_; uint8_t v_cacheInferType_2471_; uint8_t v___x_2472_; lean_object* v___x_2474_; 
v_trackZetaDelta_2462_ = lean_ctor_get_uint8(v___y_2408_, sizeof(void*)*7);
v_zetaDeltaSet_2463_ = lean_ctor_get(v___y_2408_, 1);
v_lctx_2464_ = lean_ctor_get(v___y_2408_, 2);
v_localInstances_2465_ = lean_ctor_get(v___y_2408_, 3);
v_defEqCtx_x3f_2466_ = lean_ctor_get(v___y_2408_, 4);
v_synthPendingDepth_2467_ = lean_ctor_get(v___y_2408_, 5);
v_customCanUnfoldPredicate_x3f_2468_ = lean_ctor_get(v___y_2408_, 6);
v_univApprox_2469_ = lean_ctor_get_uint8(v___y_2408_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2470_ = lean_ctor_get_uint8(v___y_2408_, sizeof(void*)*7 + 2);
v_cacheInferType_2471_ = lean_ctor_get_uint8(v___y_2408_, sizeof(void*)*7 + 3);
v___x_2472_ = 0;
if (v_isShared_2461_ == 0)
{
v___x_2474_ = v___x_2460_;
goto v_reusejp_2473_;
}
else
{
lean_object* v_reuseFailAlloc_2487_; 
v_reuseFailAlloc_2487_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_2487_, 0, v_foApprox_2440_);
lean_ctor_set_uint8(v_reuseFailAlloc_2487_, 1, v_ctxApprox_2441_);
lean_ctor_set_uint8(v_reuseFailAlloc_2487_, 2, v_quasiPatternApprox_2442_);
lean_ctor_set_uint8(v_reuseFailAlloc_2487_, 3, v_constApprox_2443_);
lean_ctor_set_uint8(v_reuseFailAlloc_2487_, 4, v_isDefEqStuckEx_2444_);
lean_ctor_set_uint8(v_reuseFailAlloc_2487_, 5, v_unificationHints_2445_);
lean_ctor_set_uint8(v_reuseFailAlloc_2487_, 7, v_assignSyntheticOpaque_2446_);
lean_ctor_set_uint8(v_reuseFailAlloc_2487_, 8, v_offsetCnstrs_2447_);
lean_ctor_set_uint8(v_reuseFailAlloc_2487_, 9, v_transparency_2448_);
lean_ctor_set_uint8(v_reuseFailAlloc_2487_, 10, v_etaStruct_2449_);
lean_ctor_set_uint8(v_reuseFailAlloc_2487_, 11, v_univApprox_2450_);
lean_ctor_set_uint8(v_reuseFailAlloc_2487_, 12, v_iota_2451_);
lean_ctor_set_uint8(v_reuseFailAlloc_2487_, 13, v_beta_2452_);
lean_ctor_set_uint8(v_reuseFailAlloc_2487_, 14, v_proj_2453_);
lean_ctor_set_uint8(v_reuseFailAlloc_2487_, 15, v_zeta_2454_);
lean_ctor_set_uint8(v_reuseFailAlloc_2487_, 16, v_zetaDelta_2455_);
lean_ctor_set_uint8(v_reuseFailAlloc_2487_, 17, v_zetaUnused_2456_);
lean_ctor_set_uint8(v_reuseFailAlloc_2487_, 18, v_zetaHave_2457_);
lean_ctor_set_uint8(v_reuseFailAlloc_2487_, 19, v_canUnfoldPredicateConfig_2458_);
v___x_2474_ = v_reuseFailAlloc_2487_;
goto v_reusejp_2473_;
}
v_reusejp_2473_:
{
uint64_t v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; uint8_t v_transparency_2479_; lean_object* v___x_2480_; uint8_t v___x_2481_; uint8_t v___x_2482_; 
lean_ctor_set_uint8(v___x_2474_, 6, v___x_2472_);
v___x_2475_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2474_);
v___x_2476_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2476_, 0, v___x_2474_);
lean_ctor_set_uint64(v___x_2476_, sizeof(void*)*1, v___x_2475_);
lean_inc(v_customCanUnfoldPredicate_x3f_2468_);
lean_inc(v_synthPendingDepth_2467_);
lean_inc(v_defEqCtx_x3f_2466_);
lean_inc_ref(v_localInstances_2465_);
lean_inc_ref(v_lctx_2464_);
lean_inc(v_zetaDeltaSet_2463_);
lean_inc_ref(v___x_2476_);
v___x_2477_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2477_, 0, v___x_2476_);
lean_ctor_set(v___x_2477_, 1, v_zetaDeltaSet_2463_);
lean_ctor_set(v___x_2477_, 2, v_lctx_2464_);
lean_ctor_set(v___x_2477_, 3, v_localInstances_2465_);
lean_ctor_set(v___x_2477_, 4, v_defEqCtx_x3f_2466_);
lean_ctor_set(v___x_2477_, 5, v_synthPendingDepth_2467_);
lean_ctor_set(v___x_2477_, 6, v_customCanUnfoldPredicate_x3f_2468_);
lean_ctor_set_uint8(v___x_2477_, sizeof(void*)*7, v_trackZetaDelta_2462_);
lean_ctor_set_uint8(v___x_2477_, sizeof(void*)*7 + 1, v_univApprox_2469_);
lean_ctor_set_uint8(v___x_2477_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2470_);
lean_ctor_set_uint8(v___x_2477_, sizeof(void*)*7 + 3, v_cacheInferType_2471_);
v___x_2478_ = l_Lean_Meta_Context_config(v___x_2477_);
v_transparency_2479_ = lean_ctor_get_uint8(v___x_2478_, 9);
lean_dec_ref(v___x_2478_);
v___x_2480_ = lean_array_fget_borrowed(v_params_2404_, v_a_2406_);
v___x_2481_ = 2;
v___x_2482_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2479_, v___x_2481_);
if (v___x_2482_ == 0)
{
lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; 
lean_dec_ref_known(v___x_2477_, 7);
v___x_2483_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2481_, v___x_2476_);
lean_inc(v_customCanUnfoldPredicate_x3f_2468_);
lean_inc(v_synthPendingDepth_2467_);
lean_inc(v_defEqCtx_x3f_2466_);
lean_inc_ref(v_localInstances_2465_);
lean_inc_ref(v_lctx_2464_);
lean_inc(v_zetaDeltaSet_2463_);
v___x_2484_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2484_, 0, v___x_2483_);
lean_ctor_set(v___x_2484_, 1, v_zetaDeltaSet_2463_);
lean_ctor_set(v___x_2484_, 2, v_lctx_2464_);
lean_ctor_set(v___x_2484_, 3, v_localInstances_2465_);
lean_ctor_set(v___x_2484_, 4, v_defEqCtx_x3f_2466_);
lean_ctor_set(v___x_2484_, 5, v_synthPendingDepth_2467_);
lean_ctor_set(v___x_2484_, 6, v_customCanUnfoldPredicate_x3f_2468_);
lean_ctor_set_uint8(v___x_2484_, sizeof(void*)*7, v_trackZetaDelta_2462_);
lean_ctor_set_uint8(v___x_2484_, sizeof(void*)*7 + 1, v_univApprox_2469_);
lean_ctor_set_uint8(v___x_2484_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2470_);
lean_ctor_set_uint8(v___x_2484_, sizeof(void*)*7 + 3, v_cacheInferType_2471_);
lean_inc_ref(v___x_2405_);
lean_inc(v___x_2480_);
v___x_2485_ = l_Lean_Meta_isExprDefEq(v___x_2480_, v___x_2405_, v___x_2484_, v___y_2409_, v___y_2410_, v___y_2411_);
lean_dec_ref_known(v___x_2484_, 7);
v___y_2423_ = v___x_2485_;
goto v___jp_2422_;
}
else
{
lean_object* v___x_2486_; 
lean_dec_ref_known(v___x_2476_, 1);
lean_inc_ref(v___x_2405_);
lean_inc(v___x_2480_);
v___x_2486_ = l_Lean_Meta_isExprDefEq(v___x_2480_, v___x_2405_, v___x_2477_, v___y_2409_, v___y_2410_, v___y_2411_);
lean_dec_ref_known(v___x_2477_, 7);
v___y_2423_ = v___x_2486_;
goto v___jp_2422_;
}
}
}
}
v___jp_2422_:
{
if (lean_obj_tag(v___y_2423_) == 0)
{
lean_object* v_a_2424_; uint8_t v___x_2425_; 
v_a_2424_ = lean_ctor_get(v___y_2423_, 0);
lean_inc(v_a_2424_);
lean_dec_ref_known(v___y_2423_, 1);
v___x_2425_ = lean_unbox(v_a_2424_);
lean_dec(v_a_2424_);
if (v___x_2425_ == 0)
{
v_a_2414_ = v_b_2407_;
goto v___jp_2413_;
}
else
{
lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; 
v___x_2426_ = lean_st_ref_take(v_val_2398_);
lean_inc(v_a_2406_);
lean_inc(v_next_2400_);
v___x_2427_ = l_Lean_Elab_FixedParams_Info_setCallerParam(v_val_2399_, v_next_2400_, v_next_2401_, v_a_2406_, v___x_2426_);
v___x_2428_ = lean_st_ref_put(v_val_2398_, v___x_2427_);
v_a_2414_ = v___x_2421_;
goto v___jp_2413_;
}
}
else
{
lean_object* v_a_2429_; lean_object* v___x_2431_; uint8_t v_isShared_2432_; uint8_t v_isSharedCheck_2436_; 
lean_dec(v_a_2406_);
lean_dec_ref(v___x_2405_);
lean_dec(v_next_2400_);
v_a_2429_ = lean_ctor_get(v___y_2423_, 0);
v_isSharedCheck_2436_ = !lean_is_exclusive(v___y_2423_);
if (v_isSharedCheck_2436_ == 0)
{
v___x_2431_ = v___y_2423_;
v_isShared_2432_ = v_isSharedCheck_2436_;
goto v_resetjp_2430_;
}
else
{
lean_inc(v_a_2429_);
lean_dec(v___y_2423_);
v___x_2431_ = lean_box(0);
v_isShared_2432_ = v_isSharedCheck_2436_;
goto v_resetjp_2430_;
}
v_resetjp_2430_:
{
lean_object* v___x_2434_; 
if (v_isShared_2432_ == 0)
{
v___x_2434_ = v___x_2431_;
goto v_reusejp_2433_;
}
else
{
lean_object* v_reuseFailAlloc_2435_; 
v_reuseFailAlloc_2435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2435_, 0, v_a_2429_);
v___x_2434_ = v_reuseFailAlloc_2435_;
goto v_reusejp_2433_;
}
v_reusejp_2433_:
{
return v___x_2434_;
}
}
}
}
}
v___jp_2413_:
{
lean_object* v___x_2415_; lean_object* v___x_2416_; 
v___x_2415_ = lean_unsigned_to_nat(1u);
v___x_2416_ = lean_nat_add(v_a_2406_, v___x_2415_);
lean_dec(v_a_2406_);
v_a_2406_ = v___x_2416_;
v_b_2407_ = v_a_2414_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___boxed(lean_object* v_val_2489_, lean_object* v_val_2490_, lean_object* v_next_2491_, lean_object* v_next_2492_, lean_object* v___x_2493_, lean_object* v_upperBound_2494_, lean_object* v_params_2495_, lean_object* v___x_2496_, lean_object* v_a_2497_, lean_object* v_b_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_){
_start:
{
uint8_t v_b_boxed_2504_; lean_object* v_res_2505_; 
v_b_boxed_2504_ = lean_unbox(v_b_2498_);
v_res_2505_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(v_val_2489_, v_val_2490_, v_next_2491_, v_next_2492_, v___x_2493_, v_upperBound_2494_, v_params_2495_, v___x_2496_, v_a_2497_, v_b_boxed_2504_, v___y_2499_, v___y_2500_, v___y_2501_, v___y_2502_);
lean_dec(v___y_2502_);
lean_dec_ref(v___y_2501_);
lean_dec(v___y_2500_);
lean_dec_ref(v___y_2499_);
lean_dec_ref(v_params_2495_);
lean_dec(v_upperBound_2494_);
lean_dec(v___x_2493_);
lean_dec(v_next_2492_);
lean_dec(v_val_2490_);
lean_dec(v_val_2489_);
return v_res_2505_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6(void){
_start:
{
lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; 
v___x_2516_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3));
v___x_2517_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__5));
v___x_2518_ = l_Lean_Name_append(v___x_2517_, v___x_2516_);
return v___x_2518_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8(void){
_start:
{
lean_object* v___x_2520_; lean_object* v___x_2521_; 
v___x_2520_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__7));
v___x_2521_ = l_Lean_stringToMessageData(v___x_2520_);
return v___x_2521_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9(void){
_start:
{
lean_object* v___x_2522_; lean_object* v___x_2523_; 
v___x_2522_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2));
v___x_2523_ = l_Lean_stringToMessageData(v___x_2522_);
return v___x_2523_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11(void){
_start:
{
lean_object* v___x_2525_; lean_object* v___x_2526_; 
v___x_2525_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__10));
v___x_2526_ = l_Lean_stringToMessageData(v___x_2525_);
return v___x_2526_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13(void){
_start:
{
lean_object* v___x_2528_; lean_object* v___x_2529_; 
v___x_2528_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__12));
v___x_2529_ = l_Lean_stringToMessageData(v___x_2528_);
return v___x_2529_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15(void){
_start:
{
lean_object* v___x_2531_; lean_object* v___x_2532_; 
v___x_2531_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__14));
v___x_2532_ = l_Lean_stringToMessageData(v___x_2531_);
return v___x_2532_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17(void){
_start:
{
lean_object* v___x_2534_; lean_object* v___x_2535_; 
v___x_2534_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__16));
v___x_2535_ = l_Lean_stringToMessageData(v___x_2534_);
return v___x_2535_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19(void){
_start:
{
lean_object* v___x_2537_; lean_object* v___x_2538_; 
v___x_2537_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__18));
v___x_2538_ = l_Lean_stringToMessageData(v___x_2537_);
return v___x_2538_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg(lean_object* v_val_2539_, lean_object* v_val_2540_, lean_object* v_upperBound_2541_, lean_object* v_args_2542_, lean_object* v_e_2543_, lean_object* v_next_2544_, lean_object* v_params_2545_, lean_object* v_a_2546_, lean_object* v_b_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_, lean_object* v___y_2551_){
_start:
{
lean_object* v_a_2554_; lean_object* v___y_2559_; uint8_t v___x_2578_; 
v___x_2578_ = lean_nat_dec_lt(v_a_2546_, v_upperBound_2541_);
if (v___x_2578_ == 0)
{
lean_object* v___x_2579_; 
lean_dec(v_a_2546_);
lean_dec_ref(v_e_2543_);
lean_dec(v_val_2540_);
v___x_2579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2579_, 0, v_b_2547_);
return v___x_2579_;
}
else
{
lean_object* v___x_2580_; lean_object* v___x_2587_; lean_object* v___x_2588_; 
v___x_2580_ = lean_box(0);
v___x_2587_ = l_Lean_instInhabitedExpr;
v___x_2588_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0(v_val_2539_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_);
if (lean_obj_tag(v___x_2588_) == 0)
{
lean_object* v_a_2589_; uint8_t v___x_2590_; 
v_a_2589_ = lean_ctor_get(v___x_2588_, 0);
lean_inc(v_a_2589_);
lean_dec_ref_known(v___x_2588_, 1);
v___x_2590_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_val_2540_, v_a_2546_, v_a_2589_);
lean_dec(v_a_2589_);
if (v___x_2590_ == 0)
{
v_a_2554_ = v___x_2580_;
goto v___jp_2553_;
}
else
{
lean_object* v___x_2591_; uint8_t v___x_2592_; 
v___x_2591_ = lean_array_get_size(v_args_2542_);
v___x_2592_ = lean_nat_dec_lt(v_a_2546_, v___x_2591_);
if (v___x_2592_ == 0)
{
lean_object* v_toCold_2593_; lean_object* v_options_2594_; uint8_t v_hasTrace_2595_; 
v_toCold_2593_ = lean_ctor_get(v___y_2550_, 0);
v_options_2594_ = lean_ctor_get(v_toCold_2593_, 2);
v_hasTrace_2595_ = lean_ctor_get_uint8(v_options_2594_, sizeof(void*)*1);
if (v_hasTrace_2595_ == 0)
{
goto v___jp_2583_;
}
else
{
lean_object* v_inheritedTraceOptions_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; uint8_t v___x_2599_; 
v_inheritedTraceOptions_2596_ = lean_ctor_get(v_toCold_2593_, 11);
v___x_2597_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3));
v___x_2598_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6);
v___x_2599_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2596_, v_options_2594_, v___x_2598_);
if (v___x_2599_ == 0)
{
goto v___jp_2583_;
}
else
{
lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; 
v___x_2600_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8);
lean_inc(v_val_2540_);
v___x_2601_ = l_Nat_reprFast(v_val_2540_);
v___x_2602_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2602_, 0, v___x_2601_);
v___x_2603_ = l_Lean_MessageData_ofFormat(v___x_2602_);
v___x_2604_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2604_, 0, v___x_2600_);
lean_ctor_set(v___x_2604_, 1, v___x_2603_);
v___x_2605_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9);
v___x_2606_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2606_, 0, v___x_2604_);
lean_ctor_set(v___x_2606_, 1, v___x_2605_);
lean_inc(v_a_2546_);
v___x_2607_ = l_Nat_reprFast(v_a_2546_);
v___x_2608_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2608_, 0, v___x_2607_);
v___x_2609_ = l_Lean_MessageData_ofFormat(v___x_2608_);
lean_inc_ref(v___x_2609_);
v___x_2610_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2610_, 0, v___x_2606_);
lean_ctor_set(v___x_2610_, 1, v___x_2609_);
v___x_2611_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11);
v___x_2612_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2612_, 0, v___x_2610_);
lean_ctor_set(v___x_2612_, 1, v___x_2611_);
lean_inc_ref(v_e_2543_);
v___x_2613_ = l_Lean_MessageData_ofExpr(v_e_2543_);
v___x_2614_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2614_, 0, v___x_2612_);
lean_ctor_set(v___x_2614_, 1, v___x_2613_);
v___x_2615_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13);
v___x_2616_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2616_, 0, v___x_2614_);
lean_ctor_set(v___x_2616_, 1, v___x_2615_);
v___x_2617_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2617_, 0, v___x_2616_);
lean_ctor_set(v___x_2617_, 1, v___x_2609_);
v___x_2618_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v___x_2597_, v___x_2617_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_);
if (lean_obj_tag(v___x_2618_) == 0)
{
lean_object* v_a_2619_; lean_object* v___x_2620_; 
v_a_2619_ = lean_ctor_get(v___x_2618_, 0);
lean_inc(v_a_2619_);
lean_dec_ref_known(v___x_2618_, 1);
lean_inc(v_a_2546_);
v___x_2620_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2539_, v_val_2540_, v_a_2546_, v___x_2580_, v_a_2619_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_);
v___y_2559_ = v___x_2620_;
goto v___jp_2558_;
}
else
{
lean_dec(v_a_2546_);
lean_dec_ref(v_e_2543_);
lean_dec(v_val_2540_);
return v___x_2618_;
}
}
}
}
else
{
lean_object* v___x_2621_; lean_object* v___x_2622_; 
v___x_2621_ = lean_array_fget_borrowed(v_args_2542_, v_a_2546_);
v___x_2622_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0(v_val_2539_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_);
if (lean_obj_tag(v___x_2622_) == 0)
{
lean_object* v_a_2623_; lean_object* v___x_2624_; 
v_a_2623_ = lean_ctor_get(v___x_2622_, 0);
lean_inc(v_a_2623_);
lean_dec_ref_known(v___x_2622_, 1);
v___x_2624_ = l_Lean_Elab_FixedParams_Info_getCallerParam_x3f(v_val_2540_, v_a_2546_, v_next_2544_, v_a_2623_);
lean_dec(v_a_2623_);
if (lean_obj_tag(v___x_2624_) == 1)
{
lean_object* v_val_2625_; lean_object* v___x_2627_; uint8_t v_isShared_2628_; uint8_t v_isSharedCheck_2726_; 
v_val_2625_ = lean_ctor_get(v___x_2624_, 0);
v_isSharedCheck_2726_ = !lean_is_exclusive(v___x_2624_);
if (v_isSharedCheck_2726_ == 0)
{
v___x_2627_ = v___x_2624_;
v_isShared_2628_ = v_isSharedCheck_2726_;
goto v_resetjp_2626_;
}
else
{
lean_inc(v_val_2625_);
lean_dec(v___x_2624_);
v___x_2627_ = lean_box(0);
v_isShared_2628_ = v_isSharedCheck_2726_;
goto v_resetjp_2626_;
}
v_resetjp_2626_:
{
lean_object* v___x_2629_; uint8_t v_foApprox_2630_; uint8_t v_ctxApprox_2631_; uint8_t v_quasiPatternApprox_2632_; uint8_t v_constApprox_2633_; uint8_t v_isDefEqStuckEx_2634_; uint8_t v_unificationHints_2635_; uint8_t v_assignSyntheticOpaque_2636_; uint8_t v_offsetCnstrs_2637_; uint8_t v_transparency_2638_; uint8_t v_etaStruct_2639_; uint8_t v_univApprox_2640_; uint8_t v_iota_2641_; uint8_t v_beta_2642_; uint8_t v_proj_2643_; uint8_t v_zeta_2644_; uint8_t v_zetaDelta_2645_; uint8_t v_zetaUnused_2646_; uint8_t v_zetaHave_2647_; uint8_t v_canUnfoldPredicateConfig_2648_; lean_object* v___x_2650_; uint8_t v_isShared_2651_; uint8_t v_isSharedCheck_2725_; 
v___x_2629_ = l_Lean_Meta_Context_config(v___y_2548_);
v_foApprox_2630_ = lean_ctor_get_uint8(v___x_2629_, 0);
v_ctxApprox_2631_ = lean_ctor_get_uint8(v___x_2629_, 1);
v_quasiPatternApprox_2632_ = lean_ctor_get_uint8(v___x_2629_, 2);
v_constApprox_2633_ = lean_ctor_get_uint8(v___x_2629_, 3);
v_isDefEqStuckEx_2634_ = lean_ctor_get_uint8(v___x_2629_, 4);
v_unificationHints_2635_ = lean_ctor_get_uint8(v___x_2629_, 5);
v_assignSyntheticOpaque_2636_ = lean_ctor_get_uint8(v___x_2629_, 7);
v_offsetCnstrs_2637_ = lean_ctor_get_uint8(v___x_2629_, 8);
v_transparency_2638_ = lean_ctor_get_uint8(v___x_2629_, 9);
v_etaStruct_2639_ = lean_ctor_get_uint8(v___x_2629_, 10);
v_univApprox_2640_ = lean_ctor_get_uint8(v___x_2629_, 11);
v_iota_2641_ = lean_ctor_get_uint8(v___x_2629_, 12);
v_beta_2642_ = lean_ctor_get_uint8(v___x_2629_, 13);
v_proj_2643_ = lean_ctor_get_uint8(v___x_2629_, 14);
v_zeta_2644_ = lean_ctor_get_uint8(v___x_2629_, 15);
v_zetaDelta_2645_ = lean_ctor_get_uint8(v___x_2629_, 16);
v_zetaUnused_2646_ = lean_ctor_get_uint8(v___x_2629_, 17);
v_zetaHave_2647_ = lean_ctor_get_uint8(v___x_2629_, 18);
v_canUnfoldPredicateConfig_2648_ = lean_ctor_get_uint8(v___x_2629_, 19);
v_isSharedCheck_2725_ = !lean_is_exclusive(v___x_2629_);
if (v_isSharedCheck_2725_ == 0)
{
v___x_2650_ = v___x_2629_;
v_isShared_2651_ = v_isSharedCheck_2725_;
goto v_resetjp_2649_;
}
else
{
lean_dec(v___x_2629_);
v___x_2650_ = lean_box(0);
v_isShared_2651_ = v_isSharedCheck_2725_;
goto v_resetjp_2649_;
}
v_resetjp_2649_:
{
uint8_t v_trackZetaDelta_2652_; lean_object* v_zetaDeltaSet_2653_; lean_object* v_lctx_2654_; lean_object* v_localInstances_2655_; lean_object* v_defEqCtx_x3f_2656_; lean_object* v_synthPendingDepth_2657_; lean_object* v_customCanUnfoldPredicate_x3f_2658_; uint8_t v_univApprox_2659_; uint8_t v_inTypeClassResolution_2660_; uint8_t v_cacheInferType_2661_; uint8_t v___x_2662_; lean_object* v___x_2664_; 
v_trackZetaDelta_2652_ = lean_ctor_get_uint8(v___y_2548_, sizeof(void*)*7);
v_zetaDeltaSet_2653_ = lean_ctor_get(v___y_2548_, 1);
v_lctx_2654_ = lean_ctor_get(v___y_2548_, 2);
v_localInstances_2655_ = lean_ctor_get(v___y_2548_, 3);
v_defEqCtx_x3f_2656_ = lean_ctor_get(v___y_2548_, 4);
v_synthPendingDepth_2657_ = lean_ctor_get(v___y_2548_, 5);
v_customCanUnfoldPredicate_x3f_2658_ = lean_ctor_get(v___y_2548_, 6);
v_univApprox_2659_ = lean_ctor_get_uint8(v___y_2548_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2660_ = lean_ctor_get_uint8(v___y_2548_, sizeof(void*)*7 + 2);
v_cacheInferType_2661_ = lean_ctor_get_uint8(v___y_2548_, sizeof(void*)*7 + 3);
v___x_2662_ = 0;
if (v_isShared_2651_ == 0)
{
v___x_2664_ = v___x_2650_;
goto v_reusejp_2663_;
}
else
{
lean_object* v_reuseFailAlloc_2724_; 
v_reuseFailAlloc_2724_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_2724_, 0, v_foApprox_2630_);
lean_ctor_set_uint8(v_reuseFailAlloc_2724_, 1, v_ctxApprox_2631_);
lean_ctor_set_uint8(v_reuseFailAlloc_2724_, 2, v_quasiPatternApprox_2632_);
lean_ctor_set_uint8(v_reuseFailAlloc_2724_, 3, v_constApprox_2633_);
lean_ctor_set_uint8(v_reuseFailAlloc_2724_, 4, v_isDefEqStuckEx_2634_);
lean_ctor_set_uint8(v_reuseFailAlloc_2724_, 5, v_unificationHints_2635_);
lean_ctor_set_uint8(v_reuseFailAlloc_2724_, 7, v_assignSyntheticOpaque_2636_);
lean_ctor_set_uint8(v_reuseFailAlloc_2724_, 8, v_offsetCnstrs_2637_);
lean_ctor_set_uint8(v_reuseFailAlloc_2724_, 9, v_transparency_2638_);
lean_ctor_set_uint8(v_reuseFailAlloc_2724_, 10, v_etaStruct_2639_);
lean_ctor_set_uint8(v_reuseFailAlloc_2724_, 11, v_univApprox_2640_);
lean_ctor_set_uint8(v_reuseFailAlloc_2724_, 12, v_iota_2641_);
lean_ctor_set_uint8(v_reuseFailAlloc_2724_, 13, v_beta_2642_);
lean_ctor_set_uint8(v_reuseFailAlloc_2724_, 14, v_proj_2643_);
lean_ctor_set_uint8(v_reuseFailAlloc_2724_, 15, v_zeta_2644_);
lean_ctor_set_uint8(v_reuseFailAlloc_2724_, 16, v_zetaDelta_2645_);
lean_ctor_set_uint8(v_reuseFailAlloc_2724_, 17, v_zetaUnused_2646_);
lean_ctor_set_uint8(v_reuseFailAlloc_2724_, 18, v_zetaHave_2647_);
lean_ctor_set_uint8(v_reuseFailAlloc_2724_, 19, v_canUnfoldPredicateConfig_2648_);
v___x_2664_ = v_reuseFailAlloc_2724_;
goto v_reusejp_2663_;
}
v_reusejp_2663_:
{
uint64_t v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; uint8_t v_transparency_2669_; lean_object* v___x_2670_; lean_object* v___y_2672_; uint8_t v___x_2718_; uint8_t v___x_2719_; 
lean_ctor_set_uint8(v___x_2664_, 6, v___x_2662_);
v___x_2665_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2664_);
v___x_2666_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2666_, 0, v___x_2664_);
lean_ctor_set_uint64(v___x_2666_, sizeof(void*)*1, v___x_2665_);
lean_inc(v_customCanUnfoldPredicate_x3f_2658_);
lean_inc(v_synthPendingDepth_2657_);
lean_inc(v_defEqCtx_x3f_2656_);
lean_inc_ref(v_localInstances_2655_);
lean_inc_ref(v_lctx_2654_);
lean_inc(v_zetaDeltaSet_2653_);
lean_inc_ref(v___x_2666_);
v___x_2667_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2667_, 0, v___x_2666_);
lean_ctor_set(v___x_2667_, 1, v_zetaDeltaSet_2653_);
lean_ctor_set(v___x_2667_, 2, v_lctx_2654_);
lean_ctor_set(v___x_2667_, 3, v_localInstances_2655_);
lean_ctor_set(v___x_2667_, 4, v_defEqCtx_x3f_2656_);
lean_ctor_set(v___x_2667_, 5, v_synthPendingDepth_2657_);
lean_ctor_set(v___x_2667_, 6, v_customCanUnfoldPredicate_x3f_2658_);
lean_ctor_set_uint8(v___x_2667_, sizeof(void*)*7, v_trackZetaDelta_2652_);
lean_ctor_set_uint8(v___x_2667_, sizeof(void*)*7 + 1, v_univApprox_2659_);
lean_ctor_set_uint8(v___x_2667_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2660_);
lean_ctor_set_uint8(v___x_2667_, sizeof(void*)*7 + 3, v_cacheInferType_2661_);
v___x_2668_ = l_Lean_Meta_Context_config(v___x_2667_);
v_transparency_2669_ = lean_ctor_get_uint8(v___x_2668_, 9);
lean_dec_ref(v___x_2668_);
v___x_2670_ = lean_array_get_borrowed(v___x_2587_, v_params_2545_, v_val_2625_);
lean_dec(v_val_2625_);
v___x_2718_ = 2;
v___x_2719_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2669_, v___x_2718_);
if (v___x_2719_ == 0)
{
lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; 
lean_dec_ref_known(v___x_2667_, 7);
v___x_2720_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2718_, v___x_2666_);
lean_inc(v_customCanUnfoldPredicate_x3f_2658_);
lean_inc(v_synthPendingDepth_2657_);
lean_inc(v_defEqCtx_x3f_2656_);
lean_inc_ref(v_localInstances_2655_);
lean_inc_ref(v_lctx_2654_);
lean_inc(v_zetaDeltaSet_2653_);
v___x_2721_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2721_, 0, v___x_2720_);
lean_ctor_set(v___x_2721_, 1, v_zetaDeltaSet_2653_);
lean_ctor_set(v___x_2721_, 2, v_lctx_2654_);
lean_ctor_set(v___x_2721_, 3, v_localInstances_2655_);
lean_ctor_set(v___x_2721_, 4, v_defEqCtx_x3f_2656_);
lean_ctor_set(v___x_2721_, 5, v_synthPendingDepth_2657_);
lean_ctor_set(v___x_2721_, 6, v_customCanUnfoldPredicate_x3f_2658_);
lean_ctor_set_uint8(v___x_2721_, sizeof(void*)*7, v_trackZetaDelta_2652_);
lean_ctor_set_uint8(v___x_2721_, sizeof(void*)*7 + 1, v_univApprox_2659_);
lean_ctor_set_uint8(v___x_2721_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2660_);
lean_ctor_set_uint8(v___x_2721_, sizeof(void*)*7 + 3, v_cacheInferType_2661_);
lean_inc(v___x_2621_);
lean_inc(v___x_2670_);
v___x_2722_ = l_Lean_Meta_isExprDefEq(v___x_2670_, v___x_2621_, v___x_2721_, v___y_2549_, v___y_2550_, v___y_2551_);
lean_dec_ref_known(v___x_2721_, 7);
v___y_2672_ = v___x_2722_;
goto v___jp_2671_;
}
else
{
lean_object* v___x_2723_; 
lean_dec_ref_known(v___x_2666_, 1);
lean_inc(v___x_2621_);
lean_inc(v___x_2670_);
v___x_2723_ = l_Lean_Meta_isExprDefEq(v___x_2670_, v___x_2621_, v___x_2667_, v___y_2549_, v___y_2550_, v___y_2551_);
lean_dec_ref_known(v___x_2667_, 7);
v___y_2672_ = v___x_2723_;
goto v___jp_2671_;
}
v___jp_2671_:
{
if (lean_obj_tag(v___y_2672_) == 0)
{
lean_object* v_a_2673_; uint8_t v___x_2674_; 
v_a_2673_ = lean_ctor_get(v___y_2672_, 0);
lean_inc(v_a_2673_);
lean_dec_ref_known(v___y_2672_, 1);
v___x_2674_ = lean_unbox(v_a_2673_);
lean_dec(v_a_2673_);
if (v___x_2674_ == 0)
{
lean_object* v_toCold_2675_; lean_object* v_options_2676_; uint8_t v_hasTrace_2677_; 
v_toCold_2675_ = lean_ctor_get(v___y_2550_, 0);
v_options_2676_ = lean_ctor_get(v_toCold_2675_, 2);
v_hasTrace_2677_ = lean_ctor_get_uint8(v_options_2676_, sizeof(void*)*1);
if (v_hasTrace_2677_ == 0)
{
lean_del_object(v___x_2627_);
goto v___jp_2585_;
}
else
{
lean_object* v_inheritedTraceOptions_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; uint8_t v___x_2681_; 
v_inheritedTraceOptions_2678_ = lean_ctor_get(v_toCold_2675_, 11);
v___x_2679_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3));
v___x_2680_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6);
v___x_2681_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2678_, v_options_2676_, v___x_2680_);
if (v___x_2681_ == 0)
{
lean_del_object(v___x_2627_);
goto v___jp_2585_;
}
else
{
lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2685_; 
v___x_2682_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8);
lean_inc(v_val_2540_);
v___x_2683_ = l_Nat_reprFast(v_val_2540_);
if (v_isShared_2628_ == 0)
{
lean_ctor_set_tag(v___x_2627_, 3);
lean_ctor_set(v___x_2627_, 0, v___x_2683_);
v___x_2685_ = v___x_2627_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2709_; 
v_reuseFailAlloc_2709_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2709_, 0, v___x_2683_);
v___x_2685_ = v_reuseFailAlloc_2709_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; 
v___x_2686_ = l_Lean_MessageData_ofFormat(v___x_2685_);
v___x_2687_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2687_, 0, v___x_2682_);
lean_ctor_set(v___x_2687_, 1, v___x_2686_);
v___x_2688_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9);
v___x_2689_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2689_, 0, v___x_2687_);
lean_ctor_set(v___x_2689_, 1, v___x_2688_);
lean_inc(v_a_2546_);
v___x_2690_ = l_Nat_reprFast(v_a_2546_);
v___x_2691_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2691_, 0, v___x_2690_);
v___x_2692_ = l_Lean_MessageData_ofFormat(v___x_2691_);
v___x_2693_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2693_, 0, v___x_2689_);
lean_ctor_set(v___x_2693_, 1, v___x_2692_);
v___x_2694_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11);
v___x_2695_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2695_, 0, v___x_2693_);
lean_ctor_set(v___x_2695_, 1, v___x_2694_);
lean_inc_ref(v_e_2543_);
v___x_2696_ = l_Lean_MessageData_ofExpr(v_e_2543_);
v___x_2697_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2697_, 0, v___x_2695_);
lean_ctor_set(v___x_2697_, 1, v___x_2696_);
v___x_2698_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15);
v___x_2699_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2699_, 0, v___x_2697_);
lean_ctor_set(v___x_2699_, 1, v___x_2698_);
lean_inc(v___x_2670_);
v___x_2700_ = l_Lean_MessageData_ofExpr(v___x_2670_);
v___x_2701_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2701_, 0, v___x_2699_);
lean_ctor_set(v___x_2701_, 1, v___x_2700_);
v___x_2702_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17);
v___x_2703_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2703_, 0, v___x_2701_);
lean_ctor_set(v___x_2703_, 1, v___x_2702_);
lean_inc(v___x_2621_);
v___x_2704_ = l_Lean_MessageData_ofExpr(v___x_2621_);
v___x_2705_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2705_, 0, v___x_2703_);
lean_ctor_set(v___x_2705_, 1, v___x_2704_);
v___x_2706_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v___x_2679_, v___x_2705_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_);
if (lean_obj_tag(v___x_2706_) == 0)
{
lean_object* v_a_2707_; lean_object* v___x_2708_; 
v_a_2707_ = lean_ctor_get(v___x_2706_, 0);
lean_inc(v_a_2707_);
lean_dec_ref_known(v___x_2706_, 1);
lean_inc(v_a_2546_);
v___x_2708_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2539_, v_val_2540_, v_a_2546_, v___x_2580_, v_a_2707_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_);
v___y_2559_ = v___x_2708_;
goto v___jp_2558_;
}
else
{
lean_dec(v_a_2546_);
lean_dec_ref(v_e_2543_);
lean_dec(v_val_2540_);
return v___x_2706_;
}
}
}
}
}
else
{
lean_del_object(v___x_2627_);
v_a_2554_ = v___x_2580_;
goto v___jp_2553_;
}
}
else
{
lean_object* v_a_2710_; lean_object* v___x_2712_; uint8_t v_isShared_2713_; uint8_t v_isSharedCheck_2717_; 
lean_del_object(v___x_2627_);
lean_dec(v_a_2546_);
lean_dec_ref(v_e_2543_);
lean_dec(v_val_2540_);
v_a_2710_ = lean_ctor_get(v___y_2672_, 0);
v_isSharedCheck_2717_ = !lean_is_exclusive(v___y_2672_);
if (v_isSharedCheck_2717_ == 0)
{
v___x_2712_ = v___y_2672_;
v_isShared_2713_ = v_isSharedCheck_2717_;
goto v_resetjp_2711_;
}
else
{
lean_inc(v_a_2710_);
lean_dec(v___y_2672_);
v___x_2712_ = lean_box(0);
v_isShared_2713_ = v_isSharedCheck_2717_;
goto v_resetjp_2711_;
}
v_resetjp_2711_:
{
lean_object* v___x_2715_; 
if (v_isShared_2713_ == 0)
{
v___x_2715_ = v___x_2712_;
goto v_reusejp_2714_;
}
else
{
lean_object* v_reuseFailAlloc_2716_; 
v_reuseFailAlloc_2716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2716_, 0, v_a_2710_);
v___x_2715_ = v_reuseFailAlloc_2716_;
goto v_reusejp_2714_;
}
v_reusejp_2714_:
{
return v___x_2715_;
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
lean_object* v___x_2727_; lean_object* v___x_2728_; uint8_t v___x_2729_; lean_object* v___x_2730_; 
lean_dec(v___x_2624_);
v___x_2727_ = lean_array_get_size(v_params_2545_);
v___x_2728_ = lean_unsigned_to_nat(0u);
v___x_2729_ = 0;
lean_inc(v___x_2621_);
lean_inc(v_a_2546_);
v___x_2730_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(v_val_2539_, v_val_2540_, v_a_2546_, v_next_2544_, v___x_2591_, v___x_2727_, v_params_2545_, v___x_2621_, v___x_2728_, v___x_2729_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_);
if (lean_obj_tag(v___x_2730_) == 0)
{
lean_object* v_a_2731_; uint8_t v___x_2732_; 
v_a_2731_ = lean_ctor_get(v___x_2730_, 0);
lean_inc(v_a_2731_);
lean_dec_ref_known(v___x_2730_, 1);
v___x_2732_ = lean_unbox(v_a_2731_);
lean_dec(v_a_2731_);
if (v___x_2732_ == 0)
{
lean_object* v_toCold_2733_; lean_object* v_options_2734_; uint8_t v_hasTrace_2735_; 
v_toCold_2733_ = lean_ctor_get(v___y_2550_, 0);
v_options_2734_ = lean_ctor_get(v_toCold_2733_, 2);
v_hasTrace_2735_ = lean_ctor_get_uint8(v_options_2734_, sizeof(void*)*1);
if (v_hasTrace_2735_ == 0)
{
goto v___jp_2581_;
}
else
{
lean_object* v_inheritedTraceOptions_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; uint8_t v___x_2739_; 
v_inheritedTraceOptions_2736_ = lean_ctor_get(v_toCold_2733_, 11);
v___x_2737_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3));
v___x_2738_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6);
v___x_2739_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2736_, v_options_2734_, v___x_2738_);
if (v___x_2739_ == 0)
{
goto v___jp_2581_;
}
else
{
lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; 
v___x_2740_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8);
lean_inc(v_val_2540_);
v___x_2741_ = l_Nat_reprFast(v_val_2540_);
v___x_2742_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2742_, 0, v___x_2741_);
v___x_2743_ = l_Lean_MessageData_ofFormat(v___x_2742_);
v___x_2744_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2744_, 0, v___x_2740_);
lean_ctor_set(v___x_2744_, 1, v___x_2743_);
v___x_2745_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9);
v___x_2746_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2746_, 0, v___x_2744_);
lean_ctor_set(v___x_2746_, 1, v___x_2745_);
lean_inc(v_a_2546_);
v___x_2747_ = l_Nat_reprFast(v_a_2546_);
v___x_2748_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2748_, 0, v___x_2747_);
v___x_2749_ = l_Lean_MessageData_ofFormat(v___x_2748_);
v___x_2750_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2750_, 0, v___x_2746_);
lean_ctor_set(v___x_2750_, 1, v___x_2749_);
v___x_2751_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11);
v___x_2752_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2752_, 0, v___x_2750_);
lean_ctor_set(v___x_2752_, 1, v___x_2751_);
lean_inc_ref(v_e_2543_);
v___x_2753_ = l_Lean_MessageData_ofExpr(v_e_2543_);
v___x_2754_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2754_, 0, v___x_2752_);
lean_ctor_set(v___x_2754_, 1, v___x_2753_);
v___x_2755_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15);
v___x_2756_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2756_, 0, v___x_2754_);
lean_ctor_set(v___x_2756_, 1, v___x_2755_);
lean_inc(v___x_2621_);
v___x_2757_ = l_Lean_MessageData_ofExpr(v___x_2621_);
v___x_2758_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2758_, 0, v___x_2756_);
lean_ctor_set(v___x_2758_, 1, v___x_2757_);
v___x_2759_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19);
v___x_2760_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2760_, 0, v___x_2758_);
lean_ctor_set(v___x_2760_, 1, v___x_2759_);
v___x_2761_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v___x_2737_, v___x_2760_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_);
if (lean_obj_tag(v___x_2761_) == 0)
{
lean_object* v_a_2762_; lean_object* v___x_2763_; 
v_a_2762_ = lean_ctor_get(v___x_2761_, 0);
lean_inc(v_a_2762_);
lean_dec_ref_known(v___x_2761_, 1);
lean_inc(v_a_2546_);
v___x_2763_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2539_, v_val_2540_, v_a_2546_, v___x_2580_, v_a_2762_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_);
v___y_2559_ = v___x_2763_;
goto v___jp_2558_;
}
else
{
lean_dec(v_a_2546_);
lean_dec_ref(v_e_2543_);
lean_dec(v_val_2540_);
return v___x_2761_;
}
}
}
}
else
{
v_a_2554_ = v___x_2580_;
goto v___jp_2553_;
}
}
else
{
lean_object* v_a_2764_; lean_object* v___x_2766_; uint8_t v_isShared_2767_; uint8_t v_isSharedCheck_2771_; 
lean_dec(v_a_2546_);
lean_dec_ref(v_e_2543_);
lean_dec(v_val_2540_);
v_a_2764_ = lean_ctor_get(v___x_2730_, 0);
v_isSharedCheck_2771_ = !lean_is_exclusive(v___x_2730_);
if (v_isSharedCheck_2771_ == 0)
{
v___x_2766_ = v___x_2730_;
v_isShared_2767_ = v_isSharedCheck_2771_;
goto v_resetjp_2765_;
}
else
{
lean_inc(v_a_2764_);
lean_dec(v___x_2730_);
v___x_2766_ = lean_box(0);
v_isShared_2767_ = v_isSharedCheck_2771_;
goto v_resetjp_2765_;
}
v_resetjp_2765_:
{
lean_object* v___x_2769_; 
if (v_isShared_2767_ == 0)
{
v___x_2769_ = v___x_2766_;
goto v_reusejp_2768_;
}
else
{
lean_object* v_reuseFailAlloc_2770_; 
v_reuseFailAlloc_2770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2770_, 0, v_a_2764_);
v___x_2769_ = v_reuseFailAlloc_2770_;
goto v_reusejp_2768_;
}
v_reusejp_2768_:
{
return v___x_2769_;
}
}
}
}
}
else
{
lean_object* v_a_2772_; lean_object* v___x_2774_; uint8_t v_isShared_2775_; uint8_t v_isSharedCheck_2779_; 
lean_dec(v_a_2546_);
lean_dec_ref(v_e_2543_);
lean_dec(v_val_2540_);
v_a_2772_ = lean_ctor_get(v___x_2622_, 0);
v_isSharedCheck_2779_ = !lean_is_exclusive(v___x_2622_);
if (v_isSharedCheck_2779_ == 0)
{
v___x_2774_ = v___x_2622_;
v_isShared_2775_ = v_isSharedCheck_2779_;
goto v_resetjp_2773_;
}
else
{
lean_inc(v_a_2772_);
lean_dec(v___x_2622_);
v___x_2774_ = lean_box(0);
v_isShared_2775_ = v_isSharedCheck_2779_;
goto v_resetjp_2773_;
}
v_resetjp_2773_:
{
lean_object* v___x_2777_; 
if (v_isShared_2775_ == 0)
{
v___x_2777_ = v___x_2774_;
goto v_reusejp_2776_;
}
else
{
lean_object* v_reuseFailAlloc_2778_; 
v_reuseFailAlloc_2778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2778_, 0, v_a_2772_);
v___x_2777_ = v_reuseFailAlloc_2778_;
goto v_reusejp_2776_;
}
v_reusejp_2776_:
{
return v___x_2777_;
}
}
}
}
}
}
else
{
lean_object* v_a_2780_; lean_object* v___x_2782_; uint8_t v_isShared_2783_; uint8_t v_isSharedCheck_2787_; 
lean_dec(v_a_2546_);
lean_dec_ref(v_e_2543_);
lean_dec(v_val_2540_);
v_a_2780_ = lean_ctor_get(v___x_2588_, 0);
v_isSharedCheck_2787_ = !lean_is_exclusive(v___x_2588_);
if (v_isSharedCheck_2787_ == 0)
{
v___x_2782_ = v___x_2588_;
v_isShared_2783_ = v_isSharedCheck_2787_;
goto v_resetjp_2781_;
}
else
{
lean_inc(v_a_2780_);
lean_dec(v___x_2588_);
v___x_2782_ = lean_box(0);
v_isShared_2783_ = v_isSharedCheck_2787_;
goto v_resetjp_2781_;
}
v_resetjp_2781_:
{
lean_object* v___x_2785_; 
if (v_isShared_2783_ == 0)
{
v___x_2785_ = v___x_2782_;
goto v_reusejp_2784_;
}
else
{
lean_object* v_reuseFailAlloc_2786_; 
v_reuseFailAlloc_2786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2786_, 0, v_a_2780_);
v___x_2785_ = v_reuseFailAlloc_2786_;
goto v_reusejp_2784_;
}
v_reusejp_2784_:
{
return v___x_2785_;
}
}
}
v___jp_2581_:
{
lean_object* v___x_2582_; 
lean_inc(v_a_2546_);
v___x_2582_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2539_, v_val_2540_, v_a_2546_, v___x_2580_, v___x_2580_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_);
v___y_2559_ = v___x_2582_;
goto v___jp_2558_;
}
v___jp_2583_:
{
lean_object* v___x_2584_; 
lean_inc(v_a_2546_);
v___x_2584_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2539_, v_val_2540_, v_a_2546_, v___x_2580_, v___x_2580_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_);
v___y_2559_ = v___x_2584_;
goto v___jp_2558_;
}
v___jp_2585_:
{
lean_object* v___x_2586_; 
lean_inc(v_a_2546_);
v___x_2586_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2539_, v_val_2540_, v_a_2546_, v___x_2580_, v___x_2580_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_);
v___y_2559_ = v___x_2586_;
goto v___jp_2558_;
}
}
v___jp_2553_:
{
lean_object* v___x_2555_; lean_object* v___x_2556_; 
v___x_2555_ = lean_unsigned_to_nat(1u);
v___x_2556_ = lean_nat_add(v_a_2546_, v___x_2555_);
lean_dec(v_a_2546_);
v_a_2546_ = v___x_2556_;
v_b_2547_ = v_a_2554_;
goto _start;
}
v___jp_2558_:
{
if (lean_obj_tag(v___y_2559_) == 0)
{
lean_object* v_a_2560_; lean_object* v___x_2562_; uint8_t v_isShared_2563_; uint8_t v_isSharedCheck_2569_; 
v_a_2560_ = lean_ctor_get(v___y_2559_, 0);
v_isSharedCheck_2569_ = !lean_is_exclusive(v___y_2559_);
if (v_isSharedCheck_2569_ == 0)
{
v___x_2562_ = v___y_2559_;
v_isShared_2563_ = v_isSharedCheck_2569_;
goto v_resetjp_2561_;
}
else
{
lean_inc(v_a_2560_);
lean_dec(v___y_2559_);
v___x_2562_ = lean_box(0);
v_isShared_2563_ = v_isSharedCheck_2569_;
goto v_resetjp_2561_;
}
v_resetjp_2561_:
{
if (lean_obj_tag(v_a_2560_) == 0)
{
lean_object* v_a_2564_; lean_object* v___x_2566_; 
lean_dec(v_a_2546_);
lean_dec_ref(v_e_2543_);
lean_dec(v_val_2540_);
v_a_2564_ = lean_ctor_get(v_a_2560_, 0);
lean_inc(v_a_2564_);
lean_dec_ref_known(v_a_2560_, 1);
if (v_isShared_2563_ == 0)
{
lean_ctor_set(v___x_2562_, 0, v_a_2564_);
v___x_2566_ = v___x_2562_;
goto v_reusejp_2565_;
}
else
{
lean_object* v_reuseFailAlloc_2567_; 
v_reuseFailAlloc_2567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2567_, 0, v_a_2564_);
v___x_2566_ = v_reuseFailAlloc_2567_;
goto v_reusejp_2565_;
}
v_reusejp_2565_:
{
return v___x_2566_;
}
}
else
{
lean_object* v_a_2568_; 
lean_del_object(v___x_2562_);
v_a_2568_ = lean_ctor_get(v_a_2560_, 0);
lean_inc(v_a_2568_);
lean_dec_ref_known(v_a_2560_, 1);
v_a_2554_ = v_a_2568_;
goto v___jp_2553_;
}
}
}
else
{
lean_object* v_a_2570_; lean_object* v___x_2572_; uint8_t v_isShared_2573_; uint8_t v_isSharedCheck_2577_; 
lean_dec(v_a_2546_);
lean_dec_ref(v_e_2543_);
lean_dec(v_val_2540_);
v_a_2570_ = lean_ctor_get(v___y_2559_, 0);
v_isSharedCheck_2577_ = !lean_is_exclusive(v___y_2559_);
if (v_isSharedCheck_2577_ == 0)
{
v___x_2572_ = v___y_2559_;
v_isShared_2573_ = v_isSharedCheck_2577_;
goto v_resetjp_2571_;
}
else
{
lean_inc(v_a_2570_);
lean_dec(v___y_2559_);
v___x_2572_ = lean_box(0);
v_isShared_2573_ = v_isSharedCheck_2577_;
goto v_resetjp_2571_;
}
v_resetjp_2571_:
{
lean_object* v___x_2575_; 
if (v_isShared_2573_ == 0)
{
v___x_2575_ = v___x_2572_;
goto v_reusejp_2574_;
}
else
{
lean_object* v_reuseFailAlloc_2576_; 
v_reuseFailAlloc_2576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2576_, 0, v_a_2570_);
v___x_2575_ = v_reuseFailAlloc_2576_;
goto v_reusejp_2574_;
}
v_reusejp_2574_:
{
return v___x_2575_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___boxed(lean_object* v_val_2788_, lean_object* v_val_2789_, lean_object* v_upperBound_2790_, lean_object* v_args_2791_, lean_object* v_e_2792_, lean_object* v_next_2793_, lean_object* v_params_2794_, lean_object* v_a_2795_, lean_object* v_b_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_){
_start:
{
lean_object* v_res_2802_; 
v_res_2802_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg(v_val_2788_, v_val_2789_, v_upperBound_2790_, v_args_2791_, v_e_2792_, v_next_2793_, v_params_2794_, v_a_2795_, v_b_2796_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_);
lean_dec(v___y_2800_);
lean_dec_ref(v___y_2799_);
lean_dec(v___y_2798_);
lean_dec_ref(v___y_2797_);
lean_dec_ref(v_params_2794_);
lean_dec(v_next_2793_);
lean_dec_ref(v_args_2791_);
lean_dec(v_upperBound_2790_);
lean_dec(v_val_2788_);
return v_res_2802_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6(lean_object* v_preDefs_2805_, lean_object* v___x_2806_, lean_object* v_val_2807_, lean_object* v_e_2808_, lean_object* v_next_2809_, lean_object* v_params_2810_, lean_object* v_x_2811_, lean_object* v_x_2812_, lean_object* v_x_2813_, lean_object* v___y_2814_, lean_object* v___y_2815_, lean_object* v___y_2816_, lean_object* v___y_2817_){
_start:
{
if (lean_obj_tag(v_x_2811_) == 5)
{
lean_object* v_fn_2819_; lean_object* v_arg_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; 
v_fn_2819_ = lean_ctor_get(v_x_2811_, 0);
lean_inc_ref(v_fn_2819_);
v_arg_2820_ = lean_ctor_get(v_x_2811_, 1);
lean_inc_ref(v_arg_2820_);
lean_dec_ref_known(v_x_2811_, 2);
v___x_2821_ = lean_array_set(v_x_2812_, v_x_2813_, v_arg_2820_);
v___x_2822_ = lean_unsigned_to_nat(1u);
v___x_2823_ = lean_nat_sub(v_x_2813_, v___x_2822_);
lean_dec(v_x_2813_);
v_x_2811_ = v_fn_2819_;
v_x_2812_ = v___x_2821_;
v_x_2813_ = v___x_2823_;
goto _start;
}
else
{
uint8_t v___x_2825_; 
lean_dec(v_x_2813_);
v___x_2825_ = l_Lean_Expr_isConst(v_x_2811_);
if (v___x_2825_ == 0)
{
lean_object* v___x_2826_; lean_object* v___x_2827_; 
lean_dec_ref(v_x_2812_);
lean_dec_ref(v_x_2811_);
lean_dec_ref(v_e_2808_);
v___x_2826_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0));
v___x_2827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2827_, 0, v___x_2826_);
return v___x_2827_;
}
else
{
lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; 
v___x_2828_ = l_Lean_Expr_constName_x21(v_x_2811_);
lean_dec_ref(v_x_2811_);
v___x_2829_ = lean_unsigned_to_nat(0u);
v___x_2830_ = l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3(v___x_2828_, v_preDefs_2805_, v___x_2829_);
lean_dec(v___x_2828_);
if (lean_obj_tag(v___x_2830_) == 1)
{
lean_object* v_val_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; 
v_val_2831_ = lean_ctor_get(v___x_2830_, 0);
lean_inc(v_val_2831_);
lean_dec_ref_known(v___x_2830_, 1);
v___x_2832_ = lean_box(0);
v___x_2833_ = lean_array_get_borrowed(v___x_2829_, v___x_2806_, v_val_2831_);
v___x_2834_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg(v_val_2807_, v_val_2831_, v___x_2833_, v_x_2812_, v_e_2808_, v_next_2809_, v_params_2810_, v___x_2829_, v___x_2832_, v___y_2814_, v___y_2815_, v___y_2816_, v___y_2817_);
lean_dec_ref(v_x_2812_);
if (lean_obj_tag(v___x_2834_) == 0)
{
lean_object* v___x_2836_; uint8_t v_isShared_2837_; uint8_t v_isSharedCheck_2842_; 
v_isSharedCheck_2842_ = !lean_is_exclusive(v___x_2834_);
if (v_isSharedCheck_2842_ == 0)
{
lean_object* v_unused_2843_; 
v_unused_2843_ = lean_ctor_get(v___x_2834_, 0);
lean_dec(v_unused_2843_);
v___x_2836_ = v___x_2834_;
v_isShared_2837_ = v_isSharedCheck_2842_;
goto v_resetjp_2835_;
}
else
{
lean_dec(v___x_2834_);
v___x_2836_ = lean_box(0);
v_isShared_2837_ = v_isSharedCheck_2842_;
goto v_resetjp_2835_;
}
v_resetjp_2835_:
{
lean_object* v___x_2838_; lean_object* v___x_2840_; 
v___x_2838_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0));
if (v_isShared_2837_ == 0)
{
lean_ctor_set(v___x_2836_, 0, v___x_2838_);
v___x_2840_ = v___x_2836_;
goto v_reusejp_2839_;
}
else
{
lean_object* v_reuseFailAlloc_2841_; 
v_reuseFailAlloc_2841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2841_, 0, v___x_2838_);
v___x_2840_ = v_reuseFailAlloc_2841_;
goto v_reusejp_2839_;
}
v_reusejp_2839_:
{
return v___x_2840_;
}
}
}
else
{
lean_object* v_a_2844_; lean_object* v___x_2846_; uint8_t v_isShared_2847_; uint8_t v_isSharedCheck_2851_; 
v_a_2844_ = lean_ctor_get(v___x_2834_, 0);
v_isSharedCheck_2851_ = !lean_is_exclusive(v___x_2834_);
if (v_isSharedCheck_2851_ == 0)
{
v___x_2846_ = v___x_2834_;
v_isShared_2847_ = v_isSharedCheck_2851_;
goto v_resetjp_2845_;
}
else
{
lean_inc(v_a_2844_);
lean_dec(v___x_2834_);
v___x_2846_ = lean_box(0);
v_isShared_2847_ = v_isSharedCheck_2851_;
goto v_resetjp_2845_;
}
v_resetjp_2845_:
{
lean_object* v___x_2849_; 
if (v_isShared_2847_ == 0)
{
v___x_2849_ = v___x_2846_;
goto v_reusejp_2848_;
}
else
{
lean_object* v_reuseFailAlloc_2850_; 
v_reuseFailAlloc_2850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2850_, 0, v_a_2844_);
v___x_2849_ = v_reuseFailAlloc_2850_;
goto v_reusejp_2848_;
}
v_reusejp_2848_:
{
return v___x_2849_;
}
}
}
}
else
{
lean_object* v___x_2852_; lean_object* v___x_2853_; 
lean_dec(v___x_2830_);
lean_dec_ref(v_x_2812_);
lean_dec_ref(v_e_2808_);
v___x_2852_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0));
v___x_2853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2853_, 0, v___x_2852_);
return v___x_2853_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___boxed(lean_object* v_preDefs_2854_, lean_object* v___x_2855_, lean_object* v_val_2856_, lean_object* v_e_2857_, lean_object* v_next_2858_, lean_object* v_params_2859_, lean_object* v_x_2860_, lean_object* v_x_2861_, lean_object* v_x_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_){
_start:
{
lean_object* v_res_2868_; 
v_res_2868_ = l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6(v_preDefs_2854_, v___x_2855_, v_val_2856_, v_e_2857_, v_next_2858_, v_params_2859_, v_x_2860_, v_x_2861_, v_x_2862_, v___y_2863_, v___y_2864_, v___y_2865_, v___y_2866_);
lean_dec(v___y_2866_);
lean_dec_ref(v___y_2865_);
lean_dec(v___y_2864_);
lean_dec_ref(v___y_2863_);
lean_dec_ref(v_params_2859_);
lean_dec(v_next_2858_);
lean_dec(v_val_2856_);
lean_dec_ref(v___x_2855_);
lean_dec_ref(v_preDefs_2854_);
return v_res_2868_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1(lean_object* v_preDefs_2869_, lean_object* v___x_2870_, lean_object* v_val_2871_, lean_object* v_a_2872_, lean_object* v_params_2873_, lean_object* v_e_2874_, lean_object* v___y_2875_, lean_object* v___y_2876_, lean_object* v___y_2877_, lean_object* v___y_2878_){
_start:
{
lean_object* v_dummy_2880_; lean_object* v_nargs_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; 
v_dummy_2880_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1);
v_nargs_2881_ = l_Lean_Expr_getAppNumArgs(v_e_2874_);
lean_inc(v_nargs_2881_);
v___x_2882_ = lean_mk_array(v_nargs_2881_, v_dummy_2880_);
v___x_2883_ = lean_unsigned_to_nat(1u);
v___x_2884_ = lean_nat_sub(v_nargs_2881_, v___x_2883_);
lean_dec(v_nargs_2881_);
lean_inc_ref(v_e_2874_);
v___x_2885_ = l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6(v_preDefs_2869_, v___x_2870_, v_val_2871_, v_e_2874_, v_a_2872_, v_params_2873_, v_e_2874_, v___x_2882_, v___x_2884_, v___y_2875_, v___y_2876_, v___y_2877_, v___y_2878_);
return v___x_2885_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1___boxed(lean_object* v_preDefs_2886_, lean_object* v___x_2887_, lean_object* v_val_2888_, lean_object* v_a_2889_, lean_object* v_params_2890_, lean_object* v_e_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_, lean_object* v___y_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_){
_start:
{
lean_object* v_res_2897_; 
v_res_2897_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1(v_preDefs_2886_, v___x_2887_, v_val_2888_, v_a_2889_, v_params_2890_, v_e_2891_, v___y_2892_, v___y_2893_, v___y_2894_, v___y_2895_);
lean_dec(v___y_2895_);
lean_dec_ref(v___y_2894_);
lean_dec(v___y_2893_);
lean_dec_ref(v___y_2892_);
lean_dec_ref(v_params_2890_);
lean_dec(v_a_2889_);
lean_dec(v_val_2888_);
lean_dec_ref(v___x_2887_);
lean_dec_ref(v_preDefs_2886_);
return v_res_2897_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3(void){
_start:
{
lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; 
v___x_2901_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__2));
v___x_2902_ = lean_unsigned_to_nat(6u);
v___x_2903_ = lean_unsigned_to_nat(201u);
v___x_2904_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__1));
v___x_2905_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_2906_ = l_mkPanicMessageWithDecl(v___x_2905_, v___x_2904_, v___x_2903_, v___x_2902_, v___x_2901_);
return v___x_2906_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2(lean_object* v___x_2907_, lean_object* v___x_2908_, lean_object* v_a_2909_, lean_object* v_preDefs_2910_, lean_object* v_val_2911_, lean_object* v___f_2912_, lean_object* v___x_2913_, lean_object* v_params_2914_, lean_object* v_body_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_){
_start:
{
lean_object* v___x_2921_; lean_object* v___x_2922_; uint8_t v___x_2923_; 
v___x_2921_ = lean_array_get_size(v_params_2914_);
v___x_2922_ = lean_array_get_borrowed(v___x_2907_, v___x_2908_, v_a_2909_);
v___x_2923_ = lean_nat_dec_eq(v___x_2921_, v___x_2922_);
if (v___x_2923_ == 0)
{
lean_object* v___x_2924_; lean_object* v___x_2925_; 
lean_dec_ref(v_body_2915_);
lean_dec_ref(v_params_2914_);
lean_dec_ref(v___f_2912_);
lean_dec(v_val_2911_);
lean_dec_ref(v_preDefs_2910_);
lean_dec(v_a_2909_);
lean_dec_ref(v___x_2908_);
v___x_2924_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3);
v___x_2925_ = l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7(v___x_2924_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_);
return v___x_2925_;
}
else
{
lean_object* v___f_2926_; uint8_t v___x_2927_; lean_object* v___x_2928_; 
v___f_2926_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1___boxed), 11, 5);
lean_closure_set(v___f_2926_, 0, v_preDefs_2910_);
lean_closure_set(v___f_2926_, 1, v___x_2908_);
lean_closure_set(v___f_2926_, 2, v_val_2911_);
lean_closure_set(v___f_2926_, 3, v_a_2909_);
lean_closure_set(v___f_2926_, 4, v_params_2914_);
v___x_2927_ = 0;
v___x_2928_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8(v_body_2915_, v___f_2926_, v___f_2912_, v___x_2927_, v___x_2923_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_);
if (lean_obj_tag(v___x_2928_) == 0)
{
lean_object* v___x_2930_; uint8_t v_isShared_2931_; uint8_t v_isSharedCheck_2935_; 
v_isSharedCheck_2935_ = !lean_is_exclusive(v___x_2928_);
if (v_isSharedCheck_2935_ == 0)
{
lean_object* v_unused_2936_; 
v_unused_2936_ = lean_ctor_get(v___x_2928_, 0);
lean_dec(v_unused_2936_);
v___x_2930_ = v___x_2928_;
v_isShared_2931_ = v_isSharedCheck_2935_;
goto v_resetjp_2929_;
}
else
{
lean_dec(v___x_2928_);
v___x_2930_ = lean_box(0);
v_isShared_2931_ = v_isSharedCheck_2935_;
goto v_resetjp_2929_;
}
v_resetjp_2929_:
{
lean_object* v___x_2933_; 
if (v_isShared_2931_ == 0)
{
lean_ctor_set(v___x_2930_, 0, v___x_2913_);
v___x_2933_ = v___x_2930_;
goto v_reusejp_2932_;
}
else
{
lean_object* v_reuseFailAlloc_2934_; 
v_reuseFailAlloc_2934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2934_, 0, v___x_2913_);
v___x_2933_ = v_reuseFailAlloc_2934_;
goto v_reusejp_2932_;
}
v_reusejp_2932_:
{
return v___x_2933_;
}
}
}
else
{
lean_object* v_a_2937_; lean_object* v___x_2939_; uint8_t v_isShared_2940_; uint8_t v_isSharedCheck_2944_; 
v_a_2937_ = lean_ctor_get(v___x_2928_, 0);
v_isSharedCheck_2944_ = !lean_is_exclusive(v___x_2928_);
if (v_isSharedCheck_2944_ == 0)
{
v___x_2939_ = v___x_2928_;
v_isShared_2940_ = v_isSharedCheck_2944_;
goto v_resetjp_2938_;
}
else
{
lean_inc(v_a_2937_);
lean_dec(v___x_2928_);
v___x_2939_ = lean_box(0);
v_isShared_2940_ = v_isSharedCheck_2944_;
goto v_resetjp_2938_;
}
v_resetjp_2938_:
{
lean_object* v___x_2942_; 
if (v_isShared_2940_ == 0)
{
v___x_2942_ = v___x_2939_;
goto v_reusejp_2941_;
}
else
{
lean_object* v_reuseFailAlloc_2943_; 
v_reuseFailAlloc_2943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2943_, 0, v_a_2937_);
v___x_2942_ = v_reuseFailAlloc_2943_;
goto v_reusejp_2941_;
}
v_reusejp_2941_:
{
return v___x_2942_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___boxed(lean_object* v___x_2945_, lean_object* v___x_2946_, lean_object* v_a_2947_, lean_object* v_preDefs_2948_, lean_object* v_val_2949_, lean_object* v___f_2950_, lean_object* v___x_2951_, lean_object* v_params_2952_, lean_object* v_body_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_, lean_object* v___y_2956_, lean_object* v___y_2957_, lean_object* v___y_2958_){
_start:
{
lean_object* v_res_2959_; 
v_res_2959_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2(v___x_2945_, v___x_2946_, v_a_2947_, v_preDefs_2948_, v_val_2949_, v___f_2950_, v___x_2951_, v_params_2952_, v_body_2953_, v___y_2954_, v___y_2955_, v___y_2956_, v___y_2957_);
lean_dec(v___y_2957_);
lean_dec_ref(v___y_2956_);
lean_dec(v___y_2955_);
lean_dec_ref(v___y_2954_);
lean_dec(v___x_2945_);
return v_res_2959_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0(lean_object* v_e_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_, lean_object* v___y_2964_){
_start:
{
lean_object* v___x_2966_; lean_object* v___x_2967_; 
v___x_2966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2966_, 0, v_e_2960_);
v___x_2967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2967_, 0, v___x_2966_);
return v___x_2967_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0___boxed(lean_object* v_e_2968_, lean_object* v___y_2969_, lean_object* v___y_2970_, lean_object* v___y_2971_, lean_object* v___y_2972_, lean_object* v___y_2973_){
_start:
{
lean_object* v_res_2974_; 
v_res_2974_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0(v_e_2968_, v___y_2969_, v___y_2970_, v___y_2971_, v___y_2972_);
lean_dec(v___y_2972_);
lean_dec_ref(v___y_2971_);
lean_dec(v___y_2970_);
lean_dec_ref(v___y_2969_);
return v_res_2974_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg(lean_object* v_preDefs_2976_, lean_object* v___x_2977_, lean_object* v_val_2978_, lean_object* v_upperBound_2979_, lean_object* v_a_2980_, lean_object* v_b_2981_, lean_object* v___y_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_, lean_object* v___y_2985_){
_start:
{
uint8_t v___x_2987_; 
v___x_2987_ = lean_nat_dec_lt(v_a_2980_, v_upperBound_2979_);
if (v___x_2987_ == 0)
{
lean_object* v___x_2988_; 
lean_dec(v_a_2980_);
lean_dec(v_val_2978_);
lean_dec_ref(v___x_2977_);
lean_dec_ref(v_preDefs_2976_);
v___x_2988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2988_, 0, v_b_2981_);
return v___x_2988_;
}
else
{
lean_object* v___x_2989_; lean_object* v_value_2990_; lean_object* v___f_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___f_2994_; uint8_t v___x_2995_; lean_object* v___x_2996_; 
v___x_2989_ = lean_array_fget_borrowed(v_preDefs_2976_, v_a_2980_);
v_value_2990_ = lean_ctor_get(v___x_2989_, 7);
v___f_2991_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___closed__0));
v___x_2992_ = lean_unsigned_to_nat(0u);
v___x_2993_ = lean_box(0);
lean_inc(v_val_2978_);
lean_inc_ref(v_preDefs_2976_);
lean_inc(v_a_2980_);
lean_inc_ref(v___x_2977_);
v___f_2994_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___boxed), 14, 7);
lean_closure_set(v___f_2994_, 0, v___x_2992_);
lean_closure_set(v___f_2994_, 1, v___x_2977_);
lean_closure_set(v___f_2994_, 2, v_a_2980_);
lean_closure_set(v___f_2994_, 3, v_preDefs_2976_);
lean_closure_set(v___f_2994_, 4, v_val_2978_);
lean_closure_set(v___f_2994_, 5, v___f_2991_);
lean_closure_set(v___f_2994_, 6, v___x_2993_);
v___x_2995_ = 0;
lean_inc_ref(v_value_2990_);
v___x_2996_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_value_2990_, v___f_2994_, v___x_2995_, v___y_2982_, v___y_2983_, v___y_2984_, v___y_2985_);
if (lean_obj_tag(v___x_2996_) == 0)
{
lean_object* v___x_2997_; lean_object* v___x_2998_; 
lean_dec_ref_known(v___x_2996_, 1);
v___x_2997_ = lean_unsigned_to_nat(1u);
v___x_2998_ = lean_nat_add(v_a_2980_, v___x_2997_);
lean_dec(v_a_2980_);
v_a_2980_ = v___x_2998_;
v_b_2981_ = v___x_2993_;
goto _start;
}
else
{
lean_dec(v_a_2980_);
lean_dec(v_val_2978_);
lean_dec_ref(v___x_2977_);
lean_dec_ref(v_preDefs_2976_);
return v___x_2996_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___boxed(lean_object* v_preDefs_3000_, lean_object* v___x_3001_, lean_object* v_val_3002_, lean_object* v_upperBound_3003_, lean_object* v_a_3004_, lean_object* v_b_3005_, lean_object* v___y_3006_, lean_object* v___y_3007_, lean_object* v___y_3008_, lean_object* v___y_3009_, lean_object* v___y_3010_){
_start:
{
lean_object* v_res_3011_; 
v_res_3011_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg(v_preDefs_3000_, v___x_3001_, v_val_3002_, v_upperBound_3003_, v_a_3004_, v_b_3005_, v___y_3006_, v___y_3007_, v___y_3008_, v___y_3009_);
lean_dec(v___y_3009_);
lean_dec_ref(v___y_3008_);
lean_dec(v___y_3007_);
lean_dec_ref(v___y_3006_);
lean_dec(v_upperBound_3003_);
return v_res_3011_;
}
}
static lean_object* _init_l_Lean_Elab_getFixedParamsInfo___closed__1(void){
_start:
{
lean_object* v___x_3013_; lean_object* v___x_3014_; 
v___x_3013_ = ((lean_object*)(l_Lean_Elab_getFixedParamsInfo___closed__0));
v___x_3014_ = l_Lean_stringToMessageData(v___x_3013_);
return v___x_3014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamsInfo(lean_object* v_preDefs_3015_, lean_object* v_a_3016_, lean_object* v_a_3017_, lean_object* v_a_3018_, lean_object* v_a_3019_){
_start:
{
size_t v_sz_3021_; size_t v___x_3022_; lean_object* v___x_3023_; 
v_sz_3021_ = lean_array_size(v_preDefs_3015_);
v___x_3022_ = ((size_t)0ULL);
lean_inc_ref(v_preDefs_3015_);
v___x_3023_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0(v_sz_3021_, v___x_3022_, v_preDefs_3015_, v_a_3016_, v_a_3017_, v_a_3018_, v_a_3019_);
if (lean_obj_tag(v___x_3023_) == 0)
{
lean_object* v_a_3024_; size_t v_sz_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; 
v_a_3024_ = lean_ctor_get(v___x_3023_, 0);
lean_inc_n(v_a_3024_, 2);
lean_dec_ref_known(v___x_3023_, 1);
v_sz_3025_ = lean_array_size(v_a_3024_);
v___x_3026_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1(v_sz_3025_, v___x_3022_, v_a_3024_);
v___x_3027_ = l_Lean_Elab_FixedParams_Info_init(v_a_3024_);
v___x_3028_ = lean_st_mk_ref(v___x_3027_);
v___x_3029_ = lean_st_ref_take(v___x_3028_);
v___x_3030_ = l_Lean_Elab_FixedParams_Info_addSelfCalls(v___x_3029_);
v___x_3031_ = lean_st_ref_put(v___x_3028_, v___x_3030_);
v___x_3032_ = lean_array_get_size(v_preDefs_3015_);
v___x_3033_ = lean_unsigned_to_nat(0u);
v___x_3034_ = lean_box(0);
lean_inc(v___x_3028_);
v___x_3035_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg(v_preDefs_3015_, v___x_3026_, v___x_3028_, v___x_3032_, v___x_3033_, v___x_3034_, v_a_3016_, v_a_3017_, v_a_3018_, v_a_3019_);
if (lean_obj_tag(v___x_3035_) == 0)
{
lean_object* v___x_3037_; uint8_t v_isShared_3038_; uint8_t v_isSharedCheck_3075_; 
v_isSharedCheck_3075_ = !lean_is_exclusive(v___x_3035_);
if (v_isSharedCheck_3075_ == 0)
{
lean_object* v_unused_3076_; 
v_unused_3076_ = lean_ctor_get(v___x_3035_, 0);
lean_dec(v_unused_3076_);
v___x_3037_ = v___x_3035_;
v_isShared_3038_ = v_isSharedCheck_3075_;
goto v_resetjp_3036_;
}
else
{
lean_dec(v___x_3035_);
v___x_3037_ = lean_box(0);
v_isShared_3038_ = v_isSharedCheck_3075_;
goto v_resetjp_3036_;
}
v_resetjp_3036_:
{
lean_object* v___x_3039_; lean_object* v_toCold_3040_; lean_object* v_options_3041_; uint8_t v_hasTrace_3042_; 
v___x_3039_ = lean_st_ref_get(v___x_3028_);
lean_dec(v___x_3028_);
v_toCold_3040_ = lean_ctor_get(v_a_3018_, 0);
v_options_3041_ = lean_ctor_get(v_toCold_3040_, 2);
v_hasTrace_3042_ = lean_ctor_get_uint8(v_options_3041_, sizeof(void*)*1);
if (v_hasTrace_3042_ == 0)
{
lean_object* v___x_3044_; 
if (v_isShared_3038_ == 0)
{
lean_ctor_set(v___x_3037_, 0, v___x_3039_);
v___x_3044_ = v___x_3037_;
goto v_reusejp_3043_;
}
else
{
lean_object* v_reuseFailAlloc_3045_; 
v_reuseFailAlloc_3045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3045_, 0, v___x_3039_);
v___x_3044_ = v_reuseFailAlloc_3045_;
goto v_reusejp_3043_;
}
v_reusejp_3043_:
{
return v___x_3044_;
}
}
else
{
lean_object* v_inheritedTraceOptions_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; uint8_t v___x_3049_; 
v_inheritedTraceOptions_3046_ = lean_ctor_get(v_toCold_3040_, 11);
v___x_3047_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3));
v___x_3048_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6);
v___x_3049_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3046_, v_options_3041_, v___x_3048_);
if (v___x_3049_ == 0)
{
lean_object* v___x_3051_; 
if (v_isShared_3038_ == 0)
{
lean_ctor_set(v___x_3037_, 0, v___x_3039_);
v___x_3051_ = v___x_3037_;
goto v_reusejp_3050_;
}
else
{
lean_object* v_reuseFailAlloc_3052_; 
v_reuseFailAlloc_3052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3052_, 0, v___x_3039_);
v___x_3051_ = v_reuseFailAlloc_3052_;
goto v_reusejp_3050_;
}
v_reusejp_3050_:
{
return v___x_3051_;
}
}
else
{
lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; 
lean_del_object(v___x_3037_);
v___x_3053_ = lean_obj_once(&l_Lean_Elab_getFixedParamsInfo___closed__1, &l_Lean_Elab_getFixedParamsInfo___closed__1_once, _init_l_Lean_Elab_getFixedParamsInfo___closed__1);
lean_inc(v___x_3039_);
v___x_3054_ = l_Lean_Elab_FixedParams_Info_format(v___x_3039_);
v___x_3055_ = l_Std_Format_indentD(v___x_3054_);
v___x_3056_ = l_Lean_MessageData_ofFormat(v___x_3055_);
v___x_3057_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3057_, 0, v___x_3053_);
lean_ctor_set(v___x_3057_, 1, v___x_3056_);
v___x_3058_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v___x_3047_, v___x_3057_, v_a_3016_, v_a_3017_, v_a_3018_, v_a_3019_);
if (lean_obj_tag(v___x_3058_) == 0)
{
lean_object* v___x_3060_; uint8_t v_isShared_3061_; uint8_t v_isSharedCheck_3065_; 
v_isSharedCheck_3065_ = !lean_is_exclusive(v___x_3058_);
if (v_isSharedCheck_3065_ == 0)
{
lean_object* v_unused_3066_; 
v_unused_3066_ = lean_ctor_get(v___x_3058_, 0);
lean_dec(v_unused_3066_);
v___x_3060_ = v___x_3058_;
v_isShared_3061_ = v_isSharedCheck_3065_;
goto v_resetjp_3059_;
}
else
{
lean_dec(v___x_3058_);
v___x_3060_ = lean_box(0);
v_isShared_3061_ = v_isSharedCheck_3065_;
goto v_resetjp_3059_;
}
v_resetjp_3059_:
{
lean_object* v___x_3063_; 
if (v_isShared_3061_ == 0)
{
lean_ctor_set(v___x_3060_, 0, v___x_3039_);
v___x_3063_ = v___x_3060_;
goto v_reusejp_3062_;
}
else
{
lean_object* v_reuseFailAlloc_3064_; 
v_reuseFailAlloc_3064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3064_, 0, v___x_3039_);
v___x_3063_ = v_reuseFailAlloc_3064_;
goto v_reusejp_3062_;
}
v_reusejp_3062_:
{
return v___x_3063_;
}
}
}
else
{
lean_object* v_a_3067_; lean_object* v___x_3069_; uint8_t v_isShared_3070_; uint8_t v_isSharedCheck_3074_; 
lean_dec(v___x_3039_);
v_a_3067_ = lean_ctor_get(v___x_3058_, 0);
v_isSharedCheck_3074_ = !lean_is_exclusive(v___x_3058_);
if (v_isSharedCheck_3074_ == 0)
{
v___x_3069_ = v___x_3058_;
v_isShared_3070_ = v_isSharedCheck_3074_;
goto v_resetjp_3068_;
}
else
{
lean_inc(v_a_3067_);
lean_dec(v___x_3058_);
v___x_3069_ = lean_box(0);
v_isShared_3070_ = v_isSharedCheck_3074_;
goto v_resetjp_3068_;
}
v_resetjp_3068_:
{
lean_object* v___x_3072_; 
if (v_isShared_3070_ == 0)
{
v___x_3072_ = v___x_3069_;
goto v_reusejp_3071_;
}
else
{
lean_object* v_reuseFailAlloc_3073_; 
v_reuseFailAlloc_3073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3073_, 0, v_a_3067_);
v___x_3072_ = v_reuseFailAlloc_3073_;
goto v_reusejp_3071_;
}
v_reusejp_3071_:
{
return v___x_3072_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3077_; lean_object* v___x_3079_; uint8_t v_isShared_3080_; uint8_t v_isSharedCheck_3084_; 
lean_dec(v___x_3028_);
v_a_3077_ = lean_ctor_get(v___x_3035_, 0);
v_isSharedCheck_3084_ = !lean_is_exclusive(v___x_3035_);
if (v_isSharedCheck_3084_ == 0)
{
v___x_3079_ = v___x_3035_;
v_isShared_3080_ = v_isSharedCheck_3084_;
goto v_resetjp_3078_;
}
else
{
lean_inc(v_a_3077_);
lean_dec(v___x_3035_);
v___x_3079_ = lean_box(0);
v_isShared_3080_ = v_isSharedCheck_3084_;
goto v_resetjp_3078_;
}
v_resetjp_3078_:
{
lean_object* v___x_3082_; 
if (v_isShared_3080_ == 0)
{
v___x_3082_ = v___x_3079_;
goto v_reusejp_3081_;
}
else
{
lean_object* v_reuseFailAlloc_3083_; 
v_reuseFailAlloc_3083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3083_, 0, v_a_3077_);
v___x_3082_ = v_reuseFailAlloc_3083_;
goto v_reusejp_3081_;
}
v_reusejp_3081_:
{
return v___x_3082_;
}
}
}
}
else
{
lean_object* v_a_3085_; lean_object* v___x_3087_; uint8_t v_isShared_3088_; uint8_t v_isSharedCheck_3092_; 
lean_dec_ref(v_preDefs_3015_);
v_a_3085_ = lean_ctor_get(v___x_3023_, 0);
v_isSharedCheck_3092_ = !lean_is_exclusive(v___x_3023_);
if (v_isSharedCheck_3092_ == 0)
{
v___x_3087_ = v___x_3023_;
v_isShared_3088_ = v_isSharedCheck_3092_;
goto v_resetjp_3086_;
}
else
{
lean_inc(v_a_3085_);
lean_dec(v___x_3023_);
v___x_3087_ = lean_box(0);
v_isShared_3088_ = v_isSharedCheck_3092_;
goto v_resetjp_3086_;
}
v_resetjp_3086_:
{
lean_object* v___x_3090_; 
if (v_isShared_3088_ == 0)
{
v___x_3090_ = v___x_3087_;
goto v_reusejp_3089_;
}
else
{
lean_object* v_reuseFailAlloc_3091_; 
v_reuseFailAlloc_3091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3091_, 0, v_a_3085_);
v___x_3090_ = v_reuseFailAlloc_3091_;
goto v_reusejp_3089_;
}
v_reusejp_3089_:
{
return v___x_3090_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamsInfo___boxed(lean_object* v_preDefs_3093_, lean_object* v_a_3094_, lean_object* v_a_3095_, lean_object* v_a_3096_, lean_object* v_a_3097_, lean_object* v_a_3098_){
_start:
{
lean_object* v_res_3099_; 
v_res_3099_ = l_Lean_Elab_getFixedParamsInfo(v_preDefs_3093_, v_a_3094_, v_a_3095_, v_a_3096_, v_a_3097_);
lean_dec(v_a_3097_);
lean_dec_ref(v_a_3096_);
lean_dec(v_a_3095_);
lean_dec_ref(v_a_3094_);
return v_res_3099_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4(lean_object* v_val_3100_, lean_object* v_val_3101_, lean_object* v_next_3102_, lean_object* v_next_3103_, lean_object* v___x_3104_, lean_object* v_upperBound_3105_, lean_object* v_params_3106_, lean_object* v___x_3107_, lean_object* v_inst_3108_, lean_object* v_R_3109_, lean_object* v_a_3110_, uint8_t v_b_3111_, lean_object* v_c_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_, lean_object* v___y_3115_, lean_object* v___y_3116_){
_start:
{
lean_object* v___x_3118_; 
v___x_3118_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(v_val_3100_, v_val_3101_, v_next_3102_, v_next_3103_, v___x_3104_, v_upperBound_3105_, v_params_3106_, v___x_3107_, v_a_3110_, v_b_3111_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_);
return v___x_3118_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___boxed(lean_object** _args){
lean_object* v_val_3119_ = _args[0];
lean_object* v_val_3120_ = _args[1];
lean_object* v_next_3121_ = _args[2];
lean_object* v_next_3122_ = _args[3];
lean_object* v___x_3123_ = _args[4];
lean_object* v_upperBound_3124_ = _args[5];
lean_object* v_params_3125_ = _args[6];
lean_object* v___x_3126_ = _args[7];
lean_object* v_inst_3127_ = _args[8];
lean_object* v_R_3128_ = _args[9];
lean_object* v_a_3129_ = _args[10];
lean_object* v_b_3130_ = _args[11];
lean_object* v_c_3131_ = _args[12];
lean_object* v___y_3132_ = _args[13];
lean_object* v___y_3133_ = _args[14];
lean_object* v___y_3134_ = _args[15];
lean_object* v___y_3135_ = _args[16];
lean_object* v___y_3136_ = _args[17];
_start:
{
uint8_t v_b_boxed_3137_; lean_object* v_res_3138_; 
v_b_boxed_3137_ = lean_unbox(v_b_3130_);
v_res_3138_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4(v_val_3119_, v_val_3120_, v_next_3121_, v_next_3122_, v___x_3123_, v_upperBound_3124_, v_params_3125_, v___x_3126_, v_inst_3127_, v_R_3128_, v_a_3129_, v_b_boxed_3137_, v_c_3131_, v___y_3132_, v___y_3133_, v___y_3134_, v___y_3135_);
lean_dec(v___y_3135_);
lean_dec_ref(v___y_3134_);
lean_dec(v___y_3133_);
lean_dec_ref(v___y_3132_);
lean_dec_ref(v_params_3125_);
lean_dec(v_upperBound_3124_);
lean_dec(v___x_3123_);
lean_dec(v_next_3122_);
lean_dec(v_val_3120_);
lean_dec(v_val_3119_);
return v_res_3138_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5(lean_object* v_val_3139_, lean_object* v_val_3140_, lean_object* v_upperBound_3141_, lean_object* v_args_3142_, lean_object* v_e_3143_, lean_object* v_next_3144_, lean_object* v_params_3145_, lean_object* v_inst_3146_, lean_object* v_R_3147_, lean_object* v_a_3148_, lean_object* v_b_3149_, lean_object* v_c_3150_, lean_object* v___y_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_, lean_object* v___y_3154_){
_start:
{
lean_object* v___x_3156_; 
v___x_3156_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg(v_val_3139_, v_val_3140_, v_upperBound_3141_, v_args_3142_, v_e_3143_, v_next_3144_, v_params_3145_, v_a_3148_, v_b_3149_, v___y_3151_, v___y_3152_, v___y_3153_, v___y_3154_);
return v___x_3156_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___boxed(lean_object** _args){
lean_object* v_val_3157_ = _args[0];
lean_object* v_val_3158_ = _args[1];
lean_object* v_upperBound_3159_ = _args[2];
lean_object* v_args_3160_ = _args[3];
lean_object* v_e_3161_ = _args[4];
lean_object* v_next_3162_ = _args[5];
lean_object* v_params_3163_ = _args[6];
lean_object* v_inst_3164_ = _args[7];
lean_object* v_R_3165_ = _args[8];
lean_object* v_a_3166_ = _args[9];
lean_object* v_b_3167_ = _args[10];
lean_object* v_c_3168_ = _args[11];
lean_object* v___y_3169_ = _args[12];
lean_object* v___y_3170_ = _args[13];
lean_object* v___y_3171_ = _args[14];
lean_object* v___y_3172_ = _args[15];
lean_object* v___y_3173_ = _args[16];
_start:
{
lean_object* v_res_3174_; 
v_res_3174_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5(v_val_3157_, v_val_3158_, v_upperBound_3159_, v_args_3160_, v_e_3161_, v_next_3162_, v_params_3163_, v_inst_3164_, v_R_3165_, v_a_3166_, v_b_3167_, v_c_3168_, v___y_3169_, v___y_3170_, v___y_3171_, v___y_3172_);
lean_dec(v___y_3172_);
lean_dec_ref(v___y_3171_);
lean_dec(v___y_3170_);
lean_dec_ref(v___y_3169_);
lean_dec_ref(v_params_3163_);
lean_dec(v_next_3162_);
lean_dec_ref(v_args_3160_);
lean_dec(v_upperBound_3159_);
lean_dec(v_val_3157_);
return v_res_3174_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9(lean_object* v_preDefs_3175_, lean_object* v___x_3176_, lean_object* v_val_3177_, lean_object* v_upperBound_3178_, lean_object* v_inst_3179_, lean_object* v_R_3180_, lean_object* v_a_3181_, lean_object* v_b_3182_, lean_object* v_c_3183_, lean_object* v___y_3184_, lean_object* v___y_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_){
_start:
{
lean_object* v___x_3189_; 
v___x_3189_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg(v_preDefs_3175_, v___x_3176_, v_val_3177_, v_upperBound_3178_, v_a_3181_, v_b_3182_, v___y_3184_, v___y_3185_, v___y_3186_, v___y_3187_);
return v___x_3189_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___boxed(lean_object* v_preDefs_3190_, lean_object* v___x_3191_, lean_object* v_val_3192_, lean_object* v_upperBound_3193_, lean_object* v_inst_3194_, lean_object* v_R_3195_, lean_object* v_a_3196_, lean_object* v_b_3197_, lean_object* v_c_3198_, lean_object* v___y_3199_, lean_object* v___y_3200_, lean_object* v___y_3201_, lean_object* v___y_3202_, lean_object* v___y_3203_){
_start:
{
lean_object* v_res_3204_; 
v_res_3204_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9(v_preDefs_3190_, v___x_3191_, v_val_3192_, v_upperBound_3193_, v_inst_3194_, v_R_3195_, v_a_3196_, v_b_3197_, v_c_3198_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_);
lean_dec(v___y_3202_);
lean_dec_ref(v___y_3201_);
lean_dec(v___y_3200_);
lean_dec_ref(v___y_3199_);
lean_dec(v_upperBound_3193_);
return v_res_3204_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12(lean_object* v_upperBound_3205_, lean_object* v___x_3206_, lean_object* v_pre_3207_, lean_object* v_post_3208_, uint8_t v_usedLetOnly_3209_, uint8_t v_skipConstInApp_3210_, uint8_t v_skipInstances_3211_, lean_object* v___x_3212_, lean_object* v_inst_3213_, lean_object* v_R_3214_, lean_object* v_a_3215_, lean_object* v_b_3216_, lean_object* v_c_3217_, lean_object* v___y_3218_, lean_object* v___y_3219_, lean_object* v___y_3220_, lean_object* v___y_3221_, lean_object* v___y_3222_){
_start:
{
lean_object* v___x_3224_; 
v___x_3224_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg(v_upperBound_3205_, v___x_3206_, v_pre_3207_, v_post_3208_, v_usedLetOnly_3209_, v_skipConstInApp_3210_, v_skipInstances_3211_, v_a_3215_, v_b_3216_, v___y_3218_, v___y_3219_, v___y_3220_, v___y_3221_, v___y_3222_);
return v___x_3224_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___boxed(lean_object** _args){
lean_object* v_upperBound_3225_ = _args[0];
lean_object* v___x_3226_ = _args[1];
lean_object* v_pre_3227_ = _args[2];
lean_object* v_post_3228_ = _args[3];
lean_object* v_usedLetOnly_3229_ = _args[4];
lean_object* v_skipConstInApp_3230_ = _args[5];
lean_object* v_skipInstances_3231_ = _args[6];
lean_object* v___x_3232_ = _args[7];
lean_object* v_inst_3233_ = _args[8];
lean_object* v_R_3234_ = _args[9];
lean_object* v_a_3235_ = _args[10];
lean_object* v_b_3236_ = _args[11];
lean_object* v_c_3237_ = _args[12];
lean_object* v___y_3238_ = _args[13];
lean_object* v___y_3239_ = _args[14];
lean_object* v___y_3240_ = _args[15];
lean_object* v___y_3241_ = _args[16];
lean_object* v___y_3242_ = _args[17];
lean_object* v___y_3243_ = _args[18];
_start:
{
uint8_t v_usedLetOnly_boxed_3244_; uint8_t v_skipConstInApp_boxed_3245_; uint8_t v_skipInstances_boxed_3246_; lean_object* v_res_3247_; 
v_usedLetOnly_boxed_3244_ = lean_unbox(v_usedLetOnly_3229_);
v_skipConstInApp_boxed_3245_ = lean_unbox(v_skipConstInApp_3230_);
v_skipInstances_boxed_3246_ = lean_unbox(v_skipInstances_3231_);
v_res_3247_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12(v_upperBound_3225_, v___x_3226_, v_pre_3227_, v_post_3228_, v_usedLetOnly_boxed_3244_, v_skipConstInApp_boxed_3245_, v_skipInstances_boxed_3246_, v___x_3232_, v_inst_3233_, v_R_3234_, v_a_3235_, v_b_3236_, v_c_3237_, v___y_3238_, v___y_3239_, v___y_3240_, v___y_3241_, v___y_3242_);
lean_dec(v___y_3242_);
lean_dec_ref(v___y_3241_);
lean_dec(v___y_3240_);
lean_dec_ref(v___y_3239_);
lean_dec(v___y_3238_);
lean_dec(v___x_3232_);
lean_dec_ref(v___x_3226_);
lean_dec(v_upperBound_3225_);
return v_res_3247_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13(lean_object* v_00_u03b2_3248_, lean_object* v_m_3249_, lean_object* v_a_3250_){
_start:
{
lean_object* v___x_3251_; 
v___x_3251_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg(v_m_3249_, v_a_3250_);
return v___x_3251_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___boxed(lean_object* v_00_u03b2_3252_, lean_object* v_m_3253_, lean_object* v_a_3254_){
_start:
{
lean_object* v_res_3255_; 
v_res_3255_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13(v_00_u03b2_3252_, v_m_3253_, v_a_3254_);
lean_dec_ref(v_a_3254_);
lean_dec_ref(v_m_3253_);
return v_res_3255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17(lean_object* v_00_u03b1_3256_, lean_object* v_name_3257_, uint8_t v_bi_3258_, lean_object* v_type_3259_, lean_object* v_k_3260_, uint8_t v_kind_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_){
_start:
{
lean_object* v___x_3268_; 
v___x_3268_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(v_name_3257_, v_bi_3258_, v_type_3259_, v_k_3260_, v_kind_3261_, v___y_3262_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_);
return v___x_3268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___boxed(lean_object* v_00_u03b1_3269_, lean_object* v_name_3270_, lean_object* v_bi_3271_, lean_object* v_type_3272_, lean_object* v_k_3273_, lean_object* v_kind_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_){
_start:
{
uint8_t v_bi_boxed_3281_; uint8_t v_kind_boxed_3282_; lean_object* v_res_3283_; 
v_bi_boxed_3281_ = lean_unbox(v_bi_3271_);
v_kind_boxed_3282_ = lean_unbox(v_kind_3274_);
v_res_3283_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17(v_00_u03b1_3269_, v_name_3270_, v_bi_boxed_3281_, v_type_3272_, v_k_3273_, v_kind_boxed_3282_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_, v___y_3279_);
lean_dec(v___y_3279_);
lean_dec_ref(v___y_3278_);
lean_dec(v___y_3277_);
lean_dec_ref(v___y_3276_);
lean_dec(v___y_3275_);
return v_res_3283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20(lean_object* v_00_u03b1_3284_, lean_object* v_name_3285_, lean_object* v_type_3286_, lean_object* v_val_3287_, lean_object* v_k_3288_, uint8_t v_nondep_3289_, uint8_t v_kind_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_, lean_object* v___y_3293_, lean_object* v___y_3294_, lean_object* v___y_3295_){
_start:
{
lean_object* v___x_3297_; 
v___x_3297_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg(v_name_3285_, v_type_3286_, v_val_3287_, v_k_3288_, v_nondep_3289_, v_kind_3290_, v___y_3291_, v___y_3292_, v___y_3293_, v___y_3294_, v___y_3295_);
return v___x_3297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___boxed(lean_object* v_00_u03b1_3298_, lean_object* v_name_3299_, lean_object* v_type_3300_, lean_object* v_val_3301_, lean_object* v_k_3302_, lean_object* v_nondep_3303_, lean_object* v_kind_3304_, lean_object* v___y_3305_, lean_object* v___y_3306_, lean_object* v___y_3307_, lean_object* v___y_3308_, lean_object* v___y_3309_, lean_object* v___y_3310_){
_start:
{
uint8_t v_nondep_boxed_3311_; uint8_t v_kind_boxed_3312_; lean_object* v_res_3313_; 
v_nondep_boxed_3311_ = lean_unbox(v_nondep_3303_);
v_kind_boxed_3312_ = lean_unbox(v_kind_3304_);
v_res_3313_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20(v_00_u03b1_3298_, v_name_3299_, v_type_3300_, v_val_3301_, v_k_3302_, v_nondep_boxed_3311_, v_kind_boxed_3312_, v___y_3305_, v___y_3306_, v___y_3307_, v___y_3308_, v___y_3309_);
lean_dec(v___y_3309_);
lean_dec_ref(v___y_3308_);
lean_dec(v___y_3307_);
lean_dec_ref(v___y_3306_);
lean_dec(v___y_3305_);
return v_res_3313_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23(lean_object* v_00_u03b1_3314_, lean_object* v_ref_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_, lean_object* v___y_3318_, lean_object* v___y_3319_){
_start:
{
lean_object* v___x_3321_; 
v___x_3321_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg(v_ref_3315_);
return v___x_3321_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___boxed(lean_object* v_00_u03b1_3322_, lean_object* v_ref_3323_, lean_object* v___y_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_){
_start:
{
lean_object* v_res_3329_; 
v_res_3329_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23(v_00_u03b1_3322_, v_ref_3323_, v___y_3324_, v___y_3325_, v___y_3326_, v___y_3327_);
lean_dec(v___y_3327_);
lean_dec_ref(v___y_3326_);
lean_dec(v___y_3325_);
lean_dec_ref(v___y_3324_);
return v_res_3329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18(lean_object* v_00_u03b1_3330_, lean_object* v_x_3331_, lean_object* v___y_3332_, lean_object* v___y_3333_, lean_object* v___y_3334_, lean_object* v___y_3335_, lean_object* v___y_3336_){
_start:
{
lean_object* v___x_3338_; 
v___x_3338_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg(v_x_3331_, v___y_3332_, v___y_3333_, v___y_3334_, v___y_3335_, v___y_3336_);
return v___x_3338_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___boxed(lean_object* v_00_u03b1_3339_, lean_object* v_x_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_, lean_object* v___y_3346_){
_start:
{
lean_object* v_res_3347_; 
v_res_3347_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18(v_00_u03b1_3339_, v_x_3340_, v___y_3341_, v___y_3342_, v___y_3343_, v___y_3344_, v___y_3345_);
lean_dec(v___y_3345_);
lean_dec_ref(v___y_3344_);
lean_dec(v___y_3343_);
lean_dec_ref(v___y_3342_);
lean_dec(v___y_3341_);
return v_res_3347_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19(lean_object* v_00_u03b2_3348_, lean_object* v_m_3349_, lean_object* v_a_3350_, lean_object* v_b_3351_){
_start:
{
lean_object* v___x_3352_; 
v___x_3352_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19___redArg(v_m_3349_, v_a_3350_, v_b_3351_);
return v___x_3352_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15(lean_object* v_00_u03b2_3353_, lean_object* v_a_3354_, lean_object* v_x_3355_){
_start:
{
lean_object* v___x_3356_; 
v___x_3356_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg(v_a_3354_, v_x_3355_);
return v___x_3356_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___boxed(lean_object* v_00_u03b2_3357_, lean_object* v_a_3358_, lean_object* v_x_3359_){
_start:
{
lean_object* v_res_3360_; 
v_res_3360_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15(v_00_u03b2_3357_, v_a_3358_, v_x_3359_);
lean_dec(v_x_3359_);
lean_dec_ref(v_a_3358_);
return v_res_3360_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25(lean_object* v_00_u03b2_3361_, lean_object* v_a_3362_, lean_object* v_x_3363_){
_start:
{
uint8_t v___x_3364_; 
v___x_3364_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg(v_a_3362_, v_x_3363_);
return v___x_3364_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___boxed(lean_object* v_00_u03b2_3365_, lean_object* v_a_3366_, lean_object* v_x_3367_){
_start:
{
uint8_t v_res_3368_; lean_object* v_r_3369_; 
v_res_3368_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25(v_00_u03b2_3365_, v_a_3366_, v_x_3367_);
lean_dec(v_x_3367_);
lean_dec_ref(v_a_3366_);
v_r_3369_ = lean_box(v_res_3368_);
return v_r_3369_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26(lean_object* v_00_u03b2_3370_, lean_object* v_data_3371_){
_start:
{
lean_object* v___x_3372_; 
v___x_3372_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26___redArg(v_data_3371_);
return v___x_3372_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27(lean_object* v_00_u03b2_3373_, lean_object* v_a_3374_, lean_object* v_b_3375_, lean_object* v_x_3376_){
_start:
{
lean_object* v___x_3377_; 
v___x_3377_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27___redArg(v_a_3374_, v_b_3375_, v_x_3376_);
return v___x_3377_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27(lean_object* v_00_u03b2_3378_, lean_object* v_i_3379_, lean_object* v_source_3380_, lean_object* v_target_3381_){
_start:
{
lean_object* v___x_3382_; 
v___x_3382_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27___redArg(v_i_3379_, v_source_3380_, v_target_3381_);
return v___x_3382_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28(lean_object* v_00_u03b2_3383_, lean_object* v_x_3384_, lean_object* v_x_3385_){
_start:
{
lean_object* v___x_3386_; 
v___x_3386_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28___redArg(v_x_3384_, v_x_3385_);
return v___x_3386_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(lean_object* v_x_3400_, lean_object* v_x_3401_){
_start:
{
if (lean_obj_tag(v_x_3400_) == 0)
{
lean_object* v___x_3402_; 
v___x_3402_ = ((lean_object*)(l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__1));
return v___x_3402_;
}
else
{
lean_object* v_val_3403_; lean_object* v___x_3405_; uint8_t v_isShared_3406_; uint8_t v_isSharedCheck_3414_; 
v_val_3403_ = lean_ctor_get(v_x_3400_, 0);
v_isSharedCheck_3414_ = !lean_is_exclusive(v_x_3400_);
if (v_isSharedCheck_3414_ == 0)
{
v___x_3405_ = v_x_3400_;
v_isShared_3406_ = v_isSharedCheck_3414_;
goto v_resetjp_3404_;
}
else
{
lean_inc(v_val_3403_);
lean_dec(v_x_3400_);
v___x_3405_ = lean_box(0);
v_isShared_3406_ = v_isSharedCheck_3414_;
goto v_resetjp_3404_;
}
v_resetjp_3404_:
{
lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3410_; 
v___x_3407_ = ((lean_object*)(l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__3));
v___x_3408_ = l_Nat_reprFast(v_val_3403_);
if (v_isShared_3406_ == 0)
{
lean_ctor_set_tag(v___x_3405_, 3);
lean_ctor_set(v___x_3405_, 0, v___x_3408_);
v___x_3410_ = v___x_3405_;
goto v_reusejp_3409_;
}
else
{
lean_object* v_reuseFailAlloc_3413_; 
v_reuseFailAlloc_3413_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3413_, 0, v___x_3408_);
v___x_3410_ = v_reuseFailAlloc_3413_;
goto v_reusejp_3409_;
}
v_reusejp_3409_:
{
lean_object* v___x_3411_; lean_object* v___x_3412_; 
v___x_3411_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3411_, 0, v___x_3407_);
lean_ctor_set(v___x_3411_, 1, v___x_3410_);
v___x_3412_ = l_Repr_addAppParen(v___x_3411_, v_x_3401_);
return v___x_3412_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___boxed(lean_object* v_x_3415_, lean_object* v_x_3416_){
_start:
{
lean_object* v_res_3417_; 
v_res_3417_ = l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(v_x_3415_, v_x_3416_);
lean_dec(v_x_3416_);
return v_res_3417_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4_spec__8(lean_object* v_x_3418_, lean_object* v_x_3419_, lean_object* v_x_3420_){
_start:
{
if (lean_obj_tag(v_x_3420_) == 0)
{
lean_dec(v_x_3418_);
return v_x_3419_;
}
else
{
lean_object* v_head_3421_; lean_object* v_tail_3422_; lean_object* v___x_3424_; uint8_t v_isShared_3425_; uint8_t v_isSharedCheck_3433_; 
v_head_3421_ = lean_ctor_get(v_x_3420_, 0);
v_tail_3422_ = lean_ctor_get(v_x_3420_, 1);
v_isSharedCheck_3433_ = !lean_is_exclusive(v_x_3420_);
if (v_isSharedCheck_3433_ == 0)
{
v___x_3424_ = v_x_3420_;
v_isShared_3425_ = v_isSharedCheck_3433_;
goto v_resetjp_3423_;
}
else
{
lean_inc(v_tail_3422_);
lean_inc(v_head_3421_);
lean_dec(v_x_3420_);
v___x_3424_ = lean_box(0);
v_isShared_3425_ = v_isSharedCheck_3433_;
goto v_resetjp_3423_;
}
v_resetjp_3423_:
{
lean_object* v___x_3427_; 
lean_inc(v_x_3418_);
if (v_isShared_3425_ == 0)
{
lean_ctor_set_tag(v___x_3424_, 5);
lean_ctor_set(v___x_3424_, 1, v_x_3418_);
lean_ctor_set(v___x_3424_, 0, v_x_3419_);
v___x_3427_ = v___x_3424_;
goto v_reusejp_3426_;
}
else
{
lean_object* v_reuseFailAlloc_3432_; 
v_reuseFailAlloc_3432_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3432_, 0, v_x_3419_);
lean_ctor_set(v_reuseFailAlloc_3432_, 1, v_x_3418_);
v___x_3427_ = v_reuseFailAlloc_3432_;
goto v_reusejp_3426_;
}
v_reusejp_3426_:
{
lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; 
v___x_3428_ = lean_unsigned_to_nat(0u);
v___x_3429_ = l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(v_head_3421_, v___x_3428_);
v___x_3430_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3430_, 0, v___x_3427_);
lean_ctor_set(v___x_3430_, 1, v___x_3429_);
v_x_3419_ = v___x_3430_;
v_x_3420_ = v_tail_3422_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4(lean_object* v_x_3434_, lean_object* v_x_3435_, lean_object* v_x_3436_){
_start:
{
if (lean_obj_tag(v_x_3436_) == 0)
{
lean_dec(v_x_3434_);
return v_x_3435_;
}
else
{
lean_object* v_head_3437_; lean_object* v_tail_3438_; lean_object* v___x_3440_; uint8_t v_isShared_3441_; uint8_t v_isSharedCheck_3449_; 
v_head_3437_ = lean_ctor_get(v_x_3436_, 0);
v_tail_3438_ = lean_ctor_get(v_x_3436_, 1);
v_isSharedCheck_3449_ = !lean_is_exclusive(v_x_3436_);
if (v_isSharedCheck_3449_ == 0)
{
v___x_3440_ = v_x_3436_;
v_isShared_3441_ = v_isSharedCheck_3449_;
goto v_resetjp_3439_;
}
else
{
lean_inc(v_tail_3438_);
lean_inc(v_head_3437_);
lean_dec(v_x_3436_);
v___x_3440_ = lean_box(0);
v_isShared_3441_ = v_isSharedCheck_3449_;
goto v_resetjp_3439_;
}
v_resetjp_3439_:
{
lean_object* v___x_3443_; 
lean_inc(v_x_3434_);
if (v_isShared_3441_ == 0)
{
lean_ctor_set_tag(v___x_3440_, 5);
lean_ctor_set(v___x_3440_, 1, v_x_3434_);
lean_ctor_set(v___x_3440_, 0, v_x_3435_);
v___x_3443_ = v___x_3440_;
goto v_reusejp_3442_;
}
else
{
lean_object* v_reuseFailAlloc_3448_; 
v_reuseFailAlloc_3448_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3448_, 0, v_x_3435_);
lean_ctor_set(v_reuseFailAlloc_3448_, 1, v_x_3434_);
v___x_3443_ = v_reuseFailAlloc_3448_;
goto v_reusejp_3442_;
}
v_reusejp_3442_:
{
lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; 
v___x_3444_ = lean_unsigned_to_nat(0u);
v___x_3445_ = l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(v_head_3437_, v___x_3444_);
v___x_3446_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3446_, 0, v___x_3443_);
lean_ctor_set(v___x_3446_, 1, v___x_3445_);
v___x_3447_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4_spec__8(v_x_3434_, v___x_3446_, v_tail_3438_);
return v___x_3447_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2___lam__0(lean_object* v___y_3450_){
_start:
{
lean_object* v___x_3451_; lean_object* v___x_3452_; 
v___x_3451_ = lean_unsigned_to_nat(0u);
v___x_3452_ = l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(v___y_3450_, v___x_3451_);
return v___x_3452_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2(lean_object* v_x_3453_, lean_object* v_x_3454_){
_start:
{
if (lean_obj_tag(v_x_3453_) == 0)
{
lean_object* v___x_3455_; 
lean_dec(v_x_3454_);
v___x_3455_ = lean_box(0);
return v___x_3455_;
}
else
{
lean_object* v_tail_3456_; 
v_tail_3456_ = lean_ctor_get(v_x_3453_, 1);
if (lean_obj_tag(v_tail_3456_) == 0)
{
lean_object* v_head_3457_; lean_object* v___x_3458_; 
lean_dec(v_x_3454_);
v_head_3457_ = lean_ctor_get(v_x_3453_, 0);
lean_inc(v_head_3457_);
lean_dec_ref_known(v_x_3453_, 2);
v___x_3458_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2___lam__0(v_head_3457_);
return v___x_3458_;
}
else
{
lean_object* v_head_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; 
lean_inc(v_tail_3456_);
v_head_3459_ = lean_ctor_get(v_x_3453_, 0);
lean_inc(v_head_3459_);
lean_dec_ref_known(v_x_3453_, 2);
v___x_3460_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2___lam__0(v_head_3459_);
v___x_3461_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4(v_x_3454_, v___x_3460_, v_tail_3456_);
return v___x_3461_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_3469_; lean_object* v___x_3470_; 
v___x_3469_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__0));
v___x_3470_ = lean_string_length(v___x_3469_);
return v___x_3470_;
}
}
static lean_object* _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_3471_; lean_object* v___x_3472_; 
v___x_3471_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4);
v___x_3472_ = lean_nat_to_int(v___x_3471_);
return v___x_3472_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(lean_object* v_xs_3478_){
_start:
{
lean_object* v___x_3479_; lean_object* v___x_3480_; uint8_t v___x_3481_; 
v___x_3479_ = lean_array_get_size(v_xs_3478_);
v___x_3480_ = lean_unsigned_to_nat(0u);
v___x_3481_ = lean_nat_dec_eq(v___x_3479_, v___x_3480_);
if (v___x_3481_ == 0)
{
lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; 
v___x_3482_ = lean_array_to_list(v_xs_3478_);
v___x_3483_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3));
v___x_3484_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2(v___x_3482_, v___x_3483_);
v___x_3485_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5);
v___x_3486_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6));
v___x_3487_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3487_, 0, v___x_3486_);
lean_ctor_set(v___x_3487_, 1, v___x_3484_);
v___x_3488_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_3489_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3489_, 0, v___x_3487_);
lean_ctor_set(v___x_3489_, 1, v___x_3488_);
v___x_3490_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3490_, 0, v___x_3485_);
lean_ctor_set(v___x_3490_, 1, v___x_3489_);
v___x_3491_ = l_Std_Format_fill(v___x_3490_);
return v___x_3491_;
}
else
{
lean_object* v___x_3492_; 
lean_dec_ref(v_xs_3478_);
v___x_3492_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8));
return v___x_3492_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1_spec__4(lean_object* v_x_3493_, lean_object* v_x_3494_, lean_object* v_x_3495_){
_start:
{
if (lean_obj_tag(v_x_3495_) == 0)
{
lean_dec(v_x_3493_);
return v_x_3494_;
}
else
{
lean_object* v_head_3496_; lean_object* v_tail_3497_; lean_object* v___x_3499_; uint8_t v_isShared_3500_; uint8_t v_isSharedCheck_3507_; 
v_head_3496_ = lean_ctor_get(v_x_3495_, 0);
v_tail_3497_ = lean_ctor_get(v_x_3495_, 1);
v_isSharedCheck_3507_ = !lean_is_exclusive(v_x_3495_);
if (v_isSharedCheck_3507_ == 0)
{
v___x_3499_ = v_x_3495_;
v_isShared_3500_ = v_isSharedCheck_3507_;
goto v_resetjp_3498_;
}
else
{
lean_inc(v_tail_3497_);
lean_inc(v_head_3496_);
lean_dec(v_x_3495_);
v___x_3499_ = lean_box(0);
v_isShared_3500_ = v_isSharedCheck_3507_;
goto v_resetjp_3498_;
}
v_resetjp_3498_:
{
lean_object* v___x_3502_; 
lean_inc(v_x_3493_);
if (v_isShared_3500_ == 0)
{
lean_ctor_set_tag(v___x_3499_, 5);
lean_ctor_set(v___x_3499_, 1, v_x_3493_);
lean_ctor_set(v___x_3499_, 0, v_x_3494_);
v___x_3502_ = v___x_3499_;
goto v_reusejp_3501_;
}
else
{
lean_object* v_reuseFailAlloc_3506_; 
v_reuseFailAlloc_3506_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3506_, 0, v_x_3494_);
lean_ctor_set(v_reuseFailAlloc_3506_, 1, v_x_3493_);
v___x_3502_ = v_reuseFailAlloc_3506_;
goto v_reusejp_3501_;
}
v_reusejp_3501_:
{
lean_object* v___x_3503_; lean_object* v___x_3504_; 
v___x_3503_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(v_head_3496_);
v___x_3504_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3504_, 0, v___x_3502_);
lean_ctor_set(v___x_3504_, 1, v___x_3503_);
v_x_3494_ = v___x_3504_;
v_x_3495_ = v_tail_3497_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1(lean_object* v_x_3508_, lean_object* v_x_3509_){
_start:
{
if (lean_obj_tag(v_x_3508_) == 0)
{
lean_object* v___x_3510_; 
lean_dec(v_x_3509_);
v___x_3510_ = lean_box(0);
return v___x_3510_;
}
else
{
lean_object* v_tail_3511_; 
v_tail_3511_ = lean_ctor_get(v_x_3508_, 1);
if (lean_obj_tag(v_tail_3511_) == 0)
{
lean_object* v_head_3512_; lean_object* v___x_3513_; 
lean_dec(v_x_3509_);
v_head_3512_ = lean_ctor_get(v_x_3508_, 0);
lean_inc(v_head_3512_);
lean_dec_ref_known(v_x_3508_, 2);
v___x_3513_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(v_head_3512_);
return v___x_3513_;
}
else
{
lean_object* v_head_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; 
lean_inc(v_tail_3511_);
v_head_3514_ = lean_ctor_get(v_x_3508_, 0);
lean_inc(v_head_3514_);
lean_dec_ref_known(v_x_3508_, 2);
v___x_3515_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(v_head_3514_);
v___x_3516_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1_spec__4(v_x_3509_, v___x_3515_, v_tail_3511_);
return v___x_3516_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0(lean_object* v_xs_3517_){
_start:
{
lean_object* v___x_3518_; lean_object* v___x_3519_; uint8_t v___x_3520_; 
v___x_3518_ = lean_array_get_size(v_xs_3517_);
v___x_3519_ = lean_unsigned_to_nat(0u);
v___x_3520_ = lean_nat_dec_eq(v___x_3518_, v___x_3519_);
if (v___x_3520_ == 0)
{
lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; 
v___x_3521_ = lean_array_to_list(v_xs_3517_);
v___x_3522_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3));
v___x_3523_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1(v___x_3521_, v___x_3522_);
v___x_3524_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5);
v___x_3525_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6));
v___x_3526_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3526_, 0, v___x_3525_);
lean_ctor_set(v___x_3526_, 1, v___x_3523_);
v___x_3527_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_3528_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3528_, 0, v___x_3526_);
lean_ctor_set(v___x_3528_, 1, v___x_3527_);
v___x_3529_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3529_, 0, v___x_3524_);
lean_ctor_set(v___x_3529_, 1, v___x_3528_);
v___x_3530_ = l_Std_Format_fill(v___x_3529_);
return v___x_3530_;
}
else
{
lean_object* v___x_3531_; 
lean_dec_ref(v_xs_3517_);
v___x_3531_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8));
return v___x_3531_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12_spec__15(lean_object* v_x_3532_, lean_object* v_x_3533_, lean_object* v_x_3534_){
_start:
{
if (lean_obj_tag(v_x_3534_) == 0)
{
lean_dec(v_x_3532_);
return v_x_3533_;
}
else
{
lean_object* v_head_3535_; lean_object* v_tail_3536_; lean_object* v___x_3538_; uint8_t v_isShared_3539_; uint8_t v_isSharedCheck_3547_; 
v_head_3535_ = lean_ctor_get(v_x_3534_, 0);
v_tail_3536_ = lean_ctor_get(v_x_3534_, 1);
v_isSharedCheck_3547_ = !lean_is_exclusive(v_x_3534_);
if (v_isSharedCheck_3547_ == 0)
{
v___x_3538_ = v_x_3534_;
v_isShared_3539_ = v_isSharedCheck_3547_;
goto v_resetjp_3537_;
}
else
{
lean_inc(v_tail_3536_);
lean_inc(v_head_3535_);
lean_dec(v_x_3534_);
v___x_3538_ = lean_box(0);
v_isShared_3539_ = v_isSharedCheck_3547_;
goto v_resetjp_3537_;
}
v_resetjp_3537_:
{
lean_object* v___x_3541_; 
lean_inc(v_x_3532_);
if (v_isShared_3539_ == 0)
{
lean_ctor_set_tag(v___x_3538_, 5);
lean_ctor_set(v___x_3538_, 1, v_x_3532_);
lean_ctor_set(v___x_3538_, 0, v_x_3533_);
v___x_3541_ = v___x_3538_;
goto v_reusejp_3540_;
}
else
{
lean_object* v_reuseFailAlloc_3546_; 
v_reuseFailAlloc_3546_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3546_, 0, v_x_3533_);
lean_ctor_set(v_reuseFailAlloc_3546_, 1, v_x_3532_);
v___x_3541_ = v_reuseFailAlloc_3546_;
goto v_reusejp_3540_;
}
v_reusejp_3540_:
{
lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; 
v___x_3542_ = l_Nat_reprFast(v_head_3535_);
v___x_3543_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3543_, 0, v___x_3542_);
v___x_3544_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3544_, 0, v___x_3541_);
lean_ctor_set(v___x_3544_, 1, v___x_3543_);
v_x_3533_ = v___x_3544_;
v_x_3534_ = v_tail_3536_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12(lean_object* v_x_3548_, lean_object* v_x_3549_, lean_object* v_x_3550_){
_start:
{
if (lean_obj_tag(v_x_3550_) == 0)
{
lean_dec(v_x_3548_);
return v_x_3549_;
}
else
{
lean_object* v_head_3551_; lean_object* v_tail_3552_; lean_object* v___x_3554_; uint8_t v_isShared_3555_; uint8_t v_isSharedCheck_3563_; 
v_head_3551_ = lean_ctor_get(v_x_3550_, 0);
v_tail_3552_ = lean_ctor_get(v_x_3550_, 1);
v_isSharedCheck_3563_ = !lean_is_exclusive(v_x_3550_);
if (v_isSharedCheck_3563_ == 0)
{
v___x_3554_ = v_x_3550_;
v_isShared_3555_ = v_isSharedCheck_3563_;
goto v_resetjp_3553_;
}
else
{
lean_inc(v_tail_3552_);
lean_inc(v_head_3551_);
lean_dec(v_x_3550_);
v___x_3554_ = lean_box(0);
v_isShared_3555_ = v_isSharedCheck_3563_;
goto v_resetjp_3553_;
}
v_resetjp_3553_:
{
lean_object* v___x_3557_; 
lean_inc(v_x_3548_);
if (v_isShared_3555_ == 0)
{
lean_ctor_set_tag(v___x_3554_, 5);
lean_ctor_set(v___x_3554_, 1, v_x_3548_);
lean_ctor_set(v___x_3554_, 0, v_x_3549_);
v___x_3557_ = v___x_3554_;
goto v_reusejp_3556_;
}
else
{
lean_object* v_reuseFailAlloc_3562_; 
v_reuseFailAlloc_3562_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3562_, 0, v_x_3549_);
lean_ctor_set(v_reuseFailAlloc_3562_, 1, v_x_3548_);
v___x_3557_ = v_reuseFailAlloc_3562_;
goto v_reusejp_3556_;
}
v_reusejp_3556_:
{
lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; 
v___x_3558_ = l_Nat_reprFast(v_head_3551_);
v___x_3559_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3559_, 0, v___x_3558_);
v___x_3560_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3560_, 0, v___x_3557_);
lean_ctor_set(v___x_3560_, 1, v___x_3559_);
v___x_3561_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12_spec__15(v_x_3548_, v___x_3560_, v_tail_3552_);
return v___x_3561_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9___lam__0(lean_object* v___y_3564_){
_start:
{
lean_object* v___x_3565_; lean_object* v___x_3566_; 
v___x_3565_ = l_Nat_reprFast(v___y_3564_);
v___x_3566_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3566_, 0, v___x_3565_);
return v___x_3566_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9(lean_object* v_x_3567_, lean_object* v_x_3568_){
_start:
{
if (lean_obj_tag(v_x_3567_) == 0)
{
lean_object* v___x_3569_; 
lean_dec(v_x_3568_);
v___x_3569_ = lean_box(0);
return v___x_3569_;
}
else
{
lean_object* v_tail_3570_; 
v_tail_3570_ = lean_ctor_get(v_x_3567_, 1);
if (lean_obj_tag(v_tail_3570_) == 0)
{
lean_object* v_head_3571_; lean_object* v___x_3572_; 
lean_dec(v_x_3568_);
v_head_3571_ = lean_ctor_get(v_x_3567_, 0);
lean_inc(v_head_3571_);
lean_dec_ref_known(v_x_3567_, 2);
v___x_3572_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9___lam__0(v_head_3571_);
return v___x_3572_;
}
else
{
lean_object* v_head_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; 
lean_inc(v_tail_3570_);
v_head_3573_ = lean_ctor_get(v_x_3567_, 0);
lean_inc(v_head_3573_);
lean_dec_ref_known(v_x_3567_, 2);
v___x_3574_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9___lam__0(v_head_3573_);
v___x_3575_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12(v_x_3568_, v___x_3574_, v_tail_3570_);
return v___x_3575_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(lean_object* v_xs_3576_){
_start:
{
lean_object* v___x_3577_; lean_object* v___x_3578_; uint8_t v___x_3579_; 
v___x_3577_ = lean_array_get_size(v_xs_3576_);
v___x_3578_ = lean_unsigned_to_nat(0u);
v___x_3579_ = lean_nat_dec_eq(v___x_3577_, v___x_3578_);
if (v___x_3579_ == 0)
{
lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; 
v___x_3580_ = lean_array_to_list(v_xs_3576_);
v___x_3581_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3));
v___x_3582_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9(v___x_3580_, v___x_3581_);
v___x_3583_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5);
v___x_3584_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6));
v___x_3585_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3585_, 0, v___x_3584_);
lean_ctor_set(v___x_3585_, 1, v___x_3582_);
v___x_3586_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_3587_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3587_, 0, v___x_3585_);
lean_ctor_set(v___x_3587_, 1, v___x_3586_);
v___x_3588_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3588_, 0, v___x_3583_);
lean_ctor_set(v___x_3588_, 1, v___x_3587_);
v___x_3589_ = l_Std_Format_fill(v___x_3588_);
return v___x_3589_;
}
else
{
lean_object* v___x_3590_; 
lean_dec_ref(v_xs_3576_);
v___x_3590_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8));
return v___x_3590_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8_spec__11(lean_object* v_x_3591_, lean_object* v_x_3592_, lean_object* v_x_3593_){
_start:
{
if (lean_obj_tag(v_x_3593_) == 0)
{
lean_dec(v_x_3591_);
return v_x_3592_;
}
else
{
lean_object* v_head_3594_; lean_object* v_tail_3595_; lean_object* v___x_3597_; uint8_t v_isShared_3598_; uint8_t v_isSharedCheck_3605_; 
v_head_3594_ = lean_ctor_get(v_x_3593_, 0);
v_tail_3595_ = lean_ctor_get(v_x_3593_, 1);
v_isSharedCheck_3605_ = !lean_is_exclusive(v_x_3593_);
if (v_isSharedCheck_3605_ == 0)
{
v___x_3597_ = v_x_3593_;
v_isShared_3598_ = v_isSharedCheck_3605_;
goto v_resetjp_3596_;
}
else
{
lean_inc(v_tail_3595_);
lean_inc(v_head_3594_);
lean_dec(v_x_3593_);
v___x_3597_ = lean_box(0);
v_isShared_3598_ = v_isSharedCheck_3605_;
goto v_resetjp_3596_;
}
v_resetjp_3596_:
{
lean_object* v___x_3600_; 
lean_inc(v_x_3591_);
if (v_isShared_3598_ == 0)
{
lean_ctor_set_tag(v___x_3597_, 5);
lean_ctor_set(v___x_3597_, 1, v_x_3591_);
lean_ctor_set(v___x_3597_, 0, v_x_3592_);
v___x_3600_ = v___x_3597_;
goto v_reusejp_3599_;
}
else
{
lean_object* v_reuseFailAlloc_3604_; 
v_reuseFailAlloc_3604_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3604_, 0, v_x_3592_);
lean_ctor_set(v_reuseFailAlloc_3604_, 1, v_x_3591_);
v___x_3600_ = v_reuseFailAlloc_3604_;
goto v_reusejp_3599_;
}
v_reusejp_3599_:
{
lean_object* v___x_3601_; lean_object* v___x_3602_; 
v___x_3601_ = l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(v_head_3594_);
v___x_3602_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3602_, 0, v___x_3600_);
lean_ctor_set(v___x_3602_, 1, v___x_3601_);
v_x_3592_ = v___x_3602_;
v_x_3593_ = v_tail_3595_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8(lean_object* v_x_3606_, lean_object* v_x_3607_){
_start:
{
if (lean_obj_tag(v_x_3606_) == 0)
{
lean_object* v___x_3608_; 
lean_dec(v_x_3607_);
v___x_3608_ = lean_box(0);
return v___x_3608_;
}
else
{
lean_object* v_tail_3609_; 
v_tail_3609_ = lean_ctor_get(v_x_3606_, 1);
if (lean_obj_tag(v_tail_3609_) == 0)
{
lean_object* v_head_3610_; lean_object* v___x_3611_; 
lean_dec(v_x_3607_);
v_head_3610_ = lean_ctor_get(v_x_3606_, 0);
lean_inc(v_head_3610_);
lean_dec_ref_known(v_x_3606_, 2);
v___x_3611_ = l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(v_head_3610_);
return v___x_3611_;
}
else
{
lean_object* v_head_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; 
lean_inc(v_tail_3609_);
v_head_3612_ = lean_ctor_get(v_x_3606_, 0);
lean_inc(v_head_3612_);
lean_dec_ref_known(v_x_3606_, 2);
v___x_3613_ = l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(v_head_3612_);
v___x_3614_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8_spec__11(v_x_3607_, v___x_3613_, v_tail_3609_);
return v___x_3614_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(lean_object* v_xs_3615_){
_start:
{
lean_object* v___x_3616_; lean_object* v___x_3617_; uint8_t v___x_3618_; 
v___x_3616_ = lean_array_get_size(v_xs_3615_);
v___x_3617_ = lean_unsigned_to_nat(0u);
v___x_3618_ = lean_nat_dec_eq(v___x_3616_, v___x_3617_);
if (v___x_3618_ == 0)
{
lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; 
v___x_3619_ = lean_array_to_list(v_xs_3615_);
v___x_3620_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3));
v___x_3621_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8(v___x_3619_, v___x_3620_);
v___x_3622_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5);
v___x_3623_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6));
v___x_3624_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3624_, 0, v___x_3623_);
lean_ctor_set(v___x_3624_, 1, v___x_3621_);
v___x_3625_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_3626_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3626_, 0, v___x_3624_);
lean_ctor_set(v___x_3626_, 1, v___x_3625_);
v___x_3627_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3627_, 0, v___x_3622_);
lean_ctor_set(v___x_3627_, 1, v___x_3626_);
v___x_3628_ = l_Std_Format_fill(v___x_3627_);
return v___x_3628_;
}
else
{
lean_object* v___x_3629_; 
lean_dec_ref(v_xs_3615_);
v___x_3629_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8));
return v___x_3629_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4_spec__10(lean_object* v_x_3630_, lean_object* v_x_3631_, lean_object* v_x_3632_){
_start:
{
if (lean_obj_tag(v_x_3632_) == 0)
{
lean_dec(v_x_3630_);
return v_x_3631_;
}
else
{
lean_object* v_head_3633_; lean_object* v_tail_3634_; lean_object* v___x_3636_; uint8_t v_isShared_3637_; uint8_t v_isSharedCheck_3644_; 
v_head_3633_ = lean_ctor_get(v_x_3632_, 0);
v_tail_3634_ = lean_ctor_get(v_x_3632_, 1);
v_isSharedCheck_3644_ = !lean_is_exclusive(v_x_3632_);
if (v_isSharedCheck_3644_ == 0)
{
v___x_3636_ = v_x_3632_;
v_isShared_3637_ = v_isSharedCheck_3644_;
goto v_resetjp_3635_;
}
else
{
lean_inc(v_tail_3634_);
lean_inc(v_head_3633_);
lean_dec(v_x_3632_);
v___x_3636_ = lean_box(0);
v_isShared_3637_ = v_isSharedCheck_3644_;
goto v_resetjp_3635_;
}
v_resetjp_3635_:
{
lean_object* v___x_3639_; 
lean_inc(v_x_3630_);
if (v_isShared_3637_ == 0)
{
lean_ctor_set_tag(v___x_3636_, 5);
lean_ctor_set(v___x_3636_, 1, v_x_3630_);
lean_ctor_set(v___x_3636_, 0, v_x_3631_);
v___x_3639_ = v___x_3636_;
goto v_reusejp_3638_;
}
else
{
lean_object* v_reuseFailAlloc_3643_; 
v_reuseFailAlloc_3643_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3643_, 0, v_x_3631_);
lean_ctor_set(v_reuseFailAlloc_3643_, 1, v_x_3630_);
v___x_3639_ = v_reuseFailAlloc_3643_;
goto v_reusejp_3638_;
}
v_reusejp_3638_:
{
lean_object* v___x_3640_; lean_object* v___x_3641_; 
v___x_3640_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(v_head_3633_);
v___x_3641_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3641_, 0, v___x_3639_);
lean_ctor_set(v___x_3641_, 1, v___x_3640_);
v_x_3631_ = v___x_3641_;
v_x_3632_ = v_tail_3634_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4(lean_object* v_x_3645_, lean_object* v_x_3646_){
_start:
{
if (lean_obj_tag(v_x_3645_) == 0)
{
lean_object* v___x_3647_; 
lean_dec(v_x_3646_);
v___x_3647_ = lean_box(0);
return v___x_3647_;
}
else
{
lean_object* v_tail_3648_; 
v_tail_3648_ = lean_ctor_get(v_x_3645_, 1);
if (lean_obj_tag(v_tail_3648_) == 0)
{
lean_object* v_head_3649_; lean_object* v___x_3650_; 
lean_dec(v_x_3646_);
v_head_3649_ = lean_ctor_get(v_x_3645_, 0);
lean_inc(v_head_3649_);
lean_dec_ref_known(v_x_3645_, 2);
v___x_3650_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(v_head_3649_);
return v___x_3650_;
}
else
{
lean_object* v_head_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; 
lean_inc(v_tail_3648_);
v_head_3651_ = lean_ctor_get(v_x_3645_, 0);
lean_inc(v_head_3651_);
lean_dec_ref_known(v_x_3645_, 2);
v___x_3652_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(v_head_3651_);
v___x_3653_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4_spec__10(v_x_3646_, v___x_3652_, v_tail_3648_);
return v___x_3653_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1(lean_object* v_xs_3654_){
_start:
{
lean_object* v___x_3655_; lean_object* v___x_3656_; uint8_t v___x_3657_; 
v___x_3655_ = lean_array_get_size(v_xs_3654_);
v___x_3656_ = lean_unsigned_to_nat(0u);
v___x_3657_ = lean_nat_dec_eq(v___x_3655_, v___x_3656_);
if (v___x_3657_ == 0)
{
lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; lean_object* v___x_3667_; 
v___x_3658_ = lean_array_to_list(v_xs_3654_);
v___x_3659_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3));
v___x_3660_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4(v___x_3658_, v___x_3659_);
v___x_3661_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5);
v___x_3662_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6));
v___x_3663_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3663_, 0, v___x_3662_);
lean_ctor_set(v___x_3663_, 1, v___x_3660_);
v___x_3664_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_3665_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3665_, 0, v___x_3663_);
lean_ctor_set(v___x_3665_, 1, v___x_3664_);
v___x_3666_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3666_, 0, v___x_3661_);
lean_ctor_set(v___x_3666_, 1, v___x_3665_);
v___x_3667_ = l_Std_Format_fill(v___x_3666_);
return v___x_3667_;
}
else
{
lean_object* v___x_3668_; 
lean_dec_ref(v_xs_3654_);
v___x_3668_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8));
return v___x_3668_;
}
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_3682_; lean_object* v___x_3683_; 
v___x_3682_ = lean_unsigned_to_nat(12u);
v___x_3683_ = lean_nat_to_int(v___x_3682_);
return v___x_3683_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_3687_; lean_object* v___x_3688_; 
v___x_3687_ = lean_unsigned_to_nat(9u);
v___x_3688_ = lean_nat_to_int(v___x_3687_);
return v___x_3688_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_3692_; lean_object* v___x_3693_; 
v___x_3692_ = lean_unsigned_to_nat(11u);
v___x_3693_ = lean_nat_to_int(v___x_3692_);
return v___x_3693_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_3695_; lean_object* v___x_3696_; 
v___x_3695_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0));
v___x_3696_ = lean_string_length(v___x_3695_);
return v___x_3696_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_3697_; lean_object* v___x_3698_; 
v___x_3697_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15);
v___x_3698_ = lean_nat_to_int(v___x_3697_);
return v___x_3698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg(lean_object* v_x_3703_){
_start:
{
lean_object* v_numFixed_3704_; lean_object* v_perms_3705_; lean_object* v_revDeps_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; uint8_t v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; 
v_numFixed_3704_ = lean_ctor_get(v_x_3703_, 0);
lean_inc(v_numFixed_3704_);
v_perms_3705_ = lean_ctor_get(v_x_3703_, 1);
lean_inc_ref(v_perms_3705_);
v_revDeps_3706_ = lean_ctor_get(v_x_3703_, 2);
lean_inc_ref(v_revDeps_3706_);
lean_dec_ref(v_x_3703_);
v___x_3707_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5));
v___x_3708_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__6));
v___x_3709_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7);
v___x_3710_ = l_Nat_reprFast(v_numFixed_3704_);
v___x_3711_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3711_, 0, v___x_3710_);
v___x_3712_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3712_, 0, v___x_3709_);
lean_ctor_set(v___x_3712_, 1, v___x_3711_);
v___x_3713_ = 0;
v___x_3714_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3714_, 0, v___x_3712_);
lean_ctor_set_uint8(v___x_3714_, sizeof(void*)*1, v___x_3713_);
v___x_3715_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3715_, 0, v___x_3708_);
lean_ctor_set(v___x_3715_, 1, v___x_3714_);
v___x_3716_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__2));
v___x_3717_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3717_, 0, v___x_3715_);
lean_ctor_set(v___x_3717_, 1, v___x_3716_);
v___x_3718_ = lean_box(1);
v___x_3719_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3719_, 0, v___x_3717_);
lean_ctor_set(v___x_3719_, 1, v___x_3718_);
v___x_3720_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__9));
v___x_3721_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3721_, 0, v___x_3719_);
lean_ctor_set(v___x_3721_, 1, v___x_3720_);
v___x_3722_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3722_, 0, v___x_3721_);
lean_ctor_set(v___x_3722_, 1, v___x_3707_);
v___x_3723_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10);
v___x_3724_ = l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0(v_perms_3705_);
v___x_3725_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3725_, 0, v___x_3723_);
lean_ctor_set(v___x_3725_, 1, v___x_3724_);
v___x_3726_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3726_, 0, v___x_3725_);
lean_ctor_set_uint8(v___x_3726_, sizeof(void*)*1, v___x_3713_);
v___x_3727_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3727_, 0, v___x_3722_);
lean_ctor_set(v___x_3727_, 1, v___x_3726_);
v___x_3728_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3728_, 0, v___x_3727_);
lean_ctor_set(v___x_3728_, 1, v___x_3716_);
v___x_3729_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3729_, 0, v___x_3728_);
lean_ctor_set(v___x_3729_, 1, v___x_3718_);
v___x_3730_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__12));
v___x_3731_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3731_, 0, v___x_3729_);
lean_ctor_set(v___x_3731_, 1, v___x_3730_);
v___x_3732_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3732_, 0, v___x_3731_);
lean_ctor_set(v___x_3732_, 1, v___x_3707_);
v___x_3733_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13);
v___x_3734_ = l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1(v_revDeps_3706_);
v___x_3735_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3735_, 0, v___x_3733_);
lean_ctor_set(v___x_3735_, 1, v___x_3734_);
v___x_3736_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3736_, 0, v___x_3735_);
lean_ctor_set_uint8(v___x_3736_, sizeof(void*)*1, v___x_3713_);
v___x_3737_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3737_, 0, v___x_3732_);
lean_ctor_set(v___x_3737_, 1, v___x_3736_);
v___x_3738_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16);
v___x_3739_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__17));
v___x_3740_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3740_, 0, v___x_3739_);
lean_ctor_set(v___x_3740_, 1, v___x_3737_);
v___x_3741_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__18));
v___x_3742_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3742_, 0, v___x_3740_);
lean_ctor_set(v___x_3742_, 1, v___x_3741_);
v___x_3743_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3743_, 0, v___x_3738_);
lean_ctor_set(v___x_3743_, 1, v___x_3742_);
v___x_3744_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3744_, 0, v___x_3743_);
lean_ctor_set_uint8(v___x_3744_, sizeof(void*)*1, v___x_3713_);
return v___x_3744_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr(lean_object* v_x_3745_, lean_object* v_prec_3746_){
_start:
{
lean_object* v___x_3747_; 
v___x_3747_ = l_Lean_Elab_instReprFixedParamPerms_repr___redArg(v_x_3745_);
return v___x_3747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___boxed(lean_object* v_x_3748_, lean_object* v_prec_3749_){
_start:
{
lean_object* v_res_3750_; 
v_res_3750_ = l_Lean_Elab_instReprFixedParamPerms_repr(v_x_3748_, v_prec_3749_);
lean_dec(v_prec_3749_);
return v_res_3750_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0(lean_object* v_msg_3753_, lean_object* v___y_3754_, lean_object* v___y_3755_, lean_object* v___y_3756_, lean_object* v___y_3757_){
_start:
{
lean_object* v___f_3759_; lean_object* v___x_6272__overap_3760_; lean_object* v___x_3761_; 
v___f_3759_ = ((lean_object*)(l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0));
v___x_6272__overap_3760_ = lean_panic_fn_borrowed(v___f_3759_, v_msg_3753_);
lean_inc(v___y_3757_);
lean_inc_ref(v___y_3756_);
lean_inc(v___y_3755_);
lean_inc_ref(v___y_3754_);
v___x_3761_ = lean_apply_5(v___x_6272__overap_3760_, v___y_3754_, v___y_3755_, v___y_3756_, v___y_3757_, lean_box(0));
return v___x_3761_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0___boxed(lean_object* v_msg_3762_, lean_object* v___y_3763_, lean_object* v___y_3764_, lean_object* v___y_3765_, lean_object* v___y_3766_, lean_object* v___y_3767_){
_start:
{
lean_object* v_res_3768_; 
v_res_3768_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0(v_msg_3762_, v___y_3763_, v___y_3764_, v___y_3765_, v___y_3766_);
lean_dec(v___y_3766_);
lean_dec_ref(v___y_3765_);
lean_dec(v___y_3764_);
lean_dec_ref(v___y_3763_);
return v_res_3768_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1(lean_object* v_msg_3769_, lean_object* v___y_3770_, lean_object* v___y_3771_, lean_object* v___y_3772_, lean_object* v___y_3773_){
_start:
{
lean_object* v___f_3775_; lean_object* v___x_6282__overap_3776_; lean_object* v___x_3777_; 
v___f_3775_ = ((lean_object*)(l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0));
v___x_6282__overap_3776_ = lean_panic_fn_borrowed(v___f_3775_, v_msg_3769_);
lean_inc(v___y_3773_);
lean_inc_ref(v___y_3772_);
lean_inc(v___y_3771_);
lean_inc_ref(v___y_3770_);
v___x_3777_ = lean_apply_5(v___x_6282__overap_3776_, v___y_3770_, v___y_3771_, v___y_3772_, v___y_3773_, lean_box(0));
return v___x_3777_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1___boxed(lean_object* v_msg_3778_, lean_object* v___y_3779_, lean_object* v___y_3780_, lean_object* v___y_3781_, lean_object* v___y_3782_, lean_object* v___y_3783_){
_start:
{
lean_object* v_res_3784_; 
v_res_3784_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1(v_msg_3778_, v___y_3779_, v___y_3780_, v___y_3781_, v___y_3782_);
lean_dec(v___y_3782_);
lean_dec_ref(v___y_3781_);
lean_dec(v___y_3780_);
lean_dec_ref(v___y_3779_);
return v_res_3784_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2(lean_object* v_msg_3785_, lean_object* v___y_3786_, lean_object* v___y_3787_, lean_object* v___y_3788_, lean_object* v___y_3789_){
_start:
{
lean_object* v___f_3791_; lean_object* v___x_6292__overap_3792_; lean_object* v___x_3793_; 
v___f_3791_ = ((lean_object*)(l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0));
v___x_6292__overap_3792_ = lean_panic_fn_borrowed(v___f_3791_, v_msg_3785_);
lean_inc(v___y_3789_);
lean_inc_ref(v___y_3788_);
lean_inc(v___y_3787_);
lean_inc_ref(v___y_3786_);
v___x_3793_ = lean_apply_5(v___x_6292__overap_3792_, v___y_3786_, v___y_3787_, v___y_3788_, v___y_3789_, lean_box(0));
return v___x_3793_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2___boxed(lean_object* v_msg_3794_, lean_object* v___y_3795_, lean_object* v___y_3796_, lean_object* v___y_3797_, lean_object* v___y_3798_, lean_object* v___y_3799_){
_start:
{
lean_object* v_res_3800_; 
v_res_3800_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2(v_msg_3794_, v___y_3795_, v___y_3796_, v___y_3797_, v___y_3798_);
lean_dec(v___y_3798_);
lean_dec_ref(v___y_3797_);
lean_dec(v___y_3796_);
lean_dec_ref(v___y_3795_);
return v_res_3800_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2(void){
_start:
{
lean_object* v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; 
v___x_3803_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__1));
v___x_3804_ = lean_unsigned_to_nat(12u);
v___x_3805_ = lean_unsigned_to_nat(294u);
v___x_3806_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0));
v___x_3807_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_3808_ = l_mkPanicMessageWithDecl(v___x_3807_, v___x_3806_, v___x_3805_, v___x_3804_, v___x_3803_);
return v___x_3808_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4(void){
_start:
{
lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; 
v___x_3810_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__3));
v___x_3811_ = lean_unsigned_to_nat(12u);
v___x_3812_ = lean_unsigned_to_nat(297u);
v___x_3813_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0));
v___x_3814_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_3815_ = l_mkPanicMessageWithDecl(v___x_3814_, v___x_3813_, v___x_3812_, v___x_3811_, v___x_3810_);
return v___x_3815_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3(lean_object* v___x_3816_, lean_object* v_as_3817_, size_t v_sz_3818_, size_t v_i_3819_, lean_object* v_b_3820_, lean_object* v___y_3821_, lean_object* v___y_3822_, lean_object* v___y_3823_, lean_object* v___y_3824_){
_start:
{
lean_object* v_a_3827_; uint8_t v___x_3831_; 
v___x_3831_ = lean_usize_dec_lt(v_i_3819_, v_sz_3818_);
if (v___x_3831_ == 0)
{
lean_object* v___x_3832_; 
v___x_3832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3832_, 0, v_b_3820_);
return v___x_3832_;
}
else
{
lean_object* v_a_3833_; 
v_a_3833_ = lean_array_uget_borrowed(v_as_3817_, v_i_3819_);
if (lean_obj_tag(v_a_3833_) == 1)
{
lean_object* v_val_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; 
v_val_3834_ = lean_ctor_get(v_a_3833_, 0);
v___x_3835_ = lean_box(0);
v___x_3836_ = lean_unsigned_to_nat(0u);
v___x_3837_ = lean_array_get_borrowed(v___x_3835_, v_val_3834_, v___x_3836_);
if (lean_obj_tag(v___x_3837_) == 1)
{
lean_object* v_val_3838_; lean_object* v___x_3839_; 
v_val_3838_ = lean_ctor_get(v___x_3837_, 0);
v___x_3839_ = lean_array_get_borrowed(v___x_3835_, v___x_3816_, v_val_3838_);
if (lean_obj_tag(v___x_3839_) == 0)
{
lean_object* v___x_3840_; lean_object* v___x_3841_; 
lean_dec_ref(v_b_3820_);
v___x_3840_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2);
v___x_3841_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2(v___x_3840_, v___y_3821_, v___y_3822_, v___y_3823_, v___y_3824_);
if (lean_obj_tag(v___x_3841_) == 0)
{
lean_object* v_a_3842_; lean_object* v___x_3844_; uint8_t v_isShared_3845_; uint8_t v_isSharedCheck_3851_; 
v_a_3842_ = lean_ctor_get(v___x_3841_, 0);
v_isSharedCheck_3851_ = !lean_is_exclusive(v___x_3841_);
if (v_isSharedCheck_3851_ == 0)
{
v___x_3844_ = v___x_3841_;
v_isShared_3845_ = v_isSharedCheck_3851_;
goto v_resetjp_3843_;
}
else
{
lean_inc(v_a_3842_);
lean_dec(v___x_3841_);
v___x_3844_ = lean_box(0);
v_isShared_3845_ = v_isSharedCheck_3851_;
goto v_resetjp_3843_;
}
v_resetjp_3843_:
{
if (lean_obj_tag(v_a_3842_) == 0)
{
lean_object* v_a_3846_; lean_object* v___x_3848_; 
v_a_3846_ = lean_ctor_get(v_a_3842_, 0);
lean_inc(v_a_3846_);
lean_dec_ref_known(v_a_3842_, 1);
if (v_isShared_3845_ == 0)
{
lean_ctor_set(v___x_3844_, 0, v_a_3846_);
v___x_3848_ = v___x_3844_;
goto v_reusejp_3847_;
}
else
{
lean_object* v_reuseFailAlloc_3849_; 
v_reuseFailAlloc_3849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3849_, 0, v_a_3846_);
v___x_3848_ = v_reuseFailAlloc_3849_;
goto v_reusejp_3847_;
}
v_reusejp_3847_:
{
return v___x_3848_;
}
}
else
{
lean_object* v_a_3850_; 
lean_del_object(v___x_3844_);
v_a_3850_ = lean_ctor_get(v_a_3842_, 0);
lean_inc(v_a_3850_);
lean_dec_ref_known(v_a_3842_, 1);
v_a_3827_ = v_a_3850_;
goto v___jp_3826_;
}
}
}
else
{
lean_object* v_a_3852_; lean_object* v___x_3854_; uint8_t v_isShared_3855_; uint8_t v_isSharedCheck_3859_; 
v_a_3852_ = lean_ctor_get(v___x_3841_, 0);
v_isSharedCheck_3859_ = !lean_is_exclusive(v___x_3841_);
if (v_isSharedCheck_3859_ == 0)
{
v___x_3854_ = v___x_3841_;
v_isShared_3855_ = v_isSharedCheck_3859_;
goto v_resetjp_3853_;
}
else
{
lean_inc(v_a_3852_);
lean_dec(v___x_3841_);
v___x_3854_ = lean_box(0);
v_isShared_3855_ = v_isSharedCheck_3859_;
goto v_resetjp_3853_;
}
v_resetjp_3853_:
{
lean_object* v___x_3857_; 
if (v_isShared_3855_ == 0)
{
v___x_3857_ = v___x_3854_;
goto v_reusejp_3856_;
}
else
{
lean_object* v_reuseFailAlloc_3858_; 
v_reuseFailAlloc_3858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3858_, 0, v_a_3852_);
v___x_3857_ = v_reuseFailAlloc_3858_;
goto v_reusejp_3856_;
}
v_reusejp_3856_:
{
return v___x_3857_;
}
}
}
}
else
{
lean_object* v___x_3860_; 
lean_inc_ref(v___x_3839_);
v___x_3860_ = lean_array_push(v_b_3820_, v___x_3839_);
v_a_3827_ = v___x_3860_;
goto v___jp_3826_;
}
}
else
{
lean_object* v___x_3861_; lean_object* v___x_3862_; 
v___x_3861_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4);
v___x_3862_ = l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7(v___x_3861_, v___y_3821_, v___y_3822_, v___y_3823_, v___y_3824_);
if (lean_obj_tag(v___x_3862_) == 0)
{
lean_dec_ref_known(v___x_3862_, 1);
v_a_3827_ = v_b_3820_;
goto v___jp_3826_;
}
else
{
lean_object* v_a_3863_; lean_object* v___x_3865_; uint8_t v_isShared_3866_; uint8_t v_isSharedCheck_3870_; 
lean_dec_ref(v_b_3820_);
v_a_3863_ = lean_ctor_get(v___x_3862_, 0);
v_isSharedCheck_3870_ = !lean_is_exclusive(v___x_3862_);
if (v_isSharedCheck_3870_ == 0)
{
v___x_3865_ = v___x_3862_;
v_isShared_3866_ = v_isSharedCheck_3870_;
goto v_resetjp_3864_;
}
else
{
lean_inc(v_a_3863_);
lean_dec(v___x_3862_);
v___x_3865_ = lean_box(0);
v_isShared_3866_ = v_isSharedCheck_3870_;
goto v_resetjp_3864_;
}
v_resetjp_3864_:
{
lean_object* v___x_3868_; 
if (v_isShared_3866_ == 0)
{
v___x_3868_ = v___x_3865_;
goto v_reusejp_3867_;
}
else
{
lean_object* v_reuseFailAlloc_3869_; 
v_reuseFailAlloc_3869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3869_, 0, v_a_3863_);
v___x_3868_ = v_reuseFailAlloc_3869_;
goto v_reusejp_3867_;
}
v_reusejp_3867_:
{
return v___x_3868_;
}
}
}
}
}
else
{
lean_object* v___x_3871_; lean_object* v___x_3872_; 
v___x_3871_ = lean_box(0);
v___x_3872_ = lean_array_push(v_b_3820_, v___x_3871_);
v_a_3827_ = v___x_3872_;
goto v___jp_3826_;
}
}
v___jp_3826_:
{
size_t v___x_3828_; size_t v___x_3829_; 
v___x_3828_ = ((size_t)1ULL);
v___x_3829_ = lean_usize_add(v_i_3819_, v___x_3828_);
v_i_3819_ = v___x_3829_;
v_b_3820_ = v_a_3827_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___boxed(lean_object* v___x_3873_, lean_object* v_as_3874_, lean_object* v_sz_3875_, lean_object* v_i_3876_, lean_object* v_b_3877_, lean_object* v___y_3878_, lean_object* v___y_3879_, lean_object* v___y_3880_, lean_object* v___y_3881_, lean_object* v___y_3882_){
_start:
{
size_t v_sz_boxed_3883_; size_t v_i_boxed_3884_; lean_object* v_res_3885_; 
v_sz_boxed_3883_ = lean_unbox_usize(v_sz_3875_);
lean_dec(v_sz_3875_);
v_i_boxed_3884_ = lean_unbox_usize(v_i_3876_);
lean_dec(v_i_3876_);
v_res_3885_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3(v___x_3873_, v_as_3874_, v_sz_boxed_3883_, v_i_boxed_3884_, v_b_3877_, v___y_3878_, v___y_3879_, v___y_3880_, v___y_3881_);
lean_dec(v___y_3881_);
lean_dec_ref(v___y_3880_);
lean_dec(v___y_3879_);
lean_dec_ref(v___y_3878_);
lean_dec_ref(v_as_3874_);
lean_dec_ref(v___x_3873_);
return v_res_3885_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(lean_object* v_upperBound_3888_, lean_object* v___x_3889_, lean_object* v___x_3890_, lean_object* v_a_3891_, lean_object* v_b_3892_, lean_object* v___y_3893_, lean_object* v___y_3894_, lean_object* v___y_3895_, lean_object* v___y_3896_){
_start:
{
uint8_t v___x_3898_; 
v___x_3898_ = lean_nat_dec_lt(v_a_3891_, v_upperBound_3888_);
if (v___x_3898_ == 0)
{
lean_object* v___x_3899_; 
lean_dec(v_a_3891_);
v___x_3899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3899_, 0, v_b_3892_);
return v___x_3899_;
}
else
{
lean_object* v___x_3900_; lean_object* v___x_3901_; size_t v_sz_3902_; size_t v___x_3903_; lean_object* v___x_3904_; 
v___x_3900_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0));
v___x_3901_ = lean_array_fget_borrowed(v___x_3889_, v_a_3891_);
v_sz_3902_ = lean_array_size(v___x_3901_);
v___x_3903_ = ((size_t)0ULL);
v___x_3904_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3(v___x_3890_, v___x_3901_, v_sz_3902_, v___x_3903_, v___x_3900_, v___y_3893_, v___y_3894_, v___y_3895_, v___y_3896_);
if (lean_obj_tag(v___x_3904_) == 0)
{
lean_object* v_a_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; 
v_a_3905_ = lean_ctor_get(v___x_3904_, 0);
lean_inc(v_a_3905_);
lean_dec_ref_known(v___x_3904_, 1);
v___x_3906_ = lean_array_push(v_b_3892_, v_a_3905_);
v___x_3907_ = lean_unsigned_to_nat(1u);
v___x_3908_ = lean_nat_add(v_a_3891_, v___x_3907_);
lean_dec(v_a_3891_);
v_a_3891_ = v___x_3908_;
v_b_3892_ = v___x_3906_;
goto _start;
}
else
{
lean_object* v_a_3910_; lean_object* v___x_3912_; uint8_t v_isShared_3913_; uint8_t v_isSharedCheck_3917_; 
lean_dec_ref(v_b_3892_);
lean_dec(v_a_3891_);
v_a_3910_ = lean_ctor_get(v___x_3904_, 0);
v_isSharedCheck_3917_ = !lean_is_exclusive(v___x_3904_);
if (v_isSharedCheck_3917_ == 0)
{
v___x_3912_ = v___x_3904_;
v_isShared_3913_ = v_isSharedCheck_3917_;
goto v_resetjp_3911_;
}
else
{
lean_inc(v_a_3910_);
lean_dec(v___x_3904_);
v___x_3912_ = lean_box(0);
v_isShared_3913_ = v_isSharedCheck_3917_;
goto v_resetjp_3911_;
}
v_resetjp_3911_:
{
lean_object* v___x_3915_; 
if (v_isShared_3913_ == 0)
{
v___x_3915_ = v___x_3912_;
goto v_reusejp_3914_;
}
else
{
lean_object* v_reuseFailAlloc_3916_; 
v_reuseFailAlloc_3916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3916_, 0, v_a_3910_);
v___x_3915_ = v_reuseFailAlloc_3916_;
goto v_reusejp_3914_;
}
v_reusejp_3914_:
{
return v___x_3915_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___boxed(lean_object* v_upperBound_3918_, lean_object* v___x_3919_, lean_object* v___x_3920_, lean_object* v_a_3921_, lean_object* v_b_3922_, lean_object* v___y_3923_, lean_object* v___y_3924_, lean_object* v___y_3925_, lean_object* v___y_3926_, lean_object* v___y_3927_){
_start:
{
lean_object* v_res_3928_; 
v_res_3928_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(v_upperBound_3918_, v___x_3919_, v___x_3920_, v_a_3921_, v_b_3922_, v___y_3923_, v___y_3924_, v___y_3925_, v___y_3926_);
lean_dec(v___y_3926_);
lean_dec_ref(v___y_3925_);
lean_dec(v___y_3924_);
lean_dec_ref(v___y_3923_);
lean_dec_ref(v___x_3920_);
lean_dec_ref(v___x_3919_);
lean_dec(v_upperBound_3918_);
return v_res_3928_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; lean_object* v___x_3935_; 
v___x_3930_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__0));
v___x_3931_ = lean_unsigned_to_nat(8u);
v___x_3932_ = lean_unsigned_to_nat(281u);
v___x_3933_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0));
v___x_3934_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_3935_ = l_mkPanicMessageWithDecl(v___x_3934_, v___x_3933_, v___x_3932_, v___x_3931_, v___x_3930_);
return v___x_3935_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(lean_object* v_upperBound_3936_, lean_object* v_a_3937_, lean_object* v_b_3938_, lean_object* v___y_3939_, lean_object* v___y_3940_, lean_object* v___y_3941_, lean_object* v___y_3942_){
_start:
{
lean_object* v_a_3945_; uint8_t v___x_3949_; 
v___x_3949_ = lean_nat_dec_lt(v_a_3937_, v_upperBound_3936_);
if (v___x_3949_ == 0)
{
lean_object* v___x_3950_; 
lean_dec(v_a_3937_);
v___x_3950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3950_, 0, v_b_3938_);
return v___x_3950_;
}
else
{
lean_object* v_snd_3951_; lean_object* v_snd_3952_; lean_object* v_snd_3953_; lean_object* v_fst_3954_; lean_object* v___x_3956_; uint8_t v_isShared_3957_; uint8_t v_isSharedCheck_4078_; 
v_snd_3951_ = lean_ctor_get(v_b_3938_, 1);
lean_inc(v_snd_3951_);
v_snd_3952_ = lean_ctor_get(v_snd_3951_, 1);
lean_inc(v_snd_3952_);
v_snd_3953_ = lean_ctor_get(v_snd_3952_, 1);
lean_inc(v_snd_3953_);
v_fst_3954_ = lean_ctor_get(v_b_3938_, 0);
v_isSharedCheck_4078_ = !lean_is_exclusive(v_b_3938_);
if (v_isSharedCheck_4078_ == 0)
{
lean_object* v_unused_4079_; 
v_unused_4079_ = lean_ctor_get(v_b_3938_, 1);
lean_dec(v_unused_4079_);
v___x_3956_ = v_b_3938_;
v_isShared_3957_ = v_isSharedCheck_4078_;
goto v_resetjp_3955_;
}
else
{
lean_inc(v_fst_3954_);
lean_dec(v_b_3938_);
v___x_3956_ = lean_box(0);
v_isShared_3957_ = v_isSharedCheck_4078_;
goto v_resetjp_3955_;
}
v_resetjp_3955_:
{
lean_object* v_fst_3958_; lean_object* v___x_3960_; uint8_t v_isShared_3961_; uint8_t v_isSharedCheck_4076_; 
v_fst_3958_ = lean_ctor_get(v_snd_3951_, 0);
v_isSharedCheck_4076_ = !lean_is_exclusive(v_snd_3951_);
if (v_isSharedCheck_4076_ == 0)
{
lean_object* v_unused_4077_; 
v_unused_4077_ = lean_ctor_get(v_snd_3951_, 1);
lean_dec(v_unused_4077_);
v___x_3960_ = v_snd_3951_;
v_isShared_3961_ = v_isSharedCheck_4076_;
goto v_resetjp_3959_;
}
else
{
lean_inc(v_fst_3958_);
lean_dec(v_snd_3951_);
v___x_3960_ = lean_box(0);
v_isShared_3961_ = v_isSharedCheck_4076_;
goto v_resetjp_3959_;
}
v_resetjp_3959_:
{
lean_object* v_fst_3962_; lean_object* v___x_3964_; uint8_t v_isShared_3965_; uint8_t v_isSharedCheck_4074_; 
v_fst_3962_ = lean_ctor_get(v_snd_3952_, 0);
v_isSharedCheck_4074_ = !lean_is_exclusive(v_snd_3952_);
if (v_isSharedCheck_4074_ == 0)
{
lean_object* v_unused_4075_; 
v_unused_4075_ = lean_ctor_get(v_snd_3952_, 1);
lean_dec(v_unused_4075_);
v___x_3964_ = v_snd_3952_;
v_isShared_3965_ = v_isSharedCheck_4074_;
goto v_resetjp_3963_;
}
else
{
lean_inc(v_fst_3962_);
lean_dec(v_snd_3952_);
v___x_3964_ = lean_box(0);
v_isShared_3965_ = v_isSharedCheck_4074_;
goto v_resetjp_3963_;
}
v_resetjp_3963_:
{
lean_object* v_array_3966_; lean_object* v_start_3967_; lean_object* v_stop_3968_; uint8_t v___x_3969_; 
v_array_3966_ = lean_ctor_get(v_snd_3953_, 0);
v_start_3967_ = lean_ctor_get(v_snd_3953_, 1);
v_stop_3968_ = lean_ctor_get(v_snd_3953_, 2);
v___x_3969_ = lean_nat_dec_lt(v_start_3967_, v_stop_3968_);
if (v___x_3969_ == 0)
{
lean_object* v___x_3971_; 
lean_dec(v_a_3937_);
if (v_isShared_3965_ == 0)
{
v___x_3971_ = v___x_3964_;
goto v_reusejp_3970_;
}
else
{
lean_object* v_reuseFailAlloc_3979_; 
v_reuseFailAlloc_3979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3979_, 0, v_fst_3962_);
lean_ctor_set(v_reuseFailAlloc_3979_, 1, v_snd_3953_);
v___x_3971_ = v_reuseFailAlloc_3979_;
goto v_reusejp_3970_;
}
v_reusejp_3970_:
{
lean_object* v___x_3973_; 
if (v_isShared_3961_ == 0)
{
lean_ctor_set(v___x_3960_, 1, v___x_3971_);
v___x_3973_ = v___x_3960_;
goto v_reusejp_3972_;
}
else
{
lean_object* v_reuseFailAlloc_3978_; 
v_reuseFailAlloc_3978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3978_, 0, v_fst_3958_);
lean_ctor_set(v_reuseFailAlloc_3978_, 1, v___x_3971_);
v___x_3973_ = v_reuseFailAlloc_3978_;
goto v_reusejp_3972_;
}
v_reusejp_3972_:
{
lean_object* v___x_3975_; 
if (v_isShared_3957_ == 0)
{
lean_ctor_set(v___x_3956_, 1, v___x_3973_);
v___x_3975_ = v___x_3956_;
goto v_reusejp_3974_;
}
else
{
lean_object* v_reuseFailAlloc_3977_; 
v_reuseFailAlloc_3977_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3977_, 0, v_fst_3954_);
lean_ctor_set(v_reuseFailAlloc_3977_, 1, v___x_3973_);
v___x_3975_ = v_reuseFailAlloc_3977_;
goto v_reusejp_3974_;
}
v_reusejp_3974_:
{
lean_object* v___x_3976_; 
v___x_3976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3976_, 0, v___x_3975_);
return v___x_3976_;
}
}
}
}
else
{
lean_object* v___x_3981_; uint8_t v_isShared_3982_; uint8_t v_isSharedCheck_4070_; 
lean_inc(v_stop_3968_);
lean_inc(v_start_3967_);
lean_inc_ref(v_array_3966_);
v_isSharedCheck_4070_ = !lean_is_exclusive(v_snd_3953_);
if (v_isSharedCheck_4070_ == 0)
{
lean_object* v_unused_4071_; lean_object* v_unused_4072_; lean_object* v_unused_4073_; 
v_unused_4071_ = lean_ctor_get(v_snd_3953_, 2);
lean_dec(v_unused_4071_);
v_unused_4072_ = lean_ctor_get(v_snd_3953_, 1);
lean_dec(v_unused_4072_);
v_unused_4073_ = lean_ctor_get(v_snd_3953_, 0);
lean_dec(v_unused_4073_);
v___x_3981_ = v_snd_3953_;
v_isShared_3982_ = v_isSharedCheck_4070_;
goto v_resetjp_3980_;
}
else
{
lean_dec(v_snd_3953_);
v___x_3981_ = lean_box(0);
v_isShared_3982_ = v_isSharedCheck_4070_;
goto v_resetjp_3980_;
}
v_resetjp_3980_:
{
lean_object* v_array_3983_; lean_object* v_start_3984_; lean_object* v_stop_3985_; lean_object* v___x_3986_; lean_object* v___x_3987_; lean_object* v___x_3988_; lean_object* v___x_3990_; 
v_array_3983_ = lean_ctor_get(v_fst_3962_, 0);
v_start_3984_ = lean_ctor_get(v_fst_3962_, 1);
v_stop_3985_ = lean_ctor_get(v_fst_3962_, 2);
v___x_3986_ = lean_array_fget(v_array_3966_, v_start_3967_);
v___x_3987_ = lean_unsigned_to_nat(1u);
v___x_3988_ = lean_nat_add(v_start_3967_, v___x_3987_);
lean_dec(v_start_3967_);
if (v_isShared_3982_ == 0)
{
lean_ctor_set(v___x_3981_, 1, v___x_3988_);
v___x_3990_ = v___x_3981_;
goto v_reusejp_3989_;
}
else
{
lean_object* v_reuseFailAlloc_4069_; 
v_reuseFailAlloc_4069_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4069_, 0, v_array_3966_);
lean_ctor_set(v_reuseFailAlloc_4069_, 1, v___x_3988_);
lean_ctor_set(v_reuseFailAlloc_4069_, 2, v_stop_3968_);
v___x_3990_ = v_reuseFailAlloc_4069_;
goto v_reusejp_3989_;
}
v_reusejp_3989_:
{
uint8_t v___x_3991_; 
v___x_3991_ = lean_nat_dec_lt(v_start_3984_, v_stop_3985_);
if (v___x_3991_ == 0)
{
lean_object* v___x_3993_; 
lean_dec(v___x_3986_);
lean_dec(v_a_3937_);
if (v_isShared_3965_ == 0)
{
lean_ctor_set(v___x_3964_, 1, v___x_3990_);
v___x_3993_ = v___x_3964_;
goto v_reusejp_3992_;
}
else
{
lean_object* v_reuseFailAlloc_4001_; 
v_reuseFailAlloc_4001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4001_, 0, v_fst_3962_);
lean_ctor_set(v_reuseFailAlloc_4001_, 1, v___x_3990_);
v___x_3993_ = v_reuseFailAlloc_4001_;
goto v_reusejp_3992_;
}
v_reusejp_3992_:
{
lean_object* v___x_3995_; 
if (v_isShared_3961_ == 0)
{
lean_ctor_set(v___x_3960_, 1, v___x_3993_);
v___x_3995_ = v___x_3960_;
goto v_reusejp_3994_;
}
else
{
lean_object* v_reuseFailAlloc_4000_; 
v_reuseFailAlloc_4000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4000_, 0, v_fst_3958_);
lean_ctor_set(v_reuseFailAlloc_4000_, 1, v___x_3993_);
v___x_3995_ = v_reuseFailAlloc_4000_;
goto v_reusejp_3994_;
}
v_reusejp_3994_:
{
lean_object* v___x_3997_; 
if (v_isShared_3957_ == 0)
{
lean_ctor_set(v___x_3956_, 1, v___x_3995_);
v___x_3997_ = v___x_3956_;
goto v_reusejp_3996_;
}
else
{
lean_object* v_reuseFailAlloc_3999_; 
v_reuseFailAlloc_3999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3999_, 0, v_fst_3954_);
lean_ctor_set(v_reuseFailAlloc_3999_, 1, v___x_3995_);
v___x_3997_ = v_reuseFailAlloc_3999_;
goto v_reusejp_3996_;
}
v_reusejp_3996_:
{
lean_object* v___x_3998_; 
v___x_3998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3998_, 0, v___x_3997_);
return v___x_3998_;
}
}
}
}
else
{
lean_object* v___x_4003_; uint8_t v_isShared_4004_; uint8_t v_isSharedCheck_4065_; 
lean_inc(v_stop_3985_);
lean_inc(v_start_3984_);
lean_inc_ref(v_array_3983_);
v_isSharedCheck_4065_ = !lean_is_exclusive(v_fst_3962_);
if (v_isSharedCheck_4065_ == 0)
{
lean_object* v_unused_4066_; lean_object* v_unused_4067_; lean_object* v_unused_4068_; 
v_unused_4066_ = lean_ctor_get(v_fst_3962_, 2);
lean_dec(v_unused_4066_);
v_unused_4067_ = lean_ctor_get(v_fst_3962_, 1);
lean_dec(v_unused_4067_);
v_unused_4068_ = lean_ctor_get(v_fst_3962_, 0);
lean_dec(v_unused_4068_);
v___x_4003_ = v_fst_3962_;
v_isShared_4004_ = v_isSharedCheck_4065_;
goto v_resetjp_4002_;
}
else
{
lean_dec(v_fst_3962_);
v___x_4003_ = lean_box(0);
v_isShared_4004_ = v_isSharedCheck_4065_;
goto v_resetjp_4002_;
}
v_resetjp_4002_:
{
lean_object* v___x_4005_; lean_object* v___x_4007_; 
v___x_4005_ = lean_nat_add(v_start_3984_, v___x_3987_);
lean_dec(v_start_3984_);
if (v_isShared_4004_ == 0)
{
lean_ctor_set(v___x_4003_, 1, v___x_4005_);
v___x_4007_ = v___x_4003_;
goto v_reusejp_4006_;
}
else
{
lean_object* v_reuseFailAlloc_4064_; 
v_reuseFailAlloc_4064_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4064_, 0, v_array_3983_);
lean_ctor_set(v_reuseFailAlloc_4064_, 1, v___x_4005_);
lean_ctor_set(v_reuseFailAlloc_4064_, 2, v_stop_3985_);
v___x_4007_ = v_reuseFailAlloc_4064_;
goto v_reusejp_4006_;
}
v_reusejp_4006_:
{
if (lean_obj_tag(v___x_3986_) == 1)
{
lean_object* v_val_4008_; lean_object* v___x_4010_; uint8_t v_isShared_4011_; uint8_t v_isSharedCheck_4052_; 
v_val_4008_ = lean_ctor_get(v___x_3986_, 0);
v_isSharedCheck_4052_ = !lean_is_exclusive(v___x_3986_);
if (v_isSharedCheck_4052_ == 0)
{
v___x_4010_ = v___x_3986_;
v_isShared_4011_ = v_isSharedCheck_4052_;
goto v_resetjp_4009_;
}
else
{
lean_inc(v_val_4008_);
lean_dec(v___x_3986_);
v___x_4010_ = lean_box(0);
v_isShared_4011_ = v_isSharedCheck_4052_;
goto v_resetjp_4009_;
}
v_resetjp_4009_:
{
lean_object* v___x_4012_; lean_object* v___x_4013_; lean_object* v___x_4014_; lean_object* v___x_4015_; lean_object* v___x_4017_; 
v___x_4012_ = lean_box(0);
v___x_4013_ = lean_unsigned_to_nat(0u);
v___x_4014_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___x_4015_ = lean_array_get(v___x_4012_, v_val_4008_, v___x_4013_);
lean_dec(v_val_4008_);
lean_inc(v_a_3937_);
if (v_isShared_4011_ == 0)
{
lean_ctor_set(v___x_4010_, 0, v_a_3937_);
v___x_4017_ = v___x_4010_;
goto v_reusejp_4016_;
}
else
{
lean_object* v_reuseFailAlloc_4051_; 
v_reuseFailAlloc_4051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4051_, 0, v_a_3937_);
v___x_4017_ = v_reuseFailAlloc_4051_;
goto v_reusejp_4016_;
}
v_reusejp_4016_:
{
uint8_t v___x_4018_; 
v___x_4018_ = l_Option_instDecidableEq___redArg(v___x_4014_, v___x_4015_, v___x_4017_);
if (v___x_4018_ == 0)
{
lean_object* v___x_4019_; lean_object* v___x_4020_; 
lean_dec_ref(v___x_4007_);
lean_dec_ref(v___x_3990_);
lean_del_object(v___x_3964_);
lean_del_object(v___x_3960_);
lean_dec(v_fst_3958_);
lean_del_object(v___x_3956_);
lean_dec(v_fst_3954_);
v___x_4019_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1);
v___x_4020_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1(v___x_4019_, v___y_3939_, v___y_3940_, v___y_3941_, v___y_3942_);
if (lean_obj_tag(v___x_4020_) == 0)
{
lean_object* v_a_4021_; lean_object* v___x_4023_; uint8_t v_isShared_4024_; uint8_t v_isSharedCheck_4030_; 
v_a_4021_ = lean_ctor_get(v___x_4020_, 0);
v_isSharedCheck_4030_ = !lean_is_exclusive(v___x_4020_);
if (v_isSharedCheck_4030_ == 0)
{
v___x_4023_ = v___x_4020_;
v_isShared_4024_ = v_isSharedCheck_4030_;
goto v_resetjp_4022_;
}
else
{
lean_inc(v_a_4021_);
lean_dec(v___x_4020_);
v___x_4023_ = lean_box(0);
v_isShared_4024_ = v_isSharedCheck_4030_;
goto v_resetjp_4022_;
}
v_resetjp_4022_:
{
if (lean_obj_tag(v_a_4021_) == 0)
{
lean_object* v_a_4025_; lean_object* v___x_4027_; 
lean_dec(v_a_3937_);
v_a_4025_ = lean_ctor_get(v_a_4021_, 0);
lean_inc(v_a_4025_);
lean_dec_ref_known(v_a_4021_, 1);
if (v_isShared_4024_ == 0)
{
lean_ctor_set(v___x_4023_, 0, v_a_4025_);
v___x_4027_ = v___x_4023_;
goto v_reusejp_4026_;
}
else
{
lean_object* v_reuseFailAlloc_4028_; 
v_reuseFailAlloc_4028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4028_, 0, v_a_4025_);
v___x_4027_ = v_reuseFailAlloc_4028_;
goto v_reusejp_4026_;
}
v_reusejp_4026_:
{
return v___x_4027_;
}
}
else
{
lean_object* v_a_4029_; 
lean_del_object(v___x_4023_);
v_a_4029_ = lean_ctor_get(v_a_4021_, 0);
lean_inc(v_a_4029_);
lean_dec_ref_known(v_a_4021_, 1);
v_a_3945_ = v_a_4029_;
goto v___jp_3944_;
}
}
}
else
{
lean_object* v_a_4031_; lean_object* v___x_4033_; uint8_t v_isShared_4034_; uint8_t v_isSharedCheck_4038_; 
lean_dec(v_a_3937_);
v_a_4031_ = lean_ctor_get(v___x_4020_, 0);
v_isSharedCheck_4038_ = !lean_is_exclusive(v___x_4020_);
if (v_isSharedCheck_4038_ == 0)
{
v___x_4033_ = v___x_4020_;
v_isShared_4034_ = v_isSharedCheck_4038_;
goto v_resetjp_4032_;
}
else
{
lean_inc(v_a_4031_);
lean_dec(v___x_4020_);
v___x_4033_ = lean_box(0);
v_isShared_4034_ = v_isSharedCheck_4038_;
goto v_resetjp_4032_;
}
v_resetjp_4032_:
{
lean_object* v___x_4036_; 
if (v_isShared_4034_ == 0)
{
v___x_4036_ = v___x_4033_;
goto v_reusejp_4035_;
}
else
{
lean_object* v_reuseFailAlloc_4037_; 
v_reuseFailAlloc_4037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4037_, 0, v_a_4031_);
v___x_4036_ = v_reuseFailAlloc_4037_;
goto v_reusejp_4035_;
}
v_reusejp_4035_:
{
return v___x_4036_;
}
}
}
}
else
{
lean_object* v___x_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; lean_object* v___x_4043_; 
lean_inc(v_fst_3958_);
v___x_4039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4039_, 0, v_fst_3958_);
v___x_4040_ = lean_array_push(v_fst_3954_, v___x_4039_);
v___x_4041_ = lean_nat_add(v_fst_3958_, v___x_3987_);
lean_dec(v_fst_3958_);
if (v_isShared_3965_ == 0)
{
lean_ctor_set(v___x_3964_, 1, v___x_3990_);
lean_ctor_set(v___x_3964_, 0, v___x_4007_);
v___x_4043_ = v___x_3964_;
goto v_reusejp_4042_;
}
else
{
lean_object* v_reuseFailAlloc_4050_; 
v_reuseFailAlloc_4050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4050_, 0, v___x_4007_);
lean_ctor_set(v_reuseFailAlloc_4050_, 1, v___x_3990_);
v___x_4043_ = v_reuseFailAlloc_4050_;
goto v_reusejp_4042_;
}
v_reusejp_4042_:
{
lean_object* v___x_4045_; 
if (v_isShared_3961_ == 0)
{
lean_ctor_set(v___x_3960_, 1, v___x_4043_);
lean_ctor_set(v___x_3960_, 0, v___x_4041_);
v___x_4045_ = v___x_3960_;
goto v_reusejp_4044_;
}
else
{
lean_object* v_reuseFailAlloc_4049_; 
v_reuseFailAlloc_4049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4049_, 0, v___x_4041_);
lean_ctor_set(v_reuseFailAlloc_4049_, 1, v___x_4043_);
v___x_4045_ = v_reuseFailAlloc_4049_;
goto v_reusejp_4044_;
}
v_reusejp_4044_:
{
lean_object* v___x_4047_; 
if (v_isShared_3957_ == 0)
{
lean_ctor_set(v___x_3956_, 1, v___x_4045_);
lean_ctor_set(v___x_3956_, 0, v___x_4040_);
v___x_4047_ = v___x_3956_;
goto v_reusejp_4046_;
}
else
{
lean_object* v_reuseFailAlloc_4048_; 
v_reuseFailAlloc_4048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4048_, 0, v___x_4040_);
lean_ctor_set(v_reuseFailAlloc_4048_, 1, v___x_4045_);
v___x_4047_ = v_reuseFailAlloc_4048_;
goto v_reusejp_4046_;
}
v_reusejp_4046_:
{
v_a_3945_ = v___x_4047_;
goto v___jp_3944_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4053_; lean_object* v___x_4054_; lean_object* v___x_4056_; 
lean_dec(v___x_3986_);
v___x_4053_ = lean_box(0);
v___x_4054_ = lean_array_push(v_fst_3954_, v___x_4053_);
if (v_isShared_3965_ == 0)
{
lean_ctor_set(v___x_3964_, 1, v___x_3990_);
lean_ctor_set(v___x_3964_, 0, v___x_4007_);
v___x_4056_ = v___x_3964_;
goto v_reusejp_4055_;
}
else
{
lean_object* v_reuseFailAlloc_4063_; 
v_reuseFailAlloc_4063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4063_, 0, v___x_4007_);
lean_ctor_set(v_reuseFailAlloc_4063_, 1, v___x_3990_);
v___x_4056_ = v_reuseFailAlloc_4063_;
goto v_reusejp_4055_;
}
v_reusejp_4055_:
{
lean_object* v___x_4058_; 
if (v_isShared_3961_ == 0)
{
lean_ctor_set(v___x_3960_, 1, v___x_4056_);
v___x_4058_ = v___x_3960_;
goto v_reusejp_4057_;
}
else
{
lean_object* v_reuseFailAlloc_4062_; 
v_reuseFailAlloc_4062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4062_, 0, v_fst_3958_);
lean_ctor_set(v_reuseFailAlloc_4062_, 1, v___x_4056_);
v___x_4058_ = v_reuseFailAlloc_4062_;
goto v_reusejp_4057_;
}
v_reusejp_4057_:
{
lean_object* v___x_4060_; 
if (v_isShared_3957_ == 0)
{
lean_ctor_set(v___x_3956_, 1, v___x_4058_);
lean_ctor_set(v___x_3956_, 0, v___x_4054_);
v___x_4060_ = v___x_3956_;
goto v_reusejp_4059_;
}
else
{
lean_object* v_reuseFailAlloc_4061_; 
v_reuseFailAlloc_4061_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4061_, 0, v___x_4054_);
lean_ctor_set(v_reuseFailAlloc_4061_, 1, v___x_4058_);
v___x_4060_ = v_reuseFailAlloc_4061_;
goto v_reusejp_4059_;
}
v_reusejp_4059_:
{
v_a_3945_ = v___x_4060_;
goto v___jp_3944_;
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
}
}
}
v___jp_3944_:
{
lean_object* v___x_3946_; lean_object* v___x_3947_; 
v___x_3946_ = lean_unsigned_to_nat(1u);
v___x_3947_ = lean_nat_add(v_a_3937_, v___x_3946_);
lean_dec(v_a_3937_);
v_a_3937_ = v___x_3947_;
v_b_3938_ = v_a_3945_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___boxed(lean_object* v_upperBound_4080_, lean_object* v_a_4081_, lean_object* v_b_4082_, lean_object* v___y_4083_, lean_object* v___y_4084_, lean_object* v___y_4085_, lean_object* v___y_4086_, lean_object* v___y_4087_){
_start:
{
lean_object* v_res_4088_; 
v_res_4088_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(v_upperBound_4080_, v_a_4081_, v_b_4082_, v___y_4083_, v___y_4084_, v___y_4085_, v___y_4086_);
lean_dec(v___y_4086_);
lean_dec_ref(v___y_4085_);
lean_dec(v___y_4084_);
lean_dec_ref(v___y_4083_);
lean_dec(v_upperBound_4080_);
return v_res_4088_;
}
}
static lean_object* _init_l_Lean_Elab_getFixedParamPerms___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; lean_object* v___x_4093_; lean_object* v___x_4094_; lean_object* v___x_4095_; 
v___x_4090_ = ((lean_object*)(l_Lean_Elab_getFixedParamPerms___lam__0___closed__0));
v___x_4091_ = lean_unsigned_to_nat(4u);
v___x_4092_ = lean_unsigned_to_nat(275u);
v___x_4093_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0));
v___x_4094_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4095_ = l_mkPanicMessageWithDecl(v___x_4094_, v___x_4093_, v___x_4092_, v___x_4091_, v___x_4090_);
return v___x_4095_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___lam__0(lean_object* v_a_4096_, lean_object* v___x_4097_, lean_object* v___x_4098_, lean_object* v_xs_4099_, lean_object* v_x_4100_, lean_object* v___y_4101_, lean_object* v___y_4102_, lean_object* v___y_4103_, lean_object* v___y_4104_){
_start:
{
lean_object* v_graph_4106_; lean_object* v_revDeps_4107_; lean_object* v___x_4109_; uint8_t v_isShared_4110_; uint8_t v_isSharedCheck_4160_; 
v_graph_4106_ = lean_ctor_get(v_a_4096_, 0);
v_revDeps_4107_ = lean_ctor_get(v_a_4096_, 1);
v_isSharedCheck_4160_ = !lean_is_exclusive(v_a_4096_);
if (v_isSharedCheck_4160_ == 0)
{
v___x_4109_ = v_a_4096_;
v_isShared_4110_ = v_isSharedCheck_4160_;
goto v_resetjp_4108_;
}
else
{
lean_inc(v_revDeps_4107_);
lean_inc(v_graph_4106_);
lean_dec(v_a_4096_);
v___x_4109_ = lean_box(0);
v_isShared_4110_ = v_isSharedCheck_4160_;
goto v_resetjp_4108_;
}
v_resetjp_4108_:
{
lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4113_; uint8_t v___x_4114_; 
v___x_4111_ = lean_array_get_borrowed(v___x_4097_, v_graph_4106_, v___x_4098_);
v___x_4112_ = lean_array_get_size(v_xs_4099_);
v___x_4113_ = lean_array_get_size(v___x_4111_);
v___x_4114_ = lean_nat_dec_eq(v___x_4112_, v___x_4113_);
if (v___x_4114_ == 0)
{
lean_object* v___x_4115_; lean_object* v___x_4116_; 
lean_del_object(v___x_4109_);
lean_dec_ref(v_revDeps_4107_);
lean_dec_ref(v_graph_4106_);
lean_dec_ref(v_xs_4099_);
lean_dec(v___x_4098_);
v___x_4115_ = lean_obj_once(&l_Lean_Elab_getFixedParamPerms___lam__0___closed__1, &l_Lean_Elab_getFixedParamPerms___lam__0___closed__1_once, _init_l_Lean_Elab_getFixedParamPerms___lam__0___closed__1);
v___x_4116_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0(v___x_4115_, v___y_4101_, v___y_4102_, v___y_4103_, v___y_4104_);
return v___x_4116_;
}
else
{
lean_object* v___x_4117_; lean_object* v___x_4118_; lean_object* v___x_4119_; lean_object* v___x_4121_; 
v___x_4117_ = lean_mk_empty_array_with_capacity(v___x_4098_);
lean_inc_n(v___x_4098_, 2);
v___x_4118_ = l_Array_toSubarray___redArg(v_xs_4099_, v___x_4098_, v___x_4112_);
lean_inc(v___x_4111_);
v___x_4119_ = l_Array_toSubarray___redArg(v___x_4111_, v___x_4098_, v___x_4113_);
if (v_isShared_4110_ == 0)
{
lean_ctor_set(v___x_4109_, 1, v___x_4119_);
lean_ctor_set(v___x_4109_, 0, v___x_4118_);
v___x_4121_ = v___x_4109_;
goto v_reusejp_4120_;
}
else
{
lean_object* v_reuseFailAlloc_4159_; 
v_reuseFailAlloc_4159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4159_, 0, v___x_4118_);
lean_ctor_set(v_reuseFailAlloc_4159_, 1, v___x_4119_);
v___x_4121_ = v_reuseFailAlloc_4159_;
goto v_reusejp_4120_;
}
v_reusejp_4120_:
{
lean_object* v___x_4122_; lean_object* v___x_4123_; lean_object* v___x_4124_; 
lean_inc(v___x_4098_);
v___x_4122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4122_, 0, v___x_4098_);
lean_ctor_set(v___x_4122_, 1, v___x_4121_);
v___x_4123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4123_, 0, v___x_4117_);
lean_ctor_set(v___x_4123_, 1, v___x_4122_);
v___x_4124_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(v___x_4112_, v___x_4098_, v___x_4123_, v___y_4101_, v___y_4102_, v___y_4103_, v___y_4104_);
if (lean_obj_tag(v___x_4124_) == 0)
{
lean_object* v_a_4125_; lean_object* v_snd_4126_; lean_object* v_fst_4127_; lean_object* v_fst_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; lean_object* v___x_4131_; lean_object* v___x_4132_; lean_object* v___x_4133_; 
v_a_4125_ = lean_ctor_get(v___x_4124_, 0);
lean_inc(v_a_4125_);
lean_dec_ref_known(v___x_4124_, 1);
v_snd_4126_ = lean_ctor_get(v_a_4125_, 1);
lean_inc(v_snd_4126_);
v_fst_4127_ = lean_ctor_get(v_a_4125_, 0);
lean_inc_n(v_fst_4127_, 2);
lean_dec(v_a_4125_);
v_fst_4128_ = lean_ctor_get(v_snd_4126_, 0);
lean_inc(v_fst_4128_);
lean_dec(v_snd_4126_);
v___x_4129_ = lean_unsigned_to_nat(1u);
v___x_4130_ = lean_array_get_size(v_graph_4106_);
v___x_4131_ = lean_mk_empty_array_with_capacity(v___x_4129_);
v___x_4132_ = lean_array_push(v___x_4131_, v_fst_4127_);
v___x_4133_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(v___x_4130_, v_graph_4106_, v_fst_4127_, v___x_4129_, v___x_4132_, v___y_4101_, v___y_4102_, v___y_4103_, v___y_4104_);
lean_dec(v_fst_4127_);
lean_dec_ref(v_graph_4106_);
if (lean_obj_tag(v___x_4133_) == 0)
{
lean_object* v_a_4134_; lean_object* v___x_4136_; uint8_t v_isShared_4137_; uint8_t v_isSharedCheck_4142_; 
v_a_4134_ = lean_ctor_get(v___x_4133_, 0);
v_isSharedCheck_4142_ = !lean_is_exclusive(v___x_4133_);
if (v_isSharedCheck_4142_ == 0)
{
v___x_4136_ = v___x_4133_;
v_isShared_4137_ = v_isSharedCheck_4142_;
goto v_resetjp_4135_;
}
else
{
lean_inc(v_a_4134_);
lean_dec(v___x_4133_);
v___x_4136_ = lean_box(0);
v_isShared_4137_ = v_isSharedCheck_4142_;
goto v_resetjp_4135_;
}
v_resetjp_4135_:
{
lean_object* v___x_4138_; lean_object* v___x_4140_; 
v___x_4138_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4138_, 0, v_fst_4128_);
lean_ctor_set(v___x_4138_, 1, v_a_4134_);
lean_ctor_set(v___x_4138_, 2, v_revDeps_4107_);
if (v_isShared_4137_ == 0)
{
lean_ctor_set(v___x_4136_, 0, v___x_4138_);
v___x_4140_ = v___x_4136_;
goto v_reusejp_4139_;
}
else
{
lean_object* v_reuseFailAlloc_4141_; 
v_reuseFailAlloc_4141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4141_, 0, v___x_4138_);
v___x_4140_ = v_reuseFailAlloc_4141_;
goto v_reusejp_4139_;
}
v_reusejp_4139_:
{
return v___x_4140_;
}
}
}
else
{
lean_object* v_a_4143_; lean_object* v___x_4145_; uint8_t v_isShared_4146_; uint8_t v_isSharedCheck_4150_; 
lean_dec(v_fst_4128_);
lean_dec_ref(v_revDeps_4107_);
v_a_4143_ = lean_ctor_get(v___x_4133_, 0);
v_isSharedCheck_4150_ = !lean_is_exclusive(v___x_4133_);
if (v_isSharedCheck_4150_ == 0)
{
v___x_4145_ = v___x_4133_;
v_isShared_4146_ = v_isSharedCheck_4150_;
goto v_resetjp_4144_;
}
else
{
lean_inc(v_a_4143_);
lean_dec(v___x_4133_);
v___x_4145_ = lean_box(0);
v_isShared_4146_ = v_isSharedCheck_4150_;
goto v_resetjp_4144_;
}
v_resetjp_4144_:
{
lean_object* v___x_4148_; 
if (v_isShared_4146_ == 0)
{
v___x_4148_ = v___x_4145_;
goto v_reusejp_4147_;
}
else
{
lean_object* v_reuseFailAlloc_4149_; 
v_reuseFailAlloc_4149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4149_, 0, v_a_4143_);
v___x_4148_ = v_reuseFailAlloc_4149_;
goto v_reusejp_4147_;
}
v_reusejp_4147_:
{
return v___x_4148_;
}
}
}
}
else
{
lean_object* v_a_4151_; lean_object* v___x_4153_; uint8_t v_isShared_4154_; uint8_t v_isSharedCheck_4158_; 
lean_dec_ref(v_revDeps_4107_);
lean_dec_ref(v_graph_4106_);
v_a_4151_ = lean_ctor_get(v___x_4124_, 0);
v_isSharedCheck_4158_ = !lean_is_exclusive(v___x_4124_);
if (v_isSharedCheck_4158_ == 0)
{
v___x_4153_ = v___x_4124_;
v_isShared_4154_ = v_isSharedCheck_4158_;
goto v_resetjp_4152_;
}
else
{
lean_inc(v_a_4151_);
lean_dec(v___x_4124_);
v___x_4153_ = lean_box(0);
v_isShared_4154_ = v_isSharedCheck_4158_;
goto v_resetjp_4152_;
}
v_resetjp_4152_:
{
lean_object* v___x_4156_; 
if (v_isShared_4154_ == 0)
{
v___x_4156_ = v___x_4153_;
goto v_reusejp_4155_;
}
else
{
lean_object* v_reuseFailAlloc_4157_; 
v_reuseFailAlloc_4157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4157_, 0, v_a_4151_);
v___x_4156_ = v_reuseFailAlloc_4157_;
goto v_reusejp_4155_;
}
v_reusejp_4155_:
{
return v___x_4156_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___lam__0___boxed(lean_object* v_a_4161_, lean_object* v___x_4162_, lean_object* v___x_4163_, lean_object* v_xs_4164_, lean_object* v_x_4165_, lean_object* v___y_4166_, lean_object* v___y_4167_, lean_object* v___y_4168_, lean_object* v___y_4169_, lean_object* v___y_4170_){
_start:
{
lean_object* v_res_4171_; 
v_res_4171_ = l_Lean_Elab_getFixedParamPerms___lam__0(v_a_4161_, v___x_4162_, v___x_4163_, v_xs_4164_, v_x_4165_, v___y_4166_, v___y_4167_, v___y_4168_, v___y_4169_);
lean_dec(v___y_4169_);
lean_dec_ref(v___y_4168_);
lean_dec(v___y_4167_);
lean_dec_ref(v___y_4166_);
lean_dec_ref(v_x_4165_);
lean_dec_ref(v___x_4162_);
return v_res_4171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms(lean_object* v_preDefs_4172_, lean_object* v_a_4173_, lean_object* v_a_4174_, lean_object* v_a_4175_, lean_object* v_a_4176_){
_start:
{
lean_object* v___x_4178_; lean_object* v___x_4179_; lean_object* v___x_4180_; 
v___x_4178_ = l_Lean_Elab_instInhabitedPreDefinition_default;
v___x_4179_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
lean_inc_ref(v_preDefs_4172_);
v___x_4180_ = l_Lean_Elab_getFixedParamsInfo(v_preDefs_4172_, v_a_4173_, v_a_4174_, v_a_4175_, v_a_4176_);
if (lean_obj_tag(v___x_4180_) == 0)
{
lean_object* v_a_4181_; lean_object* v___x_4182_; lean_object* v___x_4183_; lean_object* v_value_4184_; lean_object* v___f_4185_; uint8_t v___x_4186_; lean_object* v___x_4187_; 
v_a_4181_ = lean_ctor_get(v___x_4180_, 0);
lean_inc(v_a_4181_);
lean_dec_ref_known(v___x_4180_, 1);
v___x_4182_ = lean_unsigned_to_nat(0u);
v___x_4183_ = lean_array_get(v___x_4178_, v_preDefs_4172_, v___x_4182_);
lean_dec_ref(v_preDefs_4172_);
v_value_4184_ = lean_ctor_get(v___x_4183_, 7);
lean_inc_ref(v_value_4184_);
lean_dec(v___x_4183_);
v___f_4185_ = lean_alloc_closure((void*)(l_Lean_Elab_getFixedParamPerms___lam__0___boxed), 10, 3);
lean_closure_set(v___f_4185_, 0, v_a_4181_);
lean_closure_set(v___f_4185_, 1, v___x_4179_);
lean_closure_set(v___f_4185_, 2, v___x_4182_);
v___x_4186_ = 0;
v___x_4187_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_value_4184_, v___f_4185_, v___x_4186_, v_a_4173_, v_a_4174_, v_a_4175_, v_a_4176_);
return v___x_4187_;
}
else
{
lean_object* v_a_4188_; lean_object* v___x_4190_; uint8_t v_isShared_4191_; uint8_t v_isSharedCheck_4195_; 
lean_dec_ref(v_preDefs_4172_);
v_a_4188_ = lean_ctor_get(v___x_4180_, 0);
v_isSharedCheck_4195_ = !lean_is_exclusive(v___x_4180_);
if (v_isSharedCheck_4195_ == 0)
{
v___x_4190_ = v___x_4180_;
v_isShared_4191_ = v_isSharedCheck_4195_;
goto v_resetjp_4189_;
}
else
{
lean_inc(v_a_4188_);
lean_dec(v___x_4180_);
v___x_4190_ = lean_box(0);
v_isShared_4191_ = v_isSharedCheck_4195_;
goto v_resetjp_4189_;
}
v_resetjp_4189_:
{
lean_object* v___x_4193_; 
if (v_isShared_4191_ == 0)
{
v___x_4193_ = v___x_4190_;
goto v_reusejp_4192_;
}
else
{
lean_object* v_reuseFailAlloc_4194_; 
v_reuseFailAlloc_4194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4194_, 0, v_a_4188_);
v___x_4193_ = v_reuseFailAlloc_4194_;
goto v_reusejp_4192_;
}
v_reusejp_4192_:
{
return v___x_4193_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___boxed(lean_object* v_preDefs_4196_, lean_object* v_a_4197_, lean_object* v_a_4198_, lean_object* v_a_4199_, lean_object* v_a_4200_, lean_object* v_a_4201_){
_start:
{
lean_object* v_res_4202_; 
v_res_4202_ = l_Lean_Elab_getFixedParamPerms(v_preDefs_4196_, v_a_4197_, v_a_4198_, v_a_4199_, v_a_4200_);
lean_dec(v_a_4200_);
lean_dec_ref(v_a_4199_);
lean_dec(v_a_4198_);
lean_dec_ref(v_a_4197_);
return v_res_4202_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4(lean_object* v_upperBound_4203_, lean_object* v___x_4204_, lean_object* v___x_4205_, lean_object* v_inst_4206_, lean_object* v_R_4207_, lean_object* v_a_4208_, lean_object* v_b_4209_, lean_object* v_c_4210_, lean_object* v___y_4211_, lean_object* v___y_4212_, lean_object* v___y_4213_, lean_object* v___y_4214_){
_start:
{
lean_object* v___x_4216_; 
v___x_4216_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(v_upperBound_4203_, v___x_4204_, v___x_4205_, v_a_4208_, v_b_4209_, v___y_4211_, v___y_4212_, v___y_4213_, v___y_4214_);
return v___x_4216_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___boxed(lean_object* v_upperBound_4217_, lean_object* v___x_4218_, lean_object* v___x_4219_, lean_object* v_inst_4220_, lean_object* v_R_4221_, lean_object* v_a_4222_, lean_object* v_b_4223_, lean_object* v_c_4224_, lean_object* v___y_4225_, lean_object* v___y_4226_, lean_object* v___y_4227_, lean_object* v___y_4228_, lean_object* v___y_4229_){
_start:
{
lean_object* v_res_4230_; 
v_res_4230_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4(v_upperBound_4217_, v___x_4218_, v___x_4219_, v_inst_4220_, v_R_4221_, v_a_4222_, v_b_4223_, v_c_4224_, v___y_4225_, v___y_4226_, v___y_4227_, v___y_4228_);
lean_dec(v___y_4228_);
lean_dec_ref(v___y_4227_);
lean_dec(v___y_4226_);
lean_dec_ref(v___y_4225_);
lean_dec_ref(v___x_4219_);
lean_dec_ref(v___x_4218_);
lean_dec(v_upperBound_4217_);
return v_res_4230_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5(lean_object* v_upperBound_4231_, lean_object* v_inst_4232_, lean_object* v_R_4233_, lean_object* v_a_4234_, lean_object* v_b_4235_, lean_object* v_c_4236_, lean_object* v___y_4237_, lean_object* v___y_4238_, lean_object* v___y_4239_, lean_object* v___y_4240_){
_start:
{
lean_object* v___x_4242_; 
v___x_4242_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(v_upperBound_4231_, v_a_4234_, v_b_4235_, v___y_4237_, v___y_4238_, v___y_4239_, v___y_4240_);
return v___x_4242_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___boxed(lean_object* v_upperBound_4243_, lean_object* v_inst_4244_, lean_object* v_R_4245_, lean_object* v_a_4246_, lean_object* v_b_4247_, lean_object* v_c_4248_, lean_object* v___y_4249_, lean_object* v___y_4250_, lean_object* v___y_4251_, lean_object* v___y_4252_, lean_object* v___y_4253_){
_start:
{
lean_object* v_res_4254_; 
v_res_4254_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5(v_upperBound_4243_, v_inst_4244_, v_R_4245_, v_a_4246_, v_b_4247_, v_c_4248_, v___y_4249_, v___y_4250_, v___y_4251_, v___y_4252_);
lean_dec(v___y_4252_);
lean_dec_ref(v___y_4251_);
lean_dec(v___y_4250_);
lean_dec_ref(v___y_4249_);
lean_dec(v_upperBound_4243_);
return v_res_4254_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0(lean_object* v_as_4255_, size_t v_i_4256_, size_t v_stop_4257_, lean_object* v_b_4258_){
_start:
{
uint8_t v___x_4259_; 
v___x_4259_ = lean_usize_dec_eq(v_i_4256_, v_stop_4257_);
if (v___x_4259_ == 0)
{
size_t v___x_4260_; size_t v___x_4261_; lean_object* v___x_4262_; 
v___x_4260_ = ((size_t)1ULL);
v___x_4261_ = lean_usize_sub(v_i_4256_, v___x_4260_);
v___x_4262_ = lean_array_uget_borrowed(v_as_4255_, v___x_4261_);
if (lean_obj_tag(v___x_4262_) == 0)
{
v_i_4256_ = v___x_4261_;
goto _start;
}
else
{
lean_object* v___x_4264_; lean_object* v___x_4265_; 
v___x_4264_ = lean_unsigned_to_nat(1u);
v___x_4265_ = lean_nat_add(v_b_4258_, v___x_4264_);
lean_dec(v_b_4258_);
v_i_4256_ = v___x_4261_;
v_b_4258_ = v___x_4265_;
goto _start;
}
}
else
{
return v_b_4258_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0___boxed(lean_object* v_as_4267_, lean_object* v_i_4268_, lean_object* v_stop_4269_, lean_object* v_b_4270_){
_start:
{
size_t v_i_boxed_4271_; size_t v_stop_boxed_4272_; lean_object* v_res_4273_; 
v_i_boxed_4271_ = lean_unbox_usize(v_i_4268_);
lean_dec(v_i_4268_);
v_stop_boxed_4272_ = lean_unbox_usize(v_stop_4269_);
lean_dec(v_stop_4269_);
v_res_4273_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0(v_as_4267_, v_i_boxed_4271_, v_stop_boxed_4272_, v_b_4270_);
lean_dec_ref(v_as_4267_);
return v_res_4273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_numFixed(lean_object* v_perm_4274_){
_start:
{
lean_object* v___x_4275_; lean_object* v___x_4276_; uint8_t v___x_4277_; 
v___x_4275_ = lean_unsigned_to_nat(0u);
v___x_4276_ = lean_array_get_size(v_perm_4274_);
v___x_4277_ = lean_nat_dec_lt(v___x_4275_, v___x_4276_);
if (v___x_4277_ == 0)
{
return v___x_4275_;
}
else
{
size_t v___x_4278_; size_t v___x_4279_; lean_object* v___x_4280_; 
v___x_4278_ = lean_usize_of_nat(v___x_4276_);
v___x_4279_ = ((size_t)0ULL);
v___x_4280_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0(v_perm_4274_, v___x_4278_, v___x_4279_, v___x_4275_);
return v___x_4280_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_numFixed___boxed(lean_object* v_perm_4281_){
_start:
{
lean_object* v_res_4282_; 
v_res_4282_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_4281_);
lean_dec_ref(v_perm_4281_);
return v_res_4282_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParamPerm_isFixed(lean_object* v_perm_4283_, lean_object* v_i_4284_){
_start:
{
lean_object* v___x_4285_; uint8_t v___x_4286_; 
v___x_4285_ = lean_array_get_size(v_perm_4283_);
v___x_4286_ = lean_nat_dec_lt(v_i_4284_, v___x_4285_);
if (v___x_4286_ == 0)
{
return v___x_4286_;
}
else
{
lean_object* v___x_4287_; 
v___x_4287_ = lean_array_fget_borrowed(v_perm_4283_, v_i_4284_);
if (lean_obj_tag(v___x_4287_) == 0)
{
uint8_t v___x_4288_; 
v___x_4288_ = 0;
return v___x_4288_;
}
else
{
return v___x_4286_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_isFixed___boxed(lean_object* v_perm_4289_, lean_object* v_i_4290_){
_start:
{
uint8_t v_res_4291_; lean_object* v_r_4292_; 
v_res_4291_ = l_Lean_Elab_FixedParamPerm_isFixed(v_perm_4289_, v_i_4290_);
lean_dec(v_i_4290_);
lean_dec_ref(v_perm_4289_);
v_r_4292_ = lean_box(v_res_4291_);
return v_r_4292_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(lean_object* v_msg_4293_, lean_object* v___y_4294_, lean_object* v___y_4295_, lean_object* v___y_4296_, lean_object* v___y_4297_){
_start:
{
lean_object* v___f_4299_; lean_object* v___x_1006__overap_4300_; lean_object* v___x_4301_; 
v___f_4299_ = ((lean_object*)(l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0));
v___x_1006__overap_4300_ = lean_panic_fn_borrowed(v___f_4299_, v_msg_4293_);
lean_inc(v___y_4297_);
lean_inc_ref(v___y_4296_);
lean_inc(v___y_4295_);
lean_inc_ref(v___y_4294_);
v___x_4301_ = lean_apply_5(v___x_1006__overap_4300_, v___y_4294_, v___y_4295_, v___y_4296_, v___y_4297_, lean_box(0));
return v___x_4301_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg___boxed(lean_object* v_msg_4302_, lean_object* v___y_4303_, lean_object* v___y_4304_, lean_object* v___y_4305_, lean_object* v___y_4306_, lean_object* v___y_4307_){
_start:
{
lean_object* v_res_4308_; 
v_res_4308_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v_msg_4302_, v___y_4303_, v___y_4304_, v___y_4305_, v___y_4306_);
lean_dec(v___y_4306_);
lean_dec_ref(v___y_4305_);
lean_dec(v___y_4304_);
lean_dec_ref(v___y_4303_);
return v_res_4308_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0(lean_object* v_00_u03b1_4309_, lean_object* v_msg_4310_, lean_object* v___y_4311_, lean_object* v___y_4312_, lean_object* v___y_4313_, lean_object* v___y_4314_){
_start:
{
lean_object* v___x_4316_; 
v___x_4316_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v_msg_4310_, v___y_4311_, v___y_4312_, v___y_4313_, v___y_4314_);
return v___x_4316_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___boxed(lean_object* v_00_u03b1_4317_, lean_object* v_msg_4318_, lean_object* v___y_4319_, lean_object* v___y_4320_, lean_object* v___y_4321_, lean_object* v___y_4322_, lean_object* v___y_4323_){
_start:
{
lean_object* v_res_4324_; 
v_res_4324_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0(v_00_u03b1_4317_, v_msg_4318_, v___y_4319_, v___y_4320_, v___y_4321_, v___y_4322_);
lean_dec(v___y_4322_);
lean_dec_ref(v___y_4321_);
lean_dec(v___y_4320_);
lean_dec_ref(v___y_4319_);
return v_res_4324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(lean_object* v_type_4325_, lean_object* v_maxFVars_x3f_4326_, lean_object* v_k_4327_, uint8_t v_cleanupAnnotations_4328_, uint8_t v_whnfType_4329_, lean_object* v___y_4330_, lean_object* v___y_4331_, lean_object* v___y_4332_, lean_object* v___y_4333_){
_start:
{
lean_object* v___f_4335_; lean_object* v___x_4336_; 
v___f_4335_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_4335_, 0, v_k_4327_);
v___x_4336_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_4325_, v_maxFVars_x3f_4326_, v___f_4335_, v_cleanupAnnotations_4328_, v_whnfType_4329_, v___y_4330_, v___y_4331_, v___y_4332_, v___y_4333_);
if (lean_obj_tag(v___x_4336_) == 0)
{
lean_object* v_a_4337_; lean_object* v___x_4339_; uint8_t v_isShared_4340_; uint8_t v_isSharedCheck_4344_; 
v_a_4337_ = lean_ctor_get(v___x_4336_, 0);
v_isSharedCheck_4344_ = !lean_is_exclusive(v___x_4336_);
if (v_isSharedCheck_4344_ == 0)
{
v___x_4339_ = v___x_4336_;
v_isShared_4340_ = v_isSharedCheck_4344_;
goto v_resetjp_4338_;
}
else
{
lean_inc(v_a_4337_);
lean_dec(v___x_4336_);
v___x_4339_ = lean_box(0);
v_isShared_4340_ = v_isSharedCheck_4344_;
goto v_resetjp_4338_;
}
v_resetjp_4338_:
{
lean_object* v___x_4342_; 
if (v_isShared_4340_ == 0)
{
v___x_4342_ = v___x_4339_;
goto v_reusejp_4341_;
}
else
{
lean_object* v_reuseFailAlloc_4343_; 
v_reuseFailAlloc_4343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4343_, 0, v_a_4337_);
v___x_4342_ = v_reuseFailAlloc_4343_;
goto v_reusejp_4341_;
}
v_reusejp_4341_:
{
return v___x_4342_;
}
}
}
else
{
lean_object* v_a_4345_; lean_object* v___x_4347_; uint8_t v_isShared_4348_; uint8_t v_isSharedCheck_4352_; 
v_a_4345_ = lean_ctor_get(v___x_4336_, 0);
v_isSharedCheck_4352_ = !lean_is_exclusive(v___x_4336_);
if (v_isSharedCheck_4352_ == 0)
{
v___x_4347_ = v___x_4336_;
v_isShared_4348_ = v_isSharedCheck_4352_;
goto v_resetjp_4346_;
}
else
{
lean_inc(v_a_4345_);
lean_dec(v___x_4336_);
v___x_4347_ = lean_box(0);
v_isShared_4348_ = v_isSharedCheck_4352_;
goto v_resetjp_4346_;
}
v_resetjp_4346_:
{
lean_object* v___x_4350_; 
if (v_isShared_4348_ == 0)
{
v___x_4350_ = v___x_4347_;
goto v_reusejp_4349_;
}
else
{
lean_object* v_reuseFailAlloc_4351_; 
v_reuseFailAlloc_4351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4351_, 0, v_a_4345_);
v___x_4350_ = v_reuseFailAlloc_4351_;
goto v_reusejp_4349_;
}
v_reusejp_4349_:
{
return v___x_4350_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg___boxed(lean_object* v_type_4353_, lean_object* v_maxFVars_x3f_4354_, lean_object* v_k_4355_, lean_object* v_cleanupAnnotations_4356_, lean_object* v_whnfType_4357_, lean_object* v___y_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_, lean_object* v___y_4361_, lean_object* v___y_4362_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4363_; uint8_t v_whnfType_boxed_4364_; lean_object* v_res_4365_; 
v_cleanupAnnotations_boxed_4363_ = lean_unbox(v_cleanupAnnotations_4356_);
v_whnfType_boxed_4364_ = lean_unbox(v_whnfType_4357_);
v_res_4365_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(v_type_4353_, v_maxFVars_x3f_4354_, v_k_4355_, v_cleanupAnnotations_boxed_4363_, v_whnfType_boxed_4364_, v___y_4358_, v___y_4359_, v___y_4360_, v___y_4361_);
lean_dec(v___y_4361_);
lean_dec_ref(v___y_4360_);
lean_dec(v___y_4359_);
lean_dec_ref(v___y_4358_);
return v_res_4365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1(lean_object* v_00_u03b1_4366_, lean_object* v_type_4367_, lean_object* v_maxFVars_x3f_4368_, lean_object* v_k_4369_, uint8_t v_cleanupAnnotations_4370_, uint8_t v_whnfType_4371_, lean_object* v___y_4372_, lean_object* v___y_4373_, lean_object* v___y_4374_, lean_object* v___y_4375_){
_start:
{
lean_object* v___x_4377_; 
v___x_4377_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(v_type_4367_, v_maxFVars_x3f_4368_, v_k_4369_, v_cleanupAnnotations_4370_, v_whnfType_4371_, v___y_4372_, v___y_4373_, v___y_4374_, v___y_4375_);
return v___x_4377_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___boxed(lean_object* v_00_u03b1_4378_, lean_object* v_type_4379_, lean_object* v_maxFVars_x3f_4380_, lean_object* v_k_4381_, lean_object* v_cleanupAnnotations_4382_, lean_object* v_whnfType_4383_, lean_object* v___y_4384_, lean_object* v___y_4385_, lean_object* v___y_4386_, lean_object* v___y_4387_, lean_object* v___y_4388_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4389_; uint8_t v_whnfType_boxed_4390_; lean_object* v_res_4391_; 
v_cleanupAnnotations_boxed_4389_ = lean_unbox(v_cleanupAnnotations_4382_);
v_whnfType_boxed_4390_ = lean_unbox(v_whnfType_4383_);
v_res_4391_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1(v_00_u03b1_4378_, v_type_4379_, v_maxFVars_x3f_4380_, v_k_4381_, v_cleanupAnnotations_boxed_4389_, v_whnfType_boxed_4390_, v___y_4384_, v___y_4385_, v___y_4386_, v___y_4387_);
lean_dec(v___y_4387_);
lean_dec_ref(v___y_4386_);
lean_dec(v___y_4385_);
lean_dec_ref(v___y_4384_);
return v_res_4391_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2(void){
_start:
{
lean_object* v___x_4394_; lean_object* v___x_4395_; lean_object* v___x_4396_; lean_object* v___x_4397_; lean_object* v___x_4398_; lean_object* v___x_4399_; 
v___x_4394_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__1));
v___x_4395_ = lean_unsigned_to_nat(6u);
v___x_4396_ = lean_unsigned_to_nat(329u);
v___x_4397_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0));
v___x_4398_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4399_ = l_mkPanicMessageWithDecl(v___x_4398_, v___x_4397_, v___x_4396_, v___x_4395_, v___x_4394_);
return v___x_4399_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4403_; lean_object* v___x_4404_; lean_object* v___x_4405_; lean_object* v___x_4406_; lean_object* v___x_4407_; lean_object* v___x_4408_; 
v___x_4403_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__0));
v___x_4404_ = lean_unsigned_to_nat(8u);
v___x_4405_ = lean_unsigned_to_nat(322u);
v___x_4406_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0));
v___x_4407_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4408_ = l_mkPanicMessageWithDecl(v___x_4407_, v___x_4406_, v___x_4405_, v___x_4404_, v___x_4403_);
return v___x_4408_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4410_; lean_object* v___x_4411_; lean_object* v___x_4412_; lean_object* v___x_4413_; lean_object* v___x_4414_; lean_object* v___x_4415_; 
v___x_4410_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2));
v___x_4411_ = lean_unsigned_to_nat(8u);
v___x_4412_ = lean_unsigned_to_nat(325u);
v___x_4413_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0));
v___x_4414_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4415_ = l_mkPanicMessageWithDecl(v___x_4414_, v___x_4413_, v___x_4412_, v___x_4411_, v___x_4410_);
return v___x_4415_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_4417_; lean_object* v___x_4418_; lean_object* v___x_4419_; lean_object* v___x_4420_; lean_object* v___x_4421_; lean_object* v___x_4422_; 
v___x_4417_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__4));
v___x_4418_ = lean_unsigned_to_nat(8u);
v___x_4419_ = lean_unsigned_to_nat(324u);
v___x_4420_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0));
v___x_4421_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4422_ = l_mkPanicMessageWithDecl(v___x_4421_, v___x_4420_, v___x_4419_, v___x_4418_, v___x_4417_);
return v___x_4422_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0(lean_object* v___x_4423_, lean_object* v___x_4424_, lean_object* v_xs_4425_, lean_object* v_val_4426_, lean_object* v_i_4427_, lean_object* v_perm_4428_, lean_object* v_k_4429_, lean_object* v_xs_x27_4430_, lean_object* v_type_4431_, lean_object* v___y_4432_, lean_object* v___y_4433_, lean_object* v___y_4434_, lean_object* v___y_4435_){
_start:
{
lean_object* v___x_4437_; uint8_t v___x_4438_; 
v___x_4437_ = lean_array_get_size(v_xs_x27_4430_);
v___x_4438_ = lean_nat_dec_eq(v___x_4437_, v___x_4423_);
if (v___x_4438_ == 0)
{
lean_object* v___x_4439_; lean_object* v___x_4440_; 
lean_dec_ref(v_type_4431_);
lean_dec_ref(v_k_4429_);
lean_dec_ref(v_perm_4428_);
lean_dec_ref(v_xs_4425_);
v___x_4439_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1);
v___x_4440_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v___x_4439_, v___y_4432_, v___y_4433_, v___y_4434_, v___y_4435_);
return v___x_4440_;
}
else
{
lean_object* v___x_4441_; lean_object* v_x_4442_; lean_object* v___x_4443_; 
v___x_4441_ = lean_unsigned_to_nat(0u);
v_x_4442_ = lean_array_get_borrowed(v___x_4424_, v_xs_x27_4430_, v___x_4441_);
lean_inc(v___y_4435_);
lean_inc_ref(v___y_4434_);
lean_inc(v___y_4433_);
lean_inc_ref(v___y_4432_);
lean_inc(v_x_4442_);
v___x_4443_ = lean_infer_type(v_x_4442_, v___y_4432_, v___y_4433_, v___y_4434_, v___y_4435_);
if (lean_obj_tag(v___x_4443_) == 0)
{
lean_object* v_a_4444_; uint8_t v___x_4445_; 
v_a_4444_ = lean_ctor_get(v___x_4443_, 0);
lean_inc(v_a_4444_);
lean_dec_ref_known(v___x_4443_, 1);
v___x_4445_ = l_Lean_Expr_hasLooseBVars(v_a_4444_);
lean_dec(v_a_4444_);
if (v___x_4445_ == 0)
{
lean_object* v___x_4446_; uint8_t v___x_4447_; 
v___x_4446_ = lean_array_get_size(v_xs_4425_);
v___x_4447_ = lean_nat_dec_lt(v_val_4426_, v___x_4446_);
if (v___x_4447_ == 0)
{
lean_object* v___x_4448_; lean_object* v___x_4449_; 
lean_dec_ref(v_type_4431_);
lean_dec_ref(v_k_4429_);
lean_dec_ref(v_perm_4428_);
lean_dec_ref(v_xs_4425_);
v___x_4448_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3);
v___x_4449_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v___x_4448_, v___y_4432_, v___y_4433_, v___y_4434_, v___y_4435_);
return v___x_4449_;
}
else
{
lean_object* v___x_4450_; lean_object* v___x_4451_; lean_object* v___x_4452_; 
v___x_4450_ = lean_nat_add(v_i_4427_, v___x_4423_);
lean_inc(v_x_4442_);
v___x_4451_ = lean_array_set(v_xs_4425_, v_val_4426_, v_x_4442_);
v___x_4452_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(v_perm_4428_, v_k_4429_, v___x_4450_, v_type_4431_, v___x_4451_, v___y_4432_, v___y_4433_, v___y_4434_, v___y_4435_);
return v___x_4452_;
}
}
else
{
lean_object* v___x_4453_; lean_object* v___x_4454_; 
lean_dec_ref(v_type_4431_);
lean_dec_ref(v_k_4429_);
lean_dec_ref(v_perm_4428_);
lean_dec_ref(v_xs_4425_);
v___x_4453_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5);
v___x_4454_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v___x_4453_, v___y_4432_, v___y_4433_, v___y_4434_, v___y_4435_);
return v___x_4454_;
}
}
else
{
lean_object* v_a_4455_; lean_object* v___x_4457_; uint8_t v_isShared_4458_; uint8_t v_isSharedCheck_4462_; 
lean_dec_ref(v_type_4431_);
lean_dec_ref(v_k_4429_);
lean_dec_ref(v_perm_4428_);
lean_dec_ref(v_xs_4425_);
v_a_4455_ = lean_ctor_get(v___x_4443_, 0);
v_isSharedCheck_4462_ = !lean_is_exclusive(v___x_4443_);
if (v_isSharedCheck_4462_ == 0)
{
v___x_4457_ = v___x_4443_;
v_isShared_4458_ = v_isSharedCheck_4462_;
goto v_resetjp_4456_;
}
else
{
lean_inc(v_a_4455_);
lean_dec(v___x_4443_);
v___x_4457_ = lean_box(0);
v_isShared_4458_ = v_isSharedCheck_4462_;
goto v_resetjp_4456_;
}
v_resetjp_4456_:
{
lean_object* v___x_4460_; 
if (v_isShared_4458_ == 0)
{
v___x_4460_ = v___x_4457_;
goto v_reusejp_4459_;
}
else
{
lean_object* v_reuseFailAlloc_4461_; 
v_reuseFailAlloc_4461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4461_, 0, v_a_4455_);
v___x_4460_ = v_reuseFailAlloc_4461_;
goto v_reusejp_4459_;
}
v_reusejp_4459_:
{
return v___x_4460_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___boxed(lean_object* v___x_4463_, lean_object* v___x_4464_, lean_object* v_xs_4465_, lean_object* v_val_4466_, lean_object* v_i_4467_, lean_object* v_perm_4468_, lean_object* v_k_4469_, lean_object* v_xs_x27_4470_, lean_object* v_type_4471_, lean_object* v___y_4472_, lean_object* v___y_4473_, lean_object* v___y_4474_, lean_object* v___y_4475_, lean_object* v___y_4476_){
_start:
{
lean_object* v_res_4477_; 
v_res_4477_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0(v___x_4463_, v___x_4464_, v_xs_4465_, v_val_4466_, v_i_4467_, v_perm_4468_, v_k_4469_, v_xs_x27_4470_, v_type_4471_, v___y_4472_, v___y_4473_, v___y_4474_, v___y_4475_);
lean_dec(v___y_4475_);
lean_dec_ref(v___y_4474_);
lean_dec(v___y_4473_);
lean_dec_ref(v___y_4472_);
lean_dec_ref(v_xs_x27_4470_);
lean_dec(v_i_4467_);
lean_dec(v_val_4466_);
lean_dec_ref(v___x_4464_);
lean_dec(v___x_4463_);
return v_res_4477_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(lean_object* v_perm_4478_, lean_object* v_k_4479_, lean_object* v_i_4480_, lean_object* v_type_4481_, lean_object* v_xs_4482_, lean_object* v_a_4483_, lean_object* v_a_4484_, lean_object* v_a_4485_, lean_object* v_a_4486_){
_start:
{
lean_object* v___x_4488_; uint8_t v___x_4489_; 
v___x_4488_ = lean_array_get_size(v_perm_4478_);
v___x_4489_ = lean_nat_dec_lt(v_i_4480_, v___x_4488_);
if (v___x_4489_ == 0)
{
lean_object* v___x_4490_; 
lean_dec_ref(v_type_4481_);
lean_dec(v_i_4480_);
lean_dec_ref(v_perm_4478_);
lean_inc(v_a_4486_);
lean_inc_ref(v_a_4485_);
lean_inc(v_a_4484_);
lean_inc_ref(v_a_4483_);
v___x_4490_ = lean_apply_6(v_k_4479_, v_xs_4482_, v_a_4483_, v_a_4484_, v_a_4485_, v_a_4486_, lean_box(0));
return v___x_4490_;
}
else
{
lean_object* v___x_4491_; 
v___x_4491_ = lean_array_fget_borrowed(v_perm_4478_, v_i_4480_);
if (lean_obj_tag(v___x_4491_) == 0)
{
lean_object* v___x_4492_; 
lean_inc(v_a_4486_);
lean_inc_ref(v_a_4485_);
lean_inc(v_a_4484_);
lean_inc_ref(v_a_4483_);
v___x_4492_ = lean_whnf(v_type_4481_, v_a_4483_, v_a_4484_, v_a_4485_, v_a_4486_);
if (lean_obj_tag(v___x_4492_) == 0)
{
lean_object* v_a_4493_; uint8_t v___x_4494_; 
v_a_4493_ = lean_ctor_get(v___x_4492_, 0);
lean_inc(v_a_4493_);
lean_dec_ref_known(v___x_4492_, 1);
v___x_4494_ = l_Lean_Expr_isForall(v_a_4493_);
if (v___x_4494_ == 0)
{
lean_object* v___x_4495_; lean_object* v___x_4496_; 
lean_dec(v_a_4493_);
lean_dec_ref(v_xs_4482_);
lean_dec(v_i_4480_);
lean_dec_ref(v_k_4479_);
lean_dec_ref(v_perm_4478_);
v___x_4495_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2);
v___x_4496_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v___x_4495_, v_a_4483_, v_a_4484_, v_a_4485_, v_a_4486_);
return v___x_4496_;
}
else
{
lean_object* v___x_4497_; lean_object* v___x_4498_; lean_object* v___x_4499_; 
v___x_4497_ = lean_unsigned_to_nat(1u);
v___x_4498_ = lean_nat_add(v_i_4480_, v___x_4497_);
lean_dec(v_i_4480_);
v___x_4499_ = l_Lean_Expr_bindingBody_x21(v_a_4493_);
lean_dec(v_a_4493_);
v_i_4480_ = v___x_4498_;
v_type_4481_ = v___x_4499_;
goto _start;
}
}
else
{
lean_object* v_a_4501_; lean_object* v___x_4503_; uint8_t v_isShared_4504_; uint8_t v_isSharedCheck_4508_; 
lean_dec_ref(v_xs_4482_);
lean_dec(v_i_4480_);
lean_dec_ref(v_k_4479_);
lean_dec_ref(v_perm_4478_);
v_a_4501_ = lean_ctor_get(v___x_4492_, 0);
v_isSharedCheck_4508_ = !lean_is_exclusive(v___x_4492_);
if (v_isSharedCheck_4508_ == 0)
{
v___x_4503_ = v___x_4492_;
v_isShared_4504_ = v_isSharedCheck_4508_;
goto v_resetjp_4502_;
}
else
{
lean_inc(v_a_4501_);
lean_dec(v___x_4492_);
v___x_4503_ = lean_box(0);
v_isShared_4504_ = v_isSharedCheck_4508_;
goto v_resetjp_4502_;
}
v_resetjp_4502_:
{
lean_object* v___x_4506_; 
if (v_isShared_4504_ == 0)
{
v___x_4506_ = v___x_4503_;
goto v_reusejp_4505_;
}
else
{
lean_object* v_reuseFailAlloc_4507_; 
v_reuseFailAlloc_4507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4507_, 0, v_a_4501_);
v___x_4506_ = v_reuseFailAlloc_4507_;
goto v_reusejp_4505_;
}
v_reusejp_4505_:
{
return v___x_4506_;
}
}
}
}
else
{
lean_object* v_val_4509_; lean_object* v___x_4510_; lean_object* v___x_4511_; lean_object* v___f_4512_; lean_object* v___x_4513_; uint8_t v___x_4514_; lean_object* v___x_4515_; 
v_val_4509_ = lean_ctor_get(v___x_4491_, 0);
lean_inc(v_val_4509_);
v___x_4510_ = l_Lean_instInhabitedExpr;
v___x_4511_ = lean_unsigned_to_nat(1u);
v___f_4512_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___boxed), 14, 7);
lean_closure_set(v___f_4512_, 0, v___x_4511_);
lean_closure_set(v___f_4512_, 1, v___x_4510_);
lean_closure_set(v___f_4512_, 2, v_xs_4482_);
lean_closure_set(v___f_4512_, 3, v_val_4509_);
lean_closure_set(v___f_4512_, 4, v_i_4480_);
lean_closure_set(v___f_4512_, 5, v_perm_4478_);
lean_closure_set(v___f_4512_, 6, v_k_4479_);
v___x_4513_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3));
v___x_4514_ = 0;
v___x_4515_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(v_type_4481_, v___x_4513_, v___f_4512_, v___x_4489_, v___x_4514_, v_a_4483_, v_a_4484_, v_a_4485_, v_a_4486_);
return v___x_4515_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___boxed(lean_object* v_perm_4516_, lean_object* v_k_4517_, lean_object* v_i_4518_, lean_object* v_type_4519_, lean_object* v_xs_4520_, lean_object* v_a_4521_, lean_object* v_a_4522_, lean_object* v_a_4523_, lean_object* v_a_4524_, lean_object* v_a_4525_){
_start:
{
lean_object* v_res_4526_; 
v_res_4526_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(v_perm_4516_, v_k_4517_, v_i_4518_, v_type_4519_, v_xs_4520_, v_a_4521_, v_a_4522_, v_a_4523_, v_a_4524_);
lean_dec(v_a_4524_);
lean_dec_ref(v_a_4523_);
lean_dec(v_a_4522_);
lean_dec_ref(v_a_4521_);
return v_res_4526_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go(lean_object* v_00_u03b1_4527_, lean_object* v_perm_4528_, lean_object* v_k_4529_, lean_object* v_i_4530_, lean_object* v_type_4531_, lean_object* v_xs_4532_, lean_object* v_a_4533_, lean_object* v_a_4534_, lean_object* v_a_4535_, lean_object* v_a_4536_){
_start:
{
lean_object* v___x_4538_; 
v___x_4538_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(v_perm_4528_, v_k_4529_, v_i_4530_, v_type_4531_, v_xs_4532_, v_a_4533_, v_a_4534_, v_a_4535_, v_a_4536_);
return v___x_4538_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___boxed(lean_object* v_00_u03b1_4539_, lean_object* v_perm_4540_, lean_object* v_k_4541_, lean_object* v_i_4542_, lean_object* v_type_4543_, lean_object* v_xs_4544_, lean_object* v_a_4545_, lean_object* v_a_4546_, lean_object* v_a_4547_, lean_object* v_a_4548_, lean_object* v_a_4549_){
_start:
{
lean_object* v_res_4550_; 
v_res_4550_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go(v_00_u03b1_4539_, v_perm_4540_, v_k_4541_, v_i_4542_, v_type_4543_, v_xs_4544_, v_a_4545_, v_a_4546_, v_a_4547_, v_a_4548_);
lean_dec(v_a_4548_);
lean_dec_ref(v_a_4547_);
lean_dec(v_a_4546_);
lean_dec_ref(v_a_4545_);
return v_res_4550_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0(void){
_start:
{
lean_object* v___x_4551_; lean_object* v___x_4552_; 
v___x_4551_ = lean_unsigned_to_nat(0u);
v___x_4552_ = l_Lean_Level_ofNat(v___x_4551_);
return v___x_4552_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1(void){
_start:
{
lean_object* v___x_4553_; lean_object* v___x_4554_; 
v___x_4553_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0);
v___x_4554_ = l_Lean_mkSort(v___x_4553_);
return v___x_4554_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(lean_object* v_perm_4555_, lean_object* v_type_4556_, lean_object* v_k_4557_, lean_object* v_a_4558_, lean_object* v_a_4559_, lean_object* v_a_4560_, lean_object* v_a_4561_){
_start:
{
lean_object* v___x_4563_; lean_object* v___x_4564_; lean_object* v___x_4565_; lean_object* v___x_4566_; lean_object* v___x_4567_; 
v___x_4563_ = lean_unsigned_to_nat(0u);
v___x_4564_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_4555_);
v___x_4565_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1);
v___x_4566_ = lean_mk_array(v___x_4564_, v___x_4565_);
v___x_4567_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(v_perm_4555_, v_k_4557_, v___x_4563_, v_type_4556_, v___x_4566_, v_a_4558_, v_a_4559_, v_a_4560_, v_a_4561_);
return v___x_4567_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___boxed(lean_object* v_perm_4568_, lean_object* v_type_4569_, lean_object* v_k_4570_, lean_object* v_a_4571_, lean_object* v_a_4572_, lean_object* v_a_4573_, lean_object* v_a_4574_, lean_object* v_a_4575_){
_start:
{
lean_object* v_res_4576_; 
v_res_4576_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(v_perm_4568_, v_type_4569_, v_k_4570_, v_a_4571_, v_a_4572_, v_a_4573_, v_a_4574_);
lean_dec(v_a_4574_);
lean_dec_ref(v_a_4573_);
lean_dec(v_a_4572_);
lean_dec_ref(v_a_4571_);
return v_res_4576_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl(lean_object* v_00_u03b1_4577_, lean_object* v_perm_4578_, lean_object* v_type_4579_, lean_object* v_k_4580_, lean_object* v_a_4581_, lean_object* v_a_4582_, lean_object* v_a_4583_, lean_object* v_a_4584_){
_start:
{
lean_object* v___x_4586_; 
v___x_4586_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(v_perm_4578_, v_type_4579_, v_k_4580_, v_a_4581_, v_a_4582_, v_a_4583_, v_a_4584_);
return v___x_4586_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___boxed(lean_object* v_00_u03b1_4587_, lean_object* v_perm_4588_, lean_object* v_type_4589_, lean_object* v_k_4590_, lean_object* v_a_4591_, lean_object* v_a_4592_, lean_object* v_a_4593_, lean_object* v_a_4594_, lean_object* v_a_4595_){
_start:
{
lean_object* v_res_4596_; 
v_res_4596_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl(v_00_u03b1_4587_, v_perm_4588_, v_type_4589_, v_k_4590_, v_a_4591_, v_a_4592_, v_a_4593_, v_a_4594_);
lean_dec(v_a_4594_);
lean_dec_ref(v_a_4593_);
lean_dec(v_a_4592_);
lean_dec_ref(v_a_4591_);
return v_res_4596_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0(lean_object* v_k_4597_, lean_object* v_runInBase_4598_, lean_object* v_b_4599_, lean_object* v___y_4600_, lean_object* v___y_4601_, lean_object* v___y_4602_, lean_object* v___y_4603_){
_start:
{
lean_object* v___x_4605_; lean_object* v___x_4606_; 
v___x_4605_ = lean_apply_1(v_k_4597_, v_b_4599_);
lean_inc(v___y_4603_);
lean_inc_ref(v___y_4602_);
lean_inc(v___y_4601_);
lean_inc_ref(v___y_4600_);
v___x_4606_ = lean_apply_7(v_runInBase_4598_, lean_box(0), v___x_4605_, v___y_4600_, v___y_4601_, v___y_4602_, v___y_4603_, lean_box(0));
return v___x_4606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0___boxed(lean_object* v_k_4607_, lean_object* v_runInBase_4608_, lean_object* v_b_4609_, lean_object* v___y_4610_, lean_object* v___y_4611_, lean_object* v___y_4612_, lean_object* v___y_4613_, lean_object* v___y_4614_){
_start:
{
lean_object* v_res_4615_; 
v_res_4615_ = l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0(v_k_4607_, v_runInBase_4608_, v_b_4609_, v___y_4610_, v___y_4611_, v___y_4612_, v___y_4613_);
lean_dec(v___y_4613_);
lean_dec_ref(v___y_4612_);
lean_dec(v___y_4611_);
lean_dec_ref(v___y_4610_);
return v_res_4615_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1(lean_object* v_k_4616_, lean_object* v_perm_4617_, lean_object* v_type_4618_, lean_object* v_runInBase_4619_, lean_object* v___y_4620_, lean_object* v___y_4621_, lean_object* v___y_4622_, lean_object* v___y_4623_){
_start:
{
lean_object* v___f_4625_; lean_object* v___x_4626_; 
v___f_4625_ = lean_alloc_closure((void*)(l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_4625_, 0, v_k_4616_);
lean_closure_set(v___f_4625_, 1, v_runInBase_4619_);
v___x_4626_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(v_perm_4617_, v_type_4618_, v___f_4625_, v___y_4620_, v___y_4621_, v___y_4622_, v___y_4623_);
return v___x_4626_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1___boxed(lean_object* v_k_4627_, lean_object* v_perm_4628_, lean_object* v_type_4629_, lean_object* v_runInBase_4630_, lean_object* v___y_4631_, lean_object* v___y_4632_, lean_object* v___y_4633_, lean_object* v___y_4634_, lean_object* v___y_4635_){
_start:
{
lean_object* v_res_4636_; 
v_res_4636_ = l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1(v_k_4627_, v_perm_4628_, v_type_4629_, v_runInBase_4630_, v___y_4631_, v___y_4632_, v___y_4633_, v___y_4634_);
lean_dec(v___y_4634_);
lean_dec_ref(v___y_4633_);
lean_dec(v___y_4632_);
lean_dec_ref(v___y_4631_);
return v_res_4636_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg(lean_object* v_inst_4637_, lean_object* v_inst_4638_, lean_object* v_perm_4639_, lean_object* v_type_4640_, lean_object* v_k_4641_){
_start:
{
lean_object* v_toBind_4642_; lean_object* v_liftWith_4643_; lean_object* v_restoreM_4644_; lean_object* v___f_4645_; lean_object* v___x_4646_; lean_object* v___x_4647_; lean_object* v___x_4648_; 
v_toBind_4642_ = lean_ctor_get(v_inst_4638_, 1);
lean_inc(v_toBind_4642_);
lean_dec_ref(v_inst_4638_);
v_liftWith_4643_ = lean_ctor_get(v_inst_4637_, 0);
lean_inc(v_liftWith_4643_);
v_restoreM_4644_ = lean_ctor_get(v_inst_4637_, 1);
lean_inc(v_restoreM_4644_);
lean_dec_ref(v_inst_4637_);
v___f_4645_ = lean_alloc_closure((void*)(l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1___boxed), 9, 3);
lean_closure_set(v___f_4645_, 0, v_k_4641_);
lean_closure_set(v___f_4645_, 1, v_perm_4639_);
lean_closure_set(v___f_4645_, 2, v_type_4640_);
v___x_4646_ = lean_apply_2(v_liftWith_4643_, lean_box(0), v___f_4645_);
v___x_4647_ = lean_apply_1(v_restoreM_4644_, lean_box(0));
v___x_4648_ = lean_apply_4(v_toBind_4642_, lean_box(0), lean_box(0), v___x_4646_, v___x_4647_);
return v___x_4648_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope(lean_object* v_n_4649_, lean_object* v_00_u03b1_4650_, lean_object* v_inst_4651_, lean_object* v_inst_4652_, lean_object* v_perm_4653_, lean_object* v_type_4654_, lean_object* v_k_4655_){
_start:
{
lean_object* v___x_4656_; 
v___x_4656_ = l_Lean_Elab_FixedParamPerm_forallTelescope___redArg(v_inst_4651_, v_inst_4652_, v_perm_4653_, v_type_4654_, v_k_4655_);
return v___x_4656_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(lean_object* v_msg_4657_, lean_object* v___y_4658_, lean_object* v___y_4659_, lean_object* v___y_4660_, lean_object* v___y_4661_){
_start:
{
lean_object* v___f_4663_; lean_object* v___x_641__overap_4664_; lean_object* v___x_4665_; 
v___f_4663_ = ((lean_object*)(l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0));
v___x_641__overap_4664_ = lean_panic_fn_borrowed(v___f_4663_, v_msg_4657_);
lean_inc(v___y_4661_);
lean_inc_ref(v___y_4660_);
lean_inc(v___y_4659_);
lean_inc_ref(v___y_4658_);
v___x_4665_ = lean_apply_5(v___x_641__overap_4664_, v___y_4658_, v___y_4659_, v___y_4660_, v___y_4661_, lean_box(0));
return v___x_4665_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0___boxed(lean_object* v_msg_4666_, lean_object* v___y_4667_, lean_object* v___y_4668_, lean_object* v___y_4669_, lean_object* v___y_4670_, lean_object* v___y_4671_){
_start:
{
lean_object* v_res_4672_; 
v_res_4672_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v_msg_4666_, v___y_4667_, v___y_4668_, v___y_4669_, v___y_4670_);
lean_dec(v___y_4670_);
lean_dec_ref(v___y_4669_);
lean_dec(v___y_4668_);
lean_dec_ref(v___y_4667_);
return v_res_4672_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4675_; lean_object* v___x_4676_; lean_object* v___x_4677_; lean_object* v___x_4678_; lean_object* v___x_4679_; lean_object* v___x_4680_; 
v___x_4675_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__1));
v___x_4676_ = lean_unsigned_to_nat(10u);
v___x_4677_ = lean_unsigned_to_nat(353u);
v___x_4678_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0));
v___x_4679_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4680_ = l_mkPanicMessageWithDecl(v___x_4679_, v___x_4678_, v___x_4677_, v___x_4676_, v___x_4675_);
return v___x_4680_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___boxed(lean_object* v___x_4681_, lean_object* v_xs_4682_, lean_object* v_tail_4683_, lean_object* v_ys_4684_, lean_object* v_type_4685_, lean_object* v___y_4686_, lean_object* v___y_4687_, lean_object* v___y_4688_, lean_object* v___y_4689_, lean_object* v___y_4690_){
_start:
{
lean_object* v_res_4691_; 
v_res_4691_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0(v___x_4681_, v_xs_4682_, v_tail_4683_, v_ys_4684_, v_type_4685_, v___y_4686_, v___y_4687_, v___y_4688_, v___y_4689_);
lean_dec(v___y_4689_);
lean_dec_ref(v___y_4688_);
lean_dec(v___y_4687_);
lean_dec_ref(v___y_4686_);
lean_dec_ref(v_ys_4684_);
lean_dec(v___x_4681_);
return v_res_4691_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0(void){
_start:
{
lean_object* v___x_4692_; lean_object* v___x_4693_; lean_object* v___x_4694_; lean_object* v___x_4695_; lean_object* v___x_4696_; lean_object* v___x_4697_; 
v___x_4692_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2));
v___x_4693_ = lean_unsigned_to_nat(8u);
v___x_4694_ = lean_unsigned_to_nat(349u);
v___x_4695_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0));
v___x_4696_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4697_ = l_mkPanicMessageWithDecl(v___x_4696_, v___x_4695_, v___x_4694_, v___x_4693_, v___x_4692_);
return v___x_4697_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(lean_object* v_xs_4698_, lean_object* v_x_4699_, lean_object* v_x_4700_, lean_object* v_a_4701_, lean_object* v_a_4702_, lean_object* v_a_4703_, lean_object* v_a_4704_){
_start:
{
if (lean_obj_tag(v_x_4699_) == 0)
{
lean_object* v___x_4706_; 
lean_dec_ref(v_xs_4698_);
v___x_4706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4706_, 0, v_x_4700_);
return v___x_4706_;
}
else
{
lean_object* v_head_4707_; 
v_head_4707_ = lean_ctor_get(v_x_4699_, 0);
if (lean_obj_tag(v_head_4707_) == 0)
{
lean_object* v_tail_4708_; lean_object* v___x_4709_; lean_object* v___f_4710_; lean_object* v___x_4711_; uint8_t v___x_4712_; lean_object* v___x_4713_; 
v_tail_4708_ = lean_ctor_get(v_x_4699_, 1);
lean_inc(v_tail_4708_);
lean_dec_ref_known(v_x_4699_, 2);
v___x_4709_ = lean_unsigned_to_nat(1u);
v___f_4710_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___boxed), 10, 3);
lean_closure_set(v___f_4710_, 0, v___x_4709_);
lean_closure_set(v___f_4710_, 1, v_xs_4698_);
lean_closure_set(v___f_4710_, 2, v_tail_4708_);
v___x_4711_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3));
v___x_4712_ = 0;
v___x_4713_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(v_x_4700_, v___x_4711_, v___f_4710_, v___x_4712_, v___x_4712_, v_a_4701_, v_a_4702_, v_a_4703_, v_a_4704_);
return v___x_4713_;
}
else
{
lean_object* v_tail_4714_; lean_object* v_val_4715_; lean_object* v___x_4716_; uint8_t v___x_4717_; 
lean_inc_ref(v_head_4707_);
v_tail_4714_ = lean_ctor_get(v_x_4699_, 1);
lean_inc(v_tail_4714_);
lean_dec_ref_known(v_x_4699_, 2);
v_val_4715_ = lean_ctor_get(v_head_4707_, 0);
lean_inc(v_val_4715_);
lean_dec_ref_known(v_head_4707_, 1);
v___x_4716_ = lean_array_get_size(v_xs_4698_);
v___x_4717_ = lean_nat_dec_lt(v_val_4715_, v___x_4716_);
if (v___x_4717_ == 0)
{
lean_object* v___x_4718_; lean_object* v___x_4719_; 
lean_dec(v_val_4715_);
lean_dec(v_tail_4714_);
lean_dec_ref(v_x_4700_);
lean_dec_ref(v_xs_4698_);
v___x_4718_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0);
v___x_4719_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4718_, v_a_4701_, v_a_4702_, v_a_4703_, v_a_4704_);
return v___x_4719_;
}
else
{
lean_object* v___x_4720_; lean_object* v___x_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4725_; 
v___x_4720_ = l_Lean_instInhabitedExpr;
v___x_4721_ = lean_array_get_borrowed(v___x_4720_, v_xs_4698_, v_val_4715_);
lean_dec(v_val_4715_);
v___x_4722_ = lean_unsigned_to_nat(1u);
v___x_4723_ = lean_mk_empty_array_with_capacity(v___x_4722_);
lean_inc(v___x_4721_);
v___x_4724_ = lean_array_push(v___x_4723_, v___x_4721_);
v___x_4725_ = l_Lean_Meta_instantiateForall(v_x_4700_, v___x_4724_, v_a_4701_, v_a_4702_, v_a_4703_, v_a_4704_);
lean_dec_ref(v___x_4724_);
if (lean_obj_tag(v___x_4725_) == 0)
{
lean_object* v_a_4726_; 
v_a_4726_ = lean_ctor_get(v___x_4725_, 0);
lean_inc(v_a_4726_);
lean_dec_ref_known(v___x_4725_, 1);
v_x_4699_ = v_tail_4714_;
v_x_4700_ = v_a_4726_;
goto _start;
}
else
{
lean_dec(v_tail_4714_);
lean_dec_ref(v_xs_4698_);
return v___x_4725_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0(lean_object* v___x_4728_, lean_object* v_xs_4729_, lean_object* v_tail_4730_, lean_object* v_ys_4731_, lean_object* v_type_4732_, lean_object* v___y_4733_, lean_object* v___y_4734_, lean_object* v___y_4735_, lean_object* v___y_4736_){
_start:
{
lean_object* v___x_4738_; uint8_t v___x_4739_; 
v___x_4738_ = lean_array_get_size(v_ys_4731_);
v___x_4739_ = lean_nat_dec_eq(v___x_4738_, v___x_4728_);
if (v___x_4739_ == 0)
{
lean_object* v___x_4740_; lean_object* v___x_4741_; 
lean_dec_ref(v_type_4732_);
lean_dec(v_tail_4730_);
lean_dec_ref(v_xs_4729_);
v___x_4740_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2);
v___x_4741_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4740_, v___y_4733_, v___y_4734_, v___y_4735_, v___y_4736_);
return v___x_4741_;
}
else
{
lean_object* v___x_4742_; 
v___x_4742_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(v_xs_4729_, v_tail_4730_, v_type_4732_, v___y_4733_, v___y_4734_, v___y_4735_, v___y_4736_);
if (lean_obj_tag(v___x_4742_) == 0)
{
lean_object* v_a_4743_; uint8_t v___x_4744_; uint8_t v___x_4745_; lean_object* v___x_4746_; 
v_a_4743_ = lean_ctor_get(v___x_4742_, 0);
lean_inc(v_a_4743_);
lean_dec_ref_known(v___x_4742_, 1);
v___x_4744_ = 0;
v___x_4745_ = 1;
v___x_4746_ = l_Lean_Meta_mkForallFVars(v_ys_4731_, v_a_4743_, v___x_4744_, v___x_4739_, v___x_4739_, v___x_4745_, v___y_4733_, v___y_4734_, v___y_4735_, v___y_4736_);
return v___x_4746_;
}
else
{
return v___x_4742_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___boxed(lean_object* v_xs_4747_, lean_object* v_x_4748_, lean_object* v_x_4749_, lean_object* v_a_4750_, lean_object* v_a_4751_, lean_object* v_a_4752_, lean_object* v_a_4753_, lean_object* v_a_4754_){
_start:
{
lean_object* v_res_4755_; 
v_res_4755_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(v_xs_4747_, v_x_4748_, v_x_4749_, v_a_4750_, v_a_4751_, v_a_4752_, v_a_4753_);
lean_dec(v_a_4753_);
lean_dec_ref(v_a_4752_);
lean_dec(v_a_4751_);
lean_dec_ref(v_a_4750_);
return v_res_4755_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2(void){
_start:
{
lean_object* v___x_4758_; lean_object* v___x_4759_; lean_object* v___x_4760_; lean_object* v___x_4761_; lean_object* v___x_4762_; lean_object* v___x_4763_; 
v___x_4758_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1));
v___x_4759_ = lean_unsigned_to_nat(2u);
v___x_4760_ = lean_unsigned_to_nat(343u);
v___x_4761_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_instantiateForall___closed__0));
v___x_4762_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4763_ = l_mkPanicMessageWithDecl(v___x_4762_, v___x_4761_, v___x_4760_, v___x_4759_, v___x_4758_);
return v___x_4763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall(lean_object* v_perm_4764_, lean_object* v_type_u2080_4765_, lean_object* v_xs_4766_, lean_object* v_a_4767_, lean_object* v_a_4768_, lean_object* v_a_4769_, lean_object* v_a_4770_){
_start:
{
lean_object* v___x_4772_; lean_object* v___x_4773_; uint8_t v___x_4774_; 
v___x_4772_ = lean_array_get_size(v_xs_4766_);
v___x_4773_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_4764_);
v___x_4774_ = lean_nat_dec_eq(v___x_4772_, v___x_4773_);
lean_dec(v___x_4773_);
if (v___x_4774_ == 0)
{
lean_object* v___x_4775_; lean_object* v___x_4776_; 
lean_dec_ref(v_xs_4766_);
lean_dec_ref(v_type_u2080_4765_);
lean_dec_ref(v_perm_4764_);
v___x_4775_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2, &l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2_once, _init_l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2);
v___x_4776_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4775_, v_a_4767_, v_a_4768_, v_a_4769_, v_a_4770_);
return v___x_4776_;
}
else
{
lean_object* v_mask_4777_; lean_object* v___x_4778_; 
v_mask_4777_ = lean_array_to_list(v_perm_4764_);
v___x_4778_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(v_xs_4766_, v_mask_4777_, v_type_u2080_4765_, v_a_4767_, v_a_4768_, v_a_4769_, v_a_4770_);
return v___x_4778_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall___boxed(lean_object* v_perm_4779_, lean_object* v_type_u2080_4780_, lean_object* v_xs_4781_, lean_object* v_a_4782_, lean_object* v_a_4783_, lean_object* v_a_4784_, lean_object* v_a_4785_, lean_object* v_a_4786_){
_start:
{
lean_object* v_res_4787_; 
v_res_4787_ = l_Lean_Elab_FixedParamPerm_instantiateForall(v_perm_4779_, v_type_u2080_4780_, v_xs_4781_, v_a_4782_, v_a_4783_, v_a_4784_, v_a_4785_);
lean_dec(v_a_4785_);
lean_dec_ref(v_a_4784_);
lean_dec(v_a_4783_);
lean_dec_ref(v_a_4782_);
return v_res_4787_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg(lean_object* v_e_4788_, lean_object* v_maxFVars_4789_, lean_object* v_k_4790_, uint8_t v_cleanupAnnotations_4791_, lean_object* v___y_4792_, lean_object* v___y_4793_, lean_object* v___y_4794_, lean_object* v___y_4795_){
_start:
{
lean_object* v___f_4797_; uint8_t v___x_4798_; uint8_t v___x_4799_; lean_object* v___x_4800_; lean_object* v___x_4801_; 
v___f_4797_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_4797_, 0, v_k_4790_);
v___x_4798_ = 1;
v___x_4799_ = 0;
v___x_4800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4800_, 0, v_maxFVars_4789_);
v___x_4801_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_4788_, v___x_4798_, v___x_4799_, v___x_4798_, v___x_4799_, v___x_4800_, v___f_4797_, v_cleanupAnnotations_4791_, v___y_4792_, v___y_4793_, v___y_4794_, v___y_4795_);
lean_dec_ref_known(v___x_4800_, 1);
if (lean_obj_tag(v___x_4801_) == 0)
{
lean_object* v_a_4802_; lean_object* v___x_4804_; uint8_t v_isShared_4805_; uint8_t v_isSharedCheck_4809_; 
v_a_4802_ = lean_ctor_get(v___x_4801_, 0);
v_isSharedCheck_4809_ = !lean_is_exclusive(v___x_4801_);
if (v_isSharedCheck_4809_ == 0)
{
v___x_4804_ = v___x_4801_;
v_isShared_4805_ = v_isSharedCheck_4809_;
goto v_resetjp_4803_;
}
else
{
lean_inc(v_a_4802_);
lean_dec(v___x_4801_);
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
v_reuseFailAlloc_4808_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_4810_; lean_object* v___x_4812_; uint8_t v_isShared_4813_; uint8_t v_isSharedCheck_4817_; 
v_a_4810_ = lean_ctor_get(v___x_4801_, 0);
v_isSharedCheck_4817_ = !lean_is_exclusive(v___x_4801_);
if (v_isSharedCheck_4817_ == 0)
{
v___x_4812_ = v___x_4801_;
v_isShared_4813_ = v_isSharedCheck_4817_;
goto v_resetjp_4811_;
}
else
{
lean_inc(v_a_4810_);
lean_dec(v___x_4801_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg___boxed(lean_object* v_e_4818_, lean_object* v_maxFVars_4819_, lean_object* v_k_4820_, lean_object* v_cleanupAnnotations_4821_, lean_object* v___y_4822_, lean_object* v___y_4823_, lean_object* v___y_4824_, lean_object* v___y_4825_, lean_object* v___y_4826_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4827_; lean_object* v_res_4828_; 
v_cleanupAnnotations_boxed_4827_ = lean_unbox(v_cleanupAnnotations_4821_);
v_res_4828_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg(v_e_4818_, v_maxFVars_4819_, v_k_4820_, v_cleanupAnnotations_boxed_4827_, v___y_4822_, v___y_4823_, v___y_4824_, v___y_4825_);
lean_dec(v___y_4825_);
lean_dec_ref(v___y_4824_);
lean_dec(v___y_4823_);
lean_dec_ref(v___y_4822_);
return v_res_4828_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1(lean_object* v_00_u03b1_4829_, lean_object* v_e_4830_, lean_object* v_maxFVars_4831_, lean_object* v_k_4832_, uint8_t v_cleanupAnnotations_4833_, lean_object* v___y_4834_, lean_object* v___y_4835_, lean_object* v___y_4836_, lean_object* v___y_4837_){
_start:
{
lean_object* v___x_4839_; 
v___x_4839_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg(v_e_4830_, v_maxFVars_4831_, v_k_4832_, v_cleanupAnnotations_4833_, v___y_4834_, v___y_4835_, v___y_4836_, v___y_4837_);
return v___x_4839_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___boxed(lean_object* v_00_u03b1_4840_, lean_object* v_e_4841_, lean_object* v_maxFVars_4842_, lean_object* v_k_4843_, lean_object* v_cleanupAnnotations_4844_, lean_object* v___y_4845_, lean_object* v___y_4846_, lean_object* v___y_4847_, lean_object* v___y_4848_, lean_object* v___y_4849_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4850_; lean_object* v_res_4851_; 
v_cleanupAnnotations_boxed_4850_ = lean_unbox(v_cleanupAnnotations_4844_);
v_res_4851_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1(v_00_u03b1_4840_, v_e_4841_, v_maxFVars_4842_, v_k_4843_, v_cleanupAnnotations_boxed_4850_, v___y_4845_, v___y_4846_, v___y_4847_, v___y_4848_);
lean_dec(v___y_4848_);
lean_dec_ref(v___y_4847_);
lean_dec(v___y_4846_);
lean_dec_ref(v___y_4845_);
return v_res_4851_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0(lean_object* v_x_4852_){
_start:
{
if (lean_obj_tag(v_x_4852_) == 0)
{
uint8_t v___x_4853_; 
v___x_4853_ = 1;
return v___x_4853_;
}
else
{
lean_object* v_head_4854_; 
v_head_4854_ = lean_ctor_get(v_x_4852_, 0);
if (lean_obj_tag(v_head_4854_) == 0)
{
lean_object* v_tail_4855_; 
v_tail_4855_ = lean_ctor_get(v_x_4852_, 1);
v_x_4852_ = v_tail_4855_;
goto _start;
}
else
{
uint8_t v___x_4857_; 
v___x_4857_ = 0;
return v___x_4857_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0___boxed(lean_object* v_x_4858_){
_start:
{
uint8_t v_res_4859_; lean_object* v_r_4860_; 
v_res_4859_ = l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0(v_x_4858_);
lean_dec(v_x_4858_);
v_r_4860_ = lean_box(v_res_4859_);
return v_r_4860_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4863_; lean_object* v___x_4864_; lean_object* v___x_4865_; lean_object* v___x_4866_; lean_object* v___x_4867_; lean_object* v___x_4868_; 
v___x_4863_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__1));
v___x_4864_ = lean_unsigned_to_nat(12u);
v___x_4865_ = lean_unsigned_to_nat(376u);
v___x_4866_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__0));
v___x_4867_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4868_ = l_mkPanicMessageWithDecl(v___x_4867_, v___x_4866_, v___x_4865_, v___x_4864_, v___x_4863_);
return v___x_4868_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___boxed(lean_object* v___x_4869_, lean_object* v_xs_4870_, lean_object* v_tail_4871_, lean_object* v___x_4872_, lean_object* v_ys_4873_, lean_object* v_value_4874_, lean_object* v___y_4875_, lean_object* v___y_4876_, lean_object* v___y_4877_, lean_object* v___y_4878_, lean_object* v___y_4879_){
_start:
{
uint8_t v___x_1348__boxed_4880_; lean_object* v_res_4881_; 
v___x_1348__boxed_4880_ = lean_unbox(v___x_4872_);
v_res_4881_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0(v___x_4869_, v_xs_4870_, v_tail_4871_, v___x_1348__boxed_4880_, v_ys_4873_, v_value_4874_, v___y_4875_, v___y_4876_, v___y_4877_, v___y_4878_);
lean_dec(v___y_4878_);
lean_dec_ref(v___y_4877_);
lean_dec(v___y_4876_);
lean_dec_ref(v___y_4875_);
lean_dec_ref(v_ys_4873_);
lean_dec(v___x_4869_);
return v_res_4881_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0(void){
_start:
{
lean_object* v___x_4882_; lean_object* v___x_4883_; lean_object* v___x_4884_; lean_object* v___x_4885_; lean_object* v___x_4886_; lean_object* v___x_4887_; 
v___x_4882_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2));
v___x_4883_ = lean_unsigned_to_nat(8u);
v___x_4884_ = lean_unsigned_to_nat(368u);
v___x_4885_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__0));
v___x_4886_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4887_ = l_mkPanicMessageWithDecl(v___x_4886_, v___x_4885_, v___x_4884_, v___x_4883_, v___x_4882_);
return v___x_4887_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(lean_object* v_xs_4888_, lean_object* v_x_4889_, lean_object* v_x_4890_, lean_object* v_a_4891_, lean_object* v_a_4892_, lean_object* v_a_4893_, lean_object* v_a_4894_){
_start:
{
if (lean_obj_tag(v_x_4889_) == 0)
{
lean_object* v___x_4896_; 
lean_dec_ref(v_xs_4888_);
v___x_4896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4896_, 0, v_x_4890_);
return v___x_4896_;
}
else
{
lean_object* v_head_4897_; 
v_head_4897_ = lean_ctor_get(v_x_4889_, 0);
if (lean_obj_tag(v_head_4897_) == 0)
{
lean_object* v_tail_4898_; uint8_t v___x_4899_; 
v_tail_4898_ = lean_ctor_get(v_x_4889_, 1);
lean_inc(v_tail_4898_);
lean_dec_ref_known(v_x_4889_, 2);
v___x_4899_ = l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0(v_tail_4898_);
if (v___x_4899_ == 0)
{
lean_object* v___x_4900_; lean_object* v___x_4901_; lean_object* v___f_4902_; lean_object* v___x_4903_; 
v___x_4900_ = lean_unsigned_to_nat(1u);
v___x_4901_ = lean_box(v___x_4899_);
v___f_4902_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___boxed), 11, 4);
lean_closure_set(v___f_4902_, 0, v___x_4900_);
lean_closure_set(v___f_4902_, 1, v_xs_4888_);
lean_closure_set(v___f_4902_, 2, v_tail_4898_);
lean_closure_set(v___f_4902_, 3, v___x_4901_);
v___x_4903_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg(v_x_4890_, v___x_4900_, v___f_4902_, v___x_4899_, v_a_4891_, v_a_4892_, v_a_4893_, v_a_4894_);
return v___x_4903_;
}
else
{
lean_object* v___x_4904_; 
lean_dec(v_tail_4898_);
lean_dec_ref(v_xs_4888_);
v___x_4904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4904_, 0, v_x_4890_);
return v___x_4904_;
}
}
else
{
lean_object* v_tail_4905_; lean_object* v_val_4906_; lean_object* v___x_4907_; uint8_t v___x_4908_; 
lean_inc_ref(v_head_4897_);
v_tail_4905_ = lean_ctor_get(v_x_4889_, 1);
lean_inc(v_tail_4905_);
lean_dec_ref_known(v_x_4889_, 2);
v_val_4906_ = lean_ctor_get(v_head_4897_, 0);
lean_inc(v_val_4906_);
lean_dec_ref_known(v_head_4897_, 1);
v___x_4907_ = lean_array_get_size(v_xs_4888_);
v___x_4908_ = lean_nat_dec_lt(v_val_4906_, v___x_4907_);
if (v___x_4908_ == 0)
{
lean_object* v___x_4909_; lean_object* v___x_4910_; 
lean_dec(v_val_4906_);
lean_dec(v_tail_4905_);
lean_dec_ref(v_x_4890_);
lean_dec_ref(v_xs_4888_);
v___x_4909_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0);
v___x_4910_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4909_, v_a_4891_, v_a_4892_, v_a_4893_, v_a_4894_);
return v___x_4910_;
}
else
{
lean_object* v___x_4911_; lean_object* v___x_4912_; lean_object* v___x_4913_; lean_object* v___x_4914_; lean_object* v___x_4915_; lean_object* v___x_4916_; 
v___x_4911_ = l_Lean_instInhabitedExpr;
v___x_4912_ = lean_array_get_borrowed(v___x_4911_, v_xs_4888_, v_val_4906_);
lean_dec(v_val_4906_);
v___x_4913_ = lean_unsigned_to_nat(1u);
v___x_4914_ = lean_mk_empty_array_with_capacity(v___x_4913_);
lean_inc(v___x_4912_);
v___x_4915_ = lean_array_push(v___x_4914_, v___x_4912_);
v___x_4916_ = l_Lean_Meta_instantiateLambda(v_x_4890_, v___x_4915_, v_a_4891_, v_a_4892_, v_a_4893_, v_a_4894_);
lean_dec_ref(v___x_4915_);
if (lean_obj_tag(v___x_4916_) == 0)
{
lean_object* v_a_4917_; 
v_a_4917_ = lean_ctor_get(v___x_4916_, 0);
lean_inc(v_a_4917_);
lean_dec_ref_known(v___x_4916_, 1);
v_x_4889_ = v_tail_4905_;
v_x_4890_ = v_a_4917_;
goto _start;
}
else
{
lean_dec(v_tail_4905_);
lean_dec_ref(v_xs_4888_);
return v___x_4916_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0(lean_object* v___x_4919_, lean_object* v_xs_4920_, lean_object* v_tail_4921_, uint8_t v___x_4922_, lean_object* v_ys_4923_, lean_object* v_value_4924_, lean_object* v___y_4925_, lean_object* v___y_4926_, lean_object* v___y_4927_, lean_object* v___y_4928_){
_start:
{
lean_object* v___x_4930_; uint8_t v___x_4931_; 
v___x_4930_ = lean_array_get_size(v_ys_4923_);
v___x_4931_ = lean_nat_dec_eq(v___x_4930_, v___x_4919_);
if (v___x_4931_ == 0)
{
lean_object* v___x_4932_; lean_object* v___x_4933_; 
lean_dec_ref(v_value_4924_);
lean_dec(v_tail_4921_);
lean_dec_ref(v_xs_4920_);
v___x_4932_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2);
v___x_4933_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4932_, v___y_4925_, v___y_4926_, v___y_4927_, v___y_4928_);
return v___x_4933_;
}
else
{
lean_object* v___x_4934_; 
v___x_4934_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(v_xs_4920_, v_tail_4921_, v_value_4924_, v___y_4925_, v___y_4926_, v___y_4927_, v___y_4928_);
if (lean_obj_tag(v___x_4934_) == 0)
{
lean_object* v_a_4935_; uint8_t v___x_4936_; lean_object* v___x_4937_; 
v_a_4935_ = lean_ctor_get(v___x_4934_, 0);
lean_inc(v_a_4935_);
lean_dec_ref_known(v___x_4934_, 1);
v___x_4936_ = 1;
v___x_4937_ = l_Lean_Meta_mkLambdaFVars(v_ys_4923_, v_a_4935_, v___x_4922_, v___x_4931_, v___x_4922_, v___x_4931_, v___x_4936_, v___y_4925_, v___y_4926_, v___y_4927_, v___y_4928_);
return v___x_4937_;
}
else
{
return v___x_4934_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___boxed(lean_object* v_xs_4938_, lean_object* v_x_4939_, lean_object* v_x_4940_, lean_object* v_a_4941_, lean_object* v_a_4942_, lean_object* v_a_4943_, lean_object* v_a_4944_, lean_object* v_a_4945_){
_start:
{
lean_object* v_res_4946_; 
v_res_4946_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(v_xs_4938_, v_x_4939_, v_x_4940_, v_a_4941_, v_a_4942_, v_a_4943_, v_a_4944_);
lean_dec(v_a_4944_);
lean_dec_ref(v_a_4943_);
lean_dec(v_a_4942_);
lean_dec_ref(v_a_4941_);
return v_res_4946_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1(void){
_start:
{
lean_object* v___x_4948_; lean_object* v___x_4949_; lean_object* v___x_4950_; lean_object* v___x_4951_; lean_object* v___x_4952_; lean_object* v___x_4953_; 
v___x_4948_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1));
v___x_4949_ = lean_unsigned_to_nat(2u);
v___x_4950_ = lean_unsigned_to_nat(362u);
v___x_4951_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__0));
v___x_4952_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4953_ = l_mkPanicMessageWithDecl(v___x_4952_, v___x_4951_, v___x_4950_, v___x_4949_, v___x_4948_);
return v___x_4953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda(lean_object* v_perm_4954_, lean_object* v_value_u2080_4955_, lean_object* v_xs_4956_, lean_object* v_a_4957_, lean_object* v_a_4958_, lean_object* v_a_4959_, lean_object* v_a_4960_){
_start:
{
lean_object* v___x_4962_; lean_object* v___x_4963_; uint8_t v___x_4964_; 
v___x_4962_ = lean_array_get_size(v_xs_4956_);
v___x_4963_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_4954_);
v___x_4964_ = lean_nat_dec_eq(v___x_4962_, v___x_4963_);
lean_dec(v___x_4963_);
if (v___x_4964_ == 0)
{
lean_object* v___x_4965_; lean_object* v___x_4966_; 
lean_dec_ref(v_xs_4956_);
lean_dec_ref(v_value_u2080_4955_);
lean_dec_ref(v_perm_4954_);
v___x_4965_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1, &l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1_once, _init_l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1);
v___x_4966_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4965_, v_a_4957_, v_a_4958_, v_a_4959_, v_a_4960_);
return v___x_4966_;
}
else
{
lean_object* v_mask_4967_; lean_object* v___x_4968_; 
v_mask_4967_ = lean_array_to_list(v_perm_4954_);
v___x_4968_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(v_xs_4956_, v_mask_4967_, v_value_u2080_4955_, v_a_4957_, v_a_4958_, v_a_4959_, v_a_4960_);
return v___x_4968_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda___boxed(lean_object* v_perm_4969_, lean_object* v_value_u2080_4970_, lean_object* v_xs_4971_, lean_object* v_a_4972_, lean_object* v_a_4973_, lean_object* v_a_4974_, lean_object* v_a_4975_, lean_object* v_a_4976_){
_start:
{
lean_object* v_res_4977_; 
v_res_4977_ = l_Lean_Elab_FixedParamPerm_instantiateLambda(v_perm_4969_, v_value_u2080_4970_, v_xs_4971_, v_a_4972_, v_a_4973_, v_a_4974_, v_a_4975_);
lean_dec(v_a_4975_);
lean_dec_ref(v_a_4974_);
lean_dec(v_a_4973_);
lean_dec_ref(v_a_4972_);
return v_res_4977_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(lean_object* v_msg_4985_){
_start:
{
lean_object* v___f_4986_; lean_object* v___f_4987_; lean_object* v___f_4988_; lean_object* v___f_4989_; lean_object* v___f_4990_; lean_object* v___f_4991_; lean_object* v___f_4992_; lean_object* v___x_4993_; lean_object* v___x_4994_; lean_object* v___x_4995_; lean_object* v___x_4996_; lean_object* v___x_4997_; lean_object* v___x_4998_; 
v___f_4986_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0));
v___f_4987_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1));
v___f_4988_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2));
v___f_4989_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3));
v___f_4990_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4));
v___f_4991_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5));
v___f_4992_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6));
v___x_4993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4993_, 0, v___f_4986_);
lean_ctor_set(v___x_4993_, 1, v___f_4987_);
v___x_4994_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4994_, 0, v___x_4993_);
lean_ctor_set(v___x_4994_, 1, v___f_4988_);
lean_ctor_set(v___x_4994_, 2, v___f_4989_);
lean_ctor_set(v___x_4994_, 3, v___f_4990_);
lean_ctor_set(v___x_4994_, 4, v___f_4991_);
v___x_4995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4995_, 0, v___x_4994_);
lean_ctor_set(v___x_4995_, 1, v___f_4992_);
v___x_4996_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_4997_ = l_instInhabitedOfMonad___redArg(v___x_4995_, v___x_4996_);
v___x_4998_ = lean_panic_fn_borrowed(v___x_4997_, v_msg_4985_);
lean_dec(v___x_4997_);
return v___x_4998_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0(lean_object* v_00_u03b1_4999_, lean_object* v_msg_5000_){
_start:
{
lean_object* v___x_5001_; 
v___x_5001_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(v_msg_5000_);
return v___x_5001_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2(void){
_start:
{
lean_object* v___x_5004_; lean_object* v___x_5005_; lean_object* v___x_5006_; lean_object* v___x_5007_; lean_object* v___x_5008_; lean_object* v___x_5009_; 
v___x_5004_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__1));
v___x_5005_ = lean_unsigned_to_nat(8u);
v___x_5006_ = lean_unsigned_to_nat(394u);
v___x_5007_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__0));
v___x_5008_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5009_ = l_mkPanicMessageWithDecl(v___x_5008_, v___x_5007_, v___x_5006_, v___x_5005_, v___x_5004_);
return v___x_5009_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg(lean_object* v_x_5010_, lean_object* v_x_5011_){
_start:
{
if (lean_obj_tag(v_x_5010_) == 0)
{
return v_x_5011_;
}
else
{
lean_object* v_head_5012_; lean_object* v_fst_5013_; 
v_head_5012_ = lean_ctor_get(v_x_5010_, 0);
v_fst_5013_ = lean_ctor_get(v_head_5012_, 0);
if (lean_obj_tag(v_fst_5013_) == 0)
{
lean_object* v_tail_5014_; 
v_tail_5014_ = lean_ctor_get(v_x_5010_, 1);
lean_inc(v_tail_5014_);
lean_dec_ref_known(v_x_5010_, 2);
v_x_5010_ = v_tail_5014_;
goto _start;
}
else
{
lean_object* v_tail_5016_; lean_object* v_snd_5017_; lean_object* v_val_5018_; lean_object* v___x_5019_; uint8_t v___x_5020_; 
lean_inc_ref(v_fst_5013_);
lean_inc(v_head_5012_);
v_tail_5016_ = lean_ctor_get(v_x_5010_, 1);
lean_inc(v_tail_5016_);
lean_dec_ref_known(v_x_5010_, 2);
v_snd_5017_ = lean_ctor_get(v_head_5012_, 1);
lean_inc(v_snd_5017_);
lean_dec(v_head_5012_);
v_val_5018_ = lean_ctor_get(v_fst_5013_, 0);
lean_inc(v_val_5018_);
lean_dec_ref_known(v_fst_5013_, 1);
v___x_5019_ = lean_array_get_size(v_x_5011_);
v___x_5020_ = lean_nat_dec_lt(v_val_5018_, v___x_5019_);
if (v___x_5020_ == 0)
{
lean_object* v___x_5021_; lean_object* v___x_5022_; 
lean_dec(v_val_5018_);
lean_dec(v_snd_5017_);
lean_dec(v_tail_5016_);
lean_dec_ref(v_x_5011_);
v___x_5021_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2);
v___x_5022_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(v___x_5021_);
return v___x_5022_;
}
else
{
lean_object* v___x_5023_; 
v___x_5023_ = lean_array_set(v_x_5011_, v_val_5018_, v_snd_5017_);
lean_dec(v_val_5018_);
v_x_5010_ = v_tail_5016_;
v_x_5011_ = v___x_5023_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go(lean_object* v_00_u03b1_5025_, lean_object* v_x_5026_, lean_object* v_x_5027_){
_start:
{
lean_object* v___x_5028_; 
v___x_5028_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg(v_x_5026_, v_x_5027_);
return v___x_5028_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2(void){
_start:
{
lean_object* v___x_5031_; lean_object* v___x_5032_; lean_object* v___x_5033_; lean_object* v___x_5034_; lean_object* v___x_5035_; lean_object* v___x_5036_; 
v___x_5031_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__1));
v___x_5032_ = lean_unsigned_to_nat(2u);
v___x_5033_ = lean_unsigned_to_nat(384u);
v___x_5034_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__0));
v___x_5035_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5036_ = l_mkPanicMessageWithDecl(v___x_5035_, v___x_5034_, v___x_5033_, v___x_5032_, v___x_5031_);
return v___x_5036_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg(lean_object* v_perm_5039_, lean_object* v_xs_5040_){
_start:
{
lean_object* v___x_5041_; lean_object* v___x_5042_; uint8_t v___x_5043_; 
v___x_5041_ = lean_array_get_size(v_xs_5040_);
v___x_5042_ = lean_array_get_size(v_perm_5039_);
v___x_5043_ = lean_nat_dec_eq(v___x_5041_, v___x_5042_);
if (v___x_5043_ == 0)
{
lean_object* v___x_5044_; lean_object* v___x_5045_; 
v___x_5044_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2, &l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2_once, _init_l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2);
v___x_5045_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(v___x_5044_);
return v___x_5045_;
}
else
{
lean_object* v___x_5046_; uint8_t v___x_5047_; 
v___x_5046_ = lean_unsigned_to_nat(0u);
v___x_5047_ = lean_nat_dec_eq(v___x_5041_, v___x_5046_);
if (v___x_5047_ == 0)
{
lean_object* v_dummy_5048_; lean_object* v___x_5049_; lean_object* v_ys_5050_; lean_object* v___x_5051_; lean_object* v___x_5052_; lean_object* v___x_5053_; 
v_dummy_5048_ = lean_array_fget_borrowed(v_xs_5040_, v___x_5046_);
v___x_5049_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_5039_);
lean_inc(v_dummy_5048_);
v_ys_5050_ = lean_mk_array(v___x_5049_, v_dummy_5048_);
v___x_5051_ = l_Array_zip___redArg(v_perm_5039_, v_xs_5040_);
v___x_5052_ = lean_array_to_list(v___x_5051_);
v___x_5053_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg(v___x_5052_, v_ys_5050_);
return v___x_5053_;
}
else
{
lean_object* v___x_5054_; 
v___x_5054_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3));
return v___x_5054_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___boxed(lean_object* v_perm_5055_, lean_object* v_xs_5056_){
_start:
{
lean_object* v_res_5057_; 
v_res_5057_ = l_Lean_Elab_FixedParamPerm_pickFixed___redArg(v_perm_5055_, v_xs_5056_);
lean_dec_ref(v_xs_5056_);
lean_dec_ref(v_perm_5055_);
return v_res_5057_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed(lean_object* v_00_u03b1_5058_, lean_object* v_perm_5059_, lean_object* v_xs_5060_){
_start:
{
lean_object* v___x_5061_; 
v___x_5061_ = l_Lean_Elab_FixedParamPerm_pickFixed___redArg(v_perm_5059_, v_xs_5060_);
return v___x_5061_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___boxed(lean_object* v_00_u03b1_5062_, lean_object* v_perm_5063_, lean_object* v_xs_5064_){
_start:
{
lean_object* v_res_5065_; 
v_res_5065_ = l_Lean_Elab_FixedParamPerm_pickFixed(v_00_u03b1_5062_, v_perm_5063_, v_xs_5064_);
lean_dec_ref(v_xs_5064_);
lean_dec_ref(v_perm_5063_);
return v_res_5065_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(lean_object* v_xs_5066_, lean_object* v_upperBound_5067_, lean_object* v_perm_5068_, lean_object* v_a_5069_, lean_object* v_b_5070_){
_start:
{
lean_object* v_a_5072_; uint8_t v___x_5079_; 
v___x_5079_ = lean_nat_dec_lt(v_a_5069_, v_upperBound_5067_);
if (v___x_5079_ == 0)
{
lean_dec(v_a_5069_);
return v_b_5070_;
}
else
{
lean_object* v___x_5080_; uint8_t v___x_5081_; 
v___x_5080_ = lean_array_get_size(v_perm_5068_);
v___x_5081_ = lean_nat_dec_lt(v_a_5069_, v___x_5080_);
if (v___x_5081_ == 0)
{
goto v___jp_5076_;
}
else
{
lean_object* v___x_5082_; 
v___x_5082_ = lean_array_fget_borrowed(v_perm_5068_, v_a_5069_);
if (lean_obj_tag(v___x_5082_) == 0)
{
goto v___jp_5076_;
}
else
{
v_a_5072_ = v_b_5070_;
goto v___jp_5071_;
}
}
}
v___jp_5071_:
{
lean_object* v___x_5073_; lean_object* v___x_5074_; 
v___x_5073_ = lean_unsigned_to_nat(1u);
v___x_5074_ = lean_nat_add(v_a_5069_, v___x_5073_);
lean_dec(v_a_5069_);
v_a_5069_ = v___x_5074_;
v_b_5070_ = v_a_5072_;
goto _start;
}
v___jp_5076_:
{
lean_object* v___x_5077_; lean_object* v___x_5078_; 
v___x_5077_ = lean_array_fget_borrowed(v_xs_5066_, v_a_5069_);
lean_inc(v___x_5077_);
v___x_5078_ = lean_array_push(v_b_5070_, v___x_5077_);
v_a_5072_ = v___x_5078_;
goto v___jp_5071_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg___boxed(lean_object* v_xs_5083_, lean_object* v_upperBound_5084_, lean_object* v_perm_5085_, lean_object* v_a_5086_, lean_object* v_b_5087_){
_start:
{
lean_object* v_res_5088_; 
v_res_5088_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(v_xs_5083_, v_upperBound_5084_, v_perm_5085_, v_a_5086_, v_b_5087_);
lean_dec_ref(v_perm_5085_);
lean_dec(v_upperBound_5084_);
lean_dec_ref(v_xs_5083_);
return v_res_5088_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg(lean_object* v_perm_5089_, lean_object* v_xs_5090_){
_start:
{
lean_object* v___x_5091_; lean_object* v___x_5092_; lean_object* v_ys_5093_; lean_object* v___x_5094_; 
v___x_5091_ = lean_array_get_size(v_xs_5090_);
v___x_5092_ = lean_unsigned_to_nat(0u);
v_ys_5093_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3));
v___x_5094_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(v_xs_5090_, v___x_5091_, v_perm_5089_, v___x_5092_, v_ys_5093_);
return v___x_5094_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg___boxed(lean_object* v_perm_5095_, lean_object* v_xs_5096_){
_start:
{
lean_object* v_res_5097_; 
v_res_5097_ = l_Lean_Elab_FixedParamPerm_pickVarying___redArg(v_perm_5095_, v_xs_5096_);
lean_dec_ref(v_xs_5096_);
lean_dec_ref(v_perm_5095_);
return v_res_5097_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying(lean_object* v_00_u03b1_5098_, lean_object* v_perm_5099_, lean_object* v_xs_5100_){
_start:
{
lean_object* v___x_5101_; 
v___x_5101_ = l_Lean_Elab_FixedParamPerm_pickVarying___redArg(v_perm_5099_, v_xs_5100_);
return v___x_5101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___boxed(lean_object* v_00_u03b1_5102_, lean_object* v_perm_5103_, lean_object* v_xs_5104_){
_start:
{
lean_object* v_res_5105_; 
v_res_5105_ = l_Lean_Elab_FixedParamPerm_pickVarying(v_00_u03b1_5102_, v_perm_5103_, v_xs_5104_);
lean_dec_ref(v_xs_5104_);
lean_dec_ref(v_perm_5103_);
return v_res_5105_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0(lean_object* v_00_u03b1_5106_, lean_object* v_xs_5107_, lean_object* v_upperBound_5108_, lean_object* v_perm_5109_, lean_object* v_inst_5110_, lean_object* v_R_5111_, lean_object* v_a_5112_, lean_object* v_b_5113_, lean_object* v_c_5114_){
_start:
{
lean_object* v___x_5115_; 
v___x_5115_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(v_xs_5107_, v_upperBound_5108_, v_perm_5109_, v_a_5112_, v_b_5113_);
return v___x_5115_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___boxed(lean_object* v_00_u03b1_5116_, lean_object* v_xs_5117_, lean_object* v_upperBound_5118_, lean_object* v_perm_5119_, lean_object* v_inst_5120_, lean_object* v_R_5121_, lean_object* v_a_5122_, lean_object* v_b_5123_, lean_object* v_c_5124_){
_start:
{
lean_object* v_res_5125_; 
v_res_5125_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0(v_00_u03b1_5116_, v_xs_5117_, v_upperBound_5118_, v_perm_5119_, v_inst_5120_, v_R_5121_, v_a_5122_, v_b_5123_, v_c_5124_);
lean_dec_ref(v_perm_5119_);
lean_dec(v_upperBound_5118_);
lean_dec_ref(v_xs_5117_);
return v_res_5125_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___redArg(lean_object* v_msg_5126_){
_start:
{
lean_object* v___x_5127_; lean_object* v___x_5128_; 
v___x_5127_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_5128_ = lean_panic_fn_borrowed(v___x_5127_, v_msg_5126_);
return v___x_5128_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0(lean_object* v_00_u03b1_5129_, lean_object* v_msg_5130_){
_start:
{
lean_object* v___x_5131_; 
v___x_5131_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___redArg(v_msg_5130_);
return v___x_5131_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1(lean_object* v_j_5132_, lean_object* v___x_5133_, lean_object* v_i_5134_, lean_object* v___x_5135_, lean_object* v_as_5136_, size_t v_i_5137_, size_t v_stop_5138_){
_start:
{
uint8_t v___y_5140_; uint8_t v___x_5144_; 
v___x_5144_ = lean_usize_dec_eq(v_i_5137_, v_stop_5138_);
if (v___x_5144_ == 0)
{
lean_object* v___x_5145_; 
v___x_5145_ = lean_array_uget_borrowed(v_as_5136_, v_i_5137_);
if (lean_obj_tag(v___x_5145_) == 0)
{
uint8_t v___x_5146_; 
v___x_5146_ = lean_nat_dec_lt(v_j_5132_, v___x_5133_);
v___y_5140_ = v___x_5146_;
goto v___jp_5139_;
}
else
{
uint8_t v___x_5147_; 
v___x_5147_ = lean_nat_dec_lt(v_i_5134_, v___x_5135_);
v___y_5140_ = v___x_5147_;
goto v___jp_5139_;
}
}
else
{
uint8_t v___x_5148_; 
v___x_5148_ = 0;
return v___x_5148_;
}
v___jp_5139_:
{
if (v___y_5140_ == 0)
{
size_t v___x_5141_; size_t v___x_5142_; 
v___x_5141_ = ((size_t)1ULL);
v___x_5142_ = lean_usize_add(v_i_5137_, v___x_5141_);
v_i_5137_ = v___x_5142_;
goto _start;
}
else
{
return v___y_5140_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1___boxed(lean_object* v_j_5149_, lean_object* v___x_5150_, lean_object* v_i_5151_, lean_object* v___x_5152_, lean_object* v_as_5153_, lean_object* v_i_5154_, lean_object* v_stop_5155_){
_start:
{
size_t v_i_boxed_5156_; size_t v_stop_boxed_5157_; uint8_t v_res_5158_; lean_object* v_r_5159_; 
v_i_boxed_5156_ = lean_unbox_usize(v_i_5154_);
lean_dec(v_i_5154_);
v_stop_boxed_5157_ = lean_unbox_usize(v_stop_5155_);
lean_dec(v_stop_5155_);
v_res_5158_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1(v_j_5149_, v___x_5150_, v_i_5151_, v___x_5152_, v_as_5153_, v_i_boxed_5156_, v_stop_boxed_5157_);
lean_dec_ref(v_as_5153_);
lean_dec(v___x_5152_);
lean_dec(v_i_5151_);
lean_dec(v___x_5150_);
lean_dec(v_j_5149_);
v_r_5159_ = lean_box(v_res_5158_);
return v_r_5159_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2(void){
_start:
{
lean_object* v___x_5162_; lean_object* v___x_5163_; lean_object* v___x_5164_; lean_object* v___x_5165_; lean_object* v___x_5166_; lean_object* v___x_5167_; 
v___x_5162_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__1));
v___x_5163_ = lean_unsigned_to_nat(10u);
v___x_5164_ = lean_unsigned_to_nat(425u);
v___x_5165_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0));
v___x_5166_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5167_ = l_mkPanicMessageWithDecl(v___x_5166_, v___x_5165_, v___x_5164_, v___x_5163_, v___x_5162_);
return v___x_5167_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4(void){
_start:
{
lean_object* v___x_5169_; lean_object* v___x_5170_; lean_object* v___x_5171_; lean_object* v___x_5172_; lean_object* v___x_5173_; lean_object* v___x_5174_; 
v___x_5169_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__3));
v___x_5170_ = lean_unsigned_to_nat(12u);
v___x_5171_ = lean_unsigned_to_nat(433u);
v___x_5172_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0));
v___x_5173_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5174_ = l_mkPanicMessageWithDecl(v___x_5173_, v___x_5172_, v___x_5171_, v___x_5170_, v___x_5169_);
return v___x_5174_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(lean_object* v_perm_5175_, lean_object* v_fixedArgs_5176_, lean_object* v_varyingArgs_5177_, lean_object* v_i_5178_, lean_object* v_j_5179_, lean_object* v_xs_5180_){
_start:
{
lean_object* v_lower_5182_; lean_object* v_upper_5183_; lean_object* v___x_5187_; uint8_t v___x_5188_; 
v___x_5187_ = lean_array_get_size(v_perm_5175_);
v___x_5188_ = lean_nat_dec_lt(v_i_5178_, v___x_5187_);
if (v___x_5188_ == 0)
{
lean_object* v___x_5189_; lean_object* v___x_5190_; uint8_t v___x_5191_; 
lean_dec(v_i_5178_);
lean_dec_ref(v_perm_5175_);
v___x_5189_ = lean_unsigned_to_nat(0u);
v___x_5190_ = lean_array_get_size(v_varyingArgs_5177_);
v___x_5191_ = lean_nat_dec_le(v_j_5179_, v___x_5189_);
if (v___x_5191_ == 0)
{
v_lower_5182_ = v_j_5179_;
v_upper_5183_ = v___x_5190_;
goto v___jp_5181_;
}
else
{
lean_dec(v_j_5179_);
v_lower_5182_ = v___x_5189_;
v_upper_5183_ = v___x_5190_;
goto v___jp_5181_;
}
}
else
{
lean_object* v___x_5192_; 
v___x_5192_ = lean_array_fget_borrowed(v_perm_5175_, v_i_5178_);
if (lean_obj_tag(v___x_5192_) == 1)
{
lean_object* v_val_5193_; lean_object* v___x_5194_; uint8_t v___x_5195_; 
v_val_5193_ = lean_ctor_get(v___x_5192_, 0);
v___x_5194_ = lean_array_get_size(v_fixedArgs_5176_);
v___x_5195_ = lean_nat_dec_lt(v_val_5193_, v___x_5194_);
if (v___x_5195_ == 0)
{
lean_object* v___x_5196_; lean_object* v___x_5197_; 
lean_dec_ref(v_xs_5180_);
lean_dec(v_j_5179_);
lean_dec(v_i_5178_);
lean_dec_ref(v_varyingArgs_5177_);
lean_dec_ref(v_perm_5175_);
v___x_5196_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2);
v___x_5197_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___redArg(v___x_5196_);
return v___x_5197_;
}
else
{
lean_object* v___x_5198_; lean_object* v___x_5199_; lean_object* v___x_5200_; lean_object* v___x_5201_; 
v___x_5198_ = lean_unsigned_to_nat(1u);
v___x_5199_ = lean_nat_add(v_i_5178_, v___x_5198_);
lean_dec(v_i_5178_);
v___x_5200_ = lean_array_fget_borrowed(v_fixedArgs_5176_, v_val_5193_);
lean_inc(v___x_5200_);
v___x_5201_ = lean_array_push(v_xs_5180_, v___x_5200_);
v_i_5178_ = v___x_5199_;
v_xs_5180_ = v___x_5201_;
goto _start;
}
}
else
{
lean_object* v___x_5203_; lean_object* v___y_5205_; lean_object* v___y_5206_; lean_object* v___y_5207_; lean_object* v_lower_5215_; lean_object* v_upper_5216_; uint8_t v___x_5224_; 
v___x_5203_ = lean_array_get_size(v_varyingArgs_5177_);
v___x_5224_ = lean_nat_dec_lt(v_j_5179_, v___x_5203_);
if (v___x_5224_ == 0)
{
lean_object* v___x_5225_; uint8_t v___x_5226_; 
lean_dec_ref(v_varyingArgs_5177_);
v___x_5225_ = lean_unsigned_to_nat(0u);
v___x_5226_ = lean_nat_dec_le(v_i_5178_, v___x_5225_);
if (v___x_5226_ == 0)
{
lean_inc(v_i_5178_);
v_lower_5215_ = v_i_5178_;
v_upper_5216_ = v___x_5187_;
goto v___jp_5214_;
}
else
{
v_lower_5215_ = v___x_5225_;
v_upper_5216_ = v___x_5187_;
goto v___jp_5214_;
}
}
else
{
lean_object* v___x_5227_; lean_object* v___x_5228_; lean_object* v___x_5229_; lean_object* v___x_5230_; lean_object* v___x_5231_; 
v___x_5227_ = lean_unsigned_to_nat(1u);
v___x_5228_ = lean_nat_add(v_i_5178_, v___x_5227_);
lean_dec(v_i_5178_);
v___x_5229_ = lean_nat_add(v_j_5179_, v___x_5227_);
v___x_5230_ = lean_array_fget_borrowed(v_varyingArgs_5177_, v_j_5179_);
lean_dec(v_j_5179_);
lean_inc(v___x_5230_);
v___x_5231_ = lean_array_push(v_xs_5180_, v___x_5230_);
v_i_5178_ = v___x_5228_;
v_j_5179_ = v___x_5229_;
v_xs_5180_ = v___x_5231_;
goto _start;
}
v___jp_5204_:
{
uint8_t v___x_5208_; 
v___x_5208_ = lean_nat_dec_lt(v___y_5205_, v___y_5207_);
if (v___x_5208_ == 0)
{
lean_dec(v___y_5207_);
lean_dec_ref(v___y_5206_);
lean_dec(v___y_5205_);
lean_dec(v_j_5179_);
lean_dec(v_i_5178_);
return v_xs_5180_;
}
else
{
size_t v___x_5209_; size_t v___x_5210_; uint8_t v___x_5211_; 
v___x_5209_ = lean_usize_of_nat(v___y_5205_);
lean_dec(v___y_5205_);
v___x_5210_ = lean_usize_of_nat(v___y_5207_);
lean_dec(v___y_5207_);
v___x_5211_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1(v_j_5179_, v___x_5203_, v_i_5178_, v___x_5187_, v___y_5206_, v___x_5209_, v___x_5210_);
lean_dec_ref(v___y_5206_);
lean_dec(v_i_5178_);
lean_dec(v_j_5179_);
if (v___x_5211_ == 0)
{
return v_xs_5180_;
}
else
{
lean_object* v___x_5212_; lean_object* v___x_5213_; 
lean_dec_ref(v_xs_5180_);
v___x_5212_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4);
v___x_5213_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___redArg(v___x_5212_);
return v___x_5213_;
}
}
}
v___jp_5214_:
{
lean_object* v___x_5217_; lean_object* v_array_5218_; lean_object* v_start_5219_; lean_object* v_stop_5220_; uint8_t v___x_5221_; 
v___x_5217_ = l_Array_toSubarray___redArg(v_perm_5175_, v_lower_5215_, v_upper_5216_);
v_array_5218_ = lean_ctor_get(v___x_5217_, 0);
lean_inc_ref(v_array_5218_);
v_start_5219_ = lean_ctor_get(v___x_5217_, 1);
lean_inc(v_start_5219_);
v_stop_5220_ = lean_ctor_get(v___x_5217_, 2);
lean_inc(v_stop_5220_);
lean_dec_ref(v___x_5217_);
v___x_5221_ = lean_nat_dec_lt(v_start_5219_, v_stop_5220_);
if (v___x_5221_ == 0)
{
lean_dec(v_stop_5220_);
lean_dec(v_start_5219_);
lean_dec_ref(v_array_5218_);
lean_dec(v_j_5179_);
lean_dec(v_i_5178_);
return v_xs_5180_;
}
else
{
lean_object* v___x_5222_; uint8_t v___x_5223_; 
v___x_5222_ = lean_array_get_size(v_array_5218_);
v___x_5223_ = lean_nat_dec_le(v_stop_5220_, v___x_5222_);
if (v___x_5223_ == 0)
{
lean_dec(v_stop_5220_);
v___y_5205_ = v_start_5219_;
v___y_5206_ = v_array_5218_;
v___y_5207_ = v___x_5222_;
goto v___jp_5204_;
}
else
{
v___y_5205_ = v_start_5219_;
v___y_5206_ = v_array_5218_;
v___y_5207_ = v_stop_5220_;
goto v___jp_5204_;
}
}
}
}
}
v___jp_5181_:
{
lean_object* v___x_5184_; lean_object* v___x_5185_; lean_object* v___x_5186_; 
v___x_5184_ = l_Array_toSubarray___redArg(v_varyingArgs_5177_, v_lower_5182_, v_upper_5183_);
v___x_5185_ = l_Subarray_copy___redArg(v___x_5184_);
v___x_5186_ = l_Array_append___redArg(v_xs_5180_, v___x_5185_);
lean_dec_ref(v___x_5185_);
return v___x_5186_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___boxed(lean_object* v_perm_5233_, lean_object* v_fixedArgs_5234_, lean_object* v_varyingArgs_5235_, lean_object* v_i_5236_, lean_object* v_j_5237_, lean_object* v_xs_5238_){
_start:
{
lean_object* v_res_5239_; 
v_res_5239_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(v_perm_5233_, v_fixedArgs_5234_, v_varyingArgs_5235_, v_i_5236_, v_j_5237_, v_xs_5238_);
lean_dec_ref(v_fixedArgs_5234_);
return v_res_5239_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go(lean_object* v_00_u03b1_5240_, lean_object* v_perm_5241_, lean_object* v_fixedArgs_5242_, lean_object* v_varyingArgs_5243_, lean_object* v_i_5244_, lean_object* v_j_5245_, lean_object* v_xs_5246_){
_start:
{
lean_object* v___x_5247_; 
v___x_5247_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(v_perm_5241_, v_fixedArgs_5242_, v_varyingArgs_5243_, v_i_5244_, v_j_5245_, v_xs_5246_);
return v___x_5247_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___boxed(lean_object* v_00_u03b1_5248_, lean_object* v_perm_5249_, lean_object* v_fixedArgs_5250_, lean_object* v_varyingArgs_5251_, lean_object* v_i_5252_, lean_object* v_j_5253_, lean_object* v_xs_5254_){
_start:
{
lean_object* v_res_5255_; 
v_res_5255_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go(v_00_u03b1_5248_, v_perm_5249_, v_fixedArgs_5250_, v_varyingArgs_5251_, v_i_5252_, v_j_5253_, v_xs_5254_);
lean_dec_ref(v_fixedArgs_5250_);
return v_res_5255_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2(void){
_start:
{
lean_object* v___x_5258_; lean_object* v___x_5259_; lean_object* v___x_5260_; lean_object* v___x_5261_; lean_object* v___x_5262_; lean_object* v___x_5263_; 
v___x_5258_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__1));
v___x_5259_ = lean_unsigned_to_nat(2u);
v___x_5260_ = lean_unsigned_to_nat(416u);
v___x_5261_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__0));
v___x_5262_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5263_ = l_mkPanicMessageWithDecl(v___x_5262_, v___x_5261_, v___x_5260_, v___x_5259_, v___x_5258_);
return v___x_5263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg(lean_object* v_perm_5264_, lean_object* v_fixedArgs_5265_, lean_object* v_varyingArgs_5266_){
_start:
{
lean_object* v___x_5267_; lean_object* v___x_5268_; uint8_t v___x_5269_; 
v___x_5267_ = lean_array_get_size(v_fixedArgs_5265_);
v___x_5268_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_5264_);
v___x_5269_ = lean_nat_dec_eq(v___x_5267_, v___x_5268_);
lean_dec(v___x_5268_);
if (v___x_5269_ == 0)
{
lean_object* v___x_5270_; lean_object* v___x_5271_; 
lean_dec_ref(v_varyingArgs_5266_);
lean_dec_ref(v_perm_5264_);
v___x_5270_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2, &l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2_once, _init_l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2);
v___x_5271_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___redArg(v___x_5270_);
return v___x_5271_;
}
else
{
lean_object* v___x_5272_; lean_object* v___x_5273_; lean_object* v___x_5274_; 
v___x_5272_ = lean_unsigned_to_nat(0u);
v___x_5273_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3));
v___x_5274_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(v_perm_5264_, v_fixedArgs_5265_, v_varyingArgs_5266_, v___x_5272_, v___x_5272_, v___x_5273_);
return v___x_5274_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg___boxed(lean_object* v_perm_5275_, lean_object* v_fixedArgs_5276_, lean_object* v_varyingArgs_5277_){
_start:
{
lean_object* v_res_5278_; 
v_res_5278_ = l_Lean_Elab_FixedParamPerm_buildArgs___redArg(v_perm_5275_, v_fixedArgs_5276_, v_varyingArgs_5277_);
lean_dec_ref(v_fixedArgs_5276_);
return v_res_5278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs(lean_object* v_00_u03b1_5279_, lean_object* v_perm_5280_, lean_object* v_fixedArgs_5281_, lean_object* v_varyingArgs_5282_){
_start:
{
lean_object* v___x_5283_; 
v___x_5283_ = l_Lean_Elab_FixedParamPerm_buildArgs___redArg(v_perm_5280_, v_fixedArgs_5281_, v_varyingArgs_5282_);
return v___x_5283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___boxed(lean_object* v_00_u03b1_5284_, lean_object* v_perm_5285_, lean_object* v_fixedArgs_5286_, lean_object* v_varyingArgs_5287_){
_start:
{
lean_object* v_res_5288_; 
v_res_5288_ = l_Lean_Elab_FixedParamPerm_buildArgs(v_00_u03b1_5284_, v_perm_5285_, v_fixedArgs_5286_, v_varyingArgs_5287_);
lean_dec_ref(v_fixedArgs_5286_);
return v_res_5288_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1(lean_object* v_x_5289_, lean_object* v_x_5290_){
_start:
{
if (lean_obj_tag(v_x_5289_) == 0)
{
if (lean_obj_tag(v_x_5290_) == 0)
{
uint8_t v___x_5291_; 
v___x_5291_ = 1;
return v___x_5291_;
}
else
{
uint8_t v___x_5292_; 
v___x_5292_ = 0;
return v___x_5292_;
}
}
else
{
if (lean_obj_tag(v_x_5290_) == 0)
{
uint8_t v___x_5293_; 
v___x_5293_ = 0;
return v___x_5293_;
}
else
{
lean_object* v_val_5294_; lean_object* v_val_5295_; uint8_t v___x_5296_; 
v_val_5294_ = lean_ctor_get(v_x_5289_, 0);
v_val_5295_ = lean_ctor_get(v_x_5290_, 0);
v___x_5296_ = lean_nat_dec_eq(v_val_5294_, v_val_5295_);
return v___x_5296_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1___boxed(lean_object* v_x_5297_, lean_object* v_x_5298_){
_start:
{
uint8_t v_res_5299_; lean_object* v_r_5300_; 
v_res_5299_ = l_instBEqOption_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1(v_x_5297_, v_x_5298_);
lean_dec(v_x_5298_);
lean_dec(v_x_5297_);
v_r_5300_ = lean_box(v_res_5299_);
return v_r_5300_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(lean_object* v_xs_5301_, lean_object* v_ys_5302_, lean_object* v_x_5303_){
_start:
{
lean_object* v_zero_5304_; uint8_t v_isZero_5305_; 
v_zero_5304_ = lean_unsigned_to_nat(0u);
v_isZero_5305_ = lean_nat_dec_eq(v_x_5303_, v_zero_5304_);
if (v_isZero_5305_ == 1)
{
lean_dec(v_x_5303_);
return v_isZero_5305_;
}
else
{
lean_object* v_one_5306_; lean_object* v_n_5307_; lean_object* v___x_5308_; lean_object* v___x_5309_; uint8_t v___x_5310_; 
v_one_5306_ = lean_unsigned_to_nat(1u);
v_n_5307_ = lean_nat_sub(v_x_5303_, v_one_5306_);
lean_dec(v_x_5303_);
v___x_5308_ = lean_array_fget_borrowed(v_xs_5301_, v_n_5307_);
v___x_5309_ = lean_array_fget_borrowed(v_ys_5302_, v_n_5307_);
v___x_5310_ = l_instBEqOption_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1(v___x_5308_, v___x_5309_);
if (v___x_5310_ == 0)
{
lean_dec(v_n_5307_);
return v___x_5310_;
}
else
{
v_x_5303_ = v_n_5307_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg___boxed(lean_object* v_xs_5312_, lean_object* v_ys_5313_, lean_object* v_x_5314_){
_start:
{
uint8_t v_res_5315_; lean_object* v_r_5316_; 
v_res_5315_ = l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(v_xs_5312_, v_ys_5313_, v_x_5314_);
lean_dec_ref(v_ys_5313_);
lean_dec_ref(v_xs_5312_);
v_r_5316_ = lean_box(v_res_5315_);
return v_r_5316_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0(size_t v_sz_5317_, size_t v_i_5318_, lean_object* v_bs_5319_){
_start:
{
uint8_t v___x_5320_; 
v___x_5320_ = lean_usize_dec_lt(v_i_5318_, v_sz_5317_);
if (v___x_5320_ == 0)
{
return v_bs_5319_;
}
else
{
lean_object* v_v_5321_; lean_object* v___x_5322_; lean_object* v_bs_x27_5323_; lean_object* v___x_5324_; size_t v___x_5325_; size_t v___x_5326_; lean_object* v___x_5327_; 
v_v_5321_ = lean_array_uget(v_bs_5319_, v_i_5318_);
v___x_5322_ = lean_unsigned_to_nat(0u);
v_bs_x27_5323_ = lean_array_uset(v_bs_5319_, v_i_5318_, v___x_5322_);
v___x_5324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5324_, 0, v_v_5321_);
v___x_5325_ = ((size_t)1ULL);
v___x_5326_ = lean_usize_add(v_i_5318_, v___x_5325_);
v___x_5327_ = lean_array_uset(v_bs_x27_5323_, v_i_5318_, v___x_5324_);
v_i_5318_ = v___x_5326_;
v_bs_5319_ = v___x_5327_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0___boxed(lean_object* v_sz_5329_, lean_object* v_i_5330_, lean_object* v_bs_5331_){
_start:
{
size_t v_sz_boxed_5332_; size_t v_i_boxed_5333_; lean_object* v_res_5334_; 
v_sz_boxed_5332_ = lean_unbox_usize(v_sz_5329_);
lean_dec(v_sz_5329_);
v_i_boxed_5333_ = lean_unbox_usize(v_i_5330_);
lean_dec(v_i_5330_);
v_res_5334_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0(v_sz_boxed_5332_, v_i_boxed_5333_, v_bs_5331_);
return v_res_5334_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3(lean_object* v_fixedParamPerms_5335_, lean_object* v_as_5336_, size_t v_i_5337_, size_t v_stop_5338_){
_start:
{
uint8_t v___x_5339_; 
v___x_5339_ = lean_usize_dec_eq(v_i_5337_, v_stop_5338_);
if (v___x_5339_ == 0)
{
lean_object* v_numFixed_5340_; lean_object* v___x_5341_; lean_object* v___x_5342_; size_t v_sz_5343_; size_t v___x_5344_; lean_object* v___x_5345_; lean_object* v___x_5346_; lean_object* v___x_5347_; lean_object* v___x_5348_; lean_object* v___x_5349_; lean_object* v___x_5350_; lean_object* v___x_5351_; uint8_t v___x_5352_; 
v_numFixed_5340_ = lean_ctor_get(v_fixedParamPerms_5335_, 0);
v___x_5341_ = lean_array_uget_borrowed(v_as_5336_, v_i_5337_);
lean_inc(v_numFixed_5340_);
v___x_5342_ = l_Array_range(v_numFixed_5340_);
v_sz_5343_ = lean_array_size(v___x_5342_);
v___x_5344_ = ((size_t)0ULL);
v___x_5345_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0(v_sz_5343_, v___x_5344_, v___x_5342_);
v___x_5346_ = lean_array_get_size(v___x_5341_);
v___x_5347_ = lean_nat_sub(v___x_5346_, v_numFixed_5340_);
v___x_5348_ = lean_box(0);
v___x_5349_ = lean_mk_array(v___x_5347_, v___x_5348_);
v___x_5350_ = l_Array_append___redArg(v___x_5345_, v___x_5349_);
lean_dec_ref(v___x_5349_);
v___x_5351_ = lean_array_get_size(v___x_5350_);
v___x_5352_ = lean_nat_dec_eq(v___x_5346_, v___x_5351_);
if (v___x_5352_ == 0)
{
uint8_t v___x_5353_; 
lean_dec_ref(v___x_5350_);
lean_dec_ref(v_fixedParamPerms_5335_);
v___x_5353_ = 1;
return v___x_5353_;
}
else
{
uint8_t v___x_5354_; 
v___x_5354_ = l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(v___x_5341_, v___x_5350_, v___x_5346_);
lean_dec_ref(v___x_5350_);
if (v___x_5354_ == 0)
{
lean_dec_ref(v_fixedParamPerms_5335_);
return v___x_5352_;
}
else
{
size_t v___x_5355_; size_t v___x_5356_; 
v___x_5355_ = ((size_t)1ULL);
v___x_5356_ = lean_usize_add(v_i_5337_, v___x_5355_);
v_i_5337_ = v___x_5356_;
goto _start;
}
}
}
else
{
uint8_t v___x_5358_; 
lean_dec_ref(v_fixedParamPerms_5335_);
v___x_5358_ = 0;
return v___x_5358_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3___boxed(lean_object* v_fixedParamPerms_5359_, lean_object* v_as_5360_, lean_object* v_i_5361_, lean_object* v_stop_5362_){
_start:
{
size_t v_i_boxed_5363_; size_t v_stop_boxed_5364_; uint8_t v_res_5365_; lean_object* v_r_5366_; 
v_i_boxed_5363_ = lean_unbox_usize(v_i_5361_);
lean_dec(v_i_5361_);
v_stop_boxed_5364_ = lean_unbox_usize(v_stop_5362_);
lean_dec(v_stop_5362_);
v_res_5365_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3(v_fixedParamPerms_5359_, v_as_5360_, v_i_boxed_5363_, v_stop_boxed_5364_);
lean_dec_ref(v_as_5360_);
v_r_5366_ = lean_box(v_res_5365_);
return v_r_5366_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParamPerms_fixedArePrefix(lean_object* v_fixedParamPerms_5367_){
_start:
{
lean_object* v_perms_5368_; lean_object* v___x_5369_; lean_object* v___x_5370_; uint8_t v___x_5371_; 
v_perms_5368_ = lean_ctor_get(v_fixedParamPerms_5367_, 1);
lean_inc_ref(v_perms_5368_);
v___x_5369_ = lean_unsigned_to_nat(0u);
v___x_5370_ = lean_array_get_size(v_perms_5368_);
v___x_5371_ = lean_nat_dec_lt(v___x_5369_, v___x_5370_);
if (v___x_5371_ == 0)
{
uint8_t v___x_5372_; 
lean_dec_ref(v_perms_5368_);
lean_dec_ref(v_fixedParamPerms_5367_);
v___x_5372_ = 1;
return v___x_5372_;
}
else
{
if (v___x_5371_ == 0)
{
lean_dec_ref(v_perms_5368_);
lean_dec_ref(v_fixedParamPerms_5367_);
return v___x_5371_;
}
else
{
size_t v___x_5373_; size_t v___x_5374_; uint8_t v___x_5375_; 
v___x_5373_ = ((size_t)0ULL);
v___x_5374_ = lean_usize_of_nat(v___x_5370_);
v___x_5375_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3(v_fixedParamPerms_5367_, v_perms_5368_, v___x_5373_, v___x_5374_);
lean_dec_ref(v_perms_5368_);
if (v___x_5375_ == 0)
{
return v___x_5371_;
}
else
{
uint8_t v___x_5376_; 
v___x_5376_ = 0;
return v___x_5376_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerms_fixedArePrefix___boxed(lean_object* v_fixedParamPerms_5377_){
_start:
{
uint8_t v_res_5378_; lean_object* v_r_5379_; 
v_res_5378_ = l_Lean_Elab_FixedParamPerms_fixedArePrefix(v_fixedParamPerms_5377_);
v_r_5379_ = lean_box(v_res_5378_);
return v_r_5379_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2(lean_object* v_xs_5380_, lean_object* v_ys_5381_, lean_object* v_hsz_5382_, lean_object* v_x_5383_, lean_object* v_x_5384_){
_start:
{
uint8_t v___x_5385_; 
v___x_5385_ = l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(v_xs_5380_, v_ys_5381_, v_x_5383_);
return v___x_5385_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___boxed(lean_object* v_xs_5386_, lean_object* v_ys_5387_, lean_object* v_hsz_5388_, lean_object* v_x_5389_, lean_object* v_x_5390_){
_start:
{
uint8_t v_res_5391_; lean_object* v_r_5392_; 
v_res_5391_ = l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2(v_xs_5386_, v_ys_5387_, v_hsz_5388_, v_x_5389_, v_x_5390_);
lean_dec_ref(v_ys_5387_);
lean_dec_ref(v_xs_5386_);
v_r_5392_ = lean_box(v_res_5391_);
return v_r_5392_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0(void){
_start:
{
lean_object* v___x_5393_; lean_object* v___x_5394_; 
v___x_5393_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_5394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5394_, 0, v___x_5393_);
lean_ctor_set(v___x_5394_, 1, v___x_5393_);
return v___x_5394_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(lean_object* v_msg_5395_){
_start:
{
lean_object* v___f_5396_; lean_object* v___f_5397_; lean_object* v___f_5398_; lean_object* v___f_5399_; lean_object* v___f_5400_; lean_object* v___f_5401_; lean_object* v___f_5402_; lean_object* v___x_5403_; lean_object* v___x_5404_; lean_object* v___x_5405_; lean_object* v___x_5406_; lean_object* v___x_5407_; lean_object* v___x_5408_; lean_object* v___x_5409_; lean_object* v___x_5410_; 
v___f_5396_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0));
v___f_5397_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1));
v___f_5398_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2));
v___f_5399_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3));
v___f_5400_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4));
v___f_5401_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5));
v___f_5402_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6));
v___x_5403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5403_, 0, v___f_5396_);
lean_ctor_set(v___x_5403_, 1, v___f_5397_);
v___x_5404_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5404_, 0, v___x_5403_);
lean_ctor_set(v___x_5404_, 1, v___f_5398_);
lean_ctor_set(v___x_5404_, 2, v___f_5399_);
lean_ctor_set(v___x_5404_, 3, v___f_5400_);
lean_ctor_set(v___x_5404_, 4, v___f_5401_);
v___x_5405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5405_, 0, v___x_5404_);
lean_ctor_set(v___x_5405_, 1, v___f_5402_);
v___x_5406_ = ((lean_object*)(l_Lean_Elab_instInhabitedFixedParamPerms_default));
v___x_5407_ = lean_obj_once(&l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0, &l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0_once, _init_l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0);
v___x_5408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5408_, 0, v___x_5406_);
lean_ctor_set(v___x_5408_, 1, v___x_5407_);
v___x_5409_ = l_instInhabitedOfMonad___redArg(v___x_5405_, v___x_5408_);
v___x_5410_ = lean_panic_fn_borrowed(v___x_5409_, v_msg_5395_);
lean_dec(v___x_5409_);
return v___x_5410_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0(void){
_start:
{
lean_object* v___x_5411_; lean_object* v___x_5412_; 
v___x_5411_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_5412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5412_, 0, v___x_5411_);
return v___x_5412_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3(lean_object* v_msg_5413_){
_start:
{
lean_object* v___f_5414_; lean_object* v___f_5415_; lean_object* v___f_5416_; lean_object* v___f_5417_; lean_object* v___f_5418_; lean_object* v___f_5419_; lean_object* v___f_5420_; lean_object* v___x_5421_; lean_object* v___x_5422_; lean_object* v___x_5423_; lean_object* v___x_5424_; lean_object* v___x_5425_; lean_object* v___x_5426_; 
v___f_5414_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0));
v___f_5415_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1));
v___f_5416_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2));
v___f_5417_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3));
v___f_5418_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4));
v___f_5419_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5));
v___f_5420_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6));
v___x_5421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5421_, 0, v___f_5414_);
lean_ctor_set(v___x_5421_, 1, v___f_5415_);
v___x_5422_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5422_, 0, v___x_5421_);
lean_ctor_set(v___x_5422_, 1, v___f_5416_);
lean_ctor_set(v___x_5422_, 2, v___f_5417_);
lean_ctor_set(v___x_5422_, 3, v___f_5418_);
lean_ctor_set(v___x_5422_, 4, v___f_5419_);
v___x_5423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5423_, 0, v___x_5422_);
lean_ctor_set(v___x_5423_, 1, v___f_5420_);
v___x_5424_ = lean_obj_once(&l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0, &l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0_once, _init_l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0);
v___x_5425_ = l_instInhabitedOfMonad___redArg(v___x_5423_, v___x_5424_);
v___x_5426_ = lean_panic_fn_borrowed(v___x_5425_, v_msg_5413_);
lean_dec(v___x_5425_);
return v___x_5426_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5(lean_object* v___x_5427_, lean_object* v___x_5428_, lean_object* v___x_5429_, lean_object* v_as_5430_, size_t v_sz_5431_, size_t v_i_5432_, lean_object* v_b_5433_){
_start:
{
lean_object* v_a_5435_; uint8_t v___x_5439_; 
v___x_5439_ = lean_usize_dec_lt(v_i_5432_, v_sz_5431_);
if (v___x_5439_ == 0)
{
return v_b_5433_;
}
else
{
lean_object* v_fst_5440_; lean_object* v_snd_5441_; lean_object* v___x_5443_; uint8_t v_isShared_5444_; uint8_t v_isSharedCheck_5466_; 
v_fst_5440_ = lean_ctor_get(v_b_5433_, 0);
v_snd_5441_ = lean_ctor_get(v_b_5433_, 1);
v_isSharedCheck_5466_ = !lean_is_exclusive(v_b_5433_);
if (v_isSharedCheck_5466_ == 0)
{
v___x_5443_ = v_b_5433_;
v_isShared_5444_ = v_isSharedCheck_5466_;
goto v_resetjp_5442_;
}
else
{
lean_inc(v_snd_5441_);
lean_inc(v_fst_5440_);
lean_dec(v_b_5433_);
v___x_5443_ = lean_box(0);
v_isShared_5444_ = v_isSharedCheck_5466_;
goto v_resetjp_5442_;
}
v_resetjp_5442_:
{
lean_object* v___x_5445_; lean_object* v_a_5446_; lean_object* v___x_5447_; 
v___x_5445_ = lean_box(0);
v_a_5446_ = lean_array_uget_borrowed(v_as_5430_, v_i_5432_);
v___x_5447_ = lean_array_get_borrowed(v___x_5445_, v___x_5427_, v_a_5446_);
if (lean_obj_tag(v___x_5447_) == 1)
{
lean_object* v_val_5448_; uint8_t v___x_5449_; lean_object* v___x_5450_; lean_object* v___x_5451_; uint8_t v___x_5452_; 
v_val_5448_ = lean_ctor_get(v___x_5447_, 0);
v___x_5449_ = 0;
v___x_5450_ = lean_box(v___x_5449_);
v___x_5451_ = lean_array_get(v___x_5450_, v_fst_5440_, v_val_5448_);
lean_dec(v___x_5450_);
v___x_5452_ = lean_unbox(v___x_5451_);
lean_dec(v___x_5451_);
if (v___x_5452_ == 0)
{
uint8_t v___x_5453_; lean_object* v___x_5454_; lean_object* v___x_5455_; lean_object* v___x_5456_; lean_object* v___x_5458_; 
lean_dec(v_snd_5441_);
v___x_5453_ = lean_nat_dec_eq(v___x_5428_, v___x_5429_);
v___x_5454_ = lean_box(v___x_5453_);
v___x_5455_ = lean_array_set(v_fst_5440_, v_val_5448_, v___x_5454_);
v___x_5456_ = lean_box(v___x_5453_);
if (v_isShared_5444_ == 0)
{
lean_ctor_set(v___x_5443_, 1, v___x_5456_);
lean_ctor_set(v___x_5443_, 0, v___x_5455_);
v___x_5458_ = v___x_5443_;
goto v_reusejp_5457_;
}
else
{
lean_object* v_reuseFailAlloc_5459_; 
v_reuseFailAlloc_5459_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5459_, 0, v___x_5455_);
lean_ctor_set(v_reuseFailAlloc_5459_, 1, v___x_5456_);
v___x_5458_ = v_reuseFailAlloc_5459_;
goto v_reusejp_5457_;
}
v_reusejp_5457_:
{
v_a_5435_ = v___x_5458_;
goto v___jp_5434_;
}
}
else
{
lean_object* v___x_5461_; 
if (v_isShared_5444_ == 0)
{
v___x_5461_ = v___x_5443_;
goto v_reusejp_5460_;
}
else
{
lean_object* v_reuseFailAlloc_5462_; 
v_reuseFailAlloc_5462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5462_, 0, v_fst_5440_);
lean_ctor_set(v_reuseFailAlloc_5462_, 1, v_snd_5441_);
v___x_5461_ = v_reuseFailAlloc_5462_;
goto v_reusejp_5460_;
}
v_reusejp_5460_:
{
v_a_5435_ = v___x_5461_;
goto v___jp_5434_;
}
}
}
else
{
lean_object* v___x_5464_; 
if (v_isShared_5444_ == 0)
{
v___x_5464_ = v___x_5443_;
goto v_reusejp_5463_;
}
else
{
lean_object* v_reuseFailAlloc_5465_; 
v_reuseFailAlloc_5465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5465_, 0, v_fst_5440_);
lean_ctor_set(v_reuseFailAlloc_5465_, 1, v_snd_5441_);
v___x_5464_ = v_reuseFailAlloc_5465_;
goto v_reusejp_5463_;
}
v_reusejp_5463_:
{
v_a_5435_ = v___x_5464_;
goto v___jp_5434_;
}
}
}
}
v___jp_5434_:
{
size_t v___x_5436_; size_t v___x_5437_; 
v___x_5436_ = ((size_t)1ULL);
v___x_5437_ = lean_usize_add(v_i_5432_, v___x_5436_);
v_i_5432_ = v___x_5437_;
v_b_5433_ = v_a_5435_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5___boxed(lean_object* v___x_5467_, lean_object* v___x_5468_, lean_object* v___x_5469_, lean_object* v_as_5470_, lean_object* v_sz_5471_, lean_object* v_i_5472_, lean_object* v_b_5473_){
_start:
{
size_t v_sz_boxed_5474_; size_t v_i_boxed_5475_; lean_object* v_res_5476_; 
v_sz_boxed_5474_ = lean_unbox_usize(v_sz_5471_);
lean_dec(v_sz_5471_);
v_i_boxed_5475_ = lean_unbox_usize(v_i_5472_);
lean_dec(v_i_5472_);
v_res_5476_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5(v___x_5467_, v___x_5468_, v___x_5469_, v_as_5470_, v_sz_boxed_5474_, v_i_boxed_5475_, v_b_5473_);
lean_dec_ref(v_as_5470_);
lean_dec(v___x_5469_);
lean_dec(v___x_5468_);
lean_dec_ref(v___x_5467_);
return v_res_5476_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(lean_object* v_upperBound_5477_, lean_object* v___x_5478_, lean_object* v_fixedParamPerms_5479_, lean_object* v_next_5480_, lean_object* v___x_5481_, lean_object* v___x_5482_, lean_object* v_a_5483_, lean_object* v_b_5484_){
_start:
{
lean_object* v_a_5486_; uint8_t v___x_5490_; 
v___x_5490_ = lean_nat_dec_lt(v_a_5483_, v_upperBound_5477_);
if (v___x_5490_ == 0)
{
lean_dec(v_a_5483_);
return v_b_5484_;
}
else
{
lean_object* v_fst_5491_; lean_object* v_snd_5492_; lean_object* v___x_5494_; uint8_t v_isShared_5495_; uint8_t v_isSharedCheck_5527_; 
v_fst_5491_ = lean_ctor_get(v_b_5484_, 0);
v_snd_5492_ = lean_ctor_get(v_b_5484_, 1);
v_isSharedCheck_5527_ = !lean_is_exclusive(v_b_5484_);
if (v_isSharedCheck_5527_ == 0)
{
v___x_5494_ = v_b_5484_;
v_isShared_5495_ = v_isSharedCheck_5527_;
goto v_resetjp_5493_;
}
else
{
lean_inc(v_snd_5492_);
lean_inc(v_fst_5491_);
lean_dec(v_b_5484_);
v___x_5494_ = lean_box(0);
v_isShared_5495_ = v_isSharedCheck_5527_;
goto v_resetjp_5493_;
}
v_resetjp_5493_:
{
lean_object* v___x_5496_; 
v___x_5496_ = lean_array_fget_borrowed(v___x_5478_, v_a_5483_);
if (lean_obj_tag(v___x_5496_) == 1)
{
lean_object* v_val_5497_; uint8_t v___x_5498_; lean_object* v___x_5499_; lean_object* v___x_5500_; uint8_t v___x_5501_; 
v_val_5497_ = lean_ctor_get(v___x_5496_, 0);
v___x_5498_ = 0;
v___x_5499_ = lean_box(v___x_5498_);
v___x_5500_ = lean_array_get(v___x_5499_, v_fst_5491_, v_val_5497_);
lean_dec(v___x_5499_);
v___x_5501_ = lean_unbox(v___x_5500_);
lean_dec(v___x_5500_);
if (v___x_5501_ == 0)
{
lean_object* v___x_5503_; 
if (v_isShared_5495_ == 0)
{
v___x_5503_ = v___x_5494_;
goto v_reusejp_5502_;
}
else
{
lean_object* v_reuseFailAlloc_5504_; 
v_reuseFailAlloc_5504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5504_, 0, v_fst_5491_);
lean_ctor_set(v_reuseFailAlloc_5504_, 1, v_snd_5492_);
v___x_5503_ = v_reuseFailAlloc_5504_;
goto v_reusejp_5502_;
}
v_reusejp_5502_:
{
v_a_5486_ = v___x_5503_;
goto v___jp_5485_;
}
}
else
{
lean_object* v_revDeps_5505_; lean_object* v___x_5506_; lean_object* v___x_5507_; lean_object* v___x_5508_; lean_object* v___x_5510_; 
v_revDeps_5505_ = lean_ctor_get(v_fixedParamPerms_5479_, 2);
v___x_5506_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_5507_ = lean_array_get_borrowed(v___x_5506_, v_revDeps_5505_, v_next_5480_);
v___x_5508_ = lean_array_get_borrowed(v___x_5506_, v___x_5507_, v_a_5483_);
if (v_isShared_5495_ == 0)
{
v___x_5510_ = v___x_5494_;
goto v_reusejp_5509_;
}
else
{
lean_object* v_reuseFailAlloc_5523_; 
v_reuseFailAlloc_5523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5523_, 0, v_fst_5491_);
lean_ctor_set(v_reuseFailAlloc_5523_, 1, v_snd_5492_);
v___x_5510_ = v_reuseFailAlloc_5523_;
goto v_reusejp_5509_;
}
v_reusejp_5509_:
{
size_t v_sz_5511_; size_t v___x_5512_; lean_object* v___x_5513_; lean_object* v_fst_5514_; lean_object* v_snd_5515_; lean_object* v___x_5517_; uint8_t v_isShared_5518_; uint8_t v_isSharedCheck_5522_; 
v_sz_5511_ = lean_array_size(v___x_5508_);
v___x_5512_ = ((size_t)0ULL);
v___x_5513_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5(v___x_5478_, v___x_5481_, v___x_5482_, v___x_5508_, v_sz_5511_, v___x_5512_, v___x_5510_);
v_fst_5514_ = lean_ctor_get(v___x_5513_, 0);
v_snd_5515_ = lean_ctor_get(v___x_5513_, 1);
v_isSharedCheck_5522_ = !lean_is_exclusive(v___x_5513_);
if (v_isSharedCheck_5522_ == 0)
{
v___x_5517_ = v___x_5513_;
v_isShared_5518_ = v_isSharedCheck_5522_;
goto v_resetjp_5516_;
}
else
{
lean_inc(v_snd_5515_);
lean_inc(v_fst_5514_);
lean_dec(v___x_5513_);
v___x_5517_ = lean_box(0);
v_isShared_5518_ = v_isSharedCheck_5522_;
goto v_resetjp_5516_;
}
v_resetjp_5516_:
{
lean_object* v___x_5520_; 
if (v_isShared_5518_ == 0)
{
v___x_5520_ = v___x_5517_;
goto v_reusejp_5519_;
}
else
{
lean_object* v_reuseFailAlloc_5521_; 
v_reuseFailAlloc_5521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5521_, 0, v_fst_5514_);
lean_ctor_set(v_reuseFailAlloc_5521_, 1, v_snd_5515_);
v___x_5520_ = v_reuseFailAlloc_5521_;
goto v_reusejp_5519_;
}
v_reusejp_5519_:
{
v_a_5486_ = v___x_5520_;
goto v___jp_5485_;
}
}
}
}
}
else
{
lean_object* v___x_5525_; 
if (v_isShared_5495_ == 0)
{
v___x_5525_ = v___x_5494_;
goto v_reusejp_5524_;
}
else
{
lean_object* v_reuseFailAlloc_5526_; 
v_reuseFailAlloc_5526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5526_, 0, v_fst_5491_);
lean_ctor_set(v_reuseFailAlloc_5526_, 1, v_snd_5492_);
v___x_5525_ = v_reuseFailAlloc_5526_;
goto v_reusejp_5524_;
}
v_reusejp_5524_:
{
v_a_5486_ = v___x_5525_;
goto v___jp_5485_;
}
}
}
}
v___jp_5485_:
{
lean_object* v___x_5487_; lean_object* v___x_5488_; 
v___x_5487_ = lean_unsigned_to_nat(1u);
v___x_5488_ = lean_nat_add(v_a_5483_, v___x_5487_);
lean_dec(v_a_5483_);
v_a_5483_ = v___x_5488_;
v_b_5484_ = v_a_5486_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg___boxed(lean_object* v_upperBound_5528_, lean_object* v___x_5529_, lean_object* v_fixedParamPerms_5530_, lean_object* v_next_5531_, lean_object* v___x_5532_, lean_object* v___x_5533_, lean_object* v_a_5534_, lean_object* v_b_5535_){
_start:
{
lean_object* v_res_5536_; 
v_res_5536_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(v_upperBound_5528_, v___x_5529_, v_fixedParamPerms_5530_, v_next_5531_, v___x_5532_, v___x_5533_, v_a_5534_, v_b_5535_);
lean_dec(v___x_5533_);
lean_dec(v___x_5532_);
lean_dec(v_next_5531_);
lean_dec_ref(v_fixedParamPerms_5530_);
lean_dec_ref(v___x_5529_);
lean_dec(v_upperBound_5528_);
return v_res_5536_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7___redArg(lean_object* v_upperBound_5537_, lean_object* v___x_5538_, lean_object* v_fixedParamPerms_5539_, lean_object* v___x_5540_, lean_object* v___x_5541_, lean_object* v_a_5542_, lean_object* v_b_5543_){
_start:
{
uint8_t v___x_5544_; 
v___x_5544_ = lean_nat_dec_lt(v_a_5542_, v_upperBound_5537_);
if (v___x_5544_ == 0)
{
lean_dec(v_a_5542_);
return v_b_5543_;
}
else
{
lean_object* v_fst_5545_; lean_object* v_snd_5546_; lean_object* v___x_5548_; uint8_t v_isShared_5549_; uint8_t v_isSharedCheck_5569_; 
v_fst_5545_ = lean_ctor_get(v_b_5543_, 0);
v_snd_5546_ = lean_ctor_get(v_b_5543_, 1);
v_isSharedCheck_5569_ = !lean_is_exclusive(v_b_5543_);
if (v_isSharedCheck_5569_ == 0)
{
v___x_5548_ = v_b_5543_;
v_isShared_5549_ = v_isSharedCheck_5569_;
goto v_resetjp_5547_;
}
else
{
lean_inc(v_snd_5546_);
lean_inc(v_fst_5545_);
lean_dec(v_b_5543_);
v___x_5548_ = lean_box(0);
v_isShared_5549_ = v_isSharedCheck_5569_;
goto v_resetjp_5547_;
}
v_resetjp_5547_:
{
lean_object* v___x_5550_; lean_object* v___x_5551_; lean_object* v___x_5552_; lean_object* v___x_5554_; 
v___x_5550_ = lean_array_fget_borrowed(v___x_5538_, v_a_5542_);
v___x_5551_ = lean_array_get_size(v___x_5550_);
v___x_5552_ = lean_unsigned_to_nat(0u);
if (v_isShared_5549_ == 0)
{
v___x_5554_ = v___x_5548_;
goto v_reusejp_5553_;
}
else
{
lean_object* v_reuseFailAlloc_5568_; 
v_reuseFailAlloc_5568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5568_, 0, v_fst_5545_);
lean_ctor_set(v_reuseFailAlloc_5568_, 1, v_snd_5546_);
v___x_5554_ = v_reuseFailAlloc_5568_;
goto v_reusejp_5553_;
}
v_reusejp_5553_:
{
lean_object* v___x_5555_; lean_object* v_fst_5556_; lean_object* v_snd_5557_; lean_object* v___x_5559_; uint8_t v_isShared_5560_; uint8_t v_isSharedCheck_5567_; 
v___x_5555_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(v___x_5551_, v___x_5550_, v_fixedParamPerms_5539_, v_a_5542_, v___x_5540_, v___x_5541_, v___x_5552_, v___x_5554_);
v_fst_5556_ = lean_ctor_get(v___x_5555_, 0);
v_snd_5557_ = lean_ctor_get(v___x_5555_, 1);
v_isSharedCheck_5567_ = !lean_is_exclusive(v___x_5555_);
if (v_isSharedCheck_5567_ == 0)
{
v___x_5559_ = v___x_5555_;
v_isShared_5560_ = v_isSharedCheck_5567_;
goto v_resetjp_5558_;
}
else
{
lean_inc(v_snd_5557_);
lean_inc(v_fst_5556_);
lean_dec(v___x_5555_);
v___x_5559_ = lean_box(0);
v_isShared_5560_ = v_isSharedCheck_5567_;
goto v_resetjp_5558_;
}
v_resetjp_5558_:
{
lean_object* v___x_5562_; 
if (v_isShared_5560_ == 0)
{
v___x_5562_ = v___x_5559_;
goto v_reusejp_5561_;
}
else
{
lean_object* v_reuseFailAlloc_5566_; 
v_reuseFailAlloc_5566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5566_, 0, v_fst_5556_);
lean_ctor_set(v_reuseFailAlloc_5566_, 1, v_snd_5557_);
v___x_5562_ = v_reuseFailAlloc_5566_;
goto v_reusejp_5561_;
}
v_reusejp_5561_:
{
lean_object* v___x_5563_; lean_object* v___x_5564_; 
v___x_5563_ = lean_unsigned_to_nat(1u);
v___x_5564_ = lean_nat_add(v_a_5542_, v___x_5563_);
lean_dec(v_a_5542_);
v_a_5542_ = v___x_5564_;
v_b_5543_ = v___x_5562_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7___redArg___boxed(lean_object* v_upperBound_5570_, lean_object* v___x_5571_, lean_object* v_fixedParamPerms_5572_, lean_object* v___x_5573_, lean_object* v___x_5574_, lean_object* v_a_5575_, lean_object* v_b_5576_){
_start:
{
lean_object* v_res_5577_; 
v_res_5577_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7___redArg(v_upperBound_5570_, v___x_5571_, v_fixedParamPerms_5572_, v___x_5573_, v___x_5574_, v_a_5575_, v_b_5576_);
lean_dec(v___x_5574_);
lean_dec(v___x_5573_);
lean_dec_ref(v_fixedParamPerms_5572_);
lean_dec_ref(v___x_5571_);
lean_dec(v_upperBound_5570_);
return v_res_5577_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(lean_object* v_upperBound_5578_, lean_object* v___x_5579_, lean_object* v___x_5580_, lean_object* v___x_5581_, lean_object* v_fixedParamPerms_5582_, lean_object* v_a_5583_, lean_object* v_b_5584_){
_start:
{
uint8_t v___x_5585_; 
v___x_5585_ = lean_nat_dec_lt(v_a_5583_, v_upperBound_5578_);
if (v___x_5585_ == 0)
{
return v_b_5584_;
}
else
{
lean_object* v_fst_5586_; lean_object* v_snd_5587_; lean_object* v___x_5589_; uint8_t v_isShared_5590_; uint8_t v_isSharedCheck_5610_; 
v_fst_5586_ = lean_ctor_get(v_b_5584_, 0);
v_snd_5587_ = lean_ctor_get(v_b_5584_, 1);
v_isSharedCheck_5610_ = !lean_is_exclusive(v_b_5584_);
if (v_isSharedCheck_5610_ == 0)
{
v___x_5589_ = v_b_5584_;
v_isShared_5590_ = v_isSharedCheck_5610_;
goto v_resetjp_5588_;
}
else
{
lean_inc(v_snd_5587_);
lean_inc(v_fst_5586_);
lean_dec(v_b_5584_);
v___x_5589_ = lean_box(0);
v_isShared_5590_ = v_isSharedCheck_5610_;
goto v_resetjp_5588_;
}
v_resetjp_5588_:
{
lean_object* v___x_5591_; lean_object* v___x_5592_; lean_object* v___x_5593_; lean_object* v___x_5595_; 
v___x_5591_ = lean_array_fget_borrowed(v___x_5579_, v_a_5583_);
v___x_5592_ = lean_array_get_size(v___x_5591_);
v___x_5593_ = lean_unsigned_to_nat(0u);
if (v_isShared_5590_ == 0)
{
v___x_5595_ = v___x_5589_;
goto v_reusejp_5594_;
}
else
{
lean_object* v_reuseFailAlloc_5609_; 
v_reuseFailAlloc_5609_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5609_, 0, v_fst_5586_);
lean_ctor_set(v_reuseFailAlloc_5609_, 1, v_snd_5587_);
v___x_5595_ = v_reuseFailAlloc_5609_;
goto v_reusejp_5594_;
}
v_reusejp_5594_:
{
lean_object* v___x_5596_; lean_object* v_fst_5597_; lean_object* v_snd_5598_; lean_object* v___x_5600_; uint8_t v_isShared_5601_; uint8_t v_isSharedCheck_5608_; 
v___x_5596_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(v___x_5592_, v___x_5591_, v_fixedParamPerms_5582_, v_a_5583_, v___x_5580_, v___x_5581_, v___x_5593_, v___x_5595_);
v_fst_5597_ = lean_ctor_get(v___x_5596_, 0);
v_snd_5598_ = lean_ctor_get(v___x_5596_, 1);
v_isSharedCheck_5608_ = !lean_is_exclusive(v___x_5596_);
if (v_isSharedCheck_5608_ == 0)
{
v___x_5600_ = v___x_5596_;
v_isShared_5601_ = v_isSharedCheck_5608_;
goto v_resetjp_5599_;
}
else
{
lean_inc(v_snd_5598_);
lean_inc(v_fst_5597_);
lean_dec(v___x_5596_);
v___x_5600_ = lean_box(0);
v_isShared_5601_ = v_isSharedCheck_5608_;
goto v_resetjp_5599_;
}
v_resetjp_5599_:
{
lean_object* v___x_5603_; 
if (v_isShared_5601_ == 0)
{
v___x_5603_ = v___x_5600_;
goto v_reusejp_5602_;
}
else
{
lean_object* v_reuseFailAlloc_5607_; 
v_reuseFailAlloc_5607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5607_, 0, v_fst_5597_);
lean_ctor_set(v_reuseFailAlloc_5607_, 1, v_snd_5598_);
v___x_5603_ = v_reuseFailAlloc_5607_;
goto v_reusejp_5602_;
}
v_reusejp_5602_:
{
lean_object* v___x_5604_; lean_object* v___x_5605_; lean_object* v___x_5606_; 
v___x_5604_ = lean_unsigned_to_nat(1u);
v___x_5605_ = lean_nat_add(v_a_5583_, v___x_5604_);
v___x_5606_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7___redArg(v_upperBound_5578_, v___x_5579_, v_fixedParamPerms_5582_, v___x_5580_, v___x_5581_, v___x_5605_, v___x_5603_);
return v___x_5606_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg___boxed(lean_object* v_upperBound_5611_, lean_object* v___x_5612_, lean_object* v___x_5613_, lean_object* v___x_5614_, lean_object* v_fixedParamPerms_5615_, lean_object* v_a_5616_, lean_object* v_b_5617_){
_start:
{
lean_object* v_res_5618_; 
v_res_5618_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(v_upperBound_5611_, v___x_5612_, v___x_5613_, v___x_5614_, v_fixedParamPerms_5615_, v_a_5616_, v_b_5617_);
lean_dec(v_a_5616_);
lean_dec_ref(v_fixedParamPerms_5615_);
lean_dec(v___x_5614_);
lean_dec(v___x_5613_);
lean_dec_ref(v___x_5612_);
lean_dec(v_upperBound_5611_);
return v_res_5618_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg(lean_object* v___x_5619_, lean_object* v___x_5620_, lean_object* v___x_5621_, lean_object* v_fixedParamPerms_5622_, lean_object* v_a_5623_){
_start:
{
lean_object* v_snd_5624_; uint8_t v___x_5625_; 
v_snd_5624_ = lean_ctor_get(v_a_5623_, 1);
v___x_5625_ = lean_unbox(v_snd_5624_);
if (v___x_5625_ == 0)
{
lean_object* v_fst_5626_; lean_object* v___x_5628_; uint8_t v_isShared_5629_; uint8_t v_isSharedCheck_5633_; 
lean_inc(v_snd_5624_);
v_fst_5626_ = lean_ctor_get(v_a_5623_, 0);
v_isSharedCheck_5633_ = !lean_is_exclusive(v_a_5623_);
if (v_isSharedCheck_5633_ == 0)
{
lean_object* v_unused_5634_; 
v_unused_5634_ = lean_ctor_get(v_a_5623_, 1);
lean_dec(v_unused_5634_);
v___x_5628_ = v_a_5623_;
v_isShared_5629_ = v_isSharedCheck_5633_;
goto v_resetjp_5627_;
}
else
{
lean_inc(v_fst_5626_);
lean_dec(v_a_5623_);
v___x_5628_ = lean_box(0);
v_isShared_5629_ = v_isSharedCheck_5633_;
goto v_resetjp_5627_;
}
v_resetjp_5627_:
{
lean_object* v___x_5631_; 
if (v_isShared_5629_ == 0)
{
v___x_5631_ = v___x_5628_;
goto v_reusejp_5630_;
}
else
{
lean_object* v_reuseFailAlloc_5632_; 
v_reuseFailAlloc_5632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5632_, 0, v_fst_5626_);
lean_ctor_set(v_reuseFailAlloc_5632_, 1, v_snd_5624_);
v___x_5631_ = v_reuseFailAlloc_5632_;
goto v_reusejp_5630_;
}
v_reusejp_5630_:
{
return v___x_5631_;
}
}
}
else
{
lean_object* v_fst_5635_; lean_object* v___x_5637_; uint8_t v_isShared_5638_; uint8_t v_isSharedCheck_5657_; 
v_fst_5635_ = lean_ctor_get(v_a_5623_, 0);
v_isSharedCheck_5657_ = !lean_is_exclusive(v_a_5623_);
if (v_isSharedCheck_5657_ == 0)
{
lean_object* v_unused_5658_; 
v_unused_5658_ = lean_ctor_get(v_a_5623_, 1);
lean_dec(v_unused_5658_);
v___x_5637_ = v_a_5623_;
v_isShared_5638_ = v_isSharedCheck_5657_;
goto v_resetjp_5636_;
}
else
{
lean_inc(v_fst_5635_);
lean_dec(v_a_5623_);
v___x_5637_ = lean_box(0);
v_isShared_5638_ = v_isSharedCheck_5657_;
goto v_resetjp_5636_;
}
v_resetjp_5636_:
{
uint8_t v_changed_5639_; lean_object* v___x_5640_; lean_object* v___x_5641_; lean_object* v___x_5642_; lean_object* v___x_5644_; 
v_changed_5639_ = 0;
v___x_5640_ = lean_array_get_size(v___x_5619_);
v___x_5641_ = lean_unsigned_to_nat(0u);
v___x_5642_ = lean_box(v_changed_5639_);
if (v_isShared_5638_ == 0)
{
lean_ctor_set(v___x_5637_, 1, v___x_5642_);
v___x_5644_ = v___x_5637_;
goto v_reusejp_5643_;
}
else
{
lean_object* v_reuseFailAlloc_5656_; 
v_reuseFailAlloc_5656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5656_, 0, v_fst_5635_);
lean_ctor_set(v_reuseFailAlloc_5656_, 1, v___x_5642_);
v___x_5644_ = v_reuseFailAlloc_5656_;
goto v_reusejp_5643_;
}
v_reusejp_5643_:
{
lean_object* v___x_5645_; lean_object* v_fst_5646_; lean_object* v_snd_5647_; lean_object* v___x_5649_; uint8_t v_isShared_5650_; uint8_t v_isSharedCheck_5655_; 
v___x_5645_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(v___x_5640_, v___x_5619_, v___x_5620_, v___x_5621_, v_fixedParamPerms_5622_, v___x_5641_, v___x_5644_);
v_fst_5646_ = lean_ctor_get(v___x_5645_, 0);
v_snd_5647_ = lean_ctor_get(v___x_5645_, 1);
v_isSharedCheck_5655_ = !lean_is_exclusive(v___x_5645_);
if (v_isSharedCheck_5655_ == 0)
{
v___x_5649_ = v___x_5645_;
v_isShared_5650_ = v_isSharedCheck_5655_;
goto v_resetjp_5648_;
}
else
{
lean_inc(v_snd_5647_);
lean_inc(v_fst_5646_);
lean_dec(v___x_5645_);
v___x_5649_ = lean_box(0);
v_isShared_5650_ = v_isSharedCheck_5655_;
goto v_resetjp_5648_;
}
v_resetjp_5648_:
{
lean_object* v___x_5652_; 
if (v_isShared_5650_ == 0)
{
v___x_5652_ = v___x_5649_;
goto v_reusejp_5651_;
}
else
{
lean_object* v_reuseFailAlloc_5654_; 
v_reuseFailAlloc_5654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5654_, 0, v_fst_5646_);
lean_ctor_set(v_reuseFailAlloc_5654_, 1, v_snd_5647_);
v___x_5652_ = v_reuseFailAlloc_5654_;
goto v_reusejp_5651_;
}
v_reusejp_5651_:
{
v_a_5623_ = v___x_5652_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg___boxed(lean_object* v___x_5659_, lean_object* v___x_5660_, lean_object* v___x_5661_, lean_object* v_fixedParamPerms_5662_, lean_object* v_a_5663_){
_start:
{
lean_object* v_res_5664_; 
v_res_5664_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg(v___x_5659_, v___x_5660_, v___x_5661_, v_fixedParamPerms_5662_, v_a_5663_);
lean_dec_ref(v_fixedParamPerms_5662_);
lean_dec(v___x_5661_);
lean_dec(v___x_5660_);
lean_dec_ref(v___x_5659_);
return v_res_5664_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(lean_object* v_upperBound_5665_, lean_object* v_a_5666_, lean_object* v_b_5667_){
_start:
{
lean_object* v_a_5669_; uint8_t v___x_5673_; 
v___x_5673_ = lean_nat_dec_lt(v_a_5666_, v_upperBound_5665_);
if (v___x_5673_ == 0)
{
lean_dec(v_a_5666_);
return v_b_5667_;
}
else
{
lean_object* v_snd_5674_; lean_object* v_snd_5675_; lean_object* v_snd_5676_; lean_object* v_snd_5677_; lean_object* v_fst_5678_; lean_object* v___x_5680_; uint8_t v_isShared_5681_; uint8_t v_isSharedCheck_5790_; 
v_snd_5674_ = lean_ctor_get(v_b_5667_, 1);
lean_inc(v_snd_5674_);
v_snd_5675_ = lean_ctor_get(v_snd_5674_, 1);
lean_inc(v_snd_5675_);
v_snd_5676_ = lean_ctor_get(v_snd_5675_, 1);
lean_inc(v_snd_5676_);
v_snd_5677_ = lean_ctor_get(v_snd_5676_, 1);
lean_inc(v_snd_5677_);
v_fst_5678_ = lean_ctor_get(v_b_5667_, 0);
v_isSharedCheck_5790_ = !lean_is_exclusive(v_b_5667_);
if (v_isSharedCheck_5790_ == 0)
{
lean_object* v_unused_5791_; 
v_unused_5791_ = lean_ctor_get(v_b_5667_, 1);
lean_dec(v_unused_5791_);
v___x_5680_ = v_b_5667_;
v_isShared_5681_ = v_isSharedCheck_5790_;
goto v_resetjp_5679_;
}
else
{
lean_inc(v_fst_5678_);
lean_dec(v_b_5667_);
v___x_5680_ = lean_box(0);
v_isShared_5681_ = v_isSharedCheck_5790_;
goto v_resetjp_5679_;
}
v_resetjp_5679_:
{
lean_object* v_fst_5682_; lean_object* v___x_5684_; uint8_t v_isShared_5685_; uint8_t v_isSharedCheck_5788_; 
v_fst_5682_ = lean_ctor_get(v_snd_5674_, 0);
v_isSharedCheck_5788_ = !lean_is_exclusive(v_snd_5674_);
if (v_isSharedCheck_5788_ == 0)
{
lean_object* v_unused_5789_; 
v_unused_5789_ = lean_ctor_get(v_snd_5674_, 1);
lean_dec(v_unused_5789_);
v___x_5684_ = v_snd_5674_;
v_isShared_5685_ = v_isSharedCheck_5788_;
goto v_resetjp_5683_;
}
else
{
lean_inc(v_fst_5682_);
lean_dec(v_snd_5674_);
v___x_5684_ = lean_box(0);
v_isShared_5685_ = v_isSharedCheck_5788_;
goto v_resetjp_5683_;
}
v_resetjp_5683_:
{
lean_object* v_fst_5686_; lean_object* v___x_5688_; uint8_t v_isShared_5689_; uint8_t v_isSharedCheck_5786_; 
v_fst_5686_ = lean_ctor_get(v_snd_5675_, 0);
v_isSharedCheck_5786_ = !lean_is_exclusive(v_snd_5675_);
if (v_isSharedCheck_5786_ == 0)
{
lean_object* v_unused_5787_; 
v_unused_5787_ = lean_ctor_get(v_snd_5675_, 1);
lean_dec(v_unused_5787_);
v___x_5688_ = v_snd_5675_;
v_isShared_5689_ = v_isSharedCheck_5786_;
goto v_resetjp_5687_;
}
else
{
lean_inc(v_fst_5686_);
lean_dec(v_snd_5675_);
v___x_5688_ = lean_box(0);
v_isShared_5689_ = v_isSharedCheck_5786_;
goto v_resetjp_5687_;
}
v_resetjp_5687_:
{
lean_object* v_fst_5690_; lean_object* v___x_5692_; uint8_t v_isShared_5693_; uint8_t v_isSharedCheck_5784_; 
v_fst_5690_ = lean_ctor_get(v_snd_5676_, 0);
v_isSharedCheck_5784_ = !lean_is_exclusive(v_snd_5676_);
if (v_isSharedCheck_5784_ == 0)
{
lean_object* v_unused_5785_; 
v_unused_5785_ = lean_ctor_get(v_snd_5676_, 1);
lean_dec(v_unused_5785_);
v___x_5692_ = v_snd_5676_;
v_isShared_5693_ = v_isSharedCheck_5784_;
goto v_resetjp_5691_;
}
else
{
lean_inc(v_fst_5690_);
lean_dec(v_snd_5676_);
v___x_5692_ = lean_box(0);
v_isShared_5693_ = v_isSharedCheck_5784_;
goto v_resetjp_5691_;
}
v_resetjp_5691_:
{
lean_object* v_array_5694_; lean_object* v_start_5695_; lean_object* v_stop_5696_; uint8_t v___x_5697_; 
v_array_5694_ = lean_ctor_get(v_snd_5677_, 0);
v_start_5695_ = lean_ctor_get(v_snd_5677_, 1);
v_stop_5696_ = lean_ctor_get(v_snd_5677_, 2);
v___x_5697_ = lean_nat_dec_lt(v_start_5695_, v_stop_5696_);
if (v___x_5697_ == 0)
{
lean_object* v___x_5699_; 
lean_dec(v_a_5666_);
if (v_isShared_5693_ == 0)
{
v___x_5699_ = v___x_5692_;
goto v_reusejp_5698_;
}
else
{
lean_object* v_reuseFailAlloc_5709_; 
v_reuseFailAlloc_5709_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5709_, 0, v_fst_5690_);
lean_ctor_set(v_reuseFailAlloc_5709_, 1, v_snd_5677_);
v___x_5699_ = v_reuseFailAlloc_5709_;
goto v_reusejp_5698_;
}
v_reusejp_5698_:
{
lean_object* v___x_5701_; 
if (v_isShared_5689_ == 0)
{
lean_ctor_set(v___x_5688_, 1, v___x_5699_);
v___x_5701_ = v___x_5688_;
goto v_reusejp_5700_;
}
else
{
lean_object* v_reuseFailAlloc_5708_; 
v_reuseFailAlloc_5708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5708_, 0, v_fst_5686_);
lean_ctor_set(v_reuseFailAlloc_5708_, 1, v___x_5699_);
v___x_5701_ = v_reuseFailAlloc_5708_;
goto v_reusejp_5700_;
}
v_reusejp_5700_:
{
lean_object* v___x_5703_; 
if (v_isShared_5685_ == 0)
{
lean_ctor_set(v___x_5684_, 1, v___x_5701_);
v___x_5703_ = v___x_5684_;
goto v_reusejp_5702_;
}
else
{
lean_object* v_reuseFailAlloc_5707_; 
v_reuseFailAlloc_5707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5707_, 0, v_fst_5682_);
lean_ctor_set(v_reuseFailAlloc_5707_, 1, v___x_5701_);
v___x_5703_ = v_reuseFailAlloc_5707_;
goto v_reusejp_5702_;
}
v_reusejp_5702_:
{
lean_object* v___x_5705_; 
if (v_isShared_5681_ == 0)
{
lean_ctor_set(v___x_5680_, 1, v___x_5703_);
v___x_5705_ = v___x_5680_;
goto v_reusejp_5704_;
}
else
{
lean_object* v_reuseFailAlloc_5706_; 
v_reuseFailAlloc_5706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5706_, 0, v_fst_5678_);
lean_ctor_set(v_reuseFailAlloc_5706_, 1, v___x_5703_);
v___x_5705_ = v_reuseFailAlloc_5706_;
goto v_reusejp_5704_;
}
v_reusejp_5704_:
{
return v___x_5705_;
}
}
}
}
}
else
{
lean_object* v___x_5711_; uint8_t v_isShared_5712_; uint8_t v_isSharedCheck_5780_; 
lean_inc(v_stop_5696_);
lean_inc(v_start_5695_);
lean_inc_ref(v_array_5694_);
v_isSharedCheck_5780_ = !lean_is_exclusive(v_snd_5677_);
if (v_isSharedCheck_5780_ == 0)
{
lean_object* v_unused_5781_; lean_object* v_unused_5782_; lean_object* v_unused_5783_; 
v_unused_5781_ = lean_ctor_get(v_snd_5677_, 2);
lean_dec(v_unused_5781_);
v_unused_5782_ = lean_ctor_get(v_snd_5677_, 1);
lean_dec(v_unused_5782_);
v_unused_5783_ = lean_ctor_get(v_snd_5677_, 0);
lean_dec(v_unused_5783_);
v___x_5711_ = v_snd_5677_;
v_isShared_5712_ = v_isSharedCheck_5780_;
goto v_resetjp_5710_;
}
else
{
lean_dec(v_snd_5677_);
v___x_5711_ = lean_box(0);
v_isShared_5712_ = v_isSharedCheck_5780_;
goto v_resetjp_5710_;
}
v_resetjp_5710_:
{
lean_object* v_array_5713_; lean_object* v_start_5714_; lean_object* v_stop_5715_; lean_object* v___x_5716_; lean_object* v___x_5717_; lean_object* v___x_5718_; lean_object* v___x_5720_; 
v_array_5713_ = lean_ctor_get(v_fst_5690_, 0);
v_start_5714_ = lean_ctor_get(v_fst_5690_, 1);
v_stop_5715_ = lean_ctor_get(v_fst_5690_, 2);
v___x_5716_ = lean_array_fget(v_array_5694_, v_start_5695_);
v___x_5717_ = lean_unsigned_to_nat(1u);
v___x_5718_ = lean_nat_add(v_start_5695_, v___x_5717_);
lean_dec(v_start_5695_);
if (v_isShared_5712_ == 0)
{
lean_ctor_set(v___x_5711_, 1, v___x_5718_);
v___x_5720_ = v___x_5711_;
goto v_reusejp_5719_;
}
else
{
lean_object* v_reuseFailAlloc_5779_; 
v_reuseFailAlloc_5779_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5779_, 0, v_array_5694_);
lean_ctor_set(v_reuseFailAlloc_5779_, 1, v___x_5718_);
lean_ctor_set(v_reuseFailAlloc_5779_, 2, v_stop_5696_);
v___x_5720_ = v_reuseFailAlloc_5779_;
goto v_reusejp_5719_;
}
v_reusejp_5719_:
{
uint8_t v___x_5721_; 
v___x_5721_ = lean_nat_dec_lt(v_start_5714_, v_stop_5715_);
if (v___x_5721_ == 0)
{
lean_object* v___x_5723_; 
lean_dec(v___x_5716_);
lean_dec(v_a_5666_);
if (v_isShared_5693_ == 0)
{
lean_ctor_set(v___x_5692_, 1, v___x_5720_);
v___x_5723_ = v___x_5692_;
goto v_reusejp_5722_;
}
else
{
lean_object* v_reuseFailAlloc_5733_; 
v_reuseFailAlloc_5733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5733_, 0, v_fst_5690_);
lean_ctor_set(v_reuseFailAlloc_5733_, 1, v___x_5720_);
v___x_5723_ = v_reuseFailAlloc_5733_;
goto v_reusejp_5722_;
}
v_reusejp_5722_:
{
lean_object* v___x_5725_; 
if (v_isShared_5689_ == 0)
{
lean_ctor_set(v___x_5688_, 1, v___x_5723_);
v___x_5725_ = v___x_5688_;
goto v_reusejp_5724_;
}
else
{
lean_object* v_reuseFailAlloc_5732_; 
v_reuseFailAlloc_5732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5732_, 0, v_fst_5686_);
lean_ctor_set(v_reuseFailAlloc_5732_, 1, v___x_5723_);
v___x_5725_ = v_reuseFailAlloc_5732_;
goto v_reusejp_5724_;
}
v_reusejp_5724_:
{
lean_object* v___x_5727_; 
if (v_isShared_5685_ == 0)
{
lean_ctor_set(v___x_5684_, 1, v___x_5725_);
v___x_5727_ = v___x_5684_;
goto v_reusejp_5726_;
}
else
{
lean_object* v_reuseFailAlloc_5731_; 
v_reuseFailAlloc_5731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5731_, 0, v_fst_5682_);
lean_ctor_set(v_reuseFailAlloc_5731_, 1, v___x_5725_);
v___x_5727_ = v_reuseFailAlloc_5731_;
goto v_reusejp_5726_;
}
v_reusejp_5726_:
{
lean_object* v___x_5729_; 
if (v_isShared_5681_ == 0)
{
lean_ctor_set(v___x_5680_, 1, v___x_5727_);
v___x_5729_ = v___x_5680_;
goto v_reusejp_5728_;
}
else
{
lean_object* v_reuseFailAlloc_5730_; 
v_reuseFailAlloc_5730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5730_, 0, v_fst_5678_);
lean_ctor_set(v_reuseFailAlloc_5730_, 1, v___x_5727_);
v___x_5729_ = v_reuseFailAlloc_5730_;
goto v_reusejp_5728_;
}
v_reusejp_5728_:
{
return v___x_5729_;
}
}
}
}
}
else
{
lean_object* v___x_5735_; uint8_t v_isShared_5736_; uint8_t v_isSharedCheck_5775_; 
lean_inc(v_stop_5715_);
lean_inc(v_start_5714_);
lean_inc_ref(v_array_5713_);
v_isSharedCheck_5775_ = !lean_is_exclusive(v_fst_5690_);
if (v_isSharedCheck_5775_ == 0)
{
lean_object* v_unused_5776_; lean_object* v_unused_5777_; lean_object* v_unused_5778_; 
v_unused_5776_ = lean_ctor_get(v_fst_5690_, 2);
lean_dec(v_unused_5776_);
v_unused_5777_ = lean_ctor_get(v_fst_5690_, 1);
lean_dec(v_unused_5777_);
v_unused_5778_ = lean_ctor_get(v_fst_5690_, 0);
lean_dec(v_unused_5778_);
v___x_5735_ = v_fst_5690_;
v_isShared_5736_ = v_isSharedCheck_5775_;
goto v_resetjp_5734_;
}
else
{
lean_dec(v_fst_5690_);
v___x_5735_ = lean_box(0);
v_isShared_5736_ = v_isSharedCheck_5775_;
goto v_resetjp_5734_;
}
v_resetjp_5734_:
{
lean_object* v___x_5737_; lean_object* v___x_5738_; lean_object* v___x_5740_; 
v___x_5737_ = lean_array_fget(v_array_5713_, v_start_5714_);
v___x_5738_ = lean_nat_add(v_start_5714_, v___x_5717_);
lean_dec(v_start_5714_);
if (v_isShared_5736_ == 0)
{
lean_ctor_set(v___x_5735_, 1, v___x_5738_);
v___x_5740_ = v___x_5735_;
goto v_reusejp_5739_;
}
else
{
lean_object* v_reuseFailAlloc_5774_; 
v_reuseFailAlloc_5774_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5774_, 0, v_array_5713_);
lean_ctor_set(v_reuseFailAlloc_5774_, 1, v___x_5738_);
lean_ctor_set(v_reuseFailAlloc_5774_, 2, v_stop_5715_);
v___x_5740_ = v_reuseFailAlloc_5774_;
goto v_reusejp_5739_;
}
v_reusejp_5739_:
{
uint8_t v___x_5741_; 
v___x_5741_ = lean_unbox(v___x_5737_);
lean_dec(v___x_5737_);
if (v___x_5741_ == 0)
{
lean_object* v___x_5742_; lean_object* v___x_5743_; lean_object* v___x_5744_; lean_object* v___x_5745_; lean_object* v___x_5747_; 
v___x_5742_ = lean_array_get_size(v_fst_5686_);
v___x_5743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5743_, 0, v___x_5742_);
v___x_5744_ = lean_array_push(v_fst_5678_, v___x_5743_);
v___x_5745_ = lean_array_push(v_fst_5686_, v___x_5716_);
if (v_isShared_5693_ == 0)
{
lean_ctor_set(v___x_5692_, 1, v___x_5720_);
lean_ctor_set(v___x_5692_, 0, v___x_5740_);
v___x_5747_ = v___x_5692_;
goto v_reusejp_5746_;
}
else
{
lean_object* v_reuseFailAlloc_5757_; 
v_reuseFailAlloc_5757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5757_, 0, v___x_5740_);
lean_ctor_set(v_reuseFailAlloc_5757_, 1, v___x_5720_);
v___x_5747_ = v_reuseFailAlloc_5757_;
goto v_reusejp_5746_;
}
v_reusejp_5746_:
{
lean_object* v___x_5749_; 
if (v_isShared_5689_ == 0)
{
lean_ctor_set(v___x_5688_, 1, v___x_5747_);
lean_ctor_set(v___x_5688_, 0, v___x_5745_);
v___x_5749_ = v___x_5688_;
goto v_reusejp_5748_;
}
else
{
lean_object* v_reuseFailAlloc_5756_; 
v_reuseFailAlloc_5756_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5756_, 0, v___x_5745_);
lean_ctor_set(v_reuseFailAlloc_5756_, 1, v___x_5747_);
v___x_5749_ = v_reuseFailAlloc_5756_;
goto v_reusejp_5748_;
}
v_reusejp_5748_:
{
lean_object* v___x_5751_; 
if (v_isShared_5685_ == 0)
{
lean_ctor_set(v___x_5684_, 1, v___x_5749_);
v___x_5751_ = v___x_5684_;
goto v_reusejp_5750_;
}
else
{
lean_object* v_reuseFailAlloc_5755_; 
v_reuseFailAlloc_5755_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5755_, 0, v_fst_5682_);
lean_ctor_set(v_reuseFailAlloc_5755_, 1, v___x_5749_);
v___x_5751_ = v_reuseFailAlloc_5755_;
goto v_reusejp_5750_;
}
v_reusejp_5750_:
{
lean_object* v___x_5753_; 
if (v_isShared_5681_ == 0)
{
lean_ctor_set(v___x_5680_, 1, v___x_5751_);
lean_ctor_set(v___x_5680_, 0, v___x_5744_);
v___x_5753_ = v___x_5680_;
goto v_reusejp_5752_;
}
else
{
lean_object* v_reuseFailAlloc_5754_; 
v_reuseFailAlloc_5754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5754_, 0, v___x_5744_);
lean_ctor_set(v_reuseFailAlloc_5754_, 1, v___x_5751_);
v___x_5753_ = v_reuseFailAlloc_5754_;
goto v_reusejp_5752_;
}
v_reusejp_5752_:
{
v_a_5669_ = v___x_5753_;
goto v___jp_5668_;
}
}
}
}
}
else
{
lean_object* v___x_5758_; lean_object* v___x_5759_; lean_object* v___x_5760_; lean_object* v___x_5761_; lean_object* v___x_5763_; 
v___x_5758_ = lean_box(0);
v___x_5759_ = lean_array_push(v_fst_5678_, v___x_5758_);
v___x_5760_ = l_Lean_Expr_fvarId_x21(v___x_5716_);
lean_dec(v___x_5716_);
v___x_5761_ = lean_array_push(v_fst_5682_, v___x_5760_);
if (v_isShared_5693_ == 0)
{
lean_ctor_set(v___x_5692_, 1, v___x_5720_);
lean_ctor_set(v___x_5692_, 0, v___x_5740_);
v___x_5763_ = v___x_5692_;
goto v_reusejp_5762_;
}
else
{
lean_object* v_reuseFailAlloc_5773_; 
v_reuseFailAlloc_5773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5773_, 0, v___x_5740_);
lean_ctor_set(v_reuseFailAlloc_5773_, 1, v___x_5720_);
v___x_5763_ = v_reuseFailAlloc_5773_;
goto v_reusejp_5762_;
}
v_reusejp_5762_:
{
lean_object* v___x_5765_; 
if (v_isShared_5689_ == 0)
{
lean_ctor_set(v___x_5688_, 1, v___x_5763_);
v___x_5765_ = v___x_5688_;
goto v_reusejp_5764_;
}
else
{
lean_object* v_reuseFailAlloc_5772_; 
v_reuseFailAlloc_5772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5772_, 0, v_fst_5686_);
lean_ctor_set(v_reuseFailAlloc_5772_, 1, v___x_5763_);
v___x_5765_ = v_reuseFailAlloc_5772_;
goto v_reusejp_5764_;
}
v_reusejp_5764_:
{
lean_object* v___x_5767_; 
if (v_isShared_5685_ == 0)
{
lean_ctor_set(v___x_5684_, 1, v___x_5765_);
lean_ctor_set(v___x_5684_, 0, v___x_5761_);
v___x_5767_ = v___x_5684_;
goto v_reusejp_5766_;
}
else
{
lean_object* v_reuseFailAlloc_5771_; 
v_reuseFailAlloc_5771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5771_, 0, v___x_5761_);
lean_ctor_set(v_reuseFailAlloc_5771_, 1, v___x_5765_);
v___x_5767_ = v_reuseFailAlloc_5771_;
goto v_reusejp_5766_;
}
v_reusejp_5766_:
{
lean_object* v___x_5769_; 
if (v_isShared_5681_ == 0)
{
lean_ctor_set(v___x_5680_, 1, v___x_5767_);
lean_ctor_set(v___x_5680_, 0, v___x_5759_);
v___x_5769_ = v___x_5680_;
goto v_reusejp_5768_;
}
else
{
lean_object* v_reuseFailAlloc_5770_; 
v_reuseFailAlloc_5770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5770_, 0, v___x_5759_);
lean_ctor_set(v_reuseFailAlloc_5770_, 1, v___x_5767_);
v___x_5769_ = v_reuseFailAlloc_5770_;
goto v_reusejp_5768_;
}
v_reusejp_5768_:
{
v_a_5669_ = v___x_5769_;
goto v___jp_5668_;
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
}
}
}
}
}
v___jp_5668_:
{
lean_object* v___x_5670_; lean_object* v___x_5671_; 
v___x_5670_ = lean_unsigned_to_nat(1u);
v___x_5671_ = lean_nat_add(v_a_5666_, v___x_5670_);
lean_dec(v_a_5666_);
v_a_5666_ = v___x_5671_;
v_b_5667_ = v_a_5669_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg___boxed(lean_object* v_upperBound_5792_, lean_object* v_a_5793_, lean_object* v_b_5794_){
_start:
{
lean_object* v_res_5795_; 
v_res_5795_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(v_upperBound_5792_, v_a_5793_, v_b_5794_);
lean_dec(v_upperBound_5792_);
return v_res_5795_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11(lean_object* v_as_5796_, size_t v_i_5797_, size_t v_stop_5798_){
_start:
{
uint8_t v___x_5799_; 
v___x_5799_ = lean_usize_dec_eq(v_i_5797_, v_stop_5798_);
if (v___x_5799_ == 0)
{
lean_object* v___x_5800_; uint8_t v___x_5801_; 
v___x_5800_ = lean_array_uget_borrowed(v_as_5796_, v_i_5797_);
v___x_5801_ = l_Lean_Expr_isFVar(v___x_5800_);
if (v___x_5801_ == 0)
{
uint8_t v___x_5802_; 
v___x_5802_ = 1;
return v___x_5802_;
}
else
{
size_t v___x_5803_; size_t v___x_5804_; 
v___x_5803_ = ((size_t)1ULL);
v___x_5804_ = lean_usize_add(v_i_5797_, v___x_5803_);
v_i_5797_ = v___x_5804_;
goto _start;
}
}
else
{
uint8_t v___x_5806_; 
v___x_5806_ = 0;
return v___x_5806_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11___boxed(lean_object* v_as_5807_, lean_object* v_i_5808_, lean_object* v_stop_5809_){
_start:
{
size_t v_i_boxed_5810_; size_t v_stop_boxed_5811_; uint8_t v_res_5812_; lean_object* v_r_5813_; 
v_i_boxed_5810_ = lean_unbox_usize(v_i_5808_);
lean_dec(v_i_5808_);
v_stop_boxed_5811_ = lean_unbox_usize(v_stop_5809_);
lean_dec(v_stop_5809_);
v_res_5812_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11(v_as_5807_, v_i_boxed_5810_, v_stop_boxed_5811_);
lean_dec_ref(v_as_5807_);
v_r_5813_ = lean_box(v_res_5812_);
return v_r_5813_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1(lean_object* v___x_5814_, size_t v_sz_5815_, size_t v_i_5816_, lean_object* v_bs_5817_){
_start:
{
uint8_t v___x_5818_; 
v___x_5818_ = lean_usize_dec_lt(v_i_5816_, v_sz_5815_);
if (v___x_5818_ == 0)
{
return v_bs_5817_;
}
else
{
lean_object* v_v_5819_; lean_object* v___x_5820_; lean_object* v_bs_x27_5821_; lean_object* v___y_5823_; 
v_v_5819_ = lean_array_uget(v_bs_5817_, v_i_5816_);
v___x_5820_ = lean_unsigned_to_nat(0u);
v_bs_x27_5821_ = lean_array_uset(v_bs_5817_, v_i_5816_, v___x_5820_);
if (lean_obj_tag(v_v_5819_) == 0)
{
v___y_5823_ = v_v_5819_;
goto v___jp_5822_;
}
else
{
lean_object* v_val_5828_; lean_object* v___x_5829_; lean_object* v___x_5830_; 
v_val_5828_ = lean_ctor_get(v_v_5819_, 0);
lean_inc(v_val_5828_);
lean_dec_ref_known(v_v_5819_, 1);
v___x_5829_ = lean_box(0);
v___x_5830_ = lean_array_get_borrowed(v___x_5829_, v___x_5814_, v_val_5828_);
lean_dec(v_val_5828_);
lean_inc(v___x_5830_);
v___y_5823_ = v___x_5830_;
goto v___jp_5822_;
}
v___jp_5822_:
{
size_t v___x_5824_; size_t v___x_5825_; lean_object* v___x_5826_; 
v___x_5824_ = ((size_t)1ULL);
v___x_5825_ = lean_usize_add(v_i_5816_, v___x_5824_);
v___x_5826_ = lean_array_uset(v_bs_x27_5821_, v_i_5816_, v___y_5823_);
v_i_5816_ = v___x_5825_;
v_bs_5817_ = v___x_5826_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1___boxed(lean_object* v___x_5831_, lean_object* v_sz_5832_, lean_object* v_i_5833_, lean_object* v_bs_5834_){
_start:
{
size_t v_sz_boxed_5835_; size_t v_i_boxed_5836_; lean_object* v_res_5837_; 
v_sz_boxed_5835_ = lean_unbox_usize(v_sz_5832_);
lean_dec(v_sz_5832_);
v_i_boxed_5836_ = lean_unbox_usize(v_i_5833_);
lean_dec(v_i_5833_);
v_res_5837_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1(v___x_5831_, v_sz_boxed_5835_, v_i_boxed_5836_, v_bs_5834_);
lean_dec_ref(v___x_5831_);
return v_res_5837_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2(lean_object* v___x_5838_, size_t v_sz_5839_, size_t v_i_5840_, lean_object* v_bs_5841_){
_start:
{
uint8_t v___x_5842_; 
v___x_5842_ = lean_usize_dec_lt(v_i_5840_, v_sz_5839_);
if (v___x_5842_ == 0)
{
return v_bs_5841_;
}
else
{
lean_object* v_v_5843_; lean_object* v___x_5844_; lean_object* v_bs_x27_5845_; size_t v_sz_5846_; size_t v___x_5847_; lean_object* v___x_5848_; size_t v___x_5849_; size_t v___x_5850_; lean_object* v___x_5851_; 
v_v_5843_ = lean_array_uget(v_bs_5841_, v_i_5840_);
v___x_5844_ = lean_unsigned_to_nat(0u);
v_bs_x27_5845_ = lean_array_uset(v_bs_5841_, v_i_5840_, v___x_5844_);
v_sz_5846_ = lean_array_size(v_v_5843_);
v___x_5847_ = ((size_t)0ULL);
v___x_5848_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1(v___x_5838_, v_sz_5846_, v___x_5847_, v_v_5843_);
v___x_5849_ = ((size_t)1ULL);
v___x_5850_ = lean_usize_add(v_i_5840_, v___x_5849_);
v___x_5851_ = lean_array_uset(v_bs_x27_5845_, v_i_5840_, v___x_5848_);
v_i_5840_ = v___x_5850_;
v_bs_5841_ = v___x_5851_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2___boxed(lean_object* v___x_5853_, lean_object* v_sz_5854_, lean_object* v_i_5855_, lean_object* v_bs_5856_){
_start:
{
size_t v_sz_boxed_5857_; size_t v_i_boxed_5858_; lean_object* v_res_5859_; 
v_sz_boxed_5857_ = lean_unbox_usize(v_sz_5854_);
lean_dec(v_sz_5854_);
v_i_boxed_5858_ = lean_unbox_usize(v_i_5855_);
lean_dec(v_i_5855_);
v_res_5859_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2(v___x_5853_, v_sz_boxed_5857_, v_i_boxed_5858_, v_bs_5856_);
lean_dec_ref(v___x_5853_);
return v_res_5859_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2(void){
_start:
{
lean_object* v___x_5862_; lean_object* v___x_5863_; lean_object* v___x_5864_; lean_object* v___x_5865_; lean_object* v___x_5866_; lean_object* v___x_5867_; 
v___x_5862_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__1));
v___x_5863_ = lean_unsigned_to_nat(6u);
v___x_5864_ = lean_unsigned_to_nat(463u);
v___x_5865_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0));
v___x_5866_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5867_ = l_mkPanicMessageWithDecl(v___x_5866_, v___x_5865_, v___x_5864_, v___x_5863_, v___x_5862_);
return v___x_5867_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4(lean_object* v___x_5868_, lean_object* v_as_5869_, size_t v_sz_5870_, size_t v_i_5871_, lean_object* v_b_5872_){
_start:
{
lean_object* v_a_5874_; uint8_t v___x_5878_; 
v___x_5878_ = lean_usize_dec_lt(v_i_5871_, v_sz_5870_);
if (v___x_5878_ == 0)
{
return v_b_5872_;
}
else
{
lean_object* v_a_5879_; lean_object* v___x_5880_; uint8_t v___x_5881_; 
v_a_5879_ = lean_array_uget_borrowed(v_as_5869_, v_i_5871_);
v___x_5880_ = lean_array_get_size(v___x_5868_);
v___x_5881_ = lean_nat_dec_lt(v_a_5879_, v___x_5880_);
if (v___x_5881_ == 0)
{
lean_object* v___x_5882_; lean_object* v___x_5883_; 
lean_dec_ref(v_b_5872_);
v___x_5882_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2);
v___x_5883_ = l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3(v___x_5882_);
if (lean_obj_tag(v___x_5883_) == 0)
{
lean_object* v_a_5884_; 
v_a_5884_ = lean_ctor_get(v___x_5883_, 0);
lean_inc(v_a_5884_);
lean_dec_ref_known(v___x_5883_, 1);
return v_a_5884_;
}
else
{
lean_object* v_a_5885_; 
v_a_5885_ = lean_ctor_get(v___x_5883_, 0);
lean_inc(v_a_5885_);
lean_dec_ref_known(v___x_5883_, 1);
v_a_5874_ = v_a_5885_;
goto v___jp_5873_;
}
}
else
{
lean_object* v___x_5886_; lean_object* v___x_5887_; 
v___x_5886_ = lean_box(0);
v___x_5887_ = lean_array_get_borrowed(v___x_5886_, v___x_5868_, v_a_5879_);
if (lean_obj_tag(v___x_5887_) == 1)
{
lean_object* v_val_5888_; lean_object* v___x_5889_; lean_object* v___x_5890_; 
v_val_5888_ = lean_ctor_get(v___x_5887_, 0);
v___x_5889_ = lean_box(v___x_5881_);
v___x_5890_ = lean_array_set(v_b_5872_, v_val_5888_, v___x_5889_);
v_a_5874_ = v___x_5890_;
goto v___jp_5873_;
}
else
{
v_a_5874_ = v_b_5872_;
goto v___jp_5873_;
}
}
}
v___jp_5873_:
{
size_t v___x_5875_; size_t v___x_5876_; 
v___x_5875_ = ((size_t)1ULL);
v___x_5876_ = lean_usize_add(v_i_5871_, v___x_5875_);
v_i_5871_ = v___x_5876_;
v_b_5872_ = v_a_5874_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___boxed(lean_object* v___x_5891_, lean_object* v_as_5892_, lean_object* v_sz_5893_, lean_object* v_i_5894_, lean_object* v_b_5895_){
_start:
{
size_t v_sz_boxed_5896_; size_t v_i_boxed_5897_; lean_object* v_res_5898_; 
v_sz_boxed_5896_ = lean_unbox_usize(v_sz_5893_);
lean_dec(v_sz_5893_);
v_i_boxed_5897_ = lean_unbox_usize(v_i_5894_);
lean_dec(v_i_5894_);
v_res_5898_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4(v___x_5891_, v_as_5892_, v_sz_boxed_5896_, v_i_boxed_5897_, v_b_5895_);
lean_dec_ref(v_as_5892_);
lean_dec_ref(v___x_5891_);
return v_res_5898_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(lean_object* v_upperBound_5899_, lean_object* v_a_5900_, lean_object* v_b_5901_){
_start:
{
uint8_t v___x_5902_; 
v___x_5902_ = lean_nat_dec_lt(v_a_5900_, v_upperBound_5899_);
if (v___x_5902_ == 0)
{
lean_dec(v_a_5900_);
return v_b_5901_;
}
else
{
lean_object* v_snd_5903_; lean_object* v_snd_5904_; lean_object* v_fst_5905_; lean_object* v___x_5907_; uint8_t v_isShared_5908_; uint8_t v_isSharedCheck_5971_; 
v_snd_5903_ = lean_ctor_get(v_b_5901_, 1);
lean_inc(v_snd_5903_);
v_snd_5904_ = lean_ctor_get(v_snd_5903_, 1);
lean_inc(v_snd_5904_);
v_fst_5905_ = lean_ctor_get(v_b_5901_, 0);
v_isSharedCheck_5971_ = !lean_is_exclusive(v_b_5901_);
if (v_isSharedCheck_5971_ == 0)
{
lean_object* v_unused_5972_; 
v_unused_5972_ = lean_ctor_get(v_b_5901_, 1);
lean_dec(v_unused_5972_);
v___x_5907_ = v_b_5901_;
v_isShared_5908_ = v_isSharedCheck_5971_;
goto v_resetjp_5906_;
}
else
{
lean_inc(v_fst_5905_);
lean_dec(v_b_5901_);
v___x_5907_ = lean_box(0);
v_isShared_5908_ = v_isSharedCheck_5971_;
goto v_resetjp_5906_;
}
v_resetjp_5906_:
{
lean_object* v_fst_5909_; lean_object* v___x_5911_; uint8_t v_isShared_5912_; uint8_t v_isSharedCheck_5969_; 
v_fst_5909_ = lean_ctor_get(v_snd_5903_, 0);
v_isSharedCheck_5969_ = !lean_is_exclusive(v_snd_5903_);
if (v_isSharedCheck_5969_ == 0)
{
lean_object* v_unused_5970_; 
v_unused_5970_ = lean_ctor_get(v_snd_5903_, 1);
lean_dec(v_unused_5970_);
v___x_5911_ = v_snd_5903_;
v_isShared_5912_ = v_isSharedCheck_5969_;
goto v_resetjp_5910_;
}
else
{
lean_inc(v_fst_5909_);
lean_dec(v_snd_5903_);
v___x_5911_ = lean_box(0);
v_isShared_5912_ = v_isSharedCheck_5969_;
goto v_resetjp_5910_;
}
v_resetjp_5910_:
{
lean_object* v_array_5913_; lean_object* v_start_5914_; lean_object* v_stop_5915_; uint8_t v___x_5916_; 
v_array_5913_ = lean_ctor_get(v_snd_5904_, 0);
v_start_5914_ = lean_ctor_get(v_snd_5904_, 1);
v_stop_5915_ = lean_ctor_get(v_snd_5904_, 2);
v___x_5916_ = lean_nat_dec_lt(v_start_5914_, v_stop_5915_);
if (v___x_5916_ == 0)
{
lean_object* v___x_5918_; 
lean_dec(v_a_5900_);
if (v_isShared_5912_ == 0)
{
v___x_5918_ = v___x_5911_;
goto v_reusejp_5917_;
}
else
{
lean_object* v_reuseFailAlloc_5922_; 
v_reuseFailAlloc_5922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5922_, 0, v_fst_5909_);
lean_ctor_set(v_reuseFailAlloc_5922_, 1, v_snd_5904_);
v___x_5918_ = v_reuseFailAlloc_5922_;
goto v_reusejp_5917_;
}
v_reusejp_5917_:
{
lean_object* v___x_5920_; 
if (v_isShared_5908_ == 0)
{
lean_ctor_set(v___x_5907_, 1, v___x_5918_);
v___x_5920_ = v___x_5907_;
goto v_reusejp_5919_;
}
else
{
lean_object* v_reuseFailAlloc_5921_; 
v_reuseFailAlloc_5921_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5921_, 0, v_fst_5905_);
lean_ctor_set(v_reuseFailAlloc_5921_, 1, v___x_5918_);
v___x_5920_ = v_reuseFailAlloc_5921_;
goto v_reusejp_5919_;
}
v_reusejp_5919_:
{
return v___x_5920_;
}
}
}
else
{
lean_object* v___x_5924_; uint8_t v_isShared_5925_; uint8_t v_isSharedCheck_5965_; 
lean_inc(v_stop_5915_);
lean_inc(v_start_5914_);
lean_inc_ref(v_array_5913_);
v_isSharedCheck_5965_ = !lean_is_exclusive(v_snd_5904_);
if (v_isSharedCheck_5965_ == 0)
{
lean_object* v_unused_5966_; lean_object* v_unused_5967_; lean_object* v_unused_5968_; 
v_unused_5966_ = lean_ctor_get(v_snd_5904_, 2);
lean_dec(v_unused_5966_);
v_unused_5967_ = lean_ctor_get(v_snd_5904_, 1);
lean_dec(v_unused_5967_);
v_unused_5968_ = lean_ctor_get(v_snd_5904_, 0);
lean_dec(v_unused_5968_);
v___x_5924_ = v_snd_5904_;
v_isShared_5925_ = v_isSharedCheck_5965_;
goto v_resetjp_5923_;
}
else
{
lean_dec(v_snd_5904_);
v___x_5924_ = lean_box(0);
v_isShared_5925_ = v_isSharedCheck_5965_;
goto v_resetjp_5923_;
}
v_resetjp_5923_:
{
lean_object* v_array_5926_; lean_object* v_start_5927_; lean_object* v_stop_5928_; lean_object* v___x_5929_; lean_object* v___x_5930_; lean_object* v___x_5931_; lean_object* v___x_5933_; 
v_array_5926_ = lean_ctor_get(v_fst_5909_, 0);
v_start_5927_ = lean_ctor_get(v_fst_5909_, 1);
v_stop_5928_ = lean_ctor_get(v_fst_5909_, 2);
v___x_5929_ = lean_array_fget(v_array_5913_, v_start_5914_);
v___x_5930_ = lean_unsigned_to_nat(1u);
v___x_5931_ = lean_nat_add(v_start_5914_, v___x_5930_);
lean_dec(v_start_5914_);
if (v_isShared_5925_ == 0)
{
lean_ctor_set(v___x_5924_, 1, v___x_5931_);
v___x_5933_ = v___x_5924_;
goto v_reusejp_5932_;
}
else
{
lean_object* v_reuseFailAlloc_5964_; 
v_reuseFailAlloc_5964_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5964_, 0, v_array_5913_);
lean_ctor_set(v_reuseFailAlloc_5964_, 1, v___x_5931_);
lean_ctor_set(v_reuseFailAlloc_5964_, 2, v_stop_5915_);
v___x_5933_ = v_reuseFailAlloc_5964_;
goto v_reusejp_5932_;
}
v_reusejp_5932_:
{
uint8_t v___x_5934_; 
v___x_5934_ = lean_nat_dec_lt(v_start_5927_, v_stop_5928_);
if (v___x_5934_ == 0)
{
lean_object* v___x_5936_; 
lean_dec(v___x_5929_);
lean_dec(v_a_5900_);
if (v_isShared_5912_ == 0)
{
lean_ctor_set(v___x_5911_, 1, v___x_5933_);
v___x_5936_ = v___x_5911_;
goto v_reusejp_5935_;
}
else
{
lean_object* v_reuseFailAlloc_5940_; 
v_reuseFailAlloc_5940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5940_, 0, v_fst_5909_);
lean_ctor_set(v_reuseFailAlloc_5940_, 1, v___x_5933_);
v___x_5936_ = v_reuseFailAlloc_5940_;
goto v_reusejp_5935_;
}
v_reusejp_5935_:
{
lean_object* v___x_5938_; 
if (v_isShared_5908_ == 0)
{
lean_ctor_set(v___x_5907_, 1, v___x_5936_);
v___x_5938_ = v___x_5907_;
goto v_reusejp_5937_;
}
else
{
lean_object* v_reuseFailAlloc_5939_; 
v_reuseFailAlloc_5939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5939_, 0, v_fst_5905_);
lean_ctor_set(v_reuseFailAlloc_5939_, 1, v___x_5936_);
v___x_5938_ = v_reuseFailAlloc_5939_;
goto v_reusejp_5937_;
}
v_reusejp_5937_:
{
return v___x_5938_;
}
}
}
else
{
lean_object* v___x_5942_; uint8_t v_isShared_5943_; uint8_t v_isSharedCheck_5960_; 
lean_inc(v_stop_5928_);
lean_inc(v_start_5927_);
lean_inc_ref(v_array_5926_);
v_isSharedCheck_5960_ = !lean_is_exclusive(v_fst_5909_);
if (v_isSharedCheck_5960_ == 0)
{
lean_object* v_unused_5961_; lean_object* v_unused_5962_; lean_object* v_unused_5963_; 
v_unused_5961_ = lean_ctor_get(v_fst_5909_, 2);
lean_dec(v_unused_5961_);
v_unused_5962_ = lean_ctor_get(v_fst_5909_, 1);
lean_dec(v_unused_5962_);
v_unused_5963_ = lean_ctor_get(v_fst_5909_, 0);
lean_dec(v_unused_5963_);
v___x_5942_ = v_fst_5909_;
v_isShared_5943_ = v_isSharedCheck_5960_;
goto v_resetjp_5941_;
}
else
{
lean_dec(v_fst_5909_);
v___x_5942_ = lean_box(0);
v_isShared_5943_ = v_isSharedCheck_5960_;
goto v_resetjp_5941_;
}
v_resetjp_5941_:
{
lean_object* v___x_5944_; lean_object* v___x_5945_; lean_object* v___x_5947_; 
v___x_5944_ = lean_array_fget(v_array_5926_, v_start_5927_);
v___x_5945_ = lean_nat_add(v_start_5927_, v___x_5930_);
lean_dec(v_start_5927_);
if (v_isShared_5943_ == 0)
{
lean_ctor_set(v___x_5942_, 1, v___x_5945_);
v___x_5947_ = v___x_5942_;
goto v_reusejp_5946_;
}
else
{
lean_object* v_reuseFailAlloc_5959_; 
v_reuseFailAlloc_5959_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5959_, 0, v_array_5926_);
lean_ctor_set(v_reuseFailAlloc_5959_, 1, v___x_5945_);
lean_ctor_set(v_reuseFailAlloc_5959_, 2, v_stop_5928_);
v___x_5947_ = v_reuseFailAlloc_5959_;
goto v_reusejp_5946_;
}
v_reusejp_5946_:
{
size_t v_sz_5948_; size_t v___x_5949_; lean_object* v___x_5950_; lean_object* v___x_5952_; 
v_sz_5948_ = lean_array_size(v___x_5944_);
v___x_5949_ = ((size_t)0ULL);
v___x_5950_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4(v___x_5929_, v___x_5944_, v_sz_5948_, v___x_5949_, v_fst_5905_);
lean_dec(v___x_5944_);
lean_dec(v___x_5929_);
if (v_isShared_5912_ == 0)
{
lean_ctor_set(v___x_5911_, 1, v___x_5933_);
lean_ctor_set(v___x_5911_, 0, v___x_5947_);
v___x_5952_ = v___x_5911_;
goto v_reusejp_5951_;
}
else
{
lean_object* v_reuseFailAlloc_5958_; 
v_reuseFailAlloc_5958_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5958_, 0, v___x_5947_);
lean_ctor_set(v_reuseFailAlloc_5958_, 1, v___x_5933_);
v___x_5952_ = v_reuseFailAlloc_5958_;
goto v_reusejp_5951_;
}
v_reusejp_5951_:
{
lean_object* v___x_5954_; 
if (v_isShared_5908_ == 0)
{
lean_ctor_set(v___x_5907_, 1, v___x_5952_);
lean_ctor_set(v___x_5907_, 0, v___x_5950_);
v___x_5954_ = v___x_5907_;
goto v_reusejp_5953_;
}
else
{
lean_object* v_reuseFailAlloc_5957_; 
v_reuseFailAlloc_5957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5957_, 0, v___x_5950_);
lean_ctor_set(v_reuseFailAlloc_5957_, 1, v___x_5952_);
v___x_5954_ = v_reuseFailAlloc_5957_;
goto v_reusejp_5953_;
}
v_reusejp_5953_:
{
lean_object* v___x_5955_; 
v___x_5955_ = lean_nat_add(v_a_5900_, v___x_5930_);
lean_dec(v_a_5900_);
v_a_5900_ = v___x_5955_;
v_b_5901_ = v___x_5954_;
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
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg___boxed(lean_object* v_upperBound_5973_, lean_object* v_a_5974_, lean_object* v_b_5975_){
_start:
{
lean_object* v_res_5976_; 
v_res_5976_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(v_upperBound_5973_, v_a_5974_, v_b_5975_);
lean_dec(v_upperBound_5973_);
return v_res_5976_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerms_erase___closed__1(void){
_start:
{
lean_object* v___x_5978_; lean_object* v___x_5979_; lean_object* v___x_5980_; lean_object* v___x_5981_; lean_object* v___x_5982_; lean_object* v___x_5983_; 
v___x_5978_ = ((lean_object*)(l_Lean_Elab_FixedParamPerms_erase___closed__0));
v___x_5979_ = lean_unsigned_to_nat(2u);
v___x_5980_ = lean_unsigned_to_nat(457u);
v___x_5981_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0));
v___x_5982_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5983_ = l_mkPanicMessageWithDecl(v___x_5982_, v___x_5981_, v___x_5980_, v___x_5979_, v___x_5978_);
return v___x_5983_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerms_erase___closed__3(void){
_start:
{
lean_object* v___x_5985_; lean_object* v___x_5986_; lean_object* v___x_5987_; lean_object* v___x_5988_; lean_object* v___x_5989_; lean_object* v___x_5990_; 
v___x_5985_ = ((lean_object*)(l_Lean_Elab_FixedParamPerms_erase___closed__2));
v___x_5986_ = lean_unsigned_to_nat(2u);
v___x_5987_ = lean_unsigned_to_nat(458u);
v___x_5988_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0));
v___x_5989_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5990_ = l_mkPanicMessageWithDecl(v___x_5989_, v___x_5988_, v___x_5987_, v___x_5986_, v___x_5985_);
return v___x_5990_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerms_erase___closed__5(void){
_start:
{
lean_object* v___x_5992_; lean_object* v___x_5993_; lean_object* v___x_5994_; lean_object* v___x_5995_; lean_object* v___x_5996_; lean_object* v___x_5997_; 
v___x_5992_ = ((lean_object*)(l_Lean_Elab_FixedParamPerms_erase___closed__4));
v___x_5993_ = lean_unsigned_to_nat(2u);
v___x_5994_ = lean_unsigned_to_nat(456u);
v___x_5995_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0));
v___x_5996_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5997_ = l_mkPanicMessageWithDecl(v___x_5996_, v___x_5995_, v___x_5994_, v___x_5993_, v___x_5992_);
return v___x_5997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerms_erase(lean_object* v_fixedParamPerms_5998_, lean_object* v_xs_5999_, lean_object* v_toErase_6000_){
_start:
{
lean_object* v___x_6086_; lean_object* v___x_6087_; uint8_t v___x_6088_; 
v___x_6086_ = lean_unsigned_to_nat(0u);
v___x_6087_ = lean_array_get_size(v_xs_5999_);
v___x_6088_ = lean_nat_dec_lt(v___x_6086_, v___x_6087_);
if (v___x_6088_ == 0)
{
goto v___jp_6001_;
}
else
{
if (v___x_6088_ == 0)
{
goto v___jp_6001_;
}
else
{
size_t v___x_6089_; size_t v___x_6090_; uint8_t v___x_6091_; 
v___x_6089_ = ((size_t)0ULL);
v___x_6090_ = lean_usize_of_nat(v___x_6087_);
v___x_6091_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11(v_xs_5999_, v___x_6089_, v___x_6090_);
if (v___x_6091_ == 0)
{
goto v___jp_6001_;
}
else
{
lean_object* v___x_6092_; lean_object* v___x_6093_; 
lean_dec_ref(v_toErase_6000_);
lean_dec_ref(v_xs_5999_);
lean_dec_ref(v_fixedParamPerms_5998_);
v___x_6092_ = lean_obj_once(&l_Lean_Elab_FixedParamPerms_erase___closed__5, &l_Lean_Elab_FixedParamPerms_erase___closed__5_once, _init_l_Lean_Elab_FixedParamPerms_erase___closed__5);
v___x_6093_ = l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(v___x_6092_);
return v___x_6093_;
}
}
}
v___jp_6001_:
{
lean_object* v_numFixed_6002_; lean_object* v_perms_6003_; lean_object* v_revDeps_6004_; lean_object* v___x_6005_; uint8_t v___x_6006_; 
v_numFixed_6002_ = lean_ctor_get(v_fixedParamPerms_5998_, 0);
v_perms_6003_ = lean_ctor_get(v_fixedParamPerms_5998_, 1);
lean_inc_ref(v_perms_6003_);
v_revDeps_6004_ = lean_ctor_get(v_fixedParamPerms_5998_, 2);
lean_inc_ref(v_revDeps_6004_);
v___x_6005_ = lean_array_get_size(v_xs_5999_);
v___x_6006_ = lean_nat_dec_eq(v_numFixed_6002_, v___x_6005_);
if (v___x_6006_ == 0)
{
lean_object* v___x_6007_; lean_object* v___x_6008_; 
lean_dec_ref(v_revDeps_6004_);
lean_dec_ref(v_perms_6003_);
lean_dec_ref(v_toErase_6000_);
lean_dec_ref(v_xs_5999_);
lean_dec_ref(v_fixedParamPerms_5998_);
v___x_6007_ = lean_obj_once(&l_Lean_Elab_FixedParamPerms_erase___closed__1, &l_Lean_Elab_FixedParamPerms_erase___closed__1_once, _init_l_Lean_Elab_FixedParamPerms_erase___closed__1);
v___x_6008_ = l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(v___x_6007_);
return v___x_6008_;
}
else
{
lean_object* v___x_6009_; lean_object* v___x_6010_; uint8_t v___x_6011_; 
v___x_6009_ = lean_array_get_size(v_toErase_6000_);
v___x_6010_ = lean_array_get_size(v_perms_6003_);
v___x_6011_ = lean_nat_dec_eq(v___x_6009_, v___x_6010_);
if (v___x_6011_ == 0)
{
lean_object* v___x_6012_; lean_object* v___x_6013_; 
lean_dec_ref(v_revDeps_6004_);
lean_dec_ref(v_perms_6003_);
lean_dec_ref(v_toErase_6000_);
lean_dec_ref(v_xs_5999_);
lean_dec_ref(v_fixedParamPerms_5998_);
v___x_6012_ = lean_obj_once(&l_Lean_Elab_FixedParamPerms_erase___closed__3, &l_Lean_Elab_FixedParamPerms_erase___closed__3_once, _init_l_Lean_Elab_FixedParamPerms_erase___closed__3);
v___x_6013_ = l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(v___x_6012_);
return v___x_6013_;
}
else
{
lean_object* v___x_6014_; uint8_t v_changed_6015_; lean_object* v___x_6016_; lean_object* v_mask_6017_; lean_object* v___x_6018_; lean_object* v___x_6019_; lean_object* v___x_6020_; lean_object* v___x_6021_; lean_object* v___x_6022_; lean_object* v_fst_6023_; lean_object* v___x_6025_; uint8_t v_isShared_6026_; uint8_t v_isSharedCheck_6084_; 
v___x_6014_ = lean_unsigned_to_nat(0u);
v_changed_6015_ = 0;
v___x_6016_ = lean_box(v_changed_6015_);
lean_inc(v_numFixed_6002_);
v_mask_6017_ = lean_mk_array(v_numFixed_6002_, v___x_6016_);
v___x_6018_ = l_Array_toSubarray___redArg(v_toErase_6000_, v___x_6014_, v___x_6009_);
lean_inc_ref(v_perms_6003_);
v___x_6019_ = l_Array_toSubarray___redArg(v_perms_6003_, v___x_6014_, v___x_6010_);
v___x_6020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6020_, 0, v___x_6018_);
lean_ctor_set(v___x_6020_, 1, v___x_6019_);
v___x_6021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6021_, 0, v_mask_6017_);
lean_ctor_set(v___x_6021_, 1, v___x_6020_);
v___x_6022_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(v___x_6009_, v___x_6014_, v___x_6021_);
v_fst_6023_ = lean_ctor_get(v___x_6022_, 0);
v_isSharedCheck_6084_ = !lean_is_exclusive(v___x_6022_);
if (v_isSharedCheck_6084_ == 0)
{
lean_object* v_unused_6085_; 
v_unused_6085_ = lean_ctor_get(v___x_6022_, 1);
lean_dec(v_unused_6085_);
v___x_6025_ = v___x_6022_;
v_isShared_6026_ = v_isSharedCheck_6084_;
goto v_resetjp_6024_;
}
else
{
lean_inc(v_fst_6023_);
lean_dec(v___x_6022_);
v___x_6025_ = lean_box(0);
v_isShared_6026_ = v_isSharedCheck_6084_;
goto v_resetjp_6024_;
}
v_resetjp_6024_:
{
lean_object* v___x_6027_; lean_object* v___x_6029_; 
v___x_6027_ = lean_box(v___x_6011_);
if (v_isShared_6026_ == 0)
{
lean_ctor_set(v___x_6025_, 1, v___x_6027_);
v___x_6029_ = v___x_6025_;
goto v_reusejp_6028_;
}
else
{
lean_object* v_reuseFailAlloc_6083_; 
v_reuseFailAlloc_6083_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6083_, 0, v_fst_6023_);
lean_ctor_set(v_reuseFailAlloc_6083_, 1, v___x_6027_);
v___x_6029_ = v_reuseFailAlloc_6083_;
goto v_reusejp_6028_;
}
v_reusejp_6028_:
{
lean_object* v___x_6030_; lean_object* v___x_6032_; uint8_t v_isShared_6033_; uint8_t v_isSharedCheck_6079_; 
v___x_6030_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg(v_perms_6003_, v___x_6009_, v___x_6010_, v_fixedParamPerms_5998_, v___x_6029_);
v_isSharedCheck_6079_ = !lean_is_exclusive(v_fixedParamPerms_5998_);
if (v_isSharedCheck_6079_ == 0)
{
lean_object* v_unused_6080_; lean_object* v_unused_6081_; lean_object* v_unused_6082_; 
v_unused_6080_ = lean_ctor_get(v_fixedParamPerms_5998_, 2);
lean_dec(v_unused_6080_);
v_unused_6081_ = lean_ctor_get(v_fixedParamPerms_5998_, 1);
lean_dec(v_unused_6081_);
v_unused_6082_ = lean_ctor_get(v_fixedParamPerms_5998_, 0);
lean_dec(v_unused_6082_);
v___x_6032_ = v_fixedParamPerms_5998_;
v_isShared_6033_ = v_isSharedCheck_6079_;
goto v_resetjp_6031_;
}
else
{
lean_dec(v_fixedParamPerms_5998_);
v___x_6032_ = lean_box(0);
v_isShared_6033_ = v_isSharedCheck_6079_;
goto v_resetjp_6031_;
}
v_resetjp_6031_:
{
lean_object* v_fst_6034_; lean_object* v___x_6036_; uint8_t v_isShared_6037_; uint8_t v_isSharedCheck_6077_; 
v_fst_6034_ = lean_ctor_get(v___x_6030_, 0);
v_isSharedCheck_6077_ = !lean_is_exclusive(v___x_6030_);
if (v_isSharedCheck_6077_ == 0)
{
lean_object* v_unused_6078_; 
v_unused_6078_ = lean_ctor_get(v___x_6030_, 1);
lean_dec(v_unused_6078_);
v___x_6036_ = v___x_6030_;
v_isShared_6037_ = v_isSharedCheck_6077_;
goto v_resetjp_6035_;
}
else
{
lean_inc(v_fst_6034_);
lean_dec(v___x_6030_);
v___x_6036_ = lean_box(0);
v_isShared_6037_ = v_isSharedCheck_6077_;
goto v_resetjp_6035_;
}
v_resetjp_6035_:
{
lean_object* v___x_6038_; lean_object* v___x_6039_; lean_object* v___x_6040_; lean_object* v___x_6041_; lean_object* v___x_6043_; 
v___x_6038_ = lean_array_get_size(v_fst_6034_);
v___x_6039_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0));
v___x_6040_ = l_Array_toSubarray___redArg(v_fst_6034_, v___x_6014_, v___x_6038_);
v___x_6041_ = l_Array_toSubarray___redArg(v_xs_5999_, v___x_6014_, v___x_6005_);
if (v_isShared_6037_ == 0)
{
lean_ctor_set(v___x_6036_, 1, v___x_6041_);
lean_ctor_set(v___x_6036_, 0, v___x_6040_);
v___x_6043_ = v___x_6036_;
goto v_reusejp_6042_;
}
else
{
lean_object* v_reuseFailAlloc_6076_; 
v_reuseFailAlloc_6076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6076_, 0, v___x_6040_);
lean_ctor_set(v_reuseFailAlloc_6076_, 1, v___x_6041_);
v___x_6043_ = v_reuseFailAlloc_6076_;
goto v_reusejp_6042_;
}
v_reusejp_6042_:
{
lean_object* v___x_6044_; lean_object* v___x_6045_; lean_object* v___x_6046_; lean_object* v___x_6047_; lean_object* v_snd_6048_; lean_object* v_snd_6049_; lean_object* v_fst_6050_; lean_object* v_fst_6051_; lean_object* v___x_6053_; uint8_t v_isShared_6054_; uint8_t v_isSharedCheck_6074_; 
v___x_6044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6044_, 0, v___x_6039_);
lean_ctor_set(v___x_6044_, 1, v___x_6043_);
v___x_6045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6045_, 0, v___x_6039_);
lean_ctor_set(v___x_6045_, 1, v___x_6044_);
v___x_6046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6046_, 0, v___x_6039_);
lean_ctor_set(v___x_6046_, 1, v___x_6045_);
v___x_6047_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(v___x_6038_, v___x_6014_, v___x_6046_);
v_snd_6048_ = lean_ctor_get(v___x_6047_, 1);
lean_inc(v_snd_6048_);
v_snd_6049_ = lean_ctor_get(v_snd_6048_, 1);
lean_inc(v_snd_6049_);
v_fst_6050_ = lean_ctor_get(v___x_6047_, 0);
lean_inc(v_fst_6050_);
lean_dec_ref(v___x_6047_);
v_fst_6051_ = lean_ctor_get(v_snd_6048_, 0);
v_isSharedCheck_6074_ = !lean_is_exclusive(v_snd_6048_);
if (v_isSharedCheck_6074_ == 0)
{
lean_object* v_unused_6075_; 
v_unused_6075_ = lean_ctor_get(v_snd_6048_, 1);
lean_dec(v_unused_6075_);
v___x_6053_ = v_snd_6048_;
v_isShared_6054_ = v_isSharedCheck_6074_;
goto v_resetjp_6052_;
}
else
{
lean_inc(v_fst_6051_);
lean_dec(v_snd_6048_);
v___x_6053_ = lean_box(0);
v_isShared_6054_ = v_isSharedCheck_6074_;
goto v_resetjp_6052_;
}
v_resetjp_6052_:
{
lean_object* v_fst_6055_; lean_object* v___x_6057_; uint8_t v_isShared_6058_; uint8_t v_isSharedCheck_6072_; 
v_fst_6055_ = lean_ctor_get(v_snd_6049_, 0);
v_isSharedCheck_6072_ = !lean_is_exclusive(v_snd_6049_);
if (v_isSharedCheck_6072_ == 0)
{
lean_object* v_unused_6073_; 
v_unused_6073_ = lean_ctor_get(v_snd_6049_, 1);
lean_dec(v_unused_6073_);
v___x_6057_ = v_snd_6049_;
v_isShared_6058_ = v_isSharedCheck_6072_;
goto v_resetjp_6056_;
}
else
{
lean_inc(v_fst_6055_);
lean_dec(v_snd_6049_);
v___x_6057_ = lean_box(0);
v_isShared_6058_ = v_isSharedCheck_6072_;
goto v_resetjp_6056_;
}
v_resetjp_6056_:
{
lean_object* v___x_6059_; size_t v_sz_6060_; size_t v___x_6061_; lean_object* v___x_6062_; lean_object* v___x_6064_; 
v___x_6059_ = lean_array_get_size(v_fst_6055_);
v_sz_6060_ = lean_array_size(v_perms_6003_);
v___x_6061_ = ((size_t)0ULL);
v___x_6062_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2(v_fst_6050_, v_sz_6060_, v___x_6061_, v_perms_6003_);
lean_dec(v_fst_6050_);
if (v_isShared_6033_ == 0)
{
lean_ctor_set(v___x_6032_, 1, v___x_6062_);
lean_ctor_set(v___x_6032_, 0, v___x_6059_);
v___x_6064_ = v___x_6032_;
goto v_reusejp_6063_;
}
else
{
lean_object* v_reuseFailAlloc_6071_; 
v_reuseFailAlloc_6071_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6071_, 0, v___x_6059_);
lean_ctor_set(v_reuseFailAlloc_6071_, 1, v___x_6062_);
lean_ctor_set(v_reuseFailAlloc_6071_, 2, v_revDeps_6004_);
v___x_6064_ = v_reuseFailAlloc_6071_;
goto v_reusejp_6063_;
}
v_reusejp_6063_:
{
lean_object* v___x_6066_; 
if (v_isShared_6058_ == 0)
{
lean_ctor_set(v___x_6057_, 1, v_fst_6051_);
v___x_6066_ = v___x_6057_;
goto v_reusejp_6065_;
}
else
{
lean_object* v_reuseFailAlloc_6070_; 
v_reuseFailAlloc_6070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6070_, 0, v_fst_6055_);
lean_ctor_set(v_reuseFailAlloc_6070_, 1, v_fst_6051_);
v___x_6066_ = v_reuseFailAlloc_6070_;
goto v_reusejp_6065_;
}
v_reusejp_6065_:
{
lean_object* v___x_6068_; 
if (v_isShared_6054_ == 0)
{
lean_ctor_set(v___x_6053_, 1, v___x_6066_);
lean_ctor_set(v___x_6053_, 0, v___x_6064_);
v___x_6068_ = v___x_6053_;
goto v_reusejp_6067_;
}
else
{
lean_object* v_reuseFailAlloc_6069_; 
v_reuseFailAlloc_6069_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6069_, 0, v___x_6064_);
lean_ctor_set(v_reuseFailAlloc_6069_, 1, v___x_6066_);
v___x_6068_ = v_reuseFailAlloc_6069_;
goto v_reusejp_6067_;
}
v_reusejp_6067_:
{
return v___x_6068_;
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
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6(lean_object* v_upperBound_6094_, lean_object* v___x_6095_, lean_object* v_fixedParamPerms_6096_, lean_object* v_next_6097_, lean_object* v___x_6098_, lean_object* v___x_6099_, lean_object* v_inst_6100_, lean_object* v_R_6101_, lean_object* v_a_6102_, lean_object* v_b_6103_, lean_object* v_c_6104_){
_start:
{
lean_object* v___x_6105_; 
v___x_6105_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(v_upperBound_6094_, v___x_6095_, v_fixedParamPerms_6096_, v_next_6097_, v___x_6098_, v___x_6099_, v_a_6102_, v_b_6103_);
return v___x_6105_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___boxed(lean_object* v_upperBound_6106_, lean_object* v___x_6107_, lean_object* v_fixedParamPerms_6108_, lean_object* v_next_6109_, lean_object* v___x_6110_, lean_object* v___x_6111_, lean_object* v_inst_6112_, lean_object* v_R_6113_, lean_object* v_a_6114_, lean_object* v_b_6115_, lean_object* v_c_6116_){
_start:
{
lean_object* v_res_6117_; 
v_res_6117_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6(v_upperBound_6106_, v___x_6107_, v_fixedParamPerms_6108_, v_next_6109_, v___x_6110_, v___x_6111_, v_inst_6112_, v_R_6113_, v_a_6114_, v_b_6115_, v_c_6116_);
lean_dec(v___x_6111_);
lean_dec(v___x_6110_);
lean_dec(v_next_6109_);
lean_dec_ref(v_fixedParamPerms_6108_);
lean_dec_ref(v___x_6107_);
lean_dec(v_upperBound_6106_);
return v_res_6117_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7(lean_object* v_upperBound_6118_, lean_object* v___x_6119_, lean_object* v___x_6120_, lean_object* v___x_6121_, lean_object* v_fixedParamPerms_6122_, lean_object* v_inst_6123_, lean_object* v_R_6124_, lean_object* v_a_6125_, lean_object* v_b_6126_, lean_object* v_c_6127_){
_start:
{
lean_object* v___x_6128_; 
v___x_6128_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(v_upperBound_6118_, v___x_6119_, v___x_6120_, v___x_6121_, v_fixedParamPerms_6122_, v_a_6125_, v_b_6126_);
return v___x_6128_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___boxed(lean_object* v_upperBound_6129_, lean_object* v___x_6130_, lean_object* v___x_6131_, lean_object* v___x_6132_, lean_object* v_fixedParamPerms_6133_, lean_object* v_inst_6134_, lean_object* v_R_6135_, lean_object* v_a_6136_, lean_object* v_b_6137_, lean_object* v_c_6138_){
_start:
{
lean_object* v_res_6139_; 
v_res_6139_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7(v_upperBound_6129_, v___x_6130_, v___x_6131_, v___x_6132_, v_fixedParamPerms_6133_, v_inst_6134_, v_R_6135_, v_a_6136_, v_b_6137_, v_c_6138_);
lean_dec(v_a_6136_);
lean_dec_ref(v_fixedParamPerms_6133_);
lean_dec(v___x_6132_);
lean_dec(v___x_6131_);
lean_dec_ref(v___x_6130_);
lean_dec(v_upperBound_6129_);
return v_res_6139_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8(lean_object* v___x_6140_, lean_object* v___x_6141_, lean_object* v___x_6142_, lean_object* v_fixedParamPerms_6143_, lean_object* v_inst_6144_, lean_object* v_a_6145_){
_start:
{
lean_object* v___x_6146_; 
v___x_6146_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg(v___x_6140_, v___x_6141_, v___x_6142_, v_fixedParamPerms_6143_, v_a_6145_);
return v___x_6146_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___boxed(lean_object* v___x_6147_, lean_object* v___x_6148_, lean_object* v___x_6149_, lean_object* v_fixedParamPerms_6150_, lean_object* v_inst_6151_, lean_object* v_a_6152_){
_start:
{
lean_object* v_res_6153_; 
v_res_6153_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8(v___x_6147_, v___x_6148_, v___x_6149_, v_fixedParamPerms_6150_, v_inst_6151_, v_a_6152_);
lean_dec_ref(v_fixedParamPerms_6150_);
lean_dec(v___x_6149_);
lean_dec(v___x_6148_);
lean_dec_ref(v___x_6147_);
return v_res_6153_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9(lean_object* v_upperBound_6154_, lean_object* v_inst_6155_, lean_object* v_R_6156_, lean_object* v_a_6157_, lean_object* v_b_6158_, lean_object* v_c_6159_){
_start:
{
lean_object* v___x_6160_; 
v___x_6160_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(v_upperBound_6154_, v_a_6157_, v_b_6158_);
return v___x_6160_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___boxed(lean_object* v_upperBound_6161_, lean_object* v_inst_6162_, lean_object* v_R_6163_, lean_object* v_a_6164_, lean_object* v_b_6165_, lean_object* v_c_6166_){
_start:
{
lean_object* v_res_6167_; 
v_res_6167_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9(v_upperBound_6161_, v_inst_6162_, v_R_6163_, v_a_6164_, v_b_6165_, v_c_6166_);
lean_dec(v_upperBound_6161_);
return v_res_6167_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10(lean_object* v_upperBound_6168_, lean_object* v_inst_6169_, lean_object* v_R_6170_, lean_object* v_a_6171_, lean_object* v_b_6172_, lean_object* v_c_6173_){
_start:
{
lean_object* v___x_6174_; 
v___x_6174_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(v_upperBound_6168_, v_a_6171_, v_b_6172_);
return v___x_6174_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___boxed(lean_object* v_upperBound_6175_, lean_object* v_inst_6176_, lean_object* v_R_6177_, lean_object* v_a_6178_, lean_object* v_b_6179_, lean_object* v_c_6180_){
_start:
{
lean_object* v_res_6181_; 
v_res_6181_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10(v_upperBound_6175_, v_inst_6176_, v_R_6177_, v_a_6178_, v_b_6179_, v_c_6180_);
lean_dec(v_upperBound_6175_);
return v_res_6181_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7(lean_object* v_upperBound_6182_, lean_object* v___x_6183_, lean_object* v_fixedParamPerms_6184_, lean_object* v___x_6185_, lean_object* v___x_6186_, lean_object* v_inst_6187_, lean_object* v_R_6188_, lean_object* v_a_6189_, lean_object* v_b_6190_, lean_object* v_c_6191_){
_start:
{
lean_object* v___x_6192_; 
v___x_6192_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7___redArg(v_upperBound_6182_, v___x_6183_, v_fixedParamPerms_6184_, v___x_6185_, v___x_6186_, v_a_6189_, v_b_6190_);
return v___x_6192_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7___boxed(lean_object* v_upperBound_6193_, lean_object* v___x_6194_, lean_object* v_fixedParamPerms_6195_, lean_object* v___x_6196_, lean_object* v___x_6197_, lean_object* v_inst_6198_, lean_object* v_R_6199_, lean_object* v_a_6200_, lean_object* v_b_6201_, lean_object* v_c_6202_){
_start:
{
lean_object* v_res_6203_; 
v_res_6203_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7(v_upperBound_6193_, v___x_6194_, v_fixedParamPerms_6195_, v___x_6196_, v___x_6197_, v_inst_6198_, v_R_6199_, v_a_6200_, v_b_6201_, v_c_6202_);
lean_dec(v___x_6197_);
lean_dec(v___x_6196_);
lean_dec_ref(v_fixedParamPerms_6195_);
lean_dec_ref(v___x_6194_);
lean_dec(v_upperBound_6193_);
return v_res_6203_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_6261_; uint8_t v___x_6262_; lean_object* v___x_6263_; lean_object* v___x_6264_; 
v___x_6261_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3));
v___x_6262_ = 0;
v___x_6263_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_));
v___x_6264_ = l_Lean_registerTraceClass(v___x_6261_, v___x_6262_, v___x_6263_);
return v___x_6264_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2____boxed(lean_object* v_a_6265_){
_start:
{
lean_object* v_res_6266_; 
v_res_6266_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_();
return v_res_6266_;
}
}
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_FixedParams(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_PreDefinition_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_FixedParams(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_PreDefinition_Basic(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_FixedParams(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_PreDefinition_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_FixedParams(builtin);
}
#ifdef __cplusplus
}
#endif
