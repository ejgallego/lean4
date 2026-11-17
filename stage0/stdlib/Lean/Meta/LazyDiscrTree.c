// Lean compiler output
// Module: Lean.Meta.LazyDiscrTree
// Imports: public import Lean.Meta.CompletionName public import Lean.Meta.DiscrTree import Init.Omega
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
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_isRecCore(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
uint8_t l_Lean_Meta_DiscrTree_hasNoindexAnnotation(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_reduceDT(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_ParamInfo_isImplicit(lean_object*);
uint8_t l_Lean_Meta_ParamInfo_isStrictImplicit(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkMVar(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
uint8_t l_Lean_Expr_isRawNatLit(lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
uint8_t l_Lean_isClass(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_mkNoindexAnnotation(lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
uint8_t l_Lean_Expr_isHeadBetaTarget(lean_object*, uint8_t);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_sort___override(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Expr_updateAppN(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
uint8_t l_IO_CancelToken_isSet(lean_object*);
extern lean_object* l_Lean_interruptExceptionId;
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
uint8_t l_Lean_instBEqLiteral_beq(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t l_Lean_Literal_hash(lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwIsDefEqStuck___redArg();
lean_object* l_Lean_MVarId_isReadOnlyOrSyntheticOpaque(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
uint8_t l_Lean_getReducibilityStatusCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isMatcherAppCore_x3f(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_getFirstDiscrPos(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_profileitIOUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
uint16_t l_Lean_OptionFlags_ofOptions(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedModuleData_default;
lean_object* l_Lean_AsyncConstantInfo_ofConstantInfo(lean_object*);
uint8_t l_Lean_AsyncConstantInfo_isUnsafe(lean_object*);
uint8_t l_Lean_Meta_allowCompletion(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Name_isInternalDetail(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Config_toConfigWithKey(lean_object*);
extern lean_object* l_Lean_Options_empty;
extern lean_object* l_Lean_NameSet_empty;
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_inheritedTraceOptions;
uint16_t lean_uint16_land(uint16_t, uint16_t);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(lean_object*);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* lean_task_get_own(lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_BaseIO_asTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_instReprLiteral_repr(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getLocalConstantInfos(lean_object*, uint8_t);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_logError___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_const_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_const_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_fvar_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_fvar_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_lit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_lit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_star_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_star_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_other_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_other_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_arrow_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_arrow_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_proj_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_proj_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedKey = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instBEqKey_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_instBEqKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_instBEqKey_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_instBEqKey___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instBEqKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LazyDiscrTree_instBEqKey = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instBEqKey___closed__0_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.Meta.LazyDiscrTree.Key.arrow"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__0_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__0_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__1_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.Meta.LazyDiscrTree.Key.other"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__2 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__2_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__2_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__3 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__3_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Meta.LazyDiscrTree.Key.star"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__4 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__4_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__4_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__5 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__5_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.Meta.LazyDiscrTree.Key.const"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__6 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__6_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__6_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__7 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__7_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__7_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__8 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__8_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Meta.LazyDiscrTree.Key.fvar"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__11 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__11_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__11_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__12 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__12_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__12_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__13 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__13_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Meta.LazyDiscrTree.Key.lit"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__14 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__14_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__14_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__15 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__15_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__15_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__16 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__16_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Meta.LazyDiscrTree.Key.proj"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__17 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__17_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__17_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__18 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__18_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__18_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__19 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__19_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_instReprKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_instReprKey_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_Meta_LazyDiscrTree_Key_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_Key_instHashable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_Key_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_Key_instHashable___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_Key_instHashable___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LazyDiscrTree_Key_instHashable = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_Key_instHashable___closed__0_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "_discr_tree_tmp"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId___closed__0_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 72, 223, 190, 190, 84, 146, 120)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId___closed__1_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_ignoreArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_ignoreArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_pushArgsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_pushArgsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__0_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zero"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__1_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__1_value),LEAN_SCALAR_PTR_LITERAL(51, 81, 163, 94, 71, 156, 90, 186)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__2 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__2_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__3 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__3_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__4 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__4_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__3_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__4_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__5 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__5_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "succ"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__6 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__6_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__6_value),LEAN_SCALAR_PTR_LITERAL(93, 165, 73, 246, 125, 40, 156, 223)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__7 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f_loop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f_loop___closed__0 = (const lean_object*)&l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f_loop___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f_loop(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f(lean_object*);
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAdd"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__0_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAdd"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__1_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__0_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__1_value),LEAN_SCALAR_PTR_LITERAL(134, 172, 115, 219, 189, 252, 56, 148)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__2 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__2_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Add"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__3 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__3_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "add"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__4 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__4_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__3_value),LEAN_SCALAR_PTR_LITERAL(123, 91, 0, 102, 155, 93, 69, 240)}};
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__4_value),LEAN_SCALAR_PTR_LITERAL(50, 34, 112, 179, 66, 45, 192, 92)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__5 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__5_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__4_value),LEAN_SCALAR_PTR_LITERAL(210, 189, 86, 121, 130, 22, 242, 236)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__6 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_shouldAddAsStar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_shouldAddAsStar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg();
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg___boxed(lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transform"};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__0;
static lean_once_cell_t l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__1;
static lean_once_cell_t l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___closed__0_value;
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__1_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__2 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getMatchKeyArgs(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getMatchKeyArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2;
static const lean_array_object l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie(lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Trie_pushPending___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Trie_pushPending(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabited___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabited___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabited___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LazyDiscrTree_pushArgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "failed"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_pushArgs___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_pushArgs___closed__0_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_pushArgs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_pushArgs___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_pushArgs(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_pushArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_initCapacity;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_rootKey(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_rootKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_buildPath(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_buildPath___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_patternPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_pushArgs___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_patternPath___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_patternPath___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_patternPath(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_patternPath___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_targetPath___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_targetPath___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_targetPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_targetPath___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_targetPath___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_targetPath___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_targetPath(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_targetPath___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_setTrie___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_setTrie___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_setTrie(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_setTrie___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntries___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntries(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntries___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalNode___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalNode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalNode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeyAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeyAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeyAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeyAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKey___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKey___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKey(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_push___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_push___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_push(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_push___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_size___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_size___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_size(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_size___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__0_value;
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__1_value;
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__2_value;
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__3 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__3_value;
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__4 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__4_value;
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__5 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__5_value;
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__6 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__6_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__0_value),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__1_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__7 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__7_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__7_value),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__2_value),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__3_value),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__4_value),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__5_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__8 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__8_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__8_value),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__6_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__9 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_getStarResult___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_getStarResult___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_pushRootCase(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_pushRootCase___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatch___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_modifyAt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_modifyAt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_append___redArg___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___closed__0_value;
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_ImportData_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_ImportData_new___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_ImportData_new___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_ImportData_new();
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_ImportData_new___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__3;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__4;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Cache_empty(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_isAccessiblePrivateName(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_isAccessiblePrivateName___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "sorryAx"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__0_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 190, 164, 146, 38, 179, 69, 72)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__1_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "noConfusionType"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__2 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__2_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inj"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__3 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__3_value;
LEAN_EXPORT uint8_t l_Lean_Meta_LazyDiscrTree_blacklistInsertion(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_blacklistInsertion___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__2;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__5;
static const lean_array_object l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__7;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__8 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__8_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__9;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__10;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__11;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__12;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_append___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_append(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_InitResults_append, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_instAppend(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_toFlat___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_toFlat___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_toFlat(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_toFlat___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_loadImportedModule___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_loadImportedModule___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_loadImportedModule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_loadImportedModule___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeys___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeys___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeys(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeys___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_collectSubtreeAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeyAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeyAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeyAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeyAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKey___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKey___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKey(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeys___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeys___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeys(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeys___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Processing failure with "};
static const lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " in "};
static const lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = ":\n  "};
static const lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_getChildNgen_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_getChildNgen_match__1_splitter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__0;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createTreeCtx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7_spec__9___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "lazy discriminator import initialization"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__2;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "build module discriminator tree"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "lazy discriminator local search"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_findMatches___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_findMatches___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_findMatches___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lean_Meta_LazyDiscrTree_Key_ctorIdx___impl(v_x_3_);
lean_dec(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
switch(lean_obj_tag(v_t_5_))
{
case 0:
{
lean_object* v_a_7_; lean_object* v_a_8_; lean_object* v___x_9_; 
v_a_7_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_a_7_);
v_a_8_ = lean_ctor_get(v_t_5_, 1);
lean_inc(v_a_8_);
lean_dec_ref_known(v_t_5_, 2);
v___x_9_ = lean_apply_2(v_k_6_, v_a_7_, v_a_8_);
return v___x_9_;
}
case 1:
{
lean_object* v_a_10_; lean_object* v_a_11_; lean_object* v___x_12_; 
v_a_10_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_a_10_);
v_a_11_ = lean_ctor_get(v_t_5_, 1);
lean_inc(v_a_11_);
lean_dec_ref_known(v_t_5_, 2);
v___x_12_ = lean_apply_2(v_k_6_, v_a_10_, v_a_11_);
return v___x_12_;
}
case 2:
{
lean_object* v_a_13_; lean_object* v___x_14_; 
v_a_13_ = lean_ctor_get(v_t_5_, 0);
lean_inc_ref(v_a_13_);
lean_dec_ref_known(v_t_5_, 1);
v___x_14_ = lean_apply_1(v_k_6_, v_a_13_);
return v___x_14_;
}
case 6:
{
lean_object* v_a_15_; lean_object* v_a_16_; lean_object* v_a_17_; lean_object* v___x_18_; 
v_a_15_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_a_15_);
v_a_16_ = lean_ctor_get(v_t_5_, 1);
lean_inc(v_a_16_);
v_a_17_ = lean_ctor_get(v_t_5_, 2);
lean_inc(v_a_17_);
lean_dec_ref_known(v_t_5_, 3);
v___x_18_ = lean_apply_3(v_k_6_, v_a_15_, v_a_16_, v_a_17_);
return v___x_18_;
}
default: 
{
lean_dec(v_t_5_);
return v_k_6_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorElim(lean_object* v_motive_19_, lean_object* v_ctorIdx_20_, lean_object* v_t_21_, lean_object* v_h_22_, lean_object* v_k_23_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_21_, v_k_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorElim___boxed(lean_object* v_motive_25_, lean_object* v_ctorIdx_26_, lean_object* v_t_27_, lean_object* v_h_28_, lean_object* v_k_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim(v_motive_25_, v_ctorIdx_26_, v_t_27_, v_h_28_, v_k_29_);
lean_dec(v_ctorIdx_26_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_const_elim___redArg(lean_object* v_t_31_, lean_object* v_const_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_31_, v_const_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_const_elim(lean_object* v_motive_34_, lean_object* v_t_35_, lean_object* v_h_36_, lean_object* v_const_37_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_35_, v_const_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_fvar_elim___redArg(lean_object* v_t_39_, lean_object* v_fvar_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_39_, v_fvar_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_fvar_elim(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_fvar_45_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_43_, v_fvar_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_lit_elim___redArg(lean_object* v_t_47_, lean_object* v_lit_48_){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_47_, v_lit_48_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_lit_elim(lean_object* v_motive_50_, lean_object* v_t_51_, lean_object* v_h_52_, lean_object* v_lit_53_){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_51_, v_lit_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_star_elim___redArg(lean_object* v_t_55_, lean_object* v_star_56_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_55_, v_star_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_star_elim(lean_object* v_motive_58_, lean_object* v_t_59_, lean_object* v_h_60_, lean_object* v_star_61_){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_59_, v_star_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_other_elim___redArg(lean_object* v_t_63_, lean_object* v_other_64_){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_63_, v_other_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_other_elim(lean_object* v_motive_66_, lean_object* v_t_67_, lean_object* v_h_68_, lean_object* v_other_69_){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_67_, v_other_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_arrow_elim___redArg(lean_object* v_t_71_, lean_object* v_arrow_72_){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_71_, v_arrow_72_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_arrow_elim(lean_object* v_motive_74_, lean_object* v_t_75_, lean_object* v_h_76_, lean_object* v_arrow_77_){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_75_, v_arrow_77_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_proj_elim___redArg(lean_object* v_t_79_, lean_object* v_proj_80_){
_start:
{
lean_object* v___x_81_; 
v___x_81_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_79_, v_proj_80_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_proj_elim(lean_object* v_motive_82_, lean_object* v_t_83_, lean_object* v_h_84_, lean_object* v_proj_85_){
_start:
{
lean_object* v___x_86_; 
v___x_86_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_83_, v_proj_85_);
return v___x_86_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(lean_object* v_x_92_, lean_object* v_x_93_){
_start:
{
switch(lean_obj_tag(v_x_92_))
{
case 0:
{
if (lean_obj_tag(v_x_93_) == 0)
{
lean_object* v_a_94_; lean_object* v_a_95_; lean_object* v_a_96_; lean_object* v_a_97_; uint8_t v___x_98_; 
v_a_94_ = lean_ctor_get(v_x_92_, 0);
v_a_95_ = lean_ctor_get(v_x_92_, 1);
v_a_96_ = lean_ctor_get(v_x_93_, 0);
v_a_97_ = lean_ctor_get(v_x_93_, 1);
v___x_98_ = lean_name_eq(v_a_94_, v_a_96_);
if (v___x_98_ == 0)
{
return v___x_98_;
}
else
{
uint8_t v___x_99_; 
v___x_99_ = lean_nat_dec_eq(v_a_95_, v_a_97_);
return v___x_99_;
}
}
else
{
uint8_t v___x_100_; 
v___x_100_ = 0;
return v___x_100_;
}
}
case 1:
{
if (lean_obj_tag(v_x_93_) == 1)
{
lean_object* v_a_101_; lean_object* v_a_102_; lean_object* v_a_103_; lean_object* v_a_104_; uint8_t v___x_105_; 
v_a_101_ = lean_ctor_get(v_x_92_, 0);
v_a_102_ = lean_ctor_get(v_x_92_, 1);
v_a_103_ = lean_ctor_get(v_x_93_, 0);
v_a_104_ = lean_ctor_get(v_x_93_, 1);
v___x_105_ = l_Lean_instBEqFVarId_beq(v_a_101_, v_a_103_);
if (v___x_105_ == 0)
{
return v___x_105_;
}
else
{
uint8_t v___x_106_; 
v___x_106_ = lean_nat_dec_eq(v_a_102_, v_a_104_);
return v___x_106_;
}
}
else
{
uint8_t v___x_107_; 
v___x_107_ = 0;
return v___x_107_;
}
}
case 2:
{
if (lean_obj_tag(v_x_93_) == 2)
{
lean_object* v_a_108_; lean_object* v_a_109_; uint8_t v___x_110_; 
v_a_108_ = lean_ctor_get(v_x_92_, 0);
v_a_109_ = lean_ctor_get(v_x_93_, 0);
v___x_110_ = l_Lean_instBEqLiteral_beq(v_a_108_, v_a_109_);
return v___x_110_;
}
else
{
uint8_t v___x_111_; 
v___x_111_ = 0;
return v___x_111_;
}
}
case 3:
{
if (lean_obj_tag(v_x_93_) == 3)
{
uint8_t v___x_112_; 
v___x_112_ = 1;
return v___x_112_;
}
else
{
uint8_t v___x_113_; 
v___x_113_ = 0;
return v___x_113_;
}
}
case 4:
{
if (lean_obj_tag(v_x_93_) == 4)
{
uint8_t v___x_114_; 
v___x_114_ = 1;
return v___x_114_;
}
else
{
uint8_t v___x_115_; 
v___x_115_ = 0;
return v___x_115_;
}
}
case 5:
{
if (lean_obj_tag(v_x_93_) == 5)
{
uint8_t v___x_116_; 
v___x_116_ = 1;
return v___x_116_;
}
else
{
uint8_t v___x_117_; 
v___x_117_ = 0;
return v___x_117_;
}
}
default: 
{
if (lean_obj_tag(v_x_93_) == 6)
{
lean_object* v_a_118_; lean_object* v_a_119_; lean_object* v_a_120_; lean_object* v_a_121_; lean_object* v_a_122_; lean_object* v_a_123_; uint8_t v___x_124_; 
v_a_118_ = lean_ctor_get(v_x_92_, 0);
v_a_119_ = lean_ctor_get(v_x_92_, 1);
v_a_120_ = lean_ctor_get(v_x_92_, 2);
v_a_121_ = lean_ctor_get(v_x_93_, 0);
v_a_122_ = lean_ctor_get(v_x_93_, 1);
v_a_123_ = lean_ctor_get(v_x_93_, 2);
v___x_124_ = lean_name_eq(v_a_118_, v_a_121_);
if (v___x_124_ == 0)
{
return v___x_124_;
}
else
{
uint8_t v___x_125_; 
v___x_125_ = lean_nat_dec_eq(v_a_119_, v_a_122_);
if (v___x_125_ == 0)
{
return v___x_125_;
}
else
{
uint8_t v___x_126_; 
v___x_126_ = lean_nat_dec_eq(v_a_120_, v_a_123_);
return v___x_126_;
}
}
}
else
{
uint8_t v___x_127_; 
v___x_127_ = 0;
return v___x_127_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instBEqKey_beq___boxed(lean_object* v_x_128_, lean_object* v_x_129_){
_start:
{
uint8_t v_res_130_; lean_object* v_r_131_; 
v_res_130_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_x_128_, v_x_129_);
lean_dec(v_x_129_);
lean_dec(v_x_128_);
v_r_131_ = lean_box(v_res_130_);
return v_r_131_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9(void){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_149_ = lean_unsigned_to_nat(2u);
v___x_150_ = lean_nat_to_int(v___x_149_);
return v___x_150_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10(void){
_start:
{
lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_151_ = lean_unsigned_to_nat(1u);
v___x_152_ = lean_nat_to_int(v___x_151_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr(lean_object* v_x_171_, lean_object* v_prec_172_){
_start:
{
lean_object* v___y_174_; lean_object* v___y_181_; lean_object* v___y_188_; 
switch(lean_obj_tag(v_x_171_))
{
case 0:
{
lean_object* v_a_194_; lean_object* v_a_195_; lean_object* v___x_197_; uint8_t v_isShared_198_; uint8_t v_isSharedCheck_220_; 
v_a_194_ = lean_ctor_get(v_x_171_, 0);
v_a_195_ = lean_ctor_get(v_x_171_, 1);
v_isSharedCheck_220_ = !lean_is_exclusive(v_x_171_);
if (v_isSharedCheck_220_ == 0)
{
v___x_197_ = v_x_171_;
v_isShared_198_ = v_isSharedCheck_220_;
goto v_resetjp_196_;
}
else
{
lean_inc(v_a_195_);
lean_inc(v_a_194_);
lean_dec(v_x_171_);
v___x_197_ = lean_box(0);
v_isShared_198_ = v_isSharedCheck_220_;
goto v_resetjp_196_;
}
v_resetjp_196_:
{
lean_object* v___y_200_; lean_object* v___x_216_; uint8_t v___x_217_; 
v___x_216_ = lean_unsigned_to_nat(1024u);
v___x_217_ = lean_nat_dec_le(v___x_216_, v_prec_172_);
if (v___x_217_ == 0)
{
lean_object* v___x_218_; 
v___x_218_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9);
v___y_200_ = v___x_218_;
goto v___jp_199_;
}
else
{
lean_object* v___x_219_; 
v___x_219_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10);
v___y_200_ = v___x_219_;
goto v___jp_199_;
}
v___jp_199_:
{
lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_206_; 
v___x_201_ = lean_box(1);
v___x_202_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__8));
v___x_203_ = lean_unsigned_to_nat(1024u);
v___x_204_ = l_Lean_Name_reprPrec(v_a_194_, v___x_203_);
if (v_isShared_198_ == 0)
{
lean_ctor_set_tag(v___x_197_, 5);
lean_ctor_set(v___x_197_, 1, v___x_204_);
lean_ctor_set(v___x_197_, 0, v___x_202_);
v___x_206_ = v___x_197_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_215_; 
v_reuseFailAlloc_215_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_215_, 0, v___x_202_);
lean_ctor_set(v_reuseFailAlloc_215_, 1, v___x_204_);
v___x_206_ = v_reuseFailAlloc_215_;
goto v_reusejp_205_;
}
v_reusejp_205_:
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; uint8_t v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_207_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_207_, 0, v___x_206_);
lean_ctor_set(v___x_207_, 1, v___x_201_);
v___x_208_ = l_Nat_reprFast(v_a_195_);
v___x_209_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_209_, 0, v___x_208_);
v___x_210_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_210_, 0, v___x_207_);
lean_ctor_set(v___x_210_, 1, v___x_209_);
lean_inc(v___y_200_);
v___x_211_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_211_, 0, v___y_200_);
lean_ctor_set(v___x_211_, 1, v___x_210_);
v___x_212_ = 0;
v___x_213_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_213_, 0, v___x_211_);
lean_ctor_set_uint8(v___x_213_, sizeof(void*)*1, v___x_212_);
v___x_214_ = l_Repr_addAppParen(v___x_213_, v_prec_172_);
return v___x_214_;
}
}
}
}
case 1:
{
lean_object* v_a_221_; lean_object* v_a_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_247_; 
v_a_221_ = lean_ctor_get(v_x_171_, 0);
v_a_222_ = lean_ctor_get(v_x_171_, 1);
v_isSharedCheck_247_ = !lean_is_exclusive(v_x_171_);
if (v_isSharedCheck_247_ == 0)
{
v___x_224_ = v_x_171_;
v_isShared_225_ = v_isSharedCheck_247_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_a_222_);
lean_inc(v_a_221_);
lean_dec(v_x_171_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_247_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
lean_object* v___y_227_; lean_object* v___x_243_; uint8_t v___x_244_; 
v___x_243_ = lean_unsigned_to_nat(1024u);
v___x_244_ = lean_nat_dec_le(v___x_243_, v_prec_172_);
if (v___x_244_ == 0)
{
lean_object* v___x_245_; 
v___x_245_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9);
v___y_227_ = v___x_245_;
goto v___jp_226_;
}
else
{
lean_object* v___x_246_; 
v___x_246_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10);
v___y_227_ = v___x_246_;
goto v___jp_226_;
}
v___jp_226_:
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_233_; 
v___x_228_ = lean_box(1);
v___x_229_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__13));
v___x_230_ = lean_unsigned_to_nat(1024u);
v___x_231_ = l_Lean_Name_reprPrec(v_a_221_, v___x_230_);
if (v_isShared_225_ == 0)
{
lean_ctor_set_tag(v___x_224_, 5);
lean_ctor_set(v___x_224_, 1, v___x_231_);
lean_ctor_set(v___x_224_, 0, v___x_229_);
v___x_233_ = v___x_224_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v___x_229_);
lean_ctor_set(v_reuseFailAlloc_242_, 1, v___x_231_);
v___x_233_ = v_reuseFailAlloc_242_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; uint8_t v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_234_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_234_, 0, v___x_233_);
lean_ctor_set(v___x_234_, 1, v___x_228_);
v___x_235_ = l_Nat_reprFast(v_a_222_);
v___x_236_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_236_, 0, v___x_235_);
v___x_237_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_234_);
lean_ctor_set(v___x_237_, 1, v___x_236_);
lean_inc(v___y_227_);
v___x_238_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_238_, 0, v___y_227_);
lean_ctor_set(v___x_238_, 1, v___x_237_);
v___x_239_ = 0;
v___x_240_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_240_, 0, v___x_238_);
lean_ctor_set_uint8(v___x_240_, sizeof(void*)*1, v___x_239_);
v___x_241_ = l_Repr_addAppParen(v___x_240_, v_prec_172_);
return v___x_241_;
}
}
}
}
case 2:
{
lean_object* v_a_248_; lean_object* v___y_250_; lean_object* v___x_259_; uint8_t v___x_260_; 
v_a_248_ = lean_ctor_get(v_x_171_, 0);
lean_inc_ref(v_a_248_);
lean_dec_ref_known(v_x_171_, 1);
v___x_259_ = lean_unsigned_to_nat(1024u);
v___x_260_ = lean_nat_dec_le(v___x_259_, v_prec_172_);
if (v___x_260_ == 0)
{
lean_object* v___x_261_; 
v___x_261_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9);
v___y_250_ = v___x_261_;
goto v___jp_249_;
}
else
{
lean_object* v___x_262_; 
v___x_262_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10);
v___y_250_ = v___x_262_;
goto v___jp_249_;
}
v___jp_249_:
{
lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; uint8_t v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_251_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__16));
v___x_252_ = lean_unsigned_to_nat(1024u);
v___x_253_ = l_Lean_instReprLiteral_repr(v_a_248_, v___x_252_);
v___x_254_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_254_, 0, v___x_251_);
lean_ctor_set(v___x_254_, 1, v___x_253_);
lean_inc(v___y_250_);
v___x_255_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_255_, 0, v___y_250_);
lean_ctor_set(v___x_255_, 1, v___x_254_);
v___x_256_ = 0;
v___x_257_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_257_, 0, v___x_255_);
lean_ctor_set_uint8(v___x_257_, sizeof(void*)*1, v___x_256_);
v___x_258_ = l_Repr_addAppParen(v___x_257_, v_prec_172_);
return v___x_258_;
}
}
case 3:
{
lean_object* v___x_263_; uint8_t v___x_264_; 
v___x_263_ = lean_unsigned_to_nat(1024u);
v___x_264_ = lean_nat_dec_le(v___x_263_, v_prec_172_);
if (v___x_264_ == 0)
{
lean_object* v___x_265_; 
v___x_265_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9);
v___y_188_ = v___x_265_;
goto v___jp_187_;
}
else
{
lean_object* v___x_266_; 
v___x_266_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10);
v___y_188_ = v___x_266_;
goto v___jp_187_;
}
}
case 4:
{
lean_object* v___x_267_; uint8_t v___x_268_; 
v___x_267_ = lean_unsigned_to_nat(1024u);
v___x_268_ = lean_nat_dec_le(v___x_267_, v_prec_172_);
if (v___x_268_ == 0)
{
lean_object* v___x_269_; 
v___x_269_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9);
v___y_181_ = v___x_269_;
goto v___jp_180_;
}
else
{
lean_object* v___x_270_; 
v___x_270_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10);
v___y_181_ = v___x_270_;
goto v___jp_180_;
}
}
case 5:
{
lean_object* v___x_271_; uint8_t v___x_272_; 
v___x_271_ = lean_unsigned_to_nat(1024u);
v___x_272_ = lean_nat_dec_le(v___x_271_, v_prec_172_);
if (v___x_272_ == 0)
{
lean_object* v___x_273_; 
v___x_273_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9);
v___y_174_ = v___x_273_;
goto v___jp_173_;
}
else
{
lean_object* v___x_274_; 
v___x_274_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10);
v___y_174_ = v___x_274_;
goto v___jp_173_;
}
}
default: 
{
lean_object* v_a_275_; lean_object* v_a_276_; lean_object* v_a_277_; lean_object* v___y_279_; lean_object* v___x_297_; uint8_t v___x_298_; 
v_a_275_ = lean_ctor_get(v_x_171_, 0);
lean_inc(v_a_275_);
v_a_276_ = lean_ctor_get(v_x_171_, 1);
lean_inc(v_a_276_);
v_a_277_ = lean_ctor_get(v_x_171_, 2);
lean_inc(v_a_277_);
lean_dec_ref_known(v_x_171_, 3);
v___x_297_ = lean_unsigned_to_nat(1024u);
v___x_298_ = lean_nat_dec_le(v___x_297_, v_prec_172_);
if (v___x_298_ == 0)
{
lean_object* v___x_299_; 
v___x_299_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9);
v___y_279_ = v___x_299_;
goto v___jp_278_;
}
else
{
lean_object* v___x_300_; 
v___x_300_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10);
v___y_279_ = v___x_300_;
goto v___jp_278_;
}
v___jp_278_:
{
lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; uint8_t v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_280_ = lean_box(1);
v___x_281_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__19));
v___x_282_ = lean_unsigned_to_nat(1024u);
v___x_283_ = l_Lean_Name_reprPrec(v_a_275_, v___x_282_);
v___x_284_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_284_, 0, v___x_281_);
lean_ctor_set(v___x_284_, 1, v___x_283_);
v___x_285_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_285_, 0, v___x_284_);
lean_ctor_set(v___x_285_, 1, v___x_280_);
v___x_286_ = l_Nat_reprFast(v_a_276_);
v___x_287_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_287_, 0, v___x_286_);
v___x_288_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_288_, 0, v___x_285_);
lean_ctor_set(v___x_288_, 1, v___x_287_);
v___x_289_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_289_, 0, v___x_288_);
lean_ctor_set(v___x_289_, 1, v___x_280_);
v___x_290_ = l_Nat_reprFast(v_a_277_);
v___x_291_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_291_, 0, v___x_290_);
v___x_292_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_292_, 0, v___x_289_);
lean_ctor_set(v___x_292_, 1, v___x_291_);
lean_inc(v___y_279_);
v___x_293_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_293_, 0, v___y_279_);
lean_ctor_set(v___x_293_, 1, v___x_292_);
v___x_294_ = 0;
v___x_295_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_295_, 0, v___x_293_);
lean_ctor_set_uint8(v___x_295_, sizeof(void*)*1, v___x_294_);
v___x_296_ = l_Repr_addAppParen(v___x_295_, v_prec_172_);
return v___x_296_;
}
}
}
v___jp_173_:
{
lean_object* v___x_175_; lean_object* v___x_176_; uint8_t v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_175_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__1));
lean_inc(v___y_174_);
v___x_176_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_176_, 0, v___y_174_);
lean_ctor_set(v___x_176_, 1, v___x_175_);
v___x_177_ = 0;
v___x_178_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_178_, 0, v___x_176_);
lean_ctor_set_uint8(v___x_178_, sizeof(void*)*1, v___x_177_);
v___x_179_ = l_Repr_addAppParen(v___x_178_, v_prec_172_);
return v___x_179_;
}
v___jp_180_:
{
lean_object* v___x_182_; lean_object* v___x_183_; uint8_t v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_182_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__3));
lean_inc(v___y_181_);
v___x_183_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_183_, 0, v___y_181_);
lean_ctor_set(v___x_183_, 1, v___x_182_);
v___x_184_ = 0;
v___x_185_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_185_, 0, v___x_183_);
lean_ctor_set_uint8(v___x_185_, sizeof(void*)*1, v___x_184_);
v___x_186_ = l_Repr_addAppParen(v___x_185_, v_prec_172_);
return v___x_186_;
}
v___jp_187_:
{
lean_object* v___x_189_; lean_object* v___x_190_; uint8_t v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_189_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__5));
lean_inc(v___y_188_);
v___x_190_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_190_, 0, v___y_188_);
lean_ctor_set(v___x_190_, 1, v___x_189_);
v___x_191_ = 0;
v___x_192_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_192_, 0, v___x_190_);
lean_ctor_set_uint8(v___x_192_, sizeof(void*)*1, v___x_191_);
v___x_193_ = l_Repr_addAppParen(v___x_192_, v_prec_172_);
return v___x_193_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___boxed(lean_object* v_x_301_, lean_object* v_prec_302_){
_start:
{
lean_object* v_res_303_; 
v_res_303_ = l_Lean_Meta_LazyDiscrTree_instReprKey_repr(v_x_301_, v_prec_302_);
lean_dec(v_prec_302_);
return v_res_303_;
}
}
LEAN_EXPORT uint64_t l_Lean_Meta_LazyDiscrTree_Key_hash(lean_object* v_x_306_){
_start:
{
switch(lean_obj_tag(v_x_306_))
{
case 0:
{
lean_object* v_a_307_; lean_object* v_a_308_; uint64_t v___x_309_; uint64_t v___y_311_; 
v_a_307_ = lean_ctor_get(v_x_306_, 0);
v_a_308_ = lean_ctor_get(v_x_306_, 1);
v___x_309_ = 5237ULL;
if (lean_obj_tag(v_a_307_) == 0)
{
uint64_t v___x_315_; 
v___x_315_ = 1723ULL;
v___y_311_ = v___x_315_;
goto v___jp_310_;
}
else
{
uint64_t v_hash_316_; 
v_hash_316_ = lean_ctor_get_uint64(v_a_307_, sizeof(void*)*2);
v___y_311_ = v_hash_316_;
goto v___jp_310_;
}
v___jp_310_:
{
uint64_t v___x_312_; uint64_t v___x_313_; uint64_t v___x_314_; 
v___x_312_ = lean_uint64_of_nat(v_a_308_);
v___x_313_ = lean_uint64_mix_hash(v___y_311_, v___x_312_);
v___x_314_ = lean_uint64_mix_hash(v___x_309_, v___x_313_);
return v___x_314_;
}
}
case 1:
{
lean_object* v_a_317_; lean_object* v_a_318_; uint64_t v___x_319_; uint64_t v___x_320_; uint64_t v___x_321_; uint64_t v___x_322_; uint64_t v___x_323_; 
v_a_317_ = lean_ctor_get(v_x_306_, 0);
v_a_318_ = lean_ctor_get(v_x_306_, 1);
v___x_319_ = 3541ULL;
v___x_320_ = l_Lean_instHashableFVarId_hash(v_a_317_);
v___x_321_ = lean_uint64_of_nat(v_a_318_);
v___x_322_ = lean_uint64_mix_hash(v___x_320_, v___x_321_);
v___x_323_ = lean_uint64_mix_hash(v___x_319_, v___x_322_);
return v___x_323_;
}
case 2:
{
lean_object* v_a_324_; uint64_t v___x_325_; uint64_t v___x_326_; uint64_t v___x_327_; 
v_a_324_ = lean_ctor_get(v_x_306_, 0);
v___x_325_ = 1879ULL;
v___x_326_ = l_Lean_Literal_hash(v_a_324_);
v___x_327_ = lean_uint64_mix_hash(v___x_325_, v___x_326_);
return v___x_327_;
}
case 3:
{
uint64_t v___x_328_; 
v___x_328_ = 7883ULL;
return v___x_328_;
}
case 4:
{
uint64_t v___x_329_; 
v___x_329_ = 2411ULL;
return v___x_329_;
}
case 5:
{
uint64_t v___x_330_; 
v___x_330_ = 17ULL;
return v___x_330_;
}
default: 
{
lean_object* v_a_331_; lean_object* v_a_332_; lean_object* v_a_333_; uint64_t v___x_334_; uint64_t v___y_336_; 
v_a_331_ = lean_ctor_get(v_x_306_, 0);
v_a_332_ = lean_ctor_get(v_x_306_, 1);
v_a_333_ = lean_ctor_get(v_x_306_, 2);
v___x_334_ = lean_uint64_of_nat(v_a_333_);
if (lean_obj_tag(v_a_331_) == 0)
{
uint64_t v___x_340_; 
v___x_340_ = 1723ULL;
v___y_336_ = v___x_340_;
goto v___jp_335_;
}
else
{
uint64_t v_hash_341_; 
v_hash_341_ = lean_ctor_get_uint64(v_a_331_, sizeof(void*)*2);
v___y_336_ = v_hash_341_;
goto v___jp_335_;
}
v___jp_335_:
{
uint64_t v___x_337_; uint64_t v___x_338_; uint64_t v___x_339_; 
v___x_337_ = lean_uint64_of_nat(v_a_332_);
v___x_338_ = lean_uint64_mix_hash(v___y_336_, v___x_337_);
v___x_339_ = lean_uint64_mix_hash(v___x_334_, v___x_338_);
return v___x_339_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_hash___boxed(lean_object* v_x_342_){
_start:
{
uint64_t v_res_343_; lean_object* v_r_344_; 
v_res_343_ = l_Lean_Meta_LazyDiscrTree_Key_hash(v_x_342_);
lean_dec(v_x_342_);
v_r_344_ = lean_box_uint64(v_res_343_);
return v_r_344_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar___closed__0(void){
_start:
{
lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_351_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId));
v___x_352_ = l_Lean_mkMVar(v___x_351_);
return v___x_352_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar(void){
_start:
{
lean_object* v___x_353_; 
v___x_353_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar___closed__0, &l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar___closed__0);
return v___x_353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_ignoreArg(lean_object* v_a_354_, lean_object* v_i_355_, lean_object* v_infos_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_){
_start:
{
lean_object* v___x_362_; uint8_t v___x_363_; 
v___x_362_ = lean_array_get_size(v_infos_356_);
v___x_363_ = lean_nat_dec_lt(v_i_355_, v___x_362_);
if (v___x_363_ == 0)
{
lean_object* v___x_364_; 
v___x_364_ = l_Lean_Meta_isProof(v_a_354_, v_a_357_, v_a_358_, v_a_359_, v_a_360_);
return v___x_364_;
}
else
{
lean_object* v_info_365_; uint8_t v_isInstance_366_; 
v_info_365_ = lean_array_fget_borrowed(v_infos_356_, v_i_355_);
v_isInstance_366_ = lean_ctor_get_uint8(v_info_365_, sizeof(void*)*1 + 4);
if (v_isInstance_366_ == 0)
{
uint8_t v___x_383_; 
v___x_383_ = l_Lean_Meta_ParamInfo_isImplicit(v_info_365_);
if (v___x_383_ == 0)
{
uint8_t v___x_384_; 
v___x_384_ = l_Lean_Meta_ParamInfo_isStrictImplicit(v_info_365_);
if (v___x_384_ == 0)
{
lean_object* v___x_385_; 
v___x_385_ = l_Lean_Meta_isProof(v_a_354_, v_a_357_, v_a_358_, v_a_359_, v_a_360_);
return v___x_385_;
}
else
{
goto v___jp_367_;
}
}
else
{
goto v___jp_367_;
}
}
else
{
lean_object* v___x_386_; lean_object* v___x_387_; 
lean_dec_ref(v_a_354_);
v___x_386_ = lean_box(v___x_363_);
v___x_387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_387_, 0, v___x_386_);
return v___x_387_;
}
v___jp_367_:
{
lean_object* v___x_368_; 
v___x_368_ = l_Lean_Meta_isType(v_a_354_, v_a_357_, v_a_358_, v_a_359_, v_a_360_);
if (lean_obj_tag(v___x_368_) == 0)
{
lean_object* v_a_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_382_; 
v_a_369_ = lean_ctor_get(v___x_368_, 0);
v_isSharedCheck_382_ = !lean_is_exclusive(v___x_368_);
if (v_isSharedCheck_382_ == 0)
{
v___x_371_ = v___x_368_;
v_isShared_372_ = v_isSharedCheck_382_;
goto v_resetjp_370_;
}
else
{
lean_inc(v_a_369_);
lean_dec(v___x_368_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_382_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
uint8_t v___x_373_; 
v___x_373_ = lean_unbox(v_a_369_);
lean_dec(v_a_369_);
if (v___x_373_ == 0)
{
lean_object* v___x_374_; lean_object* v___x_376_; 
v___x_374_ = lean_box(v___x_363_);
if (v_isShared_372_ == 0)
{
lean_ctor_set(v___x_371_, 0, v___x_374_);
v___x_376_ = v___x_371_;
goto v_reusejp_375_;
}
else
{
lean_object* v_reuseFailAlloc_377_; 
v_reuseFailAlloc_377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_377_, 0, v___x_374_);
v___x_376_ = v_reuseFailAlloc_377_;
goto v_reusejp_375_;
}
v_reusejp_375_:
{
return v___x_376_;
}
}
else
{
lean_object* v___x_378_; lean_object* v___x_380_; 
v___x_378_ = lean_box(v_isInstance_366_);
if (v_isShared_372_ == 0)
{
lean_ctor_set(v___x_371_, 0, v___x_378_);
v___x_380_ = v___x_371_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v___x_378_);
v___x_380_ = v_reuseFailAlloc_381_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
return v___x_380_;
}
}
}
}
else
{
return v___x_368_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_ignoreArg___boxed(lean_object* v_a_388_, lean_object* v_i_389_, lean_object* v_infos_390_, lean_object* v_a_391_, lean_object* v_a_392_, lean_object* v_a_393_, lean_object* v_a_394_, lean_object* v_a_395_){
_start:
{
lean_object* v_res_396_; 
v_res_396_ = l_Lean_Meta_LazyDiscrTree_MatchClone_ignoreArg(v_a_388_, v_i_389_, v_infos_390_, v_a_391_, v_a_392_, v_a_393_, v_a_394_);
lean_dec(v_a_394_);
lean_dec_ref(v_a_393_);
lean_dec(v_a_392_);
lean_dec_ref(v_a_391_);
lean_dec_ref(v_infos_390_);
lean_dec(v_i_389_);
return v_res_396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_pushArgsAux(lean_object* v_infos_397_, lean_object* v_x_398_, lean_object* v_x_399_, lean_object* v_x_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_){
_start:
{
if (lean_obj_tag(v_x_399_) == 5)
{
lean_object* v_fn_406_; lean_object* v_arg_407_; lean_object* v___x_408_; 
v_fn_406_ = lean_ctor_get(v_x_399_, 0);
lean_inc_ref(v_fn_406_);
v_arg_407_ = lean_ctor_get(v_x_399_, 1);
lean_inc_ref_n(v_arg_407_, 2);
lean_dec_ref_known(v_x_399_, 2);
v___x_408_ = l_Lean_Meta_LazyDiscrTree_MatchClone_ignoreArg(v_arg_407_, v_x_398_, v_infos_397_, v_a_401_, v_a_402_, v_a_403_, v_a_404_);
if (lean_obj_tag(v___x_408_) == 0)
{
lean_object* v_a_409_; uint8_t v___x_410_; 
v_a_409_ = lean_ctor_get(v___x_408_, 0);
lean_inc(v_a_409_);
lean_dec_ref_known(v___x_408_, 1);
v___x_410_ = lean_unbox(v_a_409_);
lean_dec(v_a_409_);
if (v___x_410_ == 0)
{
lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_411_ = lean_unsigned_to_nat(1u);
v___x_412_ = lean_nat_sub(v_x_398_, v___x_411_);
lean_dec(v_x_398_);
v___x_413_ = lean_array_push(v_x_400_, v_arg_407_);
v_x_398_ = v___x_412_;
v_x_399_ = v_fn_406_;
v_x_400_ = v___x_413_;
goto _start;
}
else
{
lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
lean_dec_ref(v_arg_407_);
v___x_415_ = lean_unsigned_to_nat(1u);
v___x_416_ = lean_nat_sub(v_x_398_, v___x_415_);
lean_dec(v_x_398_);
v___x_417_ = l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar;
v___x_418_ = lean_array_push(v_x_400_, v___x_417_);
v_x_398_ = v___x_416_;
v_x_399_ = v_fn_406_;
v_x_400_ = v___x_418_;
goto _start;
}
}
else
{
lean_object* v_a_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_427_; 
lean_dec_ref(v_arg_407_);
lean_dec_ref(v_fn_406_);
lean_dec_ref(v_x_400_);
lean_dec(v_x_398_);
v_a_420_ = lean_ctor_get(v___x_408_, 0);
v_isSharedCheck_427_ = !lean_is_exclusive(v___x_408_);
if (v_isSharedCheck_427_ == 0)
{
v___x_422_ = v___x_408_;
v_isShared_423_ = v_isSharedCheck_427_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_a_420_);
lean_dec(v___x_408_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_427_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v___x_425_; 
if (v_isShared_423_ == 0)
{
v___x_425_ = v___x_422_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v_a_420_);
v___x_425_ = v_reuseFailAlloc_426_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
return v___x_425_;
}
}
}
}
else
{
lean_object* v___x_428_; 
lean_dec_ref(v_x_399_);
lean_dec(v_x_398_);
v___x_428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_428_, 0, v_x_400_);
return v___x_428_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_pushArgsAux___boxed(lean_object* v_infos_429_, lean_object* v_x_430_, lean_object* v_x_431_, lean_object* v_x_432_, lean_object* v_a_433_, lean_object* v_a_434_, lean_object* v_a_435_, lean_object* v_a_436_, lean_object* v_a_437_){
_start:
{
lean_object* v_res_438_; 
v_res_438_ = l_Lean_Meta_LazyDiscrTree_MatchClone_pushArgsAux(v_infos_429_, v_x_430_, v_x_431_, v_x_432_, v_a_433_, v_a_434_, v_a_435_, v_a_436_);
lean_dec(v_a_436_);
lean_dec_ref(v_a_435_);
lean_dec(v_a_434_);
lean_dec_ref(v_a_433_);
lean_dec_ref(v_infos_429_);
return v_res_438_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral(lean_object* v_e_453_){
_start:
{
uint8_t v___x_454_; 
v___x_454_ = l_Lean_Expr_isRawNatLit(v_e_453_);
if (v___x_454_ == 0)
{
lean_object* v_f_455_; uint8_t v___x_456_; 
v_f_455_ = l_Lean_Expr_getAppFn(v_e_453_);
v___x_456_ = l_Lean_Expr_isConst(v_f_455_);
if (v___x_456_ == 0)
{
lean_dec_ref(v_f_455_);
lean_dec_ref(v_e_453_);
return v___x_454_;
}
else
{
lean_object* v_fName_457_; lean_object* v___x_475_; uint8_t v___x_476_; 
v_fName_457_ = l_Lean_Expr_constName_x21(v_f_455_);
lean_dec_ref(v_f_455_);
v___x_475_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__7));
v___x_476_ = lean_name_eq(v_fName_457_, v___x_475_);
if (v___x_476_ == 0)
{
goto v___jp_464_;
}
else
{
lean_object* v___x_477_; lean_object* v___x_478_; uint8_t v___x_479_; 
v___x_477_ = l_Lean_Expr_getAppNumArgs(v_e_453_);
v___x_478_ = lean_unsigned_to_nat(1u);
v___x_479_ = lean_nat_dec_eq(v___x_477_, v___x_478_);
lean_dec(v___x_477_);
if (v___x_479_ == 0)
{
goto v___jp_464_;
}
else
{
lean_object* v___x_480_; 
lean_dec(v_fName_457_);
v___x_480_ = l_Lean_Expr_appArg_x21(v_e_453_);
lean_dec_ref(v_e_453_);
v_e_453_ = v___x_480_;
goto _start;
}
}
v___jp_458_:
{
lean_object* v___x_459_; uint8_t v___x_460_; 
v___x_459_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__2));
v___x_460_ = lean_name_eq(v_fName_457_, v___x_459_);
lean_dec(v_fName_457_);
if (v___x_460_ == 0)
{
lean_dec_ref(v_e_453_);
return v___x_460_;
}
else
{
lean_object* v___x_461_; lean_object* v___x_462_; uint8_t v___x_463_; 
v___x_461_ = l_Lean_Expr_getAppNumArgs(v_e_453_);
lean_dec_ref(v_e_453_);
v___x_462_ = lean_unsigned_to_nat(0u);
v___x_463_ = lean_nat_dec_eq(v___x_461_, v___x_462_);
lean_dec(v___x_461_);
return v___x_463_;
}
}
v___jp_464_:
{
lean_object* v___x_465_; uint8_t v___x_466_; 
v___x_465_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__5));
v___x_466_ = lean_name_eq(v_fName_457_, v___x_465_);
if (v___x_466_ == 0)
{
goto v___jp_458_;
}
else
{
lean_object* v___x_467_; lean_object* v___x_468_; uint8_t v___x_469_; 
v___x_467_ = l_Lean_Expr_getAppNumArgs(v_e_453_);
v___x_468_ = lean_unsigned_to_nat(3u);
v___x_469_ = lean_nat_dec_eq(v___x_467_, v___x_468_);
if (v___x_469_ == 0)
{
lean_dec(v___x_467_);
goto v___jp_458_;
}
else
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
lean_dec(v_fName_457_);
v___x_470_ = lean_unsigned_to_nat(1u);
v___x_471_ = lean_nat_sub(v___x_467_, v___x_470_);
lean_dec(v___x_467_);
v___x_472_ = lean_nat_sub(v___x_471_, v___x_470_);
lean_dec(v___x_471_);
v___x_473_ = l_Lean_Expr_getRevArg_x21(v_e_453_, v___x_472_);
lean_dec_ref(v_e_453_);
v_e_453_ = v___x_473_;
goto _start;
}
}
}
}
}
else
{
lean_dec_ref(v_e_453_);
return v___x_454_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___boxed(lean_object* v_e_482_){
_start:
{
uint8_t v_res_483_; lean_object* v_r_484_; 
v_res_483_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral(v_e_482_);
v_r_484_ = lean_box(v_res_483_);
return v_r_484_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f_loop(lean_object* v_e_487_){
_start:
{
lean_object* v_f_488_; 
v_f_488_ = l_Lean_Expr_getAppFn(v_e_487_);
switch(lean_obj_tag(v_f_488_))
{
case 9:
{
lean_object* v_a_489_; 
lean_dec_ref(v_e_487_);
v_a_489_ = lean_ctor_get(v_f_488_, 0);
lean_inc_ref(v_a_489_);
lean_dec_ref_known(v_f_488_, 1);
if (lean_obj_tag(v_a_489_) == 0)
{
lean_object* v_val_490_; lean_object* v___x_492_; uint8_t v_isShared_493_; uint8_t v_isSharedCheck_497_; 
v_val_490_ = lean_ctor_get(v_a_489_, 0);
v_isSharedCheck_497_ = !lean_is_exclusive(v_a_489_);
if (v_isSharedCheck_497_ == 0)
{
v___x_492_ = v_a_489_;
v_isShared_493_ = v_isSharedCheck_497_;
goto v_resetjp_491_;
}
else
{
lean_inc(v_val_490_);
lean_dec(v_a_489_);
v___x_492_ = lean_box(0);
v_isShared_493_ = v_isSharedCheck_497_;
goto v_resetjp_491_;
}
v_resetjp_491_:
{
lean_object* v___x_495_; 
if (v_isShared_493_ == 0)
{
lean_ctor_set_tag(v___x_492_, 1);
v___x_495_ = v___x_492_;
goto v_reusejp_494_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v_val_490_);
v___x_495_ = v_reuseFailAlloc_496_;
goto v_reusejp_494_;
}
v_reusejp_494_:
{
return v___x_495_;
}
}
}
else
{
lean_object* v___x_498_; 
lean_dec_ref(v_a_489_);
v___x_498_ = lean_box(0);
return v___x_498_;
}
}
case 4:
{
lean_object* v_declName_499_; lean_object* v___x_520_; uint8_t v___x_521_; 
v_declName_499_ = lean_ctor_get(v_f_488_, 0);
lean_inc(v_declName_499_);
lean_dec_ref_known(v_f_488_, 2);
v___x_520_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__7));
v___x_521_ = lean_name_eq(v_declName_499_, v___x_520_);
if (v___x_521_ == 0)
{
goto v___jp_509_;
}
else
{
lean_object* v___x_522_; lean_object* v___x_523_; uint8_t v___x_524_; 
v___x_522_ = l_Lean_Expr_getAppNumArgs(v_e_487_);
v___x_523_ = lean_unsigned_to_nat(1u);
v___x_524_ = lean_nat_dec_eq(v___x_522_, v___x_523_);
lean_dec(v___x_522_);
if (v___x_524_ == 0)
{
goto v___jp_509_;
}
else
{
lean_object* v___x_525_; lean_object* v___x_526_; 
lean_dec(v_declName_499_);
v___x_525_ = l_Lean_Expr_appArg_x21(v_e_487_);
lean_dec_ref(v_e_487_);
v___x_526_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f_loop(v___x_525_);
if (lean_obj_tag(v___x_526_) == 0)
{
return v___x_526_;
}
else
{
lean_object* v_val_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_535_; 
v_val_527_ = lean_ctor_get(v___x_526_, 0);
v_isSharedCheck_535_ = !lean_is_exclusive(v___x_526_);
if (v_isSharedCheck_535_ == 0)
{
v___x_529_ = v___x_526_;
v_isShared_530_ = v_isSharedCheck_535_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_val_527_);
lean_dec(v___x_526_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_535_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v___x_531_; lean_object* v___x_533_; 
v___x_531_ = lean_nat_add(v_val_527_, v___x_523_);
lean_dec(v_val_527_);
if (v_isShared_530_ == 0)
{
lean_ctor_set(v___x_529_, 0, v___x_531_);
v___x_533_ = v___x_529_;
goto v_reusejp_532_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v___x_531_);
v___x_533_ = v_reuseFailAlloc_534_;
goto v_reusejp_532_;
}
v_reusejp_532_:
{
return v___x_533_;
}
}
}
}
}
v___jp_500_:
{
lean_object* v___x_501_; uint8_t v___x_502_; 
v___x_501_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__2));
v___x_502_ = lean_name_eq(v_declName_499_, v___x_501_);
lean_dec(v_declName_499_);
if (v___x_502_ == 0)
{
lean_object* v___x_503_; 
lean_dec_ref(v_e_487_);
v___x_503_ = lean_box(0);
return v___x_503_;
}
else
{
lean_object* v___x_504_; lean_object* v___x_505_; uint8_t v___x_506_; 
v___x_504_ = l_Lean_Expr_getAppNumArgs(v_e_487_);
lean_dec_ref(v_e_487_);
v___x_505_ = lean_unsigned_to_nat(0u);
v___x_506_ = lean_nat_dec_eq(v___x_504_, v___x_505_);
lean_dec(v___x_504_);
if (v___x_506_ == 0)
{
lean_object* v___x_507_; 
v___x_507_ = lean_box(0);
return v___x_507_;
}
else
{
lean_object* v___x_508_; 
v___x_508_ = ((lean_object*)(l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f_loop___closed__0));
return v___x_508_;
}
}
}
v___jp_509_:
{
lean_object* v___x_510_; uint8_t v___x_511_; 
v___x_510_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__5));
v___x_511_ = lean_name_eq(v_declName_499_, v___x_510_);
if (v___x_511_ == 0)
{
goto v___jp_500_;
}
else
{
lean_object* v___x_512_; lean_object* v___x_513_; uint8_t v___x_514_; 
v___x_512_ = l_Lean_Expr_getAppNumArgs(v_e_487_);
v___x_513_ = lean_unsigned_to_nat(3u);
v___x_514_ = lean_nat_dec_eq(v___x_512_, v___x_513_);
if (v___x_514_ == 0)
{
lean_dec(v___x_512_);
goto v___jp_500_;
}
else
{
lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; 
lean_dec(v_declName_499_);
v___x_515_ = lean_unsigned_to_nat(1u);
v___x_516_ = lean_nat_sub(v___x_512_, v___x_515_);
lean_dec(v___x_512_);
v___x_517_ = lean_nat_sub(v___x_516_, v___x_515_);
lean_dec(v___x_516_);
v___x_518_ = l_Lean_Expr_getRevArg_x21(v_e_487_, v___x_517_);
lean_dec_ref(v_e_487_);
v_e_487_ = v___x_518_;
goto _start;
}
}
}
}
default: 
{
lean_object* v___x_536_; 
lean_dec_ref(v_f_488_);
lean_dec_ref(v_e_487_);
v___x_536_ = lean_box(0);
return v___x_536_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f(lean_object* v_e_537_){
_start:
{
uint8_t v___x_538_; 
lean_inc_ref(v_e_537_);
v___x_538_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral(v_e_537_);
if (v___x_538_ == 0)
{
lean_object* v___x_539_; 
lean_dec_ref(v_e_537_);
v___x_539_ = lean_box(0);
return v___x_539_;
}
else
{
lean_object* v___x_540_; 
v___x_540_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f_loop(v_e_537_);
if (lean_obj_tag(v___x_540_) == 1)
{
lean_object* v_val_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_549_; 
v_val_541_ = lean_ctor_get(v___x_540_, 0);
v_isSharedCheck_549_ = !lean_is_exclusive(v___x_540_);
if (v_isSharedCheck_549_ == 0)
{
v___x_543_ = v___x_540_;
v_isShared_544_ = v_isSharedCheck_549_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_val_541_);
lean_dec(v___x_540_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_549_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___x_545_; lean_object* v___x_547_; 
v___x_545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_545_, 0, v_val_541_);
if (v_isShared_544_ == 0)
{
lean_ctor_set(v___x_543_, 0, v___x_545_);
v___x_547_ = v___x_543_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(1, 1, 0);
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
lean_object* v___x_550_; 
lean_dec(v___x_540_);
v___x_550_ = lean_box(0);
return v___x_550_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType(lean_object* v_e_553_, lean_object* v_a_554_, lean_object* v_a_555_, lean_object* v_a_556_, lean_object* v_a_557_){
_start:
{
lean_object* v___x_559_; 
lean_inc(v_a_557_);
lean_inc_ref(v_a_556_);
lean_inc(v_a_555_);
lean_inc_ref(v_a_554_);
v___x_559_ = lean_whnf(v_e_553_, v_a_554_, v_a_555_, v_a_556_, v_a_557_);
if (lean_obj_tag(v___x_559_) == 0)
{
lean_object* v_a_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_570_; 
v_a_560_ = lean_ctor_get(v___x_559_, 0);
v_isSharedCheck_570_ = !lean_is_exclusive(v___x_559_);
if (v_isSharedCheck_570_ == 0)
{
v___x_562_ = v___x_559_;
v_isShared_563_ = v_isSharedCheck_570_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_a_560_);
lean_dec(v___x_559_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_570_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
lean_object* v___x_564_; uint8_t v___x_565_; lean_object* v___x_566_; lean_object* v___x_568_; 
v___x_564_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType___closed__0));
v___x_565_ = l_Lean_Expr_isConstOf(v_a_560_, v___x_564_);
lean_dec(v_a_560_);
v___x_566_ = lean_box(v___x_565_);
if (v_isShared_563_ == 0)
{
lean_ctor_set(v___x_562_, 0, v___x_566_);
v___x_568_ = v___x_562_;
goto v_reusejp_567_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v___x_566_);
v___x_568_ = v_reuseFailAlloc_569_;
goto v_reusejp_567_;
}
v_reusejp_567_:
{
return v___x_568_;
}
}
}
else
{
lean_object* v_a_571_; lean_object* v___x_573_; uint8_t v_isShared_574_; uint8_t v_isSharedCheck_578_; 
v_a_571_ = lean_ctor_get(v___x_559_, 0);
v_isSharedCheck_578_ = !lean_is_exclusive(v___x_559_);
if (v_isSharedCheck_578_ == 0)
{
v___x_573_ = v___x_559_;
v_isShared_574_ = v_isSharedCheck_578_;
goto v_resetjp_572_;
}
else
{
lean_inc(v_a_571_);
lean_dec(v___x_559_);
v___x_573_ = lean_box(0);
v_isShared_574_ = v_isSharedCheck_578_;
goto v_resetjp_572_;
}
v_resetjp_572_:
{
lean_object* v___x_576_; 
if (v_isShared_574_ == 0)
{
v___x_576_ = v___x_573_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v_a_571_);
v___x_576_ = v_reuseFailAlloc_577_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
return v___x_576_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType___boxed(lean_object* v_e_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_){
_start:
{
lean_object* v_res_585_; 
v_res_585_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType(v_e_579_, v_a_580_, v_a_581_, v_a_582_, v_a_583_);
lean_dec(v_a_583_);
lean_dec_ref(v_a_582_);
lean_dec(v_a_581_);
lean_dec_ref(v_a_580_);
return v_res_585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset(lean_object* v_fName_599_, lean_object* v_e_600_, lean_object* v_a_601_, lean_object* v_a_602_, lean_object* v_a_603_, lean_object* v_a_604_){
_start:
{
lean_object* v___x_646_; uint8_t v___x_647_; 
v___x_646_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__6));
v___x_647_ = lean_name_eq(v_fName_599_, v___x_646_);
if (v___x_647_ == 0)
{
goto v___jp_634_;
}
else
{
lean_object* v___x_648_; lean_object* v___x_649_; uint8_t v___x_650_; 
v___x_648_ = l_Lean_Expr_getAppNumArgs(v_e_600_);
v___x_649_ = lean_unsigned_to_nat(2u);
v___x_650_ = lean_nat_dec_eq(v___x_648_, v___x_649_);
lean_dec(v___x_648_);
if (v___x_650_ == 0)
{
goto v___jp_634_;
}
else
{
goto v___jp_606_;
}
}
v___jp_606_:
{
lean_object* v___x_607_; uint8_t v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_607_ = l_Lean_Expr_appArg_x21(v_e_600_);
v___x_608_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral(v___x_607_);
v___x_609_ = lean_box(v___x_608_);
v___x_610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_610_, 0, v___x_609_);
return v___x_610_;
}
v___jp_611_:
{
lean_object* v___x_612_; uint8_t v___x_613_; 
v___x_612_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__7));
v___x_613_ = lean_name_eq(v_fName_599_, v___x_612_);
if (v___x_613_ == 0)
{
lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_614_ = lean_box(v___x_613_);
v___x_615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_615_, 0, v___x_614_);
return v___x_615_;
}
else
{
lean_object* v___x_616_; lean_object* v___x_617_; uint8_t v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; 
v___x_616_ = l_Lean_Expr_getAppNumArgs(v_e_600_);
v___x_617_ = lean_unsigned_to_nat(1u);
v___x_618_ = lean_nat_dec_eq(v___x_616_, v___x_617_);
lean_dec(v___x_616_);
v___x_619_ = lean_box(v___x_618_);
v___x_620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_620_, 0, v___x_619_);
return v___x_620_;
}
}
v___jp_621_:
{
lean_object* v___x_622_; uint8_t v___x_623_; 
v___x_622_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__2));
v___x_623_ = lean_name_eq(v_fName_599_, v___x_622_);
if (v___x_623_ == 0)
{
goto v___jp_611_;
}
else
{
lean_object* v___x_624_; lean_object* v___x_625_; uint8_t v___x_626_; 
v___x_624_ = l_Lean_Expr_getAppNumArgs(v_e_600_);
v___x_625_ = lean_unsigned_to_nat(6u);
v___x_626_ = lean_nat_dec_eq(v___x_624_, v___x_625_);
if (v___x_626_ == 0)
{
lean_dec(v___x_624_);
goto v___jp_611_;
}
else
{
lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; 
v___x_627_ = lean_unsigned_to_nat(1u);
v___x_628_ = lean_nat_sub(v___x_624_, v___x_627_);
lean_dec(v___x_624_);
v___x_629_ = lean_nat_sub(v___x_628_, v___x_627_);
lean_dec(v___x_628_);
v___x_630_ = l_Lean_Expr_getRevArg_x21(v_e_600_, v___x_629_);
v___x_631_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType(v___x_630_, v_a_601_, v_a_602_, v_a_603_, v_a_604_);
if (lean_obj_tag(v___x_631_) == 0)
{
lean_object* v_a_632_; uint8_t v___x_633_; 
v_a_632_ = lean_ctor_get(v___x_631_, 0);
v___x_633_ = lean_unbox(v_a_632_);
if (v___x_633_ == 0)
{
return v___x_631_;
}
else
{
lean_dec_ref_known(v___x_631_, 1);
goto v___jp_606_;
}
}
else
{
return v___x_631_;
}
}
}
}
v___jp_634_:
{
lean_object* v___x_635_; uint8_t v___x_636_; 
v___x_635_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__5));
v___x_636_ = lean_name_eq(v_fName_599_, v___x_635_);
if (v___x_636_ == 0)
{
goto v___jp_621_;
}
else
{
lean_object* v___x_637_; lean_object* v___x_638_; uint8_t v___x_639_; 
v___x_637_ = l_Lean_Expr_getAppNumArgs(v_e_600_);
v___x_638_ = lean_unsigned_to_nat(4u);
v___x_639_ = lean_nat_dec_eq(v___x_637_, v___x_638_);
if (v___x_639_ == 0)
{
lean_dec(v___x_637_);
goto v___jp_621_;
}
else
{
lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; 
v___x_640_ = lean_unsigned_to_nat(1u);
v___x_641_ = lean_nat_sub(v___x_637_, v___x_640_);
lean_dec(v___x_637_);
v___x_642_ = l_Lean_Expr_getRevArg_x21(v_e_600_, v___x_641_);
v___x_643_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType(v___x_642_, v_a_601_, v_a_602_, v_a_603_, v_a_604_);
if (lean_obj_tag(v___x_643_) == 0)
{
lean_object* v_a_644_; uint8_t v___x_645_; 
v_a_644_ = lean_ctor_get(v___x_643_, 0);
v___x_645_ = lean_unbox(v_a_644_);
if (v___x_645_ == 0)
{
return v___x_643_;
}
else
{
lean_dec_ref_known(v___x_643_, 1);
goto v___jp_606_;
}
}
else
{
return v___x_643_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___boxed(lean_object* v_fName_651_, lean_object* v_e_652_, lean_object* v_a_653_, lean_object* v_a_654_, lean_object* v_a_655_, lean_object* v_a_656_, lean_object* v_a_657_){
_start:
{
lean_object* v_res_658_; 
v_res_658_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset(v_fName_651_, v_e_652_, v_a_653_, v_a_654_, v_a_655_, v_a_656_);
lean_dec(v_a_656_);
lean_dec_ref(v_a_655_);
lean_dec(v_a_654_);
lean_dec_ref(v_a_653_);
lean_dec_ref(v_e_652_);
lean_dec(v_fName_651_);
return v_res_658_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_shouldAddAsStar(lean_object* v_fName_659_, lean_object* v_e_660_, lean_object* v_a_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v_a_664_){
_start:
{
lean_object* v___x_666_; 
v___x_666_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset(v_fName_659_, v_e_660_, v_a_661_, v_a_662_, v_a_663_, v_a_664_);
return v___x_666_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_shouldAddAsStar___boxed(lean_object* v_fName_667_, lean_object* v_e_668_, lean_object* v_a_669_, lean_object* v_a_670_, lean_object* v_a_671_, lean_object* v_a_672_, lean_object* v_a_673_){
_start:
{
lean_object* v_res_674_; 
v_res_674_ = l_Lean_Meta_LazyDiscrTree_MatchClone_shouldAddAsStar(v_fName_667_, v_e_668_, v_a_669_, v_a_670_, v_a_671_, v_a_672_);
lean_dec(v_a_672_);
lean_dec_ref(v_a_671_);
lean_dec(v_a_670_);
lean_dec_ref(v_a_669_);
lean_dec_ref(v_e_668_);
lean_dec(v_fName_667_);
return v_res_674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0(lean_object* v_e_677_, lean_object* v___y_678_, lean_object* v___y_679_){
_start:
{
uint8_t v___x_681_; 
v___x_681_ = l_Lean_Expr_hasLooseBVars(v_e_677_);
if (v___x_681_ == 0)
{
lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_682_, 0, v_e_677_);
v___x_683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_683_, 0, v___x_682_);
return v___x_683_;
}
else
{
uint8_t v___x_684_; uint8_t v___x_685_; 
v___x_684_ = 0;
v___x_685_ = l_Lean_Expr_isHeadBetaTarget(v_e_677_, v___x_684_);
if (v___x_685_ == 0)
{
lean_object* v___x_686_; lean_object* v___x_687_; 
lean_dec_ref(v_e_677_);
v___x_686_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0___closed__0));
v___x_687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_687_, 0, v___x_686_);
return v___x_687_;
}
else
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; 
v___x_688_ = l_Lean_Expr_headBeta(v_e_677_);
v___x_689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_689_, 0, v___x_688_);
v___x_690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_690_, 0, v___x_689_);
return v___x_690_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0___boxed(lean_object* v_e_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_){
_start:
{
lean_object* v_res_695_; 
v_res_695_ = l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0(v_e_691_, v___y_692_, v___y_693_);
lean_dec(v___y_693_);
lean_dec_ref(v___y_692_);
return v_res_695_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__1(lean_object* v_e_696_, lean_object* v___y_697_, lean_object* v___y_698_){
_start:
{
lean_object* v___x_700_; lean_object* v___x_701_; 
v___x_700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_700_, 0, v_e_696_);
v___x_701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_701_, 0, v___x_700_);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__1___boxed(lean_object* v_e_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_){
_start:
{
lean_object* v_res_706_; 
v_res_706_ = l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__1(v_e_702_, v___y_703_, v___y_704_);
lean_dec(v___y_704_);
lean_dec_ref(v___y_703_);
return v_res_706_;
}
}
static lean_object* _init_l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; 
v___x_707_ = lean_box(0);
v___x_708_ = l_Lean_interruptExceptionId;
v___x_709_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_709_, 0, v___x_708_);
lean_ctor_set(v___x_709_, 1, v___x_707_);
return v___x_709_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg(){
_start:
{
lean_object* v___x_711_; lean_object* v___x_712_; 
v___x_711_ = lean_obj_once(&l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg___closed__0, &l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg___closed__0_once, _init_l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg___closed__0);
v___x_712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_712_, 0, v___x_711_);
return v___x_712_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg___boxed(lean_object* v___y_713_){
_start:
{
lean_object* v_res_714_; 
v_res_714_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg();
return v_res_714_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_720_ = l_Lean_maxRecDepthErrorMessage;
v___x_721_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_721_, 0, v___x_720_);
return v___x_721_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__4(void){
_start:
{
lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_722_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__3);
v___x_723_ = l_Lean_MessageData_ofFormat(v___x_722_);
return v___x_723_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__5(void){
_start:
{
lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; 
v___x_724_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__4);
v___x_725_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__2));
v___x_726_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_726_, 0, v___x_725_);
lean_ctor_set(v___x_726_, 1, v___x_724_);
return v___x_726_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg(lean_object* v_ref_727_){
_start:
{
lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; 
v___x_729_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__5);
v___x_730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_730_, 0, v_ref_727_);
lean_ctor_set(v___x_730_, 1, v___x_729_);
v___x_731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_731_, 0, v___x_730_);
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___boxed(lean_object* v_ref_732_, lean_object* v___y_733_){
_start:
{
lean_object* v_res_734_; 
v_res_734_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_732_);
return v_res_734_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___redArg(lean_object* v_x_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_){
_start:
{
lean_object* v___y_741_; uint16_t v___y_751_; uint8_t v___y_752_; lean_object* v___y_753_; uint8_t v___y_754_; uint8_t v___y_755_; lean_object* v___y_756_; lean_object* v___y_757_; lean_object* v_toCold_762_; lean_object* v_currRecDepth_763_; lean_object* v_ref_764_; uint16_t v_optionFlags_765_; uint8_t v_suppressElabErrors_766_; uint8_t v_checkDeprecated_767_; uint8_t v_isRecordingDeps_768_; lean_object* v_maxRecDepth_769_; lean_object* v_cancelTk_x3f_770_; 
v_toCold_762_ = lean_ctor_get(v___y_737_, 0);
v_currRecDepth_763_ = lean_ctor_get(v___y_737_, 1);
v_ref_764_ = lean_ctor_get(v___y_737_, 2);
v_optionFlags_765_ = lean_ctor_get_uint16(v___y_737_, sizeof(void*)*3);
v_suppressElabErrors_766_ = lean_ctor_get_uint8(v___y_737_, sizeof(void*)*3 + 2);
v_checkDeprecated_767_ = lean_ctor_get_uint8(v___y_737_, sizeof(void*)*3 + 3);
v_isRecordingDeps_768_ = lean_ctor_get_uint8(v___y_737_, sizeof(void*)*3 + 4);
v_maxRecDepth_769_ = lean_ctor_get(v_toCold_762_, 3);
v_cancelTk_x3f_770_ = lean_ctor_get(v_toCold_762_, 10);
if (lean_obj_tag(v_cancelTk_x3f_770_) == 1)
{
lean_object* v_val_776_; uint8_t v___x_777_; 
v_val_776_ = lean_ctor_get(v_cancelTk_x3f_770_, 0);
v___x_777_ = l_IO_CancelToken_isSet(v_val_776_);
if (v___x_777_ == 0)
{
goto v___jp_771_;
}
else
{
lean_object* v___x_778_; lean_object* v_a_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_786_; 
lean_dec_ref(v_x_735_);
v___x_778_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg();
v_a_779_ = lean_ctor_get(v___x_778_, 0);
v_isSharedCheck_786_ = !lean_is_exclusive(v___x_778_);
if (v_isSharedCheck_786_ == 0)
{
v___x_781_ = v___x_778_;
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_a_779_);
lean_dec(v___x_778_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___x_784_; 
if (v_isShared_782_ == 0)
{
v___x_784_ = v___x_781_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_a_779_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
return v___x_784_;
}
}
}
}
else
{
goto v___jp_771_;
}
v___jp_740_:
{
if (lean_obj_tag(v___y_741_) == 0)
{
return v___y_741_;
}
else
{
lean_object* v_a_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_749_; 
v_a_742_ = lean_ctor_get(v___y_741_, 0);
v_isSharedCheck_749_ = !lean_is_exclusive(v___y_741_);
if (v_isSharedCheck_749_ == 0)
{
v___x_744_ = v___y_741_;
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_a_742_);
lean_dec(v___y_741_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_747_; 
if (v_isShared_745_ == 0)
{
v___x_747_ = v___x_744_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v_a_742_);
v___x_747_ = v_reuseFailAlloc_748_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
return v___x_747_;
}
}
}
}
v___jp_750_:
{
lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; 
v___x_758_ = lean_unsigned_to_nat(1u);
v___x_759_ = lean_nat_add(v___y_753_, v___x_758_);
lean_inc_ref(v___y_757_);
v___x_760_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_760_, 0, v___y_757_);
lean_ctor_set(v___x_760_, 1, v___x_759_);
lean_ctor_set(v___x_760_, 2, v___y_756_);
lean_ctor_set_uint16(v___x_760_, sizeof(void*)*3, v___y_751_);
lean_ctor_set_uint8(v___x_760_, sizeof(void*)*3 + 2, v___y_752_);
lean_ctor_set_uint8(v___x_760_, sizeof(void*)*3 + 3, v___y_755_);
lean_ctor_set_uint8(v___x_760_, sizeof(void*)*3 + 4, v___y_754_);
lean_inc(v___y_738_);
lean_inc(v___y_736_);
v___x_761_ = lean_apply_4(v_x_735_, v___y_736_, v___x_760_, v___y_738_, lean_box(0));
v___y_741_ = v___x_761_;
goto v___jp_740_;
}
v___jp_771_:
{
lean_object* v___x_772_; uint8_t v___x_773_; 
v___x_772_ = lean_unsigned_to_nat(0u);
v___x_773_ = lean_nat_dec_eq(v_maxRecDepth_769_, v___x_772_);
if (v___x_773_ == 0)
{
uint8_t v___x_774_; 
v___x_774_ = lean_nat_dec_eq(v_currRecDepth_763_, v_maxRecDepth_769_);
if (v___x_774_ == 0)
{
lean_inc(v_ref_764_);
v___y_751_ = v_optionFlags_765_;
v___y_752_ = v_suppressElabErrors_766_;
v___y_753_ = v_currRecDepth_763_;
v___y_754_ = v_isRecordingDeps_768_;
v___y_755_ = v_checkDeprecated_767_;
v___y_756_ = v_ref_764_;
v___y_757_ = v_toCold_762_;
goto v___jp_750_;
}
else
{
lean_object* v___x_775_; 
lean_dec_ref(v_x_735_);
lean_inc(v_ref_764_);
v___x_775_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_764_);
v___y_741_ = v___x_775_;
goto v___jp_740_;
}
}
else
{
lean_inc(v_ref_764_);
v___y_751_ = v_optionFlags_765_;
v___y_752_ = v_suppressElabErrors_766_;
v___y_753_ = v_currRecDepth_763_;
v___y_754_ = v_isRecordingDeps_768_;
v___y_755_ = v_checkDeprecated_767_;
v___y_756_ = v_ref_764_;
v___y_757_ = v_toCold_762_;
goto v___jp_750_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___redArg___boxed(lean_object* v_x_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_){
_start:
{
lean_object* v_res_792_; 
v_res_792_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___redArg(v_x_787_, v___y_788_, v___y_789_, v___y_790_);
lean_dec(v___y_790_);
lean_dec_ref(v___y_789_);
lean_dec(v___y_788_);
return v_res_792_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__12___redArg(lean_object* v_a_793_, lean_object* v_b_794_, lean_object* v_x_795_){
_start:
{
if (lean_obj_tag(v_x_795_) == 0)
{
lean_dec(v_b_794_);
lean_dec_ref(v_a_793_);
return v_x_795_;
}
else
{
lean_object* v_key_796_; lean_object* v_value_797_; lean_object* v_tail_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_810_; 
v_key_796_ = lean_ctor_get(v_x_795_, 0);
v_value_797_ = lean_ctor_get(v_x_795_, 1);
v_tail_798_ = lean_ctor_get(v_x_795_, 2);
v_isSharedCheck_810_ = !lean_is_exclusive(v_x_795_);
if (v_isSharedCheck_810_ == 0)
{
v___x_800_ = v_x_795_;
v_isShared_801_ = v_isSharedCheck_810_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_tail_798_);
lean_inc(v_value_797_);
lean_inc(v_key_796_);
lean_dec(v_x_795_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_810_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
uint8_t v___x_802_; 
v___x_802_ = l_Lean_ExprStructEq_beq(v_key_796_, v_a_793_);
if (v___x_802_ == 0)
{
lean_object* v___x_803_; lean_object* v___x_805_; 
v___x_803_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__12___redArg(v_a_793_, v_b_794_, v_tail_798_);
if (v_isShared_801_ == 0)
{
lean_ctor_set(v___x_800_, 2, v___x_803_);
v___x_805_ = v___x_800_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v_key_796_);
lean_ctor_set(v_reuseFailAlloc_806_, 1, v_value_797_);
lean_ctor_set(v_reuseFailAlloc_806_, 2, v___x_803_);
v___x_805_ = v_reuseFailAlloc_806_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
return v___x_805_;
}
}
else
{
lean_object* v___x_808_; 
lean_dec(v_value_797_);
lean_dec(v_key_796_);
if (v_isShared_801_ == 0)
{
lean_ctor_set(v___x_800_, 1, v_b_794_);
lean_ctor_set(v___x_800_, 0, v_a_793_);
v___x_808_ = v___x_800_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_809_; 
v_reuseFailAlloc_809_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_809_, 0, v_a_793_);
lean_ctor_set(v_reuseFailAlloc_809_, 1, v_b_794_);
lean_ctor_set(v_reuseFailAlloc_809_, 2, v_tail_798_);
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
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(lean_object* v_x_811_, lean_object* v_x_812_){
_start:
{
if (lean_obj_tag(v_x_812_) == 0)
{
return v_x_811_;
}
else
{
lean_object* v_key_813_; lean_object* v_value_814_; lean_object* v_tail_815_; lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_838_; 
v_key_813_ = lean_ctor_get(v_x_812_, 0);
v_value_814_ = lean_ctor_get(v_x_812_, 1);
v_tail_815_ = lean_ctor_get(v_x_812_, 2);
v_isSharedCheck_838_ = !lean_is_exclusive(v_x_812_);
if (v_isSharedCheck_838_ == 0)
{
v___x_817_ = v_x_812_;
v_isShared_818_ = v_isSharedCheck_838_;
goto v_resetjp_816_;
}
else
{
lean_inc(v_tail_815_);
lean_inc(v_value_814_);
lean_inc(v_key_813_);
lean_dec(v_x_812_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_838_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
lean_object* v___x_819_; uint64_t v___x_820_; uint64_t v___x_821_; uint64_t v___x_822_; uint64_t v_fold_823_; uint64_t v___x_824_; uint64_t v___x_825_; uint64_t v___x_826_; size_t v___x_827_; size_t v___x_828_; size_t v___x_829_; size_t v___x_830_; size_t v___x_831_; lean_object* v___x_832_; lean_object* v___x_834_; 
v___x_819_ = lean_array_get_size(v_x_811_);
v___x_820_ = l_Lean_ExprStructEq_hash(v_key_813_);
v___x_821_ = 32ULL;
v___x_822_ = lean_uint64_shift_right(v___x_820_, v___x_821_);
v_fold_823_ = lean_uint64_xor(v___x_820_, v___x_822_);
v___x_824_ = 16ULL;
v___x_825_ = lean_uint64_shift_right(v_fold_823_, v___x_824_);
v___x_826_ = lean_uint64_xor(v_fold_823_, v___x_825_);
v___x_827_ = lean_uint64_to_usize(v___x_826_);
v___x_828_ = lean_usize_of_nat(v___x_819_);
v___x_829_ = ((size_t)1ULL);
v___x_830_ = lean_usize_sub(v___x_828_, v___x_829_);
v___x_831_ = lean_usize_land(v___x_827_, v___x_830_);
v___x_832_ = lean_array_uget_borrowed(v_x_811_, v___x_831_);
lean_inc(v___x_832_);
if (v_isShared_818_ == 0)
{
lean_ctor_set(v___x_817_, 2, v___x_832_);
v___x_834_ = v___x_817_;
goto v_reusejp_833_;
}
else
{
lean_object* v_reuseFailAlloc_837_; 
v_reuseFailAlloc_837_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_837_, 0, v_key_813_);
lean_ctor_set(v_reuseFailAlloc_837_, 1, v_value_814_);
lean_ctor_set(v_reuseFailAlloc_837_, 2, v___x_832_);
v___x_834_ = v_reuseFailAlloc_837_;
goto v_reusejp_833_;
}
v_reusejp_833_:
{
lean_object* v___x_835_; 
v___x_835_ = lean_array_uset(v_x_811_, v___x_831_, v___x_834_);
v_x_811_ = v___x_835_;
v_x_812_ = v_tail_815_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(lean_object* v_i_839_, lean_object* v_source_840_, lean_object* v_target_841_){
_start:
{
lean_object* v___x_842_; uint8_t v___x_843_; 
v___x_842_ = lean_array_get_size(v_source_840_);
v___x_843_ = lean_nat_dec_lt(v_i_839_, v___x_842_);
if (v___x_843_ == 0)
{
lean_dec_ref(v_source_840_);
lean_dec(v_i_839_);
return v_target_841_;
}
else
{
lean_object* v_es_844_; lean_object* v___x_845_; lean_object* v_source_846_; lean_object* v_target_847_; lean_object* v___x_848_; lean_object* v___x_849_; 
v_es_844_ = lean_array_fget(v_source_840_, v_i_839_);
v___x_845_ = lean_box(0);
v_source_846_ = lean_array_fset(v_source_840_, v_i_839_, v___x_845_);
v_target_847_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(v_target_841_, v_es_844_);
v___x_848_ = lean_unsigned_to_nat(1u);
v___x_849_ = lean_nat_add(v_i_839_, v___x_848_);
lean_dec(v_i_839_);
v_i_839_ = v___x_849_;
v_source_840_ = v_source_846_;
v_target_841_ = v_target_847_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11___redArg(lean_object* v_data_851_){
_start:
{
lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v_nbuckets_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; 
v___x_852_ = lean_array_get_size(v_data_851_);
v___x_853_ = lean_unsigned_to_nat(2u);
v_nbuckets_854_ = lean_nat_mul(v___x_852_, v___x_853_);
v___x_855_ = lean_unsigned_to_nat(0u);
v___x_856_ = lean_box(0);
v___x_857_ = lean_mk_array(v_nbuckets_854_, v___x_856_);
v___x_858_ = lean_array_propagate_mark(v_data_851_, v___x_857_);
v___x_859_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(v___x_855_, v_data_851_, v___x_858_);
return v___x_859_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10___redArg(lean_object* v_a_860_, lean_object* v_x_861_){
_start:
{
if (lean_obj_tag(v_x_861_) == 0)
{
uint8_t v___x_862_; 
v___x_862_ = 0;
return v___x_862_;
}
else
{
lean_object* v_key_863_; lean_object* v_tail_864_; uint8_t v___x_865_; 
v_key_863_ = lean_ctor_get(v_x_861_, 0);
v_tail_864_ = lean_ctor_get(v_x_861_, 2);
v___x_865_ = l_Lean_ExprStructEq_beq(v_key_863_, v_a_860_);
if (v___x_865_ == 0)
{
v_x_861_ = v_tail_864_;
goto _start;
}
else
{
return v___x_865_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10___redArg___boxed(lean_object* v_a_867_, lean_object* v_x_868_){
_start:
{
uint8_t v_res_869_; lean_object* v_r_870_; 
v_res_869_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10___redArg(v_a_867_, v_x_868_);
lean_dec(v_x_868_);
lean_dec_ref(v_a_867_);
v_r_870_ = lean_box(v_res_869_);
return v_r_870_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6___redArg(lean_object* v_m_871_, lean_object* v_a_872_, lean_object* v_b_873_){
_start:
{
lean_object* v_size_874_; lean_object* v_buckets_875_; lean_object* v___x_877_; uint8_t v_isShared_878_; uint8_t v_isSharedCheck_918_; 
v_size_874_ = lean_ctor_get(v_m_871_, 0);
v_buckets_875_ = lean_ctor_get(v_m_871_, 1);
v_isSharedCheck_918_ = !lean_is_exclusive(v_m_871_);
if (v_isSharedCheck_918_ == 0)
{
v___x_877_ = v_m_871_;
v_isShared_878_ = v_isSharedCheck_918_;
goto v_resetjp_876_;
}
else
{
lean_inc(v_buckets_875_);
lean_inc(v_size_874_);
lean_dec(v_m_871_);
v___x_877_ = lean_box(0);
v_isShared_878_ = v_isSharedCheck_918_;
goto v_resetjp_876_;
}
v_resetjp_876_:
{
lean_object* v___x_879_; uint64_t v___x_880_; uint64_t v___x_881_; uint64_t v___x_882_; uint64_t v_fold_883_; uint64_t v___x_884_; uint64_t v___x_885_; uint64_t v___x_886_; size_t v___x_887_; size_t v___x_888_; size_t v___x_889_; size_t v___x_890_; size_t v___x_891_; lean_object* v_bkt_892_; uint8_t v___x_893_; 
v___x_879_ = lean_array_get_size(v_buckets_875_);
v___x_880_ = l_Lean_ExprStructEq_hash(v_a_872_);
v___x_881_ = 32ULL;
v___x_882_ = lean_uint64_shift_right(v___x_880_, v___x_881_);
v_fold_883_ = lean_uint64_xor(v___x_880_, v___x_882_);
v___x_884_ = 16ULL;
v___x_885_ = lean_uint64_shift_right(v_fold_883_, v___x_884_);
v___x_886_ = lean_uint64_xor(v_fold_883_, v___x_885_);
v___x_887_ = lean_uint64_to_usize(v___x_886_);
v___x_888_ = lean_usize_of_nat(v___x_879_);
v___x_889_ = ((size_t)1ULL);
v___x_890_ = lean_usize_sub(v___x_888_, v___x_889_);
v___x_891_ = lean_usize_land(v___x_887_, v___x_890_);
v_bkt_892_ = lean_array_uget_borrowed(v_buckets_875_, v___x_891_);
v___x_893_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10___redArg(v_a_872_, v_bkt_892_);
if (v___x_893_ == 0)
{
lean_object* v___x_894_; lean_object* v_size_x27_895_; lean_object* v___x_896_; lean_object* v_buckets_x27_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; uint8_t v___x_903_; 
v___x_894_ = lean_unsigned_to_nat(1u);
v_size_x27_895_ = lean_nat_add(v_size_874_, v___x_894_);
lean_dec(v_size_874_);
lean_inc(v_bkt_892_);
v___x_896_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_896_, 0, v_a_872_);
lean_ctor_set(v___x_896_, 1, v_b_873_);
lean_ctor_set(v___x_896_, 2, v_bkt_892_);
v_buckets_x27_897_ = lean_array_uset(v_buckets_875_, v___x_891_, v___x_896_);
v___x_898_ = lean_unsigned_to_nat(4u);
v___x_899_ = lean_nat_mul(v_size_x27_895_, v___x_898_);
v___x_900_ = lean_unsigned_to_nat(3u);
v___x_901_ = lean_nat_div(v___x_899_, v___x_900_);
lean_dec(v___x_899_);
v___x_902_ = lean_array_get_size(v_buckets_x27_897_);
v___x_903_ = lean_nat_dec_le(v___x_901_, v___x_902_);
lean_dec(v___x_901_);
if (v___x_903_ == 0)
{
lean_object* v_val_904_; lean_object* v___x_906_; 
v_val_904_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11___redArg(v_buckets_x27_897_);
if (v_isShared_878_ == 0)
{
lean_ctor_set(v___x_877_, 1, v_val_904_);
lean_ctor_set(v___x_877_, 0, v_size_x27_895_);
v___x_906_ = v___x_877_;
goto v_reusejp_905_;
}
else
{
lean_object* v_reuseFailAlloc_907_; 
v_reuseFailAlloc_907_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_907_, 0, v_size_x27_895_);
lean_ctor_set(v_reuseFailAlloc_907_, 1, v_val_904_);
v___x_906_ = v_reuseFailAlloc_907_;
goto v_reusejp_905_;
}
v_reusejp_905_:
{
return v___x_906_;
}
}
else
{
lean_object* v___x_909_; 
if (v_isShared_878_ == 0)
{
lean_ctor_set(v___x_877_, 1, v_buckets_x27_897_);
lean_ctor_set(v___x_877_, 0, v_size_x27_895_);
v___x_909_ = v___x_877_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v_size_x27_895_);
lean_ctor_set(v_reuseFailAlloc_910_, 1, v_buckets_x27_897_);
v___x_909_ = v_reuseFailAlloc_910_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
return v___x_909_;
}
}
}
else
{
lean_object* v___x_911_; lean_object* v_buckets_x27_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_916_; 
lean_inc(v_bkt_892_);
v___x_911_ = lean_box(0);
v_buckets_x27_912_ = lean_array_uset(v_buckets_875_, v___x_891_, v___x_911_);
v___x_913_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__12___redArg(v_a_872_, v_b_873_, v_bkt_892_);
v___x_914_ = lean_array_uset(v_buckets_x27_912_, v___x_891_, v___x_913_);
if (v_isShared_878_ == 0)
{
lean_ctor_set(v___x_877_, 1, v___x_914_);
v___x_916_ = v___x_877_;
goto v_reusejp_915_;
}
else
{
lean_object* v_reuseFailAlloc_917_; 
v_reuseFailAlloc_917_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_917_, 0, v_size_874_);
lean_ctor_set(v_reuseFailAlloc_917_, 1, v___x_914_);
v___x_916_ = v_reuseFailAlloc_917_;
goto v_reusejp_915_;
}
v_reusejp_915_:
{
return v___x_916_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__2(lean_object* v_a_919_, lean_object* v_e_920_, lean_object* v_a_921_){
_start:
{
lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; 
v___x_923_ = lean_st_ref_take(v_a_919_);
v___x_924_ = lean_box(0);
v___x_925_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6___redArg(v___x_923_, v_e_920_, v_a_921_);
v___x_926_ = lean_st_ref_put(v_a_919_, v___x_925_);
return v___x_924_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__2___boxed(lean_object* v_a_927_, lean_object* v_e_928_, lean_object* v_a_929_, lean_object* v___y_930_){
_start:
{
lean_object* v_res_931_; 
v_res_931_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__2(v_a_927_, v_e_928_, v_a_929_);
lean_dec(v_a_927_);
return v_res_931_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_a_932_, lean_object* v_x_933_){
_start:
{
if (lean_obj_tag(v_x_933_) == 0)
{
lean_object* v___x_934_; 
v___x_934_ = lean_box(0);
return v___x_934_;
}
else
{
lean_object* v_key_935_; lean_object* v_value_936_; lean_object* v_tail_937_; uint8_t v___x_938_; 
v_key_935_ = lean_ctor_get(v_x_933_, 0);
v_value_936_ = lean_ctor_get(v_x_933_, 1);
v_tail_937_ = lean_ctor_get(v_x_933_, 2);
v___x_938_ = l_Lean_ExprStructEq_beq(v_key_935_, v_a_932_);
if (v___x_938_ == 0)
{
v_x_933_ = v_tail_937_;
goto _start;
}
else
{
lean_object* v___x_940_; 
lean_inc(v_value_936_);
v___x_940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_940_, 0, v_value_936_);
return v___x_940_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_a_941_, lean_object* v_x_942_){
_start:
{
lean_object* v_res_943_; 
v_res_943_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1_spec__2___redArg(v_a_941_, v_x_942_);
lean_dec(v_x_942_);
lean_dec_ref(v_a_941_);
return v_res_943_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1___redArg(lean_object* v_m_944_, lean_object* v_a_945_){
_start:
{
lean_object* v_buckets_946_; lean_object* v___x_947_; uint64_t v___x_948_; uint64_t v___x_949_; uint64_t v___x_950_; uint64_t v_fold_951_; uint64_t v___x_952_; uint64_t v___x_953_; uint64_t v___x_954_; size_t v___x_955_; size_t v___x_956_; size_t v___x_957_; size_t v___x_958_; size_t v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; 
v_buckets_946_ = lean_ctor_get(v_m_944_, 1);
v___x_947_ = lean_array_get_size(v_buckets_946_);
v___x_948_ = l_Lean_ExprStructEq_hash(v_a_945_);
v___x_949_ = 32ULL;
v___x_950_ = lean_uint64_shift_right(v___x_948_, v___x_949_);
v_fold_951_ = lean_uint64_xor(v___x_948_, v___x_950_);
v___x_952_ = 16ULL;
v___x_953_ = lean_uint64_shift_right(v_fold_951_, v___x_952_);
v___x_954_ = lean_uint64_xor(v_fold_951_, v___x_953_);
v___x_955_ = lean_uint64_to_usize(v___x_954_);
v___x_956_ = lean_usize_of_nat(v___x_947_);
v___x_957_ = ((size_t)1ULL);
v___x_958_ = lean_usize_sub(v___x_956_, v___x_957_);
v___x_959_ = lean_usize_land(v___x_955_, v___x_958_);
v___x_960_ = lean_array_uget_borrowed(v_buckets_946_, v___x_959_);
v___x_961_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1_spec__2___redArg(v_a_945_, v___x_960_);
return v___x_961_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_m_962_, lean_object* v_a_963_){
_start:
{
lean_object* v_res_964_; 
v_res_964_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1___redArg(v_m_962_, v_a_963_);
lean_dec_ref(v_a_963_);
lean_dec_ref(v_m_962_);
return v_res_964_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__0(lean_object* v_00_u03b1_965_, lean_object* v_x_966_, lean_object* v___y_967_, lean_object* v___y_968_){
_start:
{
lean_object* v___x_970_; lean_object* v___x_971_; 
v___x_970_ = lean_apply_1(v_x_966_, lean_box(0));
v___x_971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_971_, 0, v___x_970_);
return v___x_971_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__0___boxed(lean_object* v_00_u03b1_972_, lean_object* v_x_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_){
_start:
{
lean_object* v_res_977_; 
v_res_977_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__0(v_00_u03b1_972_, v_x_973_, v___y_974_, v___y_975_);
lean_dec(v___y_975_);
lean_dec_ref(v___y_974_);
return v_res_977_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0(void){
_start:
{
lean_object* v___x_979_; lean_object* v_dummy_980_; 
v___x_979_ = lean_box(0);
v_dummy_980_ = l_Lean_Expr_sort___override(v___x_979_);
return v_dummy_980_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(lean_object* v_pre_981_, lean_object* v_post_982_, size_t v_sz_983_, size_t v_i_984_, lean_object* v_bs_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_){
_start:
{
uint8_t v___x_990_; 
v___x_990_ = lean_usize_dec_lt(v_i_984_, v_sz_983_);
if (v___x_990_ == 0)
{
lean_object* v___x_991_; 
lean_dec_ref(v_post_982_);
lean_dec_ref(v_pre_981_);
v___x_991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_991_, 0, v_bs_985_);
return v___x_991_;
}
else
{
lean_object* v_v_992_; lean_object* v___x_993_; lean_object* v_bs_x27_994_; lean_object* v___x_995_; 
v_v_992_ = lean_array_uget(v_bs_985_, v_i_984_);
v___x_993_ = lean_unsigned_to_nat(0u);
v_bs_x27_994_ = lean_array_uset(v_bs_985_, v_i_984_, v___x_993_);
lean_inc_ref(v_post_982_);
lean_inc_ref(v_pre_981_);
v___x_995_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_981_, v_post_982_, v_v_992_, v___y_986_, v___y_987_, v___y_988_);
if (lean_obj_tag(v___x_995_) == 0)
{
lean_object* v_a_996_; size_t v___x_997_; size_t v___x_998_; lean_object* v___x_999_; 
v_a_996_ = lean_ctor_get(v___x_995_, 0);
lean_inc(v_a_996_);
lean_dec_ref_known(v___x_995_, 1);
v___x_997_ = ((size_t)1ULL);
v___x_998_ = lean_usize_add(v_i_984_, v___x_997_);
v___x_999_ = lean_array_uset(v_bs_x27_994_, v_i_984_, v_a_996_);
v_i_984_ = v___x_998_;
v_bs_985_ = v___x_999_;
goto _start;
}
else
{
lean_object* v_a_1001_; lean_object* v___x_1003_; uint8_t v_isShared_1004_; uint8_t v_isSharedCheck_1008_; 
lean_dec_ref(v_bs_x27_994_);
lean_dec_ref(v_post_982_);
lean_dec_ref(v_pre_981_);
v_a_1001_ = lean_ctor_get(v___x_995_, 0);
v_isSharedCheck_1008_ = !lean_is_exclusive(v___x_995_);
if (v_isSharedCheck_1008_ == 0)
{
v___x_1003_ = v___x_995_;
v_isShared_1004_ = v_isSharedCheck_1008_;
goto v_resetjp_1002_;
}
else
{
lean_inc(v_a_1001_);
lean_dec(v___x_995_);
v___x_1003_ = lean_box(0);
v_isShared_1004_ = v_isSharedCheck_1008_;
goto v_resetjp_1002_;
}
v_resetjp_1002_:
{
lean_object* v___x_1006_; 
if (v_isShared_1004_ == 0)
{
v___x_1006_ = v___x_1003_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v_a_1001_);
v___x_1006_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
return v___x_1006_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__4(lean_object* v_pre_1009_, lean_object* v_post_1010_, lean_object* v___y_1011_, lean_object* v_x_1012_, lean_object* v_x_1013_, lean_object* v_x_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_){
_start:
{
if (lean_obj_tag(v_x_1012_) == 5)
{
lean_object* v_fn_1019_; lean_object* v_arg_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; 
v_fn_1019_ = lean_ctor_get(v_x_1012_, 0);
lean_inc_ref(v_fn_1019_);
v_arg_1020_ = lean_ctor_get(v_x_1012_, 1);
lean_inc_ref(v_arg_1020_);
lean_dec_ref_known(v_x_1012_, 2);
v___x_1021_ = lean_array_set(v_x_1013_, v_x_1014_, v_arg_1020_);
v___x_1022_ = lean_unsigned_to_nat(1u);
v___x_1023_ = lean_nat_sub(v_x_1014_, v___x_1022_);
lean_dec(v_x_1014_);
v_x_1012_ = v_fn_1019_;
v_x_1013_ = v___x_1021_;
v_x_1014_ = v___x_1023_;
goto _start;
}
else
{
lean_object* v___x_1025_; 
lean_dec(v_x_1014_);
lean_inc_ref(v_post_1010_);
lean_inc_ref(v_pre_1009_);
v___x_1025_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1009_, v_post_1010_, v_x_1012_, v___y_1015_, v___y_1016_, v___y_1017_);
if (lean_obj_tag(v___x_1025_) == 0)
{
lean_object* v_a_1026_; size_t v_sz_1027_; size_t v___x_1028_; lean_object* v___x_1029_; 
v_a_1026_ = lean_ctor_get(v___x_1025_, 0);
lean_inc(v_a_1026_);
lean_dec_ref_known(v___x_1025_, 1);
v_sz_1027_ = lean_array_size(v_x_1013_);
v___x_1028_ = ((size_t)0ULL);
v___x_1029_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1009_, v_post_1010_, v_sz_1027_, v___x_1028_, v_x_1013_, v___y_1015_, v___y_1016_, v___y_1017_);
if (lean_obj_tag(v___x_1029_) == 0)
{
lean_object* v_a_1030_; lean_object* v___x_1032_; uint8_t v_isShared_1033_; uint8_t v_isSharedCheck_1038_; 
v_a_1030_ = lean_ctor_get(v___x_1029_, 0);
v_isSharedCheck_1038_ = !lean_is_exclusive(v___x_1029_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_1032_ = v___x_1029_;
v_isShared_1033_ = v_isSharedCheck_1038_;
goto v_resetjp_1031_;
}
else
{
lean_inc(v_a_1030_);
lean_dec(v___x_1029_);
v___x_1032_ = lean_box(0);
v_isShared_1033_ = v_isSharedCheck_1038_;
goto v_resetjp_1031_;
}
v_resetjp_1031_:
{
lean_object* v___x_1034_; lean_object* v___x_1036_; 
v___x_1034_ = l_Lean_Expr_updateAppN(v___y_1011_, v_a_1026_, v_a_1030_);
lean_dec(v_a_1030_);
if (v_isShared_1033_ == 0)
{
lean_ctor_set(v___x_1032_, 0, v___x_1034_);
v___x_1036_ = v___x_1032_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v___x_1034_);
v___x_1036_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1035_;
}
v_reusejp_1035_:
{
return v___x_1036_;
}
}
}
else
{
lean_object* v_a_1039_; lean_object* v___x_1041_; uint8_t v_isShared_1042_; uint8_t v_isSharedCheck_1046_; 
lean_dec(v_a_1026_);
v_a_1039_ = lean_ctor_get(v___x_1029_, 0);
v_isSharedCheck_1046_ = !lean_is_exclusive(v___x_1029_);
if (v_isSharedCheck_1046_ == 0)
{
v___x_1041_ = v___x_1029_;
v_isShared_1042_ = v_isSharedCheck_1046_;
goto v_resetjp_1040_;
}
else
{
lean_inc(v_a_1039_);
lean_dec(v___x_1029_);
v___x_1041_ = lean_box(0);
v_isShared_1042_ = v_isSharedCheck_1046_;
goto v_resetjp_1040_;
}
v_resetjp_1040_:
{
lean_object* v___x_1044_; 
if (v_isShared_1042_ == 0)
{
v___x_1044_ = v___x_1041_;
goto v_reusejp_1043_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v_a_1039_);
v___x_1044_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1043_;
}
v_reusejp_1043_:
{
return v___x_1044_;
}
}
}
}
else
{
lean_dec_ref(v_x_1013_);
lean_dec_ref(v_post_1010_);
lean_dec_ref(v_pre_1009_);
return v___x_1025_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1(lean_object* v___x_1047_, lean_object* v_pre_1048_, lean_object* v_e_1049_, lean_object* v_post_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_){
_start:
{
lean_object* v___x_1055_; 
v___x_1055_ = l_Lean_Core_checkSystem(v___x_1047_, v___y_1052_, v___y_1053_);
if (lean_obj_tag(v___x_1055_) == 0)
{
lean_object* v___x_1056_; 
lean_dec_ref_known(v___x_1055_, 1);
lean_inc_ref(v_pre_1048_);
lean_inc(v___y_1053_);
lean_inc_ref(v___y_1052_);
lean_inc_ref(v_e_1049_);
v___x_1056_ = lean_apply_4(v_pre_1048_, v_e_1049_, v___y_1052_, v___y_1053_, lean_box(0));
if (lean_obj_tag(v___x_1056_) == 0)
{
lean_object* v_a_1057_; lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1174_; 
v_a_1057_ = lean_ctor_get(v___x_1056_, 0);
v_isSharedCheck_1174_ = !lean_is_exclusive(v___x_1056_);
if (v_isSharedCheck_1174_ == 0)
{
v___x_1059_ = v___x_1056_;
v_isShared_1060_ = v_isSharedCheck_1174_;
goto v_resetjp_1058_;
}
else
{
lean_inc(v_a_1057_);
lean_dec(v___x_1056_);
v___x_1059_ = lean_box(0);
v_isShared_1060_ = v_isSharedCheck_1174_;
goto v_resetjp_1058_;
}
v_resetjp_1058_:
{
lean_object* v___y_1062_; 
switch(lean_obj_tag(v_a_1057_))
{
case 0:
{
lean_object* v_e_1164_; lean_object* v___x_1166_; 
lean_dec_ref(v_post_1050_);
lean_dec_ref(v_e_1049_);
lean_dec_ref(v_pre_1048_);
v_e_1164_ = lean_ctor_get(v_a_1057_, 0);
lean_inc_ref(v_e_1164_);
lean_dec_ref_known(v_a_1057_, 1);
if (v_isShared_1060_ == 0)
{
lean_ctor_set(v___x_1059_, 0, v_e_1164_);
v___x_1166_ = v___x_1059_;
goto v_reusejp_1165_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v_e_1164_);
v___x_1166_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1165_;
}
v_reusejp_1165_:
{
return v___x_1166_;
}
}
case 1:
{
lean_object* v_e_1168_; lean_object* v___x_1169_; 
lean_del_object(v___x_1059_);
lean_dec_ref(v_e_1049_);
v_e_1168_ = lean_ctor_get(v_a_1057_, 0);
lean_inc_ref(v_e_1168_);
lean_dec_ref_known(v_a_1057_, 1);
lean_inc_ref(v_post_1050_);
lean_inc_ref(v_pre_1048_);
v___x_1169_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1048_, v_post_1050_, v_e_1168_, v___y_1051_, v___y_1052_, v___y_1053_);
if (lean_obj_tag(v___x_1169_) == 0)
{
lean_object* v_a_1170_; lean_object* v___x_1171_; 
v_a_1170_ = lean_ctor_get(v___x_1169_, 0);
lean_inc(v_a_1170_);
lean_dec_ref_known(v___x_1169_, 1);
v___x_1171_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3(v_pre_1048_, v_post_1050_, v_a_1170_, v___y_1051_, v___y_1052_, v___y_1053_);
return v___x_1171_;
}
else
{
lean_dec_ref(v_post_1050_);
lean_dec_ref(v_pre_1048_);
return v___x_1169_;
}
}
default: 
{
lean_object* v_e_x3f_1172_; 
lean_del_object(v___x_1059_);
v_e_x3f_1172_ = lean_ctor_get(v_a_1057_, 0);
lean_inc(v_e_x3f_1172_);
lean_dec_ref_known(v_a_1057_, 1);
if (lean_obj_tag(v_e_x3f_1172_) == 0)
{
v___y_1062_ = v_e_1049_;
goto v___jp_1061_;
}
else
{
lean_object* v_val_1173_; 
lean_dec_ref(v_e_1049_);
v_val_1173_ = lean_ctor_get(v_e_x3f_1172_, 0);
lean_inc(v_val_1173_);
lean_dec_ref_known(v_e_x3f_1172_, 1);
v___y_1062_ = v_val_1173_;
goto v___jp_1061_;
}
}
}
v___jp_1061_:
{
switch(lean_obj_tag(v___y_1062_))
{
case 7:
{
lean_object* v_binderName_1063_; lean_object* v_binderType_1064_; lean_object* v_body_1065_; uint8_t v_binderInfo_1066_; lean_object* v___x_1067_; 
v_binderName_1063_ = lean_ctor_get(v___y_1062_, 0);
v_binderType_1064_ = lean_ctor_get(v___y_1062_, 1);
v_body_1065_ = lean_ctor_get(v___y_1062_, 2);
v_binderInfo_1066_ = lean_ctor_get_uint8(v___y_1062_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_1064_);
lean_inc_ref(v_post_1050_);
lean_inc_ref(v_pre_1048_);
v___x_1067_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1048_, v_post_1050_, v_binderType_1064_, v___y_1051_, v___y_1052_, v___y_1053_);
if (lean_obj_tag(v___x_1067_) == 0)
{
lean_object* v_a_1068_; lean_object* v___x_1069_; 
v_a_1068_ = lean_ctor_get(v___x_1067_, 0);
lean_inc(v_a_1068_);
lean_dec_ref_known(v___x_1067_, 1);
lean_inc_ref(v_body_1065_);
lean_inc_ref(v_post_1050_);
lean_inc_ref(v_pre_1048_);
v___x_1069_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1048_, v_post_1050_, v_body_1065_, v___y_1051_, v___y_1052_, v___y_1053_);
if (lean_obj_tag(v___x_1069_) == 0)
{
lean_object* v_a_1070_; size_t v___x_1071_; size_t v___x_1072_; uint8_t v___x_1073_; 
v_a_1070_ = lean_ctor_get(v___x_1069_, 0);
lean_inc(v_a_1070_);
lean_dec_ref_known(v___x_1069_, 1);
v___x_1071_ = lean_ptr_addr(v_binderType_1064_);
v___x_1072_ = lean_ptr_addr(v_a_1068_);
v___x_1073_ = lean_usize_dec_eq(v___x_1071_, v___x_1072_);
if (v___x_1073_ == 0)
{
lean_object* v___x_1074_; lean_object* v___x_1075_; 
lean_inc(v_binderName_1063_);
lean_dec_ref_known(v___y_1062_, 3);
v___x_1074_ = l_Lean_Expr_forallE___override(v_binderName_1063_, v_a_1068_, v_a_1070_, v_binderInfo_1066_);
v___x_1075_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3(v_pre_1048_, v_post_1050_, v___x_1074_, v___y_1051_, v___y_1052_, v___y_1053_);
return v___x_1075_;
}
else
{
size_t v___x_1076_; size_t v___x_1077_; uint8_t v___x_1078_; 
v___x_1076_ = lean_ptr_addr(v_body_1065_);
v___x_1077_ = lean_ptr_addr(v_a_1070_);
v___x_1078_ = lean_usize_dec_eq(v___x_1076_, v___x_1077_);
if (v___x_1078_ == 0)
{
lean_object* v___x_1079_; lean_object* v___x_1080_; 
lean_inc(v_binderName_1063_);
lean_dec_ref_known(v___y_1062_, 3);
v___x_1079_ = l_Lean_Expr_forallE___override(v_binderName_1063_, v_a_1068_, v_a_1070_, v_binderInfo_1066_);
v___x_1080_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3(v_pre_1048_, v_post_1050_, v___x_1079_, v___y_1051_, v___y_1052_, v___y_1053_);
return v___x_1080_;
}
else
{
uint8_t v___x_1081_; 
v___x_1081_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1066_, v_binderInfo_1066_);
if (v___x_1081_ == 0)
{
lean_object* v___x_1082_; lean_object* v___x_1083_; 
lean_inc(v_binderName_1063_);
lean_dec_ref_known(v___y_1062_, 3);
v___x_1082_ = l_Lean_Expr_forallE___override(v_binderName_1063_, v_a_1068_, v_a_1070_, v_binderInfo_1066_);
v___x_1083_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3(v_pre_1048_, v_post_1050_, v___x_1082_, v___y_1051_, v___y_1052_, v___y_1053_);
return v___x_1083_;
}
else
{
lean_object* v___x_1084_; 
lean_dec(v_a_1070_);
lean_dec(v_a_1068_);
v___x_1084_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3(v_pre_1048_, v_post_1050_, v___y_1062_, v___y_1051_, v___y_1052_, v___y_1053_);
return v___x_1084_;
}
}
}
}
else
{
lean_dec(v_a_1068_);
lean_dec_ref_known(v___y_1062_, 3);
lean_dec_ref(v_post_1050_);
lean_dec_ref(v_pre_1048_);
return v___x_1069_;
}
}
else
{
lean_dec_ref_known(v___y_1062_, 3);
lean_dec_ref(v_post_1050_);
lean_dec_ref(v_pre_1048_);
return v___x_1067_;
}
}
case 6:
{
lean_object* v_binderName_1085_; lean_object* v_binderType_1086_; lean_object* v_body_1087_; uint8_t v_binderInfo_1088_; lean_object* v___x_1089_; 
v_binderName_1085_ = lean_ctor_get(v___y_1062_, 0);
v_binderType_1086_ = lean_ctor_get(v___y_1062_, 1);
v_body_1087_ = lean_ctor_get(v___y_1062_, 2);
v_binderInfo_1088_ = lean_ctor_get_uint8(v___y_1062_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_1086_);
lean_inc_ref(v_post_1050_);
lean_inc_ref(v_pre_1048_);
v___x_1089_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1048_, v_post_1050_, v_binderType_1086_, v___y_1051_, v___y_1052_, v___y_1053_);
if (lean_obj_tag(v___x_1089_) == 0)
{
lean_object* v_a_1090_; lean_object* v___x_1091_; 
v_a_1090_ = lean_ctor_get(v___x_1089_, 0);
lean_inc(v_a_1090_);
lean_dec_ref_known(v___x_1089_, 1);
lean_inc_ref(v_body_1087_);
lean_inc_ref(v_post_1050_);
lean_inc_ref(v_pre_1048_);
v___x_1091_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1048_, v_post_1050_, v_body_1087_, v___y_1051_, v___y_1052_, v___y_1053_);
if (lean_obj_tag(v___x_1091_) == 0)
{
lean_object* v_a_1092_; size_t v___x_1093_; size_t v___x_1094_; uint8_t v___x_1095_; 
v_a_1092_ = lean_ctor_get(v___x_1091_, 0);
lean_inc(v_a_1092_);
lean_dec_ref_known(v___x_1091_, 1);
v___x_1093_ = lean_ptr_addr(v_binderType_1086_);
v___x_1094_ = lean_ptr_addr(v_a_1090_);
v___x_1095_ = lean_usize_dec_eq(v___x_1093_, v___x_1094_);
if (v___x_1095_ == 0)
{
lean_object* v___x_1096_; lean_object* v___x_1097_; 
lean_inc(v_binderName_1085_);
lean_dec_ref_known(v___y_1062_, 3);
v___x_1096_ = l_Lean_Expr_lam___override(v_binderName_1085_, v_a_1090_, v_a_1092_, v_binderInfo_1088_);
v___x_1097_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3(v_pre_1048_, v_post_1050_, v___x_1096_, v___y_1051_, v___y_1052_, v___y_1053_);
return v___x_1097_;
}
else
{
size_t v___x_1098_; size_t v___x_1099_; uint8_t v___x_1100_; 
v___x_1098_ = lean_ptr_addr(v_body_1087_);
v___x_1099_ = lean_ptr_addr(v_a_1092_);
v___x_1100_ = lean_usize_dec_eq(v___x_1098_, v___x_1099_);
if (v___x_1100_ == 0)
{
lean_object* v___x_1101_; lean_object* v___x_1102_; 
lean_inc(v_binderName_1085_);
lean_dec_ref_known(v___y_1062_, 3);
v___x_1101_ = l_Lean_Expr_lam___override(v_binderName_1085_, v_a_1090_, v_a_1092_, v_binderInfo_1088_);
v___x_1102_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3(v_pre_1048_, v_post_1050_, v___x_1101_, v___y_1051_, v___y_1052_, v___y_1053_);
return v___x_1102_;
}
else
{
uint8_t v___x_1103_; 
v___x_1103_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1088_, v_binderInfo_1088_);
if (v___x_1103_ == 0)
{
lean_object* v___x_1104_; lean_object* v___x_1105_; 
lean_inc(v_binderName_1085_);
lean_dec_ref_known(v___y_1062_, 3);
v___x_1104_ = l_Lean_Expr_lam___override(v_binderName_1085_, v_a_1090_, v_a_1092_, v_binderInfo_1088_);
v___x_1105_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3(v_pre_1048_, v_post_1050_, v___x_1104_, v___y_1051_, v___y_1052_, v___y_1053_);
return v___x_1105_;
}
else
{
lean_object* v___x_1106_; 
lean_dec(v_a_1092_);
lean_dec(v_a_1090_);
v___x_1106_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3(v_pre_1048_, v_post_1050_, v___y_1062_, v___y_1051_, v___y_1052_, v___y_1053_);
return v___x_1106_;
}
}
}
}
else
{
lean_dec(v_a_1090_);
lean_dec_ref_known(v___y_1062_, 3);
lean_dec_ref(v_post_1050_);
lean_dec_ref(v_pre_1048_);
return v___x_1091_;
}
}
else
{
lean_dec_ref_known(v___y_1062_, 3);
lean_dec_ref(v_post_1050_);
lean_dec_ref(v_pre_1048_);
return v___x_1089_;
}
}
case 8:
{
lean_object* v_declName_1107_; lean_object* v_type_1108_; lean_object* v_value_1109_; lean_object* v_body_1110_; uint8_t v_nondep_1111_; lean_object* v___x_1112_; 
v_declName_1107_ = lean_ctor_get(v___y_1062_, 0);
v_type_1108_ = lean_ctor_get(v___y_1062_, 1);
v_value_1109_ = lean_ctor_get(v___y_1062_, 2);
v_body_1110_ = lean_ctor_get(v___y_1062_, 3);
v_nondep_1111_ = lean_ctor_get_uint8(v___y_1062_, sizeof(void*)*4 + 8);
lean_inc_ref(v_type_1108_);
lean_inc_ref(v_post_1050_);
lean_inc_ref(v_pre_1048_);
v___x_1112_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1048_, v_post_1050_, v_type_1108_, v___y_1051_, v___y_1052_, v___y_1053_);
if (lean_obj_tag(v___x_1112_) == 0)
{
lean_object* v_a_1113_; lean_object* v___x_1114_; 
v_a_1113_ = lean_ctor_get(v___x_1112_, 0);
lean_inc(v_a_1113_);
lean_dec_ref_known(v___x_1112_, 1);
lean_inc_ref(v_value_1109_);
lean_inc_ref(v_post_1050_);
lean_inc_ref(v_pre_1048_);
v___x_1114_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1048_, v_post_1050_, v_value_1109_, v___y_1051_, v___y_1052_, v___y_1053_);
if (lean_obj_tag(v___x_1114_) == 0)
{
lean_object* v_a_1115_; lean_object* v___x_1116_; 
v_a_1115_ = lean_ctor_get(v___x_1114_, 0);
lean_inc(v_a_1115_);
lean_dec_ref_known(v___x_1114_, 1);
lean_inc_ref(v_body_1110_);
lean_inc_ref(v_post_1050_);
lean_inc_ref(v_pre_1048_);
v___x_1116_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1048_, v_post_1050_, v_body_1110_, v___y_1051_, v___y_1052_, v___y_1053_);
if (lean_obj_tag(v___x_1116_) == 0)
{
lean_object* v_a_1117_; size_t v___x_1118_; size_t v___x_1119_; uint8_t v___x_1120_; 
v_a_1117_ = lean_ctor_get(v___x_1116_, 0);
lean_inc(v_a_1117_);
lean_dec_ref_known(v___x_1116_, 1);
v___x_1118_ = lean_ptr_addr(v_type_1108_);
v___x_1119_ = lean_ptr_addr(v_a_1113_);
v___x_1120_ = lean_usize_dec_eq(v___x_1118_, v___x_1119_);
if (v___x_1120_ == 0)
{
lean_object* v___x_1121_; lean_object* v___x_1122_; 
lean_inc(v_declName_1107_);
lean_dec_ref_known(v___y_1062_, 4);
v___x_1121_ = l_Lean_Expr_letE___override(v_declName_1107_, v_a_1113_, v_a_1115_, v_a_1117_, v_nondep_1111_);
v___x_1122_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3(v_pre_1048_, v_post_1050_, v___x_1121_, v___y_1051_, v___y_1052_, v___y_1053_);
return v___x_1122_;
}
else
{
size_t v___x_1123_; size_t v___x_1124_; uint8_t v___x_1125_; 
v___x_1123_ = lean_ptr_addr(v_value_1109_);
v___x_1124_ = lean_ptr_addr(v_a_1115_);
v___x_1125_ = lean_usize_dec_eq(v___x_1123_, v___x_1124_);
if (v___x_1125_ == 0)
{
lean_object* v___x_1126_; lean_object* v___x_1127_; 
lean_inc(v_declName_1107_);
lean_dec_ref_known(v___y_1062_, 4);
v___x_1126_ = l_Lean_Expr_letE___override(v_declName_1107_, v_a_1113_, v_a_1115_, v_a_1117_, v_nondep_1111_);
v___x_1127_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3(v_pre_1048_, v_post_1050_, v___x_1126_, v___y_1051_, v___y_1052_, v___y_1053_);
return v___x_1127_;
}
else
{
size_t v___x_1128_; size_t v___x_1129_; uint8_t v___x_1130_; 
v___x_1128_ = lean_ptr_addr(v_body_1110_);
v___x_1129_ = lean_ptr_addr(v_a_1117_);
v___x_1130_ = lean_usize_dec_eq(v___x_1128_, v___x_1129_);
if (v___x_1130_ == 0)
{
lean_object* v___x_1131_; lean_object* v___x_1132_; 
lean_inc(v_declName_1107_);
lean_dec_ref_known(v___y_1062_, 4);
v___x_1131_ = l_Lean_Expr_letE___override(v_declName_1107_, v_a_1113_, v_a_1115_, v_a_1117_, v_nondep_1111_);
v___x_1132_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3(v_pre_1048_, v_post_1050_, v___x_1131_, v___y_1051_, v___y_1052_, v___y_1053_);
return v___x_1132_;
}
else
{
lean_object* v___x_1133_; 
lean_dec(v_a_1117_);
lean_dec(v_a_1115_);
lean_dec(v_a_1113_);
v___x_1133_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3(v_pre_1048_, v_post_1050_, v___y_1062_, v___y_1051_, v___y_1052_, v___y_1053_);
return v___x_1133_;
}
}
}
}
else
{
lean_dec(v_a_1115_);
lean_dec(v_a_1113_);
lean_dec_ref_known(v___y_1062_, 4);
lean_dec_ref(v_post_1050_);
lean_dec_ref(v_pre_1048_);
return v___x_1116_;
}
}
else
{
lean_dec(v_a_1113_);
lean_dec_ref_known(v___y_1062_, 4);
lean_dec_ref(v_post_1050_);
lean_dec_ref(v_pre_1048_);
return v___x_1114_;
}
}
else
{
lean_dec_ref_known(v___y_1062_, 4);
lean_dec_ref(v_post_1050_);
lean_dec_ref(v_pre_1048_);
return v___x_1112_;
}
}
case 5:
{
lean_object* v_dummy_1134_; lean_object* v_nargs_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; 
v_dummy_1134_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0);
v_nargs_1135_ = l_Lean_Expr_getAppNumArgs(v___y_1062_);
lean_inc(v_nargs_1135_);
v___x_1136_ = lean_mk_array(v_nargs_1135_, v_dummy_1134_);
v___x_1137_ = lean_unsigned_to_nat(1u);
v___x_1138_ = lean_nat_sub(v_nargs_1135_, v___x_1137_);
lean_dec(v_nargs_1135_);
lean_inc_ref(v___y_1062_);
lean_inc_ref(v_post_1050_);
lean_inc_ref(v_pre_1048_);
v___x_1139_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__4(v_pre_1048_, v_post_1050_, v___y_1062_, v___y_1062_, v___x_1136_, v___x_1138_, v___y_1051_, v___y_1052_, v___y_1053_);
lean_dec_ref_known(v___y_1062_, 2);
if (lean_obj_tag(v___x_1139_) == 0)
{
lean_object* v_a_1140_; lean_object* v___x_1141_; 
v_a_1140_ = lean_ctor_get(v___x_1139_, 0);
lean_inc(v_a_1140_);
lean_dec_ref_known(v___x_1139_, 1);
v___x_1141_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3(v_pre_1048_, v_post_1050_, v_a_1140_, v___y_1051_, v___y_1052_, v___y_1053_);
return v___x_1141_;
}
else
{
lean_dec_ref(v_post_1050_);
lean_dec_ref(v_pre_1048_);
return v___x_1139_;
}
}
case 10:
{
lean_object* v_data_1142_; lean_object* v_expr_1143_; lean_object* v___x_1144_; 
v_data_1142_ = lean_ctor_get(v___y_1062_, 0);
v_expr_1143_ = lean_ctor_get(v___y_1062_, 1);
lean_inc_ref(v_expr_1143_);
lean_inc_ref(v_post_1050_);
lean_inc_ref(v_pre_1048_);
v___x_1144_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1048_, v_post_1050_, v_expr_1143_, v___y_1051_, v___y_1052_, v___y_1053_);
if (lean_obj_tag(v___x_1144_) == 0)
{
lean_object* v_a_1145_; size_t v___x_1146_; size_t v___x_1147_; uint8_t v___x_1148_; 
v_a_1145_ = lean_ctor_get(v___x_1144_, 0);
lean_inc(v_a_1145_);
lean_dec_ref_known(v___x_1144_, 1);
v___x_1146_ = lean_ptr_addr(v_expr_1143_);
v___x_1147_ = lean_ptr_addr(v_a_1145_);
v___x_1148_ = lean_usize_dec_eq(v___x_1146_, v___x_1147_);
if (v___x_1148_ == 0)
{
lean_object* v___x_1149_; lean_object* v___x_1150_; 
lean_inc(v_data_1142_);
lean_dec_ref_known(v___y_1062_, 2);
v___x_1149_ = l_Lean_Expr_mdata___override(v_data_1142_, v_a_1145_);
v___x_1150_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3(v_pre_1048_, v_post_1050_, v___x_1149_, v___y_1051_, v___y_1052_, v___y_1053_);
return v___x_1150_;
}
else
{
lean_object* v___x_1151_; 
lean_dec(v_a_1145_);
v___x_1151_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3(v_pre_1048_, v_post_1050_, v___y_1062_, v___y_1051_, v___y_1052_, v___y_1053_);
return v___x_1151_;
}
}
else
{
lean_dec_ref_known(v___y_1062_, 2);
lean_dec_ref(v_post_1050_);
lean_dec_ref(v_pre_1048_);
return v___x_1144_;
}
}
case 11:
{
lean_object* v_typeName_1152_; lean_object* v_idx_1153_; lean_object* v_struct_1154_; lean_object* v___x_1155_; 
v_typeName_1152_ = lean_ctor_get(v___y_1062_, 0);
v_idx_1153_ = lean_ctor_get(v___y_1062_, 1);
v_struct_1154_ = lean_ctor_get(v___y_1062_, 2);
lean_inc_ref(v_struct_1154_);
lean_inc_ref(v_post_1050_);
lean_inc_ref(v_pre_1048_);
v___x_1155_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1048_, v_post_1050_, v_struct_1154_, v___y_1051_, v___y_1052_, v___y_1053_);
if (lean_obj_tag(v___x_1155_) == 0)
{
lean_object* v_a_1156_; size_t v___x_1157_; size_t v___x_1158_; uint8_t v___x_1159_; 
v_a_1156_ = lean_ctor_get(v___x_1155_, 0);
lean_inc(v_a_1156_);
lean_dec_ref_known(v___x_1155_, 1);
v___x_1157_ = lean_ptr_addr(v_struct_1154_);
v___x_1158_ = lean_ptr_addr(v_a_1156_);
v___x_1159_ = lean_usize_dec_eq(v___x_1157_, v___x_1158_);
if (v___x_1159_ == 0)
{
lean_object* v___x_1160_; lean_object* v___x_1161_; 
lean_inc(v_idx_1153_);
lean_inc(v_typeName_1152_);
lean_dec_ref_known(v___y_1062_, 3);
v___x_1160_ = l_Lean_Expr_proj___override(v_typeName_1152_, v_idx_1153_, v_a_1156_);
v___x_1161_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3(v_pre_1048_, v_post_1050_, v___x_1160_, v___y_1051_, v___y_1052_, v___y_1053_);
return v___x_1161_;
}
else
{
lean_object* v___x_1162_; 
lean_dec(v_a_1156_);
v___x_1162_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3(v_pre_1048_, v_post_1050_, v___y_1062_, v___y_1051_, v___y_1052_, v___y_1053_);
return v___x_1162_;
}
}
else
{
lean_dec_ref_known(v___y_1062_, 3);
lean_dec_ref(v_post_1050_);
lean_dec_ref(v_pre_1048_);
return v___x_1155_;
}
}
default: 
{
lean_object* v___x_1163_; 
v___x_1163_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3(v_pre_1048_, v_post_1050_, v___y_1062_, v___y_1051_, v___y_1052_, v___y_1053_);
return v___x_1163_;
}
}
}
}
}
else
{
lean_object* v_a_1175_; lean_object* v___x_1177_; uint8_t v_isShared_1178_; uint8_t v_isSharedCheck_1182_; 
lean_dec_ref(v_post_1050_);
lean_dec_ref(v_e_1049_);
lean_dec_ref(v_pre_1048_);
v_a_1175_ = lean_ctor_get(v___x_1056_, 0);
v_isSharedCheck_1182_ = !lean_is_exclusive(v___x_1056_);
if (v_isSharedCheck_1182_ == 0)
{
v___x_1177_ = v___x_1056_;
v_isShared_1178_ = v_isSharedCheck_1182_;
goto v_resetjp_1176_;
}
else
{
lean_inc(v_a_1175_);
lean_dec(v___x_1056_);
v___x_1177_ = lean_box(0);
v_isShared_1178_ = v_isSharedCheck_1182_;
goto v_resetjp_1176_;
}
v_resetjp_1176_:
{
lean_object* v___x_1180_; 
if (v_isShared_1178_ == 0)
{
v___x_1180_ = v___x_1177_;
goto v_reusejp_1179_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v_a_1175_);
v___x_1180_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1179_;
}
v_reusejp_1179_:
{
return v___x_1180_;
}
}
}
}
else
{
lean_object* v_a_1183_; lean_object* v___x_1185_; uint8_t v_isShared_1186_; uint8_t v_isSharedCheck_1190_; 
lean_dec_ref(v_post_1050_);
lean_dec_ref(v_e_1049_);
lean_dec_ref(v_pre_1048_);
v_a_1183_ = lean_ctor_get(v___x_1055_, 0);
v_isSharedCheck_1190_ = !lean_is_exclusive(v___x_1055_);
if (v_isSharedCheck_1190_ == 0)
{
v___x_1185_ = v___x_1055_;
v_isShared_1186_ = v_isSharedCheck_1190_;
goto v_resetjp_1184_;
}
else
{
lean_inc(v_a_1183_);
lean_dec(v___x_1055_);
v___x_1185_ = lean_box(0);
v_isShared_1186_ = v_isSharedCheck_1190_;
goto v_resetjp_1184_;
}
v_resetjp_1184_:
{
lean_object* v___x_1188_; 
if (v_isShared_1186_ == 0)
{
v___x_1188_ = v___x_1185_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v_a_1183_);
v___x_1188_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
return v___x_1188_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___boxed(lean_object* v___x_1191_, lean_object* v_pre_1192_, lean_object* v_e_1193_, lean_object* v_post_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_){
_start:
{
lean_object* v_res_1199_; 
v_res_1199_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1(v___x_1191_, v_pre_1192_, v_e_1193_, v_post_1194_, v___y_1195_, v___y_1196_, v___y_1197_);
lean_dec(v___y_1197_);
lean_dec_ref(v___y_1196_);
lean_dec(v___y_1195_);
return v_res_1199_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(lean_object* v_pre_1200_, lean_object* v_post_1201_, lean_object* v_e_1202_, lean_object* v_a_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_){
_start:
{
lean_object* v___x_1207_; lean_object* v___x_1208_; 
lean_inc(v_a_1203_);
v___x_1207_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1207_, 0, lean_box(0));
lean_closure_set(v___x_1207_, 1, lean_box(0));
lean_closure_set(v___x_1207_, 2, v_a_1203_);
v___x_1208_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__0(lean_box(0), v___x_1207_, v___y_1204_, v___y_1205_);
if (lean_obj_tag(v___x_1208_) == 0)
{
lean_object* v_a_1209_; lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1240_; 
v_a_1209_ = lean_ctor_get(v___x_1208_, 0);
v_isSharedCheck_1240_ = !lean_is_exclusive(v___x_1208_);
if (v_isSharedCheck_1240_ == 0)
{
v___x_1211_ = v___x_1208_;
v_isShared_1212_ = v_isSharedCheck_1240_;
goto v_resetjp_1210_;
}
else
{
lean_inc(v_a_1209_);
lean_dec(v___x_1208_);
v___x_1211_ = lean_box(0);
v_isShared_1212_ = v_isSharedCheck_1240_;
goto v_resetjp_1210_;
}
v_resetjp_1210_:
{
lean_object* v___x_1213_; 
v___x_1213_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1___redArg(v_a_1209_, v_e_1202_);
lean_dec(v_a_1209_);
if (lean_obj_tag(v___x_1213_) == 0)
{
lean_object* v___x_1214_; lean_object* v___f_1215_; lean_object* v___x_1216_; 
lean_del_object(v___x_1211_);
v___x_1214_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___closed__0));
lean_inc_ref(v_e_1202_);
v___f_1215_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___boxed), 8, 4);
lean_closure_set(v___f_1215_, 0, v___x_1214_);
lean_closure_set(v___f_1215_, 1, v_pre_1200_);
lean_closure_set(v___f_1215_, 2, v_e_1202_);
lean_closure_set(v___f_1215_, 3, v_post_1201_);
v___x_1216_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___redArg(v___f_1215_, v_a_1203_, v___y_1204_, v___y_1205_);
if (lean_obj_tag(v___x_1216_) == 0)
{
lean_object* v_a_1217_; lean_object* v___f_1218_; lean_object* v___x_1219_; 
v_a_1217_ = lean_ctor_get(v___x_1216_, 0);
lean_inc_n(v_a_1217_, 2);
lean_dec_ref_known(v___x_1216_, 1);
lean_inc(v_a_1203_);
v___f_1218_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__2___boxed), 4, 3);
lean_closure_set(v___f_1218_, 0, v_a_1203_);
lean_closure_set(v___f_1218_, 1, v_e_1202_);
lean_closure_set(v___f_1218_, 2, v_a_1217_);
v___x_1219_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__0(lean_box(0), v___f_1218_, v___y_1204_, v___y_1205_);
if (lean_obj_tag(v___x_1219_) == 0)
{
lean_object* v___x_1221_; uint8_t v_isShared_1222_; uint8_t v_isSharedCheck_1226_; 
v_isSharedCheck_1226_ = !lean_is_exclusive(v___x_1219_);
if (v_isSharedCheck_1226_ == 0)
{
lean_object* v_unused_1227_; 
v_unused_1227_ = lean_ctor_get(v___x_1219_, 0);
lean_dec(v_unused_1227_);
v___x_1221_ = v___x_1219_;
v_isShared_1222_ = v_isSharedCheck_1226_;
goto v_resetjp_1220_;
}
else
{
lean_dec(v___x_1219_);
v___x_1221_ = lean_box(0);
v_isShared_1222_ = v_isSharedCheck_1226_;
goto v_resetjp_1220_;
}
v_resetjp_1220_:
{
lean_object* v___x_1224_; 
if (v_isShared_1222_ == 0)
{
lean_ctor_set(v___x_1221_, 0, v_a_1217_);
v___x_1224_ = v___x_1221_;
goto v_reusejp_1223_;
}
else
{
lean_object* v_reuseFailAlloc_1225_; 
v_reuseFailAlloc_1225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1225_, 0, v_a_1217_);
v___x_1224_ = v_reuseFailAlloc_1225_;
goto v_reusejp_1223_;
}
v_reusejp_1223_:
{
return v___x_1224_;
}
}
}
else
{
lean_object* v_a_1228_; lean_object* v___x_1230_; uint8_t v_isShared_1231_; uint8_t v_isSharedCheck_1235_; 
lean_dec(v_a_1217_);
v_a_1228_ = lean_ctor_get(v___x_1219_, 0);
v_isSharedCheck_1235_ = !lean_is_exclusive(v___x_1219_);
if (v_isSharedCheck_1235_ == 0)
{
v___x_1230_ = v___x_1219_;
v_isShared_1231_ = v_isSharedCheck_1235_;
goto v_resetjp_1229_;
}
else
{
lean_inc(v_a_1228_);
lean_dec(v___x_1219_);
v___x_1230_ = lean_box(0);
v_isShared_1231_ = v_isSharedCheck_1235_;
goto v_resetjp_1229_;
}
v_resetjp_1229_:
{
lean_object* v___x_1233_; 
if (v_isShared_1231_ == 0)
{
v___x_1233_ = v___x_1230_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1234_; 
v_reuseFailAlloc_1234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1234_, 0, v_a_1228_);
v___x_1233_ = v_reuseFailAlloc_1234_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
return v___x_1233_;
}
}
}
}
else
{
lean_dec_ref(v_e_1202_);
return v___x_1216_;
}
}
else
{
lean_object* v_val_1236_; lean_object* v___x_1238_; 
lean_dec_ref(v_e_1202_);
lean_dec_ref(v_post_1201_);
lean_dec_ref(v_pre_1200_);
v_val_1236_ = lean_ctor_get(v___x_1213_, 0);
lean_inc(v_val_1236_);
lean_dec_ref_known(v___x_1213_, 1);
if (v_isShared_1212_ == 0)
{
lean_ctor_set(v___x_1211_, 0, v_val_1236_);
v___x_1238_ = v___x_1211_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v_val_1236_);
v___x_1238_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
return v___x_1238_;
}
}
}
}
else
{
lean_object* v_a_1241_; lean_object* v___x_1243_; uint8_t v_isShared_1244_; uint8_t v_isSharedCheck_1248_; 
lean_dec_ref(v_e_1202_);
lean_dec_ref(v_post_1201_);
lean_dec_ref(v_pre_1200_);
v_a_1241_ = lean_ctor_get(v___x_1208_, 0);
v_isSharedCheck_1248_ = !lean_is_exclusive(v___x_1208_);
if (v_isSharedCheck_1248_ == 0)
{
v___x_1243_ = v___x_1208_;
v_isShared_1244_ = v_isSharedCheck_1248_;
goto v_resetjp_1242_;
}
else
{
lean_inc(v_a_1241_);
lean_dec(v___x_1208_);
v___x_1243_ = lean_box(0);
v_isShared_1244_ = v_isSharedCheck_1248_;
goto v_resetjp_1242_;
}
v_resetjp_1242_:
{
lean_object* v___x_1246_; 
if (v_isShared_1244_ == 0)
{
v___x_1246_ = v___x_1243_;
goto v_reusejp_1245_;
}
else
{
lean_object* v_reuseFailAlloc_1247_; 
v_reuseFailAlloc_1247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1247_, 0, v_a_1241_);
v___x_1246_ = v_reuseFailAlloc_1247_;
goto v_reusejp_1245_;
}
v_reusejp_1245_:
{
return v___x_1246_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3(lean_object* v_pre_1249_, lean_object* v_post_1250_, lean_object* v_e_1251_, lean_object* v_a_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_){
_start:
{
lean_object* v___x_1256_; 
lean_inc_ref(v_post_1250_);
lean_inc(v___y_1254_);
lean_inc_ref(v___y_1253_);
lean_inc_ref(v_e_1251_);
v___x_1256_ = lean_apply_4(v_post_1250_, v_e_1251_, v___y_1253_, v___y_1254_, lean_box(0));
if (lean_obj_tag(v___x_1256_) == 0)
{
lean_object* v_a_1257_; lean_object* v___x_1259_; uint8_t v_isShared_1260_; uint8_t v_isSharedCheck_1275_; 
v_a_1257_ = lean_ctor_get(v___x_1256_, 0);
v_isSharedCheck_1275_ = !lean_is_exclusive(v___x_1256_);
if (v_isSharedCheck_1275_ == 0)
{
v___x_1259_ = v___x_1256_;
v_isShared_1260_ = v_isSharedCheck_1275_;
goto v_resetjp_1258_;
}
else
{
lean_inc(v_a_1257_);
lean_dec(v___x_1256_);
v___x_1259_ = lean_box(0);
v_isShared_1260_ = v_isSharedCheck_1275_;
goto v_resetjp_1258_;
}
v_resetjp_1258_:
{
switch(lean_obj_tag(v_a_1257_))
{
case 0:
{
lean_object* v_e_1261_; lean_object* v___x_1263_; 
lean_dec_ref(v_e_1251_);
lean_dec_ref(v_post_1250_);
lean_dec_ref(v_pre_1249_);
v_e_1261_ = lean_ctor_get(v_a_1257_, 0);
lean_inc_ref(v_e_1261_);
lean_dec_ref_known(v_a_1257_, 1);
if (v_isShared_1260_ == 0)
{
lean_ctor_set(v___x_1259_, 0, v_e_1261_);
v___x_1263_ = v___x_1259_;
goto v_reusejp_1262_;
}
else
{
lean_object* v_reuseFailAlloc_1264_; 
v_reuseFailAlloc_1264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1264_, 0, v_e_1261_);
v___x_1263_ = v_reuseFailAlloc_1264_;
goto v_reusejp_1262_;
}
v_reusejp_1262_:
{
return v___x_1263_;
}
}
case 1:
{
lean_object* v_e_1265_; lean_object* v___x_1266_; 
lean_del_object(v___x_1259_);
lean_dec_ref(v_e_1251_);
v_e_1265_ = lean_ctor_get(v_a_1257_, 0);
lean_inc_ref(v_e_1265_);
lean_dec_ref_known(v_a_1257_, 1);
v___x_1266_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1249_, v_post_1250_, v_e_1265_, v_a_1252_, v___y_1253_, v___y_1254_);
return v___x_1266_;
}
default: 
{
lean_object* v_e_x3f_1267_; 
lean_dec_ref(v_post_1250_);
lean_dec_ref(v_pre_1249_);
v_e_x3f_1267_ = lean_ctor_get(v_a_1257_, 0);
lean_inc(v_e_x3f_1267_);
lean_dec_ref_known(v_a_1257_, 1);
if (lean_obj_tag(v_e_x3f_1267_) == 0)
{
lean_object* v___x_1269_; 
if (v_isShared_1260_ == 0)
{
lean_ctor_set(v___x_1259_, 0, v_e_1251_);
v___x_1269_ = v___x_1259_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v_e_1251_);
v___x_1269_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
return v___x_1269_;
}
}
else
{
lean_object* v_val_1271_; lean_object* v___x_1273_; 
lean_dec_ref(v_e_1251_);
v_val_1271_ = lean_ctor_get(v_e_x3f_1267_, 0);
lean_inc(v_val_1271_);
lean_dec_ref_known(v_e_x3f_1267_, 1);
if (v_isShared_1260_ == 0)
{
lean_ctor_set(v___x_1259_, 0, v_val_1271_);
v___x_1273_ = v___x_1259_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v_val_1271_);
v___x_1273_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
return v___x_1273_;
}
}
}
}
}
}
else
{
lean_object* v_a_1276_; lean_object* v___x_1278_; uint8_t v_isShared_1279_; uint8_t v_isSharedCheck_1283_; 
lean_dec_ref(v_e_1251_);
lean_dec_ref(v_post_1250_);
lean_dec_ref(v_pre_1249_);
v_a_1276_ = lean_ctor_get(v___x_1256_, 0);
v_isSharedCheck_1283_ = !lean_is_exclusive(v___x_1256_);
if (v_isSharedCheck_1283_ == 0)
{
v___x_1278_ = v___x_1256_;
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
else
{
lean_inc(v_a_1276_);
lean_dec(v___x_1256_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3___boxed(lean_object* v_pre_1284_, lean_object* v_post_1285_, lean_object* v_e_1286_, lean_object* v_a_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_){
_start:
{
lean_object* v_res_1291_; 
v_res_1291_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3(v_pre_1284_, v_post_1285_, v_e_1286_, v_a_1287_, v___y_1288_, v___y_1289_);
lean_dec(v___y_1289_);
lean_dec_ref(v___y_1288_);
lean_dec(v_a_1287_);
return v_res_1291_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2___boxed(lean_object* v_pre_1292_, lean_object* v_post_1293_, lean_object* v_sz_1294_, lean_object* v_i_1295_, lean_object* v_bs_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_){
_start:
{
size_t v_sz_boxed_1301_; size_t v_i_boxed_1302_; lean_object* v_res_1303_; 
v_sz_boxed_1301_ = lean_unbox_usize(v_sz_1294_);
lean_dec(v_sz_1294_);
v_i_boxed_1302_ = lean_unbox_usize(v_i_1295_);
lean_dec(v_i_1295_);
v_res_1303_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1292_, v_post_1293_, v_sz_boxed_1301_, v_i_boxed_1302_, v_bs_1296_, v___y_1297_, v___y_1298_, v___y_1299_);
lean_dec(v___y_1299_);
lean_dec_ref(v___y_1298_);
lean_dec(v___y_1297_);
return v_res_1303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__4___boxed(lean_object* v_pre_1304_, lean_object* v_post_1305_, lean_object* v___y_1306_, lean_object* v_x_1307_, lean_object* v_x_1308_, lean_object* v_x_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_){
_start:
{
lean_object* v_res_1314_; 
v_res_1314_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__4(v_pre_1304_, v_post_1305_, v___y_1306_, v_x_1307_, v_x_1308_, v_x_1309_, v___y_1310_, v___y_1311_, v___y_1312_);
lean_dec(v___y_1312_);
lean_dec_ref(v___y_1311_);
lean_dec(v___y_1310_);
lean_dec_ref(v___y_1306_);
return v_res_1314_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___boxed(lean_object* v_pre_1315_, lean_object* v_post_1316_, lean_object* v_e_1317_, lean_object* v_a_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_){
_start:
{
lean_object* v_res_1322_; 
v_res_1322_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1315_, v_post_1316_, v_e_1317_, v_a_1318_, v___y_1319_, v___y_1320_);
lean_dec(v___y_1320_);
lean_dec_ref(v___y_1319_);
lean_dec(v_a_1318_);
return v_res_1322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___lam__0(lean_object* v_00_u03b1_1323_, lean_object* v_x_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_){
_start:
{
lean_object* v___x_1328_; lean_object* v___x_1329_; 
v___x_1328_ = lean_apply_1(v_x_1324_, lean_box(0));
v___x_1329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1329_, 0, v___x_1328_);
return v___x_1329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___lam__0___boxed(lean_object* v_00_u03b1_1330_, lean_object* v_x_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_){
_start:
{
lean_object* v_res_1335_; 
v_res_1335_ = l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___lam__0(v_00_u03b1_1330_, v_x_1331_, v___y_1332_, v___y_1333_);
lean_dec(v___y_1333_);
lean_dec_ref(v___y_1332_);
return v_res_1335_;
}
}
static lean_object* _init_l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; 
v___x_1336_ = lean_box(0);
v___x_1337_ = lean_unsigned_to_nat(16u);
v___x_1338_ = lean_mk_array(v___x_1337_, v___x_1336_);
return v___x_1338_;
}
}
static lean_object* _init_l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; 
v___x_1339_ = lean_obj_once(&l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__0, &l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__0_once, _init_l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__0);
v___x_1340_ = lean_unsigned_to_nat(0u);
v___x_1341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1341_, 0, v___x_1340_);
lean_ctor_set(v___x_1341_, 1, v___x_1339_);
return v___x_1341_;
}
}
static lean_object* _init_l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__2(void){
_start:
{
lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1342_ = lean_obj_once(&l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__1, &l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__1_once, _init_l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__1);
v___x_1343_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_1343_, 0, lean_box(0));
lean_closure_set(v___x_1343_, 1, lean_box(0));
lean_closure_set(v___x_1343_, 2, v___x_1342_);
return v___x_1343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0(lean_object* v_input_1344_, lean_object* v_pre_1345_, lean_object* v_post_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_){
_start:
{
lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v_a_1352_; lean_object* v___x_1353_; 
v___x_1350_ = lean_obj_once(&l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__2, &l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__2_once, _init_l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__2);
v___x_1351_ = l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___lam__0(lean_box(0), v___x_1350_, v___y_1347_, v___y_1348_);
v_a_1352_ = lean_ctor_get(v___x_1351_, 0);
lean_inc(v_a_1352_);
lean_dec_ref(v___x_1351_);
v___x_1353_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1345_, v_post_1346_, v_input_1344_, v_a_1352_, v___y_1347_, v___y_1348_);
if (lean_obj_tag(v___x_1353_) == 0)
{
lean_object* v_a_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1363_; 
v_a_1354_ = lean_ctor_get(v___x_1353_, 0);
lean_inc(v_a_1354_);
lean_dec_ref_known(v___x_1353_, 1);
v___x_1355_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1355_, 0, lean_box(0));
lean_closure_set(v___x_1355_, 1, lean_box(0));
lean_closure_set(v___x_1355_, 2, v_a_1352_);
v___x_1356_ = l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___lam__0(lean_box(0), v___x_1355_, v___y_1347_, v___y_1348_);
v_isSharedCheck_1363_ = !lean_is_exclusive(v___x_1356_);
if (v_isSharedCheck_1363_ == 0)
{
lean_object* v_unused_1364_; 
v_unused_1364_ = lean_ctor_get(v___x_1356_, 0);
lean_dec(v_unused_1364_);
v___x_1358_ = v___x_1356_;
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
else
{
lean_dec(v___x_1356_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
lean_object* v___x_1361_; 
if (v_isShared_1359_ == 0)
{
lean_ctor_set(v___x_1358_, 0, v_a_1354_);
v___x_1361_ = v___x_1358_;
goto v_reusejp_1360_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v_a_1354_);
v___x_1361_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1360_;
}
v_reusejp_1360_:
{
return v___x_1361_;
}
}
}
else
{
lean_dec(v_a_1352_);
return v___x_1353_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___boxed(lean_object* v_input_1365_, lean_object* v_pre_1366_, lean_object* v_post_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_){
_start:
{
lean_object* v_res_1371_; 
v_res_1371_ = l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0(v_input_1365_, v_pre_1366_, v_post_1367_, v___y_1368_, v___y_1369_);
lean_dec(v___y_1369_);
lean_dec_ref(v___y_1368_);
return v_res_1371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta(lean_object* v_e_1374_, lean_object* v_a_1375_, lean_object* v_a_1376_){
_start:
{
lean_object* v___f_1378_; lean_object* v___f_1379_; lean_object* v___x_1380_; 
v___f_1378_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___closed__0));
v___f_1379_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___closed__1));
v___x_1380_ = l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0(v_e_1374_, v___f_1378_, v___f_1379_, v_a_1375_, v_a_1376_);
return v___x_1380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___boxed(lean_object* v_e_1381_, lean_object* v_a_1382_, lean_object* v_a_1383_, lean_object* v_a_1384_){
_start:
{
lean_object* v_res_1385_; 
v_res_1385_ = l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta(v_e_1381_, v_a_1382_, v_a_1383_);
lean_dec(v_a_1383_);
lean_dec_ref(v_a_1382_);
return v_res_1385_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1386_, lean_object* v_m_1387_, lean_object* v_a_1388_){
_start:
{
lean_object* v___x_1389_; 
v___x_1389_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1___redArg(v_m_1387_, v_a_1388_);
return v___x_1389_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1390_, lean_object* v_m_1391_, lean_object* v_a_1392_){
_start:
{
lean_object* v_res_1393_; 
v_res_1393_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1(v_00_u03b2_1390_, v_m_1391_, v_a_1392_);
lean_dec_ref(v_a_1392_);
lean_dec_ref(v_m_1391_);
return v_res_1393_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7(lean_object* v_00_u03b1_1394_, lean_object* v_ref_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_){
_start:
{
lean_object* v___x_1399_; 
v___x_1399_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_1395_);
return v___x_1399_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___boxed(lean_object* v_00_u03b1_1400_, lean_object* v_ref_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_){
_start:
{
lean_object* v_res_1405_; 
v_res_1405_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7(v_00_u03b1_1400_, v_ref_1401_, v___y_1402_, v___y_1403_);
lean_dec(v___y_1403_);
lean_dec_ref(v___y_1402_);
return v_res_1405_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8(lean_object* v_00_u03b1_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_){
_start:
{
lean_object* v___x_1410_; 
v___x_1410_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg();
return v___x_1410_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___boxed(lean_object* v_00_u03b1_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_){
_start:
{
lean_object* v_res_1415_; 
v_res_1415_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8(v_00_u03b1_1411_, v___y_1412_, v___y_1413_);
lean_dec(v___y_1413_);
lean_dec_ref(v___y_1412_);
return v_res_1415_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5(lean_object* v_00_u03b1_1416_, lean_object* v_x_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_){
_start:
{
lean_object* v___x_1422_; 
v___x_1422_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___redArg(v_x_1417_, v___y_1418_, v___y_1419_, v___y_1420_);
return v___x_1422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___boxed(lean_object* v_00_u03b1_1423_, lean_object* v_x_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_){
_start:
{
lean_object* v_res_1429_; 
v_res_1429_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5(v_00_u03b1_1423_, v_x_1424_, v___y_1425_, v___y_1426_, v___y_1427_);
lean_dec(v___y_1427_);
lean_dec_ref(v___y_1426_);
lean_dec(v___y_1425_);
return v_res_1429_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6(lean_object* v_00_u03b2_1430_, lean_object* v_m_1431_, lean_object* v_a_1432_, lean_object* v_b_1433_){
_start:
{
lean_object* v___x_1434_; 
v___x_1434_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6___redArg(v_m_1431_, v_a_1432_, v_b_1433_);
return v___x_1434_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_1435_, lean_object* v_a_1436_, lean_object* v_x_1437_){
_start:
{
lean_object* v___x_1438_; 
v___x_1438_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1_spec__2___redArg(v_a_1436_, v_x_1437_);
return v___x_1438_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1439_, lean_object* v_a_1440_, lean_object* v_x_1441_){
_start:
{
lean_object* v_res_1442_; 
v_res_1442_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1_spec__2(v_00_u03b2_1439_, v_a_1440_, v_x_1441_);
lean_dec(v_x_1441_);
lean_dec_ref(v_a_1440_);
return v_res_1442_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10(lean_object* v_00_u03b2_1443_, lean_object* v_a_1444_, lean_object* v_x_1445_){
_start:
{
uint8_t v___x_1446_; 
v___x_1446_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10___redArg(v_a_1444_, v_x_1445_);
return v___x_1446_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10___boxed(lean_object* v_00_u03b2_1447_, lean_object* v_a_1448_, lean_object* v_x_1449_){
_start:
{
uint8_t v_res_1450_; lean_object* v_r_1451_; 
v_res_1450_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10(v_00_u03b2_1447_, v_a_1448_, v_x_1449_);
lean_dec(v_x_1449_);
lean_dec_ref(v_a_1448_);
v_r_1451_ = lean_box(v_res_1450_);
return v_r_1451_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11(lean_object* v_00_u03b2_1452_, lean_object* v_data_1453_){
_start:
{
lean_object* v___x_1454_; 
v___x_1454_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11___redArg(v_data_1453_);
return v___x_1454_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__12(lean_object* v_00_u03b2_1455_, lean_object* v_a_1456_, lean_object* v_b_1457_, lean_object* v_x_1458_){
_start:
{
lean_object* v___x_1459_; 
v___x_1459_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__12___redArg(v_a_1456_, v_b_1457_, v_x_1458_);
return v___x_1459_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12(lean_object* v_00_u03b2_1460_, lean_object* v_i_1461_, lean_object* v_source_1462_, lean_object* v_target_1463_){
_start:
{
lean_object* v___x_1464_; 
v___x_1464_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(v_i_1461_, v_source_1462_, v_target_1463_);
return v___x_1464_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13(lean_object* v_00_u03b2_1465_, lean_object* v_x_1466_, lean_object* v_x_1467_){
_start:
{
lean_object* v___x_1468_; 
v___x_1468_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(v_x_1466_, v_x_1467_);
return v___x_1468_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___redArg(lean_object* v_declName_1469_, lean_object* v___y_1470_){
_start:
{
lean_object* v___x_1472_; lean_object* v_env_1473_; uint8_t v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; 
v___x_1472_ = lean_st_ref_get(v___y_1470_);
v_env_1473_ = lean_ctor_get(v___x_1472_, 0);
lean_inc_ref(v_env_1473_);
lean_dec(v___x_1472_);
v___x_1474_ = l_Lean_isRecCore(v_env_1473_, v_declName_1469_);
v___x_1475_ = lean_box(v___x_1474_);
v___x_1476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1476_, 0, v___x_1475_);
return v___x_1476_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___redArg___boxed(lean_object* v_declName_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_){
_start:
{
lean_object* v_res_1480_; 
v_res_1480_ = l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___redArg(v_declName_1477_, v___y_1478_);
lean_dec(v___y_1478_);
return v_res_1480_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2(lean_object* v_declName_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_){
_start:
{
lean_object* v___x_1487_; 
v___x_1487_ = l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___redArg(v_declName_1481_, v___y_1485_);
return v___x_1487_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___boxed(lean_object* v_declName_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_){
_start:
{
lean_object* v_res_1494_; 
v_res_1494_ = l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2(v_declName_1488_, v___y_1489_, v___y_1490_, v___y_1491_, v___y_1492_);
lean_dec(v___y_1492_);
lean_dec_ref(v___y_1491_);
lean_dec(v___y_1490_);
lean_dec_ref(v___y_1489_);
return v_res_1494_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___redArg(lean_object* v_declName_1495_, lean_object* v___y_1496_){
_start:
{
lean_object* v___x_1498_; lean_object* v_env_1499_; uint8_t v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; 
v___x_1498_ = lean_st_ref_get(v___y_1496_);
v_env_1499_ = lean_ctor_get(v___x_1498_, 0);
lean_inc_ref(v_env_1499_);
lean_dec(v___x_1498_);
v___x_1500_ = l_Lean_getReducibilityStatusCore(v_env_1499_, v_declName_1495_);
v___x_1501_ = lean_box(v___x_1500_);
v___x_1502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1502_, 0, v___x_1501_);
return v___x_1502_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___redArg___boxed(lean_object* v_declName_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_){
_start:
{
lean_object* v_res_1506_; 
v_res_1506_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___redArg(v_declName_1503_, v___y_1504_);
lean_dec(v___y_1504_);
return v_res_1506_;
}
}
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0(lean_object* v_declName_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_){
_start:
{
lean_object* v___x_1513_; lean_object* v_a_1514_; lean_object* v___x_1516_; uint8_t v_isShared_1517_; uint8_t v_isSharedCheck_1529_; 
v___x_1513_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___redArg(v_declName_1507_, v___y_1511_);
v_a_1514_ = lean_ctor_get(v___x_1513_, 0);
v_isSharedCheck_1529_ = !lean_is_exclusive(v___x_1513_);
if (v_isSharedCheck_1529_ == 0)
{
v___x_1516_ = v___x_1513_;
v_isShared_1517_ = v_isSharedCheck_1529_;
goto v_resetjp_1515_;
}
else
{
lean_inc(v_a_1514_);
lean_dec(v___x_1513_);
v___x_1516_ = lean_box(0);
v_isShared_1517_ = v_isSharedCheck_1529_;
goto v_resetjp_1515_;
}
v_resetjp_1515_:
{
uint8_t v___x_1518_; 
v___x_1518_ = lean_unbox(v_a_1514_);
lean_dec(v_a_1514_);
if (v___x_1518_ == 0)
{
uint8_t v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1522_; 
v___x_1519_ = 1;
v___x_1520_ = lean_box(v___x_1519_);
if (v_isShared_1517_ == 0)
{
lean_ctor_set(v___x_1516_, 0, v___x_1520_);
v___x_1522_ = v___x_1516_;
goto v_reusejp_1521_;
}
else
{
lean_object* v_reuseFailAlloc_1523_; 
v_reuseFailAlloc_1523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1523_, 0, v___x_1520_);
v___x_1522_ = v_reuseFailAlloc_1523_;
goto v_reusejp_1521_;
}
v_reusejp_1521_:
{
return v___x_1522_;
}
}
else
{
uint8_t v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1527_; 
v___x_1524_ = 0;
v___x_1525_ = lean_box(v___x_1524_);
if (v_isShared_1517_ == 0)
{
lean_ctor_set(v___x_1516_, 0, v___x_1525_);
v___x_1527_ = v___x_1516_;
goto v_reusejp_1526_;
}
else
{
lean_object* v_reuseFailAlloc_1528_; 
v_reuseFailAlloc_1528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1528_, 0, v___x_1525_);
v___x_1527_ = v_reuseFailAlloc_1528_;
goto v_reusejp_1526_;
}
v_reusejp_1526_:
{
return v___x_1527_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0___boxed(lean_object* v_declName_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_){
_start:
{
lean_object* v_res_1536_; 
v_res_1536_ = l_Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0(v_declName_1530_, v___y_1531_, v___y_1532_, v___y_1533_, v___y_1534_);
lean_dec(v___y_1534_);
lean_dec_ref(v___y_1533_);
lean_dec(v___y_1532_);
lean_dec_ref(v___y_1531_);
return v_res_1536_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___redArg(lean_object* v_a_1537_, lean_object* v_b_1538_){
_start:
{
lean_object* v_array_1540_; lean_object* v_start_1541_; lean_object* v_stop_1542_; lean_object* v___x_1544_; uint8_t v_isShared_1545_; uint8_t v_isSharedCheck_1559_; 
v_array_1540_ = lean_ctor_get(v_a_1537_, 0);
v_start_1541_ = lean_ctor_get(v_a_1537_, 1);
v_stop_1542_ = lean_ctor_get(v_a_1537_, 2);
v_isSharedCheck_1559_ = !lean_is_exclusive(v_a_1537_);
if (v_isSharedCheck_1559_ == 0)
{
v___x_1544_ = v_a_1537_;
v_isShared_1545_ = v_isSharedCheck_1559_;
goto v_resetjp_1543_;
}
else
{
lean_inc(v_stop_1542_);
lean_inc(v_start_1541_);
lean_inc(v_array_1540_);
lean_dec(v_a_1537_);
v___x_1544_ = lean_box(0);
v_isShared_1545_ = v_isSharedCheck_1559_;
goto v_resetjp_1543_;
}
v_resetjp_1543_:
{
uint8_t v___x_1546_; 
v___x_1546_ = lean_nat_dec_lt(v_start_1541_, v_stop_1542_);
if (v___x_1546_ == 0)
{
lean_object* v___x_1547_; 
lean_del_object(v___x_1544_);
lean_dec(v_stop_1542_);
lean_dec(v_start_1541_);
lean_dec_ref(v_array_1540_);
v___x_1547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1547_, 0, v_b_1538_);
return v___x_1547_;
}
else
{
lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1552_; 
v___x_1548_ = lean_box(0);
v___x_1549_ = lean_unsigned_to_nat(1u);
v___x_1550_ = lean_nat_add(v_start_1541_, v___x_1549_);
lean_inc_ref(v_array_1540_);
if (v_isShared_1545_ == 0)
{
lean_ctor_set(v___x_1544_, 1, v___x_1550_);
v___x_1552_ = v___x_1544_;
goto v_reusejp_1551_;
}
else
{
lean_object* v_reuseFailAlloc_1558_; 
v_reuseFailAlloc_1558_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1558_, 0, v_array_1540_);
lean_ctor_set(v_reuseFailAlloc_1558_, 1, v___x_1550_);
lean_ctor_set(v_reuseFailAlloc_1558_, 2, v_stop_1542_);
v___x_1552_ = v_reuseFailAlloc_1558_;
goto v_reusejp_1551_;
}
v_reusejp_1551_:
{
lean_object* v___x_1553_; uint8_t v___x_1554_; 
v___x_1553_ = lean_array_fget(v_array_1540_, v_start_1541_);
lean_dec(v_start_1541_);
lean_dec_ref(v_array_1540_);
v___x_1554_ = l_Lean_Expr_hasExprMVar(v___x_1553_);
lean_dec(v___x_1553_);
if (v___x_1554_ == 0)
{
v_a_1537_ = v___x_1552_;
v_b_1538_ = v___x_1548_;
goto _start;
}
else
{
lean_object* v___x_1556_; 
v___x_1556_ = l_Lean_Meta_throwIsDefEqStuck___redArg();
if (lean_obj_tag(v___x_1556_) == 0)
{
lean_dec_ref_known(v___x_1556_, 1);
v_a_1537_ = v___x_1552_;
v_b_1538_ = v___x_1548_;
goto _start;
}
else
{
lean_dec_ref(v___x_1552_);
return v___x_1556_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___redArg___boxed(lean_object* v_a_1560_, lean_object* v_b_1561_, lean_object* v___y_1562_){
_start:
{
lean_object* v_res_1563_; 
v_res_1563_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___redArg(v_a_1560_, v_b_1561_);
return v_res_1563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs(lean_object* v_e_1572_, uint8_t v_isMatch_1573_, uint8_t v_root_1574_, lean_object* v_a_1575_, lean_object* v_a_1576_, lean_object* v_a_1577_, lean_object* v_a_1578_){
_start:
{
lean_object* v___y_1587_; lean_object* v_b_1588_; lean_object* v___x_1599_; 
v___x_1599_ = l_Lean_Meta_DiscrTree_reduceDT(v_e_1572_, v_root_1574_, v_a_1575_, v_a_1576_, v_a_1577_, v_a_1578_);
if (lean_obj_tag(v___x_1599_) == 0)
{
lean_object* v_a_1600_; lean_object* v___x_1602_; uint8_t v_isShared_1603_; uint8_t v_isSharedCheck_1739_; 
v_a_1600_ = lean_ctor_get(v___x_1599_, 0);
v_isSharedCheck_1739_ = !lean_is_exclusive(v___x_1599_);
if (v_isSharedCheck_1739_ == 0)
{
v___x_1602_ = v___x_1599_;
v_isShared_1603_ = v_isSharedCheck_1739_;
goto v_resetjp_1601_;
}
else
{
lean_inc(v_a_1600_);
lean_dec(v___x_1599_);
v___x_1602_ = lean_box(0);
v_isShared_1603_ = v_isSharedCheck_1739_;
goto v_resetjp_1601_;
}
v_resetjp_1601_:
{
lean_object* v___y_1605_; lean_object* v___y_1615_; lean_object* v___y_1626_; lean_object* v___y_1627_; lean_object* v___y_1628_; lean_object* v___y_1629_; 
if (v_root_1574_ == 0)
{
lean_object* v___x_1727_; 
lean_inc(v_a_1600_);
v___x_1727_ = l_Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f(v_a_1600_);
if (lean_obj_tag(v___x_1727_) == 1)
{
lean_object* v_val_1728_; lean_object* v___x_1730_; uint8_t v_isShared_1731_; uint8_t v_isSharedCheck_1738_; 
lean_del_object(v___x_1602_);
lean_dec(v_a_1600_);
v_val_1728_ = lean_ctor_get(v___x_1727_, 0);
v_isSharedCheck_1738_ = !lean_is_exclusive(v___x_1727_);
if (v_isSharedCheck_1738_ == 0)
{
v___x_1730_ = v___x_1727_;
v_isShared_1731_ = v_isSharedCheck_1738_;
goto v_resetjp_1729_;
}
else
{
lean_inc(v_val_1728_);
lean_dec(v___x_1727_);
v___x_1730_ = lean_box(0);
v_isShared_1731_ = v_isSharedCheck_1738_;
goto v_resetjp_1729_;
}
v_resetjp_1729_:
{
lean_object* v___x_1733_; 
if (v_isShared_1731_ == 0)
{
lean_ctor_set_tag(v___x_1730_, 2);
v___x_1733_ = v___x_1730_;
goto v_reusejp_1732_;
}
else
{
lean_object* v_reuseFailAlloc_1737_; 
v_reuseFailAlloc_1737_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1737_, 0, v_val_1728_);
v___x_1733_ = v_reuseFailAlloc_1737_;
goto v_reusejp_1732_;
}
v_reusejp_1732_:
{
lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; 
v___x_1734_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0));
v___x_1735_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1735_, 0, v___x_1733_);
lean_ctor_set(v___x_1735_, 1, v___x_1734_);
v___x_1736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1736_, 0, v___x_1735_);
return v___x_1736_;
}
}
}
else
{
lean_dec(v___x_1727_);
v___y_1626_ = v_a_1575_;
v___y_1627_ = v_a_1576_;
v___y_1628_ = v_a_1577_;
v___y_1629_ = v_a_1578_;
goto v___jp_1625_;
}
}
else
{
v___y_1626_ = v_a_1575_;
v___y_1627_ = v_a_1576_;
v___y_1628_ = v_a_1577_;
v___y_1629_ = v_a_1578_;
goto v___jp_1625_;
}
v___jp_1604_:
{
lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1612_; 
v___x_1606_ = l_Lean_Expr_getAppNumArgs(v_a_1600_);
lean_inc(v___x_1606_);
v___x_1607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1607_, 0, v___y_1605_);
lean_ctor_set(v___x_1607_, 1, v___x_1606_);
v___x_1608_ = lean_mk_empty_array_with_capacity(v___x_1606_);
lean_dec(v___x_1606_);
v___x_1609_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_a_1600_, v___x_1608_);
v___x_1610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1610_, 0, v___x_1607_);
lean_ctor_set(v___x_1610_, 1, v___x_1609_);
if (v_isShared_1603_ == 0)
{
lean_ctor_set(v___x_1602_, 0, v___x_1610_);
v___x_1612_ = v___x_1602_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v___x_1610_);
v___x_1612_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
return v___x_1612_;
}
}
v___jp_1614_:
{
lean_object* v___x_1616_; 
v___x_1616_ = l_Lean_Meta_throwIsDefEqStuck___redArg();
if (lean_obj_tag(v___x_1616_) == 0)
{
lean_dec_ref_known(v___x_1616_, 1);
v___y_1605_ = v___y_1615_;
goto v___jp_1604_;
}
else
{
lean_object* v_a_1617_; lean_object* v___x_1619_; uint8_t v_isShared_1620_; uint8_t v_isSharedCheck_1624_; 
lean_dec(v___y_1615_);
lean_del_object(v___x_1602_);
lean_dec(v_a_1600_);
v_a_1617_ = lean_ctor_get(v___x_1616_, 0);
v_isSharedCheck_1624_ = !lean_is_exclusive(v___x_1616_);
if (v_isSharedCheck_1624_ == 0)
{
v___x_1619_ = v___x_1616_;
v_isShared_1620_ = v_isSharedCheck_1624_;
goto v_resetjp_1618_;
}
else
{
lean_inc(v_a_1617_);
lean_dec(v___x_1616_);
v___x_1619_ = lean_box(0);
v_isShared_1620_ = v_isSharedCheck_1624_;
goto v_resetjp_1618_;
}
v_resetjp_1618_:
{
lean_object* v___x_1622_; 
if (v_isShared_1620_ == 0)
{
v___x_1622_ = v___x_1619_;
goto v_reusejp_1621_;
}
else
{
lean_object* v_reuseFailAlloc_1623_; 
v_reuseFailAlloc_1623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1623_, 0, v_a_1617_);
v___x_1622_ = v_reuseFailAlloc_1623_;
goto v_reusejp_1621_;
}
v_reusejp_1621_:
{
return v___x_1622_;
}
}
}
}
v___jp_1625_:
{
lean_object* v___x_1630_; 
v___x_1630_ = l_Lean_Expr_getAppFn(v_a_1600_);
switch(lean_obj_tag(v___x_1630_))
{
case 1:
{
lean_object* v_fvarId_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; 
lean_del_object(v___x_1602_);
v_fvarId_1631_ = lean_ctor_get(v___x_1630_, 0);
lean_inc(v_fvarId_1631_);
lean_dec_ref_known(v___x_1630_, 1);
v___x_1632_ = l_Lean_Expr_getAppNumArgs(v_a_1600_);
lean_inc(v___x_1632_);
v___x_1633_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1633_, 0, v_fvarId_1631_);
lean_ctor_set(v___x_1633_, 1, v___x_1632_);
v___x_1634_ = lean_mk_empty_array_with_capacity(v___x_1632_);
lean_dec(v___x_1632_);
v___x_1635_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_a_1600_, v___x_1634_);
v___x_1636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1636_, 0, v___x_1633_);
lean_ctor_set(v___x_1636_, 1, v___x_1635_);
v___x_1637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1637_, 0, v___x_1636_);
return v___x_1637_;
}
case 2:
{
lean_del_object(v___x_1602_);
lean_dec(v_a_1600_);
if (v_isMatch_1573_ == 0)
{
lean_object* v_mvarId_1638_; lean_object* v___x_1639_; uint8_t v_isDefEqStuckEx_1640_; 
v_mvarId_1638_ = lean_ctor_get(v___x_1630_, 0);
lean_inc(v_mvarId_1638_);
lean_dec_ref_known(v___x_1630_, 1);
v___x_1639_ = l_Lean_Meta_Context_config(v___y_1626_);
v_isDefEqStuckEx_1640_ = lean_ctor_get_uint8(v___x_1639_, 4);
lean_dec_ref(v___x_1639_);
if (v_isDefEqStuckEx_1640_ == 0)
{
lean_object* v___x_1641_; 
v___x_1641_ = l_Lean_MVarId_isReadOnlyOrSyntheticOpaque(v_mvarId_1638_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
if (lean_obj_tag(v___x_1641_) == 0)
{
lean_object* v_a_1642_; uint8_t v___x_1643_; 
v_a_1642_ = lean_ctor_get(v___x_1641_, 0);
lean_inc(v_a_1642_);
lean_dec_ref_known(v___x_1641_, 1);
v___x_1643_ = lean_unbox(v_a_1642_);
lean_dec(v_a_1642_);
if (v___x_1643_ == 0)
{
goto v___jp_1580_;
}
else
{
goto v___jp_1583_;
}
}
else
{
lean_object* v_a_1644_; lean_object* v___x_1646_; uint8_t v_isShared_1647_; uint8_t v_isSharedCheck_1651_; 
v_a_1644_ = lean_ctor_get(v___x_1641_, 0);
v_isSharedCheck_1651_ = !lean_is_exclusive(v___x_1641_);
if (v_isSharedCheck_1651_ == 0)
{
v___x_1646_ = v___x_1641_;
v_isShared_1647_ = v_isSharedCheck_1651_;
goto v_resetjp_1645_;
}
else
{
lean_inc(v_a_1644_);
lean_dec(v___x_1641_);
v___x_1646_ = lean_box(0);
v_isShared_1647_ = v_isSharedCheck_1651_;
goto v_resetjp_1645_;
}
v_resetjp_1645_:
{
lean_object* v___x_1649_; 
if (v_isShared_1647_ == 0)
{
v___x_1649_ = v___x_1646_;
goto v_reusejp_1648_;
}
else
{
lean_object* v_reuseFailAlloc_1650_; 
v_reuseFailAlloc_1650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1650_, 0, v_a_1644_);
v___x_1649_ = v_reuseFailAlloc_1650_;
goto v_reusejp_1648_;
}
v_reusejp_1648_:
{
return v___x_1649_;
}
}
}
}
else
{
lean_dec(v_mvarId_1638_);
goto v___jp_1580_;
}
}
else
{
lean_dec_ref_known(v___x_1630_, 1);
goto v___jp_1583_;
}
}
case 4:
{
lean_object* v_declName_1652_; lean_object* v___x_1653_; uint8_t v_isDefEqStuckEx_1654_; 
v_declName_1652_ = lean_ctor_get(v___x_1630_, 0);
lean_inc(v_declName_1652_);
lean_dec_ref_known(v___x_1630_, 2);
v___x_1653_ = l_Lean_Meta_Context_config(v___y_1626_);
v_isDefEqStuckEx_1654_ = lean_ctor_get_uint8(v___x_1653_, 4);
lean_dec_ref(v___x_1653_);
if (v_isDefEqStuckEx_1654_ == 0)
{
v___y_1605_ = v_declName_1652_;
goto v___jp_1604_;
}
else
{
uint8_t v___x_1655_; 
v___x_1655_ = l_Lean_Expr_hasExprMVar(v_a_1600_);
if (v___x_1655_ == 0)
{
v___y_1605_ = v_declName_1652_;
goto v___jp_1604_;
}
else
{
lean_object* v___x_1656_; 
lean_inc(v_declName_1652_);
v___x_1656_ = l_Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0(v_declName_1652_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
if (lean_obj_tag(v___x_1656_) == 0)
{
lean_object* v_a_1657_; uint8_t v___x_1658_; 
v_a_1657_ = lean_ctor_get(v___x_1656_, 0);
lean_inc(v_a_1657_);
lean_dec_ref_known(v___x_1656_, 1);
v___x_1658_ = lean_unbox(v_a_1657_);
lean_dec(v_a_1657_);
if (v___x_1658_ == 0)
{
lean_object* v___x_1659_; lean_object* v_env_1660_; lean_object* v___x_1661_; 
v___x_1659_ = lean_st_ref_get(v___y_1629_);
v_env_1660_ = lean_ctor_get(v___x_1659_, 0);
lean_inc_ref(v_env_1660_);
lean_dec(v___x_1659_);
v___x_1661_ = l_Lean_Meta_isMatcherAppCore_x3f(v_env_1660_, v_a_1600_);
if (lean_obj_tag(v___x_1661_) == 1)
{
lean_object* v_val_1662_; lean_object* v_numDiscrs_1663_; lean_object* v_nargs_1664_; lean_object* v_dummy_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; 
v_val_1662_ = lean_ctor_get(v___x_1661_, 0);
lean_inc(v_val_1662_);
lean_dec_ref_known(v___x_1661_, 1);
v_numDiscrs_1663_ = lean_ctor_get(v_val_1662_, 1);
lean_inc(v_numDiscrs_1663_);
v_nargs_1664_ = l_Lean_Expr_getAppNumArgs(v_a_1600_);
v_dummy_1665_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0);
lean_inc(v_nargs_1664_);
v___x_1666_ = lean_mk_array(v_nargs_1664_, v_dummy_1665_);
v___x_1667_ = lean_unsigned_to_nat(1u);
v___x_1668_ = lean_nat_sub(v_nargs_1664_, v___x_1667_);
lean_dec(v_nargs_1664_);
lean_inc(v_a_1600_);
v___x_1669_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_1600_, v___x_1666_, v___x_1668_);
v___x_1670_ = l_Lean_Meta_Match_MatcherInfo_getFirstDiscrPos(v_val_1662_);
lean_dec(v_val_1662_);
v___x_1671_ = lean_nat_add(v___x_1670_, v_numDiscrs_1663_);
lean_dec(v_numDiscrs_1663_);
v___x_1672_ = l_Array_toSubarray___redArg(v___x_1669_, v___x_1670_, v___x_1671_);
v___x_1673_ = lean_box(0);
v___x_1674_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___redArg(v___x_1672_, v___x_1673_);
if (lean_obj_tag(v___x_1674_) == 0)
{
lean_dec_ref_known(v___x_1674_, 1);
v___y_1605_ = v_declName_1652_;
goto v___jp_1604_;
}
else
{
lean_object* v_a_1675_; lean_object* v___x_1677_; uint8_t v_isShared_1678_; uint8_t v_isSharedCheck_1682_; 
lean_dec(v_declName_1652_);
lean_del_object(v___x_1602_);
lean_dec(v_a_1600_);
v_a_1675_ = lean_ctor_get(v___x_1674_, 0);
v_isSharedCheck_1682_ = !lean_is_exclusive(v___x_1674_);
if (v_isSharedCheck_1682_ == 0)
{
v___x_1677_ = v___x_1674_;
v_isShared_1678_ = v_isSharedCheck_1682_;
goto v_resetjp_1676_;
}
else
{
lean_inc(v_a_1675_);
lean_dec(v___x_1674_);
v___x_1677_ = lean_box(0);
v_isShared_1678_ = v_isSharedCheck_1682_;
goto v_resetjp_1676_;
}
v_resetjp_1676_:
{
lean_object* v___x_1680_; 
if (v_isShared_1678_ == 0)
{
v___x_1680_ = v___x_1677_;
goto v_reusejp_1679_;
}
else
{
lean_object* v_reuseFailAlloc_1681_; 
v_reuseFailAlloc_1681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1681_, 0, v_a_1675_);
v___x_1680_ = v_reuseFailAlloc_1681_;
goto v_reusejp_1679_;
}
v_reusejp_1679_:
{
return v___x_1680_;
}
}
}
}
else
{
lean_object* v___x_1683_; lean_object* v_a_1684_; uint8_t v___x_1685_; 
lean_dec(v___x_1661_);
lean_inc(v_declName_1652_);
v___x_1683_ = l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___redArg(v_declName_1652_, v___y_1629_);
v_a_1684_ = lean_ctor_get(v___x_1683_, 0);
lean_inc(v_a_1684_);
lean_dec_ref(v___x_1683_);
v___x_1685_ = lean_unbox(v_a_1684_);
lean_dec(v_a_1684_);
if (v___x_1685_ == 0)
{
v___y_1605_ = v_declName_1652_;
goto v___jp_1604_;
}
else
{
v___y_1615_ = v_declName_1652_;
goto v___jp_1614_;
}
}
}
else
{
v___y_1615_ = v_declName_1652_;
goto v___jp_1614_;
}
}
else
{
lean_object* v_a_1686_; lean_object* v___x_1688_; uint8_t v_isShared_1689_; uint8_t v_isSharedCheck_1693_; 
lean_dec(v_declName_1652_);
lean_del_object(v___x_1602_);
lean_dec(v_a_1600_);
v_a_1686_ = lean_ctor_get(v___x_1656_, 0);
v_isSharedCheck_1693_ = !lean_is_exclusive(v___x_1656_);
if (v_isSharedCheck_1693_ == 0)
{
v___x_1688_ = v___x_1656_;
v_isShared_1689_ = v_isSharedCheck_1693_;
goto v_resetjp_1687_;
}
else
{
lean_inc(v_a_1686_);
lean_dec(v___x_1656_);
v___x_1688_ = lean_box(0);
v_isShared_1689_ = v_isSharedCheck_1693_;
goto v_resetjp_1687_;
}
v_resetjp_1687_:
{
lean_object* v___x_1691_; 
if (v_isShared_1689_ == 0)
{
v___x_1691_ = v___x_1688_;
goto v_reusejp_1690_;
}
else
{
lean_object* v_reuseFailAlloc_1692_; 
v_reuseFailAlloc_1692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1692_, 0, v_a_1686_);
v___x_1691_ = v_reuseFailAlloc_1692_;
goto v_reusejp_1690_;
}
v_reusejp_1690_:
{
return v___x_1691_;
}
}
}
}
}
}
case 7:
{
lean_object* v_binderType_1694_; lean_object* v_body_1695_; uint8_t v___x_1696_; 
lean_del_object(v___x_1602_);
lean_dec(v_a_1600_);
v_binderType_1694_ = lean_ctor_get(v___x_1630_, 1);
lean_inc_ref(v_binderType_1694_);
v_body_1695_ = lean_ctor_get(v___x_1630_, 2);
lean_inc_ref(v_body_1695_);
lean_dec_ref_known(v___x_1630_, 3);
v___x_1696_ = l_Lean_Expr_hasLooseBVars(v_body_1695_);
if (v___x_1696_ == 0)
{
v___y_1587_ = v_binderType_1694_;
v_b_1588_ = v_body_1695_;
goto v___jp_1586_;
}
else
{
lean_object* v___x_1697_; 
v___x_1697_ = l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta(v_body_1695_, v___y_1628_, v___y_1629_);
if (lean_obj_tag(v___x_1697_) == 0)
{
lean_object* v_a_1698_; 
v_a_1698_ = lean_ctor_get(v___x_1697_, 0);
lean_inc(v_a_1698_);
lean_dec_ref_known(v___x_1697_, 1);
v___y_1587_ = v_binderType_1694_;
v_b_1588_ = v_a_1698_;
goto v___jp_1586_;
}
else
{
lean_object* v_a_1699_; lean_object* v___x_1701_; uint8_t v_isShared_1702_; uint8_t v_isSharedCheck_1706_; 
lean_dec_ref(v_binderType_1694_);
v_a_1699_ = lean_ctor_get(v___x_1697_, 0);
v_isSharedCheck_1706_ = !lean_is_exclusive(v___x_1697_);
if (v_isSharedCheck_1706_ == 0)
{
v___x_1701_ = v___x_1697_;
v_isShared_1702_ = v_isSharedCheck_1706_;
goto v_resetjp_1700_;
}
else
{
lean_inc(v_a_1699_);
lean_dec(v___x_1697_);
v___x_1701_ = lean_box(0);
v_isShared_1702_ = v_isSharedCheck_1706_;
goto v_resetjp_1700_;
}
v_resetjp_1700_:
{
lean_object* v___x_1704_; 
if (v_isShared_1702_ == 0)
{
v___x_1704_ = v___x_1701_;
goto v_reusejp_1703_;
}
else
{
lean_object* v_reuseFailAlloc_1705_; 
v_reuseFailAlloc_1705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1705_, 0, v_a_1699_);
v___x_1704_ = v_reuseFailAlloc_1705_;
goto v_reusejp_1703_;
}
v_reusejp_1703_:
{
return v___x_1704_;
}
}
}
}
}
case 9:
{
lean_object* v_a_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; 
lean_del_object(v___x_1602_);
lean_dec(v_a_1600_);
v_a_1707_ = lean_ctor_get(v___x_1630_, 0);
lean_inc_ref(v_a_1707_);
lean_dec_ref_known(v___x_1630_, 1);
v___x_1708_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1708_, 0, v_a_1707_);
v___x_1709_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0));
v___x_1710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1710_, 0, v___x_1708_);
lean_ctor_set(v___x_1710_, 1, v___x_1709_);
v___x_1711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1711_, 0, v___x_1710_);
return v___x_1711_;
}
case 11:
{
lean_object* v_typeName_1712_; lean_object* v_idx_1713_; lean_object* v_struct_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; 
lean_del_object(v___x_1602_);
v_typeName_1712_ = lean_ctor_get(v___x_1630_, 0);
lean_inc(v_typeName_1712_);
v_idx_1713_ = lean_ctor_get(v___x_1630_, 1);
lean_inc(v_idx_1713_);
v_struct_1714_ = lean_ctor_get(v___x_1630_, 2);
lean_inc_ref(v_struct_1714_);
lean_dec_ref_known(v___x_1630_, 3);
v___x_1715_ = l_Lean_Expr_getAppNumArgs(v_a_1600_);
lean_inc(v___x_1715_);
v___x_1716_ = lean_alloc_ctor(6, 3, 0);
lean_ctor_set(v___x_1716_, 0, v_typeName_1712_);
lean_ctor_set(v___x_1716_, 1, v_idx_1713_);
lean_ctor_set(v___x_1716_, 2, v___x_1715_);
v___x_1717_ = lean_unsigned_to_nat(1u);
v___x_1718_ = lean_mk_empty_array_with_capacity(v___x_1717_);
v___x_1719_ = lean_array_push(v___x_1718_, v_struct_1714_);
v___x_1720_ = lean_mk_empty_array_with_capacity(v___x_1715_);
lean_dec(v___x_1715_);
v___x_1721_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_a_1600_, v___x_1720_);
v___x_1722_ = l_Array_append___redArg(v___x_1719_, v___x_1721_);
lean_dec_ref(v___x_1721_);
v___x_1723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1723_, 0, v___x_1716_);
lean_ctor_set(v___x_1723_, 1, v___x_1722_);
v___x_1724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1724_, 0, v___x_1723_);
return v___x_1724_;
}
default: 
{
lean_object* v___x_1725_; lean_object* v___x_1726_; 
lean_dec_ref(v___x_1630_);
lean_del_object(v___x_1602_);
lean_dec(v_a_1600_);
v___x_1725_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__2));
v___x_1726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1726_, 0, v___x_1725_);
return v___x_1726_;
}
}
}
}
}
else
{
lean_object* v_a_1740_; lean_object* v___x_1742_; uint8_t v_isShared_1743_; uint8_t v_isSharedCheck_1747_; 
v_a_1740_ = lean_ctor_get(v___x_1599_, 0);
v_isSharedCheck_1747_ = !lean_is_exclusive(v___x_1599_);
if (v_isSharedCheck_1747_ == 0)
{
v___x_1742_ = v___x_1599_;
v_isShared_1743_ = v_isSharedCheck_1747_;
goto v_resetjp_1741_;
}
else
{
lean_inc(v_a_1740_);
lean_dec(v___x_1599_);
v___x_1742_ = lean_box(0);
v_isShared_1743_ = v_isSharedCheck_1747_;
goto v_resetjp_1741_;
}
v_resetjp_1741_:
{
lean_object* v___x_1745_; 
if (v_isShared_1743_ == 0)
{
v___x_1745_ = v___x_1742_;
goto v_reusejp_1744_;
}
else
{
lean_object* v_reuseFailAlloc_1746_; 
v_reuseFailAlloc_1746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1746_, 0, v_a_1740_);
v___x_1745_ = v_reuseFailAlloc_1746_;
goto v_reusejp_1744_;
}
v_reusejp_1744_:
{
return v___x_1745_;
}
}
}
v___jp_1580_:
{
lean_object* v___x_1581_; lean_object* v___x_1582_; 
v___x_1581_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__1));
v___x_1582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1582_, 0, v___x_1581_);
return v___x_1582_;
}
v___jp_1583_:
{
lean_object* v___x_1584_; lean_object* v___x_1585_; 
v___x_1584_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__2));
v___x_1585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1585_, 0, v___x_1584_);
return v___x_1585_;
}
v___jp_1586_:
{
uint8_t v___x_1589_; 
v___x_1589_ = l_Lean_Expr_hasLooseBVars(v_b_1588_);
if (v___x_1589_ == 0)
{
lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; 
v___x_1590_ = lean_box(5);
v___x_1591_ = lean_unsigned_to_nat(2u);
v___x_1592_ = lean_mk_empty_array_with_capacity(v___x_1591_);
v___x_1593_ = lean_array_push(v___x_1592_, v___y_1587_);
v___x_1594_ = lean_array_push(v___x_1593_, v_b_1588_);
v___x_1595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1595_, 0, v___x_1590_);
lean_ctor_set(v___x_1595_, 1, v___x_1594_);
v___x_1596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1596_, 0, v___x_1595_);
return v___x_1596_;
}
else
{
lean_object* v___x_1597_; lean_object* v___x_1598_; 
lean_dec_ref(v_b_1588_);
lean_dec_ref(v___y_1587_);
v___x_1597_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__2));
v___x_1598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1598_, 0, v___x_1597_);
return v___x_1598_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___boxed(lean_object* v_e_1748_, lean_object* v_isMatch_1749_, lean_object* v_root_1750_, lean_object* v_a_1751_, lean_object* v_a_1752_, lean_object* v_a_1753_, lean_object* v_a_1754_, lean_object* v_a_1755_){
_start:
{
uint8_t v_isMatch_boxed_1756_; uint8_t v_root_boxed_1757_; lean_object* v_res_1758_; 
v_isMatch_boxed_1756_ = lean_unbox(v_isMatch_1749_);
v_root_boxed_1757_ = lean_unbox(v_root_1750_);
v_res_1758_ = l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs(v_e_1748_, v_isMatch_boxed_1756_, v_root_boxed_1757_, v_a_1751_, v_a_1752_, v_a_1753_, v_a_1754_);
lean_dec(v_a_1754_);
lean_dec_ref(v_a_1753_);
lean_dec(v_a_1752_);
lean_dec_ref(v_a_1751_);
return v_res_1758_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0(lean_object* v_declName_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_){
_start:
{
lean_object* v___x_1765_; 
v___x_1765_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___redArg(v_declName_1759_, v___y_1763_);
return v___x_1765_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___boxed(lean_object* v_declName_1766_, lean_object* v___y_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_){
_start:
{
lean_object* v_res_1772_; 
v_res_1772_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0(v_declName_1766_, v___y_1767_, v___y_1768_, v___y_1769_, v___y_1770_);
lean_dec(v___y_1770_);
lean_dec_ref(v___y_1769_);
lean_dec(v___y_1768_);
lean_dec_ref(v___y_1767_);
return v_res_1772_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1(lean_object* v_inst_1773_, lean_object* v_R_1774_, lean_object* v_a_1775_, lean_object* v_b_1776_, lean_object* v_c_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_){
_start:
{
lean_object* v___x_1783_; 
v___x_1783_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___redArg(v_a_1775_, v_b_1776_);
return v___x_1783_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___boxed(lean_object* v_inst_1784_, lean_object* v_R_1785_, lean_object* v_a_1786_, lean_object* v_b_1787_, lean_object* v_c_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_){
_start:
{
lean_object* v_res_1794_; 
v_res_1794_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1(v_inst_1784_, v_R_1785_, v_a_1786_, v_b_1787_, v_c_1788_, v___y_1789_, v___y_1790_, v___y_1791_, v___y_1792_);
lean_dec(v___y_1792_);
lean_dec_ref(v___y_1791_);
lean_dec(v___y_1790_);
lean_dec_ref(v___y_1789_);
return v_res_1794_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getMatchKeyArgs(lean_object* v_e_1795_, uint8_t v_root_1796_, lean_object* v_a_1797_, lean_object* v_a_1798_, lean_object* v_a_1799_, lean_object* v_a_1800_){
_start:
{
uint8_t v___x_1802_; lean_object* v___x_1803_; 
v___x_1802_ = 1;
v___x_1803_ = l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs(v_e_1795_, v___x_1802_, v_root_1796_, v_a_1797_, v_a_1798_, v_a_1799_, v_a_1800_);
return v___x_1803_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getMatchKeyArgs___boxed(lean_object* v_e_1804_, lean_object* v_root_1805_, lean_object* v_a_1806_, lean_object* v_a_1807_, lean_object* v_a_1808_, lean_object* v_a_1809_, lean_object* v_a_1810_){
_start:
{
uint8_t v_root_boxed_1811_; lean_object* v_res_1812_; 
v_root_boxed_1811_ = lean_unbox(v_root_1805_);
v_res_1812_ = l_Lean_Meta_LazyDiscrTree_MatchClone_getMatchKeyArgs(v_e_1804_, v_root_boxed_1811_, v_a_1806_, v_a_1807_, v_a_1808_, v_a_1809_);
lean_dec(v_a_1809_);
lean_dec_ref(v_a_1808_);
lean_dec(v_a_1807_);
lean_dec_ref(v_a_1806_);
return v_res_1812_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__1(void){
_start:
{
lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; 
v___x_1815_ = lean_box(0);
v___x_1816_ = lean_unsigned_to_nat(16u);
v___x_1817_ = lean_mk_array(v___x_1816_, v___x_1815_);
return v___x_1817_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2(void){
_start:
{
lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; 
v___x_1818_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__1);
v___x_1819_ = lean_unsigned_to_nat(0u);
v___x_1820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1820_, 0, v___x_1819_);
lean_ctor_set(v___x_1820_, 1, v___x_1818_);
return v___x_1820_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__4(void){
_start:
{
lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; 
v___x_1823_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__3));
v___x_1824_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2);
v___x_1825_ = lean_unsigned_to_nat(0u);
v___x_1826_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__0));
v___x_1827_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1827_, 0, v___x_1826_);
lean_ctor_set(v___x_1827_, 1, v___x_1825_);
lean_ctor_set(v___x_1827_, 2, v___x_1824_);
lean_ctor_set(v___x_1827_, 3, v___x_1823_);
return v___x_1827_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg(){
_start:
{
lean_object* v___x_1829_; 
v___x_1829_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__4, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__4_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__4);
return v___x_1829_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___boxed(lean_object* v___dummy_1830_){
_start:
{
lean_object* v_res_1831_; 
v_res_1831_ = l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg();
return v_res_1831_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0(void){
_start:
{
lean_object* v___x_1832_; 
v___x_1832_ = l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg();
return v___x_1832_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default(lean_object* v_00_u03b1_1833_){
_start:
{
lean_object* v___x_1834_; 
v___x_1834_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0);
return v___x_1834_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie___redArg(){
_start:
{
lean_object* v___x_1836_; 
v___x_1836_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0);
return v___x_1836_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie___redArg___boxed(lean_object* v___dummy_1837_){
_start:
{
lean_object* v_res_1838_; 
v_res_1838_ = l_Lean_Meta_LazyDiscrTree_instInhabitedTrie___redArg();
return v_res_1838_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie(lean_object* v_a_1839_){
_start:
{
lean_object* v___x_1840_; 
v___x_1840_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0);
return v___x_1840_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__1(void){
_start:
{
lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; 
v___x_1843_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2);
v___x_1844_ = lean_unsigned_to_nat(0u);
v___x_1845_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v___x_1846_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1846_, 0, v___x_1845_);
lean_ctor_set(v___x_1846_, 1, v___x_1844_);
lean_ctor_set(v___x_1846_, 2, v___x_1843_);
lean_ctor_set(v___x_1846_, 3, v___x_1845_);
return v___x_1846_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg(){
_start:
{
lean_object* v___x_1848_; 
v___x_1848_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__1);
return v___x_1848_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___boxed(lean_object* v___dummy_1849_){
_start:
{
lean_object* v_res_1850_; 
v_res_1850_ = l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg();
return v_res_1850_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__0(void){
_start:
{
lean_object* v___x_1851_; 
v___x_1851_ = l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg();
return v___x_1851_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie(lean_object* v_00_u03b1_1852_){
_start:
{
lean_object* v___x_1853_; 
v___x_1853_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__0, &l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__0);
return v___x_1853_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Trie_pushPending___redArg(lean_object* v_x_1854_, lean_object* v_x_1855_){
_start:
{
lean_object* v_values_1856_; lean_object* v_star_1857_; lean_object* v_children_1858_; lean_object* v_pending_1859_; lean_object* v___x_1861_; uint8_t v_isShared_1862_; uint8_t v_isSharedCheck_1867_; 
v_values_1856_ = lean_ctor_get(v_x_1854_, 0);
v_star_1857_ = lean_ctor_get(v_x_1854_, 1);
v_children_1858_ = lean_ctor_get(v_x_1854_, 2);
v_pending_1859_ = lean_ctor_get(v_x_1854_, 3);
v_isSharedCheck_1867_ = !lean_is_exclusive(v_x_1854_);
if (v_isSharedCheck_1867_ == 0)
{
v___x_1861_ = v_x_1854_;
v_isShared_1862_ = v_isSharedCheck_1867_;
goto v_resetjp_1860_;
}
else
{
lean_inc(v_pending_1859_);
lean_inc(v_children_1858_);
lean_inc(v_star_1857_);
lean_inc(v_values_1856_);
lean_dec(v_x_1854_);
v___x_1861_ = lean_box(0);
v_isShared_1862_ = v_isSharedCheck_1867_;
goto v_resetjp_1860_;
}
v_resetjp_1860_:
{
lean_object* v___x_1863_; lean_object* v___x_1865_; 
v___x_1863_ = lean_array_push(v_pending_1859_, v_x_1855_);
if (v_isShared_1862_ == 0)
{
lean_ctor_set(v___x_1861_, 3, v___x_1863_);
v___x_1865_ = v___x_1861_;
goto v_reusejp_1864_;
}
else
{
lean_object* v_reuseFailAlloc_1866_; 
v_reuseFailAlloc_1866_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1866_, 0, v_values_1856_);
lean_ctor_set(v_reuseFailAlloc_1866_, 1, v_star_1857_);
lean_ctor_set(v_reuseFailAlloc_1866_, 2, v_children_1858_);
lean_ctor_set(v_reuseFailAlloc_1866_, 3, v___x_1863_);
v___x_1865_ = v_reuseFailAlloc_1866_;
goto v_reusejp_1864_;
}
v_reusejp_1864_:
{
return v___x_1865_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Trie_pushPending(lean_object* v_00_u03b1_1868_, lean_object* v_x_1869_, lean_object* v_x_1870_){
_start:
{
lean_object* v___x_1871_; 
v___x_1871_ = l_Lean_Meta_LazyDiscrTree_Trie_pushPending___redArg(v_x_1869_, v_x_1870_);
return v___x_1871_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__0(void){
_start:
{
lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; 
v___x_1872_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0);
v___x_1873_ = lean_unsigned_to_nat(1u);
v___x_1874_ = lean_mk_empty_array_with_capacity(v___x_1873_);
v___x_1875_ = lean_array_push(v___x_1874_, v___x_1872_);
return v___x_1875_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__1(void){
_start:
{
lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; 
v___x_1876_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2);
v___x_1877_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__0);
v___x_1878_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1878_, 0, v___x_1877_);
lean_ctor_set(v___x_1878_, 1, v___x_1876_);
return v___x_1878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabited___redArg(){
_start:
{
lean_object* v___x_1880_; 
v___x_1880_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__1);
return v___x_1880_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___boxed(lean_object* v___dummy_1881_){
_start:
{
lean_object* v_res_1882_; 
v_res_1882_ = l_Lean_Meta_LazyDiscrTree_instInhabited___redArg();
return v_res_1882_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabited___closed__0(void){
_start:
{
lean_object* v___x_1883_; 
v___x_1883_ = l_Lean_Meta_LazyDiscrTree_instInhabited___redArg();
return v___x_1883_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabited(lean_object* v_00_u03b1_1884_){
_start:
{
lean_object* v___x_1885_; 
v___x_1885_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabited___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabited___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabited___closed__0);
return v___x_1885_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0_spec__0(lean_object* v_msgData_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_){
_start:
{
lean_object* v___x_1892_; lean_object* v_env_1893_; uint8_t v___x_1894_; lean_object* v_env_1895_; lean_object* v___x_1896_; lean_object* v_toCold_1897_; lean_object* v_mctx_1898_; lean_object* v_lctx_1899_; lean_object* v_options_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; 
v___x_1892_ = lean_st_ref_get(v___y_1890_);
v_env_1893_ = lean_ctor_get(v___x_1892_, 0);
lean_inc_ref(v_env_1893_);
lean_dec(v___x_1892_);
v___x_1894_ = 0;
v_env_1895_ = l_Lean_Environment_setRecordingDeps(v_env_1893_, v___x_1894_);
v___x_1896_ = lean_st_ref_get(v___y_1888_);
v_toCold_1897_ = lean_ctor_get(v___y_1889_, 0);
v_mctx_1898_ = lean_ctor_get(v___x_1896_, 0);
lean_inc_ref(v_mctx_1898_);
lean_dec(v___x_1896_);
v_lctx_1899_ = lean_ctor_get(v___y_1887_, 2);
v_options_1900_ = lean_ctor_get(v_toCold_1897_, 2);
lean_inc_ref(v_options_1900_);
lean_inc_ref(v_lctx_1899_);
v___x_1901_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1901_, 0, v_env_1895_);
lean_ctor_set(v___x_1901_, 1, v_mctx_1898_);
lean_ctor_set(v___x_1901_, 2, v_lctx_1899_);
lean_ctor_set(v___x_1901_, 3, v_options_1900_);
v___x_1902_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1902_, 0, v___x_1901_);
lean_ctor_set(v___x_1902_, 1, v_msgData_1886_);
v___x_1903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1903_, 0, v___x_1902_);
return v___x_1903_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0_spec__0___boxed(lean_object* v_msgData_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_){
_start:
{
lean_object* v_res_1910_; 
v_res_1910_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0_spec__0(v_msgData_1904_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_);
lean_dec(v___y_1908_);
lean_dec_ref(v___y_1907_);
lean_dec(v___y_1906_);
lean_dec_ref(v___y_1905_);
return v_res_1910_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___redArg(lean_object* v_msg_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_){
_start:
{
lean_object* v_ref_1917_; lean_object* v___x_1918_; lean_object* v_a_1919_; lean_object* v___x_1921_; uint8_t v_isShared_1922_; uint8_t v_isSharedCheck_1927_; 
v_ref_1917_ = lean_ctor_get(v___y_1914_, 2);
v___x_1918_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0_spec__0(v_msg_1911_, v___y_1912_, v___y_1913_, v___y_1914_, v___y_1915_);
v_a_1919_ = lean_ctor_get(v___x_1918_, 0);
v_isSharedCheck_1927_ = !lean_is_exclusive(v___x_1918_);
if (v_isSharedCheck_1927_ == 0)
{
v___x_1921_ = v___x_1918_;
v_isShared_1922_ = v_isSharedCheck_1927_;
goto v_resetjp_1920_;
}
else
{
lean_inc(v_a_1919_);
lean_dec(v___x_1918_);
v___x_1921_ = lean_box(0);
v_isShared_1922_ = v_isSharedCheck_1927_;
goto v_resetjp_1920_;
}
v_resetjp_1920_:
{
lean_object* v___x_1923_; lean_object* v___x_1925_; 
lean_inc(v_ref_1917_);
v___x_1923_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1923_, 0, v_ref_1917_);
lean_ctor_set(v___x_1923_, 1, v_a_1919_);
if (v_isShared_1922_ == 0)
{
lean_ctor_set_tag(v___x_1921_, 1);
lean_ctor_set(v___x_1921_, 0, v___x_1923_);
v___x_1925_ = v___x_1921_;
goto v_reusejp_1924_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v___x_1923_);
v___x_1925_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1924_;
}
v_reusejp_1924_:
{
return v___x_1925_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___redArg___boxed(lean_object* v_msg_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_){
_start:
{
lean_object* v_res_1934_; 
v_res_1934_ = l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___redArg(v_msg_1928_, v___y_1929_, v___y_1930_, v___y_1931_, v___y_1932_);
lean_dec(v___y_1932_);
lean_dec_ref(v___y_1931_);
lean_dec(v___y_1930_);
lean_dec_ref(v___y_1929_);
return v_res_1934_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_pushArgs___closed__1(void){
_start:
{
lean_object* v___x_1936_; lean_object* v___x_1937_; 
v___x_1936_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_pushArgs___closed__0));
v___x_1937_ = l_Lean_stringToMessageData(v___x_1936_);
return v___x_1937_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_pushArgs(uint8_t v_root_1938_, lean_object* v_todo_1939_, lean_object* v_e_1940_, lean_object* v_a_1941_, lean_object* v_a_1942_, lean_object* v_a_1943_, lean_object* v_a_1944_){
_start:
{
lean_object* v_v_1951_; uint8_t v___x_1955_; 
v___x_1955_ = l_Lean_Meta_DiscrTree_hasNoindexAnnotation(v_e_1940_);
if (v___x_1955_ == 0)
{
lean_object* v___x_1956_; 
v___x_1956_ = l_Lean_Meta_DiscrTree_reduceDT(v_e_1940_, v_root_1938_, v_a_1941_, v_a_1942_, v_a_1943_, v_a_1944_);
if (lean_obj_tag(v___x_1956_) == 0)
{
lean_object* v_a_1957_; lean_object* v___x_1959_; uint8_t v_isShared_1960_; uint8_t v_isSharedCheck_2085_; 
v_a_1957_ = lean_ctor_get(v___x_1956_, 0);
v_isSharedCheck_2085_ = !lean_is_exclusive(v___x_1956_);
if (v_isSharedCheck_2085_ == 0)
{
v___x_1959_ = v___x_1956_;
v_isShared_1960_ = v_isSharedCheck_2085_;
goto v_resetjp_1958_;
}
else
{
lean_inc(v_a_1957_);
lean_dec(v___x_1956_);
v___x_1959_ = lean_box(0);
v_isShared_1960_ = v_isSharedCheck_2085_;
goto v_resetjp_1958_;
}
v_resetjp_1958_:
{
lean_object* v___x_1961_; lean_object* v_k_1963_; lean_object* v_nargs_1964_; lean_object* v_todo_1965_; lean_object* v___y_1966_; lean_object* v___y_1967_; lean_object* v___y_1968_; lean_object* v___y_1969_; 
v___x_1961_ = l_Lean_Expr_getAppFn(v_a_1957_);
switch(lean_obj_tag(v___x_1961_))
{
case 9:
{
lean_object* v_a_2008_; 
lean_del_object(v___x_1959_);
lean_dec(v_a_1957_);
v_a_2008_ = lean_ctor_get(v___x_1961_, 0);
lean_inc_ref(v_a_2008_);
lean_dec_ref_known(v___x_1961_, 1);
v_v_1951_ = v_a_2008_;
goto v___jp_1950_;
}
case 4:
{
lean_object* v_declName_2009_; lean_object* v___y_2011_; lean_object* v___y_2012_; lean_object* v___y_2013_; lean_object* v___y_2014_; 
lean_del_object(v___x_1959_);
v_declName_2009_ = lean_ctor_get(v___x_1961_, 0);
if (v_root_1938_ == 0)
{
lean_object* v___x_2017_; 
lean_inc(v_a_1957_);
v___x_2017_ = l_Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f(v_a_1957_);
if (lean_obj_tag(v___x_2017_) == 1)
{
lean_object* v_val_2018_; 
lean_dec_ref_known(v___x_1961_, 2);
lean_dec(v_a_1957_);
v_val_2018_ = lean_ctor_get(v___x_2017_, 0);
lean_inc(v_val_2018_);
lean_dec_ref_known(v___x_2017_, 1);
v_v_1951_ = v_val_2018_;
goto v___jp_1950_;
}
else
{
lean_object* v___x_2019_; 
lean_dec(v___x_2017_);
v___x_2019_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset(v_declName_2009_, v_a_1957_, v_a_1941_, v_a_1942_, v_a_1943_, v_a_1944_);
if (lean_obj_tag(v___x_2019_) == 0)
{
lean_object* v_a_2020_; uint8_t v___x_2021_; 
v_a_2020_ = lean_ctor_get(v___x_2019_, 0);
lean_inc(v_a_2020_);
lean_dec_ref_known(v___x_2019_, 1);
v___x_2021_ = lean_unbox(v_a_2020_);
lean_dec(v_a_2020_);
if (v___x_2021_ == 0)
{
v___y_2011_ = v_a_1941_;
v___y_2012_ = v_a_1942_;
v___y_2013_ = v_a_1943_;
v___y_2014_ = v_a_1944_;
goto v___jp_2010_;
}
else
{
lean_dec_ref_known(v___x_1961_, 2);
lean_dec(v_a_1957_);
goto v___jp_1946_;
}
}
else
{
lean_object* v_a_2022_; lean_object* v___x_2024_; uint8_t v_isShared_2025_; uint8_t v_isSharedCheck_2029_; 
lean_dec_ref_known(v___x_1961_, 2);
lean_dec(v_a_1957_);
lean_dec_ref(v_todo_1939_);
v_a_2022_ = lean_ctor_get(v___x_2019_, 0);
v_isSharedCheck_2029_ = !lean_is_exclusive(v___x_2019_);
if (v_isSharedCheck_2029_ == 0)
{
v___x_2024_ = v___x_2019_;
v_isShared_2025_ = v_isSharedCheck_2029_;
goto v_resetjp_2023_;
}
else
{
lean_inc(v_a_2022_);
lean_dec(v___x_2019_);
v___x_2024_ = lean_box(0);
v_isShared_2025_ = v_isSharedCheck_2029_;
goto v_resetjp_2023_;
}
v_resetjp_2023_:
{
lean_object* v___x_2027_; 
if (v_isShared_2025_ == 0)
{
v___x_2027_ = v___x_2024_;
goto v_reusejp_2026_;
}
else
{
lean_object* v_reuseFailAlloc_2028_; 
v_reuseFailAlloc_2028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2028_, 0, v_a_2022_);
v___x_2027_ = v_reuseFailAlloc_2028_;
goto v_reusejp_2026_;
}
v_reusejp_2026_:
{
return v___x_2027_;
}
}
}
}
}
else
{
v___y_2011_ = v_a_1941_;
v___y_2012_ = v_a_1942_;
v___y_2013_ = v_a_1943_;
v___y_2014_ = v_a_1944_;
goto v___jp_2010_;
}
v___jp_2010_:
{
lean_object* v___x_2015_; lean_object* v___x_2016_; 
v___x_2015_ = l_Lean_Expr_getAppNumArgs(v_a_1957_);
lean_inc(v___x_2015_);
lean_inc(v_declName_2009_);
v___x_2016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2016_, 0, v_declName_2009_);
lean_ctor_set(v___x_2016_, 1, v___x_2015_);
v_k_1963_ = v___x_2016_;
v_nargs_1964_ = v___x_2015_;
v_todo_1965_ = v_todo_1939_;
v___y_1966_ = v___y_2011_;
v___y_1967_ = v___y_2012_;
v___y_1968_ = v___y_2013_;
v___y_1969_ = v___y_2014_;
goto v___jp_1962_;
}
}
case 11:
{
lean_object* v_typeName_2030_; lean_object* v_idx_2031_; lean_object* v_struct_2032_; lean_object* v___x_2033_; lean_object* v___y_2035_; lean_object* v_env_2039_; uint8_t v___x_2040_; 
lean_del_object(v___x_1959_);
v_typeName_2030_ = lean_ctor_get(v___x_1961_, 0);
v_idx_2031_ = lean_ctor_get(v___x_1961_, 1);
v_struct_2032_ = lean_ctor_get(v___x_1961_, 2);
v___x_2033_ = lean_st_ref_get(v_a_1944_);
v_env_2039_ = lean_ctor_get(v___x_2033_, 0);
lean_inc_ref(v_env_2039_);
lean_dec(v___x_2033_);
v___x_2040_ = l_Lean_isClass(v_env_2039_, v_typeName_2030_);
if (v___x_2040_ == 0)
{
lean_inc_ref(v_struct_2032_);
v___y_2035_ = v_struct_2032_;
goto v___jp_2034_;
}
else
{
lean_object* v___x_2041_; 
lean_inc_ref(v_struct_2032_);
v___x_2041_ = l_Lean_Meta_DiscrTree_mkNoindexAnnotation(v_struct_2032_);
v___y_2035_ = v___x_2041_;
goto v___jp_2034_;
}
v___jp_2034_:
{
lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; 
v___x_2036_ = l_Lean_Expr_getAppNumArgs(v_a_1957_);
lean_inc(v___x_2036_);
lean_inc(v_idx_2031_);
lean_inc(v_typeName_2030_);
v___x_2037_ = lean_alloc_ctor(6, 3, 0);
lean_ctor_set(v___x_2037_, 0, v_typeName_2030_);
lean_ctor_set(v___x_2037_, 1, v_idx_2031_);
lean_ctor_set(v___x_2037_, 2, v___x_2036_);
v___x_2038_ = lean_array_push(v_todo_1939_, v___y_2035_);
v_k_1963_ = v___x_2037_;
v_nargs_1964_ = v___x_2036_;
v_todo_1965_ = v___x_2038_;
v___y_1966_ = v_a_1941_;
v___y_1967_ = v_a_1942_;
v___y_1968_ = v_a_1943_;
v___y_1969_ = v_a_1944_;
goto v___jp_1962_;
}
}
case 1:
{
lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2045_; 
lean_dec_ref_known(v___x_1961_, 1);
lean_dec(v_a_1957_);
v___x_2042_ = lean_box(3);
v___x_2043_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2043_, 0, v___x_2042_);
lean_ctor_set(v___x_2043_, 1, v_todo_1939_);
if (v_isShared_1960_ == 0)
{
lean_ctor_set(v___x_1959_, 0, v___x_2043_);
v___x_2045_ = v___x_1959_;
goto v_reusejp_2044_;
}
else
{
lean_object* v_reuseFailAlloc_2046_; 
v_reuseFailAlloc_2046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2046_, 0, v___x_2043_);
v___x_2045_ = v_reuseFailAlloc_2046_;
goto v_reusejp_2044_;
}
v_reusejp_2044_:
{
return v___x_2045_;
}
}
case 2:
{
lean_object* v_mvarId_2047_; lean_object* v___x_2048_; uint8_t v___x_2049_; 
lean_del_object(v___x_1959_);
lean_dec(v_a_1957_);
v_mvarId_2047_ = lean_ctor_get(v___x_1961_, 0);
lean_inc(v_mvarId_2047_);
lean_dec_ref_known(v___x_1961_, 1);
v___x_2048_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId));
v___x_2049_ = l_Lean_instBEqMVarId_beq(v_mvarId_2047_, v___x_2048_);
lean_dec(v_mvarId_2047_);
if (v___x_2049_ == 0)
{
lean_object* v___x_2050_; lean_object* v___x_2051_; 
lean_dec_ref(v_todo_1939_);
v___x_2050_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_pushArgs___closed__1, &l_Lean_Meta_LazyDiscrTree_pushArgs___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_pushArgs___closed__1);
v___x_2051_ = l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___redArg(v___x_2050_, v_a_1941_, v_a_1942_, v_a_1943_, v_a_1944_);
return v___x_2051_;
}
else
{
goto v___jp_1946_;
}
}
case 7:
{
lean_object* v_binderType_2052_; lean_object* v_body_2053_; lean_object* v_b_2055_; uint8_t v___x_2069_; 
lean_dec(v_a_1957_);
v_binderType_2052_ = lean_ctor_get(v___x_1961_, 1);
lean_inc_ref(v_binderType_2052_);
v_body_2053_ = lean_ctor_get(v___x_1961_, 2);
lean_inc_ref(v_body_2053_);
lean_dec_ref_known(v___x_1961_, 3);
v___x_2069_ = l_Lean_Expr_hasLooseBVars(v_body_2053_);
if (v___x_2069_ == 0)
{
v_b_2055_ = v_body_2053_;
goto v___jp_2054_;
}
else
{
lean_object* v___x_2070_; 
v___x_2070_ = l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta(v_body_2053_, v_a_1943_, v_a_1944_);
if (lean_obj_tag(v___x_2070_) == 0)
{
lean_object* v_a_2071_; 
v_a_2071_ = lean_ctor_get(v___x_2070_, 0);
lean_inc(v_a_2071_);
lean_dec_ref_known(v___x_2070_, 1);
v_b_2055_ = v_a_2071_;
goto v___jp_2054_;
}
else
{
lean_object* v_a_2072_; lean_object* v___x_2074_; uint8_t v_isShared_2075_; uint8_t v_isSharedCheck_2079_; 
lean_dec_ref(v_binderType_2052_);
lean_del_object(v___x_1959_);
lean_dec_ref(v_todo_1939_);
v_a_2072_ = lean_ctor_get(v___x_2070_, 0);
v_isSharedCheck_2079_ = !lean_is_exclusive(v___x_2070_);
if (v_isSharedCheck_2079_ == 0)
{
v___x_2074_ = v___x_2070_;
v_isShared_2075_ = v_isSharedCheck_2079_;
goto v_resetjp_2073_;
}
else
{
lean_inc(v_a_2072_);
lean_dec(v___x_2070_);
v___x_2074_ = lean_box(0);
v_isShared_2075_ = v_isSharedCheck_2079_;
goto v_resetjp_2073_;
}
v_resetjp_2073_:
{
lean_object* v___x_2077_; 
if (v_isShared_2075_ == 0)
{
v___x_2077_ = v___x_2074_;
goto v_reusejp_2076_;
}
else
{
lean_object* v_reuseFailAlloc_2078_; 
v_reuseFailAlloc_2078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2078_, 0, v_a_2072_);
v___x_2077_ = v_reuseFailAlloc_2078_;
goto v_reusejp_2076_;
}
v_reusejp_2076_:
{
return v___x_2077_;
}
}
}
}
v___jp_2054_:
{
uint8_t v___x_2056_; 
v___x_2056_ = l_Lean_Expr_hasLooseBVars(v_b_2055_);
if (v___x_2056_ == 0)
{
lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2062_; 
v___x_2057_ = lean_box(5);
v___x_2058_ = lean_array_push(v_todo_1939_, v_binderType_2052_);
v___x_2059_ = lean_array_push(v___x_2058_, v_b_2055_);
v___x_2060_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2060_, 0, v___x_2057_);
lean_ctor_set(v___x_2060_, 1, v___x_2059_);
if (v_isShared_1960_ == 0)
{
lean_ctor_set(v___x_1959_, 0, v___x_2060_);
v___x_2062_ = v___x_1959_;
goto v_reusejp_2061_;
}
else
{
lean_object* v_reuseFailAlloc_2063_; 
v_reuseFailAlloc_2063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2063_, 0, v___x_2060_);
v___x_2062_ = v_reuseFailAlloc_2063_;
goto v_reusejp_2061_;
}
v_reusejp_2061_:
{
return v___x_2062_;
}
}
else
{
lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2067_; 
lean_dec_ref(v_b_2055_);
lean_dec_ref(v_binderType_2052_);
v___x_2064_ = lean_box(4);
v___x_2065_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2065_, 0, v___x_2064_);
lean_ctor_set(v___x_2065_, 1, v_todo_1939_);
if (v_isShared_1960_ == 0)
{
lean_ctor_set(v___x_1959_, 0, v___x_2065_);
v___x_2067_ = v___x_1959_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2068_; 
v_reuseFailAlloc_2068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2068_, 0, v___x_2065_);
v___x_2067_ = v_reuseFailAlloc_2068_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
return v___x_2067_;
}
}
}
}
default: 
{
lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2083_; 
lean_dec_ref(v___x_1961_);
lean_dec(v_a_1957_);
v___x_2080_ = lean_box(4);
v___x_2081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2081_, 0, v___x_2080_);
lean_ctor_set(v___x_2081_, 1, v_todo_1939_);
if (v_isShared_1960_ == 0)
{
lean_ctor_set(v___x_1959_, 0, v___x_2081_);
v___x_2083_ = v___x_1959_;
goto v_reusejp_2082_;
}
else
{
lean_object* v_reuseFailAlloc_2084_; 
v_reuseFailAlloc_2084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2084_, 0, v___x_2081_);
v___x_2083_ = v_reuseFailAlloc_2084_;
goto v_reusejp_2082_;
}
v_reusejp_2082_:
{
return v___x_2083_;
}
}
}
v___jp_1962_:
{
lean_object* v___x_1970_; 
lean_inc(v_nargs_1964_);
v___x_1970_ = l_Lean_Meta_getFunInfoNArgs(v___x_1961_, v_nargs_1964_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_);
if (lean_obj_tag(v___x_1970_) == 0)
{
lean_object* v_a_1971_; lean_object* v_paramInfo_1972_; lean_object* v___x_1974_; uint8_t v_isShared_1975_; uint8_t v_isSharedCheck_1998_; 
v_a_1971_ = lean_ctor_get(v___x_1970_, 0);
lean_inc(v_a_1971_);
lean_dec_ref_known(v___x_1970_, 1);
v_paramInfo_1972_ = lean_ctor_get(v_a_1971_, 0);
v_isSharedCheck_1998_ = !lean_is_exclusive(v_a_1971_);
if (v_isSharedCheck_1998_ == 0)
{
lean_object* v_unused_1999_; 
v_unused_1999_ = lean_ctor_get(v_a_1971_, 1);
lean_dec(v_unused_1999_);
v___x_1974_ = v_a_1971_;
v_isShared_1975_ = v_isSharedCheck_1998_;
goto v_resetjp_1973_;
}
else
{
lean_inc(v_paramInfo_1972_);
lean_dec(v_a_1971_);
v___x_1974_ = lean_box(0);
v_isShared_1975_ = v_isSharedCheck_1998_;
goto v_resetjp_1973_;
}
v_resetjp_1973_:
{
lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; 
v___x_1976_ = lean_unsigned_to_nat(1u);
v___x_1977_ = lean_nat_sub(v_nargs_1964_, v___x_1976_);
lean_dec(v_nargs_1964_);
v___x_1978_ = l_Lean_Meta_LazyDiscrTree_MatchClone_pushArgsAux(v_paramInfo_1972_, v___x_1977_, v_a_1957_, v_todo_1965_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_);
lean_dec_ref(v_paramInfo_1972_);
if (lean_obj_tag(v___x_1978_) == 0)
{
lean_object* v_a_1979_; lean_object* v___x_1981_; uint8_t v_isShared_1982_; uint8_t v_isSharedCheck_1989_; 
v_a_1979_ = lean_ctor_get(v___x_1978_, 0);
v_isSharedCheck_1989_ = !lean_is_exclusive(v___x_1978_);
if (v_isSharedCheck_1989_ == 0)
{
v___x_1981_ = v___x_1978_;
v_isShared_1982_ = v_isSharedCheck_1989_;
goto v_resetjp_1980_;
}
else
{
lean_inc(v_a_1979_);
lean_dec(v___x_1978_);
v___x_1981_ = lean_box(0);
v_isShared_1982_ = v_isSharedCheck_1989_;
goto v_resetjp_1980_;
}
v_resetjp_1980_:
{
lean_object* v___x_1984_; 
if (v_isShared_1975_ == 0)
{
lean_ctor_set(v___x_1974_, 1, v_a_1979_);
lean_ctor_set(v___x_1974_, 0, v_k_1963_);
v___x_1984_ = v___x_1974_;
goto v_reusejp_1983_;
}
else
{
lean_object* v_reuseFailAlloc_1988_; 
v_reuseFailAlloc_1988_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1988_, 0, v_k_1963_);
lean_ctor_set(v_reuseFailAlloc_1988_, 1, v_a_1979_);
v___x_1984_ = v_reuseFailAlloc_1988_;
goto v_reusejp_1983_;
}
v_reusejp_1983_:
{
lean_object* v___x_1986_; 
if (v_isShared_1982_ == 0)
{
lean_ctor_set(v___x_1981_, 0, v___x_1984_);
v___x_1986_ = v___x_1981_;
goto v_reusejp_1985_;
}
else
{
lean_object* v_reuseFailAlloc_1987_; 
v_reuseFailAlloc_1987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1987_, 0, v___x_1984_);
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
else
{
lean_object* v_a_1990_; lean_object* v___x_1992_; uint8_t v_isShared_1993_; uint8_t v_isSharedCheck_1997_; 
lean_del_object(v___x_1974_);
lean_dec(v_k_1963_);
v_a_1990_ = lean_ctor_get(v___x_1978_, 0);
v_isSharedCheck_1997_ = !lean_is_exclusive(v___x_1978_);
if (v_isSharedCheck_1997_ == 0)
{
v___x_1992_ = v___x_1978_;
v_isShared_1993_ = v_isSharedCheck_1997_;
goto v_resetjp_1991_;
}
else
{
lean_inc(v_a_1990_);
lean_dec(v___x_1978_);
v___x_1992_ = lean_box(0);
v_isShared_1993_ = v_isSharedCheck_1997_;
goto v_resetjp_1991_;
}
v_resetjp_1991_:
{
lean_object* v___x_1995_; 
if (v_isShared_1993_ == 0)
{
v___x_1995_ = v___x_1992_;
goto v_reusejp_1994_;
}
else
{
lean_object* v_reuseFailAlloc_1996_; 
v_reuseFailAlloc_1996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1996_, 0, v_a_1990_);
v___x_1995_ = v_reuseFailAlloc_1996_;
goto v_reusejp_1994_;
}
v_reusejp_1994_:
{
return v___x_1995_;
}
}
}
}
}
else
{
lean_object* v_a_2000_; lean_object* v___x_2002_; uint8_t v_isShared_2003_; uint8_t v_isSharedCheck_2007_; 
lean_dec_ref(v_todo_1965_);
lean_dec(v_nargs_1964_);
lean_dec(v_k_1963_);
lean_dec(v_a_1957_);
v_a_2000_ = lean_ctor_get(v___x_1970_, 0);
v_isSharedCheck_2007_ = !lean_is_exclusive(v___x_1970_);
if (v_isSharedCheck_2007_ == 0)
{
v___x_2002_ = v___x_1970_;
v_isShared_2003_ = v_isSharedCheck_2007_;
goto v_resetjp_2001_;
}
else
{
lean_inc(v_a_2000_);
lean_dec(v___x_1970_);
v___x_2002_ = lean_box(0);
v_isShared_2003_ = v_isSharedCheck_2007_;
goto v_resetjp_2001_;
}
v_resetjp_2001_:
{
lean_object* v___x_2005_; 
if (v_isShared_2003_ == 0)
{
v___x_2005_ = v___x_2002_;
goto v_reusejp_2004_;
}
else
{
lean_object* v_reuseFailAlloc_2006_; 
v_reuseFailAlloc_2006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2006_, 0, v_a_2000_);
v___x_2005_ = v_reuseFailAlloc_2006_;
goto v_reusejp_2004_;
}
v_reusejp_2004_:
{
return v___x_2005_;
}
}
}
}
}
}
else
{
lean_object* v_a_2086_; lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2093_; 
lean_dec_ref(v_todo_1939_);
v_a_2086_ = lean_ctor_get(v___x_1956_, 0);
v_isSharedCheck_2093_ = !lean_is_exclusive(v___x_1956_);
if (v_isSharedCheck_2093_ == 0)
{
v___x_2088_ = v___x_1956_;
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
else
{
lean_inc(v_a_2086_);
lean_dec(v___x_1956_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v___x_2091_; 
if (v_isShared_2089_ == 0)
{
v___x_2091_ = v___x_2088_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v_a_2086_);
v___x_2091_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
return v___x_2091_;
}
}
}
}
else
{
lean_dec_ref(v_e_1940_);
goto v___jp_1946_;
}
v___jp_1946_:
{
lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; 
v___x_1947_ = lean_box(3);
v___x_1948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1948_, 0, v___x_1947_);
lean_ctor_set(v___x_1948_, 1, v_todo_1939_);
v___x_1949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1949_, 0, v___x_1948_);
return v___x_1949_;
}
v___jp_1950_:
{
lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; 
v___x_1952_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1952_, 0, v_v_1951_);
v___x_1953_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1953_, 0, v___x_1952_);
lean_ctor_set(v___x_1953_, 1, v_todo_1939_);
v___x_1954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1954_, 0, v___x_1953_);
return v___x_1954_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_pushArgs___boxed(lean_object* v_root_2094_, lean_object* v_todo_2095_, lean_object* v_e_2096_, lean_object* v_a_2097_, lean_object* v_a_2098_, lean_object* v_a_2099_, lean_object* v_a_2100_, lean_object* v_a_2101_){
_start:
{
uint8_t v_root_boxed_2102_; lean_object* v_res_2103_; 
v_root_boxed_2102_ = lean_unbox(v_root_2094_);
v_res_2103_ = l_Lean_Meta_LazyDiscrTree_pushArgs(v_root_boxed_2102_, v_todo_2095_, v_e_2096_, v_a_2097_, v_a_2098_, v_a_2099_, v_a_2100_);
lean_dec(v_a_2100_);
lean_dec_ref(v_a_2099_);
lean_dec(v_a_2098_);
lean_dec_ref(v_a_2097_);
return v_res_2103_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0(lean_object* v_00_u03b1_2104_, lean_object* v_msg_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_){
_start:
{
lean_object* v___x_2111_; 
v___x_2111_ = l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___redArg(v_msg_2105_, v___y_2106_, v___y_2107_, v___y_2108_, v___y_2109_);
return v___x_2111_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___boxed(lean_object* v_00_u03b1_2112_, lean_object* v_msg_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_){
_start:
{
lean_object* v_res_2119_; 
v_res_2119_ = l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0(v_00_u03b1_2112_, v_msg_2113_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_);
lean_dec(v___y_2117_);
lean_dec_ref(v___y_2116_);
lean_dec(v___y_2115_);
lean_dec_ref(v___y_2114_);
return v_res_2119_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_initCapacity(void){
_start:
{
lean_object* v___x_2120_; 
v___x_2120_ = lean_unsigned_to_nat(8u);
return v___x_2120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_rootKey(lean_object* v_e_2121_, lean_object* v_a_2122_, lean_object* v_a_2123_, lean_object* v_a_2124_, lean_object* v_a_2125_){
_start:
{
uint8_t v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; 
v___x_2127_ = 1;
v___x_2128_ = lean_unsigned_to_nat(8u);
v___x_2129_ = lean_mk_empty_array_with_capacity(v___x_2128_);
v___x_2130_ = l_Lean_Meta_LazyDiscrTree_pushArgs(v___x_2127_, v___x_2129_, v_e_2121_, v_a_2122_, v_a_2123_, v_a_2124_, v_a_2125_);
return v___x_2130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_rootKey___boxed(lean_object* v_e_2131_, lean_object* v_a_2132_, lean_object* v_a_2133_, lean_object* v_a_2134_, lean_object* v_a_2135_, lean_object* v_a_2136_){
_start:
{
lean_object* v_res_2137_; 
v_res_2137_ = l_Lean_Meta_LazyDiscrTree_rootKey(v_e_2131_, v_a_2132_, v_a_2133_, v_a_2134_, v_a_2135_);
lean_dec(v_a_2135_);
lean_dec_ref(v_a_2134_);
lean_dec(v_a_2133_);
lean_dec_ref(v_a_2132_);
return v_res_2137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_buildPath(lean_object* v_op_2138_, uint8_t v_root_2139_, lean_object* v_todo_2140_, lean_object* v_keys_2141_, lean_object* v_a_2142_, lean_object* v_a_2143_, lean_object* v_a_2144_, lean_object* v_a_2145_){
_start:
{
lean_object* v___x_2147_; lean_object* v___x_2148_; uint8_t v___x_2149_; 
v___x_2147_ = lean_array_get_size(v_todo_2140_);
v___x_2148_ = lean_unsigned_to_nat(0u);
v___x_2149_ = lean_nat_dec_eq(v___x_2147_, v___x_2148_);
if (v___x_2149_ == 0)
{
lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v_e_2153_; lean_object* v_todo_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; 
v___x_2150_ = l_Lean_instInhabitedExpr;
v___x_2151_ = lean_unsigned_to_nat(1u);
v___x_2152_ = lean_nat_sub(v___x_2147_, v___x_2151_);
v_e_2153_ = lean_array_get(v___x_2150_, v_todo_2140_, v___x_2152_);
lean_dec(v___x_2152_);
v_todo_2154_ = lean_array_pop(v_todo_2140_);
v___x_2155_ = lean_box(v_root_2139_);
lean_inc_ref(v_op_2138_);
lean_inc(v_a_2145_);
lean_inc_ref(v_a_2144_);
lean_inc(v_a_2143_);
lean_inc_ref(v_a_2142_);
v___x_2156_ = lean_apply_8(v_op_2138_, v___x_2155_, v_todo_2154_, v_e_2153_, v_a_2142_, v_a_2143_, v_a_2144_, v_a_2145_, lean_box(0));
if (lean_obj_tag(v___x_2156_) == 0)
{
lean_object* v_a_2157_; lean_object* v_fst_2158_; lean_object* v_snd_2159_; lean_object* v___x_2160_; 
v_a_2157_ = lean_ctor_get(v___x_2156_, 0);
lean_inc(v_a_2157_);
lean_dec_ref_known(v___x_2156_, 1);
v_fst_2158_ = lean_ctor_get(v_a_2157_, 0);
lean_inc(v_fst_2158_);
v_snd_2159_ = lean_ctor_get(v_a_2157_, 1);
lean_inc(v_snd_2159_);
lean_dec(v_a_2157_);
v___x_2160_ = lean_array_push(v_keys_2141_, v_fst_2158_);
v_root_2139_ = v___x_2149_;
v_todo_2140_ = v_snd_2159_;
v_keys_2141_ = v___x_2160_;
goto _start;
}
else
{
lean_object* v_a_2162_; lean_object* v___x_2164_; uint8_t v_isShared_2165_; uint8_t v_isSharedCheck_2169_; 
lean_dec_ref(v_keys_2141_);
lean_dec_ref(v_op_2138_);
v_a_2162_ = lean_ctor_get(v___x_2156_, 0);
v_isSharedCheck_2169_ = !lean_is_exclusive(v___x_2156_);
if (v_isSharedCheck_2169_ == 0)
{
v___x_2164_ = v___x_2156_;
v_isShared_2165_ = v_isSharedCheck_2169_;
goto v_resetjp_2163_;
}
else
{
lean_inc(v_a_2162_);
lean_dec(v___x_2156_);
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
else
{
lean_object* v___x_2170_; 
lean_dec_ref(v_todo_2140_);
lean_dec_ref(v_op_2138_);
v___x_2170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2170_, 0, v_keys_2141_);
return v___x_2170_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_buildPath___boxed(lean_object* v_op_2171_, lean_object* v_root_2172_, lean_object* v_todo_2173_, lean_object* v_keys_2174_, lean_object* v_a_2175_, lean_object* v_a_2176_, lean_object* v_a_2177_, lean_object* v_a_2178_, lean_object* v_a_2179_){
_start:
{
uint8_t v_root_boxed_2180_; lean_object* v_res_2181_; 
v_root_boxed_2180_ = lean_unbox(v_root_2172_);
v_res_2181_ = l_Lean_Meta_LazyDiscrTree_buildPath(v_op_2171_, v_root_boxed_2180_, v_todo_2173_, v_keys_2174_, v_a_2175_, v_a_2176_, v_a_2177_, v_a_2178_);
lean_dec(v_a_2178_);
lean_dec_ref(v_a_2177_);
lean_dec(v_a_2176_);
lean_dec_ref(v_a_2175_);
return v_res_2181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_patternPath(lean_object* v_e_2183_, lean_object* v_a_2184_, lean_object* v_a_2185_, lean_object* v_a_2186_, lean_object* v_a_2187_){
_start:
{
lean_object* v_op_2189_; lean_object* v___x_2190_; lean_object* v_todo_2191_; uint8_t v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; 
v_op_2189_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_patternPath___closed__0));
v___x_2190_ = lean_unsigned_to_nat(8u);
v_todo_2191_ = lean_mk_empty_array_with_capacity(v___x_2190_);
v___x_2192_ = 1;
lean_inc_ref(v_todo_2191_);
v___x_2193_ = lean_array_push(v_todo_2191_, v_e_2183_);
v___x_2194_ = l_Lean_Meta_LazyDiscrTree_buildPath(v_op_2189_, v___x_2192_, v___x_2193_, v_todo_2191_, v_a_2184_, v_a_2185_, v_a_2186_, v_a_2187_);
return v___x_2194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_patternPath___boxed(lean_object* v_e_2195_, lean_object* v_a_2196_, lean_object* v_a_2197_, lean_object* v_a_2198_, lean_object* v_a_2199_, lean_object* v_a_2200_){
_start:
{
lean_object* v_res_2201_; 
v_res_2201_ = l_Lean_Meta_LazyDiscrTree_patternPath(v_e_2195_, v_a_2196_, v_a_2197_, v_a_2198_, v_a_2199_);
lean_dec(v_a_2199_);
lean_dec_ref(v_a_2198_);
lean_dec(v_a_2197_);
lean_dec_ref(v_a_2196_);
return v_res_2201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_targetPath___lam__0(uint8_t v_root_2202_, lean_object* v_todo_2203_, lean_object* v_e_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_){
_start:
{
uint8_t v___x_2210_; lean_object* v___x_2211_; 
v___x_2210_ = 1;
v___x_2211_ = l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs(v_e_2204_, v___x_2210_, v_root_2202_, v___y_2205_, v___y_2206_, v___y_2207_, v___y_2208_);
if (lean_obj_tag(v___x_2211_) == 0)
{
lean_object* v_a_2212_; lean_object* v___x_2214_; uint8_t v_isShared_2215_; uint8_t v_isSharedCheck_2229_; 
v_a_2212_ = lean_ctor_get(v___x_2211_, 0);
v_isSharedCheck_2229_ = !lean_is_exclusive(v___x_2211_);
if (v_isSharedCheck_2229_ == 0)
{
v___x_2214_ = v___x_2211_;
v_isShared_2215_ = v_isSharedCheck_2229_;
goto v_resetjp_2213_;
}
else
{
lean_inc(v_a_2212_);
lean_dec(v___x_2211_);
v___x_2214_ = lean_box(0);
v_isShared_2215_ = v_isSharedCheck_2229_;
goto v_resetjp_2213_;
}
v_resetjp_2213_:
{
lean_object* v_fst_2216_; lean_object* v_snd_2217_; lean_object* v___x_2219_; uint8_t v_isShared_2220_; uint8_t v_isSharedCheck_2228_; 
v_fst_2216_ = lean_ctor_get(v_a_2212_, 0);
v_snd_2217_ = lean_ctor_get(v_a_2212_, 1);
v_isSharedCheck_2228_ = !lean_is_exclusive(v_a_2212_);
if (v_isSharedCheck_2228_ == 0)
{
v___x_2219_ = v_a_2212_;
v_isShared_2220_ = v_isSharedCheck_2228_;
goto v_resetjp_2218_;
}
else
{
lean_inc(v_snd_2217_);
lean_inc(v_fst_2216_);
lean_dec(v_a_2212_);
v___x_2219_ = lean_box(0);
v_isShared_2220_ = v_isSharedCheck_2228_;
goto v_resetjp_2218_;
}
v_resetjp_2218_:
{
lean_object* v___x_2221_; lean_object* v___x_2223_; 
v___x_2221_ = l_Array_append___redArg(v_todo_2203_, v_snd_2217_);
lean_dec(v_snd_2217_);
if (v_isShared_2220_ == 0)
{
lean_ctor_set(v___x_2219_, 1, v___x_2221_);
v___x_2223_ = v___x_2219_;
goto v_reusejp_2222_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v_fst_2216_);
lean_ctor_set(v_reuseFailAlloc_2227_, 1, v___x_2221_);
v___x_2223_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2222_;
}
v_reusejp_2222_:
{
lean_object* v___x_2225_; 
if (v_isShared_2215_ == 0)
{
lean_ctor_set(v___x_2214_, 0, v___x_2223_);
v___x_2225_ = v___x_2214_;
goto v_reusejp_2224_;
}
else
{
lean_object* v_reuseFailAlloc_2226_; 
v_reuseFailAlloc_2226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2226_, 0, v___x_2223_);
v___x_2225_ = v_reuseFailAlloc_2226_;
goto v_reusejp_2224_;
}
v_reusejp_2224_:
{
return v___x_2225_;
}
}
}
}
}
else
{
lean_dec_ref(v_todo_2203_);
return v___x_2211_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_targetPath___lam__0___boxed(lean_object* v_root_2230_, lean_object* v_todo_2231_, lean_object* v_e_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_){
_start:
{
uint8_t v_root_boxed_2238_; lean_object* v_res_2239_; 
v_root_boxed_2238_ = lean_unbox(v_root_2230_);
v_res_2239_ = l_Lean_Meta_LazyDiscrTree_targetPath___lam__0(v_root_boxed_2238_, v_todo_2231_, v_e_2232_, v___y_2233_, v___y_2234_, v___y_2235_, v___y_2236_);
lean_dec(v___y_2236_);
lean_dec_ref(v___y_2235_);
lean_dec(v___y_2234_);
lean_dec_ref(v___y_2233_);
return v_res_2239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_targetPath(lean_object* v_e_2241_, lean_object* v_a_2242_, lean_object* v_a_2243_, lean_object* v_a_2244_, lean_object* v_a_2245_){
_start:
{
lean_object* v_op_2247_; lean_object* v___x_2248_; lean_object* v_todo_2249_; uint8_t v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; 
v_op_2247_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_targetPath___closed__0));
v___x_2248_ = lean_unsigned_to_nat(8u);
v_todo_2249_ = lean_mk_empty_array_with_capacity(v___x_2248_);
v___x_2250_ = 1;
lean_inc_ref(v_todo_2249_);
v___x_2251_ = lean_array_push(v_todo_2249_, v_e_2241_);
v___x_2252_ = l_Lean_Meta_LazyDiscrTree_buildPath(v_op_2247_, v___x_2250_, v___x_2251_, v_todo_2249_, v_a_2242_, v_a_2243_, v_a_2244_, v_a_2245_);
return v___x_2252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_targetPath___boxed(lean_object* v_e_2253_, lean_object* v_a_2254_, lean_object* v_a_2255_, lean_object* v_a_2256_, lean_object* v_a_2257_, lean_object* v_a_2258_){
_start:
{
lean_object* v_res_2259_; 
v_res_2259_ = l_Lean_Meta_LazyDiscrTree_targetPath(v_e_2253_, v_a_2254_, v_a_2255_, v_a_2256_, v_a_2257_);
lean_dec(v_a_2257_);
lean_dec_ref(v_a_2256_);
lean_dec(v_a_2255_);
lean_dec_ref(v_a_2254_);
return v_res_2259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___redArg___lam__0(lean_object* v_tries_2260_, lean_object* v_m_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_){
_start:
{
lean_object* v___x_2267_; lean_object* v___x_2268_; 
v___x_2267_ = lean_st_mk_ref(v_tries_2260_);
lean_inc(v___x_2267_);
v___x_2268_ = lean_apply_6(v_m_2261_, v___x_2267_, v___y_2262_, v___y_2263_, v___y_2264_, v___y_2265_, lean_box(0));
if (lean_obj_tag(v___x_2268_) == 0)
{
lean_object* v_a_2269_; lean_object* v___x_2271_; uint8_t v_isShared_2272_; uint8_t v_isSharedCheck_2278_; 
v_a_2269_ = lean_ctor_get(v___x_2268_, 0);
v_isSharedCheck_2278_ = !lean_is_exclusive(v___x_2268_);
if (v_isSharedCheck_2278_ == 0)
{
v___x_2271_ = v___x_2268_;
v_isShared_2272_ = v_isSharedCheck_2278_;
goto v_resetjp_2270_;
}
else
{
lean_inc(v_a_2269_);
lean_dec(v___x_2268_);
v___x_2271_ = lean_box(0);
v_isShared_2272_ = v_isSharedCheck_2278_;
goto v_resetjp_2270_;
}
v_resetjp_2270_:
{
lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2276_; 
v___x_2273_ = lean_st_ref_get(v___x_2267_);
lean_dec(v___x_2267_);
v___x_2274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2274_, 0, v_a_2269_);
lean_ctor_set(v___x_2274_, 1, v___x_2273_);
if (v_isShared_2272_ == 0)
{
lean_ctor_set(v___x_2271_, 0, v___x_2274_);
v___x_2276_ = v___x_2271_;
goto v_reusejp_2275_;
}
else
{
lean_object* v_reuseFailAlloc_2277_; 
v_reuseFailAlloc_2277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2277_, 0, v___x_2274_);
v___x_2276_ = v_reuseFailAlloc_2277_;
goto v_reusejp_2275_;
}
v_reusejp_2275_:
{
return v___x_2276_;
}
}
}
else
{
lean_object* v_a_2279_; lean_object* v___x_2281_; uint8_t v_isShared_2282_; uint8_t v_isSharedCheck_2286_; 
lean_dec(v___x_2267_);
v_a_2279_ = lean_ctor_get(v___x_2268_, 0);
v_isSharedCheck_2286_ = !lean_is_exclusive(v___x_2268_);
if (v_isSharedCheck_2286_ == 0)
{
v___x_2281_ = v___x_2268_;
v_isShared_2282_ = v_isSharedCheck_2286_;
goto v_resetjp_2280_;
}
else
{
lean_inc(v_a_2279_);
lean_dec(v___x_2268_);
v___x_2281_ = lean_box(0);
v_isShared_2282_ = v_isSharedCheck_2286_;
goto v_resetjp_2280_;
}
v_resetjp_2280_:
{
lean_object* v___x_2284_; 
if (v_isShared_2282_ == 0)
{
v___x_2284_ = v___x_2281_;
goto v_reusejp_2283_;
}
else
{
lean_object* v_reuseFailAlloc_2285_; 
v_reuseFailAlloc_2285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2285_, 0, v_a_2279_);
v___x_2284_ = v_reuseFailAlloc_2285_;
goto v_reusejp_2283_;
}
v_reusejp_2283_:
{
return v___x_2284_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___redArg___lam__0___boxed(lean_object* v_tries_2287_, lean_object* v_m_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_){
_start:
{
lean_object* v_res_2294_; 
v_res_2294_ = l_Lean_Meta_LazyDiscrTree_runMatch___redArg___lam__0(v_tries_2287_, v_m_2288_, v___y_2289_, v___y_2290_, v___y_2291_, v___y_2292_);
return v_res_2294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___redArg(lean_object* v_d_2295_, lean_object* v_m_2296_, lean_object* v_a_2297_, lean_object* v_a_2298_, lean_object* v_a_2299_, lean_object* v_a_2300_){
_start:
{
lean_object* v_tries_2302_; lean_object* v_roots_2303_; lean_object* v___x_2305_; uint8_t v_isShared_2306_; uint8_t v_isSharedCheck_2356_; 
v_tries_2302_ = lean_ctor_get(v_d_2295_, 0);
v_roots_2303_ = lean_ctor_get(v_d_2295_, 1);
v_isSharedCheck_2356_ = !lean_is_exclusive(v_d_2295_);
if (v_isSharedCheck_2356_ == 0)
{
v___x_2305_ = v_d_2295_;
v_isShared_2306_ = v_isSharedCheck_2356_;
goto v_resetjp_2304_;
}
else
{
lean_inc(v_roots_2303_);
lean_inc(v_tries_2302_);
lean_dec(v_d_2295_);
v___x_2305_ = lean_box(0);
v_isShared_2306_ = v_isSharedCheck_2356_;
goto v_resetjp_2304_;
}
v_resetjp_2304_:
{
lean_object* v___y_2308_; lean_object* v___x_2337_; uint8_t v_transparency_2338_; uint8_t v___x_2339_; uint8_t v___x_2340_; 
v___x_2337_ = l_Lean_Meta_Context_config(v_a_2297_);
v_transparency_2338_ = lean_ctor_get_uint8(v___x_2337_, 9);
lean_dec_ref(v___x_2337_);
v___x_2339_ = 2;
v___x_2340_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2338_, v___x_2339_);
if (v___x_2340_ == 0)
{
lean_object* v_keyedConfig_2341_; uint8_t v_trackZetaDelta_2342_; lean_object* v_zetaDeltaSet_2343_; lean_object* v_lctx_2344_; lean_object* v_localInstances_2345_; lean_object* v_defEqCtx_x3f_2346_; lean_object* v_synthPendingDepth_2347_; lean_object* v_customCanUnfoldPredicate_x3f_2348_; uint8_t v_univApprox_2349_; uint8_t v_inTypeClassResolution_2350_; uint8_t v_cacheInferType_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; 
v_keyedConfig_2341_ = lean_ctor_get(v_a_2297_, 0);
v_trackZetaDelta_2342_ = lean_ctor_get_uint8(v_a_2297_, sizeof(void*)*7);
v_zetaDeltaSet_2343_ = lean_ctor_get(v_a_2297_, 1);
v_lctx_2344_ = lean_ctor_get(v_a_2297_, 2);
v_localInstances_2345_ = lean_ctor_get(v_a_2297_, 3);
v_defEqCtx_x3f_2346_ = lean_ctor_get(v_a_2297_, 4);
v_synthPendingDepth_2347_ = lean_ctor_get(v_a_2297_, 5);
v_customCanUnfoldPredicate_x3f_2348_ = lean_ctor_get(v_a_2297_, 6);
v_univApprox_2349_ = lean_ctor_get_uint8(v_a_2297_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2350_ = lean_ctor_get_uint8(v_a_2297_, sizeof(void*)*7 + 2);
v_cacheInferType_2351_ = lean_ctor_get_uint8(v_a_2297_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2341_);
v___x_2352_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2339_, v_keyedConfig_2341_);
lean_inc(v_customCanUnfoldPredicate_x3f_2348_);
lean_inc(v_synthPendingDepth_2347_);
lean_inc(v_defEqCtx_x3f_2346_);
lean_inc_ref(v_localInstances_2345_);
lean_inc_ref(v_lctx_2344_);
lean_inc(v_zetaDeltaSet_2343_);
v___x_2353_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2353_, 0, v___x_2352_);
lean_ctor_set(v___x_2353_, 1, v_zetaDeltaSet_2343_);
lean_ctor_set(v___x_2353_, 2, v_lctx_2344_);
lean_ctor_set(v___x_2353_, 3, v_localInstances_2345_);
lean_ctor_set(v___x_2353_, 4, v_defEqCtx_x3f_2346_);
lean_ctor_set(v___x_2353_, 5, v_synthPendingDepth_2347_);
lean_ctor_set(v___x_2353_, 6, v_customCanUnfoldPredicate_x3f_2348_);
lean_ctor_set_uint8(v___x_2353_, sizeof(void*)*7, v_trackZetaDelta_2342_);
lean_ctor_set_uint8(v___x_2353_, sizeof(void*)*7 + 1, v_univApprox_2349_);
lean_ctor_set_uint8(v___x_2353_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2350_);
lean_ctor_set_uint8(v___x_2353_, sizeof(void*)*7 + 3, v_cacheInferType_2351_);
lean_inc(v_a_2300_);
lean_inc_ref(v_a_2299_);
lean_inc(v_a_2298_);
v___x_2354_ = l_Lean_Meta_LazyDiscrTree_runMatch___redArg___lam__0(v_tries_2302_, v_m_2296_, v___x_2353_, v_a_2298_, v_a_2299_, v_a_2300_);
v___y_2308_ = v___x_2354_;
goto v___jp_2307_;
}
else
{
lean_object* v___x_2355_; 
lean_inc(v_a_2300_);
lean_inc_ref(v_a_2299_);
lean_inc(v_a_2298_);
lean_inc_ref(v_a_2297_);
v___x_2355_ = l_Lean_Meta_LazyDiscrTree_runMatch___redArg___lam__0(v_tries_2302_, v_m_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_);
v___y_2308_ = v___x_2355_;
goto v___jp_2307_;
}
v___jp_2307_:
{
if (lean_obj_tag(v___y_2308_) == 0)
{
lean_object* v_a_2309_; lean_object* v___x_2311_; uint8_t v_isShared_2312_; uint8_t v_isSharedCheck_2328_; 
v_a_2309_ = lean_ctor_get(v___y_2308_, 0);
v_isSharedCheck_2328_ = !lean_is_exclusive(v___y_2308_);
if (v_isSharedCheck_2328_ == 0)
{
v___x_2311_ = v___y_2308_;
v_isShared_2312_ = v_isSharedCheck_2328_;
goto v_resetjp_2310_;
}
else
{
lean_inc(v_a_2309_);
lean_dec(v___y_2308_);
v___x_2311_ = lean_box(0);
v_isShared_2312_ = v_isSharedCheck_2328_;
goto v_resetjp_2310_;
}
v_resetjp_2310_:
{
lean_object* v_fst_2313_; lean_object* v_snd_2314_; lean_object* v___x_2316_; uint8_t v_isShared_2317_; uint8_t v_isSharedCheck_2327_; 
v_fst_2313_ = lean_ctor_get(v_a_2309_, 0);
v_snd_2314_ = lean_ctor_get(v_a_2309_, 1);
v_isSharedCheck_2327_ = !lean_is_exclusive(v_a_2309_);
if (v_isSharedCheck_2327_ == 0)
{
v___x_2316_ = v_a_2309_;
v_isShared_2317_ = v_isSharedCheck_2327_;
goto v_resetjp_2315_;
}
else
{
lean_inc(v_snd_2314_);
lean_inc(v_fst_2313_);
lean_dec(v_a_2309_);
v___x_2316_ = lean_box(0);
v_isShared_2317_ = v_isSharedCheck_2327_;
goto v_resetjp_2315_;
}
v_resetjp_2315_:
{
lean_object* v___x_2319_; 
if (v_isShared_2306_ == 0)
{
lean_ctor_set(v___x_2305_, 0, v_snd_2314_);
v___x_2319_ = v___x_2305_;
goto v_reusejp_2318_;
}
else
{
lean_object* v_reuseFailAlloc_2326_; 
v_reuseFailAlloc_2326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2326_, 0, v_snd_2314_);
lean_ctor_set(v_reuseFailAlloc_2326_, 1, v_roots_2303_);
v___x_2319_ = v_reuseFailAlloc_2326_;
goto v_reusejp_2318_;
}
v_reusejp_2318_:
{
lean_object* v___x_2321_; 
if (v_isShared_2317_ == 0)
{
lean_ctor_set(v___x_2316_, 1, v___x_2319_);
v___x_2321_ = v___x_2316_;
goto v_reusejp_2320_;
}
else
{
lean_object* v_reuseFailAlloc_2325_; 
v_reuseFailAlloc_2325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2325_, 0, v_fst_2313_);
lean_ctor_set(v_reuseFailAlloc_2325_, 1, v___x_2319_);
v___x_2321_ = v_reuseFailAlloc_2325_;
goto v_reusejp_2320_;
}
v_reusejp_2320_:
{
lean_object* v___x_2323_; 
if (v_isShared_2312_ == 0)
{
lean_ctor_set(v___x_2311_, 0, v___x_2321_);
v___x_2323_ = v___x_2311_;
goto v_reusejp_2322_;
}
else
{
lean_object* v_reuseFailAlloc_2324_; 
v_reuseFailAlloc_2324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2324_, 0, v___x_2321_);
v___x_2323_ = v_reuseFailAlloc_2324_;
goto v_reusejp_2322_;
}
v_reusejp_2322_:
{
return v___x_2323_;
}
}
}
}
}
}
else
{
lean_object* v_a_2329_; lean_object* v___x_2331_; uint8_t v_isShared_2332_; uint8_t v_isSharedCheck_2336_; 
lean_del_object(v___x_2305_);
lean_dec_ref(v_roots_2303_);
v_a_2329_ = lean_ctor_get(v___y_2308_, 0);
v_isSharedCheck_2336_ = !lean_is_exclusive(v___y_2308_);
if (v_isSharedCheck_2336_ == 0)
{
v___x_2331_ = v___y_2308_;
v_isShared_2332_ = v_isSharedCheck_2336_;
goto v_resetjp_2330_;
}
else
{
lean_inc(v_a_2329_);
lean_dec(v___y_2308_);
v___x_2331_ = lean_box(0);
v_isShared_2332_ = v_isSharedCheck_2336_;
goto v_resetjp_2330_;
}
v_resetjp_2330_:
{
lean_object* v___x_2334_; 
if (v_isShared_2332_ == 0)
{
v___x_2334_ = v___x_2331_;
goto v_reusejp_2333_;
}
else
{
lean_object* v_reuseFailAlloc_2335_; 
v_reuseFailAlloc_2335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2335_, 0, v_a_2329_);
v___x_2334_ = v_reuseFailAlloc_2335_;
goto v_reusejp_2333_;
}
v_reusejp_2333_:
{
return v___x_2334_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___redArg___boxed(lean_object* v_d_2357_, lean_object* v_m_2358_, lean_object* v_a_2359_, lean_object* v_a_2360_, lean_object* v_a_2361_, lean_object* v_a_2362_, lean_object* v_a_2363_){
_start:
{
lean_object* v_res_2364_; 
v_res_2364_ = l_Lean_Meta_LazyDiscrTree_runMatch___redArg(v_d_2357_, v_m_2358_, v_a_2359_, v_a_2360_, v_a_2361_, v_a_2362_);
lean_dec(v_a_2362_);
lean_dec_ref(v_a_2361_);
lean_dec(v_a_2360_);
lean_dec_ref(v_a_2359_);
return v_res_2364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch(lean_object* v_00_u03b1_2365_, lean_object* v_00_u03b2_2366_, lean_object* v_d_2367_, lean_object* v_m_2368_, lean_object* v_a_2369_, lean_object* v_a_2370_, lean_object* v_a_2371_, lean_object* v_a_2372_){
_start:
{
lean_object* v___x_2374_; 
v___x_2374_ = l_Lean_Meta_LazyDiscrTree_runMatch___redArg(v_d_2367_, v_m_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_);
return v___x_2374_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___boxed(lean_object* v_00_u03b1_2375_, lean_object* v_00_u03b2_2376_, lean_object* v_d_2377_, lean_object* v_m_2378_, lean_object* v_a_2379_, lean_object* v_a_2380_, lean_object* v_a_2381_, lean_object* v_a_2382_, lean_object* v_a_2383_){
_start:
{
lean_object* v_res_2384_; 
v_res_2384_ = l_Lean_Meta_LazyDiscrTree_runMatch(v_00_u03b1_2375_, v_00_u03b2_2376_, v_d_2377_, v_m_2378_, v_a_2379_, v_a_2380_, v_a_2381_, v_a_2382_);
lean_dec(v_a_2382_);
lean_dec_ref(v_a_2381_);
lean_dec(v_a_2380_);
lean_dec_ref(v_a_2379_);
return v_res_2384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_setTrie___redArg(lean_object* v_i_2385_, lean_object* v_v_2386_, lean_object* v_a_2387_){
_start:
{
lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; 
v___x_2389_ = lean_st_ref_take(v_a_2387_);
v___x_2390_ = lean_box(0);
v___x_2391_ = lean_array_set(v___x_2389_, v_i_2385_, v_v_2386_);
v___x_2392_ = lean_st_ref_put(v_a_2387_, v___x_2391_);
v___x_2393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2393_, 0, v___x_2390_);
return v___x_2393_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_setTrie___redArg___boxed(lean_object* v_i_2394_, lean_object* v_v_2395_, lean_object* v_a_2396_, lean_object* v_a_2397_){
_start:
{
lean_object* v_res_2398_; 
v_res_2398_ = l_Lean_Meta_LazyDiscrTree_setTrie___redArg(v_i_2394_, v_v_2395_, v_a_2396_);
lean_dec(v_a_2396_);
lean_dec(v_i_2394_);
return v_res_2398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_setTrie(lean_object* v_00_u03b1_2399_, lean_object* v_i_2400_, lean_object* v_v_2401_, lean_object* v_a_2402_, lean_object* v_a_2403_, lean_object* v_a_2404_, lean_object* v_a_2405_, lean_object* v_a_2406_){
_start:
{
lean_object* v___x_2408_; 
v___x_2408_ = l_Lean_Meta_LazyDiscrTree_setTrie___redArg(v_i_2400_, v_v_2401_, v_a_2402_);
return v___x_2408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_setTrie___boxed(lean_object* v_00_u03b1_2409_, lean_object* v_i_2410_, lean_object* v_v_2411_, lean_object* v_a_2412_, lean_object* v_a_2413_, lean_object* v_a_2414_, lean_object* v_a_2415_, lean_object* v_a_2416_, lean_object* v_a_2417_){
_start:
{
lean_object* v_res_2418_; 
v_res_2418_ = l_Lean_Meta_LazyDiscrTree_setTrie(v_00_u03b1_2409_, v_i_2410_, v_v_2411_, v_a_2412_, v_a_2413_, v_a_2414_, v_a_2415_, v_a_2416_);
lean_dec(v_a_2416_);
lean_dec_ref(v_a_2415_);
lean_dec(v_a_2414_);
lean_dec_ref(v_a_2413_);
lean_dec(v_a_2412_);
lean_dec(v_i_2410_);
return v_res_2418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___redArg___lam__0(lean_object* v_e_2419_, lean_object* v_a_2420_){
_start:
{
lean_object* v_sz_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; 
v_sz_2421_ = lean_array_get_size(v_a_2420_);
v___x_2422_ = lean_unsigned_to_nat(0u);
v___x_2423_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v___x_2424_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2);
v___x_2425_ = lean_unsigned_to_nat(1u);
v___x_2426_ = lean_mk_empty_array_with_capacity(v___x_2425_);
v___x_2427_ = lean_array_push(v___x_2426_, v_e_2419_);
v___x_2428_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2428_, 0, v___x_2423_);
lean_ctor_set(v___x_2428_, 1, v___x_2422_);
lean_ctor_set(v___x_2428_, 2, v___x_2424_);
lean_ctor_set(v___x_2428_, 3, v___x_2427_);
v___x_2429_ = lean_array_push(v_a_2420_, v___x_2428_);
v___x_2430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2430_, 0, v_sz_2421_);
lean_ctor_set(v___x_2430_, 1, v___x_2429_);
return v___x_2430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___redArg(lean_object* v_inst_2431_, lean_object* v_e_2432_){
_start:
{
lean_object* v_modifyGet_2433_; lean_object* v___f_2434_; lean_object* v___x_2435_; 
v_modifyGet_2433_ = lean_ctor_get(v_inst_2431_, 2);
lean_inc(v_modifyGet_2433_);
lean_dec_ref(v_inst_2431_);
v___f_2434_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_newTrie___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2434_, 0, v_e_2432_);
v___x_2435_ = lean_apply_2(v_modifyGet_2433_, lean_box(0), v___f_2434_);
return v___x_2435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie(lean_object* v_m_2436_, lean_object* v_00_u03b1_2437_, lean_object* v_inst_2438_, lean_object* v_inst_2439_, lean_object* v_e_2440_){
_start:
{
lean_object* v___x_2441_; 
v___x_2441_ = l_Lean_Meta_LazyDiscrTree_newTrie___redArg(v_inst_2439_, v_e_2440_);
return v___x_2441_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___boxed(lean_object* v_m_2442_, lean_object* v_00_u03b1_2443_, lean_object* v_inst_2444_, lean_object* v_inst_2445_, lean_object* v_e_2446_){
_start:
{
lean_object* v_res_2447_; 
v_res_2447_ = l_Lean_Meta_LazyDiscrTree_newTrie(v_m_2442_, v_00_u03b1_2443_, v_inst_2444_, v_inst_2445_, v_e_2446_);
lean_dec_ref(v_inst_2444_);
return v_res_2447_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg(lean_object* v_i_2448_, lean_object* v_e_2449_, lean_object* v_a_2450_){
_start:
{
lean_object* v___x_2452_; lean_object* v_fst_2454_; lean_object* v_snd_2455_; lean_object* v___x_2458_; lean_object* v___x_2459_; uint8_t v___x_2460_; 
v___x_2452_ = lean_st_ref_take(v_a_2450_);
v___x_2458_ = lean_box(0);
v___x_2459_ = lean_array_get_size(v___x_2452_);
v___x_2460_ = lean_nat_dec_lt(v_i_2448_, v___x_2459_);
if (v___x_2460_ == 0)
{
lean_dec_ref(v_e_2449_);
v_fst_2454_ = v___x_2458_;
v_snd_2455_ = v___x_2452_;
goto v___jp_2453_;
}
else
{
lean_object* v_v_2461_; lean_object* v_xs_x27_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; 
v_v_2461_ = lean_array_fget(v___x_2452_, v_i_2448_);
v_xs_x27_2462_ = lean_array_fset(v___x_2452_, v_i_2448_, v___x_2458_);
v___x_2463_ = l_Lean_Meta_LazyDiscrTree_Trie_pushPending___redArg(v_v_2461_, v_e_2449_);
v___x_2464_ = lean_array_fset(v_xs_x27_2462_, v_i_2448_, v___x_2463_);
v_fst_2454_ = v___x_2458_;
v_snd_2455_ = v___x_2464_;
goto v___jp_2453_;
}
v___jp_2453_:
{
lean_object* v___x_2456_; lean_object* v___x_2457_; 
v___x_2456_ = lean_st_ref_put(v_a_2450_, v_snd_2455_);
v___x_2457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2457_, 0, v_fst_2454_);
return v___x_2457_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg___boxed(lean_object* v_i_2465_, lean_object* v_e_2466_, lean_object* v_a_2467_, lean_object* v_a_2468_){
_start:
{
lean_object* v_res_2469_; 
v_res_2469_ = l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg(v_i_2465_, v_e_2466_, v_a_2467_);
lean_dec(v_a_2467_);
lean_dec(v_i_2465_);
return v_res_2469_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie(lean_object* v_00_u03b1_2470_, lean_object* v_i_2471_, lean_object* v_e_2472_, lean_object* v_a_2473_, lean_object* v_a_2474_, lean_object* v_a_2475_, lean_object* v_a_2476_, lean_object* v_a_2477_){
_start:
{
lean_object* v___x_2479_; 
v___x_2479_ = l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg(v_i_2471_, v_e_2472_, v_a_2473_);
return v___x_2479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___boxed(lean_object* v_00_u03b1_2480_, lean_object* v_i_2481_, lean_object* v_e_2482_, lean_object* v_a_2483_, lean_object* v_a_2484_, lean_object* v_a_2485_, lean_object* v_a_2486_, lean_object* v_a_2487_, lean_object* v_a_2488_){
_start:
{
lean_object* v_res_2489_; 
v_res_2489_ = l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie(v_00_u03b1_2480_, v_i_2481_, v_e_2482_, v_a_2483_, v_a_2484_, v_a_2485_, v_a_2486_, v_a_2487_);
lean_dec(v_a_2487_);
lean_dec_ref(v_a_2486_);
lean_dec(v_a_2485_);
lean_dec_ref(v_a_2484_);
lean_dec(v_a_2483_);
lean_dec(v_i_2481_);
return v_res_2489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg___lam__0(lean_object* v_x_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_){
_start:
{
lean_object* v___x_2497_; 
lean_inc(v___y_2491_);
v___x_2497_ = lean_apply_6(v_x_2490_, v___y_2491_, v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_, lean_box(0));
return v___x_2497_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg___lam__0___boxed(lean_object* v_x_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_){
_start:
{
lean_object* v_res_2505_; 
v_res_2505_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg___lam__0(v_x_2498_, v___y_2499_, v___y_2500_, v___y_2501_, v___y_2502_, v___y_2503_);
lean_dec(v___y_2499_);
return v_res_2505_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg(lean_object* v_lctx_2506_, lean_object* v_localInsts_2507_, lean_object* v_x_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_){
_start:
{
lean_object* v___f_2515_; lean_object* v___x_2516_; 
lean_inc(v___y_2509_);
v___f_2515_ = lean_alloc_closure((void*)(l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg___lam__0___boxed), 7, 2);
lean_closure_set(v___f_2515_, 0, v_x_2508_);
lean_closure_set(v___f_2515_, 1, v___y_2509_);
v___x_2516_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_2506_, v_localInsts_2507_, v___f_2515_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_);
if (lean_obj_tag(v___x_2516_) == 0)
{
return v___x_2516_;
}
else
{
lean_object* v_a_2517_; lean_object* v___x_2519_; uint8_t v_isShared_2520_; uint8_t v_isSharedCheck_2524_; 
v_a_2517_ = lean_ctor_get(v___x_2516_, 0);
v_isSharedCheck_2524_ = !lean_is_exclusive(v___x_2516_);
if (v_isSharedCheck_2524_ == 0)
{
v___x_2519_ = v___x_2516_;
v_isShared_2520_ = v_isSharedCheck_2524_;
goto v_resetjp_2518_;
}
else
{
lean_inc(v_a_2517_);
lean_dec(v___x_2516_);
v___x_2519_ = lean_box(0);
v_isShared_2520_ = v_isSharedCheck_2524_;
goto v_resetjp_2518_;
}
v_resetjp_2518_:
{
lean_object* v___x_2522_; 
if (v_isShared_2520_ == 0)
{
v___x_2522_ = v___x_2519_;
goto v_reusejp_2521_;
}
else
{
lean_object* v_reuseFailAlloc_2523_; 
v_reuseFailAlloc_2523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2523_, 0, v_a_2517_);
v___x_2522_ = v_reuseFailAlloc_2523_;
goto v_reusejp_2521_;
}
v_reusejp_2521_:
{
return v___x_2522_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg___boxed(lean_object* v_lctx_2525_, lean_object* v_localInsts_2526_, lean_object* v_x_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_){
_start:
{
lean_object* v_res_2534_; 
v_res_2534_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg(v_lctx_2525_, v_localInsts_2526_, v_x_2527_, v___y_2528_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_);
lean_dec(v___y_2532_);
lean_dec_ref(v___y_2531_);
lean_dec(v___y_2530_);
lean_dec_ref(v___y_2529_);
lean_dec(v___y_2528_);
return v_res_2534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0(lean_object* v_00_u03b1_2535_, lean_object* v_00_u03b1_2536_, lean_object* v_lctx_2537_, lean_object* v_localInsts_2538_, lean_object* v_x_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_){
_start:
{
lean_object* v___x_2546_; 
v___x_2546_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg(v_lctx_2537_, v_localInsts_2538_, v_x_2539_, v___y_2540_, v___y_2541_, v___y_2542_, v___y_2543_, v___y_2544_);
return v___x_2546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___boxed(lean_object* v_00_u03b1_2547_, lean_object* v_00_u03b1_2548_, lean_object* v_lctx_2549_, lean_object* v_localInsts_2550_, lean_object* v_x_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_){
_start:
{
lean_object* v_res_2558_; 
v_res_2558_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0(v_00_u03b1_2547_, v_00_u03b1_2548_, v_lctx_2549_, v_localInsts_2550_, v_x_2551_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_, v___y_2556_);
lean_dec(v___y_2556_);
lean_dec_ref(v___y_2555_);
lean_dec(v___y_2554_);
lean_dec_ref(v___y_2553_);
lean_dec(v___y_2552_);
return v_res_2558_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___redArg(lean_object* v_e_2559_, lean_object* v___y_2560_){
_start:
{
lean_object* v___x_2562_; lean_object* v_sz_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; 
v___x_2562_ = lean_st_ref_take(v___y_2560_);
v_sz_2563_ = lean_array_get_size(v___x_2562_);
v___x_2564_ = lean_unsigned_to_nat(0u);
v___x_2565_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v___x_2566_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2);
v___x_2567_ = lean_unsigned_to_nat(1u);
v___x_2568_ = lean_mk_empty_array_with_capacity(v___x_2567_);
v___x_2569_ = lean_array_push(v___x_2568_, v_e_2559_);
v___x_2570_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2570_, 0, v___x_2565_);
lean_ctor_set(v___x_2570_, 1, v___x_2564_);
lean_ctor_set(v___x_2570_, 2, v___x_2566_);
lean_ctor_set(v___x_2570_, 3, v___x_2569_);
v___x_2571_ = lean_array_push(v___x_2562_, v___x_2570_);
v___x_2572_ = lean_st_ref_put(v___y_2560_, v___x_2571_);
v___x_2573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2573_, 0, v_sz_2563_);
return v___x_2573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___redArg___boxed(lean_object* v_e_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_){
_start:
{
lean_object* v_res_2577_; 
v_res_2577_ = l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___redArg(v_e_2574_, v___y_2575_);
lean_dec(v___y_2575_);
return v_res_2577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2(lean_object* v_00_u03b1_2578_, lean_object* v_e_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_){
_start:
{
lean_object* v___x_2586_; 
v___x_2586_ = l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___redArg(v_e_2579_, v___y_2580_);
return v___x_2586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___boxed(lean_object* v_00_u03b1_2587_, lean_object* v_e_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_, lean_object* v___y_2593_, lean_object* v___y_2594_){
_start:
{
lean_object* v_res_2595_; 
v_res_2595_ = l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2(v_00_u03b1_2587_, v_e_2588_, v___y_2589_, v___y_2590_, v___y_2591_, v___y_2592_, v___y_2593_);
lean_dec(v___y_2593_);
lean_dec_ref(v___y_2592_);
lean_dec(v___y_2591_);
lean_dec_ref(v___y_2590_);
lean_dec(v___y_2589_);
return v_res_2595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg___lam__0(uint8_t v___x_2596_, lean_object* v_todo_2597_, lean_object* v_e_2598_, lean_object* v___y_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_){
_start:
{
lean_object* v___x_2605_; 
v___x_2605_ = l_Lean_Meta_LazyDiscrTree_pushArgs(v___x_2596_, v_todo_2597_, v_e_2598_, v___y_2600_, v___y_2601_, v___y_2602_, v___y_2603_);
return v___x_2605_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg___lam__0___boxed(lean_object* v___x_2606_, lean_object* v_todo_2607_, lean_object* v_e_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_){
_start:
{
uint8_t v___x_3860__boxed_2615_; lean_object* v_res_2616_; 
v___x_3860__boxed_2615_ = lean_unbox(v___x_2606_);
v_res_2616_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg___lam__0(v___x_3860__boxed_2615_, v_todo_2607_, v_e_2608_, v___y_2609_, v___y_2610_, v___y_2611_, v___y_2612_, v___y_2613_);
lean_dec(v___y_2613_);
lean_dec_ref(v___y_2612_);
lean_dec(v___y_2611_);
lean_dec_ref(v___y_2610_);
lean_dec(v___y_2609_);
return v_res_2616_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__6___redArg(lean_object* v_a_2617_, lean_object* v_b_2618_, lean_object* v_x_2619_){
_start:
{
if (lean_obj_tag(v_x_2619_) == 0)
{
lean_dec(v_b_2618_);
lean_dec(v_a_2617_);
return v_x_2619_;
}
else
{
lean_object* v_key_2620_; lean_object* v_value_2621_; lean_object* v_tail_2622_; lean_object* v___x_2624_; uint8_t v_isShared_2625_; uint8_t v_isSharedCheck_2634_; 
v_key_2620_ = lean_ctor_get(v_x_2619_, 0);
v_value_2621_ = lean_ctor_get(v_x_2619_, 1);
v_tail_2622_ = lean_ctor_get(v_x_2619_, 2);
v_isSharedCheck_2634_ = !lean_is_exclusive(v_x_2619_);
if (v_isSharedCheck_2634_ == 0)
{
v___x_2624_ = v_x_2619_;
v_isShared_2625_ = v_isSharedCheck_2634_;
goto v_resetjp_2623_;
}
else
{
lean_inc(v_tail_2622_);
lean_inc(v_value_2621_);
lean_inc(v_key_2620_);
lean_dec(v_x_2619_);
v___x_2624_ = lean_box(0);
v_isShared_2625_ = v_isSharedCheck_2634_;
goto v_resetjp_2623_;
}
v_resetjp_2623_:
{
uint8_t v___x_2626_; 
v___x_2626_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_key_2620_, v_a_2617_);
if (v___x_2626_ == 0)
{
lean_object* v___x_2627_; lean_object* v___x_2629_; 
v___x_2627_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__6___redArg(v_a_2617_, v_b_2618_, v_tail_2622_);
if (v_isShared_2625_ == 0)
{
lean_ctor_set(v___x_2624_, 2, v___x_2627_);
v___x_2629_ = v___x_2624_;
goto v_reusejp_2628_;
}
else
{
lean_object* v_reuseFailAlloc_2630_; 
v_reuseFailAlloc_2630_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2630_, 0, v_key_2620_);
lean_ctor_set(v_reuseFailAlloc_2630_, 1, v_value_2621_);
lean_ctor_set(v_reuseFailAlloc_2630_, 2, v___x_2627_);
v___x_2629_ = v_reuseFailAlloc_2630_;
goto v_reusejp_2628_;
}
v_reusejp_2628_:
{
return v___x_2629_;
}
}
else
{
lean_object* v___x_2632_; 
lean_dec(v_value_2621_);
lean_dec(v_key_2620_);
if (v_isShared_2625_ == 0)
{
lean_ctor_set(v___x_2624_, 1, v_b_2618_);
lean_ctor_set(v___x_2624_, 0, v_a_2617_);
v___x_2632_ = v___x_2624_;
goto v_reusejp_2631_;
}
else
{
lean_object* v_reuseFailAlloc_2633_; 
v_reuseFailAlloc_2633_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2633_, 0, v_a_2617_);
lean_ctor_set(v_reuseFailAlloc_2633_, 1, v_b_2618_);
lean_ctor_set(v_reuseFailAlloc_2633_, 2, v_tail_2622_);
v___x_2632_ = v_reuseFailAlloc_2633_;
goto v_reusejp_2631_;
}
v_reusejp_2631_:
{
return v___x_2632_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___redArg(lean_object* v_a_2635_, lean_object* v_x_2636_){
_start:
{
if (lean_obj_tag(v_x_2636_) == 0)
{
uint8_t v___x_2637_; 
v___x_2637_ = 0;
return v___x_2637_;
}
else
{
lean_object* v_key_2638_; lean_object* v_tail_2639_; uint8_t v___x_2640_; 
v_key_2638_ = lean_ctor_get(v_x_2636_, 0);
v_tail_2639_ = lean_ctor_get(v_x_2636_, 2);
v___x_2640_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_key_2638_, v_a_2635_);
if (v___x_2640_ == 0)
{
v_x_2636_ = v_tail_2639_;
goto _start;
}
else
{
return v___x_2640_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___redArg___boxed(lean_object* v_a_2642_, lean_object* v_x_2643_){
_start:
{
uint8_t v_res_2644_; lean_object* v_r_2645_; 
v_res_2644_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___redArg(v_a_2642_, v_x_2643_);
lean_dec(v_x_2643_);
lean_dec(v_a_2642_);
v_r_2645_ = lean_box(v_res_2644_);
return v_r_2645_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6_spec__7___redArg(lean_object* v_x_2646_, lean_object* v_x_2647_){
_start:
{
if (lean_obj_tag(v_x_2647_) == 0)
{
return v_x_2646_;
}
else
{
lean_object* v_key_2648_; lean_object* v_value_2649_; lean_object* v_tail_2650_; lean_object* v___x_2652_; uint8_t v_isShared_2653_; uint8_t v_isSharedCheck_2673_; 
v_key_2648_ = lean_ctor_get(v_x_2647_, 0);
v_value_2649_ = lean_ctor_get(v_x_2647_, 1);
v_tail_2650_ = lean_ctor_get(v_x_2647_, 2);
v_isSharedCheck_2673_ = !lean_is_exclusive(v_x_2647_);
if (v_isSharedCheck_2673_ == 0)
{
v___x_2652_ = v_x_2647_;
v_isShared_2653_ = v_isSharedCheck_2673_;
goto v_resetjp_2651_;
}
else
{
lean_inc(v_tail_2650_);
lean_inc(v_value_2649_);
lean_inc(v_key_2648_);
lean_dec(v_x_2647_);
v___x_2652_ = lean_box(0);
v_isShared_2653_ = v_isSharedCheck_2673_;
goto v_resetjp_2651_;
}
v_resetjp_2651_:
{
lean_object* v___x_2654_; uint64_t v___x_2655_; uint64_t v___x_2656_; uint64_t v___x_2657_; uint64_t v_fold_2658_; uint64_t v___x_2659_; uint64_t v___x_2660_; uint64_t v___x_2661_; size_t v___x_2662_; size_t v___x_2663_; size_t v___x_2664_; size_t v___x_2665_; size_t v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2669_; 
v___x_2654_ = lean_array_get_size(v_x_2646_);
v___x_2655_ = l_Lean_Meta_LazyDiscrTree_Key_hash(v_key_2648_);
v___x_2656_ = 32ULL;
v___x_2657_ = lean_uint64_shift_right(v___x_2655_, v___x_2656_);
v_fold_2658_ = lean_uint64_xor(v___x_2655_, v___x_2657_);
v___x_2659_ = 16ULL;
v___x_2660_ = lean_uint64_shift_right(v_fold_2658_, v___x_2659_);
v___x_2661_ = lean_uint64_xor(v_fold_2658_, v___x_2660_);
v___x_2662_ = lean_uint64_to_usize(v___x_2661_);
v___x_2663_ = lean_usize_of_nat(v___x_2654_);
v___x_2664_ = ((size_t)1ULL);
v___x_2665_ = lean_usize_sub(v___x_2663_, v___x_2664_);
v___x_2666_ = lean_usize_land(v___x_2662_, v___x_2665_);
v___x_2667_ = lean_array_uget_borrowed(v_x_2646_, v___x_2666_);
lean_inc(v___x_2667_);
if (v_isShared_2653_ == 0)
{
lean_ctor_set(v___x_2652_, 2, v___x_2667_);
v___x_2669_ = v___x_2652_;
goto v_reusejp_2668_;
}
else
{
lean_object* v_reuseFailAlloc_2672_; 
v_reuseFailAlloc_2672_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2672_, 0, v_key_2648_);
lean_ctor_set(v_reuseFailAlloc_2672_, 1, v_value_2649_);
lean_ctor_set(v_reuseFailAlloc_2672_, 2, v___x_2667_);
v___x_2669_ = v_reuseFailAlloc_2672_;
goto v_reusejp_2668_;
}
v_reusejp_2668_:
{
lean_object* v___x_2670_; 
v___x_2670_ = lean_array_uset(v_x_2646_, v___x_2666_, v___x_2669_);
v_x_2646_ = v___x_2670_;
v_x_2647_ = v_tail_2650_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6___redArg(lean_object* v_i_2674_, lean_object* v_source_2675_, lean_object* v_target_2676_){
_start:
{
lean_object* v___x_2677_; uint8_t v___x_2678_; 
v___x_2677_ = lean_array_get_size(v_source_2675_);
v___x_2678_ = lean_nat_dec_lt(v_i_2674_, v___x_2677_);
if (v___x_2678_ == 0)
{
lean_dec_ref(v_source_2675_);
lean_dec(v_i_2674_);
return v_target_2676_;
}
else
{
lean_object* v_es_2679_; lean_object* v___x_2680_; lean_object* v_source_2681_; lean_object* v_target_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; 
v_es_2679_ = lean_array_fget(v_source_2675_, v_i_2674_);
v___x_2680_ = lean_box(0);
v_source_2681_ = lean_array_fset(v_source_2675_, v_i_2674_, v___x_2680_);
v_target_2682_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6_spec__7___redArg(v_target_2676_, v_es_2679_);
v___x_2683_ = lean_unsigned_to_nat(1u);
v___x_2684_ = lean_nat_add(v_i_2674_, v___x_2683_);
lean_dec(v_i_2674_);
v_i_2674_ = v___x_2684_;
v_source_2675_ = v_source_2681_;
v_target_2676_ = v_target_2682_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5___redArg(lean_object* v_data_2686_){
_start:
{
lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v_nbuckets_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; 
v___x_2687_ = lean_array_get_size(v_data_2686_);
v___x_2688_ = lean_unsigned_to_nat(2u);
v_nbuckets_2689_ = lean_nat_mul(v___x_2687_, v___x_2688_);
v___x_2690_ = lean_unsigned_to_nat(0u);
v___x_2691_ = lean_box(0);
v___x_2692_ = lean_mk_array(v_nbuckets_2689_, v___x_2691_);
v___x_2693_ = lean_array_propagate_mark(v_data_2686_, v___x_2692_);
v___x_2694_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6___redArg(v___x_2690_, v_data_2686_, v___x_2693_);
return v___x_2694_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3___redArg(lean_object* v_m_2695_, lean_object* v_a_2696_, lean_object* v_b_2697_){
_start:
{
lean_object* v_size_2698_; lean_object* v_buckets_2699_; lean_object* v___x_2701_; uint8_t v_isShared_2702_; uint8_t v_isSharedCheck_2742_; 
v_size_2698_ = lean_ctor_get(v_m_2695_, 0);
v_buckets_2699_ = lean_ctor_get(v_m_2695_, 1);
v_isSharedCheck_2742_ = !lean_is_exclusive(v_m_2695_);
if (v_isSharedCheck_2742_ == 0)
{
v___x_2701_ = v_m_2695_;
v_isShared_2702_ = v_isSharedCheck_2742_;
goto v_resetjp_2700_;
}
else
{
lean_inc(v_buckets_2699_);
lean_inc(v_size_2698_);
lean_dec(v_m_2695_);
v___x_2701_ = lean_box(0);
v_isShared_2702_ = v_isSharedCheck_2742_;
goto v_resetjp_2700_;
}
v_resetjp_2700_:
{
lean_object* v___x_2703_; uint64_t v___x_2704_; uint64_t v___x_2705_; uint64_t v___x_2706_; uint64_t v_fold_2707_; uint64_t v___x_2708_; uint64_t v___x_2709_; uint64_t v___x_2710_; size_t v___x_2711_; size_t v___x_2712_; size_t v___x_2713_; size_t v___x_2714_; size_t v___x_2715_; lean_object* v_bkt_2716_; uint8_t v___x_2717_; 
v___x_2703_ = lean_array_get_size(v_buckets_2699_);
v___x_2704_ = l_Lean_Meta_LazyDiscrTree_Key_hash(v_a_2696_);
v___x_2705_ = 32ULL;
v___x_2706_ = lean_uint64_shift_right(v___x_2704_, v___x_2705_);
v_fold_2707_ = lean_uint64_xor(v___x_2704_, v___x_2706_);
v___x_2708_ = 16ULL;
v___x_2709_ = lean_uint64_shift_right(v_fold_2707_, v___x_2708_);
v___x_2710_ = lean_uint64_xor(v_fold_2707_, v___x_2709_);
v___x_2711_ = lean_uint64_to_usize(v___x_2710_);
v___x_2712_ = lean_usize_of_nat(v___x_2703_);
v___x_2713_ = ((size_t)1ULL);
v___x_2714_ = lean_usize_sub(v___x_2712_, v___x_2713_);
v___x_2715_ = lean_usize_land(v___x_2711_, v___x_2714_);
v_bkt_2716_ = lean_array_uget_borrowed(v_buckets_2699_, v___x_2715_);
v___x_2717_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___redArg(v_a_2696_, v_bkt_2716_);
if (v___x_2717_ == 0)
{
lean_object* v___x_2718_; lean_object* v_size_x27_2719_; lean_object* v___x_2720_; lean_object* v_buckets_x27_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; uint8_t v___x_2727_; 
v___x_2718_ = lean_unsigned_to_nat(1u);
v_size_x27_2719_ = lean_nat_add(v_size_2698_, v___x_2718_);
lean_dec(v_size_2698_);
lean_inc(v_bkt_2716_);
v___x_2720_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2720_, 0, v_a_2696_);
lean_ctor_set(v___x_2720_, 1, v_b_2697_);
lean_ctor_set(v___x_2720_, 2, v_bkt_2716_);
v_buckets_x27_2721_ = lean_array_uset(v_buckets_2699_, v___x_2715_, v___x_2720_);
v___x_2722_ = lean_unsigned_to_nat(4u);
v___x_2723_ = lean_nat_mul(v_size_x27_2719_, v___x_2722_);
v___x_2724_ = lean_unsigned_to_nat(3u);
v___x_2725_ = lean_nat_div(v___x_2723_, v___x_2724_);
lean_dec(v___x_2723_);
v___x_2726_ = lean_array_get_size(v_buckets_x27_2721_);
v___x_2727_ = lean_nat_dec_le(v___x_2725_, v___x_2726_);
lean_dec(v___x_2725_);
if (v___x_2727_ == 0)
{
lean_object* v_val_2728_; lean_object* v___x_2730_; 
v_val_2728_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5___redArg(v_buckets_x27_2721_);
if (v_isShared_2702_ == 0)
{
lean_ctor_set(v___x_2701_, 1, v_val_2728_);
lean_ctor_set(v___x_2701_, 0, v_size_x27_2719_);
v___x_2730_ = v___x_2701_;
goto v_reusejp_2729_;
}
else
{
lean_object* v_reuseFailAlloc_2731_; 
v_reuseFailAlloc_2731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2731_, 0, v_size_x27_2719_);
lean_ctor_set(v_reuseFailAlloc_2731_, 1, v_val_2728_);
v___x_2730_ = v_reuseFailAlloc_2731_;
goto v_reusejp_2729_;
}
v_reusejp_2729_:
{
return v___x_2730_;
}
}
else
{
lean_object* v___x_2733_; 
if (v_isShared_2702_ == 0)
{
lean_ctor_set(v___x_2701_, 1, v_buckets_x27_2721_);
lean_ctor_set(v___x_2701_, 0, v_size_x27_2719_);
v___x_2733_ = v___x_2701_;
goto v_reusejp_2732_;
}
else
{
lean_object* v_reuseFailAlloc_2734_; 
v_reuseFailAlloc_2734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2734_, 0, v_size_x27_2719_);
lean_ctor_set(v_reuseFailAlloc_2734_, 1, v_buckets_x27_2721_);
v___x_2733_ = v_reuseFailAlloc_2734_;
goto v_reusejp_2732_;
}
v_reusejp_2732_:
{
return v___x_2733_;
}
}
}
else
{
lean_object* v___x_2735_; lean_object* v_buckets_x27_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2740_; 
lean_inc(v_bkt_2716_);
v___x_2735_ = lean_box(0);
v_buckets_x27_2736_ = lean_array_uset(v_buckets_2699_, v___x_2715_, v___x_2735_);
v___x_2737_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__6___redArg(v_a_2696_, v_b_2697_, v_bkt_2716_);
v___x_2738_ = lean_array_uset(v_buckets_x27_2736_, v___x_2715_, v___x_2737_);
if (v_isShared_2702_ == 0)
{
lean_ctor_set(v___x_2701_, 1, v___x_2738_);
v___x_2740_ = v___x_2701_;
goto v_reusejp_2739_;
}
else
{
lean_object* v_reuseFailAlloc_2741_; 
v_reuseFailAlloc_2741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2741_, 0, v_size_2698_);
lean_ctor_set(v_reuseFailAlloc_2741_, 1, v___x_2738_);
v___x_2740_ = v_reuseFailAlloc_2741_;
goto v_reusejp_2739_;
}
v_reusejp_2739_:
{
return v___x_2740_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___redArg(lean_object* v_a_2743_, lean_object* v_x_2744_){
_start:
{
if (lean_obj_tag(v_x_2744_) == 0)
{
lean_object* v___x_2745_; 
v___x_2745_ = lean_box(0);
return v___x_2745_;
}
else
{
lean_object* v_key_2746_; lean_object* v_value_2747_; lean_object* v_tail_2748_; uint8_t v___x_2749_; 
v_key_2746_ = lean_ctor_get(v_x_2744_, 0);
v_value_2747_ = lean_ctor_get(v_x_2744_, 1);
v_tail_2748_ = lean_ctor_get(v_x_2744_, 2);
v___x_2749_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_key_2746_, v_a_2743_);
if (v___x_2749_ == 0)
{
v_x_2744_ = v_tail_2748_;
goto _start;
}
else
{
lean_object* v___x_2751_; 
lean_inc(v_value_2747_);
v___x_2751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2751_, 0, v_value_2747_);
return v___x_2751_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___redArg___boxed(lean_object* v_a_2752_, lean_object* v_x_2753_){
_start:
{
lean_object* v_res_2754_; 
v_res_2754_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___redArg(v_a_2752_, v_x_2753_);
lean_dec(v_x_2753_);
lean_dec(v_a_2752_);
return v_res_2754_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(lean_object* v_m_2755_, lean_object* v_a_2756_){
_start:
{
lean_object* v_buckets_2757_; lean_object* v___x_2758_; uint64_t v___x_2759_; uint64_t v___x_2760_; uint64_t v___x_2761_; uint64_t v_fold_2762_; uint64_t v___x_2763_; uint64_t v___x_2764_; uint64_t v___x_2765_; size_t v___x_2766_; size_t v___x_2767_; size_t v___x_2768_; size_t v___x_2769_; size_t v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; 
v_buckets_2757_ = lean_ctor_get(v_m_2755_, 1);
v___x_2758_ = lean_array_get_size(v_buckets_2757_);
v___x_2759_ = l_Lean_Meta_LazyDiscrTree_Key_hash(v_a_2756_);
v___x_2760_ = 32ULL;
v___x_2761_ = lean_uint64_shift_right(v___x_2759_, v___x_2760_);
v_fold_2762_ = lean_uint64_xor(v___x_2759_, v___x_2761_);
v___x_2763_ = 16ULL;
v___x_2764_ = lean_uint64_shift_right(v_fold_2762_, v___x_2763_);
v___x_2765_ = lean_uint64_xor(v_fold_2762_, v___x_2764_);
v___x_2766_ = lean_uint64_to_usize(v___x_2765_);
v___x_2767_ = lean_usize_of_nat(v___x_2758_);
v___x_2768_ = ((size_t)1ULL);
v___x_2769_ = lean_usize_sub(v___x_2767_, v___x_2768_);
v___x_2770_ = lean_usize_land(v___x_2766_, v___x_2769_);
v___x_2771_ = lean_array_uget_borrowed(v_buckets_2757_, v___x_2770_);
v___x_2772_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___redArg(v_a_2756_, v___x_2771_);
return v___x_2772_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg___boxed(lean_object* v_m_2773_, lean_object* v_a_2774_){
_start:
{
lean_object* v_res_2775_; 
v_res_2775_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(v_m_2773_, v_a_2774_);
lean_dec(v_a_2774_);
lean_dec_ref(v_m_2773_);
return v_res_2775_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg(lean_object* v_p_2776_, lean_object* v_entry_2777_, lean_object* v_a_2778_, lean_object* v_a_2779_, lean_object* v_a_2780_, lean_object* v_a_2781_, lean_object* v_a_2782_){
_start:
{
lean_object* v_snd_2784_; lean_object* v_snd_2785_; lean_object* v_fst_2786_; lean_object* v_fst_2787_; lean_object* v_snd_2788_; lean_object* v_fst_2789_; lean_object* v_fst_2790_; lean_object* v_snd_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; uint8_t v___x_2794_; 
v_snd_2784_ = lean_ctor_get(v_p_2776_, 1);
v_snd_2785_ = lean_ctor_get(v_entry_2777_, 1);
lean_inc(v_snd_2785_);
v_fst_2786_ = lean_ctor_get(v_p_2776_, 0);
v_fst_2787_ = lean_ctor_get(v_snd_2784_, 0);
v_snd_2788_ = lean_ctor_get(v_snd_2784_, 1);
v_fst_2789_ = lean_ctor_get(v_entry_2777_, 0);
lean_inc(v_fst_2789_);
lean_dec_ref(v_entry_2777_);
v_fst_2790_ = lean_ctor_get(v_snd_2785_, 0);
lean_inc(v_fst_2790_);
v_snd_2791_ = lean_ctor_get(v_snd_2785_, 1);
v___x_2792_ = lean_array_get_size(v_fst_2789_);
v___x_2793_ = lean_unsigned_to_nat(0u);
v___x_2794_ = lean_nat_dec_eq(v___x_2792_, v___x_2793_);
if (v___x_2794_ == 0)
{
lean_object* v_fst_2795_; lean_object* v_snd_2796_; lean_object* v___x_2798_; uint8_t v_isShared_2799_; uint8_t v_isSharedCheck_2901_; 
v_fst_2795_ = lean_ctor_get(v_fst_2790_, 0);
v_snd_2796_ = lean_ctor_get(v_fst_2790_, 1);
v_isSharedCheck_2901_ = !lean_is_exclusive(v_fst_2790_);
if (v_isSharedCheck_2901_ == 0)
{
v___x_2798_ = v_fst_2790_;
v_isShared_2799_ = v_isSharedCheck_2901_;
goto v_resetjp_2797_;
}
else
{
lean_inc(v_snd_2796_);
lean_inc(v_fst_2795_);
lean_dec(v_fst_2790_);
v___x_2798_ = lean_box(0);
v_isShared_2799_ = v_isSharedCheck_2901_;
goto v_resetjp_2797_;
}
v_resetjp_2797_:
{
lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v_e_2803_; lean_object* v_todo_2804_; lean_object* v___x_2805_; lean_object* v___f_2806_; lean_object* v___x_2807_; 
v___x_2800_ = l_Lean_instInhabitedExpr;
v___x_2801_ = lean_unsigned_to_nat(1u);
v___x_2802_ = lean_nat_sub(v___x_2792_, v___x_2801_);
v_e_2803_ = lean_array_get(v___x_2800_, v_fst_2789_, v___x_2802_);
lean_dec(v___x_2802_);
v_todo_2804_ = lean_array_pop(v_fst_2789_);
v___x_2805_ = lean_box(v___x_2794_);
v___f_2806_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_2806_, 0, v___x_2805_);
lean_closure_set(v___f_2806_, 1, v_todo_2804_);
lean_closure_set(v___f_2806_, 2, v_e_2803_);
v___x_2807_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg(v_fst_2795_, v_snd_2796_, v___f_2806_, v_a_2778_, v_a_2779_, v_a_2780_, v_a_2781_, v_a_2782_);
if (lean_obj_tag(v___x_2807_) == 0)
{
lean_object* v_a_2808_; lean_object* v_fst_2809_; lean_object* v_snd_2810_; lean_object* v___x_2812_; uint8_t v_isShared_2813_; uint8_t v_isSharedCheck_2892_; 
v_a_2808_ = lean_ctor_get(v___x_2807_, 0);
lean_inc(v_a_2808_);
lean_dec_ref_known(v___x_2807_, 1);
v_fst_2809_ = lean_ctor_get(v_a_2808_, 0);
v_snd_2810_ = lean_ctor_get(v_a_2808_, 1);
v_isSharedCheck_2892_ = !lean_is_exclusive(v_a_2808_);
if (v_isSharedCheck_2892_ == 0)
{
v___x_2812_ = v_a_2808_;
v_isShared_2813_ = v_isSharedCheck_2892_;
goto v_resetjp_2811_;
}
else
{
lean_inc(v_snd_2810_);
lean_inc(v_fst_2809_);
lean_dec(v_a_2808_);
v___x_2812_ = lean_box(0);
v_isShared_2813_ = v_isSharedCheck_2892_;
goto v_resetjp_2811_;
}
v_resetjp_2811_:
{
lean_object* v___x_2814_; uint8_t v___x_2815_; 
v___x_2814_ = lean_box(3);
v___x_2815_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_fst_2809_, v___x_2814_);
if (v___x_2815_ == 0)
{
lean_object* v___x_2816_; 
v___x_2816_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(v_snd_2788_, v_fst_2809_);
if (lean_obj_tag(v___x_2816_) == 0)
{
lean_object* v___x_2818_; 
lean_inc(v_snd_2788_);
lean_inc(v_fst_2787_);
lean_inc(v_fst_2786_);
lean_dec_ref(v_p_2776_);
lean_inc(v_snd_2785_);
if (v_isShared_2813_ == 0)
{
lean_ctor_set(v___x_2812_, 1, v_snd_2785_);
lean_ctor_set(v___x_2812_, 0, v_snd_2810_);
v___x_2818_ = v___x_2812_;
goto v_reusejp_2817_;
}
else
{
lean_object* v_reuseFailAlloc_2841_; 
v_reuseFailAlloc_2841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2841_, 0, v_snd_2810_);
lean_ctor_set(v_reuseFailAlloc_2841_, 1, v_snd_2785_);
v___x_2818_ = v_reuseFailAlloc_2841_;
goto v_reusejp_2817_;
}
v_reusejp_2817_:
{
lean_object* v___x_2820_; uint8_t v_isShared_2821_; uint8_t v_isSharedCheck_2838_; 
v_isSharedCheck_2838_ = !lean_is_exclusive(v_snd_2785_);
if (v_isSharedCheck_2838_ == 0)
{
lean_object* v_unused_2839_; lean_object* v_unused_2840_; 
v_unused_2839_ = lean_ctor_get(v_snd_2785_, 1);
lean_dec(v_unused_2839_);
v_unused_2840_ = lean_ctor_get(v_snd_2785_, 0);
lean_dec(v_unused_2840_);
v___x_2820_ = v_snd_2785_;
v_isShared_2821_ = v_isSharedCheck_2838_;
goto v_resetjp_2819_;
}
else
{
lean_dec(v_snd_2785_);
v___x_2820_ = lean_box(0);
v_isShared_2821_ = v_isSharedCheck_2838_;
goto v_resetjp_2819_;
}
v_resetjp_2819_:
{
lean_object* v___x_2822_; lean_object* v_a_2823_; lean_object* v___x_2825_; uint8_t v_isShared_2826_; uint8_t v_isSharedCheck_2837_; 
v___x_2822_ = l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___redArg(v___x_2818_, v_a_2778_);
v_a_2823_ = lean_ctor_get(v___x_2822_, 0);
v_isSharedCheck_2837_ = !lean_is_exclusive(v___x_2822_);
if (v_isSharedCheck_2837_ == 0)
{
v___x_2825_ = v___x_2822_;
v_isShared_2826_ = v_isSharedCheck_2837_;
goto v_resetjp_2824_;
}
else
{
lean_inc(v_a_2823_);
lean_dec(v___x_2822_);
v___x_2825_ = lean_box(0);
v_isShared_2826_ = v_isSharedCheck_2837_;
goto v_resetjp_2824_;
}
v_resetjp_2824_:
{
lean_object* v___x_2827_; lean_object* v___x_2829_; 
v___x_2827_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3___redArg(v_snd_2788_, v_fst_2809_, v_a_2823_);
if (v_isShared_2799_ == 0)
{
lean_ctor_set(v___x_2798_, 1, v___x_2827_);
lean_ctor_set(v___x_2798_, 0, v_fst_2787_);
v___x_2829_ = v___x_2798_;
goto v_reusejp_2828_;
}
else
{
lean_object* v_reuseFailAlloc_2836_; 
v_reuseFailAlloc_2836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2836_, 0, v_fst_2787_);
lean_ctor_set(v_reuseFailAlloc_2836_, 1, v___x_2827_);
v___x_2829_ = v_reuseFailAlloc_2836_;
goto v_reusejp_2828_;
}
v_reusejp_2828_:
{
lean_object* v___x_2831_; 
if (v_isShared_2821_ == 0)
{
lean_ctor_set(v___x_2820_, 1, v___x_2829_);
lean_ctor_set(v___x_2820_, 0, v_fst_2786_);
v___x_2831_ = v___x_2820_;
goto v_reusejp_2830_;
}
else
{
lean_object* v_reuseFailAlloc_2835_; 
v_reuseFailAlloc_2835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2835_, 0, v_fst_2786_);
lean_ctor_set(v_reuseFailAlloc_2835_, 1, v___x_2829_);
v___x_2831_ = v_reuseFailAlloc_2835_;
goto v_reusejp_2830_;
}
v_reusejp_2830_:
{
lean_object* v___x_2833_; 
if (v_isShared_2826_ == 0)
{
lean_ctor_set(v___x_2825_, 0, v___x_2831_);
v___x_2833_ = v___x_2825_;
goto v_reusejp_2832_;
}
else
{
lean_object* v_reuseFailAlloc_2834_; 
v_reuseFailAlloc_2834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2834_, 0, v___x_2831_);
v___x_2833_ = v_reuseFailAlloc_2834_;
goto v_reusejp_2832_;
}
v_reusejp_2832_:
{
return v___x_2833_;
}
}
}
}
}
}
}
else
{
lean_object* v_val_2842_; lean_object* v___x_2844_; 
lean_dec(v_fst_2809_);
lean_del_object(v___x_2798_);
v_val_2842_ = lean_ctor_get(v___x_2816_, 0);
lean_inc(v_val_2842_);
lean_dec_ref_known(v___x_2816_, 1);
if (v_isShared_2813_ == 0)
{
lean_ctor_set(v___x_2812_, 1, v_snd_2785_);
lean_ctor_set(v___x_2812_, 0, v_snd_2810_);
v___x_2844_ = v___x_2812_;
goto v_reusejp_2843_;
}
else
{
lean_object* v_reuseFailAlloc_2854_; 
v_reuseFailAlloc_2854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2854_, 0, v_snd_2810_);
lean_ctor_set(v_reuseFailAlloc_2854_, 1, v_snd_2785_);
v___x_2844_ = v_reuseFailAlloc_2854_;
goto v_reusejp_2843_;
}
v_reusejp_2843_:
{
lean_object* v___x_2845_; lean_object* v___x_2847_; uint8_t v_isShared_2848_; uint8_t v_isSharedCheck_2852_; 
v___x_2845_ = l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg(v_val_2842_, v___x_2844_, v_a_2778_);
lean_dec(v_val_2842_);
v_isSharedCheck_2852_ = !lean_is_exclusive(v___x_2845_);
if (v_isSharedCheck_2852_ == 0)
{
lean_object* v_unused_2853_; 
v_unused_2853_ = lean_ctor_get(v___x_2845_, 0);
lean_dec(v_unused_2853_);
v___x_2847_ = v___x_2845_;
v_isShared_2848_ = v_isSharedCheck_2852_;
goto v_resetjp_2846_;
}
else
{
lean_dec(v___x_2845_);
v___x_2847_ = lean_box(0);
v_isShared_2848_ = v_isSharedCheck_2852_;
goto v_resetjp_2846_;
}
v_resetjp_2846_:
{
lean_object* v___x_2850_; 
if (v_isShared_2848_ == 0)
{
lean_ctor_set(v___x_2847_, 0, v_p_2776_);
v___x_2850_ = v___x_2847_;
goto v_reusejp_2849_;
}
else
{
lean_object* v_reuseFailAlloc_2851_; 
v_reuseFailAlloc_2851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2851_, 0, v_p_2776_);
v___x_2850_ = v_reuseFailAlloc_2851_;
goto v_reusejp_2849_;
}
v_reusejp_2849_:
{
return v___x_2850_;
}
}
}
}
}
else
{
uint8_t v___x_2855_; 
lean_dec(v_fst_2809_);
v___x_2855_ = lean_nat_dec_eq(v_fst_2787_, v___x_2793_);
if (v___x_2855_ == 0)
{
lean_object* v___x_2857_; 
lean_del_object(v___x_2798_);
if (v_isShared_2813_ == 0)
{
lean_ctor_set(v___x_2812_, 1, v_snd_2785_);
lean_ctor_set(v___x_2812_, 0, v_snd_2810_);
v___x_2857_ = v___x_2812_;
goto v_reusejp_2856_;
}
else
{
lean_object* v_reuseFailAlloc_2867_; 
v_reuseFailAlloc_2867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2867_, 0, v_snd_2810_);
lean_ctor_set(v_reuseFailAlloc_2867_, 1, v_snd_2785_);
v___x_2857_ = v_reuseFailAlloc_2867_;
goto v_reusejp_2856_;
}
v_reusejp_2856_:
{
lean_object* v___x_2858_; lean_object* v___x_2860_; uint8_t v_isShared_2861_; uint8_t v_isSharedCheck_2865_; 
v___x_2858_ = l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg(v_fst_2787_, v___x_2857_, v_a_2778_);
v_isSharedCheck_2865_ = !lean_is_exclusive(v___x_2858_);
if (v_isSharedCheck_2865_ == 0)
{
lean_object* v_unused_2866_; 
v_unused_2866_ = lean_ctor_get(v___x_2858_, 0);
lean_dec(v_unused_2866_);
v___x_2860_ = v___x_2858_;
v_isShared_2861_ = v_isSharedCheck_2865_;
goto v_resetjp_2859_;
}
else
{
lean_dec(v___x_2858_);
v___x_2860_ = lean_box(0);
v_isShared_2861_ = v_isSharedCheck_2865_;
goto v_resetjp_2859_;
}
v_resetjp_2859_:
{
lean_object* v___x_2863_; 
if (v_isShared_2861_ == 0)
{
lean_ctor_set(v___x_2860_, 0, v_p_2776_);
v___x_2863_ = v___x_2860_;
goto v_reusejp_2862_;
}
else
{
lean_object* v_reuseFailAlloc_2864_; 
v_reuseFailAlloc_2864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2864_, 0, v_p_2776_);
v___x_2863_ = v_reuseFailAlloc_2864_;
goto v_reusejp_2862_;
}
v_reusejp_2862_:
{
return v___x_2863_;
}
}
}
}
else
{
lean_object* v___x_2869_; 
lean_inc(v_snd_2788_);
lean_inc(v_fst_2786_);
lean_dec_ref(v_p_2776_);
lean_inc(v_snd_2785_);
if (v_isShared_2813_ == 0)
{
lean_ctor_set(v___x_2812_, 1, v_snd_2785_);
lean_ctor_set(v___x_2812_, 0, v_snd_2810_);
v___x_2869_ = v___x_2812_;
goto v_reusejp_2868_;
}
else
{
lean_object* v_reuseFailAlloc_2891_; 
v_reuseFailAlloc_2891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2891_, 0, v_snd_2810_);
lean_ctor_set(v_reuseFailAlloc_2891_, 1, v_snd_2785_);
v___x_2869_ = v_reuseFailAlloc_2891_;
goto v_reusejp_2868_;
}
v_reusejp_2868_:
{
lean_object* v___x_2871_; uint8_t v_isShared_2872_; uint8_t v_isSharedCheck_2888_; 
v_isSharedCheck_2888_ = !lean_is_exclusive(v_snd_2785_);
if (v_isSharedCheck_2888_ == 0)
{
lean_object* v_unused_2889_; lean_object* v_unused_2890_; 
v_unused_2889_ = lean_ctor_get(v_snd_2785_, 1);
lean_dec(v_unused_2889_);
v_unused_2890_ = lean_ctor_get(v_snd_2785_, 0);
lean_dec(v_unused_2890_);
v___x_2871_ = v_snd_2785_;
v_isShared_2872_ = v_isSharedCheck_2888_;
goto v_resetjp_2870_;
}
else
{
lean_dec(v_snd_2785_);
v___x_2871_ = lean_box(0);
v_isShared_2872_ = v_isSharedCheck_2888_;
goto v_resetjp_2870_;
}
v_resetjp_2870_:
{
lean_object* v___x_2873_; lean_object* v_a_2874_; lean_object* v___x_2876_; uint8_t v_isShared_2877_; uint8_t v_isSharedCheck_2887_; 
v___x_2873_ = l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___redArg(v___x_2869_, v_a_2778_);
v_a_2874_ = lean_ctor_get(v___x_2873_, 0);
v_isSharedCheck_2887_ = !lean_is_exclusive(v___x_2873_);
if (v_isSharedCheck_2887_ == 0)
{
v___x_2876_ = v___x_2873_;
v_isShared_2877_ = v_isSharedCheck_2887_;
goto v_resetjp_2875_;
}
else
{
lean_inc(v_a_2874_);
lean_dec(v___x_2873_);
v___x_2876_ = lean_box(0);
v_isShared_2877_ = v_isSharedCheck_2887_;
goto v_resetjp_2875_;
}
v_resetjp_2875_:
{
lean_object* v___x_2879_; 
if (v_isShared_2799_ == 0)
{
lean_ctor_set(v___x_2798_, 1, v_snd_2788_);
lean_ctor_set(v___x_2798_, 0, v_a_2874_);
v___x_2879_ = v___x_2798_;
goto v_reusejp_2878_;
}
else
{
lean_object* v_reuseFailAlloc_2886_; 
v_reuseFailAlloc_2886_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2886_, 0, v_a_2874_);
lean_ctor_set(v_reuseFailAlloc_2886_, 1, v_snd_2788_);
v___x_2879_ = v_reuseFailAlloc_2886_;
goto v_reusejp_2878_;
}
v_reusejp_2878_:
{
lean_object* v___x_2881_; 
if (v_isShared_2872_ == 0)
{
lean_ctor_set(v___x_2871_, 1, v___x_2879_);
lean_ctor_set(v___x_2871_, 0, v_fst_2786_);
v___x_2881_ = v___x_2871_;
goto v_reusejp_2880_;
}
else
{
lean_object* v_reuseFailAlloc_2885_; 
v_reuseFailAlloc_2885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2885_, 0, v_fst_2786_);
lean_ctor_set(v_reuseFailAlloc_2885_, 1, v___x_2879_);
v___x_2881_ = v_reuseFailAlloc_2885_;
goto v_reusejp_2880_;
}
v_reusejp_2880_:
{
lean_object* v___x_2883_; 
if (v_isShared_2877_ == 0)
{
lean_ctor_set(v___x_2876_, 0, v___x_2881_);
v___x_2883_ = v___x_2876_;
goto v_reusejp_2882_;
}
else
{
lean_object* v_reuseFailAlloc_2884_; 
v_reuseFailAlloc_2884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2884_, 0, v___x_2881_);
v___x_2883_ = v_reuseFailAlloc_2884_;
goto v_reusejp_2882_;
}
v_reusejp_2882_:
{
return v___x_2883_;
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
lean_object* v_a_2893_; lean_object* v___x_2895_; uint8_t v_isShared_2896_; uint8_t v_isSharedCheck_2900_; 
lean_del_object(v___x_2798_);
lean_dec(v_snd_2785_);
lean_dec_ref(v_p_2776_);
v_a_2893_ = lean_ctor_get(v___x_2807_, 0);
v_isSharedCheck_2900_ = !lean_is_exclusive(v___x_2807_);
if (v_isSharedCheck_2900_ == 0)
{
v___x_2895_ = v___x_2807_;
v_isShared_2896_ = v_isSharedCheck_2900_;
goto v_resetjp_2894_;
}
else
{
lean_inc(v_a_2893_);
lean_dec(v___x_2807_);
v___x_2895_ = lean_box(0);
v_isShared_2896_ = v_isSharedCheck_2900_;
goto v_resetjp_2894_;
}
v_resetjp_2894_:
{
lean_object* v___x_2898_; 
if (v_isShared_2896_ == 0)
{
v___x_2898_ = v___x_2895_;
goto v_reusejp_2897_;
}
else
{
lean_object* v_reuseFailAlloc_2899_; 
v_reuseFailAlloc_2899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2899_, 0, v_a_2893_);
v___x_2898_ = v_reuseFailAlloc_2899_;
goto v_reusejp_2897_;
}
v_reusejp_2897_:
{
return v___x_2898_;
}
}
}
}
}
else
{
lean_object* v___x_2903_; uint8_t v_isShared_2904_; uint8_t v_isSharedCheck_2910_; 
lean_inc(v_snd_2791_);
lean_inc(v_fst_2786_);
lean_inc(v_snd_2784_);
lean_dec(v_fst_2790_);
lean_dec(v_fst_2789_);
lean_dec_ref(v_p_2776_);
v_isSharedCheck_2910_ = !lean_is_exclusive(v_snd_2785_);
if (v_isSharedCheck_2910_ == 0)
{
lean_object* v_unused_2911_; lean_object* v_unused_2912_; 
v_unused_2911_ = lean_ctor_get(v_snd_2785_, 1);
lean_dec(v_unused_2911_);
v_unused_2912_ = lean_ctor_get(v_snd_2785_, 0);
lean_dec(v_unused_2912_);
v___x_2903_ = v_snd_2785_;
v_isShared_2904_ = v_isSharedCheck_2910_;
goto v_resetjp_2902_;
}
else
{
lean_dec(v_snd_2785_);
v___x_2903_ = lean_box(0);
v_isShared_2904_ = v_isSharedCheck_2910_;
goto v_resetjp_2902_;
}
v_resetjp_2902_:
{
lean_object* v_values_2905_; lean_object* v___x_2907_; 
v_values_2905_ = lean_array_push(v_fst_2786_, v_snd_2791_);
if (v_isShared_2904_ == 0)
{
lean_ctor_set(v___x_2903_, 1, v_snd_2784_);
lean_ctor_set(v___x_2903_, 0, v_values_2905_);
v___x_2907_ = v___x_2903_;
goto v_reusejp_2906_;
}
else
{
lean_object* v_reuseFailAlloc_2909_; 
v_reuseFailAlloc_2909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2909_, 0, v_values_2905_);
lean_ctor_set(v_reuseFailAlloc_2909_, 1, v_snd_2784_);
v___x_2907_ = v_reuseFailAlloc_2909_;
goto v_reusejp_2906_;
}
v_reusejp_2906_:
{
lean_object* v___x_2908_; 
v___x_2908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2908_, 0, v___x_2907_);
return v___x_2908_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg___boxed(lean_object* v_p_2913_, lean_object* v_entry_2914_, lean_object* v_a_2915_, lean_object* v_a_2916_, lean_object* v_a_2917_, lean_object* v_a_2918_, lean_object* v_a_2919_, lean_object* v_a_2920_){
_start:
{
lean_object* v_res_2921_; 
v_res_2921_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg(v_p_2913_, v_entry_2914_, v_a_2915_, v_a_2916_, v_a_2917_, v_a_2918_, v_a_2919_);
lean_dec(v_a_2919_);
lean_dec_ref(v_a_2918_);
lean_dec(v_a_2917_);
lean_dec_ref(v_a_2916_);
lean_dec(v_a_2915_);
return v_res_2921_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry(lean_object* v_00_u03b1_2922_, lean_object* v_p_2923_, lean_object* v_entry_2924_, lean_object* v_a_2925_, lean_object* v_a_2926_, lean_object* v_a_2927_, lean_object* v_a_2928_, lean_object* v_a_2929_){
_start:
{
lean_object* v___x_2931_; 
v___x_2931_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg(v_p_2923_, v_entry_2924_, v_a_2925_, v_a_2926_, v_a_2927_, v_a_2928_, v_a_2929_);
return v___x_2931_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___boxed(lean_object* v_00_u03b1_2932_, lean_object* v_p_2933_, lean_object* v_entry_2934_, lean_object* v_a_2935_, lean_object* v_a_2936_, lean_object* v_a_2937_, lean_object* v_a_2938_, lean_object* v_a_2939_, lean_object* v_a_2940_){
_start:
{
lean_object* v_res_2941_; 
v_res_2941_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntry(v_00_u03b1_2932_, v_p_2933_, v_entry_2934_, v_a_2935_, v_a_2936_, v_a_2937_, v_a_2938_, v_a_2939_);
lean_dec(v_a_2939_);
lean_dec_ref(v_a_2938_);
lean_dec(v_a_2937_);
lean_dec_ref(v_a_2936_);
lean_dec(v_a_2935_);
return v_res_2941_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1(lean_object* v_00_u03b2_2942_, lean_object* v_m_2943_, lean_object* v_a_2944_){
_start:
{
lean_object* v___x_2945_; 
v___x_2945_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(v_m_2943_, v_a_2944_);
return v___x_2945_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___boxed(lean_object* v_00_u03b2_2946_, lean_object* v_m_2947_, lean_object* v_a_2948_){
_start:
{
lean_object* v_res_2949_; 
v_res_2949_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1(v_00_u03b2_2946_, v_m_2947_, v_a_2948_);
lean_dec(v_a_2948_);
lean_dec_ref(v_m_2947_);
return v_res_2949_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3(lean_object* v_00_u03b2_2950_, lean_object* v_m_2951_, lean_object* v_a_2952_, lean_object* v_b_2953_){
_start:
{
lean_object* v___x_2954_; 
v___x_2954_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3___redArg(v_m_2951_, v_a_2952_, v_b_2953_);
return v___x_2954_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1(lean_object* v_00_u03b2_2955_, lean_object* v_a_2956_, lean_object* v_x_2957_){
_start:
{
lean_object* v___x_2958_; 
v___x_2958_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___redArg(v_a_2956_, v_x_2957_);
return v___x_2958_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___boxed(lean_object* v_00_u03b2_2959_, lean_object* v_a_2960_, lean_object* v_x_2961_){
_start:
{
lean_object* v_res_2962_; 
v_res_2962_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1(v_00_u03b2_2959_, v_a_2960_, v_x_2961_);
lean_dec(v_x_2961_);
lean_dec(v_a_2960_);
return v_res_2962_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4(lean_object* v_00_u03b2_2963_, lean_object* v_a_2964_, lean_object* v_x_2965_){
_start:
{
uint8_t v___x_2966_; 
v___x_2966_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___redArg(v_a_2964_, v_x_2965_);
return v___x_2966_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___boxed(lean_object* v_00_u03b2_2967_, lean_object* v_a_2968_, lean_object* v_x_2969_){
_start:
{
uint8_t v_res_2970_; lean_object* v_r_2971_; 
v_res_2970_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4(v_00_u03b2_2967_, v_a_2968_, v_x_2969_);
lean_dec(v_x_2969_);
lean_dec(v_a_2968_);
v_r_2971_ = lean_box(v_res_2970_);
return v_r_2971_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5(lean_object* v_00_u03b2_2972_, lean_object* v_data_2973_){
_start:
{
lean_object* v___x_2974_; 
v___x_2974_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5___redArg(v_data_2973_);
return v___x_2974_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__6(lean_object* v_00_u03b2_2975_, lean_object* v_a_2976_, lean_object* v_b_2977_, lean_object* v_x_2978_){
_start:
{
lean_object* v___x_2979_; 
v___x_2979_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__6___redArg(v_a_2976_, v_b_2977_, v_x_2978_);
return v___x_2979_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6(lean_object* v_00_u03b2_2980_, lean_object* v_i_2981_, lean_object* v_source_2982_, lean_object* v_target_2983_){
_start:
{
lean_object* v___x_2984_; 
v___x_2984_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6___redArg(v_i_2981_, v_source_2982_, v_target_2983_);
return v___x_2984_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6_spec__7(lean_object* v_00_u03b2_2985_, lean_object* v_x_2986_, lean_object* v_x_2987_){
_start:
{
lean_object* v___x_2988_; 
v___x_2988_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6_spec__7___redArg(v_x_2986_, v_x_2987_);
return v___x_2988_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___redArg(lean_object* v_as_2989_, size_t v_i_2990_, size_t v_stop_2991_, lean_object* v_b_2992_, lean_object* v___y_2993_, lean_object* v___y_2994_, lean_object* v___y_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_){
_start:
{
uint8_t v___x_2999_; 
v___x_2999_ = lean_usize_dec_eq(v_i_2990_, v_stop_2991_);
if (v___x_2999_ == 0)
{
lean_object* v___x_3000_; lean_object* v___x_3001_; 
v___x_3000_ = lean_array_uget_borrowed(v_as_2989_, v_i_2990_);
lean_inc(v___x_3000_);
v___x_3001_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg(v_b_2992_, v___x_3000_, v___y_2993_, v___y_2994_, v___y_2995_, v___y_2996_, v___y_2997_);
if (lean_obj_tag(v___x_3001_) == 0)
{
lean_object* v_a_3002_; size_t v___x_3003_; size_t v___x_3004_; 
v_a_3002_ = lean_ctor_get(v___x_3001_, 0);
lean_inc(v_a_3002_);
lean_dec_ref_known(v___x_3001_, 1);
v___x_3003_ = ((size_t)1ULL);
v___x_3004_ = lean_usize_add(v_i_2990_, v___x_3003_);
v_i_2990_ = v___x_3004_;
v_b_2992_ = v_a_3002_;
goto _start;
}
else
{
return v___x_3001_;
}
}
else
{
lean_object* v___x_3006_; 
v___x_3006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3006_, 0, v_b_2992_);
return v___x_3006_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___redArg___boxed(lean_object* v_as_3007_, lean_object* v_i_3008_, lean_object* v_stop_3009_, lean_object* v_b_3010_, lean_object* v___y_3011_, lean_object* v___y_3012_, lean_object* v___y_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_){
_start:
{
size_t v_i_boxed_3017_; size_t v_stop_boxed_3018_; lean_object* v_res_3019_; 
v_i_boxed_3017_ = lean_unbox_usize(v_i_3008_);
lean_dec(v_i_3008_);
v_stop_boxed_3018_ = lean_unbox_usize(v_stop_3009_);
lean_dec(v_stop_3009_);
v_res_3019_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___redArg(v_as_3007_, v_i_boxed_3017_, v_stop_boxed_3018_, v_b_3010_, v___y_3011_, v___y_3012_, v___y_3013_, v___y_3014_, v___y_3015_);
lean_dec(v___y_3015_);
lean_dec_ref(v___y_3014_);
lean_dec(v___y_3013_);
lean_dec_ref(v___y_3012_);
lean_dec(v___y_3011_);
lean_dec_ref(v_as_3007_);
return v_res_3019_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntries___redArg(lean_object* v_values_3020_, lean_object* v_starIdx_3021_, lean_object* v_children_3022_, lean_object* v_entries_3023_, lean_object* v_a_3024_, lean_object* v_a_3025_, lean_object* v_a_3026_, lean_object* v_a_3027_, lean_object* v_a_3028_){
_start:
{
lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; uint8_t v___x_3034_; 
v___x_3030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3030_, 0, v_starIdx_3021_);
lean_ctor_set(v___x_3030_, 1, v_children_3022_);
v___x_3031_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3031_, 0, v_values_3020_);
lean_ctor_set(v___x_3031_, 1, v___x_3030_);
v___x_3032_ = lean_unsigned_to_nat(0u);
v___x_3033_ = lean_array_get_size(v_entries_3023_);
v___x_3034_ = lean_nat_dec_lt(v___x_3032_, v___x_3033_);
if (v___x_3034_ == 0)
{
lean_object* v___x_3035_; 
v___x_3035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3035_, 0, v___x_3031_);
return v___x_3035_;
}
else
{
size_t v___x_3036_; size_t v___x_3037_; lean_object* v___x_3038_; 
v___x_3036_ = ((size_t)0ULL);
v___x_3037_ = lean_usize_of_nat(v___x_3033_);
v___x_3038_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___redArg(v_entries_3023_, v___x_3036_, v___x_3037_, v___x_3031_, v_a_3024_, v_a_3025_, v_a_3026_, v_a_3027_, v_a_3028_);
return v___x_3038_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntries___redArg___boxed(lean_object* v_values_3039_, lean_object* v_starIdx_3040_, lean_object* v_children_3041_, lean_object* v_entries_3042_, lean_object* v_a_3043_, lean_object* v_a_3044_, lean_object* v_a_3045_, lean_object* v_a_3046_, lean_object* v_a_3047_, lean_object* v_a_3048_){
_start:
{
lean_object* v_res_3049_; 
v_res_3049_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntries___redArg(v_values_3039_, v_starIdx_3040_, v_children_3041_, v_entries_3042_, v_a_3043_, v_a_3044_, v_a_3045_, v_a_3046_, v_a_3047_);
lean_dec(v_a_3047_);
lean_dec_ref(v_a_3046_);
lean_dec(v_a_3045_);
lean_dec_ref(v_a_3044_);
lean_dec(v_a_3043_);
lean_dec_ref(v_entries_3042_);
return v_res_3049_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntries(lean_object* v_00_u03b1_3050_, lean_object* v_values_3051_, lean_object* v_starIdx_3052_, lean_object* v_children_3053_, lean_object* v_entries_3054_, lean_object* v_a_3055_, lean_object* v_a_3056_, lean_object* v_a_3057_, lean_object* v_a_3058_, lean_object* v_a_3059_){
_start:
{
lean_object* v___x_3061_; 
v___x_3061_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntries___redArg(v_values_3051_, v_starIdx_3052_, v_children_3053_, v_entries_3054_, v_a_3055_, v_a_3056_, v_a_3057_, v_a_3058_, v_a_3059_);
return v___x_3061_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntries___boxed(lean_object* v_00_u03b1_3062_, lean_object* v_values_3063_, lean_object* v_starIdx_3064_, lean_object* v_children_3065_, lean_object* v_entries_3066_, lean_object* v_a_3067_, lean_object* v_a_3068_, lean_object* v_a_3069_, lean_object* v_a_3070_, lean_object* v_a_3071_, lean_object* v_a_3072_){
_start:
{
lean_object* v_res_3073_; 
v_res_3073_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntries(v_00_u03b1_3062_, v_values_3063_, v_starIdx_3064_, v_children_3065_, v_entries_3066_, v_a_3067_, v_a_3068_, v_a_3069_, v_a_3070_, v_a_3071_);
lean_dec(v_a_3071_);
lean_dec_ref(v_a_3070_);
lean_dec(v_a_3069_);
lean_dec_ref(v_a_3068_);
lean_dec(v_a_3067_);
lean_dec_ref(v_entries_3066_);
return v_res_3073_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0(lean_object* v_00_u03b1_3074_, lean_object* v_as_3075_, size_t v_i_3076_, size_t v_stop_3077_, lean_object* v_b_3078_, lean_object* v___y_3079_, lean_object* v___y_3080_, lean_object* v___y_3081_, lean_object* v___y_3082_, lean_object* v___y_3083_){
_start:
{
lean_object* v___x_3085_; 
v___x_3085_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___redArg(v_as_3075_, v_i_3076_, v_stop_3077_, v_b_3078_, v___y_3079_, v___y_3080_, v___y_3081_, v___y_3082_, v___y_3083_);
return v___x_3085_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___boxed(lean_object* v_00_u03b1_3086_, lean_object* v_as_3087_, lean_object* v_i_3088_, lean_object* v_stop_3089_, lean_object* v_b_3090_, lean_object* v___y_3091_, lean_object* v___y_3092_, lean_object* v___y_3093_, lean_object* v___y_3094_, lean_object* v___y_3095_, lean_object* v___y_3096_){
_start:
{
size_t v_i_boxed_3097_; size_t v_stop_boxed_3098_; lean_object* v_res_3099_; 
v_i_boxed_3097_ = lean_unbox_usize(v_i_3088_);
lean_dec(v_i_3088_);
v_stop_boxed_3098_ = lean_unbox_usize(v_stop_3089_);
lean_dec(v_stop_3089_);
v_res_3099_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0(v_00_u03b1_3086_, v_as_3087_, v_i_boxed_3097_, v_stop_boxed_3098_, v_b_3090_, v___y_3091_, v___y_3092_, v___y_3093_, v___y_3094_, v___y_3095_);
lean_dec(v___y_3095_);
lean_dec_ref(v___y_3094_);
lean_dec(v___y_3093_);
lean_dec_ref(v___y_3092_);
lean_dec(v___y_3091_);
lean_dec_ref(v_as_3087_);
return v_res_3099_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalNode___redArg(lean_object* v_c_3100_, lean_object* v_a_3101_, lean_object* v_a_3102_, lean_object* v_a_3103_, lean_object* v_a_3104_, lean_object* v_a_3105_){
_start:
{
lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v_values_3110_; lean_object* v_star_3111_; lean_object* v_children_3112_; lean_object* v_pending_3113_; lean_object* v___x_3115_; uint8_t v_isShared_3116_; uint8_t v_isSharedCheck_3143_; 
v___x_3107_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0);
v___x_3108_ = lean_st_ref_get(v_a_3101_);
v___x_3109_ = lean_array_get(v___x_3107_, v___x_3108_, v_c_3100_);
lean_dec(v___x_3108_);
v_values_3110_ = lean_ctor_get(v___x_3109_, 0);
v_star_3111_ = lean_ctor_get(v___x_3109_, 1);
v_children_3112_ = lean_ctor_get(v___x_3109_, 2);
v_pending_3113_ = lean_ctor_get(v___x_3109_, 3);
v_isSharedCheck_3143_ = !lean_is_exclusive(v___x_3109_);
if (v_isSharedCheck_3143_ == 0)
{
v___x_3115_ = v___x_3109_;
v_isShared_3116_ = v_isSharedCheck_3143_;
goto v_resetjp_3114_;
}
else
{
lean_inc(v_pending_3113_);
lean_inc(v_children_3112_);
lean_inc(v_star_3111_);
lean_inc(v_values_3110_);
lean_dec(v___x_3109_);
v___x_3115_ = lean_box(0);
v_isShared_3116_ = v_isSharedCheck_3143_;
goto v_resetjp_3114_;
}
v_resetjp_3114_:
{
lean_object* v___x_3117_; lean_object* v___x_3118_; uint8_t v___x_3119_; 
v___x_3117_ = lean_array_get_size(v_pending_3113_);
v___x_3118_ = lean_unsigned_to_nat(0u);
v___x_3119_ = lean_nat_dec_eq(v___x_3117_, v___x_3118_);
if (v___x_3119_ == 0)
{
lean_object* v___x_3120_; lean_object* v___x_3121_; 
v___x_3120_ = l_Lean_Meta_LazyDiscrTree_setTrie___redArg(v_c_3100_, v___x_3107_, v_a_3101_);
lean_dec_ref(v___x_3120_);
v___x_3121_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntries___redArg(v_values_3110_, v_star_3111_, v_children_3112_, v_pending_3113_, v_a_3101_, v_a_3102_, v_a_3103_, v_a_3104_, v_a_3105_);
lean_dec_ref(v_pending_3113_);
if (lean_obj_tag(v___x_3121_) == 0)
{
lean_object* v_a_3122_; lean_object* v_snd_3123_; lean_object* v_fst_3124_; lean_object* v_fst_3125_; lean_object* v_snd_3126_; lean_object* v___x_3127_; lean_object* v___x_3129_; 
v_a_3122_ = lean_ctor_get(v___x_3121_, 0);
lean_inc(v_a_3122_);
lean_dec_ref_known(v___x_3121_, 1);
v_snd_3123_ = lean_ctor_get(v_a_3122_, 1);
v_fst_3124_ = lean_ctor_get(v_a_3122_, 0);
v_fst_3125_ = lean_ctor_get(v_snd_3123_, 0);
v_snd_3126_ = lean_ctor_get(v_snd_3123_, 1);
v___x_3127_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__3));
lean_inc(v_snd_3126_);
lean_inc(v_fst_3125_);
lean_inc(v_fst_3124_);
if (v_isShared_3116_ == 0)
{
lean_ctor_set(v___x_3115_, 3, v___x_3127_);
lean_ctor_set(v___x_3115_, 2, v_snd_3126_);
lean_ctor_set(v___x_3115_, 1, v_fst_3125_);
lean_ctor_set(v___x_3115_, 0, v_fst_3124_);
v___x_3129_ = v___x_3115_;
goto v_reusejp_3128_;
}
else
{
lean_object* v_reuseFailAlloc_3139_; 
v_reuseFailAlloc_3139_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3139_, 0, v_fst_3124_);
lean_ctor_set(v_reuseFailAlloc_3139_, 1, v_fst_3125_);
lean_ctor_set(v_reuseFailAlloc_3139_, 2, v_snd_3126_);
lean_ctor_set(v_reuseFailAlloc_3139_, 3, v___x_3127_);
v___x_3129_ = v_reuseFailAlloc_3139_;
goto v_reusejp_3128_;
}
v_reusejp_3128_:
{
lean_object* v___x_3130_; lean_object* v___x_3132_; uint8_t v_isShared_3133_; uint8_t v_isSharedCheck_3137_; 
v___x_3130_ = l_Lean_Meta_LazyDiscrTree_setTrie___redArg(v_c_3100_, v___x_3129_, v_a_3101_);
v_isSharedCheck_3137_ = !lean_is_exclusive(v___x_3130_);
if (v_isSharedCheck_3137_ == 0)
{
lean_object* v_unused_3138_; 
v_unused_3138_ = lean_ctor_get(v___x_3130_, 0);
lean_dec(v_unused_3138_);
v___x_3132_ = v___x_3130_;
v_isShared_3133_ = v_isSharedCheck_3137_;
goto v_resetjp_3131_;
}
else
{
lean_dec(v___x_3130_);
v___x_3132_ = lean_box(0);
v_isShared_3133_ = v_isSharedCheck_3137_;
goto v_resetjp_3131_;
}
v_resetjp_3131_:
{
lean_object* v___x_3135_; 
if (v_isShared_3133_ == 0)
{
lean_ctor_set(v___x_3132_, 0, v_a_3122_);
v___x_3135_ = v___x_3132_;
goto v_reusejp_3134_;
}
else
{
lean_object* v_reuseFailAlloc_3136_; 
v_reuseFailAlloc_3136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3136_, 0, v_a_3122_);
v___x_3135_ = v_reuseFailAlloc_3136_;
goto v_reusejp_3134_;
}
v_reusejp_3134_:
{
return v___x_3135_;
}
}
}
}
else
{
lean_del_object(v___x_3115_);
return v___x_3121_;
}
}
else
{
lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; 
lean_del_object(v___x_3115_);
lean_dec_ref(v_pending_3113_);
v___x_3140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3140_, 0, v_star_3111_);
lean_ctor_set(v___x_3140_, 1, v_children_3112_);
v___x_3141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3141_, 0, v_values_3110_);
lean_ctor_set(v___x_3141_, 1, v___x_3140_);
v___x_3142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3142_, 0, v___x_3141_);
return v___x_3142_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalNode___redArg___boxed(lean_object* v_c_3144_, lean_object* v_a_3145_, lean_object* v_a_3146_, lean_object* v_a_3147_, lean_object* v_a_3148_, lean_object* v_a_3149_, lean_object* v_a_3150_){
_start:
{
lean_object* v_res_3151_; 
v_res_3151_ = l_Lean_Meta_LazyDiscrTree_evalNode___redArg(v_c_3144_, v_a_3145_, v_a_3146_, v_a_3147_, v_a_3148_, v_a_3149_);
lean_dec(v_a_3149_);
lean_dec_ref(v_a_3148_);
lean_dec(v_a_3147_);
lean_dec_ref(v_a_3146_);
lean_dec(v_a_3145_);
lean_dec(v_c_3144_);
return v_res_3151_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalNode(lean_object* v_00_u03b1_3152_, lean_object* v_c_3153_, lean_object* v_a_3154_, lean_object* v_a_3155_, lean_object* v_a_3156_, lean_object* v_a_3157_, lean_object* v_a_3158_){
_start:
{
lean_object* v___x_3160_; 
v___x_3160_ = l_Lean_Meta_LazyDiscrTree_evalNode___redArg(v_c_3153_, v_a_3154_, v_a_3155_, v_a_3156_, v_a_3157_, v_a_3158_);
return v___x_3160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalNode___boxed(lean_object* v_00_u03b1_3161_, lean_object* v_c_3162_, lean_object* v_a_3163_, lean_object* v_a_3164_, lean_object* v_a_3165_, lean_object* v_a_3166_, lean_object* v_a_3167_, lean_object* v_a_3168_){
_start:
{
lean_object* v_res_3169_; 
v_res_3169_ = l_Lean_Meta_LazyDiscrTree_evalNode(v_00_u03b1_3161_, v_c_3162_, v_a_3163_, v_a_3164_, v_a_3165_, v_a_3166_, v_a_3167_);
lean_dec(v_a_3167_);
lean_dec_ref(v_a_3166_);
lean_dec(v_a_3165_);
lean_dec_ref(v_a_3164_);
lean_dec(v_a_3163_);
lean_dec(v_c_3162_);
return v_res_3169_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___redArg(lean_object* v_a_3170_, lean_object* v_fallback_3171_, lean_object* v_x_3172_){
_start:
{
if (lean_obj_tag(v_x_3172_) == 0)
{
lean_inc(v_fallback_3171_);
return v_fallback_3171_;
}
else
{
lean_object* v_key_3173_; lean_object* v_value_3174_; lean_object* v_tail_3175_; uint8_t v___x_3176_; 
v_key_3173_ = lean_ctor_get(v_x_3172_, 0);
v_value_3174_ = lean_ctor_get(v_x_3172_, 1);
v_tail_3175_ = lean_ctor_get(v_x_3172_, 2);
v___x_3176_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_key_3173_, v_a_3170_);
if (v___x_3176_ == 0)
{
v_x_3172_ = v_tail_3175_;
goto _start;
}
else
{
lean_inc(v_value_3174_);
return v_value_3174_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___redArg___boxed(lean_object* v_a_3178_, lean_object* v_fallback_3179_, lean_object* v_x_3180_){
_start:
{
lean_object* v_res_3181_; 
v_res_3181_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___redArg(v_a_3178_, v_fallback_3179_, v_x_3180_);
lean_dec(v_x_3180_);
lean_dec(v_fallback_3179_);
lean_dec(v_a_3178_);
return v_res_3181_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg(lean_object* v_m_3182_, lean_object* v_a_3183_, lean_object* v_fallback_3184_){
_start:
{
lean_object* v_buckets_3185_; lean_object* v___x_3186_; uint64_t v___x_3187_; uint64_t v___x_3188_; uint64_t v___x_3189_; uint64_t v_fold_3190_; uint64_t v___x_3191_; uint64_t v___x_3192_; uint64_t v___x_3193_; size_t v___x_3194_; size_t v___x_3195_; size_t v___x_3196_; size_t v___x_3197_; size_t v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; 
v_buckets_3185_ = lean_ctor_get(v_m_3182_, 1);
v___x_3186_ = lean_array_get_size(v_buckets_3185_);
v___x_3187_ = l_Lean_Meta_LazyDiscrTree_Key_hash(v_a_3183_);
v___x_3188_ = 32ULL;
v___x_3189_ = lean_uint64_shift_right(v___x_3187_, v___x_3188_);
v_fold_3190_ = lean_uint64_xor(v___x_3187_, v___x_3189_);
v___x_3191_ = 16ULL;
v___x_3192_ = lean_uint64_shift_right(v_fold_3190_, v___x_3191_);
v___x_3193_ = lean_uint64_xor(v_fold_3190_, v___x_3192_);
v___x_3194_ = lean_uint64_to_usize(v___x_3193_);
v___x_3195_ = lean_usize_of_nat(v___x_3186_);
v___x_3196_ = ((size_t)1ULL);
v___x_3197_ = lean_usize_sub(v___x_3195_, v___x_3196_);
v___x_3198_ = lean_usize_land(v___x_3194_, v___x_3197_);
v___x_3199_ = lean_array_uget_borrowed(v_buckets_3185_, v___x_3198_);
v___x_3200_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___redArg(v_a_3183_, v_fallback_3184_, v___x_3199_);
return v___x_3200_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg___boxed(lean_object* v_m_3201_, lean_object* v_a_3202_, lean_object* v_fallback_3203_){
_start:
{
lean_object* v_res_3204_; 
v_res_3204_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg(v_m_3201_, v_a_3202_, v_fallback_3203_);
lean_dec(v_fallback_3203_);
lean_dec(v_a_3202_);
lean_dec_ref(v_m_3201_);
return v_res_3204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeyAux___redArg(lean_object* v_next_3205_, lean_object* v_rest_3206_, lean_object* v_a_3207_, lean_object* v_a_3208_, lean_object* v_a_3209_, lean_object* v_a_3210_, lean_object* v_a_3211_){
_start:
{
lean_object* v___x_3213_; uint8_t v___x_3214_; 
v___x_3213_ = lean_unsigned_to_nat(0u);
v___x_3214_ = lean_nat_dec_eq(v_next_3205_, v___x_3213_);
if (v___x_3214_ == 0)
{
lean_object* v___x_3215_; 
v___x_3215_ = l_Lean_Meta_LazyDiscrTree_evalNode___redArg(v_next_3205_, v_a_3207_, v_a_3208_, v_a_3209_, v_a_3210_, v_a_3211_);
if (lean_obj_tag(v___x_3215_) == 0)
{
lean_object* v_a_3216_; lean_object* v___x_3218_; uint8_t v_isShared_3219_; uint8_t v_isSharedCheck_3241_; 
v_a_3216_ = lean_ctor_get(v___x_3215_, 0);
v_isSharedCheck_3241_ = !lean_is_exclusive(v___x_3215_);
if (v_isSharedCheck_3241_ == 0)
{
v___x_3218_ = v___x_3215_;
v_isShared_3219_ = v_isSharedCheck_3241_;
goto v_resetjp_3217_;
}
else
{
lean_inc(v_a_3216_);
lean_dec(v___x_3215_);
v___x_3218_ = lean_box(0);
v_isShared_3219_ = v_isSharedCheck_3241_;
goto v_resetjp_3217_;
}
v_resetjp_3217_:
{
lean_object* v_snd_3220_; 
v_snd_3220_ = lean_ctor_get(v_a_3216_, 1);
lean_inc(v_snd_3220_);
lean_dec(v_a_3216_);
if (lean_obj_tag(v_rest_3206_) == 0)
{
lean_object* v_fst_3221_; lean_object* v_snd_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3230_; 
v_fst_3221_ = lean_ctor_get(v_snd_3220_, 0);
lean_inc(v_fst_3221_);
v_snd_3222_ = lean_ctor_get(v_snd_3220_, 1);
lean_inc(v_snd_3222_);
lean_dec(v_snd_3220_);
v___x_3223_ = lean_st_ref_take(v_a_3207_);
v___x_3224_ = lean_box(0);
v___x_3225_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v___x_3226_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3226_, 0, v___x_3225_);
lean_ctor_set(v___x_3226_, 1, v_fst_3221_);
lean_ctor_set(v___x_3226_, 2, v_snd_3222_);
lean_ctor_set(v___x_3226_, 3, v___x_3225_);
v___x_3227_ = lean_array_set(v___x_3223_, v_next_3205_, v___x_3226_);
lean_dec(v_next_3205_);
v___x_3228_ = lean_st_ref_put(v_a_3207_, v___x_3227_);
if (v_isShared_3219_ == 0)
{
lean_ctor_set(v___x_3218_, 0, v___x_3224_);
v___x_3230_ = v___x_3218_;
goto v_reusejp_3229_;
}
else
{
lean_object* v_reuseFailAlloc_3231_; 
v_reuseFailAlloc_3231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3231_, 0, v___x_3224_);
v___x_3230_ = v_reuseFailAlloc_3231_;
goto v_reusejp_3229_;
}
v_reusejp_3229_:
{
return v___x_3230_;
}
}
else
{
lean_object* v_fst_3232_; lean_object* v_snd_3233_; lean_object* v_head_3234_; lean_object* v_tail_3235_; lean_object* v___x_3236_; uint8_t v___x_3237_; 
lean_del_object(v___x_3218_);
lean_dec(v_next_3205_);
v_fst_3232_ = lean_ctor_get(v_snd_3220_, 0);
lean_inc(v_fst_3232_);
v_snd_3233_ = lean_ctor_get(v_snd_3220_, 1);
lean_inc(v_snd_3233_);
lean_dec(v_snd_3220_);
v_head_3234_ = lean_ctor_get(v_rest_3206_, 0);
v_tail_3235_ = lean_ctor_get(v_rest_3206_, 1);
v___x_3236_ = lean_box(3);
v___x_3237_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_head_3234_, v___x_3236_);
if (v___x_3237_ == 0)
{
lean_object* v___x_3238_; 
lean_dec(v_fst_3232_);
v___x_3238_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg(v_snd_3233_, v_head_3234_, v___x_3213_);
lean_dec(v_snd_3233_);
v_next_3205_ = v___x_3238_;
v_rest_3206_ = v_tail_3235_;
goto _start;
}
else
{
lean_dec(v_snd_3233_);
v_next_3205_ = v_fst_3232_;
v_rest_3206_ = v_tail_3235_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_3242_; lean_object* v___x_3244_; uint8_t v_isShared_3245_; uint8_t v_isSharedCheck_3249_; 
lean_dec(v_next_3205_);
v_a_3242_ = lean_ctor_get(v___x_3215_, 0);
v_isSharedCheck_3249_ = !lean_is_exclusive(v___x_3215_);
if (v_isSharedCheck_3249_ == 0)
{
v___x_3244_ = v___x_3215_;
v_isShared_3245_ = v_isSharedCheck_3249_;
goto v_resetjp_3243_;
}
else
{
lean_inc(v_a_3242_);
lean_dec(v___x_3215_);
v___x_3244_ = lean_box(0);
v_isShared_3245_ = v_isSharedCheck_3249_;
goto v_resetjp_3243_;
}
v_resetjp_3243_:
{
lean_object* v___x_3247_; 
if (v_isShared_3245_ == 0)
{
v___x_3247_ = v___x_3244_;
goto v_reusejp_3246_;
}
else
{
lean_object* v_reuseFailAlloc_3248_; 
v_reuseFailAlloc_3248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3248_, 0, v_a_3242_);
v___x_3247_ = v_reuseFailAlloc_3248_;
goto v_reusejp_3246_;
}
v_reusejp_3246_:
{
return v___x_3247_;
}
}
}
}
else
{
lean_object* v___x_3250_; lean_object* v___x_3251_; 
lean_dec(v_next_3205_);
v___x_3250_ = lean_box(0);
v___x_3251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3251_, 0, v___x_3250_);
return v___x_3251_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeyAux___redArg___boxed(lean_object* v_next_3252_, lean_object* v_rest_3253_, lean_object* v_a_3254_, lean_object* v_a_3255_, lean_object* v_a_3256_, lean_object* v_a_3257_, lean_object* v_a_3258_, lean_object* v_a_3259_){
_start:
{
lean_object* v_res_3260_; 
v_res_3260_ = l_Lean_Meta_LazyDiscrTree_dropKeyAux___redArg(v_next_3252_, v_rest_3253_, v_a_3254_, v_a_3255_, v_a_3256_, v_a_3257_, v_a_3258_);
lean_dec(v_a_3258_);
lean_dec_ref(v_a_3257_);
lean_dec(v_a_3256_);
lean_dec_ref(v_a_3255_);
lean_dec(v_a_3254_);
lean_dec(v_rest_3253_);
return v_res_3260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeyAux(lean_object* v_00_u03b1_3261_, lean_object* v_next_3262_, lean_object* v_rest_3263_, lean_object* v_a_3264_, lean_object* v_a_3265_, lean_object* v_a_3266_, lean_object* v_a_3267_, lean_object* v_a_3268_){
_start:
{
lean_object* v___x_3270_; 
v___x_3270_ = l_Lean_Meta_LazyDiscrTree_dropKeyAux___redArg(v_next_3262_, v_rest_3263_, v_a_3264_, v_a_3265_, v_a_3266_, v_a_3267_, v_a_3268_);
return v___x_3270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeyAux___boxed(lean_object* v_00_u03b1_3271_, lean_object* v_next_3272_, lean_object* v_rest_3273_, lean_object* v_a_3274_, lean_object* v_a_3275_, lean_object* v_a_3276_, lean_object* v_a_3277_, lean_object* v_a_3278_, lean_object* v_a_3279_){
_start:
{
lean_object* v_res_3280_; 
v_res_3280_ = l_Lean_Meta_LazyDiscrTree_dropKeyAux(v_00_u03b1_3271_, v_next_3272_, v_rest_3273_, v_a_3274_, v_a_3275_, v_a_3276_, v_a_3277_, v_a_3278_);
lean_dec(v_a_3278_);
lean_dec_ref(v_a_3277_);
lean_dec(v_a_3276_);
lean_dec_ref(v_a_3275_);
lean_dec(v_a_3274_);
lean_dec(v_rest_3273_);
return v_res_3280_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0(lean_object* v_00_u03b2_3281_, lean_object* v_m_3282_, lean_object* v_a_3283_, lean_object* v_fallback_3284_){
_start:
{
lean_object* v___x_3285_; 
v___x_3285_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg(v_m_3282_, v_a_3283_, v_fallback_3284_);
return v___x_3285_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___boxed(lean_object* v_00_u03b2_3286_, lean_object* v_m_3287_, lean_object* v_a_3288_, lean_object* v_fallback_3289_){
_start:
{
lean_object* v_res_3290_; 
v_res_3290_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0(v_00_u03b2_3286_, v_m_3287_, v_a_3288_, v_fallback_3289_);
lean_dec(v_fallback_3289_);
lean_dec(v_a_3288_);
lean_dec_ref(v_m_3287_);
return v_res_3290_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0(lean_object* v_00_u03b2_3291_, lean_object* v_a_3292_, lean_object* v_fallback_3293_, lean_object* v_x_3294_){
_start:
{
lean_object* v___x_3295_; 
v___x_3295_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___redArg(v_a_3292_, v_fallback_3293_, v_x_3294_);
return v___x_3295_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3296_, lean_object* v_a_3297_, lean_object* v_fallback_3298_, lean_object* v_x_3299_){
_start:
{
lean_object* v_res_3300_; 
v_res_3300_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0(v_00_u03b2_3296_, v_a_3297_, v_fallback_3298_, v_x_3299_);
lean_dec(v_x_3299_);
lean_dec(v_fallback_3298_);
lean_dec(v_a_3297_);
return v_res_3300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKey___redArg(lean_object* v_t_3301_, lean_object* v_path_3302_, lean_object* v_a_3303_, lean_object* v_a_3304_, lean_object* v_a_3305_, lean_object* v_a_3306_){
_start:
{
if (lean_obj_tag(v_path_3302_) == 0)
{
lean_object* v___x_3308_; 
v___x_3308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3308_, 0, v_t_3301_);
return v___x_3308_;
}
else
{
lean_object* v_head_3309_; lean_object* v_tail_3310_; lean_object* v_roots_3311_; lean_object* v___x_3312_; lean_object* v_idx_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; 
v_head_3309_ = lean_ctor_get(v_path_3302_, 0);
lean_inc(v_head_3309_);
v_tail_3310_ = lean_ctor_get(v_path_3302_, 1);
lean_inc(v_tail_3310_);
lean_dec_ref_known(v_path_3302_, 2);
v_roots_3311_ = lean_ctor_get(v_t_3301_, 1);
v___x_3312_ = lean_unsigned_to_nat(0u);
v_idx_3313_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg(v_roots_3311_, v_head_3309_, v___x_3312_);
lean_dec(v_head_3309_);
v___x_3314_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_dropKeyAux___boxed), 9, 3);
lean_closure_set(v___x_3314_, 0, lean_box(0));
lean_closure_set(v___x_3314_, 1, v_idx_3313_);
lean_closure_set(v___x_3314_, 2, v_tail_3310_);
v___x_3315_ = l_Lean_Meta_LazyDiscrTree_runMatch___redArg(v_t_3301_, v___x_3314_, v_a_3303_, v_a_3304_, v_a_3305_, v_a_3306_);
if (lean_obj_tag(v___x_3315_) == 0)
{
lean_object* v_a_3316_; lean_object* v___x_3318_; uint8_t v_isShared_3319_; uint8_t v_isSharedCheck_3324_; 
v_a_3316_ = lean_ctor_get(v___x_3315_, 0);
v_isSharedCheck_3324_ = !lean_is_exclusive(v___x_3315_);
if (v_isSharedCheck_3324_ == 0)
{
v___x_3318_ = v___x_3315_;
v_isShared_3319_ = v_isSharedCheck_3324_;
goto v_resetjp_3317_;
}
else
{
lean_inc(v_a_3316_);
lean_dec(v___x_3315_);
v___x_3318_ = lean_box(0);
v_isShared_3319_ = v_isSharedCheck_3324_;
goto v_resetjp_3317_;
}
v_resetjp_3317_:
{
lean_object* v_snd_3320_; lean_object* v___x_3322_; 
v_snd_3320_ = lean_ctor_get(v_a_3316_, 1);
lean_inc(v_snd_3320_);
lean_dec(v_a_3316_);
if (v_isShared_3319_ == 0)
{
lean_ctor_set(v___x_3318_, 0, v_snd_3320_);
v___x_3322_ = v___x_3318_;
goto v_reusejp_3321_;
}
else
{
lean_object* v_reuseFailAlloc_3323_; 
v_reuseFailAlloc_3323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3323_, 0, v_snd_3320_);
v___x_3322_ = v_reuseFailAlloc_3323_;
goto v_reusejp_3321_;
}
v_reusejp_3321_:
{
return v___x_3322_;
}
}
}
else
{
lean_object* v_a_3325_; lean_object* v___x_3327_; uint8_t v_isShared_3328_; uint8_t v_isSharedCheck_3332_; 
v_a_3325_ = lean_ctor_get(v___x_3315_, 0);
v_isSharedCheck_3332_ = !lean_is_exclusive(v___x_3315_);
if (v_isSharedCheck_3332_ == 0)
{
v___x_3327_ = v___x_3315_;
v_isShared_3328_ = v_isSharedCheck_3332_;
goto v_resetjp_3326_;
}
else
{
lean_inc(v_a_3325_);
lean_dec(v___x_3315_);
v___x_3327_ = lean_box(0);
v_isShared_3328_ = v_isSharedCheck_3332_;
goto v_resetjp_3326_;
}
v_resetjp_3326_:
{
lean_object* v___x_3330_; 
if (v_isShared_3328_ == 0)
{
v___x_3330_ = v___x_3327_;
goto v_reusejp_3329_;
}
else
{
lean_object* v_reuseFailAlloc_3331_; 
v_reuseFailAlloc_3331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3331_, 0, v_a_3325_);
v___x_3330_ = v_reuseFailAlloc_3331_;
goto v_reusejp_3329_;
}
v_reusejp_3329_:
{
return v___x_3330_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKey___redArg___boxed(lean_object* v_t_3333_, lean_object* v_path_3334_, lean_object* v_a_3335_, lean_object* v_a_3336_, lean_object* v_a_3337_, lean_object* v_a_3338_, lean_object* v_a_3339_){
_start:
{
lean_object* v_res_3340_; 
v_res_3340_ = l_Lean_Meta_LazyDiscrTree_dropKey___redArg(v_t_3333_, v_path_3334_, v_a_3335_, v_a_3336_, v_a_3337_, v_a_3338_);
lean_dec(v_a_3338_);
lean_dec_ref(v_a_3337_);
lean_dec(v_a_3336_);
lean_dec_ref(v_a_3335_);
return v_res_3340_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKey(lean_object* v_00_u03b1_3341_, lean_object* v_t_3342_, lean_object* v_path_3343_, lean_object* v_a_3344_, lean_object* v_a_3345_, lean_object* v_a_3346_, lean_object* v_a_3347_){
_start:
{
lean_object* v___x_3349_; 
v___x_3349_ = l_Lean_Meta_LazyDiscrTree_dropKey___redArg(v_t_3342_, v_path_3343_, v_a_3344_, v_a_3345_, v_a_3346_, v_a_3347_);
return v___x_3349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKey___boxed(lean_object* v_00_u03b1_3350_, lean_object* v_t_3351_, lean_object* v_path_3352_, lean_object* v_a_3353_, lean_object* v_a_3354_, lean_object* v_a_3355_, lean_object* v_a_3356_, lean_object* v_a_3357_){
_start:
{
lean_object* v_res_3358_; 
v_res_3358_ = l_Lean_Meta_LazyDiscrTree_dropKey(v_00_u03b1_3350_, v_t_3351_, v_path_3352_, v_a_3353_, v_a_3354_, v_a_3355_, v_a_3356_);
lean_dec(v_a_3356_);
lean_dec_ref(v_a_3355_);
lean_dec(v_a_3354_);
lean_dec_ref(v_a_3353_);
return v_res_3358_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg(lean_object* v_score_3361_, lean_object* v_e_3362_, lean_object* v_a_3363_){
_start:
{
lean_object* v___x_3364_; uint8_t v___x_3365_; 
v___x_3364_ = lean_array_get_size(v_a_3363_);
v___x_3365_ = lean_nat_dec_lt(v___x_3364_, v_score_3361_);
if (v___x_3365_ == 0)
{
lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; 
v___x_3366_ = lean_unsigned_to_nat(1u);
v___x_3367_ = lean_mk_empty_array_with_capacity(v___x_3366_);
v___x_3368_ = lean_array_push(v___x_3367_, v_e_3362_);
v___x_3369_ = lean_array_push(v_a_3363_, v___x_3368_);
return v___x_3369_;
}
else
{
lean_object* v___x_3370_; lean_object* v___x_3371_; 
v___x_3370_ = ((lean_object*)(l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg___closed__0));
v___x_3371_ = lean_array_push(v_a_3363_, v___x_3370_);
v_a_3363_ = v___x_3371_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg___boxed(lean_object* v_score_3373_, lean_object* v_e_3374_, lean_object* v_a_3375_){
_start:
{
lean_object* v_res_3376_; 
v_res_3376_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg(v_score_3373_, v_e_3374_, v_a_3375_);
lean_dec(v_score_3373_);
return v_res_3376_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop(lean_object* v_00_u03b1_3377_, lean_object* v_score_3378_, lean_object* v_e_3379_, lean_object* v_a_3380_){
_start:
{
lean_object* v___x_3381_; 
v___x_3381_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg(v_score_3378_, v_e_3379_, v_a_3380_);
return v___x_3381_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___boxed(lean_object* v_00_u03b1_3382_, lean_object* v_score_3383_, lean_object* v_e_3384_, lean_object* v_a_3385_){
_start:
{
lean_object* v_res_3386_; 
v_res_3386_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop(v_00_u03b1_3382_, v_score_3383_, v_e_3384_, v_a_3385_);
lean_dec(v_score_3383_);
return v_res_3386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_push___redArg(lean_object* v_r_3387_, lean_object* v_score_3388_, lean_object* v_e_3389_){
_start:
{
lean_object* v___x_3390_; lean_object* v___x_3391_; uint8_t v___x_3392_; 
v___x_3390_ = lean_array_get_size(v_e_3389_);
v___x_3391_ = lean_unsigned_to_nat(0u);
v___x_3392_ = lean_nat_dec_eq(v___x_3390_, v___x_3391_);
if (v___x_3392_ == 0)
{
lean_object* v___x_3393_; uint8_t v___x_3394_; 
v___x_3393_ = lean_array_get_size(v_r_3387_);
v___x_3394_ = lean_nat_dec_lt(v_score_3388_, v___x_3393_);
if (v___x_3394_ == 0)
{
lean_object* v___x_3395_; 
v___x_3395_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg(v_score_3388_, v_e_3389_, v_r_3387_);
return v___x_3395_;
}
else
{
lean_object* v_v_3396_; lean_object* v___x_3397_; lean_object* v_xs_x27_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; 
v_v_3396_ = lean_array_fget(v_r_3387_, v_score_3388_);
v___x_3397_ = lean_box(0);
v_xs_x27_3398_ = lean_array_fset(v_r_3387_, v_score_3388_, v___x_3397_);
v___x_3399_ = lean_array_push(v_v_3396_, v_e_3389_);
v___x_3400_ = lean_array_fset(v_xs_x27_3398_, v_score_3388_, v___x_3399_);
return v___x_3400_;
}
}
else
{
lean_dec_ref(v_e_3389_);
return v_r_3387_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_push___redArg___boxed(lean_object* v_r_3401_, lean_object* v_score_3402_, lean_object* v_e_3403_){
_start:
{
lean_object* v_res_3404_; 
v_res_3404_ = l_Lean_Meta_LazyDiscrTree_MatchResult_push___redArg(v_r_3401_, v_score_3402_, v_e_3403_);
lean_dec(v_score_3402_);
return v_res_3404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_push(lean_object* v_00_u03b1_3405_, lean_object* v_r_3406_, lean_object* v_score_3407_, lean_object* v_e_3408_){
_start:
{
lean_object* v___x_3409_; 
v___x_3409_ = l_Lean_Meta_LazyDiscrTree_MatchResult_push___redArg(v_r_3406_, v_score_3407_, v_e_3408_);
return v___x_3409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_push___boxed(lean_object* v_00_u03b1_3410_, lean_object* v_r_3411_, lean_object* v_score_3412_, lean_object* v_e_3413_){
_start:
{
lean_object* v_res_3414_; 
v_res_3414_ = l_Lean_Meta_LazyDiscrTree_MatchResult_push(v_00_u03b1_3410_, v_r_3411_, v_score_3412_, v_e_3413_);
lean_dec(v_score_3412_);
return v_res_3414_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___redArg(lean_object* v_as_3415_, size_t v_i_3416_, size_t v_stop_3417_, lean_object* v_b_3418_){
_start:
{
uint8_t v___x_3419_; 
v___x_3419_ = lean_usize_dec_eq(v_i_3416_, v_stop_3417_);
if (v___x_3419_ == 0)
{
lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; size_t v___x_3423_; size_t v___x_3424_; 
v___x_3420_ = lean_array_uget_borrowed(v_as_3415_, v_i_3416_);
v___x_3421_ = lean_array_get_size(v___x_3420_);
v___x_3422_ = lean_nat_add(v_b_3418_, v___x_3421_);
lean_dec(v_b_3418_);
v___x_3423_ = ((size_t)1ULL);
v___x_3424_ = lean_usize_add(v_i_3416_, v___x_3423_);
v_i_3416_ = v___x_3424_;
v_b_3418_ = v___x_3422_;
goto _start;
}
else
{
return v_b_3418_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___redArg___boxed(lean_object* v_as_3426_, lean_object* v_i_3427_, lean_object* v_stop_3428_, lean_object* v_b_3429_){
_start:
{
size_t v_i_boxed_3430_; size_t v_stop_boxed_3431_; lean_object* v_res_3432_; 
v_i_boxed_3430_ = lean_unbox_usize(v_i_3427_);
lean_dec(v_i_3427_);
v_stop_boxed_3431_ = lean_unbox_usize(v_stop_3428_);
lean_dec(v_stop_3428_);
v_res_3432_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___redArg(v_as_3426_, v_i_boxed_3430_, v_stop_boxed_3431_, v_b_3429_);
lean_dec_ref(v_as_3426_);
return v_res_3432_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___redArg(lean_object* v_as_3433_, size_t v_i_3434_, size_t v_stop_3435_, lean_object* v_b_3436_){
_start:
{
lean_object* v___y_3438_; uint8_t v___x_3442_; 
v___x_3442_ = lean_usize_dec_eq(v_i_3434_, v_stop_3435_);
if (v___x_3442_ == 0)
{
lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; uint8_t v___x_3446_; 
v___x_3443_ = lean_array_uget_borrowed(v_as_3433_, v_i_3434_);
v___x_3444_ = lean_unsigned_to_nat(0u);
v___x_3445_ = lean_array_get_size(v___x_3443_);
v___x_3446_ = lean_nat_dec_lt(v___x_3444_, v___x_3445_);
if (v___x_3446_ == 0)
{
v___y_3438_ = v_b_3436_;
goto v___jp_3437_;
}
else
{
size_t v___x_3447_; size_t v___x_3448_; lean_object* v___x_3449_; 
v___x_3447_ = ((size_t)0ULL);
v___x_3448_ = lean_usize_of_nat(v___x_3445_);
v___x_3449_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___redArg(v___x_3443_, v___x_3447_, v___x_3448_, v_b_3436_);
v___y_3438_ = v___x_3449_;
goto v___jp_3437_;
}
}
else
{
return v_b_3436_;
}
v___jp_3437_:
{
size_t v___x_3439_; size_t v___x_3440_; 
v___x_3439_ = ((size_t)1ULL);
v___x_3440_ = lean_usize_add(v_i_3434_, v___x_3439_);
v_i_3434_ = v___x_3440_;
v_b_3436_ = v___y_3438_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___redArg___boxed(lean_object* v_as_3450_, lean_object* v_i_3451_, lean_object* v_stop_3452_, lean_object* v_b_3453_){
_start:
{
size_t v_i_boxed_3454_; size_t v_stop_boxed_3455_; lean_object* v_res_3456_; 
v_i_boxed_3454_ = lean_unbox_usize(v_i_3451_);
lean_dec(v_i_3451_);
v_stop_boxed_3455_ = lean_unbox_usize(v_stop_3452_);
lean_dec(v_stop_3452_);
v_res_3456_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___redArg(v_as_3450_, v_i_boxed_3454_, v_stop_boxed_3455_, v_b_3453_);
lean_dec_ref(v_as_3450_);
return v_res_3456_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_size___redArg(lean_object* v_mr_3457_){
_start:
{
lean_object* v___x_3458_; lean_object* v___x_3459_; uint8_t v___x_3460_; 
v___x_3458_ = lean_unsigned_to_nat(0u);
v___x_3459_ = lean_array_get_size(v_mr_3457_);
v___x_3460_ = lean_nat_dec_lt(v___x_3458_, v___x_3459_);
if (v___x_3460_ == 0)
{
return v___x_3458_;
}
else
{
size_t v___x_3461_; size_t v___x_3462_; lean_object* v___x_3463_; 
v___x_3461_ = ((size_t)0ULL);
v___x_3462_ = lean_usize_of_nat(v___x_3459_);
v___x_3463_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___redArg(v_mr_3457_, v___x_3461_, v___x_3462_, v___x_3458_);
return v___x_3463_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_size___redArg___boxed(lean_object* v_mr_3464_){
_start:
{
lean_object* v_res_3465_; 
v_res_3465_ = l_Lean_Meta_LazyDiscrTree_MatchResult_size___redArg(v_mr_3464_);
lean_dec_ref(v_mr_3464_);
return v_res_3465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_size(lean_object* v_00_u03b1_3466_, lean_object* v_mr_3467_){
_start:
{
lean_object* v___x_3468_; 
v___x_3468_ = l_Lean_Meta_LazyDiscrTree_MatchResult_size___redArg(v_mr_3467_);
return v___x_3468_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_size___boxed(lean_object* v_00_u03b1_3469_, lean_object* v_mr_3470_){
_start:
{
lean_object* v_res_3471_; 
v_res_3471_ = l_Lean_Meta_LazyDiscrTree_MatchResult_size(v_00_u03b1_3469_, v_mr_3470_);
lean_dec_ref(v_mr_3470_);
return v_res_3471_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0(lean_object* v_00_u03b1_3472_, lean_object* v_as_3473_, size_t v_i_3474_, size_t v_stop_3475_, lean_object* v_b_3476_){
_start:
{
lean_object* v___x_3477_; 
v___x_3477_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___redArg(v_as_3473_, v_i_3474_, v_stop_3475_, v_b_3476_);
return v___x_3477_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___boxed(lean_object* v_00_u03b1_3478_, lean_object* v_as_3479_, lean_object* v_i_3480_, lean_object* v_stop_3481_, lean_object* v_b_3482_){
_start:
{
size_t v_i_boxed_3483_; size_t v_stop_boxed_3484_; lean_object* v_res_3485_; 
v_i_boxed_3483_ = lean_unbox_usize(v_i_3480_);
lean_dec(v_i_3480_);
v_stop_boxed_3484_ = lean_unbox_usize(v_stop_3481_);
lean_dec(v_stop_3481_);
v_res_3485_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0(v_00_u03b1_3478_, v_as_3479_, v_i_boxed_3483_, v_stop_boxed_3484_, v_b_3482_);
lean_dec_ref(v_as_3479_);
return v_res_3485_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1(lean_object* v_00_u03b1_3486_, lean_object* v_as_3487_, size_t v_i_3488_, size_t v_stop_3489_, lean_object* v_b_3490_){
_start:
{
lean_object* v___x_3491_; 
v___x_3491_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___redArg(v_as_3487_, v_i_3488_, v_stop_3489_, v_b_3490_);
return v___x_3491_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___boxed(lean_object* v_00_u03b1_3492_, lean_object* v_as_3493_, lean_object* v_i_3494_, lean_object* v_stop_3495_, lean_object* v_b_3496_){
_start:
{
size_t v_i_boxed_3497_; size_t v_stop_boxed_3498_; lean_object* v_res_3499_; 
v_i_boxed_3497_ = lean_unbox_usize(v_i_3494_);
lean_dec(v_i_3494_);
v_stop_boxed_3498_ = lean_unbox_usize(v_stop_3495_);
lean_dec(v_stop_3495_);
v_res_3499_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1(v_00_u03b1_3492_, v_as_3493_, v_i_boxed_3497_, v_stop_boxed_3498_, v_b_3496_);
lean_dec_ref(v_as_3493_);
return v_res_3499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__0(lean_object* v_f_3500_, lean_object* v_j_3501_, lean_object* v_x_3502_){
_start:
{
lean_object* v___x_3503_; 
v___x_3503_ = lean_apply_2(v_f_3500_, v_j_3501_, v_x_3502_);
return v___x_3503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1(lean_object* v___f_3523_, lean_object* v_x1_3524_, lean_object* v_x2_3525_){
_start:
{
lean_object* v___x_3526_; size_t v_sz_3527_; size_t v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; 
v___x_3526_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__9));
v_sz_3527_ = lean_array_size(v_x2_3525_);
v___x_3528_ = ((size_t)0ULL);
v___x_3529_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3526_, v___f_3523_, v_sz_3527_, v___x_3528_, v_x2_3525_);
v___x_3530_ = l_Array_append___redArg(v_x1_3524_, v___x_3529_);
lean_dec(v___x_3529_);
return v___x_3530_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__2(lean_object* v_n_3531_, lean_object* v_mr_3532_, lean_object* v_f_3533_, lean_object* v_i_3534_, lean_object* v_x_3535_, lean_object* v_r_3536_){
_start:
{
lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v_j_3539_; lean_object* v_b_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; uint8_t v___x_3544_; 
v___x_3537_ = lean_unsigned_to_nat(1u);
v___x_3538_ = lean_nat_sub(v_n_3531_, v___x_3537_);
v_j_3539_ = lean_nat_sub(v___x_3538_, v_i_3534_);
lean_dec(v___x_3538_);
v_b_3540_ = lean_array_fget_borrowed(v_mr_3532_, v_j_3539_);
v___x_3541_ = lean_unsigned_to_nat(0u);
v___x_3542_ = lean_array_get_size(v_b_3540_);
v___x_3543_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__9));
v___x_3544_ = lean_nat_dec_lt(v___x_3541_, v___x_3542_);
if (v___x_3544_ == 0)
{
lean_dec(v_j_3539_);
lean_dec(v_f_3533_);
return v_r_3536_;
}
else
{
lean_object* v___f_3545_; lean_object* v___f_3546_; size_t v___x_3547_; size_t v___x_3548_; lean_object* v___x_3549_; 
v___f_3545_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3545_, 0, v_f_3533_);
lean_closure_set(v___f_3545_, 1, v_j_3539_);
v___f_3546_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1), 3, 1);
lean_closure_set(v___f_3546_, 0, v___f_3545_);
v___x_3547_ = ((size_t)0ULL);
v___x_3548_ = lean_usize_of_nat(v___x_3542_);
lean_inc(v_b_3540_);
v___x_3549_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3543_, v___f_3546_, v_b_3540_, v___x_3547_, v___x_3548_, v_r_3536_);
return v___x_3549_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__2___boxed(lean_object* v_n_3550_, lean_object* v_mr_3551_, lean_object* v_f_3552_, lean_object* v_i_3553_, lean_object* v_x_3554_, lean_object* v_r_3555_){
_start:
{
lean_object* v_res_3556_; 
v_res_3556_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__2(v_n_3550_, v_mr_3551_, v_f_3552_, v_i_3553_, v_x_3554_, v_r_3555_);
lean_dec(v_i_3553_);
lean_dec_ref(v_mr_3551_);
lean_dec(v_n_3550_);
return v_res_3556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg(lean_object* v_mr_3557_, lean_object* v_a_3558_, lean_object* v_f_3559_){
_start:
{
lean_object* v_n_3560_; lean_object* v___f_3561_; lean_object* v___x_3562_; 
v_n_3560_ = lean_array_get_size(v_mr_3557_);
v___f_3561_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__2___boxed), 6, 3);
lean_closure_set(v___f_3561_, 0, v_n_3560_);
lean_closure_set(v___f_3561_, 1, v_mr_3557_);
lean_closure_set(v___f_3561_, 2, v_f_3559_);
v___x_3562_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop(lean_box(0), v_n_3560_, v___f_3561_, v_n_3560_, lean_box(0), v_a_3558_);
return v___x_3562_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux(lean_object* v_00_u03b1_3563_, lean_object* v_00_u03b2_3564_, lean_object* v_mr_3565_, lean_object* v_a_3566_, lean_object* v_f_3567_){
_start:
{
lean_object* v___x_3568_; 
v___x_3568_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg(v_mr_3565_, v_a_3566_, v_f_3567_);
return v___x_3568_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___redArg(size_t v_sz_3569_, size_t v_i_3570_, lean_object* v_bs_3571_){
_start:
{
uint8_t v___x_3572_; 
v___x_3572_ = lean_usize_dec_lt(v_i_3570_, v_sz_3569_);
if (v___x_3572_ == 0)
{
return v_bs_3571_;
}
else
{
lean_object* v_v_3573_; lean_object* v___x_3574_; lean_object* v_bs_x27_3575_; size_t v___x_3576_; size_t v___x_3577_; lean_object* v___x_3578_; 
v_v_3573_ = lean_array_uget(v_bs_3571_, v_i_3570_);
v___x_3574_ = lean_unsigned_to_nat(0u);
v_bs_x27_3575_ = lean_array_uset(v_bs_3571_, v_i_3570_, v___x_3574_);
v___x_3576_ = ((size_t)1ULL);
v___x_3577_ = lean_usize_add(v_i_3570_, v___x_3576_);
v___x_3578_ = lean_array_uset(v_bs_x27_3575_, v_i_3570_, v_v_3573_);
v_i_3570_ = v___x_3577_;
v_bs_3571_ = v___x_3578_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___redArg___boxed(lean_object* v_sz_3580_, lean_object* v_i_3581_, lean_object* v_bs_3582_){
_start:
{
size_t v_sz_boxed_3583_; size_t v_i_boxed_3584_; lean_object* v_res_3585_; 
v_sz_boxed_3583_ = lean_unbox_usize(v_sz_3580_);
lean_dec(v_sz_3580_);
v_i_boxed_3584_ = lean_unbox_usize(v_i_3581_);
lean_dec(v_i_3581_);
v_res_3585_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___redArg(v_sz_boxed_3583_, v_i_boxed_3584_, v_bs_3582_);
return v_res_3585_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___redArg(lean_object* v_as_3586_, size_t v_i_3587_, size_t v_stop_3588_, lean_object* v_b_3589_){
_start:
{
uint8_t v___x_3590_; 
v___x_3590_ = lean_usize_dec_eq(v_i_3587_, v_stop_3588_);
if (v___x_3590_ == 0)
{
lean_object* v___x_3591_; size_t v_sz_3592_; size_t v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; size_t v___x_3596_; size_t v___x_3597_; 
v___x_3591_ = lean_array_uget_borrowed(v_as_3586_, v_i_3587_);
v_sz_3592_ = lean_array_size(v___x_3591_);
v___x_3593_ = ((size_t)0ULL);
lean_inc(v___x_3591_);
v___x_3594_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___redArg(v_sz_3592_, v___x_3593_, v___x_3591_);
v___x_3595_ = l_Array_append___redArg(v_b_3589_, v___x_3594_);
lean_dec_ref(v___x_3594_);
v___x_3596_ = ((size_t)1ULL);
v___x_3597_ = lean_usize_add(v_i_3587_, v___x_3596_);
v_i_3587_ = v___x_3597_;
v_b_3589_ = v___x_3595_;
goto _start;
}
else
{
return v_b_3589_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___redArg___boxed(lean_object* v_as_3599_, lean_object* v_i_3600_, lean_object* v_stop_3601_, lean_object* v_b_3602_){
_start:
{
size_t v_i_boxed_3603_; size_t v_stop_boxed_3604_; lean_object* v_res_3605_; 
v_i_boxed_3603_ = lean_unbox_usize(v_i_3600_);
lean_dec(v_i_3600_);
v_stop_boxed_3604_ = lean_unbox_usize(v_stop_3601_);
lean_dec(v_stop_3601_);
v_res_3605_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___redArg(v_as_3599_, v_i_boxed_3603_, v_stop_boxed_3604_, v_b_3602_);
lean_dec_ref(v_as_3599_);
return v_res_3605_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___redArg(lean_object* v_n_3606_, lean_object* v_aa_3607_, lean_object* v_n_3608_, lean_object* v_j_3609_, lean_object* v_a_3610_){
_start:
{
lean_object* v_zero_3611_; uint8_t v_isZero_3612_; 
v_zero_3611_ = lean_unsigned_to_nat(0u);
v_isZero_3612_ = lean_nat_dec_eq(v_j_3609_, v_zero_3611_);
if (v_isZero_3612_ == 1)
{
lean_dec(v_j_3609_);
return v_a_3610_;
}
else
{
lean_object* v_one_3613_; lean_object* v_n_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; lean_object* v_j_3617_; lean_object* v_b_3618_; lean_object* v___x_3619_; uint8_t v___x_3620_; 
v_one_3613_ = lean_unsigned_to_nat(1u);
v_n_3614_ = lean_nat_sub(v_j_3609_, v_one_3613_);
v___x_3615_ = lean_nat_sub(v_n_3608_, v_j_3609_);
lean_dec(v_j_3609_);
v___x_3616_ = lean_nat_sub(v_n_3606_, v_one_3613_);
v_j_3617_ = lean_nat_sub(v___x_3616_, v___x_3615_);
lean_dec(v___x_3615_);
lean_dec(v___x_3616_);
v_b_3618_ = lean_array_fget_borrowed(v_aa_3607_, v_j_3617_);
lean_dec(v_j_3617_);
v___x_3619_ = lean_array_get_size(v_b_3618_);
v___x_3620_ = lean_nat_dec_lt(v_zero_3611_, v___x_3619_);
if (v___x_3620_ == 0)
{
v_j_3609_ = v_n_3614_;
goto _start;
}
else
{
size_t v___x_3622_; size_t v___x_3623_; lean_object* v___x_3624_; 
v___x_3622_ = ((size_t)0ULL);
v___x_3623_ = lean_usize_of_nat(v___x_3619_);
v___x_3624_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___redArg(v_b_3618_, v___x_3622_, v___x_3623_, v_a_3610_);
v_j_3609_ = v_n_3614_;
v_a_3610_ = v___x_3624_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___redArg___boxed(lean_object* v_n_3626_, lean_object* v_aa_3627_, lean_object* v_n_3628_, lean_object* v_j_3629_, lean_object* v_a_3630_){
_start:
{
lean_object* v_res_3631_; 
v_res_3631_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___redArg(v_n_3626_, v_aa_3627_, v_n_3628_, v_j_3629_, v_a_3630_);
lean_dec(v_n_3628_);
lean_dec_ref(v_aa_3627_);
lean_dec(v_n_3626_);
return v_res_3631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___redArg(lean_object* v_mr_3632_, lean_object* v_a_3633_){
_start:
{
lean_object* v_n_3634_; lean_object* v___x_3635_; 
v_n_3634_ = lean_array_get_size(v_mr_3632_);
v___x_3635_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___redArg(v_n_3634_, v_mr_3632_, v_n_3634_, v_n_3634_, v_a_3633_);
return v___x_3635_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___redArg___boxed(lean_object* v_mr_3636_, lean_object* v_a_3637_){
_start:
{
lean_object* v_res_3638_; 
v_res_3638_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___redArg(v_mr_3636_, v_a_3637_);
lean_dec_ref(v_mr_3636_);
return v_res_3638_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults___redArg(lean_object* v_mr_3639_, lean_object* v_a_3640_){
_start:
{
lean_object* v___x_3641_; 
v___x_3641_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___redArg(v_mr_3639_, v_a_3640_);
return v___x_3641_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults___redArg___boxed(lean_object* v_mr_3642_, lean_object* v_a_3643_){
_start:
{
lean_object* v_res_3644_; 
v_res_3644_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults___redArg(v_mr_3642_, v_a_3643_);
lean_dec_ref(v_mr_3642_);
return v_res_3644_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults(lean_object* v_00_u03b1_3645_, lean_object* v_mr_3646_, lean_object* v_a_3647_){
_start:
{
lean_object* v___x_3648_; 
v___x_3648_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___redArg(v_mr_3646_, v_a_3647_);
return v___x_3648_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults___boxed(lean_object* v_00_u03b1_3649_, lean_object* v_mr_3650_, lean_object* v_a_3651_){
_start:
{
lean_object* v_res_3652_; 
v_res_3652_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults(v_00_u03b1_3649_, v_mr_3650_, v_a_3651_);
lean_dec_ref(v_mr_3650_);
return v_res_3652_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0(lean_object* v_00_u03b1_3653_, lean_object* v_mr_3654_, lean_object* v_a_3655_){
_start:
{
lean_object* v___x_3656_; 
v___x_3656_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___redArg(v_mr_3654_, v_a_3655_);
return v___x_3656_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___boxed(lean_object* v_00_u03b1_3657_, lean_object* v_mr_3658_, lean_object* v_a_3659_){
_start:
{
lean_object* v_res_3660_; 
v_res_3660_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0(v_00_u03b1_3657_, v_mr_3658_, v_a_3659_);
lean_dec_ref(v_mr_3658_);
return v_res_3660_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0(lean_object* v_00_u03b1_3661_, size_t v_sz_3662_, size_t v_i_3663_, lean_object* v_bs_3664_){
_start:
{
lean_object* v___x_3665_; 
v___x_3665_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___redArg(v_sz_3662_, v_i_3663_, v_bs_3664_);
return v___x_3665_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___boxed(lean_object* v_00_u03b1_3666_, lean_object* v_sz_3667_, lean_object* v_i_3668_, lean_object* v_bs_3669_){
_start:
{
size_t v_sz_boxed_3670_; size_t v_i_boxed_3671_; lean_object* v_res_3672_; 
v_sz_boxed_3670_ = lean_unbox_usize(v_sz_3667_);
lean_dec(v_sz_3667_);
v_i_boxed_3671_ = lean_unbox_usize(v_i_3668_);
lean_dec(v_i_3668_);
v_res_3672_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0(v_00_u03b1_3666_, v_sz_boxed_3670_, v_i_boxed_3671_, v_bs_3669_);
return v_res_3672_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1(lean_object* v_00_u03b1_3673_, lean_object* v_as_3674_, size_t v_i_3675_, size_t v_stop_3676_, lean_object* v_b_3677_){
_start:
{
lean_object* v___x_3678_; 
v___x_3678_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___redArg(v_as_3674_, v_i_3675_, v_stop_3676_, v_b_3677_);
return v___x_3678_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___boxed(lean_object* v_00_u03b1_3679_, lean_object* v_as_3680_, lean_object* v_i_3681_, lean_object* v_stop_3682_, lean_object* v_b_3683_){
_start:
{
size_t v_i_boxed_3684_; size_t v_stop_boxed_3685_; lean_object* v_res_3686_; 
v_i_boxed_3684_ = lean_unbox_usize(v_i_3681_);
lean_dec(v_i_3681_);
v_stop_boxed_3685_ = lean_unbox_usize(v_stop_3682_);
lean_dec(v_stop_3682_);
v_res_3686_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1(v_00_u03b1_3679_, v_as_3680_, v_i_boxed_3684_, v_stop_boxed_3685_, v_b_3683_);
lean_dec_ref(v_as_3680_);
return v_res_3686_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2(lean_object* v_00_u03b1_3687_, lean_object* v_n_3688_, lean_object* v_aa_3689_, lean_object* v_n_3690_, lean_object* v_j_3691_, lean_object* v_a_3692_, lean_object* v_a_3693_){
_start:
{
lean_object* v___x_3694_; 
v___x_3694_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___redArg(v_n_3688_, v_aa_3689_, v_n_3690_, v_j_3691_, v_a_3693_);
return v___x_3694_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___boxed(lean_object* v_00_u03b1_3695_, lean_object* v_n_3696_, lean_object* v_aa_3697_, lean_object* v_n_3698_, lean_object* v_j_3699_, lean_object* v_a_3700_, lean_object* v_a_3701_){
_start:
{
lean_object* v_res_3702_; 
v_res_3702_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2(v_00_u03b1_3695_, v_n_3696_, v_aa_3697_, v_n_3698_, v_j_3699_, v_a_3700_, v_a_3701_);
lean_dec(v_n_3698_);
lean_dec_ref(v_aa_3697_);
lean_dec(v_n_3696_);
return v_res_3702_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg___lam__0(lean_object* v_snd_3710_, lean_object* v___x_3711_, lean_object* v_score_3712_, lean_object* v___x_3713_, lean_object* v_k_3714_, lean_object* v_args_3715_, lean_object* v_cases_3716_){
_start:
{
lean_object* v___x_3717_; 
v___x_3717_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(v_snd_3710_, v_k_3714_);
if (lean_obj_tag(v___x_3717_) == 0)
{
lean_dec_ref(v___x_3711_);
return v_cases_3716_;
}
else
{
lean_object* v_val_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; 
v_val_3718_ = lean_ctor_get(v___x_3717_, 0);
lean_inc(v_val_3718_);
lean_dec_ref_known(v___x_3717_, 1);
v___x_3719_ = l_Array_append___redArg(v___x_3711_, v_args_3715_);
v___x_3720_ = lean_nat_add(v_score_3712_, v___x_3713_);
v___x_3721_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3721_, 0, v___x_3719_);
lean_ctor_set(v___x_3721_, 1, v___x_3720_);
lean_ctor_set(v___x_3721_, 2, v_val_3718_);
v___x_3722_ = lean_array_push(v_cases_3716_, v___x_3721_);
return v___x_3722_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg___lam__0___boxed(lean_object* v_snd_3723_, lean_object* v___x_3724_, lean_object* v_score_3725_, lean_object* v___x_3726_, lean_object* v_k_3727_, lean_object* v_args_3728_, lean_object* v_cases_3729_){
_start:
{
lean_object* v_res_3730_; 
v_res_3730_ = l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg___lam__0(v_snd_3723_, v___x_3724_, v_score_3725_, v___x_3726_, v_k_3727_, v_args_3728_, v_cases_3729_);
lean_dec_ref(v_args_3728_);
lean_dec(v_k_3727_);
lean_dec(v___x_3726_);
lean_dec(v_score_3725_);
lean_dec_ref(v_snd_3723_);
return v_res_3730_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg(lean_object* v_cases_3731_, lean_object* v_result_3732_, lean_object* v_a_3733_, lean_object* v_a_3734_, lean_object* v_a_3735_, lean_object* v_a_3736_, lean_object* v_a_3737_){
_start:
{
lean_object* v___x_3739_; lean_object* v___x_3740_; uint8_t v___x_3741_; 
v___x_3739_ = lean_array_get_size(v_cases_3731_);
v___x_3740_ = lean_unsigned_to_nat(0u);
v___x_3741_ = lean_nat_dec_eq(v___x_3739_, v___x_3740_);
if (v___x_3741_ == 0)
{
lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v_ca_3745_; lean_object* v_todo_3746_; lean_object* v_score_3747_; lean_object* v_c_3748_; lean_object* v___x_3750_; uint8_t v_isShared_3751_; uint8_t v_isSharedCheck_3815_; 
v___x_3742_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default));
v___x_3743_ = lean_unsigned_to_nat(1u);
v___x_3744_ = lean_nat_sub(v___x_3739_, v___x_3743_);
v_ca_3745_ = lean_array_get(v___x_3742_, v_cases_3731_, v___x_3744_);
lean_dec(v___x_3744_);
v_todo_3746_ = lean_ctor_get(v_ca_3745_, 0);
v_score_3747_ = lean_ctor_get(v_ca_3745_, 1);
v_c_3748_ = lean_ctor_get(v_ca_3745_, 2);
v_isSharedCheck_3815_ = !lean_is_exclusive(v_ca_3745_);
if (v_isSharedCheck_3815_ == 0)
{
v___x_3750_ = v_ca_3745_;
v_isShared_3751_ = v_isSharedCheck_3815_;
goto v_resetjp_3749_;
}
else
{
lean_inc(v_c_3748_);
lean_inc(v_score_3747_);
lean_inc(v_todo_3746_);
lean_dec(v_ca_3745_);
v___x_3750_ = lean_box(0);
v_isShared_3751_ = v_isSharedCheck_3815_;
goto v_resetjp_3749_;
}
v_resetjp_3749_:
{
lean_object* v___x_3752_; lean_object* v_cases_3753_; lean_object* v___x_3754_; 
v___x_3752_ = l_Lean_instInhabitedExpr;
v_cases_3753_ = lean_array_pop(v_cases_3731_);
v___x_3754_ = l_Lean_Meta_LazyDiscrTree_evalNode___redArg(v_c_3748_, v_a_3733_, v_a_3734_, v_a_3735_, v_a_3736_, v_a_3737_);
lean_dec(v_c_3748_);
if (lean_obj_tag(v___x_3754_) == 0)
{
lean_object* v_a_3755_; lean_object* v___y_3757_; uint8_t v___y_3758_; lean_object* v___y_3759_; lean_object* v___y_3760_; lean_object* v_snd_3783_; lean_object* v_fst_3784_; lean_object* v_fst_3785_; lean_object* v_snd_3786_; uint8_t v___y_3788_; lean_object* v___x_3799_; uint8_t v___x_3800_; 
v_a_3755_ = lean_ctor_get(v___x_3754_, 0);
lean_inc(v_a_3755_);
lean_dec_ref_known(v___x_3754_, 1);
v_snd_3783_ = lean_ctor_get(v_a_3755_, 1);
lean_inc(v_snd_3783_);
v_fst_3784_ = lean_ctor_get(v_a_3755_, 0);
lean_inc(v_fst_3784_);
lean_dec(v_a_3755_);
v_fst_3785_ = lean_ctor_get(v_snd_3783_, 0);
lean_inc(v_fst_3785_);
v_snd_3786_ = lean_ctor_get(v_snd_3783_, 1);
lean_inc(v_snd_3786_);
lean_dec(v_snd_3783_);
v___x_3799_ = lean_array_get_size(v_todo_3746_);
v___x_3800_ = lean_nat_dec_eq(v___x_3799_, v___x_3740_);
if (v___x_3800_ == 0)
{
uint8_t v___x_3801_; 
lean_dec(v_fst_3784_);
v___x_3801_ = lean_nat_dec_eq(v_fst_3785_, v___x_3740_);
if (v___x_3801_ == 0)
{
v___y_3788_ = v___x_3801_;
goto v___jp_3787_;
}
else
{
lean_object* v_size_3802_; uint8_t v___x_3803_; 
v_size_3802_ = lean_ctor_get(v_snd_3786_, 0);
v___x_3803_ = lean_nat_dec_eq(v_size_3802_, v___x_3740_);
if (v___x_3803_ == 0)
{
v___y_3788_ = v___x_3803_;
goto v___jp_3787_;
}
else
{
lean_dec(v_snd_3786_);
lean_dec(v_fst_3785_);
lean_del_object(v___x_3750_);
lean_dec(v_score_3747_);
lean_dec_ref(v_todo_3746_);
v_cases_3731_ = v_cases_3753_;
goto _start;
}
}
}
else
{
lean_object* v___x_3805_; 
lean_dec(v_snd_3786_);
lean_dec(v_fst_3785_);
lean_del_object(v___x_3750_);
lean_dec_ref(v_todo_3746_);
v___x_3805_ = l_Lean_Meta_LazyDiscrTree_MatchResult_push___redArg(v_result_3732_, v_score_3747_, v_fst_3784_);
lean_dec(v_score_3747_);
v_cases_3731_ = v_cases_3753_;
v_result_3732_ = v___x_3805_;
goto _start;
}
v___jp_3756_:
{
uint8_t v___x_3761_; lean_object* v___x_3762_; 
v___x_3761_ = 1;
v___x_3762_ = l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs(v___y_3759_, v___x_3761_, v___y_3758_, v_a_3734_, v_a_3735_, v_a_3736_, v_a_3737_);
if (lean_obj_tag(v___x_3762_) == 0)
{
lean_object* v_a_3763_; lean_object* v_fst_3764_; 
v_a_3763_ = lean_ctor_get(v___x_3762_, 0);
lean_inc(v_a_3763_);
lean_dec_ref_known(v___x_3762_, 1);
v_fst_3764_ = lean_ctor_get(v_a_3763_, 0);
lean_inc(v_fst_3764_);
switch(lean_obj_tag(v_fst_3764_))
{
case 3:
{
lean_dec(v_a_3763_);
lean_dec_ref(v___y_3757_);
v_cases_3731_ = v___y_3760_;
goto _start;
}
case 5:
{
lean_object* v_snd_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; 
v_snd_3766_ = lean_ctor_get(v_a_3763_, 1);
lean_inc(v_snd_3766_);
lean_dec(v_a_3763_);
v___x_3767_ = lean_box(4);
v___x_3768_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0));
lean_inc_ref(v___y_3757_);
v___x_3769_ = lean_apply_3(v___y_3757_, v___x_3767_, v___x_3768_, v___y_3760_);
v___x_3770_ = lean_apply_3(v___y_3757_, v_fst_3764_, v_snd_3766_, v___x_3769_);
v_cases_3731_ = v___x_3770_;
goto _start;
}
default: 
{
lean_object* v_snd_3772_; lean_object* v___x_3773_; 
v_snd_3772_ = lean_ctor_get(v_a_3763_, 1);
lean_inc(v_snd_3772_);
lean_dec(v_a_3763_);
v___x_3773_ = lean_apply_3(v___y_3757_, v_fst_3764_, v_snd_3772_, v___y_3760_);
v_cases_3731_ = v___x_3773_;
goto _start;
}
}
}
else
{
lean_object* v_a_3775_; lean_object* v___x_3777_; uint8_t v_isShared_3778_; uint8_t v_isSharedCheck_3782_; 
lean_dec_ref(v___y_3760_);
lean_dec_ref(v___y_3757_);
lean_dec_ref(v_result_3732_);
v_a_3775_ = lean_ctor_get(v___x_3762_, 0);
v_isSharedCheck_3782_ = !lean_is_exclusive(v___x_3762_);
if (v_isSharedCheck_3782_ == 0)
{
v___x_3777_ = v___x_3762_;
v_isShared_3778_ = v_isSharedCheck_3782_;
goto v_resetjp_3776_;
}
else
{
lean_inc(v_a_3775_);
lean_dec(v___x_3762_);
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
v___jp_3787_:
{
lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___f_3793_; uint8_t v___x_3794_; 
v___x_3789_ = lean_array_get_size(v_todo_3746_);
v___x_3790_ = lean_nat_sub(v___x_3789_, v___x_3743_);
v___x_3791_ = lean_array_get(v___x_3752_, v_todo_3746_, v___x_3790_);
lean_dec(v___x_3790_);
v___x_3792_ = lean_array_pop(v_todo_3746_);
lean_inc(v_score_3747_);
lean_inc_ref(v___x_3792_);
v___f_3793_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg___lam__0___boxed), 7, 4);
lean_closure_set(v___f_3793_, 0, v_snd_3786_);
lean_closure_set(v___f_3793_, 1, v___x_3792_);
lean_closure_set(v___f_3793_, 2, v_score_3747_);
lean_closure_set(v___f_3793_, 3, v___x_3743_);
v___x_3794_ = lean_nat_dec_eq(v_fst_3785_, v___x_3740_);
if (v___x_3794_ == 0)
{
lean_object* v___x_3796_; 
if (v_isShared_3751_ == 0)
{
lean_ctor_set(v___x_3750_, 2, v_fst_3785_);
lean_ctor_set(v___x_3750_, 0, v___x_3792_);
v___x_3796_ = v___x_3750_;
goto v_reusejp_3795_;
}
else
{
lean_object* v_reuseFailAlloc_3798_; 
v_reuseFailAlloc_3798_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3798_, 0, v___x_3792_);
lean_ctor_set(v_reuseFailAlloc_3798_, 1, v_score_3747_);
lean_ctor_set(v_reuseFailAlloc_3798_, 2, v_fst_3785_);
v___x_3796_ = v_reuseFailAlloc_3798_;
goto v_reusejp_3795_;
}
v_reusejp_3795_:
{
lean_object* v___x_3797_; 
v___x_3797_ = lean_array_push(v_cases_3753_, v___x_3796_);
v___y_3757_ = v___f_3793_;
v___y_3758_ = v___y_3788_;
v___y_3759_ = v___x_3791_;
v___y_3760_ = v___x_3797_;
goto v___jp_3756_;
}
}
else
{
lean_dec_ref(v___x_3792_);
lean_dec(v_fst_3785_);
lean_del_object(v___x_3750_);
lean_dec(v_score_3747_);
v___y_3757_ = v___f_3793_;
v___y_3758_ = v___y_3788_;
v___y_3759_ = v___x_3791_;
v___y_3760_ = v_cases_3753_;
goto v___jp_3756_;
}
}
}
else
{
lean_object* v_a_3807_; lean_object* v___x_3809_; uint8_t v_isShared_3810_; uint8_t v_isSharedCheck_3814_; 
lean_dec_ref(v_cases_3753_);
lean_del_object(v___x_3750_);
lean_dec(v_score_3747_);
lean_dec_ref(v_todo_3746_);
lean_dec_ref(v_result_3732_);
v_a_3807_ = lean_ctor_get(v___x_3754_, 0);
v_isSharedCheck_3814_ = !lean_is_exclusive(v___x_3754_);
if (v_isSharedCheck_3814_ == 0)
{
v___x_3809_ = v___x_3754_;
v_isShared_3810_ = v_isSharedCheck_3814_;
goto v_resetjp_3808_;
}
else
{
lean_inc(v_a_3807_);
lean_dec(v___x_3754_);
v___x_3809_ = lean_box(0);
v_isShared_3810_ = v_isSharedCheck_3814_;
goto v_resetjp_3808_;
}
v_resetjp_3808_:
{
lean_object* v___x_3812_; 
if (v_isShared_3810_ == 0)
{
v___x_3812_ = v___x_3809_;
goto v_reusejp_3811_;
}
else
{
lean_object* v_reuseFailAlloc_3813_; 
v_reuseFailAlloc_3813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3813_, 0, v_a_3807_);
v___x_3812_ = v_reuseFailAlloc_3813_;
goto v_reusejp_3811_;
}
v_reusejp_3811_:
{
return v___x_3812_;
}
}
}
}
}
else
{
lean_object* v___x_3816_; 
lean_dec_ref(v_cases_3731_);
v___x_3816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3816_, 0, v_result_3732_);
return v___x_3816_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg___boxed(lean_object* v_cases_3817_, lean_object* v_result_3818_, lean_object* v_a_3819_, lean_object* v_a_3820_, lean_object* v_a_3821_, lean_object* v_a_3822_, lean_object* v_a_3823_, lean_object* v_a_3824_){
_start:
{
lean_object* v_res_3825_; 
v_res_3825_ = l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg(v_cases_3817_, v_result_3818_, v_a_3819_, v_a_3820_, v_a_3821_, v_a_3822_, v_a_3823_);
lean_dec(v_a_3823_);
lean_dec_ref(v_a_3822_);
lean_dec(v_a_3821_);
lean_dec_ref(v_a_3820_);
lean_dec(v_a_3819_);
return v_res_3825_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop(lean_object* v_00_u03b1_3826_, lean_object* v_cases_3827_, lean_object* v_result_3828_, lean_object* v_a_3829_, lean_object* v_a_3830_, lean_object* v_a_3831_, lean_object* v_a_3832_, lean_object* v_a_3833_){
_start:
{
lean_object* v___x_3835_; 
v___x_3835_ = l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg(v_cases_3827_, v_result_3828_, v_a_3829_, v_a_3830_, v_a_3831_, v_a_3832_, v_a_3833_);
return v___x_3835_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___boxed(lean_object* v_00_u03b1_3836_, lean_object* v_cases_3837_, lean_object* v_result_3838_, lean_object* v_a_3839_, lean_object* v_a_3840_, lean_object* v_a_3841_, lean_object* v_a_3842_, lean_object* v_a_3843_, lean_object* v_a_3844_){
_start:
{
lean_object* v_res_3845_; 
v_res_3845_ = l_Lean_Meta_LazyDiscrTree_getMatchLoop(v_00_u03b1_3836_, v_cases_3837_, v_result_3838_, v_a_3839_, v_a_3840_, v_a_3841_, v_a_3842_, v_a_3843_);
lean_dec(v_a_3843_);
lean_dec_ref(v_a_3842_);
lean_dec(v_a_3841_);
lean_dec_ref(v_a_3840_);
lean_dec(v_a_3839_);
return v_res_3845_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult___redArg(lean_object* v_root_3848_, lean_object* v_a_3849_, lean_object* v_a_3850_, lean_object* v_a_3851_, lean_object* v_a_3852_, lean_object* v_a_3853_){
_start:
{
lean_object* v___x_3855_; lean_object* v___x_3856_; 
v___x_3855_ = lean_box(3);
v___x_3856_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(v_root_3848_, v___x_3855_);
if (lean_obj_tag(v___x_3856_) == 0)
{
lean_object* v___x_3857_; lean_object* v___x_3858_; 
v___x_3857_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_getStarResult___redArg___closed__0));
v___x_3858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3858_, 0, v___x_3857_);
return v___x_3858_;
}
else
{
lean_object* v_val_3859_; lean_object* v___x_3860_; 
v_val_3859_ = lean_ctor_get(v___x_3856_, 0);
lean_inc(v_val_3859_);
lean_dec_ref_known(v___x_3856_, 1);
v___x_3860_ = l_Lean_Meta_LazyDiscrTree_evalNode___redArg(v_val_3859_, v_a_3849_, v_a_3850_, v_a_3851_, v_a_3852_, v_a_3853_);
lean_dec(v_val_3859_);
if (lean_obj_tag(v___x_3860_) == 0)
{
lean_object* v_a_3861_; lean_object* v___x_3863_; uint8_t v_isShared_3864_; uint8_t v_isSharedCheck_3872_; 
v_a_3861_ = lean_ctor_get(v___x_3860_, 0);
v_isSharedCheck_3872_ = !lean_is_exclusive(v___x_3860_);
if (v_isSharedCheck_3872_ == 0)
{
v___x_3863_ = v___x_3860_;
v_isShared_3864_ = v_isSharedCheck_3872_;
goto v_resetjp_3862_;
}
else
{
lean_inc(v_a_3861_);
lean_dec(v___x_3860_);
v___x_3863_ = lean_box(0);
v_isShared_3864_ = v_isSharedCheck_3872_;
goto v_resetjp_3862_;
}
v_resetjp_3862_:
{
lean_object* v_fst_3865_; lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3870_; 
v_fst_3865_ = lean_ctor_get(v_a_3861_, 0);
lean_inc(v_fst_3865_);
lean_dec(v_a_3861_);
v___x_3866_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_getStarResult___redArg___closed__0));
v___x_3867_ = lean_unsigned_to_nat(1u);
v___x_3868_ = l_Lean_Meta_LazyDiscrTree_MatchResult_push___redArg(v___x_3866_, v___x_3867_, v_fst_3865_);
if (v_isShared_3864_ == 0)
{
lean_ctor_set(v___x_3863_, 0, v___x_3868_);
v___x_3870_ = v___x_3863_;
goto v_reusejp_3869_;
}
else
{
lean_object* v_reuseFailAlloc_3871_; 
v_reuseFailAlloc_3871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3871_, 0, v___x_3868_);
v___x_3870_ = v_reuseFailAlloc_3871_;
goto v_reusejp_3869_;
}
v_reusejp_3869_:
{
return v___x_3870_;
}
}
}
else
{
lean_object* v_a_3873_; lean_object* v___x_3875_; uint8_t v_isShared_3876_; uint8_t v_isSharedCheck_3880_; 
v_a_3873_ = lean_ctor_get(v___x_3860_, 0);
v_isSharedCheck_3880_ = !lean_is_exclusive(v___x_3860_);
if (v_isSharedCheck_3880_ == 0)
{
v___x_3875_ = v___x_3860_;
v_isShared_3876_ = v_isSharedCheck_3880_;
goto v_resetjp_3874_;
}
else
{
lean_inc(v_a_3873_);
lean_dec(v___x_3860_);
v___x_3875_ = lean_box(0);
v_isShared_3876_ = v_isSharedCheck_3880_;
goto v_resetjp_3874_;
}
v_resetjp_3874_:
{
lean_object* v___x_3878_; 
if (v_isShared_3876_ == 0)
{
v___x_3878_ = v___x_3875_;
goto v_reusejp_3877_;
}
else
{
lean_object* v_reuseFailAlloc_3879_; 
v_reuseFailAlloc_3879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3879_, 0, v_a_3873_);
v___x_3878_ = v_reuseFailAlloc_3879_;
goto v_reusejp_3877_;
}
v_reusejp_3877_:
{
return v___x_3878_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult___redArg___boxed(lean_object* v_root_3881_, lean_object* v_a_3882_, lean_object* v_a_3883_, lean_object* v_a_3884_, lean_object* v_a_3885_, lean_object* v_a_3886_, lean_object* v_a_3887_){
_start:
{
lean_object* v_res_3888_; 
v_res_3888_ = l_Lean_Meta_LazyDiscrTree_getStarResult___redArg(v_root_3881_, v_a_3882_, v_a_3883_, v_a_3884_, v_a_3885_, v_a_3886_);
lean_dec(v_a_3886_);
lean_dec_ref(v_a_3885_);
lean_dec(v_a_3884_);
lean_dec_ref(v_a_3883_);
lean_dec(v_a_3882_);
lean_dec_ref(v_root_3881_);
return v_res_3888_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult(lean_object* v_00_u03b1_3889_, lean_object* v_root_3890_, lean_object* v_a_3891_, lean_object* v_a_3892_, lean_object* v_a_3893_, lean_object* v_a_3894_, lean_object* v_a_3895_){
_start:
{
lean_object* v___x_3897_; 
v___x_3897_ = l_Lean_Meta_LazyDiscrTree_getStarResult___redArg(v_root_3890_, v_a_3891_, v_a_3892_, v_a_3893_, v_a_3894_, v_a_3895_);
return v___x_3897_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult___boxed(lean_object* v_00_u03b1_3898_, lean_object* v_root_3899_, lean_object* v_a_3900_, lean_object* v_a_3901_, lean_object* v_a_3902_, lean_object* v_a_3903_, lean_object* v_a_3904_, lean_object* v_a_3905_){
_start:
{
lean_object* v_res_3906_; 
v_res_3906_ = l_Lean_Meta_LazyDiscrTree_getStarResult(v_00_u03b1_3898_, v_root_3899_, v_a_3900_, v_a_3901_, v_a_3902_, v_a_3903_, v_a_3904_);
lean_dec(v_a_3904_);
lean_dec_ref(v_a_3903_);
lean_dec(v_a_3902_);
lean_dec_ref(v_a_3901_);
lean_dec(v_a_3900_);
lean_dec_ref(v_root_3899_);
return v_res_3906_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_pushRootCase(lean_object* v_r_3907_, lean_object* v_k_3908_, lean_object* v_args_3909_, lean_object* v_cases_3910_){
_start:
{
lean_object* v___x_3911_; 
v___x_3911_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(v_r_3907_, v_k_3908_);
if (lean_obj_tag(v___x_3911_) == 0)
{
lean_dec_ref(v_args_3909_);
return v_cases_3910_;
}
else
{
lean_object* v_val_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; 
v_val_3912_ = lean_ctor_get(v___x_3911_, 0);
lean_inc(v_val_3912_);
lean_dec_ref_known(v___x_3911_, 1);
v___x_3913_ = lean_unsigned_to_nat(1u);
v___x_3914_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3914_, 0, v_args_3909_);
lean_ctor_set(v___x_3914_, 1, v___x_3913_);
lean_ctor_set(v___x_3914_, 2, v_val_3912_);
v___x_3915_ = lean_array_push(v_cases_3910_, v___x_3914_);
return v___x_3915_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_pushRootCase___boxed(lean_object* v_r_3916_, lean_object* v_k_3917_, lean_object* v_args_3918_, lean_object* v_cases_3919_){
_start:
{
lean_object* v_res_3920_; 
v_res_3920_ = l_Lean_Meta_LazyDiscrTree_pushRootCase(v_r_3916_, v_k_3917_, v_args_3918_, v_cases_3919_);
lean_dec(v_k_3917_);
lean_dec_ref(v_r_3916_);
return v_res_3920_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg(lean_object* v_root_3923_, lean_object* v_e_3924_, lean_object* v_a_3925_, lean_object* v_a_3926_, lean_object* v_a_3927_, lean_object* v_a_3928_, lean_object* v_a_3929_){
_start:
{
lean_object* v___x_3931_; 
v___x_3931_ = l_Lean_Meta_LazyDiscrTree_getStarResult___redArg(v_root_3923_, v_a_3925_, v_a_3926_, v_a_3927_, v_a_3928_, v_a_3929_);
if (lean_obj_tag(v___x_3931_) == 0)
{
lean_object* v_a_3932_; uint8_t v___x_3933_; lean_object* v___x_3934_; 
v_a_3932_ = lean_ctor_get(v___x_3931_, 0);
lean_inc(v_a_3932_);
lean_dec_ref_known(v___x_3931_, 1);
v___x_3933_ = 1;
v___x_3934_ = l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs(v_e_3924_, v___x_3933_, v___x_3933_, v_a_3926_, v_a_3927_, v_a_3928_, v_a_3929_);
if (lean_obj_tag(v___x_3934_) == 0)
{
lean_object* v_a_3935_; lean_object* v_fst_3936_; 
v_a_3935_ = lean_ctor_get(v___x_3934_, 0);
lean_inc(v_a_3935_);
lean_dec_ref_known(v___x_3934_, 1);
v_fst_3936_ = lean_ctor_get(v_a_3935_, 0);
lean_inc(v_fst_3936_);
switch(lean_obj_tag(v_fst_3936_))
{
case 3:
{
lean_object* v___x_3937_; lean_object* v___x_3938_; 
lean_dec(v_a_3935_);
v___x_3937_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg___closed__0));
v___x_3938_ = l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg(v___x_3937_, v_a_3932_, v_a_3925_, v_a_3926_, v_a_3927_, v_a_3928_, v_a_3929_);
return v___x_3938_;
}
case 5:
{
lean_object* v_snd_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; lean_object* v___x_3942_; lean_object* v___x_3943_; lean_object* v___x_3944_; 
v_snd_3939_ = lean_ctor_get(v_a_3935_, 1);
lean_inc(v_snd_3939_);
lean_dec(v_a_3935_);
v___x_3940_ = lean_box(4);
v___x_3941_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0));
v___x_3942_ = l_Lean_Meta_LazyDiscrTree_pushRootCase(v_root_3923_, v___x_3940_, v___x_3941_, v___x_3941_);
v___x_3943_ = l_Lean_Meta_LazyDiscrTree_pushRootCase(v_root_3923_, v_fst_3936_, v_snd_3939_, v___x_3942_);
v___x_3944_ = l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg(v___x_3943_, v_a_3932_, v_a_3925_, v_a_3926_, v_a_3927_, v_a_3928_, v_a_3929_);
return v___x_3944_;
}
default: 
{
lean_object* v_snd_3945_; lean_object* v___x_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; 
v_snd_3945_ = lean_ctor_get(v_a_3935_, 1);
lean_inc(v_snd_3945_);
lean_dec(v_a_3935_);
v___x_3946_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg___closed__0));
v___x_3947_ = l_Lean_Meta_LazyDiscrTree_pushRootCase(v_root_3923_, v_fst_3936_, v_snd_3945_, v___x_3946_);
lean_dec(v_fst_3936_);
v___x_3948_ = l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg(v___x_3947_, v_a_3932_, v_a_3925_, v_a_3926_, v_a_3927_, v_a_3928_, v_a_3929_);
return v___x_3948_;
}
}
}
else
{
lean_object* v_a_3949_; lean_object* v___x_3951_; uint8_t v_isShared_3952_; uint8_t v_isSharedCheck_3956_; 
lean_dec(v_a_3932_);
v_a_3949_ = lean_ctor_get(v___x_3934_, 0);
v_isSharedCheck_3956_ = !lean_is_exclusive(v___x_3934_);
if (v_isSharedCheck_3956_ == 0)
{
v___x_3951_ = v___x_3934_;
v_isShared_3952_ = v_isSharedCheck_3956_;
goto v_resetjp_3950_;
}
else
{
lean_inc(v_a_3949_);
lean_dec(v___x_3934_);
v___x_3951_ = lean_box(0);
v_isShared_3952_ = v_isSharedCheck_3956_;
goto v_resetjp_3950_;
}
v_resetjp_3950_:
{
lean_object* v___x_3954_; 
if (v_isShared_3952_ == 0)
{
v___x_3954_ = v___x_3951_;
goto v_reusejp_3953_;
}
else
{
lean_object* v_reuseFailAlloc_3955_; 
v_reuseFailAlloc_3955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3955_, 0, v_a_3949_);
v___x_3954_ = v_reuseFailAlloc_3955_;
goto v_reusejp_3953_;
}
v_reusejp_3953_:
{
return v___x_3954_;
}
}
}
}
else
{
lean_dec_ref(v_e_3924_);
return v___x_3931_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg___boxed(lean_object* v_root_3957_, lean_object* v_e_3958_, lean_object* v_a_3959_, lean_object* v_a_3960_, lean_object* v_a_3961_, lean_object* v_a_3962_, lean_object* v_a_3963_, lean_object* v_a_3964_){
_start:
{
lean_object* v_res_3965_; 
v_res_3965_ = l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg(v_root_3957_, v_e_3958_, v_a_3959_, v_a_3960_, v_a_3961_, v_a_3962_, v_a_3963_);
lean_dec(v_a_3963_);
lean_dec_ref(v_a_3962_);
lean_dec(v_a_3961_);
lean_dec_ref(v_a_3960_);
lean_dec(v_a_3959_);
lean_dec_ref(v_root_3957_);
return v_res_3965_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore(lean_object* v_00_u03b1_3966_, lean_object* v_root_3967_, lean_object* v_e_3968_, lean_object* v_a_3969_, lean_object* v_a_3970_, lean_object* v_a_3971_, lean_object* v_a_3972_, lean_object* v_a_3973_){
_start:
{
lean_object* v___x_3975_; 
v___x_3975_ = l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg(v_root_3967_, v_e_3968_, v_a_3969_, v_a_3970_, v_a_3971_, v_a_3972_, v_a_3973_);
return v___x_3975_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore___boxed(lean_object* v_00_u03b1_3976_, lean_object* v_root_3977_, lean_object* v_e_3978_, lean_object* v_a_3979_, lean_object* v_a_3980_, lean_object* v_a_3981_, lean_object* v_a_3982_, lean_object* v_a_3983_, lean_object* v_a_3984_){
_start:
{
lean_object* v_res_3985_; 
v_res_3985_ = l_Lean_Meta_LazyDiscrTree_getMatchCore(v_00_u03b1_3976_, v_root_3977_, v_e_3978_, v_a_3979_, v_a_3980_, v_a_3981_, v_a_3982_, v_a_3983_);
lean_dec(v_a_3983_);
lean_dec_ref(v_a_3982_);
lean_dec(v_a_3981_);
lean_dec_ref(v_a_3980_);
lean_dec(v_a_3979_);
lean_dec_ref(v_root_3977_);
return v_res_3985_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatch___redArg(lean_object* v_d_3986_, lean_object* v_e_3987_, lean_object* v_a_3988_, lean_object* v_a_3989_, lean_object* v_a_3990_, lean_object* v_a_3991_){
_start:
{
lean_object* v___y_3994_; lean_object* v_roots_4011_; lean_object* v___x_4012_; uint8_t v_transparency_4013_; lean_object* v___x_4014_; uint8_t v___x_4015_; uint8_t v___x_4016_; 
v_roots_4011_ = lean_ctor_get(v_d_3986_, 1);
v___x_4012_ = l_Lean_Meta_Context_config(v_a_3988_);
v_transparency_4013_ = lean_ctor_get_uint8(v___x_4012_, 9);
lean_dec_ref(v___x_4012_);
lean_inc_ref(v_roots_4011_);
v___x_4014_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_getMatchCore___boxed), 9, 3);
lean_closure_set(v___x_4014_, 0, lean_box(0));
lean_closure_set(v___x_4014_, 1, v_roots_4011_);
lean_closure_set(v___x_4014_, 2, v_e_3987_);
v___x_4015_ = 2;
v___x_4016_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_4013_, v___x_4015_);
if (v___x_4016_ == 0)
{
lean_object* v_keyedConfig_4017_; uint8_t v_trackZetaDelta_4018_; lean_object* v_zetaDeltaSet_4019_; lean_object* v_lctx_4020_; lean_object* v_localInstances_4021_; lean_object* v_defEqCtx_x3f_4022_; lean_object* v_synthPendingDepth_4023_; lean_object* v_customCanUnfoldPredicate_x3f_4024_; uint8_t v_univApprox_4025_; uint8_t v_inTypeClassResolution_4026_; uint8_t v_cacheInferType_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; 
v_keyedConfig_4017_ = lean_ctor_get(v_a_3988_, 0);
v_trackZetaDelta_4018_ = lean_ctor_get_uint8(v_a_3988_, sizeof(void*)*7);
v_zetaDeltaSet_4019_ = lean_ctor_get(v_a_3988_, 1);
v_lctx_4020_ = lean_ctor_get(v_a_3988_, 2);
v_localInstances_4021_ = lean_ctor_get(v_a_3988_, 3);
v_defEqCtx_x3f_4022_ = lean_ctor_get(v_a_3988_, 4);
v_synthPendingDepth_4023_ = lean_ctor_get(v_a_3988_, 5);
v_customCanUnfoldPredicate_x3f_4024_ = lean_ctor_get(v_a_3988_, 6);
v_univApprox_4025_ = lean_ctor_get_uint8(v_a_3988_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_4026_ = lean_ctor_get_uint8(v_a_3988_, sizeof(void*)*7 + 2);
v_cacheInferType_4027_ = lean_ctor_get_uint8(v_a_3988_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_4017_);
v___x_4028_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_4015_, v_keyedConfig_4017_);
lean_inc(v_customCanUnfoldPredicate_x3f_4024_);
lean_inc(v_synthPendingDepth_4023_);
lean_inc(v_defEqCtx_x3f_4022_);
lean_inc_ref(v_localInstances_4021_);
lean_inc_ref(v_lctx_4020_);
lean_inc(v_zetaDeltaSet_4019_);
v___x_4029_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4029_, 0, v___x_4028_);
lean_ctor_set(v___x_4029_, 1, v_zetaDeltaSet_4019_);
lean_ctor_set(v___x_4029_, 2, v_lctx_4020_);
lean_ctor_set(v___x_4029_, 3, v_localInstances_4021_);
lean_ctor_set(v___x_4029_, 4, v_defEqCtx_x3f_4022_);
lean_ctor_set(v___x_4029_, 5, v_synthPendingDepth_4023_);
lean_ctor_set(v___x_4029_, 6, v_customCanUnfoldPredicate_x3f_4024_);
lean_ctor_set_uint8(v___x_4029_, sizeof(void*)*7, v_trackZetaDelta_4018_);
lean_ctor_set_uint8(v___x_4029_, sizeof(void*)*7 + 1, v_univApprox_4025_);
lean_ctor_set_uint8(v___x_4029_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4026_);
lean_ctor_set_uint8(v___x_4029_, sizeof(void*)*7 + 3, v_cacheInferType_4027_);
v___x_4030_ = l_Lean_Meta_LazyDiscrTree_runMatch___redArg(v_d_3986_, v___x_4014_, v___x_4029_, v_a_3989_, v_a_3990_, v_a_3991_);
lean_dec_ref_known(v___x_4029_, 7);
v___y_3994_ = v___x_4030_;
goto v___jp_3993_;
}
else
{
lean_object* v___x_4031_; 
v___x_4031_ = l_Lean_Meta_LazyDiscrTree_runMatch___redArg(v_d_3986_, v___x_4014_, v_a_3988_, v_a_3989_, v_a_3990_, v_a_3991_);
v___y_3994_ = v___x_4031_;
goto v___jp_3993_;
}
v___jp_3993_:
{
if (lean_obj_tag(v___y_3994_) == 0)
{
lean_object* v_a_3995_; lean_object* v___x_3997_; uint8_t v_isShared_3998_; uint8_t v_isSharedCheck_4002_; 
v_a_3995_ = lean_ctor_get(v___y_3994_, 0);
v_isSharedCheck_4002_ = !lean_is_exclusive(v___y_3994_);
if (v_isSharedCheck_4002_ == 0)
{
v___x_3997_ = v___y_3994_;
v_isShared_3998_ = v_isSharedCheck_4002_;
goto v_resetjp_3996_;
}
else
{
lean_inc(v_a_3995_);
lean_dec(v___y_3994_);
v___x_3997_ = lean_box(0);
v_isShared_3998_ = v_isSharedCheck_4002_;
goto v_resetjp_3996_;
}
v_resetjp_3996_:
{
lean_object* v___x_4000_; 
if (v_isShared_3998_ == 0)
{
v___x_4000_ = v___x_3997_;
goto v_reusejp_3999_;
}
else
{
lean_object* v_reuseFailAlloc_4001_; 
v_reuseFailAlloc_4001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4001_, 0, v_a_3995_);
v___x_4000_ = v_reuseFailAlloc_4001_;
goto v_reusejp_3999_;
}
v_reusejp_3999_:
{
return v___x_4000_;
}
}
}
else
{
lean_object* v_a_4003_; lean_object* v___x_4005_; uint8_t v_isShared_4006_; uint8_t v_isSharedCheck_4010_; 
v_a_4003_ = lean_ctor_get(v___y_3994_, 0);
v_isSharedCheck_4010_ = !lean_is_exclusive(v___y_3994_);
if (v_isSharedCheck_4010_ == 0)
{
v___x_4005_ = v___y_3994_;
v_isShared_4006_ = v_isSharedCheck_4010_;
goto v_resetjp_4004_;
}
else
{
lean_inc(v_a_4003_);
lean_dec(v___y_3994_);
v___x_4005_ = lean_box(0);
v_isShared_4006_ = v_isSharedCheck_4010_;
goto v_resetjp_4004_;
}
v_resetjp_4004_:
{
lean_object* v___x_4008_; 
if (v_isShared_4006_ == 0)
{
v___x_4008_ = v___x_4005_;
goto v_reusejp_4007_;
}
else
{
lean_object* v_reuseFailAlloc_4009_; 
v_reuseFailAlloc_4009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4009_, 0, v_a_4003_);
v___x_4008_ = v_reuseFailAlloc_4009_;
goto v_reusejp_4007_;
}
v_reusejp_4007_:
{
return v___x_4008_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatch___redArg___boxed(lean_object* v_d_4032_, lean_object* v_e_4033_, lean_object* v_a_4034_, lean_object* v_a_4035_, lean_object* v_a_4036_, lean_object* v_a_4037_, lean_object* v_a_4038_){
_start:
{
lean_object* v_res_4039_; 
v_res_4039_ = l_Lean_Meta_LazyDiscrTree_getMatch___redArg(v_d_4032_, v_e_4033_, v_a_4034_, v_a_4035_, v_a_4036_, v_a_4037_);
lean_dec(v_a_4037_);
lean_dec_ref(v_a_4036_);
lean_dec(v_a_4035_);
lean_dec_ref(v_a_4034_);
return v_res_4039_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatch(lean_object* v_00_u03b1_4040_, lean_object* v_d_4041_, lean_object* v_e_4042_, lean_object* v_a_4043_, lean_object* v_a_4044_, lean_object* v_a_4045_, lean_object* v_a_4046_){
_start:
{
lean_object* v___x_4048_; 
v___x_4048_ = l_Lean_Meta_LazyDiscrTree_getMatch___redArg(v_d_4041_, v_e_4042_, v_a_4043_, v_a_4044_, v_a_4045_, v_a_4046_);
return v___x_4048_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatch___boxed(lean_object* v_00_u03b1_4049_, lean_object* v_d_4050_, lean_object* v_e_4051_, lean_object* v_a_4052_, lean_object* v_a_4053_, lean_object* v_a_4054_, lean_object* v_a_4055_, lean_object* v_a_4056_){
_start:
{
lean_object* v_res_4057_; 
v_res_4057_ = l_Lean_Meta_LazyDiscrTree_getMatch(v_00_u03b1_4049_, v_d_4050_, v_e_4051_, v_a_4052_, v_a_4053_, v_a_4054_, v_a_4055_);
lean_dec(v_a_4055_);
lean_dec_ref(v_a_4054_);
lean_dec(v_a_4053_);
lean_dec_ref(v_a_4052_);
return v_res_4057_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1(void){
_start:
{
lean_object* v___x_4060_; lean_object* v___x_4061_; lean_object* v___x_4062_; 
v___x_4060_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__0));
v___x_4061_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2);
v___x_4062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4062_, 0, v___x_4061_);
lean_ctor_set(v___x_4062_, 1, v___x_4060_);
return v___x_4062_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg(){
_start:
{
lean_object* v___x_4064_; 
v___x_4064_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1);
return v___x_4064_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___boxed(lean_object* v___dummy_4065_){
_start:
{
lean_object* v_res_4066_; 
v_res_4066_ = l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg();
return v_res_4066_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0(void){
_start:
{
lean_object* v___x_4067_; 
v___x_4067_ = l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg();
return v___x_4067_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default(lean_object* v_00_u03b1_4068_){
_start:
{
lean_object* v___x_4069_; 
v___x_4069_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0);
return v___x_4069_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree___redArg(){
_start:
{
lean_object* v___x_4071_; 
v___x_4071_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0);
return v___x_4071_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree___redArg___boxed(lean_object* v___dummy_4072_){
_start:
{
lean_object* v_res_4073_; 
v_res_4073_ = l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree___redArg();
return v_res_4073_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree(lean_object* v_a_4074_){
_start:
{
lean_object* v___x_4075_; 
v___x_4075_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0);
return v___x_4075_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_modifyAt___redArg(lean_object* v_d_4076_, lean_object* v_k_4077_, lean_object* v_f_4078_){
_start:
{
lean_object* v_roots_4079_; lean_object* v_tries_4080_; lean_object* v___x_4081_; 
v_roots_4079_ = lean_ctor_get(v_d_4076_, 0);
v_tries_4080_ = lean_ctor_get(v_d_4076_, 1);
v___x_4081_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(v_roots_4079_, v_k_4077_);
if (lean_obj_tag(v___x_4081_) == 0)
{
lean_object* v___x_4083_; uint8_t v_isShared_4084_; uint8_t v_isSharedCheck_4093_; 
lean_inc_ref(v_tries_4080_);
lean_inc_ref(v_roots_4079_);
v_isSharedCheck_4093_ = !lean_is_exclusive(v_d_4076_);
if (v_isSharedCheck_4093_ == 0)
{
lean_object* v_unused_4094_; lean_object* v_unused_4095_; 
v_unused_4094_ = lean_ctor_get(v_d_4076_, 1);
lean_dec(v_unused_4094_);
v_unused_4095_ = lean_ctor_get(v_d_4076_, 0);
lean_dec(v_unused_4095_);
v___x_4083_ = v_d_4076_;
v_isShared_4084_ = v_isSharedCheck_4093_;
goto v_resetjp_4082_;
}
else
{
lean_dec(v_d_4076_);
v___x_4083_ = lean_box(0);
v_isShared_4084_ = v_isSharedCheck_4093_;
goto v_resetjp_4082_;
}
v_resetjp_4082_:
{
lean_object* v___x_4085_; lean_object* v_roots_4086_; lean_object* v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; lean_object* v___x_4091_; 
v___x_4085_ = lean_array_get_size(v_tries_4080_);
v_roots_4086_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3___redArg(v_roots_4079_, v_k_4077_, v___x_4085_);
v___x_4087_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__3));
v___x_4088_ = lean_apply_1(v_f_4078_, v___x_4087_);
v___x_4089_ = lean_array_push(v_tries_4080_, v___x_4088_);
if (v_isShared_4084_ == 0)
{
lean_ctor_set(v___x_4083_, 1, v___x_4089_);
lean_ctor_set(v___x_4083_, 0, v_roots_4086_);
v___x_4091_ = v___x_4083_;
goto v_reusejp_4090_;
}
else
{
lean_object* v_reuseFailAlloc_4092_; 
v_reuseFailAlloc_4092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4092_, 0, v_roots_4086_);
lean_ctor_set(v_reuseFailAlloc_4092_, 1, v___x_4089_);
v___x_4091_ = v_reuseFailAlloc_4092_;
goto v_reusejp_4090_;
}
v_reusejp_4090_:
{
return v___x_4091_;
}
}
}
else
{
lean_object* v_val_4096_; lean_object* v___x_4097_; uint8_t v___x_4098_; 
lean_dec(v_k_4077_);
v_val_4096_ = lean_ctor_get(v___x_4081_, 0);
lean_inc(v_val_4096_);
lean_dec_ref_known(v___x_4081_, 1);
v___x_4097_ = lean_array_get_size(v_tries_4080_);
v___x_4098_ = lean_nat_dec_lt(v_val_4096_, v___x_4097_);
if (v___x_4098_ == 0)
{
lean_dec(v_val_4096_);
lean_dec_ref(v_f_4078_);
return v_d_4076_;
}
else
{
lean_object* v___x_4100_; uint8_t v_isShared_4101_; uint8_t v_isSharedCheck_4110_; 
lean_inc_ref(v_tries_4080_);
lean_inc_ref(v_roots_4079_);
v_isSharedCheck_4110_ = !lean_is_exclusive(v_d_4076_);
if (v_isSharedCheck_4110_ == 0)
{
lean_object* v_unused_4111_; lean_object* v_unused_4112_; 
v_unused_4111_ = lean_ctor_get(v_d_4076_, 1);
lean_dec(v_unused_4111_);
v_unused_4112_ = lean_ctor_get(v_d_4076_, 0);
lean_dec(v_unused_4112_);
v___x_4100_ = v_d_4076_;
v_isShared_4101_ = v_isSharedCheck_4110_;
goto v_resetjp_4099_;
}
else
{
lean_dec(v_d_4076_);
v___x_4100_ = lean_box(0);
v_isShared_4101_ = v_isSharedCheck_4110_;
goto v_resetjp_4099_;
}
v_resetjp_4099_:
{
lean_object* v_v_4102_; lean_object* v___x_4103_; lean_object* v_xs_x27_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4108_; 
v_v_4102_ = lean_array_fget(v_tries_4080_, v_val_4096_);
v___x_4103_ = lean_box(0);
v_xs_x27_4104_ = lean_array_fset(v_tries_4080_, v_val_4096_, v___x_4103_);
v___x_4105_ = lean_apply_1(v_f_4078_, v_v_4102_);
v___x_4106_ = lean_array_fset(v_xs_x27_4104_, v_val_4096_, v___x_4105_);
lean_dec(v_val_4096_);
if (v_isShared_4101_ == 0)
{
lean_ctor_set(v___x_4100_, 1, v___x_4106_);
v___x_4108_ = v___x_4100_;
goto v_reusejp_4107_;
}
else
{
lean_object* v_reuseFailAlloc_4109_; 
v_reuseFailAlloc_4109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4109_, 0, v_roots_4079_);
lean_ctor_set(v_reuseFailAlloc_4109_, 1, v___x_4106_);
v___x_4108_ = v_reuseFailAlloc_4109_;
goto v_reusejp_4107_;
}
v_reusejp_4107_:
{
return v___x_4108_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_modifyAt(lean_object* v_00_u03b1_4113_, lean_object* v_d_4114_, lean_object* v_k_4115_, lean_object* v_f_4116_){
_start:
{
lean_object* v___x_4117_; 
v___x_4117_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_modifyAt___redArg(v_d_4114_, v_k_4115_, v_f_4116_);
return v___x_4117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push___redArg___lam__0(lean_object* v_e_4118_, lean_object* v_x_4119_){
_start:
{
lean_object* v___x_4120_; 
v___x_4120_ = lean_array_push(v_x_4119_, v_e_4118_);
return v___x_4120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push___redArg(lean_object* v_d_4121_, lean_object* v_k_4122_, lean_object* v_e_4123_){
_start:
{
lean_object* v___f_4124_; lean_object* v___x_4125_; 
v___f_4124_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4124_, 0, v_e_4123_);
v___x_4125_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_modifyAt___redArg(v_d_4121_, v_k_4122_, v___f_4124_);
return v___x_4125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push(lean_object* v_00_u03b1_4126_, lean_object* v_d_4127_, lean_object* v_k_4128_, lean_object* v_e_4129_){
_start:
{
lean_object* v___x_4130_; 
v___x_4130_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push___redArg(v_d_4127_, v_k_4128_, v_e_4129_);
return v___x_4130_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___redArg(size_t v_sz_4131_, size_t v_i_4132_, lean_object* v_bs_4133_){
_start:
{
uint8_t v___x_4134_; 
v___x_4134_ = lean_usize_dec_lt(v_i_4132_, v_sz_4131_);
if (v___x_4134_ == 0)
{
return v_bs_4133_;
}
else
{
lean_object* v_v_4135_; lean_object* v___x_4136_; lean_object* v_bs_x27_4137_; lean_object* v___x_4138_; lean_object* v___x_4139_; lean_object* v___x_4140_; size_t v___x_4141_; size_t v___x_4142_; lean_object* v___x_4143_; 
v_v_4135_ = lean_array_uget(v_bs_4133_, v_i_4132_);
v___x_4136_ = lean_unsigned_to_nat(0u);
v_bs_x27_4137_ = lean_array_uset(v_bs_4133_, v_i_4132_, v___x_4136_);
v___x_4138_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__0));
v___x_4139_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2);
v___x_4140_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4140_, 0, v___x_4138_);
lean_ctor_set(v___x_4140_, 1, v___x_4136_);
lean_ctor_set(v___x_4140_, 2, v___x_4139_);
lean_ctor_set(v___x_4140_, 3, v_v_4135_);
v___x_4141_ = ((size_t)1ULL);
v___x_4142_ = lean_usize_add(v_i_4132_, v___x_4141_);
v___x_4143_ = lean_array_uset(v_bs_x27_4137_, v_i_4132_, v___x_4140_);
v_i_4132_ = v___x_4142_;
v_bs_4133_ = v___x_4143_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___redArg___boxed(lean_object* v_sz_4145_, lean_object* v_i_4146_, lean_object* v_bs_4147_){
_start:
{
size_t v_sz_boxed_4148_; size_t v_i_boxed_4149_; lean_object* v_res_4150_; 
v_sz_boxed_4148_ = lean_unbox_usize(v_sz_4145_);
lean_dec(v_sz_4145_);
v_i_boxed_4149_ = lean_unbox_usize(v_i_4146_);
lean_dec(v_i_4146_);
v_res_4150_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___redArg(v_sz_boxed_4148_, v_i_boxed_4149_, v_bs_4147_);
return v_res_4150_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__1(lean_object* v_x_4151_, lean_object* v_x_4152_){
_start:
{
if (lean_obj_tag(v_x_4152_) == 0)
{
return v_x_4151_;
}
else
{
lean_object* v_key_4153_; lean_object* v_value_4154_; lean_object* v_tail_4155_; lean_object* v___x_4156_; lean_object* v___x_4157_; lean_object* v___x_4158_; 
v_key_4153_ = lean_ctor_get(v_x_4152_, 0);
lean_inc(v_key_4153_);
v_value_4154_ = lean_ctor_get(v_x_4152_, 1);
lean_inc(v_value_4154_);
v_tail_4155_ = lean_ctor_get(v_x_4152_, 2);
lean_inc(v_tail_4155_);
lean_dec_ref_known(v_x_4152_, 3);
v___x_4156_ = lean_unsigned_to_nat(1u);
v___x_4157_ = lean_nat_add(v_value_4154_, v___x_4156_);
lean_dec(v_value_4154_);
v___x_4158_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3___redArg(v_x_4151_, v_key_4153_, v___x_4157_);
v_x_4151_ = v___x_4158_;
v_x_4152_ = v_tail_4155_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__2(lean_object* v_as_4160_, size_t v_i_4161_, size_t v_stop_4162_, lean_object* v_b_4163_){
_start:
{
uint8_t v___x_4164_; 
v___x_4164_ = lean_usize_dec_eq(v_i_4161_, v_stop_4162_);
if (v___x_4164_ == 0)
{
lean_object* v___x_4165_; lean_object* v___x_4166_; size_t v___x_4167_; size_t v___x_4168_; 
v___x_4165_ = lean_array_uget_borrowed(v_as_4160_, v_i_4161_);
lean_inc(v___x_4165_);
v___x_4166_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__1(v_b_4163_, v___x_4165_);
v___x_4167_ = ((size_t)1ULL);
v___x_4168_ = lean_usize_add(v_i_4161_, v___x_4167_);
v_i_4161_ = v___x_4168_;
v_b_4163_ = v___x_4166_;
goto _start;
}
else
{
return v_b_4163_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__2___boxed(lean_object* v_as_4170_, lean_object* v_i_4171_, lean_object* v_stop_4172_, lean_object* v_b_4173_){
_start:
{
size_t v_i_boxed_4174_; size_t v_stop_boxed_4175_; lean_object* v_res_4176_; 
v_i_boxed_4174_ = lean_unbox_usize(v_i_4171_);
lean_dec(v_i_4171_);
v_stop_boxed_4175_ = lean_unbox_usize(v_stop_4172_);
lean_dec(v_stop_4172_);
v_res_4176_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__2(v_as_4170_, v_i_boxed_4174_, v_stop_boxed_4175_, v_b_4173_);
lean_dec_ref(v_as_4170_);
return v_res_4176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy___redArg(lean_object* v_d_4177_){
_start:
{
lean_object* v_roots_4178_; lean_object* v_tries_4179_; lean_object* v___x_4181_; uint8_t v_isShared_4182_; uint8_t v_isSharedCheck_4202_; 
v_roots_4178_ = lean_ctor_get(v_d_4177_, 0);
v_tries_4179_ = lean_ctor_get(v_d_4177_, 1);
v_isSharedCheck_4202_ = !lean_is_exclusive(v_d_4177_);
if (v_isSharedCheck_4202_ == 0)
{
v___x_4181_ = v_d_4177_;
v_isShared_4182_ = v_isSharedCheck_4202_;
goto v_resetjp_4180_;
}
else
{
lean_inc(v_tries_4179_);
lean_inc(v_roots_4178_);
lean_dec(v_d_4177_);
v___x_4181_ = lean_box(0);
v_isShared_4182_ = v_isSharedCheck_4202_;
goto v_resetjp_4180_;
}
v_resetjp_4180_:
{
lean_object* v___y_4184_; lean_object* v_buckets_4195_; lean_object* v___x_4196_; lean_object* v___x_4197_; uint8_t v___x_4198_; 
v_buckets_4195_ = lean_ctor_get(v_roots_4178_, 1);
v___x_4196_ = lean_unsigned_to_nat(0u);
v___x_4197_ = lean_array_get_size(v_buckets_4195_);
v___x_4198_ = lean_nat_dec_lt(v___x_4196_, v___x_4197_);
if (v___x_4198_ == 0)
{
v___y_4184_ = v_roots_4178_;
goto v___jp_4183_;
}
else
{
size_t v___x_4199_; size_t v___x_4200_; lean_object* v___x_4201_; 
lean_inc_ref(v_buckets_4195_);
v___x_4199_ = ((size_t)0ULL);
v___x_4200_ = lean_usize_of_nat(v___x_4197_);
v___x_4201_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__2(v_buckets_4195_, v___x_4199_, v___x_4200_, v_roots_4178_);
lean_dec_ref(v_buckets_4195_);
v___y_4184_ = v___x_4201_;
goto v___jp_4183_;
}
v___jp_4183_:
{
lean_object* v___x_4185_; lean_object* v___x_4186_; lean_object* v___x_4187_; size_t v_sz_4188_; size_t v___x_4189_; lean_object* v___x_4190_; lean_object* v___x_4191_; lean_object* v___x_4193_; 
v___x_4185_ = lean_unsigned_to_nat(1u);
v___x_4186_ = lean_mk_empty_array_with_capacity(v___x_4185_);
lean_dec_ref(v___x_4186_);
v___x_4187_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__0);
v_sz_4188_ = lean_array_size(v_tries_4179_);
v___x_4189_ = ((size_t)0ULL);
v___x_4190_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___redArg(v_sz_4188_, v___x_4189_, v_tries_4179_);
v___x_4191_ = l_Array_append___redArg(v___x_4187_, v___x_4190_);
lean_dec_ref(v___x_4190_);
if (v_isShared_4182_ == 0)
{
lean_ctor_set(v___x_4181_, 1, v___y_4184_);
lean_ctor_set(v___x_4181_, 0, v___x_4191_);
v___x_4193_ = v___x_4181_;
goto v_reusejp_4192_;
}
else
{
lean_object* v_reuseFailAlloc_4194_; 
v_reuseFailAlloc_4194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4194_, 0, v___x_4191_);
lean_ctor_set(v_reuseFailAlloc_4194_, 1, v___y_4184_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy(lean_object* v_00_u03b1_4203_, lean_object* v_d_4204_){
_start:
{
lean_object* v___x_4205_; 
v___x_4205_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy___redArg(v_d_4204_);
return v___x_4205_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0(lean_object* v_00_u03b1_4206_, size_t v_sz_4207_, size_t v_i_4208_, lean_object* v_bs_4209_){
_start:
{
lean_object* v___x_4210_; 
v___x_4210_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___redArg(v_sz_4207_, v_i_4208_, v_bs_4209_);
return v___x_4210_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___boxed(lean_object* v_00_u03b1_4211_, lean_object* v_sz_4212_, lean_object* v_i_4213_, lean_object* v_bs_4214_){
_start:
{
size_t v_sz_boxed_4215_; size_t v_i_boxed_4216_; lean_object* v_res_4217_; 
v_sz_boxed_4215_ = lean_unbox_usize(v_sz_4212_);
lean_dec(v_sz_4212_);
v_i_boxed_4216_ = lean_unbox_usize(v_i_4213_);
lean_dec(v_i_4213_);
v_res_4217_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0(v_00_u03b1_4211_, v_sz_boxed_4215_, v_i_boxed_4216_, v_bs_4214_);
return v_res_4217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___lam__0(lean_object* v_y_4218_, lean_object* v_x_4219_){
_start:
{
lean_object* v___x_4220_; 
v___x_4220_ = l_Array_append___redArg(v_x_4219_, v_y_4218_);
return v___x_4220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___lam__0___boxed(lean_object* v_y_4221_, lean_object* v_x_4222_){
_start:
{
lean_object* v_res_4223_; 
v_res_4223_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___lam__0(v_y_4221_, v_x_4222_);
lean_dec_ref(v_y_4221_);
return v_res_4223_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_4224_; 
v___x_4224_ = l_Array_instInhabited___redArg();
return v___x_4224_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg(lean_object* v_tries_4225_, lean_object* v_snd_4226_, lean_object* v_x_4227_, lean_object* v_x_4228_){
_start:
{
if (lean_obj_tag(v_x_4228_) == 0)
{
lean_dec_ref(v_snd_4226_);
return v_x_4227_;
}
else
{
lean_object* v_key_4229_; lean_object* v_value_4230_; lean_object* v_tail_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; 
v_key_4229_ = lean_ctor_get(v_x_4228_, 0);
lean_inc(v_key_4229_);
v_value_4230_ = lean_ctor_get(v_x_4228_, 1);
lean_inc(v_value_4230_);
v_tail_4231_ = lean_ctor_get(v_x_4228_, 2);
lean_inc(v_tail_4231_);
lean_dec_ref_known(v_x_4228_, 3);
v___x_4232_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg___closed__0, &l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg___closed__0);
v___x_4233_ = lean_array_get_borrowed(v___x_4232_, v_tries_4225_, v_value_4230_);
lean_dec(v_value_4230_);
lean_inc_ref(v_snd_4226_);
lean_inc(v___x_4233_);
v___x_4234_ = lean_apply_1(v_snd_4226_, v___x_4233_);
v___x_4235_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_modifyAt___redArg(v_x_4227_, v_key_4229_, v___x_4234_);
v_x_4227_ = v___x_4235_;
v_x_4228_ = v_tail_4231_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg___boxed(lean_object* v_tries_4237_, lean_object* v_snd_4238_, lean_object* v_x_4239_, lean_object* v_x_4240_){
_start:
{
lean_object* v_res_4241_; 
v_res_4241_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg(v_tries_4237_, v_snd_4238_, v_x_4239_, v_x_4240_);
lean_dec_ref(v_tries_4237_);
return v_res_4241_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___redArg(lean_object* v_tries_4242_, lean_object* v_snd_4243_, lean_object* v_as_4244_, size_t v_i_4245_, size_t v_stop_4246_, lean_object* v_b_4247_){
_start:
{
uint8_t v___x_4248_; 
v___x_4248_ = lean_usize_dec_eq(v_i_4245_, v_stop_4246_);
if (v___x_4248_ == 0)
{
lean_object* v___x_4249_; lean_object* v___x_4250_; size_t v___x_4251_; size_t v___x_4252_; 
v___x_4249_ = lean_array_uget_borrowed(v_as_4244_, v_i_4245_);
lean_inc(v___x_4249_);
lean_inc_ref(v_snd_4243_);
v___x_4250_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg(v_tries_4242_, v_snd_4243_, v_b_4247_, v___x_4249_);
v___x_4251_ = ((size_t)1ULL);
v___x_4252_ = lean_usize_add(v_i_4245_, v___x_4251_);
v_i_4245_ = v___x_4252_;
v_b_4247_ = v___x_4250_;
goto _start;
}
else
{
lean_dec_ref(v_snd_4243_);
return v_b_4247_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___redArg___boxed(lean_object* v_tries_4254_, lean_object* v_snd_4255_, lean_object* v_as_4256_, lean_object* v_i_4257_, lean_object* v_stop_4258_, lean_object* v_b_4259_){
_start:
{
size_t v_i_boxed_4260_; size_t v_stop_boxed_4261_; lean_object* v_res_4262_; 
v_i_boxed_4260_ = lean_unbox_usize(v_i_4257_);
lean_dec(v_i_4257_);
v_stop_boxed_4261_ = lean_unbox_usize(v_stop_4258_);
lean_dec(v_stop_4258_);
v_res_4262_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___redArg(v_tries_4254_, v_snd_4255_, v_as_4256_, v_i_boxed_4260_, v_stop_boxed_4261_, v_b_4259_);
lean_dec_ref(v_as_4256_);
lean_dec_ref(v_tries_4254_);
return v_res_4262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg(lean_object* v_x_4265_, lean_object* v_y_4266_){
_start:
{
lean_object* v_fst_4268_; lean_object* v_buckets_4269_; lean_object* v_tries_4270_; lean_object* v_snd_4271_; lean_object* v_roots_4278_; lean_object* v_roots_4279_; lean_object* v_tries_4280_; lean_object* v_size_4281_; lean_object* v_buckets_4282_; lean_object* v_tries_4283_; lean_object* v_size_4284_; lean_object* v_buckets_4285_; uint8_t v___x_4286_; 
v_roots_4278_ = lean_ctor_get(v_y_4266_, 0);
v_roots_4279_ = lean_ctor_get(v_x_4265_, 0);
v_tries_4280_ = lean_ctor_get(v_y_4266_, 1);
v_size_4281_ = lean_ctor_get(v_roots_4278_, 0);
v_buckets_4282_ = lean_ctor_get(v_roots_4278_, 1);
v_tries_4283_ = lean_ctor_get(v_x_4265_, 1);
v_size_4284_ = lean_ctor_get(v_roots_4279_, 0);
v_buckets_4285_ = lean_ctor_get(v_roots_4279_, 1);
v___x_4286_ = lean_nat_dec_le(v_size_4281_, v_size_4284_);
if (v___x_4286_ == 0)
{
lean_object* v___f_4287_; 
lean_inc_ref(v_buckets_4285_);
lean_inc_ref(v_tries_4283_);
lean_dec_ref(v_x_4265_);
v___f_4287_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___closed__0));
v_fst_4268_ = v_y_4266_;
v_buckets_4269_ = v_buckets_4285_;
v_tries_4270_ = v_tries_4283_;
v_snd_4271_ = v___f_4287_;
goto v___jp_4267_;
}
else
{
lean_object* v___f_4288_; 
lean_inc_ref(v_buckets_4282_);
lean_inc_ref(v_tries_4280_);
lean_dec_ref(v_y_4266_);
v___f_4288_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___closed__1));
v_fst_4268_ = v_x_4265_;
v_buckets_4269_ = v_buckets_4282_;
v_tries_4270_ = v_tries_4280_;
v_snd_4271_ = v___f_4288_;
goto v___jp_4267_;
}
v___jp_4267_:
{
lean_object* v___x_4272_; lean_object* v___x_4273_; uint8_t v___x_4274_; 
v___x_4272_ = lean_unsigned_to_nat(0u);
v___x_4273_ = lean_array_get_size(v_buckets_4269_);
v___x_4274_ = lean_nat_dec_lt(v___x_4272_, v___x_4273_);
if (v___x_4274_ == 0)
{
lean_dec_ref(v_tries_4270_);
lean_dec_ref(v_buckets_4269_);
return v_fst_4268_;
}
else
{
size_t v___x_4275_; size_t v___x_4276_; lean_object* v___x_4277_; 
v___x_4275_ = ((size_t)0ULL);
v___x_4276_ = lean_usize_of_nat(v___x_4273_);
lean_inc_ref(v_snd_4271_);
v___x_4277_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___redArg(v_tries_4270_, v_snd_4271_, v_buckets_4269_, v___x_4275_, v___x_4276_, v_fst_4268_);
lean_dec_ref(v_buckets_4269_);
lean_dec_ref(v_tries_4270_);
return v___x_4277_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append(lean_object* v_00_u03b1_4289_, lean_object* v_x_4290_, lean_object* v_y_4291_){
_start:
{
lean_object* v___x_4292_; 
v___x_4292_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg(v_x_4290_, v_y_4291_);
return v___x_4292_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0(lean_object* v_00_u03b1_4293_, lean_object* v_tries_4294_, lean_object* v_snd_4295_, lean_object* v_x_4296_, lean_object* v_x_4297_){
_start:
{
lean_object* v___x_4298_; 
v___x_4298_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg(v_tries_4294_, v_snd_4295_, v_x_4296_, v_x_4297_);
return v___x_4298_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___boxed(lean_object* v_00_u03b1_4299_, lean_object* v_tries_4300_, lean_object* v_snd_4301_, lean_object* v_x_4302_, lean_object* v_x_4303_){
_start:
{
lean_object* v_res_4304_; 
v_res_4304_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0(v_00_u03b1_4299_, v_tries_4300_, v_snd_4301_, v_x_4302_, v_x_4303_);
lean_dec_ref(v_tries_4300_);
return v_res_4304_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1(lean_object* v_00_u03b1_4305_, lean_object* v_tries_4306_, lean_object* v_snd_4307_, lean_object* v_as_4308_, size_t v_i_4309_, size_t v_stop_4310_, lean_object* v_b_4311_){
_start:
{
lean_object* v___x_4312_; 
v___x_4312_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___redArg(v_tries_4306_, v_snd_4307_, v_as_4308_, v_i_4309_, v_stop_4310_, v_b_4311_);
return v___x_4312_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___boxed(lean_object* v_00_u03b1_4313_, lean_object* v_tries_4314_, lean_object* v_snd_4315_, lean_object* v_as_4316_, lean_object* v_i_4317_, lean_object* v_stop_4318_, lean_object* v_b_4319_){
_start:
{
size_t v_i_boxed_4320_; size_t v_stop_boxed_4321_; lean_object* v_res_4322_; 
v_i_boxed_4320_ = lean_unbox_usize(v_i_4317_);
lean_dec(v_i_4317_);
v_stop_boxed_4321_ = lean_unbox_usize(v_stop_4318_);
lean_dec(v_stop_4318_);
v_res_4322_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1(v_00_u03b1_4313_, v_tries_4314_, v_snd_4315_, v_as_4316_, v_i_boxed_4320_, v_stop_boxed_4321_, v_b_4319_);
lean_dec_ref(v_as_4316_);
lean_dec_ref(v_tries_4314_);
return v_res_4322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___redArg(){
_start:
{
lean_object* v___x_4325_; 
v___x_4325_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___redArg___closed__0));
return v___x_4325_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___redArg___boxed(lean_object* v___dummy_4326_){
_start:
{
lean_object* v_res_4327_; 
v_res_4327_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___redArg();
return v_res_4327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend(lean_object* v_00_u03b1_4328_){
_start:
{
lean_object* v___x_4329_; 
v___x_4329_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___redArg___closed__0));
return v___x_4329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg(lean_object* v_expr_4330_, lean_object* v_value_4331_, lean_object* v_a_4332_, lean_object* v_a_4333_, lean_object* v_a_4334_, lean_object* v_a_4335_){
_start:
{
lean_object* v_lctx_4337_; lean_object* v_localInstances_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; 
v_lctx_4337_ = lean_ctor_get(v_a_4332_, 2);
v_localInstances_4338_ = lean_ctor_get(v_a_4332_, 3);
lean_inc_ref(v_localInstances_4338_);
lean_inc_ref(v_lctx_4337_);
v___x_4339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4339_, 0, v_lctx_4337_);
lean_ctor_set(v___x_4339_, 1, v_localInstances_4338_);
v___x_4340_ = l_Lean_Meta_LazyDiscrTree_rootKey(v_expr_4330_, v_a_4332_, v_a_4333_, v_a_4334_, v_a_4335_);
if (lean_obj_tag(v___x_4340_) == 0)
{
lean_object* v_a_4341_; lean_object* v___x_4343_; uint8_t v_isShared_4344_; uint8_t v_isSharedCheck_4359_; 
v_a_4341_ = lean_ctor_get(v___x_4340_, 0);
v_isSharedCheck_4359_ = !lean_is_exclusive(v___x_4340_);
if (v_isSharedCheck_4359_ == 0)
{
v___x_4343_ = v___x_4340_;
v_isShared_4344_ = v_isSharedCheck_4359_;
goto v_resetjp_4342_;
}
else
{
lean_inc(v_a_4341_);
lean_dec(v___x_4340_);
v___x_4343_ = lean_box(0);
v_isShared_4344_ = v_isSharedCheck_4359_;
goto v_resetjp_4342_;
}
v_resetjp_4342_:
{
lean_object* v_fst_4345_; lean_object* v_snd_4346_; lean_object* v___x_4348_; uint8_t v_isShared_4349_; uint8_t v_isSharedCheck_4358_; 
v_fst_4345_ = lean_ctor_get(v_a_4341_, 0);
v_snd_4346_ = lean_ctor_get(v_a_4341_, 1);
v_isSharedCheck_4358_ = !lean_is_exclusive(v_a_4341_);
if (v_isSharedCheck_4358_ == 0)
{
v___x_4348_ = v_a_4341_;
v_isShared_4349_ = v_isSharedCheck_4358_;
goto v_resetjp_4347_;
}
else
{
lean_inc(v_snd_4346_);
lean_inc(v_fst_4345_);
lean_dec(v_a_4341_);
v___x_4348_ = lean_box(0);
v_isShared_4349_ = v_isSharedCheck_4358_;
goto v_resetjp_4347_;
}
v_resetjp_4347_:
{
lean_object* v___x_4351_; 
if (v_isShared_4349_ == 0)
{
lean_ctor_set(v___x_4348_, 1, v_value_4331_);
lean_ctor_set(v___x_4348_, 0, v___x_4339_);
v___x_4351_ = v___x_4348_;
goto v_reusejp_4350_;
}
else
{
lean_object* v_reuseFailAlloc_4357_; 
v_reuseFailAlloc_4357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4357_, 0, v___x_4339_);
lean_ctor_set(v_reuseFailAlloc_4357_, 1, v_value_4331_);
v___x_4351_ = v_reuseFailAlloc_4357_;
goto v_reusejp_4350_;
}
v_reusejp_4350_:
{
lean_object* v___x_4352_; lean_object* v___x_4353_; lean_object* v___x_4355_; 
v___x_4352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4352_, 0, v_snd_4346_);
lean_ctor_set(v___x_4352_, 1, v___x_4351_);
v___x_4353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4353_, 0, v_fst_4345_);
lean_ctor_set(v___x_4353_, 1, v___x_4352_);
if (v_isShared_4344_ == 0)
{
lean_ctor_set(v___x_4343_, 0, v___x_4353_);
v___x_4355_ = v___x_4343_;
goto v_reusejp_4354_;
}
else
{
lean_object* v_reuseFailAlloc_4356_; 
v_reuseFailAlloc_4356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4356_, 0, v___x_4353_);
v___x_4355_ = v_reuseFailAlloc_4356_;
goto v_reusejp_4354_;
}
v_reusejp_4354_:
{
return v___x_4355_;
}
}
}
}
}
else
{
lean_object* v_a_4360_; lean_object* v___x_4362_; uint8_t v_isShared_4363_; uint8_t v_isSharedCheck_4367_; 
lean_dec_ref_known(v___x_4339_, 2);
lean_dec(v_value_4331_);
v_a_4360_ = lean_ctor_get(v___x_4340_, 0);
v_isSharedCheck_4367_ = !lean_is_exclusive(v___x_4340_);
if (v_isSharedCheck_4367_ == 0)
{
v___x_4362_ = v___x_4340_;
v_isShared_4363_ = v_isSharedCheck_4367_;
goto v_resetjp_4361_;
}
else
{
lean_inc(v_a_4360_);
lean_dec(v___x_4340_);
v___x_4362_ = lean_box(0);
v_isShared_4363_ = v_isSharedCheck_4367_;
goto v_resetjp_4361_;
}
v_resetjp_4361_:
{
lean_object* v___x_4365_; 
if (v_isShared_4363_ == 0)
{
v___x_4365_ = v___x_4362_;
goto v_reusejp_4364_;
}
else
{
lean_object* v_reuseFailAlloc_4366_; 
v_reuseFailAlloc_4366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4366_, 0, v_a_4360_);
v___x_4365_ = v_reuseFailAlloc_4366_;
goto v_reusejp_4364_;
}
v_reusejp_4364_:
{
return v___x_4365_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg___boxed(lean_object* v_expr_4368_, lean_object* v_value_4369_, lean_object* v_a_4370_, lean_object* v_a_4371_, lean_object* v_a_4372_, lean_object* v_a_4373_, lean_object* v_a_4374_){
_start:
{
lean_object* v_res_4375_; 
v_res_4375_ = l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg(v_expr_4368_, v_value_4369_, v_a_4370_, v_a_4371_, v_a_4372_, v_a_4373_);
lean_dec(v_a_4373_);
lean_dec_ref(v_a_4372_);
lean_dec(v_a_4371_);
lean_dec_ref(v_a_4370_);
return v_res_4375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr(lean_object* v_00_u03b1_4376_, lean_object* v_expr_4377_, lean_object* v_value_4378_, lean_object* v_a_4379_, lean_object* v_a_4380_, lean_object* v_a_4381_, lean_object* v_a_4382_){
_start:
{
lean_object* v___x_4384_; 
v___x_4384_ = l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg(v_expr_4377_, v_value_4378_, v_a_4379_, v_a_4380_, v_a_4381_, v_a_4382_);
return v___x_4384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___boxed(lean_object* v_00_u03b1_4385_, lean_object* v_expr_4386_, lean_object* v_value_4387_, lean_object* v_a_4388_, lean_object* v_a_4389_, lean_object* v_a_4390_, lean_object* v_a_4391_, lean_object* v_a_4392_){
_start:
{
lean_object* v_res_4393_; 
v_res_4393_ = l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr(v_00_u03b1_4385_, v_expr_4386_, v_value_4387_, v_a_4388_, v_a_4389_, v_a_4390_, v_a_4391_);
lean_dec(v_a_4391_);
lean_dec_ref(v_a_4390_);
lean_dec(v_a_4389_);
lean_dec_ref(v_a_4388_);
return v_res_4393_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___redArg(lean_object* v_e_4394_, lean_object* v_idx_4395_, lean_object* v_value_4396_, lean_object* v_a_4397_, lean_object* v_a_4398_, lean_object* v_a_4399_, lean_object* v_a_4400_){
_start:
{
lean_object* v_entry_4402_; lean_object* v___x_4404_; uint8_t v_isShared_4405_; uint8_t v_isSharedCheck_4448_; 
v_entry_4402_ = lean_ctor_get(v_e_4394_, 1);
v_isSharedCheck_4448_ = !lean_is_exclusive(v_e_4394_);
if (v_isSharedCheck_4448_ == 0)
{
lean_object* v_unused_4449_; 
v_unused_4449_ = lean_ctor_get(v_e_4394_, 0);
lean_dec(v_unused_4449_);
v___x_4404_ = v_e_4394_;
v_isShared_4405_ = v_isSharedCheck_4448_;
goto v_resetjp_4403_;
}
else
{
lean_inc(v_entry_4402_);
lean_dec(v_e_4394_);
v___x_4404_ = lean_box(0);
v_isShared_4405_ = v_isSharedCheck_4448_;
goto v_resetjp_4403_;
}
v_resetjp_4403_:
{
lean_object* v_snd_4406_; lean_object* v_fst_4407_; lean_object* v_fst_4408_; lean_object* v___x_4410_; uint8_t v_isShared_4411_; uint8_t v_isSharedCheck_4446_; 
v_snd_4406_ = lean_ctor_get(v_entry_4402_, 1);
lean_inc(v_snd_4406_);
v_fst_4407_ = lean_ctor_get(v_entry_4402_, 0);
lean_inc(v_fst_4407_);
lean_dec_ref(v_entry_4402_);
v_fst_4408_ = lean_ctor_get(v_snd_4406_, 0);
v_isSharedCheck_4446_ = !lean_is_exclusive(v_snd_4406_);
if (v_isSharedCheck_4446_ == 0)
{
lean_object* v_unused_4447_; 
v_unused_4447_ = lean_ctor_get(v_snd_4406_, 1);
lean_dec(v_unused_4447_);
v___x_4410_ = v_snd_4406_;
v_isShared_4411_ = v_isSharedCheck_4446_;
goto v_resetjp_4409_;
}
else
{
lean_inc(v_fst_4408_);
lean_dec(v_snd_4406_);
v___x_4410_ = lean_box(0);
v_isShared_4411_ = v_isSharedCheck_4446_;
goto v_resetjp_4409_;
}
v_resetjp_4409_:
{
lean_object* v___x_4412_; lean_object* v___x_4413_; lean_object* v___x_4414_; 
v___x_4412_ = l_Lean_instInhabitedExpr;
v___x_4413_ = lean_array_get(v___x_4412_, v_fst_4407_, v_idx_4395_);
lean_dec(v_fst_4407_);
v___x_4414_ = l_Lean_Meta_LazyDiscrTree_rootKey(v___x_4413_, v_a_4397_, v_a_4398_, v_a_4399_, v_a_4400_);
if (lean_obj_tag(v___x_4414_) == 0)
{
lean_object* v_a_4415_; lean_object* v___x_4417_; uint8_t v_isShared_4418_; uint8_t v_isSharedCheck_4437_; 
v_a_4415_ = lean_ctor_get(v___x_4414_, 0);
v_isSharedCheck_4437_ = !lean_is_exclusive(v___x_4414_);
if (v_isSharedCheck_4437_ == 0)
{
v___x_4417_ = v___x_4414_;
v_isShared_4418_ = v_isSharedCheck_4437_;
goto v_resetjp_4416_;
}
else
{
lean_inc(v_a_4415_);
lean_dec(v___x_4414_);
v___x_4417_ = lean_box(0);
v_isShared_4418_ = v_isSharedCheck_4437_;
goto v_resetjp_4416_;
}
v_resetjp_4416_:
{
lean_object* v_fst_4419_; lean_object* v_snd_4420_; lean_object* v___x_4422_; uint8_t v_isShared_4423_; uint8_t v_isSharedCheck_4436_; 
v_fst_4419_ = lean_ctor_get(v_a_4415_, 0);
v_snd_4420_ = lean_ctor_get(v_a_4415_, 1);
v_isSharedCheck_4436_ = !lean_is_exclusive(v_a_4415_);
if (v_isSharedCheck_4436_ == 0)
{
v___x_4422_ = v_a_4415_;
v_isShared_4423_ = v_isSharedCheck_4436_;
goto v_resetjp_4421_;
}
else
{
lean_inc(v_snd_4420_);
lean_inc(v_fst_4419_);
lean_dec(v_a_4415_);
v___x_4422_ = lean_box(0);
v_isShared_4423_ = v_isSharedCheck_4436_;
goto v_resetjp_4421_;
}
v_resetjp_4421_:
{
lean_object* v___x_4425_; 
if (v_isShared_4423_ == 0)
{
lean_ctor_set(v___x_4422_, 1, v_value_4396_);
lean_ctor_set(v___x_4422_, 0, v_fst_4408_);
v___x_4425_ = v___x_4422_;
goto v_reusejp_4424_;
}
else
{
lean_object* v_reuseFailAlloc_4435_; 
v_reuseFailAlloc_4435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4435_, 0, v_fst_4408_);
lean_ctor_set(v_reuseFailAlloc_4435_, 1, v_value_4396_);
v___x_4425_ = v_reuseFailAlloc_4435_;
goto v_reusejp_4424_;
}
v_reusejp_4424_:
{
lean_object* v___x_4427_; 
if (v_isShared_4411_ == 0)
{
lean_ctor_set(v___x_4410_, 1, v___x_4425_);
lean_ctor_set(v___x_4410_, 0, v_snd_4420_);
v___x_4427_ = v___x_4410_;
goto v_reusejp_4426_;
}
else
{
lean_object* v_reuseFailAlloc_4434_; 
v_reuseFailAlloc_4434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4434_, 0, v_snd_4420_);
lean_ctor_set(v_reuseFailAlloc_4434_, 1, v___x_4425_);
v___x_4427_ = v_reuseFailAlloc_4434_;
goto v_reusejp_4426_;
}
v_reusejp_4426_:
{
lean_object* v___x_4429_; 
if (v_isShared_4405_ == 0)
{
lean_ctor_set(v___x_4404_, 1, v___x_4427_);
lean_ctor_set(v___x_4404_, 0, v_fst_4419_);
v___x_4429_ = v___x_4404_;
goto v_reusejp_4428_;
}
else
{
lean_object* v_reuseFailAlloc_4433_; 
v_reuseFailAlloc_4433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4433_, 0, v_fst_4419_);
lean_ctor_set(v_reuseFailAlloc_4433_, 1, v___x_4427_);
v___x_4429_ = v_reuseFailAlloc_4433_;
goto v_reusejp_4428_;
}
v_reusejp_4428_:
{
lean_object* v___x_4431_; 
if (v_isShared_4418_ == 0)
{
lean_ctor_set(v___x_4417_, 0, v___x_4429_);
v___x_4431_ = v___x_4417_;
goto v_reusejp_4430_;
}
else
{
lean_object* v_reuseFailAlloc_4432_; 
v_reuseFailAlloc_4432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4432_, 0, v___x_4429_);
v___x_4431_ = v_reuseFailAlloc_4432_;
goto v_reusejp_4430_;
}
v_reusejp_4430_:
{
return v___x_4431_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4438_; lean_object* v___x_4440_; uint8_t v_isShared_4441_; uint8_t v_isSharedCheck_4445_; 
lean_del_object(v___x_4410_);
lean_dec(v_fst_4408_);
lean_del_object(v___x_4404_);
lean_dec(v_value_4396_);
v_a_4438_ = lean_ctor_get(v___x_4414_, 0);
v_isSharedCheck_4445_ = !lean_is_exclusive(v___x_4414_);
if (v_isSharedCheck_4445_ == 0)
{
v___x_4440_ = v___x_4414_;
v_isShared_4441_ = v_isSharedCheck_4445_;
goto v_resetjp_4439_;
}
else
{
lean_inc(v_a_4438_);
lean_dec(v___x_4414_);
v___x_4440_ = lean_box(0);
v_isShared_4441_ = v_isSharedCheck_4445_;
goto v_resetjp_4439_;
}
v_resetjp_4439_:
{
lean_object* v___x_4443_; 
if (v_isShared_4441_ == 0)
{
v___x_4443_ = v___x_4440_;
goto v_reusejp_4442_;
}
else
{
lean_object* v_reuseFailAlloc_4444_; 
v_reuseFailAlloc_4444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4444_, 0, v_a_4438_);
v___x_4443_ = v_reuseFailAlloc_4444_;
goto v_reusejp_4442_;
}
v_reusejp_4442_:
{
return v___x_4443_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___redArg___boxed(lean_object* v_e_4450_, lean_object* v_idx_4451_, lean_object* v_value_4452_, lean_object* v_a_4453_, lean_object* v_a_4454_, lean_object* v_a_4455_, lean_object* v_a_4456_, lean_object* v_a_4457_){
_start:
{
lean_object* v_res_4458_; 
v_res_4458_ = l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___redArg(v_e_4450_, v_idx_4451_, v_value_4452_, v_a_4453_, v_a_4454_, v_a_4455_, v_a_4456_);
lean_dec(v_a_4456_);
lean_dec_ref(v_a_4455_);
lean_dec(v_a_4454_);
lean_dec_ref(v_a_4453_);
lean_dec(v_idx_4451_);
return v_res_4458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry(lean_object* v_00_u03b1_4459_, lean_object* v_e_4460_, lean_object* v_idx_4461_, lean_object* v_value_4462_, lean_object* v_a_4463_, lean_object* v_a_4464_, lean_object* v_a_4465_, lean_object* v_a_4466_){
_start:
{
lean_object* v___x_4468_; 
v___x_4468_ = l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___redArg(v_e_4460_, v_idx_4461_, v_value_4462_, v_a_4463_, v_a_4464_, v_a_4465_, v_a_4466_);
return v___x_4468_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___boxed(lean_object* v_00_u03b1_4469_, lean_object* v_e_4470_, lean_object* v_idx_4471_, lean_object* v_value_4472_, lean_object* v_a_4473_, lean_object* v_a_4474_, lean_object* v_a_4475_, lean_object* v_a_4476_, lean_object* v_a_4477_){
_start:
{
lean_object* v_res_4478_; 
v_res_4478_ = l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry(v_00_u03b1_4469_, v_e_4470_, v_idx_4471_, v_value_4472_, v_a_4473_, v_a_4474_, v_a_4475_, v_a_4476_);
lean_dec(v_a_4476_);
lean_dec_ref(v_a_4475_);
lean_dec(v_a_4474_);
lean_dec_ref(v_a_4473_);
lean_dec(v_idx_4471_);
return v_res_4478_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_ImportData_new(){
_start:
{
lean_object* v___x_4482_; lean_object* v___x_4483_; 
v___x_4482_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_ImportData_new___closed__0));
v___x_4483_ = lean_st_mk_ref(v___x_4482_);
return v___x_4483_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_ImportData_new___boxed(lean_object* v_a_4484_){
_start:
{
lean_object* v_res_4485_; 
v_res_4485_ = l_Lean_Meta_LazyDiscrTree_ImportData_new();
return v_res_4485_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_4486_; 
v___x_4486_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_4486_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_4487_; lean_object* v___x_4488_; 
v___x_4487_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0_spec__0___redArg___closed__0);
v___x_4488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4488_, 0, v___x_4487_);
return v___x_4488_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0_spec__0___redArg(){
_start:
{
lean_object* v___x_4490_; 
v___x_4490_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0_spec__0___redArg___closed__1);
return v___x_4490_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0_spec__0___redArg___boxed(lean_object* v___dummy_4491_){
_start:
{
lean_object* v_res_4492_; 
v_res_4492_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0_spec__0___redArg();
return v_res_4492_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0(void){
_start:
{
lean_object* v___x_4493_; lean_object* v___x_4494_; 
v___x_4493_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0_spec__0___redArg___closed__0);
v___x_4494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4494_, 0, v___x_4493_);
return v___x_4494_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1(void){
_start:
{
lean_object* v___x_4495_; lean_object* v___x_4496_; 
v___x_4495_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0, &l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0);
v___x_4496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4496_, 0, v___x_4495_);
lean_ctor_set(v___x_4496_, 1, v___x_4495_);
return v___x_4496_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2(void){
_start:
{
lean_object* v___x_4497_; 
v___x_4497_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0_spec__0___redArg();
return v___x_4497_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__3(void){
_start:
{
lean_object* v___x_4498_; lean_object* v___x_4499_; 
v___x_4498_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0, &l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0);
v___x_4499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4499_, 0, v___x_4498_);
lean_ctor_set(v___x_4499_, 1, v___x_4498_);
return v___x_4499_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__4(void){
_start:
{
lean_object* v___x_4500_; lean_object* v___x_4501_; lean_object* v___x_4502_; 
v___x_4500_ = lean_unsigned_to_nat(0u);
v___x_4501_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0, &l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0);
v___x_4502_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4502_, 0, v___x_4501_);
lean_ctor_set(v___x_4502_, 1, v___x_4501_);
lean_ctor_set(v___x_4502_, 2, v___x_4500_);
return v___x_4502_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__5(void){
_start:
{
lean_object* v___x_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; lean_object* v___x_4506_; lean_object* v___x_4507_; 
v___x_4503_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__4, &l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__4_once, _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__4);
v___x_4504_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__3, &l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__3);
v___x_4505_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0, &l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0);
v___x_4506_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2, &l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2);
v___x_4507_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_4507_, 0, v___x_4506_);
lean_ctor_set(v___x_4507_, 1, v___x_4505_);
lean_ctor_set(v___x_4507_, 2, v___x_4504_);
lean_ctor_set(v___x_4507_, 3, v___x_4505_);
lean_ctor_set(v___x_4507_, 4, v___x_4505_);
lean_ctor_set(v___x_4507_, 5, v___x_4505_);
lean_ctor_set(v___x_4507_, 6, v___x_4505_);
lean_ctor_set(v___x_4507_, 7, v___x_4503_);
return v___x_4507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Cache_empty(lean_object* v_ngen_4508_){
_start:
{
lean_object* v___x_4509_; lean_object* v___x_4510_; lean_object* v___x_4511_; 
v___x_4509_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1, &l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1);
v___x_4510_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__5, &l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__5_once, _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__5);
v___x_4511_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4511_, 0, v_ngen_4508_);
lean_ctor_set(v___x_4511_, 1, v___x_4509_);
lean_ctor_set(v___x_4511_, 2, v___x_4510_);
return v___x_4511_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0_spec__0(lean_object* v_00_u03b2_4512_){
_start:
{
lean_object* v___x_4513_; 
v___x_4513_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2, &l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2);
return v___x_4513_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0___redArg(){
_start:
{
lean_object* v___x_4515_; 
v___x_4515_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2, &l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2);
return v___x_4515_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0___redArg___boxed(lean_object* v___dummy_4516_){
_start:
{
lean_object* v_res_4517_; 
v_res_4517_ = l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0___redArg();
return v_res_4517_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0(lean_object* v_00_u03b2_4518_){
_start:
{
lean_object* v___x_4519_; 
v___x_4519_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2, &l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2);
return v___x_4519_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_isAccessiblePrivateName(lean_object* v_env_4520_, lean_object* v_declName_4521_){
_start:
{
uint8_t v___x_4522_; 
v___x_4522_ = l_Lean_isPrivateName(v_declName_4521_);
if (v___x_4522_ == 0)
{
return v___x_4522_;
}
else
{
lean_object* v___x_4523_; 
v___x_4523_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_4520_, v_declName_4521_);
if (lean_obj_tag(v___x_4523_) == 0)
{
return v___x_4522_;
}
else
{
lean_object* v_val_4524_; lean_object* v___x_4525_; uint8_t v_isModule_4526_; 
v_val_4524_ = lean_ctor_get(v___x_4523_, 0);
lean_inc(v_val_4524_);
lean_dec_ref_known(v___x_4523_, 1);
v___x_4525_ = l_Lean_Environment_header(v_env_4520_);
v_isModule_4526_ = lean_ctor_get_uint8(v___x_4525_, sizeof(void*)*8 + 4);
if (v_isModule_4526_ == 0)
{
lean_dec_ref(v___x_4525_);
lean_dec(v_val_4524_);
return v_isModule_4526_;
}
else
{
lean_object* v_modules_4527_; lean_object* v___x_4528_; uint8_t v___x_4529_; 
v_modules_4527_ = lean_ctor_get(v___x_4525_, 3);
lean_inc_ref(v_modules_4527_);
lean_dec_ref(v___x_4525_);
v___x_4528_ = lean_array_get_size(v_modules_4527_);
v___x_4529_ = lean_nat_dec_lt(v_val_4524_, v___x_4528_);
if (v___x_4529_ == 0)
{
lean_dec_ref(v_modules_4527_);
lean_dec(v_val_4524_);
return v___x_4529_;
}
else
{
lean_object* v___x_4530_; lean_object* v_toImport_4531_; uint8_t v_importAll_4532_; 
v___x_4530_ = lean_array_fget(v_modules_4527_, v_val_4524_);
lean_dec(v_val_4524_);
lean_dec_ref(v_modules_4527_);
v_toImport_4531_ = lean_ctor_get(v___x_4530_, 0);
lean_inc_ref(v_toImport_4531_);
lean_dec(v___x_4530_);
v_importAll_4532_ = lean_ctor_get_uint8(v_toImport_4531_, sizeof(void*)*1);
lean_dec_ref(v_toImport_4531_);
return v_importAll_4532_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_isAccessiblePrivateName___boxed(lean_object* v_env_4533_, lean_object* v_declName_4534_){
_start:
{
uint8_t v_res_4535_; lean_object* v_r_4536_; 
v_res_4535_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_isAccessiblePrivateName(v_env_4533_, v_declName_4534_);
lean_dec(v_declName_4534_);
lean_dec_ref(v_env_4533_);
v_r_4536_ = lean_box(v_res_4535_);
return v_r_4536_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_LazyDiscrTree_blacklistInsertion(lean_object* v_env_4542_, lean_object* v_declName_4543_){
_start:
{
uint8_t v___x_4544_; 
lean_inc(v_declName_4543_);
lean_inc_ref(v_env_4542_);
v___x_4544_ = l_Lean_Meta_allowCompletion(v_env_4542_, v_declName_4543_);
if (v___x_4544_ == 0)
{
uint8_t v___x_4545_; 
lean_dec(v_declName_4543_);
lean_dec_ref(v_env_4542_);
v___x_4545_ = 1;
return v___x_4545_;
}
else
{
lean_object* v___x_4546_; uint8_t v___x_4547_; 
v___x_4546_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__1));
v___x_4547_ = lean_name_eq(v_declName_4543_, v___x_4546_);
if (v___x_4547_ == 0)
{
uint8_t v___x_4556_; 
lean_inc(v_declName_4543_);
v___x_4556_ = l_Lean_Name_isInternalDetail(v_declName_4543_);
if (v___x_4556_ == 0)
{
lean_dec_ref(v_env_4542_);
goto v___jp_4552_;
}
else
{
uint8_t v___x_4557_; 
v___x_4557_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_isAccessiblePrivateName(v_env_4542_, v_declName_4543_);
lean_dec_ref(v_env_4542_);
if (v___x_4557_ == 0)
{
lean_dec(v_declName_4543_);
return v___x_4556_;
}
else
{
goto v___jp_4552_;
}
}
}
else
{
lean_dec(v_declName_4543_);
lean_dec_ref(v_env_4542_);
return v___x_4547_;
}
v___jp_4548_:
{
if (lean_obj_tag(v_declName_4543_) == 1)
{
lean_object* v_str_4549_; lean_object* v___x_4550_; uint8_t v___x_4551_; 
v_str_4549_ = lean_ctor_get(v_declName_4543_, 1);
lean_inc_ref(v_str_4549_);
lean_dec_ref_known(v_declName_4543_, 2);
v___x_4550_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__2));
v___x_4551_ = lean_string_dec_eq(v_str_4549_, v___x_4550_);
lean_dec_ref(v_str_4549_);
return v___x_4551_;
}
else
{
lean_dec(v_declName_4543_);
return v___x_4547_;
}
}
v___jp_4552_:
{
if (lean_obj_tag(v_declName_4543_) == 1)
{
lean_object* v_str_4553_; lean_object* v___x_4554_; uint8_t v___x_4555_; 
v_str_4553_ = lean_ctor_get(v_declName_4543_, 1);
v___x_4554_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__3));
v___x_4555_ = lean_string_dec_eq(v_str_4553_, v___x_4554_);
if (v___x_4555_ == 0)
{
goto v___jp_4548_;
}
else
{
lean_dec_ref_known(v_declName_4543_, 2);
return v___x_4555_;
}
}
else
{
goto v___jp_4548_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_blacklistInsertion___boxed(lean_object* v_env_4558_, lean_object* v_declName_4559_){
_start:
{
uint8_t v_res_4560_; lean_object* v_r_4561_; 
v_res_4560_ = l_Lean_Meta_LazyDiscrTree_blacklistInsertion(v_env_4558_, v_declName_4559_);
v_r_4561_ = lean_box(v_res_4560_);
return v_r_4561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__0(lean_object* v_opts_4562_, lean_object* v_opt_4563_){
_start:
{
lean_object* v_name_4564_; lean_object* v_defValue_4565_; lean_object* v_map_4566_; lean_object* v___x_4567_; 
v_name_4564_ = lean_ctor_get(v_opt_4563_, 0);
v_defValue_4565_ = lean_ctor_get(v_opt_4563_, 1);
v_map_4566_ = lean_ctor_get(v_opts_4562_, 0);
v___x_4567_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_4566_, v_name_4564_);
if (lean_obj_tag(v___x_4567_) == 0)
{
lean_inc(v_defValue_4565_);
return v_defValue_4565_;
}
else
{
lean_object* v_val_4568_; 
v_val_4568_ = lean_ctor_get(v___x_4567_, 0);
lean_inc(v_val_4568_);
lean_dec_ref_known(v___x_4567_, 1);
if (lean_obj_tag(v_val_4568_) == 3)
{
lean_object* v_v_4569_; 
v_v_4569_ = lean_ctor_get(v_val_4568_, 0);
lean_inc(v_v_4569_);
lean_dec_ref_known(v_val_4568_, 1);
return v_v_4569_;
}
else
{
lean_dec(v_val_4568_);
lean_inc(v_defValue_4565_);
return v_defValue_4565_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__0___boxed(lean_object* v_opts_4570_, lean_object* v_opt_4571_){
_start:
{
lean_object* v_res_4572_; 
v_res_4572_ = l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__0(v_opts_4570_, v_opt_4571_);
lean_dec_ref(v_opt_4571_);
lean_dec_ref(v_opts_4570_);
return v_res_4572_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1___redArg(lean_object* v_as_4573_, size_t v_i_4574_, size_t v_stop_4575_, lean_object* v_b_4576_){
_start:
{
uint8_t v___x_4577_; 
v___x_4577_ = lean_usize_dec_eq(v_i_4574_, v_stop_4575_);
if (v___x_4577_ == 0)
{
lean_object* v___x_4578_; lean_object* v_key_4579_; lean_object* v_entry_4580_; lean_object* v___x_4581_; size_t v___x_4582_; size_t v___x_4583_; 
v___x_4578_ = lean_array_uget_borrowed(v_as_4573_, v_i_4574_);
v_key_4579_ = lean_ctor_get(v___x_4578_, 0);
v_entry_4580_ = lean_ctor_get(v___x_4578_, 1);
lean_inc_ref(v_entry_4580_);
lean_inc(v_key_4579_);
v___x_4581_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push___redArg(v_b_4576_, v_key_4579_, v_entry_4580_);
v___x_4582_ = ((size_t)1ULL);
v___x_4583_ = lean_usize_add(v_i_4574_, v___x_4582_);
v_i_4574_ = v___x_4583_;
v_b_4576_ = v___x_4581_;
goto _start;
}
else
{
return v_b_4576_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1___redArg___boxed(lean_object* v_as_4585_, lean_object* v_i_4586_, lean_object* v_stop_4587_, lean_object* v_b_4588_){
_start:
{
size_t v_i_boxed_4589_; size_t v_stop_boxed_4590_; lean_object* v_res_4591_; 
v_i_boxed_4589_ = lean_unbox_usize(v_i_4586_);
lean_dec(v_i_4586_);
v_stop_boxed_4590_ = lean_unbox_usize(v_stop_4587_);
lean_dec(v_stop_4587_);
v_res_4591_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1___redArg(v_as_4585_, v_i_boxed_4589_, v_stop_boxed_4590_, v_b_4588_);
lean_dec_ref(v_as_4585_);
return v_res_4591_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0(void){
_start:
{
lean_object* v___x_4592_; lean_object* v___x_4593_; 
v___x_4592_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_LazyDiscrTree_Cache_empty_spec__0_spec__0___redArg___closed__0);
v___x_4593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4593_, 0, v___x_4592_);
return v___x_4593_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1(void){
_start:
{
lean_object* v___x_4594_; lean_object* v___x_4595_; lean_object* v___x_4596_; 
v___x_4594_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0);
v___x_4595_ = lean_unsigned_to_nat(0u);
v___x_4596_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_4596_, 0, v___x_4595_);
lean_ctor_set(v___x_4596_, 1, v___x_4595_);
lean_ctor_set(v___x_4596_, 2, v___x_4595_);
lean_ctor_set(v___x_4596_, 3, v___x_4595_);
lean_ctor_set(v___x_4596_, 4, v___x_4594_);
lean_ctor_set(v___x_4596_, 5, v___x_4594_);
lean_ctor_set(v___x_4596_, 6, v___x_4594_);
lean_ctor_set(v___x_4596_, 7, v___x_4594_);
lean_ctor_set(v___x_4596_, 8, v___x_4594_);
lean_ctor_set(v___x_4596_, 9, v___x_4594_);
lean_ctor_set(v___x_4596_, 10, v___x_4594_);
return v___x_4596_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__2(void){
_start:
{
lean_object* v___x_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; 
v___x_4597_ = lean_unsigned_to_nat(32u);
v___x_4598_ = lean_mk_empty_array_with_capacity(v___x_4597_);
v___x_4599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4599_, 0, v___x_4598_);
return v___x_4599_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3(void){
_start:
{
size_t v___x_4600_; lean_object* v___x_4601_; lean_object* v___x_4602_; lean_object* v___x_4603_; lean_object* v___x_4604_; lean_object* v___x_4605_; 
v___x_4600_ = ((size_t)5ULL);
v___x_4601_ = lean_unsigned_to_nat(0u);
v___x_4602_ = lean_unsigned_to_nat(32u);
v___x_4603_ = lean_mk_empty_array_with_capacity(v___x_4602_);
v___x_4604_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__2, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__2);
v___x_4605_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_4605_, 0, v___x_4604_);
lean_ctor_set(v___x_4605_, 1, v___x_4603_);
lean_ctor_set(v___x_4605_, 2, v___x_4601_);
lean_ctor_set(v___x_4605_, 3, v___x_4601_);
lean_ctor_set_usize(v___x_4605_, 4, v___x_4600_);
return v___x_4605_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4(void){
_start:
{
lean_object* v___x_4606_; lean_object* v___x_4607_; 
v___x_4606_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0);
v___x_4607_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4607_, 0, v___x_4606_);
lean_ctor_set(v___x_4607_, 1, v___x_4606_);
lean_ctor_set(v___x_4607_, 2, v___x_4606_);
lean_ctor_set(v___x_4607_, 3, v___x_4606_);
lean_ctor_set(v___x_4607_, 4, v___x_4606_);
return v___x_4607_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__5(void){
_start:
{
lean_object* v___x_4608_; lean_object* v___x_4609_; lean_object* v___x_4610_; lean_object* v___x_4611_; 
v___x_4608_ = lean_box(1);
v___x_4609_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3);
v___x_4610_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0);
v___x_4611_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4611_, 0, v___x_4610_);
lean_ctor_set(v___x_4611_, 1, v___x_4609_);
lean_ctor_set(v___x_4611_, 2, v___x_4608_);
return v___x_4611_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__7(void){
_start:
{
lean_object* v___x_4614_; lean_object* v___x_4615_; lean_object* v___x_4616_; 
v___x_4614_ = lean_unsigned_to_nat(1u);
v___x_4615_ = l_Lean_firstFrontendMacroScope;
v___x_4616_ = lean_nat_add(v___x_4615_, v___x_4614_);
return v___x_4616_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__9(void){
_start:
{
lean_object* v___x_4621_; uint64_t v___x_4622_; lean_object* v___x_4623_; 
v___x_4621_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3);
v___x_4622_ = 0ULL;
v___x_4623_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_4623_, 0, v___x_4621_);
lean_ctor_set_uint64(v___x_4623_, sizeof(void*)*1, v___x_4622_);
return v___x_4623_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__10(void){
_start:
{
lean_object* v___x_4624_; lean_object* v___x_4625_; lean_object* v___x_4626_; lean_object* v___x_4627_; 
v___x_4624_ = lean_unsigned_to_nat(0u);
v___x_4625_ = l_Lean_Options_empty;
v___x_4626_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__6));
v___x_4627_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_4627_, 0, v___x_4626_);
lean_ctor_set(v___x_4627_, 1, v___x_4625_);
lean_ctor_set(v___x_4627_, 2, v___x_4626_);
lean_ctor_set(v___x_4627_, 3, v___x_4624_);
lean_ctor_set(v___x_4627_, 4, v___x_4624_);
lean_ctor_set(v___x_4627_, 5, v___x_4624_);
lean_ctor_set(v___x_4627_, 6, v___x_4626_);
lean_ctor_set(v___x_4627_, 7, v___x_4626_);
return v___x_4627_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__11(void){
_start:
{
lean_object* v___x_4628_; lean_object* v___x_4629_; lean_object* v___x_4630_; 
v___x_4628_ = l_Lean_NameSet_empty;
v___x_4629_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3);
v___x_4630_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4630_, 0, v___x_4629_);
lean_ctor_set(v___x_4630_, 1, v___x_4629_);
lean_ctor_set(v___x_4630_, 2, v___x_4628_);
return v___x_4630_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__12(void){
_start:
{
lean_object* v___x_4631_; lean_object* v___x_4632_; uint8_t v___x_4633_; lean_object* v___x_4634_; 
v___x_4631_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3);
v___x_4632_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0);
v___x_4633_ = 1;
v___x_4634_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_4634_, 0, v___x_4632_);
lean_ctor_set(v___x_4634_, 1, v___x_4632_);
lean_ctor_set(v___x_4634_, 2, v___x_4631_);
lean_ctor_set_uint8(v___x_4634_, sizeof(void*)*3, v___x_4633_);
return v___x_4634_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__13(void){
_start:
{
lean_object* v___x_4635_; lean_object* v___x_4636_; 
v___x_4635_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0);
v___x_4636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4636_, 0, v___x_4635_);
lean_ctor_set(v___x_4636_, 1, v___x_4635_);
return v___x_4636_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg(lean_object* v_cctx_4637_, lean_object* v_env_4638_, lean_object* v_modName_4639_, lean_object* v_d_4640_, lean_object* v_cacheRef_4641_, lean_object* v_tree_4642_, lean_object* v_act_4643_, lean_object* v_c_4644_){
_start:
{
uint8_t v___x_4646_; 
lean_inc_ref(v_c_4644_);
v___x_4646_ = l_Lean_AsyncConstantInfo_isUnsafe(v_c_4644_);
if (v___x_4646_ == 0)
{
lean_object* v_name_4647_; uint8_t v___x_4648_; 
v_name_4647_ = lean_ctor_get(v_c_4644_, 0);
lean_inc_n(v_name_4647_, 2);
lean_inc_ref(v_env_4638_);
v___x_4648_ = l_Lean_Meta_LazyDiscrTree_blacklistInsertion(v_env_4638_, v_name_4647_);
if (v___x_4648_ == 0)
{
lean_object* v___x_4649_; lean_object* v___x_4650_; lean_object* v_ngen_4651_; lean_object* v_core_4652_; lean_object* v_meta_4653_; lean_object* v___x_4655_; uint8_t v_isShared_4656_; uint8_t v_isSharedCheck_4790_; 
v___x_4649_ = lean_box(1);
v___x_4650_ = lean_st_ref_get(v_cacheRef_4641_);
v_ngen_4651_ = lean_ctor_get(v___x_4650_, 0);
v_core_4652_ = lean_ctor_get(v___x_4650_, 1);
v_meta_4653_ = lean_ctor_get(v___x_4650_, 2);
v_isSharedCheck_4790_ = !lean_is_exclusive(v___x_4650_);
if (v_isSharedCheck_4790_ == 0)
{
v___x_4655_ = v___x_4650_;
v_isShared_4656_ = v_isSharedCheck_4790_;
goto v_resetjp_4654_;
}
else
{
lean_inc(v_meta_4653_);
lean_inc(v_core_4652_);
lean_inc(v_ngen_4651_);
lean_dec(v___x_4650_);
v___x_4655_ = lean_box(0);
v_isShared_4656_ = v_isSharedCheck_4790_;
goto v_resetjp_4654_;
}
v_resetjp_4654_:
{
lean_object* v___x_4657_; lean_object* v___x_4658_; lean_object* v___x_4659_; lean_object* v___x_4660_; lean_object* v___x_4661_; lean_object* v___x_4662_; lean_object* v___x_4663_; uint8_t v___x_4664_; uint8_t v___x_4665_; uint8_t v___x_4666_; uint8_t v___x_4667_; lean_object* v___x_4668_; lean_object* v___x_4669_; lean_object* v___x_4670_; lean_object* v___x_4671_; lean_object* v___x_4672_; lean_object* v___x_4673_; lean_object* v___x_4674_; lean_object* v___x_4675_; lean_object* v___x_4676_; lean_object* v___x_4677_; lean_object* v___x_4678_; lean_object* v___x_4679_; lean_object* v___x_4680_; lean_object* v___x_4681_; lean_object* v___y_4683_; uint16_t v___y_4684_; lean_object* v_fileName_4685_; lean_object* v_fileMap_4686_; lean_object* v_currNamespace_4687_; lean_object* v_openDecls_4688_; lean_object* v_initHeartbeats_4689_; lean_object* v_maxHeartbeats_4690_; lean_object* v_quotContext_4691_; lean_object* v_currMacroScope_4692_; lean_object* v_cancelTk_x3f_4693_; lean_object* v_inheritedTraceOptions_4694_; lean_object* v_currRecDepth_4695_; lean_object* v_ref_4696_; uint8_t v_suppressElabErrors_4697_; uint8_t v_checkDeprecated_4698_; uint8_t v_isRecordingDeps_4699_; lean_object* v___x_4726_; lean_object* v___x_4727_; lean_object* v_toCold_4728_; lean_object* v_currRecDepth_4729_; lean_object* v_ref_4730_; uint8_t v_suppressElabErrors_4731_; uint8_t v_checkDeprecated_4732_; uint8_t v_isRecordingDeps_4733_; lean_object* v_fileName_4734_; lean_object* v_fileMap_4735_; lean_object* v_options_4736_; lean_object* v_currNamespace_4737_; lean_object* v_openDecls_4738_; lean_object* v_initHeartbeats_4739_; lean_object* v_maxHeartbeats_4740_; lean_object* v_quotContext_4741_; lean_object* v_currMacroScope_4742_; lean_object* v_cancelTk_x3f_4743_; lean_object* v_nextMacroScope_4745_; lean_object* v_ngen_4746_; lean_object* v_auxDeclNGen_4747_; lean_object* v_traceState_4748_; lean_object* v_recordedDeps_4749_; lean_object* v_messages_4750_; lean_object* v_infoState_4751_; lean_object* v_snapshotTasks_4752_; lean_object* v___y_4753_; uint16_t v___y_4754_; lean_object* v___y_4755_; lean_object* v___y_4760_; uint16_t v___y_4761_; uint8_t v___y_4762_; lean_object* v___y_4780_; 
v___x_4657_ = lean_unsigned_to_nat(0u);
v___x_4658_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1);
v___x_4659_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3);
v___x_4660_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4);
v___x_4661_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4661_, 0, v___x_4658_);
lean_ctor_set(v___x_4661_, 1, v_meta_4653_);
lean_ctor_set(v___x_4661_, 2, v___x_4649_);
lean_ctor_set(v___x_4661_, 3, v___x_4659_);
lean_ctor_set(v___x_4661_, 4, v___x_4660_);
lean_inc_ref(v_ngen_4651_);
v___x_4662_ = l_Lean_Meta_LazyDiscrTree_Cache_empty(v_ngen_4651_);
v___x_4663_ = lean_st_ref_swap(v_cacheRef_4641_, v___x_4662_);
lean_dec(v___x_4663_);
v___x_4664_ = 1;
v___x_4665_ = 2;
v___x_4666_ = 0;
v___x_4667_ = 2;
v___x_4668_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_4668_, 0, v___x_4648_);
lean_ctor_set_uint8(v___x_4668_, 1, v___x_4648_);
lean_ctor_set_uint8(v___x_4668_, 2, v___x_4648_);
lean_ctor_set_uint8(v___x_4668_, 3, v___x_4648_);
lean_ctor_set_uint8(v___x_4668_, 4, v___x_4648_);
lean_ctor_set_uint8(v___x_4668_, 5, v___x_4664_);
lean_ctor_set_uint8(v___x_4668_, 6, v___x_4664_);
lean_ctor_set_uint8(v___x_4668_, 7, v___x_4648_);
lean_ctor_set_uint8(v___x_4668_, 8, v___x_4664_);
lean_ctor_set_uint8(v___x_4668_, 9, v___x_4665_);
lean_ctor_set_uint8(v___x_4668_, 10, v___x_4666_);
lean_ctor_set_uint8(v___x_4668_, 11, v___x_4664_);
lean_ctor_set_uint8(v___x_4668_, 12, v___x_4664_);
lean_ctor_set_uint8(v___x_4668_, 13, v___x_4664_);
lean_ctor_set_uint8(v___x_4668_, 14, v___x_4667_);
lean_ctor_set_uint8(v___x_4668_, 15, v___x_4664_);
lean_ctor_set_uint8(v___x_4668_, 16, v___x_4664_);
lean_ctor_set_uint8(v___x_4668_, 17, v___x_4664_);
lean_ctor_set_uint8(v___x_4668_, 18, v___x_4664_);
lean_ctor_set_uint8(v___x_4668_, 19, v___x_4648_);
v___x_4669_ = l_Lean_Meta_Config_toConfigWithKey(v___x_4668_);
v___x_4670_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__5, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__5_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__5);
v___x_4671_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__6));
v___x_4672_ = lean_box(0);
v___x_4673_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4673_, 0, v___x_4669_);
lean_ctor_set(v___x_4673_, 1, v___x_4649_);
lean_ctor_set(v___x_4673_, 2, v___x_4670_);
lean_ctor_set(v___x_4673_, 3, v___x_4671_);
lean_ctor_set(v___x_4673_, 4, v___x_4672_);
lean_ctor_set(v___x_4673_, 5, v___x_4657_);
lean_ctor_set(v___x_4673_, 6, v___x_4672_);
lean_ctor_set_uint8(v___x_4673_, sizeof(void*)*7, v___x_4648_);
lean_ctor_set_uint8(v___x_4673_, sizeof(void*)*7 + 1, v___x_4648_);
lean_ctor_set_uint8(v___x_4673_, sizeof(void*)*7 + 2, v___x_4648_);
lean_ctor_set_uint8(v___x_4673_, sizeof(void*)*7 + 3, v___x_4664_);
v___x_4674_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__7, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__7_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__7);
v___x_4675_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__8));
v___x_4676_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__9, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__9_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__9);
v___x_4677_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__10, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__10_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__10);
v___x_4678_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__11, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__11_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__11);
v___x_4679_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__12, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__12_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__12);
v___x_4680_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_4680_, 0, v_env_4638_);
lean_ctor_set(v___x_4680_, 1, v___x_4674_);
lean_ctor_set(v___x_4680_, 2, v_ngen_4651_);
lean_ctor_set(v___x_4680_, 3, v___x_4675_);
lean_ctor_set(v___x_4680_, 4, v___x_4676_);
lean_ctor_set(v___x_4680_, 5, v_core_4652_);
lean_ctor_set(v___x_4680_, 6, v___x_4677_);
lean_ctor_set(v___x_4680_, 7, v___x_4678_);
lean_ctor_set(v___x_4680_, 8, v___x_4679_);
lean_ctor_set(v___x_4680_, 9, v___x_4671_);
v___x_4681_ = lean_st_mk_ref(v___x_4680_);
v___x_4726_ = l_Lean_inheritedTraceOptions;
v___x_4727_ = lean_st_ref_get(v___x_4726_);
v_toCold_4728_ = lean_ctor_get(v_cctx_4637_, 0);
lean_inc_ref(v_toCold_4728_);
v_currRecDepth_4729_ = lean_ctor_get(v_cctx_4637_, 1);
lean_inc(v_currRecDepth_4729_);
v_ref_4730_ = lean_ctor_get(v_cctx_4637_, 2);
lean_inc(v_ref_4730_);
v_suppressElabErrors_4731_ = lean_ctor_get_uint8(v_cctx_4637_, sizeof(void*)*3 + 2);
v_checkDeprecated_4732_ = lean_ctor_get_uint8(v_cctx_4637_, sizeof(void*)*3 + 3);
v_isRecordingDeps_4733_ = lean_ctor_get_uint8(v_cctx_4637_, sizeof(void*)*3 + 4);
lean_dec_ref(v_cctx_4637_);
v_fileName_4734_ = lean_ctor_get(v_toCold_4728_, 0);
lean_inc_ref(v_fileName_4734_);
v_fileMap_4735_ = lean_ctor_get(v_toCold_4728_, 1);
lean_inc_ref(v_fileMap_4735_);
v_options_4736_ = lean_ctor_get(v_toCold_4728_, 2);
lean_inc_ref(v_options_4736_);
v_currNamespace_4737_ = lean_ctor_get(v_toCold_4728_, 4);
lean_inc(v_currNamespace_4737_);
v_openDecls_4738_ = lean_ctor_get(v_toCold_4728_, 5);
lean_inc(v_openDecls_4738_);
v_initHeartbeats_4739_ = lean_ctor_get(v_toCold_4728_, 6);
lean_inc(v_initHeartbeats_4739_);
v_maxHeartbeats_4740_ = lean_ctor_get(v_toCold_4728_, 7);
lean_inc(v_maxHeartbeats_4740_);
v_quotContext_4741_ = lean_ctor_get(v_toCold_4728_, 8);
lean_inc(v_quotContext_4741_);
v_currMacroScope_4742_ = lean_ctor_get(v_toCold_4728_, 9);
lean_inc(v_currMacroScope_4742_);
v_cancelTk_x3f_4743_ = lean_ctor_get(v_toCold_4728_, 10);
lean_inc(v_cancelTk_x3f_4743_);
lean_dec_ref(v_toCold_4728_);
if (v_isRecordingDeps_4733_ == 0)
{
v___y_4780_ = v_options_4736_;
goto v___jp_4779_;
}
else
{
lean_object* v___x_4789_; 
v___x_4789_ = l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(v_options_4736_);
v___y_4780_ = v___x_4789_;
goto v___jp_4779_;
}
v___jp_4682_:
{
lean_object* v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; lean_object* v___x_4704_; lean_object* v___x_4705_; 
v___x_4700_ = l_Lean_maxRecDepth;
v___x_4701_ = l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__0(v___y_4683_, v___x_4700_);
v___x_4702_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_4702_, 0, v_fileName_4685_);
lean_ctor_set(v___x_4702_, 1, v_fileMap_4686_);
lean_ctor_set(v___x_4702_, 2, v___y_4683_);
lean_ctor_set(v___x_4702_, 3, v___x_4701_);
lean_ctor_set(v___x_4702_, 4, v_currNamespace_4687_);
lean_ctor_set(v___x_4702_, 5, v_openDecls_4688_);
lean_ctor_set(v___x_4702_, 6, v_initHeartbeats_4689_);
lean_ctor_set(v___x_4702_, 7, v_maxHeartbeats_4690_);
lean_ctor_set(v___x_4702_, 8, v_quotContext_4691_);
lean_ctor_set(v___x_4702_, 9, v_currMacroScope_4692_);
lean_ctor_set(v___x_4702_, 10, v_cancelTk_x3f_4693_);
lean_ctor_set(v___x_4702_, 11, v_inheritedTraceOptions_4694_);
v___x_4703_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_4703_, 0, v___x_4702_);
lean_ctor_set(v___x_4703_, 1, v_currRecDepth_4695_);
lean_ctor_set(v___x_4703_, 2, v_ref_4696_);
lean_ctor_set_uint16(v___x_4703_, sizeof(void*)*3, v___y_4684_);
lean_ctor_set_uint8(v___x_4703_, sizeof(void*)*3 + 2, v_suppressElabErrors_4697_);
lean_ctor_set_uint8(v___x_4703_, sizeof(void*)*3 + 3, v_checkDeprecated_4698_);
lean_ctor_set_uint8(v___x_4703_, sizeof(void*)*3 + 4, v_isRecordingDeps_4699_);
v___x_4704_ = lean_st_mk_ref(v___x_4661_);
lean_inc(v___x_4681_);
lean_inc(v___x_4704_);
lean_inc(v_name_4647_);
v___x_4705_ = lean_apply_7(v_act_4643_, v_name_4647_, v_c_4644_, v___x_4673_, v___x_4704_, v___x_4703_, v___x_4681_, lean_box(0));
if (lean_obj_tag(v___x_4705_) == 0)
{
lean_object* v_a_4706_; lean_object* v___x_4707_; lean_object* v___x_4708_; lean_object* v_ngen_4709_; lean_object* v_cache_4710_; lean_object* v_cache_4711_; lean_object* v___x_4713_; 
lean_dec(v_name_4647_);
lean_dec(v_modName_4639_);
v_a_4706_ = lean_ctor_get(v___x_4705_, 0);
lean_inc(v_a_4706_);
lean_dec_ref_known(v___x_4705_, 1);
v___x_4707_ = lean_st_ref_get(v___x_4704_);
lean_dec(v___x_4704_);
v___x_4708_ = lean_st_ref_get(v___x_4681_);
lean_dec(v___x_4681_);
v_ngen_4709_ = lean_ctor_get(v___x_4708_, 2);
lean_inc_ref(v_ngen_4709_);
v_cache_4710_ = lean_ctor_get(v___x_4708_, 5);
lean_inc_ref(v_cache_4710_);
lean_dec(v___x_4708_);
v_cache_4711_ = lean_ctor_get(v___x_4707_, 1);
lean_inc_ref(v_cache_4711_);
lean_dec(v___x_4707_);
if (v_isShared_4656_ == 0)
{
lean_ctor_set(v___x_4655_, 2, v_cache_4711_);
lean_ctor_set(v___x_4655_, 1, v_cache_4710_);
lean_ctor_set(v___x_4655_, 0, v_ngen_4709_);
v___x_4713_ = v___x_4655_;
goto v_reusejp_4712_;
}
else
{
lean_object* v_reuseFailAlloc_4720_; 
v_reuseFailAlloc_4720_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4720_, 0, v_ngen_4709_);
lean_ctor_set(v_reuseFailAlloc_4720_, 1, v_cache_4710_);
lean_ctor_set(v_reuseFailAlloc_4720_, 2, v_cache_4711_);
v___x_4713_ = v_reuseFailAlloc_4720_;
goto v_reusejp_4712_;
}
v_reusejp_4712_:
{
lean_object* v___x_4714_; lean_object* v___x_4715_; uint8_t v___x_4716_; 
v___x_4714_ = lean_st_ref_swap(v_cacheRef_4641_, v___x_4713_);
lean_dec(v___x_4714_);
v___x_4715_ = lean_array_get_size(v_a_4706_);
v___x_4716_ = lean_nat_dec_lt(v___x_4657_, v___x_4715_);
if (v___x_4716_ == 0)
{
lean_dec(v_a_4706_);
return v_tree_4642_;
}
else
{
size_t v___x_4717_; size_t v___x_4718_; lean_object* v___x_4719_; 
v___x_4717_ = ((size_t)0ULL);
v___x_4718_ = lean_usize_of_nat(v___x_4715_);
v___x_4719_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1___redArg(v_a_4706_, v___x_4717_, v___x_4718_, v_tree_4642_);
lean_dec(v_a_4706_);
return v___x_4719_;
}
}
}
else
{
lean_object* v_a_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4725_; 
lean_dec(v___x_4704_);
lean_dec(v___x_4681_);
lean_del_object(v___x_4655_);
v_a_4721_ = lean_ctor_get(v___x_4705_, 0);
lean_inc(v_a_4721_);
lean_dec_ref_known(v___x_4705_, 1);
v___x_4722_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4722_, 0, v_modName_4639_);
lean_ctor_set(v___x_4722_, 1, v_name_4647_);
lean_ctor_set(v___x_4722_, 2, v_a_4721_);
v___x_4723_ = lean_st_ref_take(v_d_4640_);
v___x_4724_ = lean_array_push(v___x_4723_, v___x_4722_);
v___x_4725_ = lean_st_ref_put(v_d_4640_, v___x_4724_);
return v_tree_4642_;
}
}
v___jp_4744_:
{
lean_object* v___x_4756_; lean_object* v___x_4757_; lean_object* v___x_4758_; 
v___x_4756_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__13, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__13_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__13);
v___x_4757_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_4757_, 0, v___y_4755_);
lean_ctor_set(v___x_4757_, 1, v_nextMacroScope_4745_);
lean_ctor_set(v___x_4757_, 2, v_ngen_4746_);
lean_ctor_set(v___x_4757_, 3, v_auxDeclNGen_4747_);
lean_ctor_set(v___x_4757_, 4, v_traceState_4748_);
lean_ctor_set(v___x_4757_, 5, v___x_4756_);
lean_ctor_set(v___x_4757_, 6, v_recordedDeps_4749_);
lean_ctor_set(v___x_4757_, 7, v_messages_4750_);
lean_ctor_set(v___x_4757_, 8, v_infoState_4751_);
lean_ctor_set(v___x_4757_, 9, v_snapshotTasks_4752_);
v___x_4758_ = lean_st_ref_put(v___x_4681_, v___x_4757_);
v___y_4683_ = v___y_4753_;
v___y_4684_ = v___y_4754_;
v_fileName_4685_ = v_fileName_4734_;
v_fileMap_4686_ = v_fileMap_4735_;
v_currNamespace_4687_ = v_currNamespace_4737_;
v_openDecls_4688_ = v_openDecls_4738_;
v_initHeartbeats_4689_ = v_initHeartbeats_4739_;
v_maxHeartbeats_4690_ = v_maxHeartbeats_4740_;
v_quotContext_4691_ = v_quotContext_4741_;
v_currMacroScope_4692_ = v_currMacroScope_4742_;
v_cancelTk_x3f_4693_ = v_cancelTk_x3f_4743_;
v_inheritedTraceOptions_4694_ = v___x_4727_;
v_currRecDepth_4695_ = v_currRecDepth_4729_;
v_ref_4696_ = v_ref_4730_;
v_suppressElabErrors_4697_ = v_suppressElabErrors_4731_;
v_checkDeprecated_4698_ = v_checkDeprecated_4732_;
v_isRecordingDeps_4699_ = v_isRecordingDeps_4733_;
goto v___jp_4682_;
}
v___jp_4759_:
{
lean_object* v___x_4763_; lean_object* v_env_4764_; lean_object* v_nextMacroScope_4765_; lean_object* v_ngen_4766_; lean_object* v_auxDeclNGen_4767_; lean_object* v_traceState_4768_; lean_object* v_recordedDeps_4769_; lean_object* v_messages_4770_; lean_object* v_infoState_4771_; lean_object* v_snapshotTasks_4772_; uint16_t v___x_4773_; uint16_t v___x_4774_; uint16_t v___x_4775_; uint8_t v___x_4776_; 
v___x_4763_ = lean_st_ref_take(v___x_4681_);
v_env_4764_ = lean_ctor_get(v___x_4763_, 0);
lean_inc_ref(v_env_4764_);
v_nextMacroScope_4765_ = lean_ctor_get(v___x_4763_, 1);
lean_inc(v_nextMacroScope_4765_);
v_ngen_4766_ = lean_ctor_get(v___x_4763_, 2);
lean_inc_ref(v_ngen_4766_);
v_auxDeclNGen_4767_ = lean_ctor_get(v___x_4763_, 3);
lean_inc_ref(v_auxDeclNGen_4767_);
v_traceState_4768_ = lean_ctor_get(v___x_4763_, 4);
lean_inc_ref(v_traceState_4768_);
v_recordedDeps_4769_ = lean_ctor_get(v___x_4763_, 6);
lean_inc_ref(v_recordedDeps_4769_);
v_messages_4770_ = lean_ctor_get(v___x_4763_, 7);
lean_inc_ref(v_messages_4770_);
v_infoState_4771_ = lean_ctor_get(v___x_4763_, 8);
lean_inc_ref(v_infoState_4771_);
v_snapshotTasks_4772_ = lean_ctor_get(v___x_4763_, 9);
lean_inc_ref(v_snapshotTasks_4772_);
lean_dec(v___x_4763_);
v___x_4773_ = 512;
v___x_4774_ = lean_uint16_land(v___y_4761_, v___x_4773_);
v___x_4775_ = 0;
v___x_4776_ = lean_uint16_dec_eq(v___x_4774_, v___x_4775_);
if (v___x_4776_ == 0)
{
lean_object* v___x_4777_; 
v___x_4777_ = l_Lean_Kernel_enableDiag(v_env_4764_, v___x_4664_);
v_nextMacroScope_4745_ = v_nextMacroScope_4765_;
v_ngen_4746_ = v_ngen_4766_;
v_auxDeclNGen_4747_ = v_auxDeclNGen_4767_;
v_traceState_4748_ = v_traceState_4768_;
v_recordedDeps_4749_ = v_recordedDeps_4769_;
v_messages_4750_ = v_messages_4770_;
v_infoState_4751_ = v_infoState_4771_;
v_snapshotTasks_4752_ = v_snapshotTasks_4772_;
v___y_4753_ = v___y_4760_;
v___y_4754_ = v___y_4761_;
v___y_4755_ = v___x_4777_;
goto v___jp_4744_;
}
else
{
lean_object* v___x_4778_; 
v___x_4778_ = l_Lean_Kernel_enableDiag(v_env_4764_, v___y_4762_);
v_nextMacroScope_4745_ = v_nextMacroScope_4765_;
v_ngen_4746_ = v_ngen_4766_;
v_auxDeclNGen_4747_ = v_auxDeclNGen_4767_;
v_traceState_4748_ = v_traceState_4768_;
v_recordedDeps_4749_ = v_recordedDeps_4769_;
v_messages_4750_ = v_messages_4770_;
v_infoState_4751_ = v_infoState_4771_;
v_snapshotTasks_4752_ = v_snapshotTasks_4772_;
v___y_4753_ = v___y_4760_;
v___y_4754_ = v___y_4761_;
v___y_4755_ = v___x_4778_;
goto v___jp_4744_;
}
}
v___jp_4779_:
{
uint16_t v___x_4781_; lean_object* v___x_4782_; lean_object* v_env_4783_; uint8_t v___x_4784_; uint16_t v___x_4785_; uint16_t v___x_4786_; uint16_t v___x_4787_; uint8_t v___x_4788_; 
v___x_4781_ = l_Lean_OptionFlags_ofOptions(v___y_4780_);
v___x_4782_ = lean_st_ref_get(v___x_4681_);
v_env_4783_ = lean_ctor_get(v___x_4782_, 0);
lean_inc_ref(v_env_4783_);
lean_dec(v___x_4782_);
v___x_4784_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_4783_);
lean_dec_ref(v_env_4783_);
v___x_4785_ = 512;
v___x_4786_ = lean_uint16_land(v___x_4781_, v___x_4785_);
v___x_4787_ = 0;
v___x_4788_ = lean_uint16_dec_eq(v___x_4786_, v___x_4787_);
if (v___x_4788_ == 0)
{
if (v___x_4784_ == 0)
{
v___y_4760_ = v___y_4780_;
v___y_4761_ = v___x_4781_;
v___y_4762_ = v___x_4784_;
goto v___jp_4759_;
}
else
{
v___y_4683_ = v___y_4780_;
v___y_4684_ = v___x_4781_;
v_fileName_4685_ = v_fileName_4734_;
v_fileMap_4686_ = v_fileMap_4735_;
v_currNamespace_4687_ = v_currNamespace_4737_;
v_openDecls_4688_ = v_openDecls_4738_;
v_initHeartbeats_4689_ = v_initHeartbeats_4739_;
v_maxHeartbeats_4690_ = v_maxHeartbeats_4740_;
v_quotContext_4691_ = v_quotContext_4741_;
v_currMacroScope_4692_ = v_currMacroScope_4742_;
v_cancelTk_x3f_4693_ = v_cancelTk_x3f_4743_;
v_inheritedTraceOptions_4694_ = v___x_4727_;
v_currRecDepth_4695_ = v_currRecDepth_4729_;
v_ref_4696_ = v_ref_4730_;
v_suppressElabErrors_4697_ = v_suppressElabErrors_4731_;
v_checkDeprecated_4698_ = v_checkDeprecated_4732_;
v_isRecordingDeps_4699_ = v_isRecordingDeps_4733_;
goto v___jp_4682_;
}
}
else
{
if (v___x_4784_ == 0)
{
v___y_4683_ = v___y_4780_;
v___y_4684_ = v___x_4781_;
v_fileName_4685_ = v_fileName_4734_;
v_fileMap_4686_ = v_fileMap_4735_;
v_currNamespace_4687_ = v_currNamespace_4737_;
v_openDecls_4688_ = v_openDecls_4738_;
v_initHeartbeats_4689_ = v_initHeartbeats_4739_;
v_maxHeartbeats_4690_ = v_maxHeartbeats_4740_;
v_quotContext_4691_ = v_quotContext_4741_;
v_currMacroScope_4692_ = v_currMacroScope_4742_;
v_cancelTk_x3f_4693_ = v_cancelTk_x3f_4743_;
v_inheritedTraceOptions_4694_ = v___x_4727_;
v_currRecDepth_4695_ = v_currRecDepth_4729_;
v_ref_4696_ = v_ref_4730_;
v_suppressElabErrors_4697_ = v_suppressElabErrors_4731_;
v_checkDeprecated_4698_ = v_checkDeprecated_4732_;
v_isRecordingDeps_4699_ = v_isRecordingDeps_4733_;
goto v___jp_4682_;
}
else
{
v___y_4760_ = v___y_4780_;
v___y_4761_ = v___x_4781_;
v___y_4762_ = v___x_4648_;
goto v___jp_4759_;
}
}
}
}
}
else
{
lean_dec(v_name_4647_);
lean_dec_ref(v_c_4644_);
lean_dec_ref(v_act_4643_);
lean_dec(v_modName_4639_);
lean_dec_ref(v_env_4638_);
lean_dec_ref(v_cctx_4637_);
return v_tree_4642_;
}
}
else
{
lean_dec_ref(v_c_4644_);
lean_dec_ref(v_act_4643_);
lean_dec(v_modName_4639_);
lean_dec_ref(v_env_4638_);
lean_dec_ref(v_cctx_4637_);
return v_tree_4642_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___boxed(lean_object* v_cctx_4791_, lean_object* v_env_4792_, lean_object* v_modName_4793_, lean_object* v_d_4794_, lean_object* v_cacheRef_4795_, lean_object* v_tree_4796_, lean_object* v_act_4797_, lean_object* v_c_4798_, lean_object* v_a_4799_){
_start:
{
lean_object* v_res_4800_; 
v_res_4800_ = l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg(v_cctx_4791_, v_env_4792_, v_modName_4793_, v_d_4794_, v_cacheRef_4795_, v_tree_4796_, v_act_4797_, v_c_4798_);
lean_dec(v_cacheRef_4795_);
lean_dec(v_d_4794_);
return v_res_4800_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData(lean_object* v_00_u03b1_4801_, lean_object* v_cctx_4802_, lean_object* v_env_4803_, lean_object* v_modName_4804_, lean_object* v_d_4805_, lean_object* v_cacheRef_4806_, lean_object* v_tree_4807_, lean_object* v_act_4808_, lean_object* v_c_4809_){
_start:
{
lean_object* v___x_4811_; 
v___x_4811_ = l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg(v_cctx_4802_, v_env_4803_, v_modName_4804_, v_d_4805_, v_cacheRef_4806_, v_tree_4807_, v_act_4808_, v_c_4809_);
return v___x_4811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___boxed(lean_object* v_00_u03b1_4812_, lean_object* v_cctx_4813_, lean_object* v_env_4814_, lean_object* v_modName_4815_, lean_object* v_d_4816_, lean_object* v_cacheRef_4817_, lean_object* v_tree_4818_, lean_object* v_act_4819_, lean_object* v_c_4820_, lean_object* v_a_4821_){
_start:
{
lean_object* v_res_4822_; 
v_res_4822_ = l_Lean_Meta_LazyDiscrTree_addConstImportData(v_00_u03b1_4812_, v_cctx_4813_, v_env_4814_, v_modName_4815_, v_d_4816_, v_cacheRef_4817_, v_tree_4818_, v_act_4819_, v_c_4820_);
lean_dec(v_cacheRef_4817_);
lean_dec(v_d_4816_);
return v_res_4822_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1(lean_object* v_00_u03b1_4823_, lean_object* v_as_4824_, size_t v_i_4825_, size_t v_stop_4826_, lean_object* v_b_4827_){
_start:
{
lean_object* v___x_4828_; 
v___x_4828_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1___redArg(v_as_4824_, v_i_4825_, v_stop_4826_, v_b_4827_);
return v___x_4828_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1___boxed(lean_object* v_00_u03b1_4829_, lean_object* v_as_4830_, lean_object* v_i_4831_, lean_object* v_stop_4832_, lean_object* v_b_4833_){
_start:
{
size_t v_i_boxed_4834_; size_t v_stop_boxed_4835_; lean_object* v_res_4836_; 
v_i_boxed_4834_ = lean_unbox_usize(v_i_4831_);
lean_dec(v_i_4831_);
v_stop_boxed_4835_ = lean_unbox_usize(v_stop_4832_);
lean_dec(v_stop_4832_);
v_res_4836_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1(v_00_u03b1_4829_, v_as_4830_, v_i_boxed_4834_, v_stop_boxed_4835_, v_b_4833_);
lean_dec_ref(v_as_4830_);
return v_res_4836_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg___closed__0(void){
_start:
{
lean_object* v___x_4837_; lean_object* v___x_4838_; lean_object* v___x_4839_; 
v___x_4837_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__0));
v___x_4838_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1);
v___x_4839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4839_, 0, v___x_4838_);
lean_ctor_set(v___x_4839_, 1, v___x_4837_);
return v___x_4839_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg(){
_start:
{
lean_object* v___x_4841_; 
v___x_4841_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg___closed__0);
return v___x_4841_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg___boxed(lean_object* v___dummy_4842_){
_start:
{
lean_object* v_res_4843_; 
v_res_4843_ = l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg();
return v_res_4843_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__0(void){
_start:
{
lean_object* v___x_4844_; 
v___x_4844_ = l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg();
return v___x_4844_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults(lean_object* v_00_u03b1_4845_){
_start:
{
lean_object* v___x_4846_; 
v___x_4846_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__0);
return v___x_4846_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_append___redArg(lean_object* v_x_4847_, lean_object* v_y_4848_){
_start:
{
lean_object* v_tree_4849_; lean_object* v_errors_4850_; lean_object* v_tree_4851_; lean_object* v_errors_4852_; lean_object* v___x_4854_; uint8_t v_isShared_4855_; uint8_t v_isSharedCheck_4861_; 
v_tree_4849_ = lean_ctor_get(v_x_4847_, 0);
lean_inc_ref(v_tree_4849_);
v_errors_4850_ = lean_ctor_get(v_x_4847_, 1);
lean_inc_ref(v_errors_4850_);
lean_dec_ref(v_x_4847_);
v_tree_4851_ = lean_ctor_get(v_y_4848_, 0);
v_errors_4852_ = lean_ctor_get(v_y_4848_, 1);
v_isSharedCheck_4861_ = !lean_is_exclusive(v_y_4848_);
if (v_isSharedCheck_4861_ == 0)
{
v___x_4854_ = v_y_4848_;
v_isShared_4855_ = v_isSharedCheck_4861_;
goto v_resetjp_4853_;
}
else
{
lean_inc(v_errors_4852_);
lean_inc(v_tree_4851_);
lean_dec(v_y_4848_);
v___x_4854_ = lean_box(0);
v_isShared_4855_ = v_isSharedCheck_4861_;
goto v_resetjp_4853_;
}
v_resetjp_4853_:
{
lean_object* v___x_4856_; lean_object* v___x_4857_; lean_object* v___x_4859_; 
v___x_4856_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg(v_tree_4849_, v_tree_4851_);
v___x_4857_ = l_Array_append___redArg(v_errors_4850_, v_errors_4852_);
lean_dec_ref(v_errors_4852_);
if (v_isShared_4855_ == 0)
{
lean_ctor_set(v___x_4854_, 1, v___x_4857_);
lean_ctor_set(v___x_4854_, 0, v___x_4856_);
v___x_4859_ = v___x_4854_;
goto v_reusejp_4858_;
}
else
{
lean_object* v_reuseFailAlloc_4860_; 
v_reuseFailAlloc_4860_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4860_, 0, v___x_4856_);
lean_ctor_set(v_reuseFailAlloc_4860_, 1, v___x_4857_);
v___x_4859_ = v_reuseFailAlloc_4860_;
goto v_reusejp_4858_;
}
v_reusejp_4858_:
{
return v___x_4859_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_append(lean_object* v_00_u03b1_4862_, lean_object* v_x_4863_, lean_object* v_y_4864_){
_start:
{
lean_object* v___x_4865_; 
v___x_4865_ = l_Lean_Meta_LazyDiscrTree_InitResults_append___redArg(v_x_4863_, v_y_4864_);
return v___x_4865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg(){
_start:
{
lean_object* v___x_4868_; 
v___x_4868_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg___closed__0));
return v___x_4868_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg___boxed(lean_object* v___dummy_4869_){
_start:
{
lean_object* v_res_4870_; 
v_res_4870_ = l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg();
return v_res_4870_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_instAppend(lean_object* v_00_u03b1_4871_){
_start:
{
lean_object* v___x_4872_; 
v___x_4872_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg___closed__0));
return v___x_4872_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_toFlat___redArg(lean_object* v_d_4873_, lean_object* v_tree_4874_){
_start:
{
lean_object* v___x_4876_; lean_object* v___x_4877_; lean_object* v___x_4878_; 
v___x_4876_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_ImportData_new___closed__0));
v___x_4877_ = lean_st_ref_swap(v_d_4873_, v___x_4876_);
v___x_4878_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4878_, 0, v_tree_4874_);
lean_ctor_set(v___x_4878_, 1, v___x_4877_);
return v___x_4878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_toFlat___redArg___boxed(lean_object* v_d_4879_, lean_object* v_tree_4880_, lean_object* v_a_4881_){
_start:
{
lean_object* v_res_4882_; 
v_res_4882_ = l_Lean_Meta_LazyDiscrTree_toFlat___redArg(v_d_4879_, v_tree_4880_);
lean_dec(v_d_4879_);
return v_res_4882_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_toFlat(lean_object* v_00_u03b1_4883_, lean_object* v_d_4884_, lean_object* v_tree_4885_){
_start:
{
lean_object* v___x_4887_; 
v___x_4887_ = l_Lean_Meta_LazyDiscrTree_toFlat___redArg(v_d_4884_, v_tree_4885_);
return v___x_4887_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_toFlat___boxed(lean_object* v_00_u03b1_4888_, lean_object* v_d_4889_, lean_object* v_tree_4890_, lean_object* v_a_4891_){
_start:
{
lean_object* v_res_4892_; 
v_res_4892_ = l_Lean_Meta_LazyDiscrTree_toFlat(v_00_u03b1_4888_, v_d_4889_, v_tree_4890_);
lean_dec(v_d_4889_);
return v_res_4892_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_loadImportedModule___redArg(lean_object* v_cctx_4893_, lean_object* v_env_4894_, lean_object* v_act_4895_, lean_object* v_d_4896_, lean_object* v_cacheRef_4897_, lean_object* v_tree_4898_, lean_object* v_mname_4899_, lean_object* v_mdata_4900_, lean_object* v_i_4901_){
_start:
{
lean_object* v_constants_4903_; lean_object* v___x_4904_; uint8_t v___x_4905_; 
v_constants_4903_ = lean_ctor_get(v_mdata_4900_, 2);
v___x_4904_ = lean_array_get_size(v_constants_4903_);
v___x_4905_ = lean_nat_dec_lt(v_i_4901_, v___x_4904_);
if (v___x_4905_ == 0)
{
lean_dec(v_i_4901_);
lean_dec(v_mname_4899_);
lean_dec_ref(v_act_4895_);
lean_dec_ref(v_env_4894_);
lean_dec_ref(v_cctx_4893_);
return v_tree_4898_;
}
else
{
lean_object* v___x_4906_; lean_object* v___x_4907_; lean_object* v___x_4908_; lean_object* v___x_4909_; lean_object* v___x_4910_; 
v___x_4906_ = lean_array_fget_borrowed(v_constants_4903_, v_i_4901_);
lean_inc(v___x_4906_);
v___x_4907_ = l_Lean_AsyncConstantInfo_ofConstantInfo(v___x_4906_);
lean_inc_ref(v_act_4895_);
lean_inc(v_mname_4899_);
lean_inc_ref(v_env_4894_);
lean_inc_ref(v_cctx_4893_);
v___x_4908_ = l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg(v_cctx_4893_, v_env_4894_, v_mname_4899_, v_d_4896_, v_cacheRef_4897_, v_tree_4898_, v_act_4895_, v___x_4907_);
v___x_4909_ = lean_unsigned_to_nat(1u);
v___x_4910_ = lean_nat_add(v_i_4901_, v___x_4909_);
lean_dec(v_i_4901_);
v_tree_4898_ = v___x_4908_;
v_i_4901_ = v___x_4910_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_loadImportedModule___redArg___boxed(lean_object* v_cctx_4912_, lean_object* v_env_4913_, lean_object* v_act_4914_, lean_object* v_d_4915_, lean_object* v_cacheRef_4916_, lean_object* v_tree_4917_, lean_object* v_mname_4918_, lean_object* v_mdata_4919_, lean_object* v_i_4920_, lean_object* v_a_4921_){
_start:
{
lean_object* v_res_4922_; 
v_res_4922_ = l_Lean_Meta_LazyDiscrTree_loadImportedModule___redArg(v_cctx_4912_, v_env_4913_, v_act_4914_, v_d_4915_, v_cacheRef_4916_, v_tree_4917_, v_mname_4918_, v_mdata_4919_, v_i_4920_);
lean_dec_ref(v_mdata_4919_);
lean_dec(v_cacheRef_4916_);
lean_dec(v_d_4915_);
return v_res_4922_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_loadImportedModule(lean_object* v_00_u03b1_4923_, lean_object* v_cctx_4924_, lean_object* v_env_4925_, lean_object* v_act_4926_, lean_object* v_d_4927_, lean_object* v_cacheRef_4928_, lean_object* v_tree_4929_, lean_object* v_mname_4930_, lean_object* v_mdata_4931_, lean_object* v_i_4932_){
_start:
{
lean_object* v___x_4934_; 
v___x_4934_ = l_Lean_Meta_LazyDiscrTree_loadImportedModule___redArg(v_cctx_4924_, v_env_4925_, v_act_4926_, v_d_4927_, v_cacheRef_4928_, v_tree_4929_, v_mname_4930_, v_mdata_4931_, v_i_4932_);
return v___x_4934_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_loadImportedModule___boxed(lean_object* v_00_u03b1_4935_, lean_object* v_cctx_4936_, lean_object* v_env_4937_, lean_object* v_act_4938_, lean_object* v_d_4939_, lean_object* v_cacheRef_4940_, lean_object* v_tree_4941_, lean_object* v_mname_4942_, lean_object* v_mdata_4943_, lean_object* v_i_4944_, lean_object* v_a_4945_){
_start:
{
lean_object* v_res_4946_; 
v_res_4946_ = l_Lean_Meta_LazyDiscrTree_loadImportedModule(v_00_u03b1_4935_, v_cctx_4936_, v_env_4937_, v_act_4938_, v_d_4939_, v_cacheRef_4940_, v_tree_4941_, v_mname_4942_, v_mdata_4943_, v_i_4944_);
lean_dec_ref(v_mdata_4943_);
lean_dec(v_cacheRef_4940_);
lean_dec(v_d_4939_);
return v_res_4946_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___redArg(lean_object* v_cctx_4947_, lean_object* v_env_4948_, lean_object* v_act_4949_, lean_object* v_d_4950_, lean_object* v_cacheRef_4951_, lean_object* v_tree_4952_, lean_object* v_start_4953_, lean_object* v_stop_4954_){
_start:
{
uint8_t v___x_4956_; 
v___x_4956_ = lean_nat_dec_lt(v_start_4953_, v_stop_4954_);
if (v___x_4956_ == 0)
{
lean_object* v___x_4957_; 
lean_dec(v_start_4953_);
lean_dec_ref(v_act_4949_);
lean_dec_ref(v_env_4948_);
lean_dec_ref(v_cctx_4947_);
v___x_4957_ = l_Lean_Meta_LazyDiscrTree_toFlat___redArg(v_d_4950_, v_tree_4952_);
return v___x_4957_;
}
else
{
lean_object* v___x_4958_; lean_object* v_moduleNames_4959_; lean_object* v_moduleData_4960_; lean_object* v___x_4961_; lean_object* v___x_4962_; lean_object* v_mname_4963_; lean_object* v_mdata_4964_; lean_object* v___x_4965_; lean_object* v___x_4966_; lean_object* v___x_4967_; lean_object* v___x_4968_; 
v___x_4958_ = l_Lean_Environment_header(v_env_4948_);
v_moduleNames_4959_ = lean_ctor_get(v___x_4958_, 4);
lean_inc_ref(v_moduleNames_4959_);
v_moduleData_4960_ = lean_ctor_get(v___x_4958_, 7);
lean_inc_ref(v_moduleData_4960_);
lean_dec_ref(v___x_4958_);
v___x_4961_ = lean_box(0);
v___x_4962_ = l_Lean_instInhabitedModuleData_default;
v_mname_4963_ = lean_array_get(v___x_4961_, v_moduleNames_4959_, v_start_4953_);
lean_dec_ref(v_moduleNames_4959_);
v_mdata_4964_ = lean_array_get(v___x_4962_, v_moduleData_4960_, v_start_4953_);
lean_dec_ref(v_moduleData_4960_);
v___x_4965_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_act_4949_);
lean_inc_ref(v_env_4948_);
lean_inc_ref(v_cctx_4947_);
v___x_4966_ = l_Lean_Meta_LazyDiscrTree_loadImportedModule___redArg(v_cctx_4947_, v_env_4948_, v_act_4949_, v_d_4950_, v_cacheRef_4951_, v_tree_4952_, v_mname_4963_, v_mdata_4964_, v___x_4965_);
lean_dec(v_mdata_4964_);
v___x_4967_ = lean_unsigned_to_nat(1u);
v___x_4968_ = lean_nat_add(v_start_4953_, v___x_4967_);
lean_dec(v_start_4953_);
v_tree_4952_ = v___x_4966_;
v_start_4953_ = v___x_4968_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___redArg___boxed(lean_object* v_cctx_4970_, lean_object* v_env_4971_, lean_object* v_act_4972_, lean_object* v_d_4973_, lean_object* v_cacheRef_4974_, lean_object* v_tree_4975_, lean_object* v_start_4976_, lean_object* v_stop_4977_, lean_object* v_a_4978_){
_start:
{
lean_object* v_res_4979_; 
v_res_4979_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___redArg(v_cctx_4970_, v_env_4971_, v_act_4972_, v_d_4973_, v_cacheRef_4974_, v_tree_4975_, v_start_4976_, v_stop_4977_);
lean_dec(v_stop_4977_);
lean_dec(v_cacheRef_4974_);
lean_dec(v_d_4973_);
return v_res_4979_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go(lean_object* v_00_u03b1_4980_, lean_object* v_cctx_4981_, lean_object* v_env_4982_, lean_object* v_act_4983_, lean_object* v_d_4984_, lean_object* v_cacheRef_4985_, lean_object* v_tree_4986_, lean_object* v_start_4987_, lean_object* v_stop_4988_){
_start:
{
lean_object* v___x_4990_; 
v___x_4990_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___redArg(v_cctx_4981_, v_env_4982_, v_act_4983_, v_d_4984_, v_cacheRef_4985_, v_tree_4986_, v_start_4987_, v_stop_4988_);
return v___x_4990_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___boxed(lean_object* v_00_u03b1_4991_, lean_object* v_cctx_4992_, lean_object* v_env_4993_, lean_object* v_act_4994_, lean_object* v_d_4995_, lean_object* v_cacheRef_4996_, lean_object* v_tree_4997_, lean_object* v_start_4998_, lean_object* v_stop_4999_, lean_object* v_a_5000_){
_start:
{
lean_object* v_res_5001_; 
v_res_5001_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go(v_00_u03b1_4991_, v_cctx_4992_, v_env_4993_, v_act_4994_, v_d_4995_, v_cacheRef_4996_, v_tree_4997_, v_start_4998_, v_stop_4999_);
lean_dec(v_stop_4999_);
lean_dec(v_cacheRef_4996_);
lean_dec(v_d_4995_);
return v_res_5001_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___redArg(lean_object* v_cctx_5002_, lean_object* v_ngen_5003_, lean_object* v_env_5004_, lean_object* v_act_5005_, lean_object* v_start_5006_, lean_object* v_stop_5007_){
_start:
{
lean_object* v___x_5009_; lean_object* v___x_5010_; lean_object* v___x_5011_; lean_object* v___x_5012_; lean_object* v___x_5013_; 
v___x_5009_ = l_Lean_Meta_LazyDiscrTree_Cache_empty(v_ngen_5003_);
v___x_5010_ = lean_st_mk_ref(v___x_5009_);
v___x_5011_ = l_Lean_Meta_LazyDiscrTree_ImportData_new();
v___x_5012_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1);
v___x_5013_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___redArg(v_cctx_5002_, v_env_5004_, v_act_5005_, v___x_5011_, v___x_5010_, v___x_5012_, v_start_5006_, v_stop_5007_);
lean_dec(v___x_5010_);
lean_dec(v___x_5011_);
return v___x_5013_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___redArg___boxed(lean_object* v_cctx_5014_, lean_object* v_ngen_5015_, lean_object* v_env_5016_, lean_object* v_act_5017_, lean_object* v_start_5018_, lean_object* v_stop_5019_, lean_object* v_a_5020_){
_start:
{
lean_object* v_res_5021_; 
v_res_5021_ = l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___redArg(v_cctx_5014_, v_ngen_5015_, v_env_5016_, v_act_5017_, v_start_5018_, v_stop_5019_);
lean_dec(v_stop_5019_);
return v_res_5021_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq(lean_object* v_00_u03b1_5022_, lean_object* v_cctx_5023_, lean_object* v_ngen_5024_, lean_object* v_env_5025_, lean_object* v_act_5026_, lean_object* v_start_5027_, lean_object* v_stop_5028_){
_start:
{
lean_object* v___x_5030_; 
v___x_5030_ = l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___redArg(v_cctx_5023_, v_ngen_5024_, v_env_5025_, v_act_5026_, v_start_5027_, v_stop_5028_);
return v___x_5030_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___boxed(lean_object* v_00_u03b1_5031_, lean_object* v_cctx_5032_, lean_object* v_ngen_5033_, lean_object* v_env_5034_, lean_object* v_act_5035_, lean_object* v_start_5036_, lean_object* v_stop_5037_, lean_object* v_a_5038_){
_start:
{
lean_object* v_res_5039_; 
v_res_5039_ = l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq(v_00_u03b1_5031_, v_cctx_5032_, v_ngen_5033_, v_env_5034_, v_act_5035_, v_start_5036_, v_stop_5037_);
lean_dec(v_stop_5037_);
return v_res_5039_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___redArg___lam__0(lean_object* v_inst_5040_, lean_object* v_x1_5041_, lean_object* v_x2_5042_){
_start:
{
lean_object* v___x_5043_; lean_object* v___x_5044_; 
v___x_5043_ = lean_task_get_own(v_x2_5042_);
v___x_5044_ = lean_apply_2(v_inst_5040_, v_x1_5041_, v___x_5043_);
return v___x_5044_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___redArg(lean_object* v_inst_5045_, lean_object* v_z_5046_, lean_object* v_tasks_5047_){
_start:
{
lean_object* v___x_5048_; lean_object* v___x_5049_; lean_object* v___x_5050_; uint8_t v___x_5051_; 
v___x_5048_ = lean_unsigned_to_nat(0u);
v___x_5049_ = lean_array_get_size(v_tasks_5047_);
v___x_5050_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__9));
v___x_5051_ = lean_nat_dec_lt(v___x_5048_, v___x_5049_);
if (v___x_5051_ == 0)
{
lean_dec_ref(v_tasks_5047_);
lean_dec(v_inst_5045_);
return v_z_5046_;
}
else
{
lean_object* v___f_5052_; size_t v___x_5053_; size_t v___x_5054_; lean_object* v___x_5055_; 
v___f_5052_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_combineGet___redArg___lam__0), 3, 1);
lean_closure_set(v___f_5052_, 0, v_inst_5045_);
v___x_5053_ = ((size_t)0ULL);
v___x_5054_ = lean_usize_of_nat(v___x_5049_);
v___x_5055_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_5050_, v___f_5052_, v_tasks_5047_, v___x_5053_, v___x_5054_, v_z_5046_);
return v___x_5055_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet(lean_object* v_00_u03b1_5056_, lean_object* v_inst_5057_, lean_object* v_z_5058_, lean_object* v_tasks_5059_){
_start:
{
lean_object* v___x_5060_; 
v___x_5060_ = l_Lean_Meta_LazyDiscrTree_combineGet___redArg(v_inst_5057_, v_z_5058_, v_tasks_5059_);
return v___x_5060_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg___lam__0(lean_object* v_toPure_5061_, lean_object* v___x_5062_, lean_object* v_____r_5063_){
_start:
{
lean_object* v___x_5064_; 
v___x_5064_ = lean_apply_2(v_toPure_5061_, lean_box(0), v___x_5062_);
return v___x_5064_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg___lam__1(lean_object* v_toPure_5065_, lean_object* v_setNGen_5066_, lean_object* v_toBind_5067_, lean_object* v_ngen_5068_){
_start:
{
lean_object* v_namePrefix_5069_; lean_object* v_idx_5070_; lean_object* v___x_5072_; uint8_t v_isShared_5073_; uint8_t v_isSharedCheck_5084_; 
v_namePrefix_5069_ = lean_ctor_get(v_ngen_5068_, 0);
v_idx_5070_ = lean_ctor_get(v_ngen_5068_, 1);
v_isSharedCheck_5084_ = !lean_is_exclusive(v_ngen_5068_);
if (v_isSharedCheck_5084_ == 0)
{
v___x_5072_ = v_ngen_5068_;
v_isShared_5073_ = v_isSharedCheck_5084_;
goto v_resetjp_5071_;
}
else
{
lean_inc(v_idx_5070_);
lean_inc(v_namePrefix_5069_);
lean_dec(v_ngen_5068_);
v___x_5072_ = lean_box(0);
v_isShared_5073_ = v_isSharedCheck_5084_;
goto v_resetjp_5071_;
}
v_resetjp_5071_:
{
lean_object* v___x_5074_; lean_object* v___x_5075_; lean_object* v___x_5077_; 
lean_inc(v_idx_5070_);
lean_inc(v_namePrefix_5069_);
v___x_5074_ = l_Lean_Name_num___override(v_namePrefix_5069_, v_idx_5070_);
v___x_5075_ = lean_unsigned_to_nat(1u);
if (v_isShared_5073_ == 0)
{
lean_ctor_set(v___x_5072_, 1, v___x_5075_);
lean_ctor_set(v___x_5072_, 0, v___x_5074_);
v___x_5077_ = v___x_5072_;
goto v_reusejp_5076_;
}
else
{
lean_object* v_reuseFailAlloc_5083_; 
v_reuseFailAlloc_5083_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5083_, 0, v___x_5074_);
lean_ctor_set(v_reuseFailAlloc_5083_, 1, v___x_5075_);
v___x_5077_ = v_reuseFailAlloc_5083_;
goto v_reusejp_5076_;
}
v_reusejp_5076_:
{
lean_object* v___f_5078_; lean_object* v___x_5079_; lean_object* v___x_5080_; lean_object* v___x_5081_; lean_object* v___x_5082_; 
v___f_5078_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg___lam__0), 3, 2);
lean_closure_set(v___f_5078_, 0, v_toPure_5065_);
lean_closure_set(v___f_5078_, 1, v___x_5077_);
v___x_5079_ = lean_nat_add(v_idx_5070_, v___x_5075_);
lean_dec(v_idx_5070_);
v___x_5080_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5080_, 0, v_namePrefix_5069_);
lean_ctor_set(v___x_5080_, 1, v___x_5079_);
v___x_5081_ = lean_apply_1(v_setNGen_5066_, v___x_5080_);
v___x_5082_ = lean_apply_4(v_toBind_5067_, lean_box(0), lean_box(0), v___x_5081_, v___f_5078_);
return v___x_5082_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg(lean_object* v_inst_5085_, lean_object* v_inst_5086_){
_start:
{
lean_object* v_toApplicative_5087_; lean_object* v_toBind_5088_; lean_object* v_getNGen_5089_; lean_object* v_setNGen_5090_; lean_object* v_toPure_5091_; lean_object* v___f_5092_; lean_object* v___x_5093_; 
v_toApplicative_5087_ = lean_ctor_get(v_inst_5085_, 0);
lean_inc_ref(v_toApplicative_5087_);
v_toBind_5088_ = lean_ctor_get(v_inst_5085_, 1);
lean_inc_n(v_toBind_5088_, 2);
lean_dec_ref(v_inst_5085_);
v_getNGen_5089_ = lean_ctor_get(v_inst_5086_, 0);
lean_inc(v_getNGen_5089_);
v_setNGen_5090_ = lean_ctor_get(v_inst_5086_, 1);
lean_inc(v_setNGen_5090_);
lean_dec_ref(v_inst_5086_);
v_toPure_5091_ = lean_ctor_get(v_toApplicative_5087_, 1);
lean_inc(v_toPure_5091_);
lean_dec_ref(v_toApplicative_5087_);
v___f_5092_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg___lam__1), 4, 3);
lean_closure_set(v___f_5092_, 0, v_toPure_5091_);
lean_closure_set(v___f_5092_, 1, v_setNGen_5090_);
lean_closure_set(v___f_5092_, 2, v_toBind_5088_);
v___x_5093_ = lean_apply_4(v_toBind_5088_, lean_box(0), lean_box(0), v_getNGen_5089_, v___f_5092_);
return v___x_5093_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen(lean_object* v_M_5094_, lean_object* v_inst_5095_, lean_object* v_inst_5096_){
_start:
{
lean_object* v___x_5097_; 
v___x_5097_ = l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg(v_inst_5095_, v_inst_5096_);
return v___x_5097_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___redArg(lean_object* v_cctx_5098_, lean_object* v_env_5099_, lean_object* v_modName_5100_, lean_object* v_d_5101_, lean_object* v_val_5102_, lean_object* v_act_5103_, lean_object* v_as_5104_, size_t v_sz_5105_, size_t v_i_5106_, lean_object* v_b_5107_){
_start:
{
uint8_t v___x_5109_; 
v___x_5109_ = lean_usize_dec_lt(v_i_5106_, v_sz_5105_);
if (v___x_5109_ == 0)
{
lean_dec_ref(v_act_5103_);
lean_dec(v_modName_5100_);
lean_dec_ref(v_env_5099_);
lean_dec_ref(v_cctx_5098_);
return v_b_5107_;
}
else
{
lean_object* v_a_5110_; lean_object* v___x_5111_; size_t v___x_5112_; size_t v___x_5113_; 
v_a_5110_ = lean_array_uget_borrowed(v_as_5104_, v_i_5106_);
lean_inc(v_a_5110_);
lean_inc_ref(v_act_5103_);
lean_inc(v_modName_5100_);
lean_inc_ref(v_env_5099_);
lean_inc_ref(v_cctx_5098_);
v___x_5111_ = l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg(v_cctx_5098_, v_env_5099_, v_modName_5100_, v_d_5101_, v_val_5102_, v_b_5107_, v_act_5103_, v_a_5110_);
v___x_5112_ = ((size_t)1ULL);
v___x_5113_ = lean_usize_add(v_i_5106_, v___x_5112_);
v_i_5106_ = v___x_5113_;
v_b_5107_ = v___x_5111_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___redArg___boxed(lean_object* v_cctx_5115_, lean_object* v_env_5116_, lean_object* v_modName_5117_, lean_object* v_d_5118_, lean_object* v_val_5119_, lean_object* v_act_5120_, lean_object* v_as_5121_, lean_object* v_sz_5122_, lean_object* v_i_5123_, lean_object* v_b_5124_, lean_object* v___y_5125_){
_start:
{
size_t v_sz_boxed_5126_; size_t v_i_boxed_5127_; lean_object* v_res_5128_; 
v_sz_boxed_5126_ = lean_unbox_usize(v_sz_5122_);
lean_dec(v_sz_5122_);
v_i_boxed_5127_ = lean_unbox_usize(v_i_5123_);
lean_dec(v_i_5123_);
v_res_5128_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___redArg(v_cctx_5115_, v_env_5116_, v_modName_5117_, v_d_5118_, v_val_5119_, v_act_5120_, v_as_5121_, v_sz_boxed_5126_, v_i_boxed_5127_, v_b_5124_);
lean_dec_ref(v_as_5121_);
lean_dec(v_val_5119_);
lean_dec(v_d_5118_);
return v_res_5128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg(lean_object* v_cctx_5129_, lean_object* v_ngen_5130_, lean_object* v_env_5131_, lean_object* v_d_5132_, lean_object* v_act_5133_){
_start:
{
lean_object* v___x_5135_; lean_object* v_mainModule_5136_; lean_object* v___x_5137_; lean_object* v___x_5138_; lean_object* v___x_5139_; uint8_t v___x_5140_; lean_object* v___x_5141_; size_t v_sz_5142_; size_t v___x_5143_; lean_object* v___x_5144_; 
v___x_5135_ = l_Lean_Environment_header(v_env_5131_);
v_mainModule_5136_ = lean_ctor_get(v___x_5135_, 0);
lean_inc(v_mainModule_5136_);
lean_dec_ref(v___x_5135_);
v___x_5137_ = l_Lean_Meta_LazyDiscrTree_Cache_empty(v_ngen_5130_);
v___x_5138_ = lean_st_mk_ref(v___x_5137_);
v___x_5139_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1);
v___x_5140_ = 1;
v___x_5141_ = l_Lean_Environment_getLocalConstantInfos(v_env_5131_, v___x_5140_);
v_sz_5142_ = lean_array_size(v___x_5141_);
v___x_5143_ = ((size_t)0ULL);
v___x_5144_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___redArg(v_cctx_5129_, v_env_5131_, v_mainModule_5136_, v_d_5132_, v___x_5138_, v_act_5133_, v___x_5141_, v_sz_5142_, v___x_5143_, v___x_5139_);
lean_dec_ref(v___x_5141_);
lean_dec(v___x_5138_);
return v___x_5144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg___boxed(lean_object* v_cctx_5145_, lean_object* v_ngen_5146_, lean_object* v_env_5147_, lean_object* v_d_5148_, lean_object* v_act_5149_, lean_object* v_a_5150_){
_start:
{
lean_object* v_res_5151_; 
v_res_5151_ = l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg(v_cctx_5145_, v_ngen_5146_, v_env_5147_, v_d_5148_, v_act_5149_);
lean_dec(v_d_5148_);
return v_res_5151_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree(lean_object* v_00_u03b1_5152_, lean_object* v_cctx_5153_, lean_object* v_ngen_5154_, lean_object* v_env_5155_, lean_object* v_d_5156_, lean_object* v_act_5157_){
_start:
{
lean_object* v___x_5159_; 
v___x_5159_ = l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg(v_cctx_5153_, v_ngen_5154_, v_env_5155_, v_d_5156_, v_act_5157_);
return v___x_5159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___boxed(lean_object* v_00_u03b1_5160_, lean_object* v_cctx_5161_, lean_object* v_ngen_5162_, lean_object* v_env_5163_, lean_object* v_d_5164_, lean_object* v_act_5165_, lean_object* v_a_5166_){
_start:
{
lean_object* v_res_5167_; 
v_res_5167_ = l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree(v_00_u03b1_5160_, v_cctx_5161_, v_ngen_5162_, v_env_5163_, v_d_5164_, v_act_5165_);
lean_dec(v_d_5164_);
return v_res_5167_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0(lean_object* v_00_u03b1_5168_, lean_object* v_cctx_5169_, lean_object* v_env_5170_, lean_object* v_modName_5171_, lean_object* v_d_5172_, lean_object* v_val_5173_, lean_object* v_act_5174_, lean_object* v_as_5175_, size_t v_sz_5176_, size_t v_i_5177_, lean_object* v_b_5178_){
_start:
{
lean_object* v___x_5180_; 
v___x_5180_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___redArg(v_cctx_5169_, v_env_5170_, v_modName_5171_, v_d_5172_, v_val_5173_, v_act_5174_, v_as_5175_, v_sz_5176_, v_i_5177_, v_b_5178_);
return v___x_5180_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___boxed(lean_object* v_00_u03b1_5181_, lean_object* v_cctx_5182_, lean_object* v_env_5183_, lean_object* v_modName_5184_, lean_object* v_d_5185_, lean_object* v_val_5186_, lean_object* v_act_5187_, lean_object* v_as_5188_, lean_object* v_sz_5189_, lean_object* v_i_5190_, lean_object* v_b_5191_, lean_object* v___y_5192_){
_start:
{
size_t v_sz_boxed_5193_; size_t v_i_boxed_5194_; lean_object* v_res_5195_; 
v_sz_boxed_5193_ = lean_unbox_usize(v_sz_5189_);
lean_dec(v_sz_5189_);
v_i_boxed_5194_ = lean_unbox_usize(v_i_5190_);
lean_dec(v_i_5190_);
v_res_5195_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0(v_00_u03b1_5181_, v_cctx_5182_, v_env_5183_, v_modName_5184_, v_d_5185_, v_val_5186_, v_act_5187_, v_as_5188_, v_sz_boxed_5193_, v_i_boxed_5194_, v_b_5191_);
lean_dec_ref(v_as_5188_);
lean_dec(v_val_5186_);
lean_dec(v_d_5185_);
return v_res_5195_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg(lean_object* v_x_5196_, lean_object* v_x_5197_, lean_object* v___y_5198_, lean_object* v___y_5199_, lean_object* v___y_5200_, lean_object* v___y_5201_){
_start:
{
if (lean_obj_tag(v_x_5197_) == 0)
{
lean_object* v___x_5203_; 
v___x_5203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5203_, 0, v_x_5196_);
return v___x_5203_;
}
else
{
lean_object* v_head_5204_; lean_object* v_tail_5205_; lean_object* v___x_5206_; 
v_head_5204_ = lean_ctor_get(v_x_5197_, 0);
lean_inc(v_head_5204_);
v_tail_5205_ = lean_ctor_get(v_x_5197_, 1);
lean_inc(v_tail_5205_);
lean_dec_ref_known(v_x_5197_, 2);
v___x_5206_ = l_Lean_Meta_LazyDiscrTree_dropKey___redArg(v_x_5196_, v_head_5204_, v___y_5198_, v___y_5199_, v___y_5200_, v___y_5201_);
if (lean_obj_tag(v___x_5206_) == 0)
{
lean_object* v_a_5207_; 
v_a_5207_ = lean_ctor_get(v___x_5206_, 0);
lean_inc(v_a_5207_);
lean_dec_ref_known(v___x_5206_, 1);
v_x_5196_ = v_a_5207_;
v_x_5197_ = v_tail_5205_;
goto _start;
}
else
{
lean_dec(v_tail_5205_);
return v___x_5206_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg___boxed(lean_object* v_x_5209_, lean_object* v_x_5210_, lean_object* v___y_5211_, lean_object* v___y_5212_, lean_object* v___y_5213_, lean_object* v___y_5214_, lean_object* v___y_5215_){
_start:
{
lean_object* v_res_5216_; 
v_res_5216_ = l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg(v_x_5209_, v_x_5210_, v___y_5211_, v___y_5212_, v___y_5213_, v___y_5214_);
lean_dec(v___y_5214_);
lean_dec_ref(v___y_5213_);
lean_dec(v___y_5212_);
lean_dec_ref(v___y_5211_);
return v_res_5216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeys___redArg(lean_object* v_t_5217_, lean_object* v_keys_5218_, lean_object* v_a_5219_, lean_object* v_a_5220_, lean_object* v_a_5221_, lean_object* v_a_5222_){
_start:
{
lean_object* v___x_5224_; 
v___x_5224_ = l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg(v_t_5217_, v_keys_5218_, v_a_5219_, v_a_5220_, v_a_5221_, v_a_5222_);
return v___x_5224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeys___redArg___boxed(lean_object* v_t_5225_, lean_object* v_keys_5226_, lean_object* v_a_5227_, lean_object* v_a_5228_, lean_object* v_a_5229_, lean_object* v_a_5230_, lean_object* v_a_5231_){
_start:
{
lean_object* v_res_5232_; 
v_res_5232_ = l_Lean_Meta_LazyDiscrTree_dropKeys___redArg(v_t_5225_, v_keys_5226_, v_a_5227_, v_a_5228_, v_a_5229_, v_a_5230_);
lean_dec(v_a_5230_);
lean_dec_ref(v_a_5229_);
lean_dec(v_a_5228_);
lean_dec_ref(v_a_5227_);
return v_res_5232_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeys(lean_object* v_00_u03b1_5233_, lean_object* v_t_5234_, lean_object* v_keys_5235_, lean_object* v_a_5236_, lean_object* v_a_5237_, lean_object* v_a_5238_, lean_object* v_a_5239_){
_start:
{
lean_object* v___x_5241_; 
v___x_5241_ = l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg(v_t_5234_, v_keys_5235_, v_a_5236_, v_a_5237_, v_a_5238_, v_a_5239_);
return v___x_5241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeys___boxed(lean_object* v_00_u03b1_5242_, lean_object* v_t_5243_, lean_object* v_keys_5244_, lean_object* v_a_5245_, lean_object* v_a_5246_, lean_object* v_a_5247_, lean_object* v_a_5248_, lean_object* v_a_5249_){
_start:
{
lean_object* v_res_5250_; 
v_res_5250_ = l_Lean_Meta_LazyDiscrTree_dropKeys(v_00_u03b1_5242_, v_t_5243_, v_keys_5244_, v_a_5245_, v_a_5246_, v_a_5247_, v_a_5248_);
lean_dec(v_a_5248_);
lean_dec_ref(v_a_5247_);
lean_dec(v_a_5246_);
lean_dec_ref(v_a_5245_);
return v_res_5250_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0(lean_object* v_00_u03b1_5251_, lean_object* v_x_5252_, lean_object* v_x_5253_, lean_object* v___y_5254_, lean_object* v___y_5255_, lean_object* v___y_5256_, lean_object* v___y_5257_){
_start:
{
lean_object* v___x_5259_; 
v___x_5259_ = l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg(v_x_5252_, v_x_5253_, v___y_5254_, v___y_5255_, v___y_5256_, v___y_5257_);
return v___x_5259_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___boxed(lean_object* v_00_u03b1_5260_, lean_object* v_x_5261_, lean_object* v_x_5262_, lean_object* v___y_5263_, lean_object* v___y_5264_, lean_object* v___y_5265_, lean_object* v___y_5266_, lean_object* v___y_5267_){
_start:
{
lean_object* v_res_5268_; 
v_res_5268_ = l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0(v_00_u03b1_5260_, v_x_5261_, v_x_5262_, v___y_5263_, v___y_5264_, v___y_5265_, v___y_5266_);
lean_dec(v___y_5266_);
lean_dec_ref(v___y_5265_);
lean_dec(v___y_5264_);
lean_dec_ref(v___y_5263_);
return v_res_5268_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___redArg(lean_object* v_as_5269_, size_t v_sz_5270_, size_t v_i_5271_, lean_object* v_b_5272_, lean_object* v___y_5273_, lean_object* v___y_5274_, lean_object* v___y_5275_, lean_object* v___y_5276_, lean_object* v___y_5277_){
_start:
{
uint8_t v___x_5279_; 
v___x_5279_ = lean_usize_dec_lt(v_i_5271_, v_sz_5270_);
if (v___x_5279_ == 0)
{
lean_object* v___x_5280_; 
v___x_5280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5280_, 0, v_b_5272_);
return v___x_5280_;
}
else
{
lean_object* v_a_5281_; lean_object* v___x_5282_; 
v_a_5281_ = lean_array_uget_borrowed(v_as_5269_, v_i_5271_);
v___x_5282_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___redArg(v_a_5281_, v_b_5272_, v___y_5273_, v___y_5274_, v___y_5275_, v___y_5276_, v___y_5277_);
if (lean_obj_tag(v___x_5282_) == 0)
{
lean_object* v_a_5283_; lean_object* v___x_5285_; uint8_t v_isShared_5286_; uint8_t v_isSharedCheck_5295_; 
v_a_5283_ = lean_ctor_get(v___x_5282_, 0);
v_isSharedCheck_5295_ = !lean_is_exclusive(v___x_5282_);
if (v_isSharedCheck_5295_ == 0)
{
v___x_5285_ = v___x_5282_;
v_isShared_5286_ = v_isSharedCheck_5295_;
goto v_resetjp_5284_;
}
else
{
lean_inc(v_a_5283_);
lean_dec(v___x_5282_);
v___x_5285_ = lean_box(0);
v_isShared_5286_ = v_isSharedCheck_5295_;
goto v_resetjp_5284_;
}
v_resetjp_5284_:
{
if (lean_obj_tag(v_a_5283_) == 0)
{
lean_object* v_a_5287_; lean_object* v___x_5289_; 
v_a_5287_ = lean_ctor_get(v_a_5283_, 0);
lean_inc(v_a_5287_);
lean_dec_ref_known(v_a_5283_, 1);
if (v_isShared_5286_ == 0)
{
lean_ctor_set(v___x_5285_, 0, v_a_5287_);
v___x_5289_ = v___x_5285_;
goto v_reusejp_5288_;
}
else
{
lean_object* v_reuseFailAlloc_5290_; 
v_reuseFailAlloc_5290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5290_, 0, v_a_5287_);
v___x_5289_ = v_reuseFailAlloc_5290_;
goto v_reusejp_5288_;
}
v_reusejp_5288_:
{
return v___x_5289_;
}
}
else
{
lean_object* v_a_5291_; size_t v___x_5292_; size_t v___x_5293_; 
lean_del_object(v___x_5285_);
v_a_5291_ = lean_ctor_get(v_a_5283_, 0);
lean_inc(v_a_5291_);
lean_dec_ref_known(v_a_5283_, 1);
v___x_5292_ = ((size_t)1ULL);
v___x_5293_ = lean_usize_add(v_i_5271_, v___x_5292_);
v_i_5271_ = v___x_5293_;
v_b_5272_ = v_a_5291_;
goto _start;
}
}
}
else
{
lean_object* v_a_5296_; lean_object* v___x_5298_; uint8_t v_isShared_5299_; uint8_t v_isSharedCheck_5303_; 
v_a_5296_ = lean_ctor_get(v___x_5282_, 0);
v_isSharedCheck_5303_ = !lean_is_exclusive(v___x_5282_);
if (v_isSharedCheck_5303_ == 0)
{
v___x_5298_ = v___x_5282_;
v_isShared_5299_ = v_isSharedCheck_5303_;
goto v_resetjp_5297_;
}
else
{
lean_inc(v_a_5296_);
lean_dec(v___x_5282_);
v___x_5298_ = lean_box(0);
v_isShared_5299_ = v_isSharedCheck_5303_;
goto v_resetjp_5297_;
}
v_resetjp_5297_:
{
lean_object* v___x_5301_; 
if (v_isShared_5299_ == 0)
{
v___x_5301_ = v___x_5298_;
goto v_reusejp_5300_;
}
else
{
lean_object* v_reuseFailAlloc_5302_; 
v_reuseFailAlloc_5302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5302_, 0, v_a_5296_);
v___x_5301_ = v_reuseFailAlloc_5302_;
goto v_reusejp_5300_;
}
v_reusejp_5300_:
{
return v___x_5301_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg(lean_object* v_next_5304_, lean_object* v_a_5305_, lean_object* v_a_5306_, lean_object* v_a_5307_, lean_object* v_a_5308_, lean_object* v_a_5309_){
_start:
{
lean_object* v___x_5311_; uint8_t v___x_5312_; 
v___x_5311_ = lean_unsigned_to_nat(0u);
v___x_5312_ = lean_nat_dec_eq(v_next_5304_, v___x_5311_);
if (v___x_5312_ == 0)
{
lean_object* v___x_5313_; 
v___x_5313_ = l_Lean_Meta_LazyDiscrTree_evalNode___redArg(v_next_5304_, v_a_5305_, v_a_5306_, v_a_5307_, v_a_5308_, v_a_5309_);
if (lean_obj_tag(v___x_5313_) == 0)
{
lean_object* v_a_5314_; lean_object* v_snd_5315_; lean_object* v_fst_5316_; lean_object* v_fst_5317_; lean_object* v_snd_5318_; lean_object* v___x_5319_; 
v_a_5314_ = lean_ctor_get(v___x_5313_, 0);
lean_inc(v_a_5314_);
lean_dec_ref_known(v___x_5313_, 1);
v_snd_5315_ = lean_ctor_get(v_a_5314_, 1);
lean_inc(v_snd_5315_);
v_fst_5316_ = lean_ctor_get(v_a_5314_, 0);
lean_inc(v_fst_5316_);
lean_dec(v_a_5314_);
v_fst_5317_ = lean_ctor_get(v_snd_5315_, 0);
lean_inc(v_fst_5317_);
v_snd_5318_ = lean_ctor_get(v_snd_5315_, 1);
lean_inc(v_snd_5318_);
lean_dec(v_snd_5315_);
v___x_5319_ = l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg(v_fst_5317_, v_a_5305_, v_a_5306_, v_a_5307_, v_a_5308_, v_a_5309_);
if (lean_obj_tag(v___x_5319_) == 0)
{
lean_object* v_a_5320_; lean_object* v_buckets_5321_; lean_object* v___x_5322_; size_t v_sz_5323_; size_t v___x_5324_; lean_object* v___x_5325_; 
v_a_5320_ = lean_ctor_get(v___x_5319_, 0);
lean_inc(v_a_5320_);
lean_dec_ref_known(v___x_5319_, 1);
v_buckets_5321_ = lean_ctor_get(v_snd_5318_, 1);
v___x_5322_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v_sz_5323_ = lean_array_size(v_buckets_5321_);
v___x_5324_ = ((size_t)0ULL);
v___x_5325_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___redArg(v_buckets_5321_, v_sz_5323_, v___x_5324_, v___x_5322_, v_a_5305_, v_a_5306_, v_a_5307_, v_a_5308_, v_a_5309_);
if (lean_obj_tag(v___x_5325_) == 0)
{
lean_object* v_a_5326_; lean_object* v___x_5328_; uint8_t v_isShared_5329_; uint8_t v_isSharedCheck_5339_; 
v_a_5326_ = lean_ctor_get(v___x_5325_, 0);
v_isSharedCheck_5339_ = !lean_is_exclusive(v___x_5325_);
if (v_isSharedCheck_5339_ == 0)
{
v___x_5328_ = v___x_5325_;
v_isShared_5329_ = v_isSharedCheck_5339_;
goto v_resetjp_5327_;
}
else
{
lean_inc(v_a_5326_);
lean_dec(v___x_5325_);
v___x_5328_ = lean_box(0);
v_isShared_5329_ = v_isSharedCheck_5339_;
goto v_resetjp_5327_;
}
v_resetjp_5327_:
{
lean_object* v___x_5330_; lean_object* v___x_5331_; lean_object* v___x_5332_; lean_object* v___x_5333_; lean_object* v___x_5334_; lean_object* v___x_5335_; lean_object* v___x_5337_; 
v___x_5330_ = lean_st_ref_take(v_a_5305_);
v___x_5331_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5331_, 0, v___x_5322_);
lean_ctor_set(v___x_5331_, 1, v_fst_5317_);
lean_ctor_set(v___x_5331_, 2, v_snd_5318_);
lean_ctor_set(v___x_5331_, 3, v___x_5322_);
v___x_5332_ = lean_array_set(v___x_5330_, v_next_5304_, v___x_5331_);
v___x_5333_ = lean_st_ref_put(v_a_5305_, v___x_5332_);
v___x_5334_ = l_Array_append___redArg(v_fst_5316_, v_a_5320_);
lean_dec(v_a_5320_);
v___x_5335_ = l_Array_append___redArg(v___x_5334_, v_a_5326_);
lean_dec(v_a_5326_);
if (v_isShared_5329_ == 0)
{
lean_ctor_set(v___x_5328_, 0, v___x_5335_);
v___x_5337_ = v___x_5328_;
goto v_reusejp_5336_;
}
else
{
lean_object* v_reuseFailAlloc_5338_; 
v_reuseFailAlloc_5338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5338_, 0, v___x_5335_);
v___x_5337_ = v_reuseFailAlloc_5338_;
goto v_reusejp_5336_;
}
v_reusejp_5336_:
{
return v___x_5337_;
}
}
}
else
{
lean_dec(v_a_5320_);
lean_dec(v_snd_5318_);
lean_dec(v_fst_5317_);
lean_dec(v_fst_5316_);
return v___x_5325_;
}
}
else
{
lean_dec(v_snd_5318_);
lean_dec(v_fst_5317_);
lean_dec(v_fst_5316_);
return v___x_5319_;
}
}
else
{
lean_object* v_a_5340_; lean_object* v___x_5342_; uint8_t v_isShared_5343_; uint8_t v_isSharedCheck_5347_; 
v_a_5340_ = lean_ctor_get(v___x_5313_, 0);
v_isSharedCheck_5347_ = !lean_is_exclusive(v___x_5313_);
if (v_isSharedCheck_5347_ == 0)
{
v___x_5342_ = v___x_5313_;
v_isShared_5343_ = v_isSharedCheck_5347_;
goto v_resetjp_5341_;
}
else
{
lean_inc(v_a_5340_);
lean_dec(v___x_5313_);
v___x_5342_ = lean_box(0);
v_isShared_5343_ = v_isSharedCheck_5347_;
goto v_resetjp_5341_;
}
v_resetjp_5341_:
{
lean_object* v___x_5345_; 
if (v_isShared_5343_ == 0)
{
v___x_5345_ = v___x_5342_;
goto v_reusejp_5344_;
}
else
{
lean_object* v_reuseFailAlloc_5346_; 
v_reuseFailAlloc_5346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5346_, 0, v_a_5340_);
v___x_5345_ = v_reuseFailAlloc_5346_;
goto v_reusejp_5344_;
}
v_reusejp_5344_:
{
return v___x_5345_;
}
}
}
}
else
{
lean_object* v___x_5348_; lean_object* v___x_5349_; 
v___x_5348_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v___x_5349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5349_, 0, v___x_5348_);
return v___x_5349_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___redArg(lean_object* v_a_5350_, lean_object* v_a_5351_, lean_object* v___y_5352_, lean_object* v___y_5353_, lean_object* v___y_5354_, lean_object* v___y_5355_, lean_object* v___y_5356_){
_start:
{
if (lean_obj_tag(v_a_5350_) == 0)
{
lean_object* v___x_5358_; lean_object* v___x_5359_; 
v___x_5358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5358_, 0, v_a_5351_);
v___x_5359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5359_, 0, v___x_5358_);
return v___x_5359_;
}
else
{
lean_object* v_value_5360_; lean_object* v_tail_5361_; lean_object* v___x_5362_; 
v_value_5360_ = lean_ctor_get(v_a_5350_, 1);
v_tail_5361_ = lean_ctor_get(v_a_5350_, 2);
v___x_5362_ = l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg(v_value_5360_, v___y_5352_, v___y_5353_, v___y_5354_, v___y_5355_, v___y_5356_);
if (lean_obj_tag(v___x_5362_) == 0)
{
lean_object* v_a_5363_; lean_object* v___x_5364_; 
v_a_5363_ = lean_ctor_get(v___x_5362_, 0);
lean_inc(v_a_5363_);
lean_dec_ref_known(v___x_5362_, 1);
v___x_5364_ = l_Array_append___redArg(v_a_5351_, v_a_5363_);
lean_dec(v_a_5363_);
v_a_5350_ = v_tail_5361_;
v_a_5351_ = v___x_5364_;
goto _start;
}
else
{
lean_object* v_a_5366_; lean_object* v___x_5368_; uint8_t v_isShared_5369_; uint8_t v_isSharedCheck_5373_; 
lean_dec_ref(v_a_5351_);
v_a_5366_ = lean_ctor_get(v___x_5362_, 0);
v_isSharedCheck_5373_ = !lean_is_exclusive(v___x_5362_);
if (v_isSharedCheck_5373_ == 0)
{
v___x_5368_ = v___x_5362_;
v_isShared_5369_ = v_isSharedCheck_5373_;
goto v_resetjp_5367_;
}
else
{
lean_inc(v_a_5366_);
lean_dec(v___x_5362_);
v___x_5368_ = lean_box(0);
v_isShared_5369_ = v_isSharedCheck_5373_;
goto v_resetjp_5367_;
}
v_resetjp_5367_:
{
lean_object* v___x_5371_; 
if (v_isShared_5369_ == 0)
{
v___x_5371_ = v___x_5368_;
goto v_reusejp_5370_;
}
else
{
lean_object* v_reuseFailAlloc_5372_; 
v_reuseFailAlloc_5372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5372_, 0, v_a_5366_);
v___x_5371_ = v_reuseFailAlloc_5372_;
goto v_reusejp_5370_;
}
v_reusejp_5370_:
{
return v___x_5371_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___redArg___boxed(lean_object* v_a_5374_, lean_object* v_a_5375_, lean_object* v___y_5376_, lean_object* v___y_5377_, lean_object* v___y_5378_, lean_object* v___y_5379_, lean_object* v___y_5380_, lean_object* v___y_5381_){
_start:
{
lean_object* v_res_5382_; 
v_res_5382_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___redArg(v_a_5374_, v_a_5375_, v___y_5376_, v___y_5377_, v___y_5378_, v___y_5379_, v___y_5380_);
lean_dec(v___y_5380_);
lean_dec_ref(v___y_5379_);
lean_dec(v___y_5378_);
lean_dec_ref(v___y_5377_);
lean_dec(v___y_5376_);
lean_dec(v_a_5374_);
return v_res_5382_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___redArg___boxed(lean_object* v_as_5383_, lean_object* v_sz_5384_, lean_object* v_i_5385_, lean_object* v_b_5386_, lean_object* v___y_5387_, lean_object* v___y_5388_, lean_object* v___y_5389_, lean_object* v___y_5390_, lean_object* v___y_5391_, lean_object* v___y_5392_){
_start:
{
size_t v_sz_boxed_5393_; size_t v_i_boxed_5394_; lean_object* v_res_5395_; 
v_sz_boxed_5393_ = lean_unbox_usize(v_sz_5384_);
lean_dec(v_sz_5384_);
v_i_boxed_5394_ = lean_unbox_usize(v_i_5385_);
lean_dec(v_i_5385_);
v_res_5395_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___redArg(v_as_5383_, v_sz_boxed_5393_, v_i_boxed_5394_, v_b_5386_, v___y_5387_, v___y_5388_, v___y_5389_, v___y_5390_, v___y_5391_);
lean_dec(v___y_5391_);
lean_dec_ref(v___y_5390_);
lean_dec(v___y_5389_);
lean_dec_ref(v___y_5388_);
lean_dec(v___y_5387_);
lean_dec_ref(v_as_5383_);
return v_res_5395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg___boxed(lean_object* v_next_5396_, lean_object* v_a_5397_, lean_object* v_a_5398_, lean_object* v_a_5399_, lean_object* v_a_5400_, lean_object* v_a_5401_, lean_object* v_a_5402_){
_start:
{
lean_object* v_res_5403_; 
v_res_5403_ = l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg(v_next_5396_, v_a_5397_, v_a_5398_, v_a_5399_, v_a_5400_, v_a_5401_);
lean_dec(v_a_5401_);
lean_dec_ref(v_a_5400_);
lean_dec(v_a_5399_);
lean_dec_ref(v_a_5398_);
lean_dec(v_a_5397_);
lean_dec(v_next_5396_);
return v_res_5403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_collectSubtreeAux(lean_object* v_00_u03b1_5404_, lean_object* v_next_5405_, lean_object* v_a_5406_, lean_object* v_a_5407_, lean_object* v_a_5408_, lean_object* v_a_5409_, lean_object* v_a_5410_){
_start:
{
lean_object* v___x_5412_; 
v___x_5412_ = l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg(v_next_5405_, v_a_5406_, v_a_5407_, v_a_5408_, v_a_5409_, v_a_5410_);
return v___x_5412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___boxed(lean_object* v_00_u03b1_5413_, lean_object* v_next_5414_, lean_object* v_a_5415_, lean_object* v_a_5416_, lean_object* v_a_5417_, lean_object* v_a_5418_, lean_object* v_a_5419_, lean_object* v_a_5420_){
_start:
{
lean_object* v_res_5421_; 
v_res_5421_ = l_Lean_Meta_LazyDiscrTree_collectSubtreeAux(v_00_u03b1_5413_, v_next_5414_, v_a_5415_, v_a_5416_, v_a_5417_, v_a_5418_, v_a_5419_);
lean_dec(v_a_5419_);
lean_dec_ref(v_a_5418_);
lean_dec(v_a_5417_);
lean_dec_ref(v_a_5416_);
lean_dec(v_a_5415_);
lean_dec(v_next_5414_);
return v_res_5421_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0(lean_object* v_00_u03b1_5422_, lean_object* v_a_5423_, lean_object* v_a_5424_, lean_object* v___y_5425_, lean_object* v___y_5426_, lean_object* v___y_5427_, lean_object* v___y_5428_, lean_object* v___y_5429_){
_start:
{
lean_object* v___x_5431_; 
v___x_5431_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___redArg(v_a_5423_, v_a_5424_, v___y_5425_, v___y_5426_, v___y_5427_, v___y_5428_, v___y_5429_);
return v___x_5431_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___boxed(lean_object* v_00_u03b1_5432_, lean_object* v_a_5433_, lean_object* v_a_5434_, lean_object* v___y_5435_, lean_object* v___y_5436_, lean_object* v___y_5437_, lean_object* v___y_5438_, lean_object* v___y_5439_, lean_object* v___y_5440_){
_start:
{
lean_object* v_res_5441_; 
v_res_5441_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0(v_00_u03b1_5432_, v_a_5433_, v_a_5434_, v___y_5435_, v___y_5436_, v___y_5437_, v___y_5438_, v___y_5439_);
lean_dec(v___y_5439_);
lean_dec_ref(v___y_5438_);
lean_dec(v___y_5437_);
lean_dec_ref(v___y_5436_);
lean_dec(v___y_5435_);
lean_dec(v_a_5433_);
return v_res_5441_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1(lean_object* v_00_u03b1_5442_, lean_object* v_as_5443_, size_t v_sz_5444_, size_t v_i_5445_, lean_object* v_b_5446_, lean_object* v___y_5447_, lean_object* v___y_5448_, lean_object* v___y_5449_, lean_object* v___y_5450_, lean_object* v___y_5451_){
_start:
{
lean_object* v___x_5453_; 
v___x_5453_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___redArg(v_as_5443_, v_sz_5444_, v_i_5445_, v_b_5446_, v___y_5447_, v___y_5448_, v___y_5449_, v___y_5450_, v___y_5451_);
return v___x_5453_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___boxed(lean_object* v_00_u03b1_5454_, lean_object* v_as_5455_, lean_object* v_sz_5456_, lean_object* v_i_5457_, lean_object* v_b_5458_, lean_object* v___y_5459_, lean_object* v___y_5460_, lean_object* v___y_5461_, lean_object* v___y_5462_, lean_object* v___y_5463_, lean_object* v___y_5464_){
_start:
{
size_t v_sz_boxed_5465_; size_t v_i_boxed_5466_; lean_object* v_res_5467_; 
v_sz_boxed_5465_ = lean_unbox_usize(v_sz_5456_);
lean_dec(v_sz_5456_);
v_i_boxed_5466_ = lean_unbox_usize(v_i_5457_);
lean_dec(v_i_5457_);
v_res_5467_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1(v_00_u03b1_5454_, v_as_5455_, v_sz_boxed_5465_, v_i_boxed_5466_, v_b_5458_, v___y_5459_, v___y_5460_, v___y_5461_, v___y_5462_, v___y_5463_);
lean_dec(v___y_5463_);
lean_dec_ref(v___y_5462_);
lean_dec(v___y_5461_);
lean_dec_ref(v___y_5460_);
lean_dec(v___y_5459_);
lean_dec_ref(v_as_5455_);
return v_res_5467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeyAux___redArg(lean_object* v_next_5468_, lean_object* v_rest_5469_, lean_object* v_a_5470_, lean_object* v_a_5471_, lean_object* v_a_5472_, lean_object* v_a_5473_, lean_object* v_a_5474_){
_start:
{
lean_object* v___x_5476_; uint8_t v___x_5477_; 
v___x_5476_ = lean_unsigned_to_nat(0u);
v___x_5477_ = lean_nat_dec_eq(v_next_5468_, v___x_5476_);
if (v___x_5477_ == 0)
{
lean_object* v___x_5478_; 
v___x_5478_ = l_Lean_Meta_LazyDiscrTree_evalNode___redArg(v_next_5468_, v_a_5470_, v_a_5471_, v_a_5472_, v_a_5473_, v_a_5474_);
if (lean_obj_tag(v___x_5478_) == 0)
{
lean_object* v_a_5479_; lean_object* v_snd_5480_; 
v_a_5479_ = lean_ctor_get(v___x_5478_, 0);
lean_inc(v_a_5479_);
lean_dec_ref_known(v___x_5478_, 1);
v_snd_5480_ = lean_ctor_get(v_a_5479_, 1);
lean_inc(v_snd_5480_);
lean_dec(v_a_5479_);
if (lean_obj_tag(v_rest_5469_) == 0)
{
lean_object* v___x_5481_; 
lean_dec(v_snd_5480_);
v___x_5481_ = l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg(v_next_5468_, v_a_5470_, v_a_5471_, v_a_5472_, v_a_5473_, v_a_5474_);
lean_dec(v_next_5468_);
return v___x_5481_;
}
else
{
lean_object* v_fst_5482_; lean_object* v_snd_5483_; lean_object* v_head_5484_; lean_object* v_tail_5485_; lean_object* v___x_5486_; uint8_t v___x_5487_; 
lean_dec(v_next_5468_);
v_fst_5482_ = lean_ctor_get(v_snd_5480_, 0);
lean_inc(v_fst_5482_);
v_snd_5483_ = lean_ctor_get(v_snd_5480_, 1);
lean_inc(v_snd_5483_);
lean_dec(v_snd_5480_);
v_head_5484_ = lean_ctor_get(v_rest_5469_, 0);
v_tail_5485_ = lean_ctor_get(v_rest_5469_, 1);
v___x_5486_ = lean_box(3);
v___x_5487_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_head_5484_, v___x_5486_);
if (v___x_5487_ == 0)
{
lean_object* v___x_5488_; 
lean_dec(v_fst_5482_);
v___x_5488_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg(v_snd_5483_, v_head_5484_, v___x_5476_);
lean_dec(v_snd_5483_);
v_next_5468_ = v___x_5488_;
v_rest_5469_ = v_tail_5485_;
goto _start;
}
else
{
lean_dec(v_snd_5483_);
v_next_5468_ = v_fst_5482_;
v_rest_5469_ = v_tail_5485_;
goto _start;
}
}
}
else
{
lean_object* v_a_5491_; lean_object* v___x_5493_; uint8_t v_isShared_5494_; uint8_t v_isSharedCheck_5498_; 
lean_dec(v_next_5468_);
v_a_5491_ = lean_ctor_get(v___x_5478_, 0);
v_isSharedCheck_5498_ = !lean_is_exclusive(v___x_5478_);
if (v_isSharedCheck_5498_ == 0)
{
v___x_5493_ = v___x_5478_;
v_isShared_5494_ = v_isSharedCheck_5498_;
goto v_resetjp_5492_;
}
else
{
lean_inc(v_a_5491_);
lean_dec(v___x_5478_);
v___x_5493_ = lean_box(0);
v_isShared_5494_ = v_isSharedCheck_5498_;
goto v_resetjp_5492_;
}
v_resetjp_5492_:
{
lean_object* v___x_5496_; 
if (v_isShared_5494_ == 0)
{
v___x_5496_ = v___x_5493_;
goto v_reusejp_5495_;
}
else
{
lean_object* v_reuseFailAlloc_5497_; 
v_reuseFailAlloc_5497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5497_, 0, v_a_5491_);
v___x_5496_ = v_reuseFailAlloc_5497_;
goto v_reusejp_5495_;
}
v_reusejp_5495_:
{
return v___x_5496_;
}
}
}
}
else
{
lean_object* v___x_5499_; lean_object* v___x_5500_; 
lean_dec(v_next_5468_);
v___x_5499_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v___x_5500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5500_, 0, v___x_5499_);
return v___x_5500_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeyAux___redArg___boxed(lean_object* v_next_5501_, lean_object* v_rest_5502_, lean_object* v_a_5503_, lean_object* v_a_5504_, lean_object* v_a_5505_, lean_object* v_a_5506_, lean_object* v_a_5507_, lean_object* v_a_5508_){
_start:
{
lean_object* v_res_5509_; 
v_res_5509_ = l_Lean_Meta_LazyDiscrTree_extractKeyAux___redArg(v_next_5501_, v_rest_5502_, v_a_5503_, v_a_5504_, v_a_5505_, v_a_5506_, v_a_5507_);
lean_dec(v_a_5507_);
lean_dec_ref(v_a_5506_);
lean_dec(v_a_5505_);
lean_dec_ref(v_a_5504_);
lean_dec(v_a_5503_);
lean_dec(v_rest_5502_);
return v_res_5509_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeyAux(lean_object* v_00_u03b1_5510_, lean_object* v_next_5511_, lean_object* v_rest_5512_, lean_object* v_a_5513_, lean_object* v_a_5514_, lean_object* v_a_5515_, lean_object* v_a_5516_, lean_object* v_a_5517_){
_start:
{
lean_object* v___x_5519_; 
v___x_5519_ = l_Lean_Meta_LazyDiscrTree_extractKeyAux___redArg(v_next_5511_, v_rest_5512_, v_a_5513_, v_a_5514_, v_a_5515_, v_a_5516_, v_a_5517_);
return v___x_5519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeyAux___boxed(lean_object* v_00_u03b1_5520_, lean_object* v_next_5521_, lean_object* v_rest_5522_, lean_object* v_a_5523_, lean_object* v_a_5524_, lean_object* v_a_5525_, lean_object* v_a_5526_, lean_object* v_a_5527_, lean_object* v_a_5528_){
_start:
{
lean_object* v_res_5529_; 
v_res_5529_ = l_Lean_Meta_LazyDiscrTree_extractKeyAux(v_00_u03b1_5520_, v_next_5521_, v_rest_5522_, v_a_5523_, v_a_5524_, v_a_5525_, v_a_5526_, v_a_5527_);
lean_dec(v_a_5527_);
lean_dec_ref(v_a_5526_);
lean_dec(v_a_5525_);
lean_dec_ref(v_a_5524_);
lean_dec(v_a_5523_);
lean_dec(v_rest_5522_);
return v_res_5529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKey___redArg(lean_object* v_t_5530_, lean_object* v_path_5531_, lean_object* v_a_5532_, lean_object* v_a_5533_, lean_object* v_a_5534_, lean_object* v_a_5535_){
_start:
{
if (lean_obj_tag(v_path_5531_) == 0)
{
lean_object* v___x_5537_; lean_object* v___x_5538_; lean_object* v___x_5539_; 
v___x_5537_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v___x_5538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5538_, 0, v___x_5537_);
lean_ctor_set(v___x_5538_, 1, v_t_5530_);
v___x_5539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5539_, 0, v___x_5538_);
return v___x_5539_;
}
else
{
lean_object* v_head_5540_; lean_object* v_tail_5541_; lean_object* v_roots_5542_; lean_object* v___x_5543_; lean_object* v_idx_5544_; lean_object* v___x_5545_; lean_object* v___x_5546_; 
v_head_5540_ = lean_ctor_get(v_path_5531_, 0);
lean_inc(v_head_5540_);
v_tail_5541_ = lean_ctor_get(v_path_5531_, 1);
lean_inc(v_tail_5541_);
lean_dec_ref_known(v_path_5531_, 2);
v_roots_5542_ = lean_ctor_get(v_t_5530_, 1);
v___x_5543_ = lean_unsigned_to_nat(0u);
v_idx_5544_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg(v_roots_5542_, v_head_5540_, v___x_5543_);
lean_dec(v_head_5540_);
v___x_5545_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_extractKeyAux___boxed), 9, 3);
lean_closure_set(v___x_5545_, 0, lean_box(0));
lean_closure_set(v___x_5545_, 1, v_idx_5544_);
lean_closure_set(v___x_5545_, 2, v_tail_5541_);
v___x_5546_ = l_Lean_Meta_LazyDiscrTree_runMatch___redArg(v_t_5530_, v___x_5545_, v_a_5532_, v_a_5533_, v_a_5534_, v_a_5535_);
return v___x_5546_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKey___redArg___boxed(lean_object* v_t_5547_, lean_object* v_path_5548_, lean_object* v_a_5549_, lean_object* v_a_5550_, lean_object* v_a_5551_, lean_object* v_a_5552_, lean_object* v_a_5553_){
_start:
{
lean_object* v_res_5554_; 
v_res_5554_ = l_Lean_Meta_LazyDiscrTree_extractKey___redArg(v_t_5547_, v_path_5548_, v_a_5549_, v_a_5550_, v_a_5551_, v_a_5552_);
lean_dec(v_a_5552_);
lean_dec_ref(v_a_5551_);
lean_dec(v_a_5550_);
lean_dec_ref(v_a_5549_);
return v_res_5554_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKey(lean_object* v_00_u03b1_5555_, lean_object* v_t_5556_, lean_object* v_path_5557_, lean_object* v_a_5558_, lean_object* v_a_5559_, lean_object* v_a_5560_, lean_object* v_a_5561_){
_start:
{
lean_object* v___x_5563_; 
v___x_5563_ = l_Lean_Meta_LazyDiscrTree_extractKey___redArg(v_t_5556_, v_path_5557_, v_a_5558_, v_a_5559_, v_a_5560_, v_a_5561_);
return v___x_5563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKey___boxed(lean_object* v_00_u03b1_5564_, lean_object* v_t_5565_, lean_object* v_path_5566_, lean_object* v_a_5567_, lean_object* v_a_5568_, lean_object* v_a_5569_, lean_object* v_a_5570_, lean_object* v_a_5571_){
_start:
{
lean_object* v_res_5572_; 
v_res_5572_ = l_Lean_Meta_LazyDiscrTree_extractKey(v_00_u03b1_5564_, v_t_5565_, v_path_5566_, v_a_5567_, v_a_5568_, v_a_5569_, v_a_5570_);
lean_dec(v_a_5570_);
lean_dec_ref(v_a_5569_);
lean_dec(v_a_5568_);
lean_dec_ref(v_a_5567_);
return v_res_5572_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___redArg(lean_object* v_as_x27_5573_, lean_object* v_b_5574_, lean_object* v___y_5575_, lean_object* v___y_5576_, lean_object* v___y_5577_, lean_object* v___y_5578_){
_start:
{
if (lean_obj_tag(v_as_x27_5573_) == 0)
{
lean_object* v___x_5580_; 
v___x_5580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5580_, 0, v_b_5574_);
return v___x_5580_;
}
else
{
lean_object* v_head_5581_; lean_object* v_tail_5582_; lean_object* v_fst_5583_; lean_object* v_snd_5584_; lean_object* v___x_5585_; 
v_head_5581_ = lean_ctor_get(v_as_x27_5573_, 0);
v_tail_5582_ = lean_ctor_get(v_as_x27_5573_, 1);
v_fst_5583_ = lean_ctor_get(v_b_5574_, 0);
lean_inc(v_fst_5583_);
v_snd_5584_ = lean_ctor_get(v_b_5574_, 1);
lean_inc(v_snd_5584_);
lean_dec_ref(v_b_5574_);
lean_inc(v_head_5581_);
v___x_5585_ = l_Lean_Meta_LazyDiscrTree_extractKey___redArg(v_snd_5584_, v_head_5581_, v___y_5575_, v___y_5576_, v___y_5577_, v___y_5578_);
if (lean_obj_tag(v___x_5585_) == 0)
{
lean_object* v_a_5586_; lean_object* v_fst_5587_; lean_object* v_snd_5588_; lean_object* v___x_5590_; uint8_t v_isShared_5591_; uint8_t v_isSharedCheck_5597_; 
v_a_5586_ = lean_ctor_get(v___x_5585_, 0);
lean_inc(v_a_5586_);
lean_dec_ref_known(v___x_5585_, 1);
v_fst_5587_ = lean_ctor_get(v_a_5586_, 0);
v_snd_5588_ = lean_ctor_get(v_a_5586_, 1);
v_isSharedCheck_5597_ = !lean_is_exclusive(v_a_5586_);
if (v_isSharedCheck_5597_ == 0)
{
v___x_5590_ = v_a_5586_;
v_isShared_5591_ = v_isSharedCheck_5597_;
goto v_resetjp_5589_;
}
else
{
lean_inc(v_snd_5588_);
lean_inc(v_fst_5587_);
lean_dec(v_a_5586_);
v___x_5590_ = lean_box(0);
v_isShared_5591_ = v_isSharedCheck_5597_;
goto v_resetjp_5589_;
}
v_resetjp_5589_:
{
lean_object* v___x_5592_; lean_object* v___x_5594_; 
v___x_5592_ = l_Array_append___redArg(v_fst_5583_, v_fst_5587_);
lean_dec(v_fst_5587_);
if (v_isShared_5591_ == 0)
{
lean_ctor_set(v___x_5590_, 0, v___x_5592_);
v___x_5594_ = v___x_5590_;
goto v_reusejp_5593_;
}
else
{
lean_object* v_reuseFailAlloc_5596_; 
v_reuseFailAlloc_5596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5596_, 0, v___x_5592_);
lean_ctor_set(v_reuseFailAlloc_5596_, 1, v_snd_5588_);
v___x_5594_ = v_reuseFailAlloc_5596_;
goto v_reusejp_5593_;
}
v_reusejp_5593_:
{
v_as_x27_5573_ = v_tail_5582_;
v_b_5574_ = v___x_5594_;
goto _start;
}
}
}
else
{
lean_dec(v_fst_5583_);
return v___x_5585_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___redArg___boxed(lean_object* v_as_x27_5598_, lean_object* v_b_5599_, lean_object* v___y_5600_, lean_object* v___y_5601_, lean_object* v___y_5602_, lean_object* v___y_5603_, lean_object* v___y_5604_){
_start:
{
lean_object* v_res_5605_; 
v_res_5605_ = l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___redArg(v_as_x27_5598_, v_b_5599_, v___y_5600_, v___y_5601_, v___y_5602_, v___y_5603_);
lean_dec(v___y_5603_);
lean_dec_ref(v___y_5602_);
lean_dec(v___y_5601_);
lean_dec_ref(v___y_5600_);
lean_dec(v_as_x27_5598_);
return v_res_5605_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeys___redArg(lean_object* v_t_5606_, lean_object* v_keys_5607_, lean_object* v_a_5608_, lean_object* v_a_5609_, lean_object* v_a_5610_, lean_object* v_a_5611_){
_start:
{
lean_object* v_allExtracted_5613_; lean_object* v___x_5614_; lean_object* v___x_5615_; 
v_allExtracted_5613_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v___x_5614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5614_, 0, v_allExtracted_5613_);
lean_ctor_set(v___x_5614_, 1, v_t_5606_);
v___x_5615_ = l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___redArg(v_keys_5607_, v___x_5614_, v_a_5608_, v_a_5609_, v_a_5610_, v_a_5611_);
if (lean_obj_tag(v___x_5615_) == 0)
{
lean_object* v_a_5616_; lean_object* v___x_5618_; uint8_t v_isShared_5619_; uint8_t v_isSharedCheck_5632_; 
v_a_5616_ = lean_ctor_get(v___x_5615_, 0);
v_isSharedCheck_5632_ = !lean_is_exclusive(v___x_5615_);
if (v_isSharedCheck_5632_ == 0)
{
v___x_5618_ = v___x_5615_;
v_isShared_5619_ = v_isSharedCheck_5632_;
goto v_resetjp_5617_;
}
else
{
lean_inc(v_a_5616_);
lean_dec(v___x_5615_);
v___x_5618_ = lean_box(0);
v_isShared_5619_ = v_isSharedCheck_5632_;
goto v_resetjp_5617_;
}
v_resetjp_5617_:
{
lean_object* v_fst_5620_; lean_object* v_snd_5621_; lean_object* v___x_5623_; uint8_t v_isShared_5624_; uint8_t v_isSharedCheck_5631_; 
v_fst_5620_ = lean_ctor_get(v_a_5616_, 0);
v_snd_5621_ = lean_ctor_get(v_a_5616_, 1);
v_isSharedCheck_5631_ = !lean_is_exclusive(v_a_5616_);
if (v_isSharedCheck_5631_ == 0)
{
v___x_5623_ = v_a_5616_;
v_isShared_5624_ = v_isSharedCheck_5631_;
goto v_resetjp_5622_;
}
else
{
lean_inc(v_snd_5621_);
lean_inc(v_fst_5620_);
lean_dec(v_a_5616_);
v___x_5623_ = lean_box(0);
v_isShared_5624_ = v_isSharedCheck_5631_;
goto v_resetjp_5622_;
}
v_resetjp_5622_:
{
lean_object* v___x_5626_; 
if (v_isShared_5624_ == 0)
{
v___x_5626_ = v___x_5623_;
goto v_reusejp_5625_;
}
else
{
lean_object* v_reuseFailAlloc_5630_; 
v_reuseFailAlloc_5630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5630_, 0, v_fst_5620_);
lean_ctor_set(v_reuseFailAlloc_5630_, 1, v_snd_5621_);
v___x_5626_ = v_reuseFailAlloc_5630_;
goto v_reusejp_5625_;
}
v_reusejp_5625_:
{
lean_object* v___x_5628_; 
if (v_isShared_5619_ == 0)
{
lean_ctor_set(v___x_5618_, 0, v___x_5626_);
v___x_5628_ = v___x_5618_;
goto v_reusejp_5627_;
}
else
{
lean_object* v_reuseFailAlloc_5629_; 
v_reuseFailAlloc_5629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5629_, 0, v___x_5626_);
v___x_5628_ = v_reuseFailAlloc_5629_;
goto v_reusejp_5627_;
}
v_reusejp_5627_:
{
return v___x_5628_;
}
}
}
}
}
else
{
return v___x_5615_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeys___redArg___boxed(lean_object* v_t_5633_, lean_object* v_keys_5634_, lean_object* v_a_5635_, lean_object* v_a_5636_, lean_object* v_a_5637_, lean_object* v_a_5638_, lean_object* v_a_5639_){
_start:
{
lean_object* v_res_5640_; 
v_res_5640_ = l_Lean_Meta_LazyDiscrTree_extractKeys___redArg(v_t_5633_, v_keys_5634_, v_a_5635_, v_a_5636_, v_a_5637_, v_a_5638_);
lean_dec(v_a_5638_);
lean_dec_ref(v_a_5637_);
lean_dec(v_a_5636_);
lean_dec_ref(v_a_5635_);
lean_dec(v_keys_5634_);
return v_res_5640_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeys(lean_object* v_00_u03b1_5641_, lean_object* v_t_5642_, lean_object* v_keys_5643_, lean_object* v_a_5644_, lean_object* v_a_5645_, lean_object* v_a_5646_, lean_object* v_a_5647_){
_start:
{
lean_object* v___x_5649_; 
v___x_5649_ = l_Lean_Meta_LazyDiscrTree_extractKeys___redArg(v_t_5642_, v_keys_5643_, v_a_5644_, v_a_5645_, v_a_5646_, v_a_5647_);
return v___x_5649_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeys___boxed(lean_object* v_00_u03b1_5650_, lean_object* v_t_5651_, lean_object* v_keys_5652_, lean_object* v_a_5653_, lean_object* v_a_5654_, lean_object* v_a_5655_, lean_object* v_a_5656_, lean_object* v_a_5657_){
_start:
{
lean_object* v_res_5658_; 
v_res_5658_ = l_Lean_Meta_LazyDiscrTree_extractKeys(v_00_u03b1_5650_, v_t_5651_, v_keys_5652_, v_a_5653_, v_a_5654_, v_a_5655_, v_a_5656_);
lean_dec(v_a_5656_);
lean_dec_ref(v_a_5655_);
lean_dec(v_a_5654_);
lean_dec_ref(v_a_5653_);
lean_dec(v_keys_5652_);
return v_res_5658_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0(lean_object* v_00_u03b1_5659_, lean_object* v_as_5660_, lean_object* v_as_x27_5661_, lean_object* v_b_5662_, lean_object* v_a_5663_, lean_object* v___y_5664_, lean_object* v___y_5665_, lean_object* v___y_5666_, lean_object* v___y_5667_){
_start:
{
lean_object* v___x_5669_; 
v___x_5669_ = l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___redArg(v_as_x27_5661_, v_b_5662_, v___y_5664_, v___y_5665_, v___y_5666_, v___y_5667_);
return v___x_5669_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___boxed(lean_object* v_00_u03b1_5670_, lean_object* v_as_5671_, lean_object* v_as_x27_5672_, lean_object* v_b_5673_, lean_object* v_a_5674_, lean_object* v___y_5675_, lean_object* v___y_5676_, lean_object* v___y_5677_, lean_object* v___y_5678_, lean_object* v___y_5679_){
_start:
{
lean_object* v_res_5680_; 
v_res_5680_ = l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0(v_00_u03b1_5670_, v_as_5671_, v_as_x27_5672_, v_b_5673_, v_a_5674_, v___y_5675_, v___y_5676_, v___y_5677_, v___y_5678_);
lean_dec(v___y_5678_);
lean_dec_ref(v___y_5677_);
lean_dec(v___y_5676_);
lean_dec_ref(v___y_5675_);
lean_dec(v_as_x27_5672_);
lean_dec(v_as_5671_);
return v_res_5680_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1(void){
_start:
{
lean_object* v___x_5682_; lean_object* v___x_5683_; 
v___x_5682_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__0));
v___x_5683_ = l_Lean_stringToMessageData(v___x_5682_);
return v___x_5683_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3(void){
_start:
{
lean_object* v___x_5685_; lean_object* v___x_5686_; 
v___x_5685_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__2));
v___x_5686_ = l_Lean_stringToMessageData(v___x_5685_);
return v___x_5686_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5(void){
_start:
{
lean_object* v___x_5688_; lean_object* v___x_5689_; 
v___x_5688_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__4));
v___x_5689_ = l_Lean_stringToMessageData(v___x_5688_);
return v___x_5689_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg(lean_object* v_inst_5690_, lean_object* v_inst_5691_, lean_object* v_inst_5692_, lean_object* v_inst_5693_, lean_object* v_f_5694_){
_start:
{
lean_object* v_module_5695_; lean_object* v_const_5696_; lean_object* v_exception_5697_; lean_object* v___x_5698_; lean_object* v___x_5699_; lean_object* v___x_5700_; lean_object* v___x_5701_; lean_object* v___x_5702_; lean_object* v___x_5703_; lean_object* v___x_5704_; lean_object* v___x_5705_; lean_object* v___x_5706_; lean_object* v___x_5707_; lean_object* v___x_5708_; lean_object* v___x_5709_; 
v_module_5695_ = lean_ctor_get(v_f_5694_, 0);
lean_inc(v_module_5695_);
v_const_5696_ = lean_ctor_get(v_f_5694_, 1);
lean_inc(v_const_5696_);
v_exception_5697_ = lean_ctor_get(v_f_5694_, 2);
lean_inc_ref(v_exception_5697_);
lean_dec_ref(v_f_5694_);
v___x_5698_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1);
v___x_5699_ = l_Lean_MessageData_ofName(v_const_5696_);
v___x_5700_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5700_, 0, v___x_5698_);
lean_ctor_set(v___x_5700_, 1, v___x_5699_);
v___x_5701_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3);
v___x_5702_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5702_, 0, v___x_5700_);
lean_ctor_set(v___x_5702_, 1, v___x_5701_);
v___x_5703_ = l_Lean_MessageData_ofName(v_module_5695_);
v___x_5704_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5704_, 0, v___x_5702_);
lean_ctor_set(v___x_5704_, 1, v___x_5703_);
v___x_5705_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5);
v___x_5706_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5706_, 0, v___x_5704_);
lean_ctor_set(v___x_5706_, 1, v___x_5705_);
v___x_5707_ = l_Lean_Exception_toMessageData(v_exception_5697_);
v___x_5708_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5708_, 0, v___x_5706_);
lean_ctor_set(v___x_5708_, 1, v___x_5707_);
v___x_5709_ = l_Lean_logError___redArg(v_inst_5690_, v_inst_5691_, v_inst_5692_, v_inst_5693_, v___x_5708_);
return v___x_5709_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure(lean_object* v_m_5710_, lean_object* v_inst_5711_, lean_object* v_inst_5712_, lean_object* v_inst_5713_, lean_object* v_inst_5714_, lean_object* v_f_5715_){
_start:
{
lean_object* v___x_5716_; 
v___x_5716_ = l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg(v_inst_5711_, v_inst_5712_, v_inst_5713_, v_inst_5714_, v_f_5715_);
return v___x_5716_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg___lam__0(lean_object* v_tasks_5717_, lean_object* v_toPure_5718_, lean_object* v_t_5719_){
_start:
{
lean_object* v___x_5720_; lean_object* v___x_5721_; 
v___x_5720_ = lean_array_push(v_tasks_5717_, v_t_5719_);
v___x_5721_ = lean_apply_2(v_toPure_5718_, lean_box(0), v___x_5720_);
return v___x_5721_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg(lean_object* v_inst_5722_, lean_object* v_inst_5723_, lean_object* v_cctx_5724_, lean_object* v_env_5725_, lean_object* v_act_5726_, lean_object* v_constantsPerTask_5727_, lean_object* v_n_5728_, lean_object* v_ngen_5729_, lean_object* v_tasks_5730_, lean_object* v_start_5731_, lean_object* v_cnt_5732_, lean_object* v_idx_5733_){
_start:
{
lean_object* v___x_5734_; lean_object* v_toApplicative_5735_; lean_object* v_moduleData_5736_; lean_object* v_toBind_5737_; lean_object* v_toPure_5738_; lean_object* v___x_5739_; uint8_t v___x_5740_; 
v___x_5734_ = l_Lean_Environment_header(v_env_5725_);
v_toApplicative_5735_ = lean_ctor_get(v_inst_5722_, 0);
v_moduleData_5736_ = lean_ctor_get(v___x_5734_, 7);
lean_inc_ref(v_moduleData_5736_);
lean_dec_ref(v___x_5734_);
v_toBind_5737_ = lean_ctor_get(v_inst_5722_, 1);
v_toPure_5738_ = lean_ctor_get(v_toApplicative_5735_, 1);
v___x_5739_ = lean_array_get_size(v_moduleData_5736_);
v___x_5740_ = lean_nat_dec_lt(v_idx_5733_, v___x_5739_);
if (v___x_5740_ == 0)
{
uint8_t v___x_5741_; 
lean_inc(v_toPure_5738_);
lean_inc(v_toBind_5737_);
lean_dec_ref(v_moduleData_5736_);
lean_dec(v_idx_5733_);
lean_dec(v_cnt_5732_);
lean_dec(v_constantsPerTask_5727_);
lean_dec_ref(v_inst_5722_);
v___x_5741_ = lean_nat_dec_lt(v_start_5731_, v_n_5728_);
if (v___x_5741_ == 0)
{
lean_object* v___x_5742_; 
lean_dec(v_toBind_5737_);
lean_dec(v_start_5731_);
lean_dec_ref(v_ngen_5729_);
lean_dec(v_n_5728_);
lean_dec_ref(v_act_5726_);
lean_dec_ref(v_env_5725_);
lean_dec_ref(v_cctx_5724_);
lean_dec(v_inst_5723_);
v___x_5742_ = lean_apply_2(v_toPure_5738_, lean_box(0), v_tasks_5730_);
return v___x_5742_;
}
else
{
lean_object* v_namePrefix_5743_; lean_object* v_idx_5744_; lean_object* v___x_5746_; uint8_t v_isShared_5747_; uint8_t v_isSharedCheck_5759_; 
v_namePrefix_5743_ = lean_ctor_get(v_ngen_5729_, 0);
v_idx_5744_ = lean_ctor_get(v_ngen_5729_, 1);
v_isSharedCheck_5759_ = !lean_is_exclusive(v_ngen_5729_);
if (v_isSharedCheck_5759_ == 0)
{
v___x_5746_ = v_ngen_5729_;
v_isShared_5747_ = v_isSharedCheck_5759_;
goto v_resetjp_5745_;
}
else
{
lean_inc(v_idx_5744_);
lean_inc(v_namePrefix_5743_);
lean_dec(v_ngen_5729_);
v___x_5746_ = lean_box(0);
v_isShared_5747_ = v_isSharedCheck_5759_;
goto v_resetjp_5745_;
}
v_resetjp_5745_:
{
lean_object* v___f_5748_; lean_object* v___x_5749_; lean_object* v___x_5750_; lean_object* v___x_5752_; 
v___f_5748_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg___lam__0), 3, 2);
lean_closure_set(v___f_5748_, 0, v_tasks_5730_);
lean_closure_set(v___f_5748_, 1, v_toPure_5738_);
v___x_5749_ = l_Lean_Name_num___override(v_namePrefix_5743_, v_idx_5744_);
v___x_5750_ = lean_unsigned_to_nat(1u);
if (v_isShared_5747_ == 0)
{
lean_ctor_set(v___x_5746_, 1, v___x_5750_);
lean_ctor_set(v___x_5746_, 0, v___x_5749_);
v___x_5752_ = v___x_5746_;
goto v_reusejp_5751_;
}
else
{
lean_object* v_reuseFailAlloc_5758_; 
v_reuseFailAlloc_5758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5758_, 0, v___x_5749_);
lean_ctor_set(v_reuseFailAlloc_5758_, 1, v___x_5750_);
v___x_5752_ = v_reuseFailAlloc_5758_;
goto v_reusejp_5751_;
}
v_reusejp_5751_:
{
lean_object* v___x_5753_; lean_object* v___x_5754_; lean_object* v___x_5755_; lean_object* v___x_5756_; lean_object* v___x_5757_; 
v___x_5753_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___boxed), 8, 7);
lean_closure_set(v___x_5753_, 0, lean_box(0));
lean_closure_set(v___x_5753_, 1, v_cctx_5724_);
lean_closure_set(v___x_5753_, 2, v___x_5752_);
lean_closure_set(v___x_5753_, 3, v_env_5725_);
lean_closure_set(v___x_5753_, 4, v_act_5726_);
lean_closure_set(v___x_5753_, 5, v_start_5731_);
lean_closure_set(v___x_5753_, 6, v_n_5728_);
v___x_5754_ = lean_unsigned_to_nat(0u);
v___x_5755_ = lean_alloc_closure((void*)(l_BaseIO_asTask___boxed), 4, 3);
lean_closure_set(v___x_5755_, 0, lean_box(0));
lean_closure_set(v___x_5755_, 1, v___x_5753_);
lean_closure_set(v___x_5755_, 2, v___x_5754_);
v___x_5756_ = lean_apply_2(v_inst_5723_, lean_box(0), v___x_5755_);
v___x_5757_ = lean_apply_4(v_toBind_5737_, lean_box(0), lean_box(0), v___x_5756_, v___f_5748_);
return v___x_5757_;
}
}
}
}
else
{
lean_object* v_mdata_5760_; lean_object* v_constants_5761_; lean_object* v___x_5762_; lean_object* v_cnt_5763_; uint8_t v___x_5764_; 
v_mdata_5760_ = lean_array_fget(v_moduleData_5736_, v_idx_5733_);
lean_dec_ref(v_moduleData_5736_);
v_constants_5761_ = lean_ctor_get(v_mdata_5760_, 2);
lean_inc_ref(v_constants_5761_);
lean_dec(v_mdata_5760_);
v___x_5762_ = lean_array_get_size(v_constants_5761_);
lean_dec_ref(v_constants_5761_);
v_cnt_5763_ = lean_nat_add(v_cnt_5732_, v___x_5762_);
lean_dec(v_cnt_5732_);
v___x_5764_ = lean_nat_dec_lt(v_constantsPerTask_5727_, v_cnt_5763_);
if (v___x_5764_ == 0)
{
lean_object* v___x_5765_; lean_object* v___x_5766_; 
v___x_5765_ = lean_unsigned_to_nat(1u);
v___x_5766_ = lean_nat_add(v_idx_5733_, v___x_5765_);
lean_dec(v_idx_5733_);
v_cnt_5732_ = v_cnt_5763_;
v_idx_5733_ = v___x_5766_;
goto _start;
}
else
{
lean_object* v_namePrefix_5768_; lean_object* v_idx_5769_; lean_object* v___x_5771_; uint8_t v_isShared_5772_; uint8_t v_isSharedCheck_5787_; 
lean_inc(v_toBind_5737_);
lean_dec(v_cnt_5763_);
v_namePrefix_5768_ = lean_ctor_get(v_ngen_5729_, 0);
v_idx_5769_ = lean_ctor_get(v_ngen_5729_, 1);
v_isSharedCheck_5787_ = !lean_is_exclusive(v_ngen_5729_);
if (v_isSharedCheck_5787_ == 0)
{
v___x_5771_ = v_ngen_5729_;
v_isShared_5772_ = v_isSharedCheck_5787_;
goto v_resetjp_5770_;
}
else
{
lean_inc(v_idx_5769_);
lean_inc(v_namePrefix_5768_);
lean_dec(v_ngen_5729_);
v___x_5771_ = lean_box(0);
v_isShared_5772_ = v_isSharedCheck_5787_;
goto v_resetjp_5770_;
}
v_resetjp_5770_:
{
lean_object* v___x_5773_; lean_object* v___x_5774_; lean_object* v___x_5776_; 
lean_inc(v_idx_5769_);
lean_inc(v_namePrefix_5768_);
v___x_5773_ = l_Lean_Name_num___override(v_namePrefix_5768_, v_idx_5769_);
v___x_5774_ = lean_unsigned_to_nat(1u);
if (v_isShared_5772_ == 0)
{
lean_ctor_set(v___x_5771_, 1, v___x_5774_);
lean_ctor_set(v___x_5771_, 0, v___x_5773_);
v___x_5776_ = v___x_5771_;
goto v_reusejp_5775_;
}
else
{
lean_object* v_reuseFailAlloc_5786_; 
v_reuseFailAlloc_5786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5786_, 0, v___x_5773_);
lean_ctor_set(v_reuseFailAlloc_5786_, 1, v___x_5774_);
v___x_5776_ = v_reuseFailAlloc_5786_;
goto v_reusejp_5775_;
}
v_reusejp_5775_:
{
lean_object* v___x_5777_; lean_object* v___x_5778_; lean_object* v___x_5779_; lean_object* v___f_5780_; lean_object* v___x_5781_; lean_object* v___x_5782_; lean_object* v___x_5783_; lean_object* v___x_5784_; lean_object* v___x_5785_; 
v___x_5777_ = lean_nat_add(v_idx_5769_, v___x_5774_);
lean_dec(v_idx_5769_);
v___x_5778_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5778_, 0, v_namePrefix_5768_);
lean_ctor_set(v___x_5778_, 1, v___x_5777_);
v___x_5779_ = lean_nat_add(v_idx_5733_, v___x_5774_);
lean_dec(v_idx_5733_);
lean_inc(v___x_5779_);
lean_inc_ref(v_act_5726_);
lean_inc_ref(v_env_5725_);
lean_inc_ref(v_cctx_5724_);
lean_inc(v_inst_5723_);
v___f_5780_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg___lam__1), 11, 10);
lean_closure_set(v___f_5780_, 0, v_tasks_5730_);
lean_closure_set(v___f_5780_, 1, v_inst_5722_);
lean_closure_set(v___f_5780_, 2, v_inst_5723_);
lean_closure_set(v___f_5780_, 3, v_cctx_5724_);
lean_closure_set(v___f_5780_, 4, v_env_5725_);
lean_closure_set(v___f_5780_, 5, v_act_5726_);
lean_closure_set(v___f_5780_, 6, v_constantsPerTask_5727_);
lean_closure_set(v___f_5780_, 7, v_n_5728_);
lean_closure_set(v___f_5780_, 8, v___x_5778_);
lean_closure_set(v___f_5780_, 9, v___x_5779_);
v___x_5781_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___boxed), 8, 7);
lean_closure_set(v___x_5781_, 0, lean_box(0));
lean_closure_set(v___x_5781_, 1, v_cctx_5724_);
lean_closure_set(v___x_5781_, 2, v___x_5776_);
lean_closure_set(v___x_5781_, 3, v_env_5725_);
lean_closure_set(v___x_5781_, 4, v_act_5726_);
lean_closure_set(v___x_5781_, 5, v_start_5731_);
lean_closure_set(v___x_5781_, 6, v___x_5779_);
v___x_5782_ = lean_unsigned_to_nat(0u);
v___x_5783_ = lean_alloc_closure((void*)(l_BaseIO_asTask___boxed), 4, 3);
lean_closure_set(v___x_5783_, 0, lean_box(0));
lean_closure_set(v___x_5783_, 1, v___x_5781_);
lean_closure_set(v___x_5783_, 2, v___x_5782_);
v___x_5784_ = lean_apply_2(v_inst_5723_, lean_box(0), v___x_5783_);
v___x_5785_ = lean_apply_4(v_toBind_5737_, lean_box(0), lean_box(0), v___x_5784_, v___f_5780_);
return v___x_5785_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg___lam__1(lean_object* v_tasks_5788_, lean_object* v_inst_5789_, lean_object* v_inst_5790_, lean_object* v_cctx_5791_, lean_object* v_env_5792_, lean_object* v_act_5793_, lean_object* v_constantsPerTask_5794_, lean_object* v_n_5795_, lean_object* v___x_5796_, lean_object* v___x_5797_, lean_object* v_t_5798_){
_start:
{
lean_object* v___x_5799_; lean_object* v___x_5800_; lean_object* v___x_5801_; 
v___x_5799_ = lean_array_push(v_tasks_5788_, v_t_5798_);
v___x_5800_ = lean_unsigned_to_nat(0u);
lean_inc(v___x_5797_);
v___x_5801_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg(v_inst_5789_, v_inst_5790_, v_cctx_5791_, v_env_5792_, v_act_5793_, v_constantsPerTask_5794_, v_n_5795_, v___x_5796_, v___x_5799_, v___x_5797_, v___x_5800_, v___x_5797_);
return v___x_5801_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go(lean_object* v_m_5802_, lean_object* v_00_u03b1_5803_, lean_object* v_inst_5804_, lean_object* v_inst_5805_, lean_object* v_cctx_5806_, lean_object* v_env_5807_, lean_object* v_act_5808_, lean_object* v_constantsPerTask_5809_, lean_object* v_n_5810_, lean_object* v_ngen_5811_, lean_object* v_tasks_5812_, lean_object* v_start_5813_, lean_object* v_cnt_5814_, lean_object* v_idx_5815_){
_start:
{
lean_object* v___x_5816_; 
v___x_5816_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg(v_inst_5804_, v_inst_5805_, v_cctx_5806_, v_env_5807_, v_act_5808_, v_constantsPerTask_5809_, v_n_5810_, v_ngen_5811_, v_tasks_5812_, v_start_5813_, v_cnt_5814_, v_idx_5815_);
return v___x_5816_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_getChildNgen_match__1_splitter___redArg(lean_object* v_x_5817_, lean_object* v_h__1_5818_){
_start:
{
lean_object* v_fst_5819_; lean_object* v_snd_5820_; lean_object* v___x_5821_; 
v_fst_5819_ = lean_ctor_get(v_x_5817_, 0);
lean_inc(v_fst_5819_);
v_snd_5820_ = lean_ctor_get(v_x_5817_, 1);
lean_inc(v_snd_5820_);
lean_dec_ref(v_x_5817_);
v___x_5821_ = lean_apply_2(v_h__1_5818_, v_fst_5819_, v_snd_5820_);
return v___x_5821_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_getChildNgen_match__1_splitter(lean_object* v_motive_5822_, lean_object* v_x_5823_, lean_object* v_h__1_5824_){
_start:
{
lean_object* v_fst_5825_; lean_object* v_snd_5826_; lean_object* v___x_5827_; 
v_fst_5825_ = lean_ctor_get(v_x_5823_, 0);
lean_inc(v_fst_5825_);
v_snd_5826_ = lean_ctor_get(v_x_5823_, 1);
lean_inc(v_snd_5826_);
lean_dec_ref(v_x_5823_);
v___x_5827_ = lean_apply_2(v_h__1_5824_, v_fst_5825_, v_snd_5826_);
return v___x_5827_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__0(lean_object* v_inst_5828_, lean_object* v_inst_5829_, lean_object* v_inst_5830_, lean_object* v_inst_5831_, lean_object* v_x_5832_, lean_object* v___y_5833_){
_start:
{
lean_object* v___x_5834_; 
v___x_5834_ = l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg(v_inst_5828_, v_inst_5829_, v_inst_5830_, v_inst_5831_, v___y_5833_);
return v___x_5834_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__1(lean_object* v_tree_5835_, lean_object* v_toPure_5836_, lean_object* v_____r_5837_){
_start:
{
lean_object* v___x_5838_; lean_object* v___x_5839_; 
v___x_5838_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy___redArg(v_tree_5835_);
v___x_5839_ = lean_apply_2(v_toPure_5836_, lean_box(0), v___x_5838_);
return v___x_5839_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__2(lean_object* v___x_5840_, lean_object* v___x_5841_, lean_object* v_toPure_5842_, lean_object* v_toBind_5843_, lean_object* v_inst_5844_, lean_object* v___f_5845_, lean_object* v_tasks_5846_){
_start:
{
lean_object* v___x_5847_; lean_object* v___x_5848_; lean_object* v___x_5849_; lean_object* v___x_5850_; lean_object* v___x_5851_; lean_object* v_r_5852_; lean_object* v_tree_5853_; lean_object* v_errors_5854_; lean_object* v___f_5855_; lean_object* v___x_5856_; lean_object* v___x_5857_; uint8_t v___x_5858_; 
v___x_5847_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__1);
lean_inc(v___x_5840_);
v___x_5848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5848_, 0, v___x_5840_);
lean_ctor_set(v___x_5848_, 1, v___x_5847_);
v___x_5849_ = lean_mk_empty_array_with_capacity(v___x_5840_);
lean_inc_ref(v___x_5849_);
v___x_5850_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5850_, 0, v___x_5848_);
lean_ctor_set(v___x_5850_, 1, v___x_5849_);
v___x_5851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5851_, 0, v___x_5850_);
lean_ctor_set(v___x_5851_, 1, v___x_5849_);
v_r_5852_ = l_Lean_Meta_LazyDiscrTree_combineGet___redArg(v___x_5841_, v___x_5851_, v_tasks_5846_);
v_tree_5853_ = lean_ctor_get(v_r_5852_, 0);
lean_inc_ref(v_tree_5853_);
v_errors_5854_ = lean_ctor_get(v_r_5852_, 1);
lean_inc_ref(v_errors_5854_);
lean_dec(v_r_5852_);
lean_inc(v_toPure_5842_);
v___f_5855_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__1), 3, 2);
lean_closure_set(v___f_5855_, 0, v_tree_5853_);
lean_closure_set(v___f_5855_, 1, v_toPure_5842_);
v___x_5856_ = lean_array_get_size(v_errors_5854_);
v___x_5857_ = lean_box(0);
v___x_5858_ = lean_nat_dec_lt(v___x_5840_, v___x_5856_);
lean_dec(v___x_5840_);
if (v___x_5858_ == 0)
{
lean_object* v___x_5859_; lean_object* v___x_5860_; 
lean_dec_ref(v_errors_5854_);
lean_dec(v___f_5845_);
lean_dec_ref(v_inst_5844_);
v___x_5859_ = lean_apply_2(v_toPure_5842_, lean_box(0), v___x_5857_);
v___x_5860_ = lean_apply_4(v_toBind_5843_, lean_box(0), lean_box(0), v___x_5859_, v___f_5855_);
return v___x_5860_;
}
else
{
size_t v___x_5861_; size_t v___x_5862_; lean_object* v___x_5863_; lean_object* v___x_5864_; 
lean_dec(v_toPure_5842_);
v___x_5861_ = ((size_t)0ULL);
v___x_5862_ = lean_usize_of_nat(v___x_5856_);
v___x_5863_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_5844_, v___f_5845_, v_errors_5854_, v___x_5861_, v___x_5862_, v___x_5857_);
v___x_5864_ = lean_apply_4(v_toBind_5843_, lean_box(0), lean_box(0), v___x_5863_, v___f_5855_);
return v___x_5864_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg(lean_object* v_inst_5867_, lean_object* v_inst_5868_, lean_object* v_inst_5869_, lean_object* v_inst_5870_, lean_object* v_inst_5871_, lean_object* v_cctx_5872_, lean_object* v_ngen_5873_, lean_object* v_env_5874_, lean_object* v_act_5875_, lean_object* v_constantsPerTask_5876_){
_start:
{
lean_object* v___x_5877_; lean_object* v_moduleData_5878_; lean_object* v_toApplicative_5879_; lean_object* v_toBind_5880_; lean_object* v_n_5881_; lean_object* v___x_5882_; lean_object* v___x_5883_; lean_object* v___x_5884_; lean_object* v_toPure_5885_; lean_object* v___f_5886_; lean_object* v___x_5887_; lean_object* v___f_5888_; lean_object* v___x_5889_; 
v___x_5877_ = l_Lean_Environment_header(v_env_5874_);
v_moduleData_5878_ = lean_ctor_get(v___x_5877_, 7);
lean_inc_ref(v_moduleData_5878_);
lean_dec_ref(v___x_5877_);
v_toApplicative_5879_ = lean_ctor_get(v_inst_5867_, 0);
v_toBind_5880_ = lean_ctor_get(v_inst_5867_, 1);
lean_inc_n(v_toBind_5880_, 2);
v_n_5881_ = lean_array_get_size(v_moduleData_5878_);
lean_dec_ref(v_moduleData_5878_);
v___x_5882_ = lean_unsigned_to_nat(0u);
v___x_5883_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___closed__0));
lean_inc_ref_n(v_inst_5867_, 2);
v___x_5884_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg(v_inst_5867_, v_inst_5871_, v_cctx_5872_, v_env_5874_, v_act_5875_, v_constantsPerTask_5876_, v_n_5881_, v_ngen_5873_, v___x_5883_, v___x_5882_, v___x_5882_, v___x_5882_);
v_toPure_5885_ = lean_ctor_get(v_toApplicative_5879_, 1);
lean_inc(v_toPure_5885_);
v___f_5886_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__0), 6, 4);
lean_closure_set(v___f_5886_, 0, v_inst_5867_);
lean_closure_set(v___f_5886_, 1, v_inst_5868_);
lean_closure_set(v___f_5886_, 2, v_inst_5869_);
lean_closure_set(v___f_5886_, 3, v_inst_5870_);
v___x_5887_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg___closed__0));
v___f_5888_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__2), 7, 6);
lean_closure_set(v___f_5888_, 0, v___x_5882_);
lean_closure_set(v___f_5888_, 1, v___x_5887_);
lean_closure_set(v___f_5888_, 2, v_toPure_5885_);
lean_closure_set(v___f_5888_, 3, v_toBind_5880_);
lean_closure_set(v___f_5888_, 4, v_inst_5867_);
lean_closure_set(v___f_5888_, 5, v___f_5886_);
v___x_5889_ = lean_apply_4(v_toBind_5880_, lean_box(0), lean_box(0), v___x_5884_, v___f_5888_);
return v___x_5889_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree(lean_object* v_m_5890_, lean_object* v_00_u03b1_5891_, lean_object* v_inst_5892_, lean_object* v_inst_5893_, lean_object* v_inst_5894_, lean_object* v_inst_5895_, lean_object* v_inst_5896_, lean_object* v_cctx_5897_, lean_object* v_ngen_5898_, lean_object* v_env_5899_, lean_object* v_act_5900_, lean_object* v_constantsPerTask_5901_){
_start:
{
lean_object* v___x_5902_; 
v___x_5902_ = l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg(v_inst_5892_, v_inst_5893_, v_inst_5894_, v_inst_5895_, v_inst_5896_, v_cctx_5897_, v_ngen_5898_, v_env_5899_, v_act_5900_, v_constantsPerTask_5901_);
return v___x_5902_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__0(void){
_start:
{
lean_object* v___x_5903_; lean_object* v___x_5904_; lean_object* v___x_5905_; 
v___x_5903_ = lean_box(0);
v___x_5904_ = lean_unsigned_to_nat(16u);
v___x_5905_ = lean_mk_array(v___x_5904_, v___x_5903_);
return v___x_5905_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__1(void){
_start:
{
lean_object* v___x_5906_; lean_object* v___x_5907_; lean_object* v___x_5908_; 
v___x_5906_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__0, &l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__0);
v___x_5907_ = lean_unsigned_to_nat(0u);
v___x_5908_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5908_, 0, v___x_5907_);
lean_ctor_set(v___x_5908_, 1, v___x_5906_);
return v___x_5908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createTreeCtx(lean_object* v_ctx_5909_){
_start:
{
lean_object* v_toCold_5910_; lean_object* v_ref_5911_; lean_object* v___x_5913_; uint8_t v_isShared_5914_; uint8_t v_isSharedCheck_5946_; 
v_toCold_5910_ = lean_ctor_get(v_ctx_5909_, 0);
v_ref_5911_ = lean_ctor_get(v_ctx_5909_, 2);
v_isSharedCheck_5946_ = !lean_is_exclusive(v_ctx_5909_);
if (v_isSharedCheck_5946_ == 0)
{
lean_object* v_unused_5947_; 
v_unused_5947_ = lean_ctor_get(v_ctx_5909_, 1);
lean_dec(v_unused_5947_);
v___x_5913_ = v_ctx_5909_;
v_isShared_5914_ = v_isSharedCheck_5946_;
goto v_resetjp_5912_;
}
else
{
lean_inc(v_ref_5911_);
lean_inc(v_toCold_5910_);
lean_dec(v_ctx_5909_);
v___x_5913_ = lean_box(0);
v_isShared_5914_ = v_isSharedCheck_5946_;
goto v_resetjp_5912_;
}
v_resetjp_5912_:
{
lean_object* v_fileName_5915_; lean_object* v_fileMap_5916_; lean_object* v_options_5917_; lean_object* v_maxRecDepth_5918_; lean_object* v___x_5920_; uint8_t v_isShared_5921_; uint8_t v_isSharedCheck_5937_; 
v_fileName_5915_ = lean_ctor_get(v_toCold_5910_, 0);
v_fileMap_5916_ = lean_ctor_get(v_toCold_5910_, 1);
v_options_5917_ = lean_ctor_get(v_toCold_5910_, 2);
v_maxRecDepth_5918_ = lean_ctor_get(v_toCold_5910_, 3);
v_isSharedCheck_5937_ = !lean_is_exclusive(v_toCold_5910_);
if (v_isSharedCheck_5937_ == 0)
{
lean_object* v_unused_5938_; lean_object* v_unused_5939_; lean_object* v_unused_5940_; lean_object* v_unused_5941_; lean_object* v_unused_5942_; lean_object* v_unused_5943_; lean_object* v_unused_5944_; lean_object* v_unused_5945_; 
v_unused_5938_ = lean_ctor_get(v_toCold_5910_, 11);
lean_dec(v_unused_5938_);
v_unused_5939_ = lean_ctor_get(v_toCold_5910_, 10);
lean_dec(v_unused_5939_);
v_unused_5940_ = lean_ctor_get(v_toCold_5910_, 9);
lean_dec(v_unused_5940_);
v_unused_5941_ = lean_ctor_get(v_toCold_5910_, 8);
lean_dec(v_unused_5941_);
v_unused_5942_ = lean_ctor_get(v_toCold_5910_, 7);
lean_dec(v_unused_5942_);
v_unused_5943_ = lean_ctor_get(v_toCold_5910_, 6);
lean_dec(v_unused_5943_);
v_unused_5944_ = lean_ctor_get(v_toCold_5910_, 5);
lean_dec(v_unused_5944_);
v_unused_5945_ = lean_ctor_get(v_toCold_5910_, 4);
lean_dec(v_unused_5945_);
v___x_5920_ = v_toCold_5910_;
v_isShared_5921_ = v_isSharedCheck_5937_;
goto v_resetjp_5919_;
}
else
{
lean_inc(v_maxRecDepth_5918_);
lean_inc(v_options_5917_);
lean_inc(v_fileMap_5916_);
lean_inc(v_fileName_5915_);
lean_dec(v_toCold_5910_);
v___x_5920_ = lean_box(0);
v_isShared_5921_ = v_isSharedCheck_5937_;
goto v_resetjp_5919_;
}
v_resetjp_5919_:
{
lean_object* v___x_5922_; lean_object* v___x_5923_; lean_object* v___x_5924_; lean_object* v___x_5925_; lean_object* v___x_5926_; lean_object* v___x_5927_; lean_object* v___x_5929_; 
v___x_5922_ = lean_box(0);
v___x_5923_ = lean_box(0);
v___x_5924_ = lean_unsigned_to_nat(0u);
v___x_5925_ = l_Lean_firstFrontendMacroScope;
v___x_5926_ = lean_box(0);
v___x_5927_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__1, &l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__1);
lean_inc_ref(v_options_5917_);
if (v_isShared_5921_ == 0)
{
lean_ctor_set(v___x_5920_, 11, v___x_5927_);
lean_ctor_set(v___x_5920_, 10, v___x_5926_);
lean_ctor_set(v___x_5920_, 9, v___x_5925_);
lean_ctor_set(v___x_5920_, 8, v___x_5922_);
lean_ctor_set(v___x_5920_, 7, v___x_5924_);
lean_ctor_set(v___x_5920_, 6, v___x_5924_);
lean_ctor_set(v___x_5920_, 5, v___x_5923_);
lean_ctor_set(v___x_5920_, 4, v___x_5922_);
v___x_5929_ = v___x_5920_;
goto v_reusejp_5928_;
}
else
{
lean_object* v_reuseFailAlloc_5936_; 
v_reuseFailAlloc_5936_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_5936_, 0, v_fileName_5915_);
lean_ctor_set(v_reuseFailAlloc_5936_, 1, v_fileMap_5916_);
lean_ctor_set(v_reuseFailAlloc_5936_, 2, v_options_5917_);
lean_ctor_set(v_reuseFailAlloc_5936_, 3, v_maxRecDepth_5918_);
lean_ctor_set(v_reuseFailAlloc_5936_, 4, v___x_5922_);
lean_ctor_set(v_reuseFailAlloc_5936_, 5, v___x_5923_);
lean_ctor_set(v_reuseFailAlloc_5936_, 6, v___x_5924_);
lean_ctor_set(v_reuseFailAlloc_5936_, 7, v___x_5924_);
lean_ctor_set(v_reuseFailAlloc_5936_, 8, v___x_5922_);
lean_ctor_set(v_reuseFailAlloc_5936_, 9, v___x_5925_);
lean_ctor_set(v_reuseFailAlloc_5936_, 10, v___x_5926_);
lean_ctor_set(v_reuseFailAlloc_5936_, 11, v___x_5927_);
v___x_5929_ = v_reuseFailAlloc_5936_;
goto v_reusejp_5928_;
}
v_reusejp_5928_:
{
uint16_t v___x_5930_; uint8_t v___x_5931_; uint8_t v___x_5932_; lean_object* v___x_5934_; 
v___x_5930_ = l_Lean_OptionFlags_ofOptions(v_options_5917_);
lean_dec_ref(v_options_5917_);
v___x_5931_ = 0;
v___x_5932_ = 0;
if (v_isShared_5914_ == 0)
{
lean_ctor_set(v___x_5913_, 1, v___x_5924_);
lean_ctor_set(v___x_5913_, 0, v___x_5929_);
v___x_5934_ = v___x_5913_;
goto v_reusejp_5933_;
}
else
{
lean_object* v_reuseFailAlloc_5935_; 
v_reuseFailAlloc_5935_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_5935_, 0, v___x_5929_);
lean_ctor_set(v_reuseFailAlloc_5935_, 1, v___x_5924_);
lean_ctor_set(v_reuseFailAlloc_5935_, 2, v_ref_5911_);
v___x_5934_ = v_reuseFailAlloc_5935_;
goto v_reusejp_5933_;
}
v_reusejp_5933_:
{
lean_ctor_set_uint16(v___x_5934_, sizeof(void*)*3, v___x_5930_);
lean_ctor_set_uint8(v___x_5934_, sizeof(void*)*3 + 2, v___x_5931_);
lean_ctor_set_uint8(v___x_5934_, sizeof(void*)*3 + 3, v___x_5932_);
lean_ctor_set_uint8(v___x_5934_, sizeof(void*)*3 + 4, v___x_5931_);
return v___x_5934_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg(lean_object* v_category_5948_, lean_object* v_opts_5949_, lean_object* v_act_5950_, lean_object* v_decl_5951_, lean_object* v___y_5952_, lean_object* v___y_5953_, lean_object* v___y_5954_, lean_object* v___y_5955_){
_start:
{
lean_object* v___x_5957_; lean_object* v___x_5958_; 
lean_inc(v___y_5955_);
lean_inc_ref(v___y_5954_);
lean_inc(v___y_5953_);
lean_inc_ref(v___y_5952_);
v___x_5957_ = lean_apply_4(v_act_5950_, v___y_5952_, v___y_5953_, v___y_5954_, v___y_5955_);
v___x_5958_ = l_Lean_profileitIOUnsafe___redArg(v_category_5948_, v_opts_5949_, v___x_5957_, v_decl_5951_);
return v___x_5958_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg___boxed(lean_object* v_category_5959_, lean_object* v_opts_5960_, lean_object* v_act_5961_, lean_object* v_decl_5962_, lean_object* v___y_5963_, lean_object* v___y_5964_, lean_object* v___y_5965_, lean_object* v___y_5966_, lean_object* v___y_5967_){
_start:
{
lean_object* v_res_5968_; 
v_res_5968_ = l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg(v_category_5959_, v_opts_5960_, v_act_5961_, v_decl_5962_, v___y_5963_, v___y_5964_, v___y_5965_, v___y_5966_);
lean_dec(v___y_5966_);
lean_dec_ref(v___y_5965_);
lean_dec(v___y_5964_);
lean_dec_ref(v___y_5963_);
lean_dec_ref(v_opts_5960_);
lean_dec_ref(v_category_5959_);
return v_res_5968_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1(lean_object* v_00_u03b1_5969_, lean_object* v_category_5970_, lean_object* v_opts_5971_, lean_object* v_act_5972_, lean_object* v_decl_5973_, lean_object* v___y_5974_, lean_object* v___y_5975_, lean_object* v___y_5976_, lean_object* v___y_5977_){
_start:
{
lean_object* v___x_5979_; 
v___x_5979_ = l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg(v_category_5970_, v_opts_5971_, v_act_5972_, v_decl_5973_, v___y_5974_, v___y_5975_, v___y_5976_, v___y_5977_);
return v___x_5979_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___boxed(lean_object* v_00_u03b1_5980_, lean_object* v_category_5981_, lean_object* v_opts_5982_, lean_object* v_act_5983_, lean_object* v_decl_5984_, lean_object* v___y_5985_, lean_object* v___y_5986_, lean_object* v___y_5987_, lean_object* v___y_5988_, lean_object* v___y_5989_){
_start:
{
lean_object* v_res_5990_; 
v_res_5990_ = l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1(v_00_u03b1_5980_, v_category_5981_, v_opts_5982_, v_act_5983_, v_decl_5984_, v___y_5985_, v___y_5986_, v___y_5987_, v___y_5988_);
lean_dec(v___y_5988_);
lean_dec_ref(v___y_5987_);
lean_dec(v___y_5986_);
lean_dec_ref(v___y_5985_);
lean_dec_ref(v_opts_5982_);
lean_dec_ref(v_category_5981_);
return v_res_5990_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___redArg(lean_object* v_cctx_5991_, lean_object* v_env_5992_, lean_object* v_act_5993_, lean_object* v_constantsPerTask_5994_, lean_object* v_n_5995_, lean_object* v_ngen_5996_, lean_object* v_tasks_5997_, lean_object* v_start_5998_, lean_object* v_cnt_5999_, lean_object* v_idx_6000_){
_start:
{
lean_object* v___x_6002_; lean_object* v_moduleData_6003_; lean_object* v___x_6004_; uint8_t v___x_6005_; 
v___x_6002_ = l_Lean_Environment_header(v_env_5992_);
v_moduleData_6003_ = lean_ctor_get(v___x_6002_, 7);
lean_inc_ref(v_moduleData_6003_);
lean_dec_ref(v___x_6002_);
v___x_6004_ = lean_array_get_size(v_moduleData_6003_);
v___x_6005_ = lean_nat_dec_lt(v_idx_6000_, v___x_6004_);
if (v___x_6005_ == 0)
{
uint8_t v___x_6006_; 
lean_dec_ref(v_moduleData_6003_);
lean_dec(v_idx_6000_);
lean_dec(v_cnt_5999_);
v___x_6006_ = lean_nat_dec_lt(v_start_5998_, v_n_5995_);
if (v___x_6006_ == 0)
{
lean_object* v___x_6007_; 
lean_dec(v_start_5998_);
lean_dec_ref(v_ngen_5996_);
lean_dec(v_n_5995_);
lean_dec_ref(v_act_5993_);
lean_dec_ref(v_env_5992_);
lean_dec_ref(v_cctx_5991_);
v___x_6007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6007_, 0, v_tasks_5997_);
return v___x_6007_;
}
else
{
lean_object* v_namePrefix_6008_; lean_object* v_idx_6009_; lean_object* v___x_6011_; uint8_t v_isShared_6012_; uint8_t v_isSharedCheck_6023_; 
v_namePrefix_6008_ = lean_ctor_get(v_ngen_5996_, 0);
v_idx_6009_ = lean_ctor_get(v_ngen_5996_, 1);
v_isSharedCheck_6023_ = !lean_is_exclusive(v_ngen_5996_);
if (v_isSharedCheck_6023_ == 0)
{
v___x_6011_ = v_ngen_5996_;
v_isShared_6012_ = v_isSharedCheck_6023_;
goto v_resetjp_6010_;
}
else
{
lean_inc(v_idx_6009_);
lean_inc(v_namePrefix_6008_);
lean_dec(v_ngen_5996_);
v___x_6011_ = lean_box(0);
v_isShared_6012_ = v_isSharedCheck_6023_;
goto v_resetjp_6010_;
}
v_resetjp_6010_:
{
lean_object* v___x_6013_; lean_object* v___x_6014_; lean_object* v___x_6016_; 
v___x_6013_ = l_Lean_Name_num___override(v_namePrefix_6008_, v_idx_6009_);
v___x_6014_ = lean_unsigned_to_nat(1u);
if (v_isShared_6012_ == 0)
{
lean_ctor_set(v___x_6011_, 1, v___x_6014_);
lean_ctor_set(v___x_6011_, 0, v___x_6013_);
v___x_6016_ = v___x_6011_;
goto v_reusejp_6015_;
}
else
{
lean_object* v_reuseFailAlloc_6022_; 
v_reuseFailAlloc_6022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6022_, 0, v___x_6013_);
lean_ctor_set(v_reuseFailAlloc_6022_, 1, v___x_6014_);
v___x_6016_ = v_reuseFailAlloc_6022_;
goto v_reusejp_6015_;
}
v_reusejp_6015_:
{
lean_object* v___x_6017_; lean_object* v___x_6018_; lean_object* v___x_6019_; lean_object* v___x_6020_; lean_object* v___x_6021_; 
v___x_6017_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___boxed), 8, 7);
lean_closure_set(v___x_6017_, 0, lean_box(0));
lean_closure_set(v___x_6017_, 1, v_cctx_5991_);
lean_closure_set(v___x_6017_, 2, v___x_6016_);
lean_closure_set(v___x_6017_, 3, v_env_5992_);
lean_closure_set(v___x_6017_, 4, v_act_5993_);
lean_closure_set(v___x_6017_, 5, v_start_5998_);
lean_closure_set(v___x_6017_, 6, v_n_5995_);
v___x_6018_ = lean_unsigned_to_nat(0u);
v___x_6019_ = lean_io_as_task(v___x_6017_, v___x_6018_);
v___x_6020_ = lean_array_push(v_tasks_5997_, v___x_6019_);
v___x_6021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6021_, 0, v___x_6020_);
return v___x_6021_;
}
}
}
}
else
{
lean_object* v_mdata_6024_; lean_object* v_constants_6025_; lean_object* v___x_6026_; lean_object* v_cnt_6027_; uint8_t v___x_6028_; 
v_mdata_6024_ = lean_array_fget(v_moduleData_6003_, v_idx_6000_);
lean_dec_ref(v_moduleData_6003_);
v_constants_6025_ = lean_ctor_get(v_mdata_6024_, 2);
lean_inc_ref(v_constants_6025_);
lean_dec(v_mdata_6024_);
v___x_6026_ = lean_array_get_size(v_constants_6025_);
lean_dec_ref(v_constants_6025_);
v_cnt_6027_ = lean_nat_add(v_cnt_5999_, v___x_6026_);
lean_dec(v_cnt_5999_);
v___x_6028_ = lean_nat_dec_lt(v_constantsPerTask_5994_, v_cnt_6027_);
if (v___x_6028_ == 0)
{
lean_object* v___x_6029_; lean_object* v___x_6030_; 
v___x_6029_ = lean_unsigned_to_nat(1u);
v___x_6030_ = lean_nat_add(v_idx_6000_, v___x_6029_);
lean_dec(v_idx_6000_);
v_cnt_5999_ = v_cnt_6027_;
v_idx_6000_ = v___x_6030_;
goto _start;
}
else
{
lean_object* v_namePrefix_6032_; lean_object* v_idx_6033_; lean_object* v___x_6035_; uint8_t v_isShared_6036_; uint8_t v_isSharedCheck_6050_; 
lean_dec(v_cnt_6027_);
v_namePrefix_6032_ = lean_ctor_get(v_ngen_5996_, 0);
v_idx_6033_ = lean_ctor_get(v_ngen_5996_, 1);
v_isSharedCheck_6050_ = !lean_is_exclusive(v_ngen_5996_);
if (v_isSharedCheck_6050_ == 0)
{
v___x_6035_ = v_ngen_5996_;
v_isShared_6036_ = v_isSharedCheck_6050_;
goto v_resetjp_6034_;
}
else
{
lean_inc(v_idx_6033_);
lean_inc(v_namePrefix_6032_);
lean_dec(v_ngen_5996_);
v___x_6035_ = lean_box(0);
v_isShared_6036_ = v_isSharedCheck_6050_;
goto v_resetjp_6034_;
}
v_resetjp_6034_:
{
lean_object* v___x_6037_; lean_object* v___x_6038_; lean_object* v___x_6040_; 
lean_inc(v_idx_6033_);
lean_inc(v_namePrefix_6032_);
v___x_6037_ = l_Lean_Name_num___override(v_namePrefix_6032_, v_idx_6033_);
v___x_6038_ = lean_unsigned_to_nat(1u);
if (v_isShared_6036_ == 0)
{
lean_ctor_set(v___x_6035_, 1, v___x_6038_);
lean_ctor_set(v___x_6035_, 0, v___x_6037_);
v___x_6040_ = v___x_6035_;
goto v_reusejp_6039_;
}
else
{
lean_object* v_reuseFailAlloc_6049_; 
v_reuseFailAlloc_6049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6049_, 0, v___x_6037_);
lean_ctor_set(v_reuseFailAlloc_6049_, 1, v___x_6038_);
v___x_6040_ = v_reuseFailAlloc_6049_;
goto v_reusejp_6039_;
}
v_reusejp_6039_:
{
lean_object* v___x_6041_; lean_object* v___x_6042_; lean_object* v___x_6043_; lean_object* v___x_6044_; lean_object* v___x_6045_; lean_object* v___x_6046_; lean_object* v___x_6047_; 
v___x_6041_ = lean_nat_add(v_idx_6033_, v___x_6038_);
lean_dec(v_idx_6033_);
v___x_6042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6042_, 0, v_namePrefix_6032_);
lean_ctor_set(v___x_6042_, 1, v___x_6041_);
v___x_6043_ = lean_nat_add(v_idx_6000_, v___x_6038_);
lean_dec(v_idx_6000_);
lean_inc_n(v___x_6043_, 2);
lean_inc_ref(v_act_5993_);
lean_inc_ref(v_env_5992_);
lean_inc_ref(v_cctx_5991_);
v___x_6044_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___boxed), 8, 7);
lean_closure_set(v___x_6044_, 0, lean_box(0));
lean_closure_set(v___x_6044_, 1, v_cctx_5991_);
lean_closure_set(v___x_6044_, 2, v___x_6040_);
lean_closure_set(v___x_6044_, 3, v_env_5992_);
lean_closure_set(v___x_6044_, 4, v_act_5993_);
lean_closure_set(v___x_6044_, 5, v_start_5998_);
lean_closure_set(v___x_6044_, 6, v___x_6043_);
v___x_6045_ = lean_unsigned_to_nat(0u);
v___x_6046_ = lean_io_as_task(v___x_6044_, v___x_6045_);
v___x_6047_ = lean_array_push(v_tasks_5997_, v___x_6046_);
v_ngen_5996_ = v___x_6042_;
v_tasks_5997_ = v___x_6047_;
v_start_5998_ = v___x_6043_;
v_cnt_5999_ = v___x_6045_;
v_idx_6000_ = v___x_6043_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___redArg___boxed(lean_object* v_cctx_6051_, lean_object* v_env_6052_, lean_object* v_act_6053_, lean_object* v_constantsPerTask_6054_, lean_object* v_n_6055_, lean_object* v_ngen_6056_, lean_object* v_tasks_6057_, lean_object* v_start_6058_, lean_object* v_cnt_6059_, lean_object* v_idx_6060_, lean_object* v___y_6061_){
_start:
{
lean_object* v_res_6062_; 
v_res_6062_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___redArg(v_cctx_6051_, v_env_6052_, v_act_6053_, v_constantsPerTask_6054_, v_n_6055_, v_ngen_6056_, v_tasks_6057_, v_start_6058_, v_cnt_6059_, v_idx_6060_);
lean_dec(v_constantsPerTask_6054_);
return v_res_6062_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0(uint8_t v___x_6071_, lean_object* v_x_6072_){
_start:
{
if (lean_obj_tag(v_x_6072_) == 1)
{
lean_object* v_pre_6073_; 
v_pre_6073_ = lean_ctor_get(v_x_6072_, 0);
switch(lean_obj_tag(v_pre_6073_))
{
case 1:
{
lean_object* v_pre_6074_; 
v_pre_6074_ = lean_ctor_get(v_pre_6073_, 0);
switch(lean_obj_tag(v_pre_6074_))
{
case 0:
{
lean_object* v_str_6075_; lean_object* v_str_6076_; lean_object* v___x_6077_; uint8_t v___x_6078_; 
v_str_6075_ = lean_ctor_get(v_x_6072_, 1);
v_str_6076_ = lean_ctor_get(v_pre_6073_, 1);
v___x_6077_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__0));
v___x_6078_ = lean_string_dec_eq(v_str_6076_, v___x_6077_);
if (v___x_6078_ == 0)
{
lean_object* v___x_6079_; uint8_t v___x_6080_; 
v___x_6079_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__1));
v___x_6080_ = lean_string_dec_eq(v_str_6076_, v___x_6079_);
if (v___x_6080_ == 0)
{
return v___x_6080_;
}
else
{
lean_object* v___x_6081_; uint8_t v___x_6082_; 
v___x_6081_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__2));
v___x_6082_ = lean_string_dec_eq(v_str_6075_, v___x_6081_);
return v___x_6082_;
}
}
else
{
lean_object* v___x_6083_; uint8_t v___x_6084_; 
v___x_6083_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__3));
v___x_6084_ = lean_string_dec_eq(v_str_6075_, v___x_6083_);
return v___x_6084_;
}
}
case 1:
{
lean_object* v_pre_6085_; 
v_pre_6085_ = lean_ctor_get(v_pre_6074_, 0);
if (lean_obj_tag(v_pre_6085_) == 0)
{
lean_object* v_str_6086_; lean_object* v_str_6087_; lean_object* v_str_6088_; lean_object* v___x_6089_; uint8_t v___x_6090_; 
v_str_6086_ = lean_ctor_get(v_x_6072_, 1);
v_str_6087_ = lean_ctor_get(v_pre_6073_, 1);
v_str_6088_ = lean_ctor_get(v_pre_6074_, 1);
v___x_6089_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__4));
v___x_6090_ = lean_string_dec_eq(v_str_6088_, v___x_6089_);
if (v___x_6090_ == 0)
{
return v___x_6090_;
}
else
{
lean_object* v___x_6091_; uint8_t v___x_6092_; 
v___x_6091_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__5));
v___x_6092_ = lean_string_dec_eq(v_str_6087_, v___x_6091_);
if (v___x_6092_ == 0)
{
return v___x_6092_;
}
else
{
lean_object* v___x_6093_; uint8_t v___x_6094_; 
v___x_6093_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__6));
v___x_6094_ = lean_string_dec_eq(v_str_6086_, v___x_6093_);
return v___x_6094_;
}
}
}
else
{
return v___x_6071_;
}
}
default: 
{
return v___x_6071_;
}
}
}
case 0:
{
lean_object* v_str_6095_; lean_object* v___x_6096_; uint8_t v___x_6097_; 
v_str_6095_ = lean_ctor_get(v_x_6072_, 1);
v___x_6096_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__7));
v___x_6097_ = lean_string_dec_eq(v_str_6095_, v___x_6096_);
return v___x_6097_;
}
default: 
{
return v___x_6071_;
}
}
}
else
{
return v___x_6071_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___boxed(lean_object* v___x_6098_, lean_object* v_x_6099_){
_start:
{
uint8_t v___x_8038__boxed_6100_; uint8_t v_res_6101_; lean_object* v_r_6102_; 
v___x_8038__boxed_6100_ = lean_unbox(v___x_6098_);
v_res_6101_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0(v___x_8038__boxed_6100_, v_x_6099_);
lean_dec(v_x_6099_);
v_r_6102_ = lean_box(v_res_6101_);
return v_r_6102_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7_spec__9(lean_object* v_opts_6103_, lean_object* v_opt_6104_){
_start:
{
lean_object* v_name_6105_; lean_object* v_defValue_6106_; lean_object* v_map_6107_; lean_object* v___x_6108_; 
v_name_6105_ = lean_ctor_get(v_opt_6104_, 0);
v_defValue_6106_ = lean_ctor_get(v_opt_6104_, 1);
v_map_6107_ = lean_ctor_get(v_opts_6103_, 0);
v___x_6108_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_6107_, v_name_6105_);
if (lean_obj_tag(v___x_6108_) == 0)
{
uint8_t v___x_6109_; 
v___x_6109_ = lean_unbox(v_defValue_6106_);
return v___x_6109_;
}
else
{
lean_object* v_val_6110_; 
v_val_6110_ = lean_ctor_get(v___x_6108_, 0);
lean_inc(v_val_6110_);
lean_dec_ref_known(v___x_6108_, 1);
if (lean_obj_tag(v_val_6110_) == 1)
{
uint8_t v_v_6111_; 
v_v_6111_ = lean_ctor_get_uint8(v_val_6110_, 0);
lean_dec_ref_known(v_val_6110_, 0);
return v_v_6111_;
}
else
{
uint8_t v___x_6112_; 
lean_dec(v_val_6110_);
v___x_6112_ = lean_unbox(v_defValue_6106_);
return v___x_6112_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7_spec__9___boxed(lean_object* v_opts_6113_, lean_object* v_opt_6114_){
_start:
{
uint8_t v_res_6115_; lean_object* v_r_6116_; 
v_res_6115_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7_spec__9(v_opts_6113_, v_opt_6114_);
lean_dec_ref(v_opt_6114_);
lean_dec_ref(v_opts_6113_);
v_r_6116_ = lean_box(v_res_6115_);
return v_r_6116_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7(lean_object* v_ref_6121_, lean_object* v_msgData_6122_, uint8_t v_severity_6123_, uint8_t v_isSilent_6124_, lean_object* v___y_6125_, lean_object* v___y_6126_, lean_object* v___y_6127_, lean_object* v___y_6128_){
_start:
{
uint8_t v___y_6131_; lean_object* v___y_6132_; lean_object* v___y_6133_; lean_object* v___y_6134_; uint8_t v___y_6135_; lean_object* v___y_6136_; lean_object* v___y_6137_; lean_object* v_toCold_6138_; lean_object* v___y_6139_; lean_object* v___y_6168_; lean_object* v___y_6169_; uint8_t v___y_6170_; uint8_t v___y_6171_; lean_object* v___y_6172_; lean_object* v___y_6173_; uint8_t v___y_6174_; lean_object* v___y_6175_; uint8_t v___y_6195_; uint8_t v___y_6196_; lean_object* v___y_6197_; lean_object* v___y_6198_; lean_object* v___y_6199_; uint8_t v___y_6200_; lean_object* v___y_6201_; uint8_t v___y_6205_; uint8_t v___x_6222_; uint8_t v___x_6223_; 
v___x_6222_ = 2;
v___x_6223_ = l_Lean_instBEqMessageSeverity_beq(v_severity_6123_, v___x_6222_);
if (v___x_6223_ == 0)
{
goto v___jp_6215_;
}
else
{
uint8_t v___x_6224_; 
lean_inc_ref(v_msgData_6122_);
v___x_6224_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_6122_);
if (v___x_6224_ == 0)
{
goto v___jp_6215_;
}
else
{
lean_object* v___x_6225_; lean_object* v___x_6226_; 
lean_dec_ref(v_msgData_6122_);
v___x_6225_ = lean_box(0);
v___x_6226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6226_, 0, v___x_6225_);
return v___x_6226_;
}
}
v___jp_6130_:
{
lean_object* v_currNamespace_6140_; lean_object* v_openDecls_6141_; lean_object* v___x_6142_; lean_object* v___x_6143_; lean_object* v___x_6144_; lean_object* v___x_6145_; lean_object* v_env_6146_; lean_object* v_nextMacroScope_6147_; lean_object* v_ngen_6148_; lean_object* v_auxDeclNGen_6149_; lean_object* v_traceState_6150_; lean_object* v_cache_6151_; lean_object* v_recordedDeps_6152_; lean_object* v_messages_6153_; lean_object* v_infoState_6154_; lean_object* v_snapshotTasks_6155_; lean_object* v___x_6157_; uint8_t v_isShared_6158_; uint8_t v_isSharedCheck_6166_; 
v_currNamespace_6140_ = lean_ctor_get(v_toCold_6138_, 4);
v_openDecls_6141_ = lean_ctor_get(v_toCold_6138_, 5);
lean_inc(v_openDecls_6141_);
lean_inc(v_currNamespace_6140_);
v___x_6142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6142_, 0, v_currNamespace_6140_);
lean_ctor_set(v___x_6142_, 1, v_openDecls_6141_);
v___x_6143_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6143_, 0, v___x_6142_);
lean_ctor_set(v___x_6143_, 1, v___y_6133_);
lean_inc_ref(v___y_6134_);
lean_inc_ref(v___y_6137_);
v___x_6144_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_6144_, 0, v___y_6137_);
lean_ctor_set(v___x_6144_, 1, v___y_6136_);
lean_ctor_set(v___x_6144_, 2, v___y_6132_);
lean_ctor_set(v___x_6144_, 3, v___y_6134_);
lean_ctor_set(v___x_6144_, 4, v___x_6143_);
lean_ctor_set_uint8(v___x_6144_, sizeof(void*)*5, v___y_6131_);
lean_ctor_set_uint8(v___x_6144_, sizeof(void*)*5 + 1, v___y_6135_);
lean_ctor_set_uint8(v___x_6144_, sizeof(void*)*5 + 2, v_isSilent_6124_);
v___x_6145_ = lean_st_ref_take(v___y_6139_);
v_env_6146_ = lean_ctor_get(v___x_6145_, 0);
v_nextMacroScope_6147_ = lean_ctor_get(v___x_6145_, 1);
v_ngen_6148_ = lean_ctor_get(v___x_6145_, 2);
v_auxDeclNGen_6149_ = lean_ctor_get(v___x_6145_, 3);
v_traceState_6150_ = lean_ctor_get(v___x_6145_, 4);
v_cache_6151_ = lean_ctor_get(v___x_6145_, 5);
v_recordedDeps_6152_ = lean_ctor_get(v___x_6145_, 6);
v_messages_6153_ = lean_ctor_get(v___x_6145_, 7);
v_infoState_6154_ = lean_ctor_get(v___x_6145_, 8);
v_snapshotTasks_6155_ = lean_ctor_get(v___x_6145_, 9);
v_isSharedCheck_6166_ = !lean_is_exclusive(v___x_6145_);
if (v_isSharedCheck_6166_ == 0)
{
v___x_6157_ = v___x_6145_;
v_isShared_6158_ = v_isSharedCheck_6166_;
goto v_resetjp_6156_;
}
else
{
lean_inc(v_snapshotTasks_6155_);
lean_inc(v_infoState_6154_);
lean_inc(v_messages_6153_);
lean_inc(v_recordedDeps_6152_);
lean_inc(v_cache_6151_);
lean_inc(v_traceState_6150_);
lean_inc(v_auxDeclNGen_6149_);
lean_inc(v_ngen_6148_);
lean_inc(v_nextMacroScope_6147_);
lean_inc(v_env_6146_);
lean_dec(v___x_6145_);
v___x_6157_ = lean_box(0);
v_isShared_6158_ = v_isSharedCheck_6166_;
goto v_resetjp_6156_;
}
v_resetjp_6156_:
{
lean_object* v___x_6159_; lean_object* v___x_6160_; lean_object* v___x_6162_; 
v___x_6159_ = lean_box(0);
v___x_6160_ = l_Lean_MessageLog_add(v___x_6144_, v_messages_6153_);
if (v_isShared_6158_ == 0)
{
lean_ctor_set(v___x_6157_, 7, v___x_6160_);
v___x_6162_ = v___x_6157_;
goto v_reusejp_6161_;
}
else
{
lean_object* v_reuseFailAlloc_6165_; 
v_reuseFailAlloc_6165_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_6165_, 0, v_env_6146_);
lean_ctor_set(v_reuseFailAlloc_6165_, 1, v_nextMacroScope_6147_);
lean_ctor_set(v_reuseFailAlloc_6165_, 2, v_ngen_6148_);
lean_ctor_set(v_reuseFailAlloc_6165_, 3, v_auxDeclNGen_6149_);
lean_ctor_set(v_reuseFailAlloc_6165_, 4, v_traceState_6150_);
lean_ctor_set(v_reuseFailAlloc_6165_, 5, v_cache_6151_);
lean_ctor_set(v_reuseFailAlloc_6165_, 6, v_recordedDeps_6152_);
lean_ctor_set(v_reuseFailAlloc_6165_, 7, v___x_6160_);
lean_ctor_set(v_reuseFailAlloc_6165_, 8, v_infoState_6154_);
lean_ctor_set(v_reuseFailAlloc_6165_, 9, v_snapshotTasks_6155_);
v___x_6162_ = v_reuseFailAlloc_6165_;
goto v_reusejp_6161_;
}
v_reusejp_6161_:
{
lean_object* v___x_6163_; lean_object* v___x_6164_; 
v___x_6163_ = lean_st_ref_put(v___y_6139_, v___x_6162_);
v___x_6164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6164_, 0, v___x_6159_);
return v___x_6164_;
}
}
}
v___jp_6167_:
{
lean_object* v_fileName_6176_; lean_object* v_fileMap_6177_; lean_object* v___x_6178_; lean_object* v___x_6179_; lean_object* v_a_6180_; lean_object* v___x_6182_; uint8_t v_isShared_6183_; uint8_t v_isSharedCheck_6193_; 
v_fileName_6176_ = lean_ctor_get(v___y_6173_, 0);
v_fileMap_6177_ = lean_ctor_get(v___y_6173_, 1);
v___x_6178_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_6122_);
v___x_6179_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0_spec__0(v___x_6178_, v___y_6125_, v___y_6126_, v___y_6127_, v___y_6128_);
v_a_6180_ = lean_ctor_get(v___x_6179_, 0);
v_isSharedCheck_6193_ = !lean_is_exclusive(v___x_6179_);
if (v_isSharedCheck_6193_ == 0)
{
v___x_6182_ = v___x_6179_;
v_isShared_6183_ = v_isSharedCheck_6193_;
goto v_resetjp_6181_;
}
else
{
lean_inc(v_a_6180_);
lean_dec(v___x_6179_);
v___x_6182_ = lean_box(0);
v_isShared_6183_ = v_isSharedCheck_6193_;
goto v_resetjp_6181_;
}
v_resetjp_6181_:
{
lean_object* v___x_6184_; lean_object* v___x_6185_; lean_object* v___x_6186_; lean_object* v___x_6187_; 
lean_inc_ref_n(v_fileMap_6177_, 2);
v___x_6184_ = l_Lean_FileMap_toPosition(v_fileMap_6177_, v___y_6172_);
lean_dec(v___y_6172_);
v___x_6185_ = l_Lean_FileMap_toPosition(v_fileMap_6177_, v___y_6175_);
lean_dec(v___y_6175_);
v___x_6186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6186_, 0, v___x_6185_);
v___x_6187_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___closed__0));
if (v___y_6170_ == 0)
{
lean_del_object(v___x_6182_);
v___y_6131_ = v___y_6171_;
v___y_6132_ = v___x_6186_;
v___y_6133_ = v_a_6180_;
v___y_6134_ = v___x_6187_;
v___y_6135_ = v___y_6174_;
v___y_6136_ = v___x_6184_;
v___y_6137_ = v_fileName_6176_;
v_toCold_6138_ = v___y_6169_;
v___y_6139_ = v___y_6128_;
goto v___jp_6130_;
}
else
{
uint8_t v___x_6188_; 
lean_inc(v_a_6180_);
lean_inc_ref(v___y_6168_);
v___x_6188_ = l_Lean_MessageData_hasTag(v___y_6168_, v_a_6180_);
if (v___x_6188_ == 0)
{
lean_object* v___x_6189_; lean_object* v___x_6191_; 
lean_dec_ref_known(v___x_6186_, 1);
lean_dec_ref(v___x_6184_);
lean_dec(v_a_6180_);
v___x_6189_ = lean_box(0);
if (v_isShared_6183_ == 0)
{
lean_ctor_set(v___x_6182_, 0, v___x_6189_);
v___x_6191_ = v___x_6182_;
goto v_reusejp_6190_;
}
else
{
lean_object* v_reuseFailAlloc_6192_; 
v_reuseFailAlloc_6192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6192_, 0, v___x_6189_);
v___x_6191_ = v_reuseFailAlloc_6192_;
goto v_reusejp_6190_;
}
v_reusejp_6190_:
{
return v___x_6191_;
}
}
else
{
lean_del_object(v___x_6182_);
v___y_6131_ = v___y_6171_;
v___y_6132_ = v___x_6186_;
v___y_6133_ = v_a_6180_;
v___y_6134_ = v___x_6187_;
v___y_6135_ = v___y_6174_;
v___y_6136_ = v___x_6184_;
v___y_6137_ = v_fileName_6176_;
v_toCold_6138_ = v___y_6169_;
v___y_6139_ = v___y_6128_;
goto v___jp_6130_;
}
}
}
}
v___jp_6194_:
{
lean_object* v___x_6202_; 
v___x_6202_ = l_Lean_Syntax_getTailPos_x3f(v___y_6199_, v___y_6196_);
lean_dec(v___y_6199_);
if (lean_obj_tag(v___x_6202_) == 0)
{
lean_inc(v___y_6201_);
v___y_6168_ = v___y_6197_;
v___y_6169_ = v___y_6198_;
v___y_6170_ = v___y_6195_;
v___y_6171_ = v___y_6196_;
v___y_6172_ = v___y_6201_;
v___y_6173_ = v___y_6198_;
v___y_6174_ = v___y_6200_;
v___y_6175_ = v___y_6201_;
goto v___jp_6167_;
}
else
{
lean_object* v_val_6203_; 
v_val_6203_ = lean_ctor_get(v___x_6202_, 0);
lean_inc(v_val_6203_);
lean_dec_ref_known(v___x_6202_, 1);
v___y_6168_ = v___y_6197_;
v___y_6169_ = v___y_6198_;
v___y_6170_ = v___y_6195_;
v___y_6171_ = v___y_6196_;
v___y_6172_ = v___y_6201_;
v___y_6173_ = v___y_6198_;
v___y_6174_ = v___y_6200_;
v___y_6175_ = v_val_6203_;
goto v___jp_6167_;
}
}
v___jp_6204_:
{
lean_object* v_toCold_6206_; lean_object* v_ref_6207_; uint8_t v_suppressElabErrors_6208_; lean_object* v_ref_6209_; uint8_t v___x_6210_; lean_object* v___f_6211_; lean_object* v___x_6212_; 
v_toCold_6206_ = lean_ctor_get(v___y_6127_, 0);
v_ref_6207_ = lean_ctor_get(v___y_6127_, 2);
v_suppressElabErrors_6208_ = lean_ctor_get_uint8(v___y_6127_, sizeof(void*)*3 + 2);
v_ref_6209_ = l_Lean_replaceRef(v_ref_6121_, v_ref_6207_);
v___x_6210_ = 0;
v___f_6211_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___closed__1));
v___x_6212_ = l_Lean_Syntax_getPos_x3f(v_ref_6209_, v___x_6210_);
if (lean_obj_tag(v___x_6212_) == 0)
{
lean_object* v___x_6213_; 
v___x_6213_ = lean_unsigned_to_nat(0u);
v___y_6195_ = v_suppressElabErrors_6208_;
v___y_6196_ = v___x_6210_;
v___y_6197_ = v___f_6211_;
v___y_6198_ = v_toCold_6206_;
v___y_6199_ = v_ref_6209_;
v___y_6200_ = v___y_6205_;
v___y_6201_ = v___x_6213_;
goto v___jp_6194_;
}
else
{
lean_object* v_val_6214_; 
v_val_6214_ = lean_ctor_get(v___x_6212_, 0);
lean_inc(v_val_6214_);
lean_dec_ref_known(v___x_6212_, 1);
v___y_6195_ = v_suppressElabErrors_6208_;
v___y_6196_ = v___x_6210_;
v___y_6197_ = v___f_6211_;
v___y_6198_ = v_toCold_6206_;
v___y_6199_ = v_ref_6209_;
v___y_6200_ = v___y_6205_;
v___y_6201_ = v_val_6214_;
goto v___jp_6194_;
}
}
v___jp_6215_:
{
uint8_t v___x_6216_; uint8_t v___x_6217_; 
v___x_6216_ = 1;
v___x_6217_ = l_Lean_instBEqMessageSeverity_beq(v_severity_6123_, v___x_6216_);
if (v___x_6217_ == 0)
{
v___y_6205_ = v_severity_6123_;
goto v___jp_6204_;
}
else
{
lean_object* v___x_6218_; lean_object* v___x_6219_; uint8_t v___x_6220_; 
v___x_6218_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_6127_);
v___x_6219_ = l_Lean_warningAsError;
v___x_6220_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7_spec__9(v___x_6218_, v___x_6219_);
lean_dec_ref(v___x_6218_);
if (v___x_6220_ == 0)
{
v___y_6205_ = v_severity_6123_;
goto v___jp_6204_;
}
else
{
uint8_t v___x_6221_; 
v___x_6221_ = 2;
v___y_6205_ = v___x_6221_;
goto v___jp_6204_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___boxed(lean_object* v_ref_6227_, lean_object* v_msgData_6228_, lean_object* v_severity_6229_, lean_object* v_isSilent_6230_, lean_object* v___y_6231_, lean_object* v___y_6232_, lean_object* v___y_6233_, lean_object* v___y_6234_, lean_object* v___y_6235_){
_start:
{
uint8_t v_severity_boxed_6236_; uint8_t v_isSilent_boxed_6237_; lean_object* v_res_6238_; 
v_severity_boxed_6236_ = lean_unbox(v_severity_6229_);
v_isSilent_boxed_6237_ = lean_unbox(v_isSilent_6230_);
v_res_6238_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7(v_ref_6227_, v_msgData_6228_, v_severity_boxed_6236_, v_isSilent_boxed_6237_, v___y_6231_, v___y_6232_, v___y_6233_, v___y_6234_);
lean_dec(v___y_6234_);
lean_dec_ref(v___y_6233_);
lean_dec(v___y_6232_);
lean_dec_ref(v___y_6231_);
lean_dec(v_ref_6227_);
return v_res_6238_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3(lean_object* v_msgData_6239_, uint8_t v_severity_6240_, uint8_t v_isSilent_6241_, lean_object* v___y_6242_, lean_object* v___y_6243_, lean_object* v___y_6244_, lean_object* v___y_6245_){
_start:
{
lean_object* v_ref_6247_; lean_object* v___x_6248_; 
v_ref_6247_ = lean_ctor_get(v___y_6244_, 2);
v___x_6248_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7(v_ref_6247_, v_msgData_6239_, v_severity_6240_, v_isSilent_6241_, v___y_6242_, v___y_6243_, v___y_6244_, v___y_6245_);
return v___x_6248_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_msgData_6249_, lean_object* v_severity_6250_, lean_object* v_isSilent_6251_, lean_object* v___y_6252_, lean_object* v___y_6253_, lean_object* v___y_6254_, lean_object* v___y_6255_, lean_object* v___y_6256_){
_start:
{
uint8_t v_severity_boxed_6257_; uint8_t v_isSilent_boxed_6258_; lean_object* v_res_6259_; 
v_severity_boxed_6257_ = lean_unbox(v_severity_6250_);
v_isSilent_boxed_6258_ = lean_unbox(v_isSilent_6251_);
v_res_6259_ = l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3(v_msgData_6249_, v_severity_boxed_6257_, v_isSilent_boxed_6258_, v___y_6252_, v___y_6253_, v___y_6254_, v___y_6255_);
lean_dec(v___y_6255_);
lean_dec_ref(v___y_6254_);
lean_dec(v___y_6253_);
lean_dec_ref(v___y_6252_);
return v_res_6259_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2(lean_object* v_msgData_6260_, lean_object* v___y_6261_, lean_object* v___y_6262_, lean_object* v___y_6263_, lean_object* v___y_6264_){
_start:
{
uint8_t v___x_6266_; uint8_t v___x_6267_; lean_object* v___x_6268_; 
v___x_6266_ = 2;
v___x_6267_ = 0;
v___x_6268_ = l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3(v_msgData_6260_, v___x_6266_, v___x_6267_, v___y_6261_, v___y_6262_, v___y_6263_, v___y_6264_);
return v___x_6268_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2___boxed(lean_object* v_msgData_6269_, lean_object* v___y_6270_, lean_object* v___y_6271_, lean_object* v___y_6272_, lean_object* v___y_6273_, lean_object* v___y_6274_){
_start:
{
lean_object* v_res_6275_; 
v_res_6275_ = l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2(v_msgData_6269_, v___y_6270_, v___y_6271_, v___y_6272_, v___y_6273_);
lean_dec(v___y_6273_);
lean_dec_ref(v___y_6272_);
lean_dec(v___y_6271_);
lean_dec_ref(v___y_6270_);
return v_res_6275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0(lean_object* v_f_6276_, lean_object* v___y_6277_, lean_object* v___y_6278_, lean_object* v___y_6279_, lean_object* v___y_6280_){
_start:
{
lean_object* v_module_6282_; lean_object* v_const_6283_; lean_object* v_exception_6284_; lean_object* v___x_6285_; lean_object* v___x_6286_; lean_object* v___x_6287_; lean_object* v___x_6288_; lean_object* v___x_6289_; lean_object* v___x_6290_; lean_object* v___x_6291_; lean_object* v___x_6292_; lean_object* v___x_6293_; lean_object* v___x_6294_; lean_object* v___x_6295_; lean_object* v___x_6296_; 
v_module_6282_ = lean_ctor_get(v_f_6276_, 0);
lean_inc(v_module_6282_);
v_const_6283_ = lean_ctor_get(v_f_6276_, 1);
lean_inc(v_const_6283_);
v_exception_6284_ = lean_ctor_get(v_f_6276_, 2);
lean_inc_ref(v_exception_6284_);
lean_dec_ref(v_f_6276_);
v___x_6285_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1);
v___x_6286_ = l_Lean_MessageData_ofName(v_const_6283_);
v___x_6287_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6287_, 0, v___x_6285_);
lean_ctor_set(v___x_6287_, 1, v___x_6286_);
v___x_6288_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3);
v___x_6289_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6289_, 0, v___x_6287_);
lean_ctor_set(v___x_6289_, 1, v___x_6288_);
v___x_6290_ = l_Lean_MessageData_ofName(v_module_6282_);
v___x_6291_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6291_, 0, v___x_6289_);
lean_ctor_set(v___x_6291_, 1, v___x_6290_);
v___x_6292_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5);
v___x_6293_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6293_, 0, v___x_6291_);
lean_ctor_set(v___x_6293_, 1, v___x_6292_);
v___x_6294_ = l_Lean_Exception_toMessageData(v_exception_6284_);
v___x_6295_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6295_, 0, v___x_6293_);
lean_ctor_set(v___x_6295_, 1, v___x_6294_);
v___x_6296_ = l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2(v___x_6295_, v___y_6277_, v___y_6278_, v___y_6279_, v___y_6280_);
return v___x_6296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0___boxed(lean_object* v_f_6297_, lean_object* v___y_6298_, lean_object* v___y_6299_, lean_object* v___y_6300_, lean_object* v___y_6301_, lean_object* v___y_6302_){
_start:
{
lean_object* v_res_6303_; 
v_res_6303_ = l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0(v_f_6297_, v___y_6298_, v___y_6299_, v___y_6300_, v___y_6301_);
lean_dec(v___y_6301_);
lean_dec_ref(v___y_6300_);
lean_dec(v___y_6299_);
lean_dec_ref(v___y_6298_);
return v_res_6303_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__3(lean_object* v_as_6304_, size_t v_i_6305_, size_t v_stop_6306_, lean_object* v_b_6307_, lean_object* v___y_6308_, lean_object* v___y_6309_, lean_object* v___y_6310_, lean_object* v___y_6311_){
_start:
{
uint8_t v___x_6313_; 
v___x_6313_ = lean_usize_dec_eq(v_i_6305_, v_stop_6306_);
if (v___x_6313_ == 0)
{
lean_object* v___x_6314_; lean_object* v___x_6315_; 
v___x_6314_ = lean_array_uget_borrowed(v_as_6304_, v_i_6305_);
lean_inc(v___x_6314_);
v___x_6315_ = l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0(v___x_6314_, v___y_6308_, v___y_6309_, v___y_6310_, v___y_6311_);
if (lean_obj_tag(v___x_6315_) == 0)
{
lean_object* v_a_6316_; size_t v___x_6317_; size_t v___x_6318_; 
v_a_6316_ = lean_ctor_get(v___x_6315_, 0);
lean_inc(v_a_6316_);
lean_dec_ref_known(v___x_6315_, 1);
v___x_6317_ = ((size_t)1ULL);
v___x_6318_ = lean_usize_add(v_i_6305_, v___x_6317_);
v_i_6305_ = v___x_6318_;
v_b_6307_ = v_a_6316_;
goto _start;
}
else
{
return v___x_6315_;
}
}
else
{
lean_object* v___x_6320_; 
v___x_6320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6320_, 0, v_b_6307_);
return v___x_6320_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__3___boxed(lean_object* v_as_6321_, lean_object* v_i_6322_, lean_object* v_stop_6323_, lean_object* v_b_6324_, lean_object* v___y_6325_, lean_object* v___y_6326_, lean_object* v___y_6327_, lean_object* v___y_6328_, lean_object* v___y_6329_){
_start:
{
size_t v_i_boxed_6330_; size_t v_stop_boxed_6331_; lean_object* v_res_6332_; 
v_i_boxed_6330_ = lean_unbox_usize(v_i_6322_);
lean_dec(v_i_6322_);
v_stop_boxed_6331_ = lean_unbox_usize(v_stop_6323_);
lean_dec(v_stop_6323_);
v_res_6332_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__3(v_as_6321_, v_i_boxed_6330_, v_stop_boxed_6331_, v_b_6324_, v___y_6325_, v___y_6326_, v___y_6327_, v___y_6328_);
lean_dec(v___y_6328_);
lean_dec_ref(v___y_6327_);
lean_dec(v___y_6326_);
lean_dec_ref(v___y_6325_);
lean_dec_ref(v_as_6321_);
return v_res_6332_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___redArg(lean_object* v_as_6333_, size_t v_i_6334_, size_t v_stop_6335_, lean_object* v_b_6336_){
_start:
{
uint8_t v___x_6337_; 
v___x_6337_ = lean_usize_dec_eq(v_i_6334_, v_stop_6335_);
if (v___x_6337_ == 0)
{
lean_object* v___x_6338_; lean_object* v___x_6339_; lean_object* v___x_6340_; size_t v___x_6341_; size_t v___x_6342_; 
v___x_6338_ = lean_array_uget_borrowed(v_as_6333_, v_i_6334_);
lean_inc(v___x_6338_);
v___x_6339_ = lean_task_get_own(v___x_6338_);
v___x_6340_ = l_Lean_Meta_LazyDiscrTree_InitResults_append___redArg(v_b_6336_, v___x_6339_);
v___x_6341_ = ((size_t)1ULL);
v___x_6342_ = lean_usize_add(v_i_6334_, v___x_6341_);
v_i_6334_ = v___x_6342_;
v_b_6336_ = v___x_6340_;
goto _start;
}
else
{
return v_b_6336_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_as_6344_, lean_object* v_i_6345_, lean_object* v_stop_6346_, lean_object* v_b_6347_){
_start:
{
size_t v_i_boxed_6348_; size_t v_stop_boxed_6349_; lean_object* v_res_6350_; 
v_i_boxed_6348_ = lean_unbox_usize(v_i_6345_);
lean_dec(v_i_6345_);
v_stop_boxed_6349_ = lean_unbox_usize(v_stop_6346_);
lean_dec(v_stop_6346_);
v_res_6350_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___redArg(v_as_6344_, v_i_boxed_6348_, v_stop_boxed_6349_, v_b_6347_);
lean_dec_ref(v_as_6344_);
return v_res_6350_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___redArg(lean_object* v_z_6351_, lean_object* v_tasks_6352_){
_start:
{
lean_object* v___x_6353_; lean_object* v___x_6354_; uint8_t v___x_6355_; 
v___x_6353_ = lean_unsigned_to_nat(0u);
v___x_6354_ = lean_array_get_size(v_tasks_6352_);
v___x_6355_ = lean_nat_dec_lt(v___x_6353_, v___x_6354_);
if (v___x_6355_ == 0)
{
return v_z_6351_;
}
else
{
size_t v___x_6356_; size_t v___x_6357_; lean_object* v___x_6358_; 
v___x_6356_ = ((size_t)0ULL);
v___x_6357_ = lean_usize_of_nat(v___x_6354_);
v___x_6358_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___redArg(v_tasks_6352_, v___x_6356_, v___x_6357_, v_z_6351_);
return v___x_6358_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___redArg___boxed(lean_object* v_z_6359_, lean_object* v_tasks_6360_){
_start:
{
lean_object* v_res_6361_; 
v_res_6361_ = l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___redArg(v_z_6359_, v_tasks_6360_);
lean_dec_ref(v_tasks_6360_);
return v_res_6361_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_6362_; lean_object* v___x_6363_; lean_object* v___x_6364_; 
v___x_6362_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___closed__0));
v___x_6363_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2);
v___x_6364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6364_, 0, v___x_6363_);
lean_ctor_set(v___x_6364_, 1, v___x_6362_);
return v___x_6364_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_6365_; lean_object* v___x_6366_; lean_object* v___x_6367_; 
v___x_6365_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___closed__0));
v___x_6366_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__0);
v___x_6367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6367_, 0, v___x_6366_);
lean_ctor_set(v___x_6367_, 1, v___x_6365_);
return v___x_6367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg(lean_object* v_cctx_6368_, lean_object* v_ngen_6369_, lean_object* v_env_6370_, lean_object* v_act_6371_, lean_object* v_constantsPerTask_6372_, lean_object* v___y_6373_, lean_object* v___y_6374_, lean_object* v___y_6375_, lean_object* v___y_6376_){
_start:
{
lean_object* v___x_6378_; lean_object* v_moduleData_6379_; lean_object* v_n_6380_; lean_object* v___x_6381_; lean_object* v___x_6382_; lean_object* v___x_6383_; lean_object* v_a_6384_; lean_object* v___x_6386_; uint8_t v_isShared_6387_; uint8_t v_isSharedCheck_6419_; 
v___x_6378_ = l_Lean_Environment_header(v_env_6370_);
v_moduleData_6379_ = lean_ctor_get(v___x_6378_, 7);
lean_inc_ref(v_moduleData_6379_);
lean_dec_ref(v___x_6378_);
v_n_6380_ = lean_array_get_size(v_moduleData_6379_);
lean_dec_ref(v_moduleData_6379_);
v___x_6381_ = lean_unsigned_to_nat(0u);
v___x_6382_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___closed__0));
v___x_6383_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___redArg(v_cctx_6368_, v_env_6370_, v_act_6371_, v_constantsPerTask_6372_, v_n_6380_, v_ngen_6369_, v___x_6382_, v___x_6381_, v___x_6381_, v___x_6381_);
v_a_6384_ = lean_ctor_get(v___x_6383_, 0);
v_isSharedCheck_6419_ = !lean_is_exclusive(v___x_6383_);
if (v_isSharedCheck_6419_ == 0)
{
v___x_6386_ = v___x_6383_;
v_isShared_6387_ = v_isSharedCheck_6419_;
goto v_resetjp_6385_;
}
else
{
lean_inc(v_a_6384_);
lean_dec(v___x_6383_);
v___x_6386_ = lean_box(0);
v_isShared_6387_ = v_isSharedCheck_6419_;
goto v_resetjp_6385_;
}
v_resetjp_6385_:
{
lean_object* v___x_6388_; lean_object* v_r_6389_; lean_object* v_tree_6390_; lean_object* v_errors_6391_; lean_object* v___x_6392_; uint8_t v___x_6393_; 
v___x_6388_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__1);
v_r_6389_ = l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___redArg(v___x_6388_, v_a_6384_);
lean_dec(v_a_6384_);
v_tree_6390_ = lean_ctor_get(v_r_6389_, 0);
lean_inc_ref(v_tree_6390_);
v_errors_6391_ = lean_ctor_get(v_r_6389_, 1);
lean_inc_ref(v_errors_6391_);
lean_dec_ref(v_r_6389_);
v___x_6392_ = lean_array_get_size(v_errors_6391_);
v___x_6393_ = lean_nat_dec_lt(v___x_6381_, v___x_6392_);
if (v___x_6393_ == 0)
{
lean_object* v___x_6394_; lean_object* v___x_6396_; 
lean_dec_ref(v_errors_6391_);
v___x_6394_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy___redArg(v_tree_6390_);
if (v_isShared_6387_ == 0)
{
lean_ctor_set(v___x_6386_, 0, v___x_6394_);
v___x_6396_ = v___x_6386_;
goto v_reusejp_6395_;
}
else
{
lean_object* v_reuseFailAlloc_6397_; 
v_reuseFailAlloc_6397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6397_, 0, v___x_6394_);
v___x_6396_ = v_reuseFailAlloc_6397_;
goto v_reusejp_6395_;
}
v_reusejp_6395_:
{
return v___x_6396_;
}
}
else
{
lean_object* v___x_6398_; size_t v___x_6399_; size_t v___x_6400_; lean_object* v___x_6401_; 
lean_del_object(v___x_6386_);
v___x_6398_ = lean_box(0);
v___x_6399_ = ((size_t)0ULL);
v___x_6400_ = lean_usize_of_nat(v___x_6392_);
v___x_6401_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__3(v_errors_6391_, v___x_6399_, v___x_6400_, v___x_6398_, v___y_6373_, v___y_6374_, v___y_6375_, v___y_6376_);
lean_dec_ref(v_errors_6391_);
if (lean_obj_tag(v___x_6401_) == 0)
{
lean_object* v___x_6403_; uint8_t v_isShared_6404_; uint8_t v_isSharedCheck_6409_; 
v_isSharedCheck_6409_ = !lean_is_exclusive(v___x_6401_);
if (v_isSharedCheck_6409_ == 0)
{
lean_object* v_unused_6410_; 
v_unused_6410_ = lean_ctor_get(v___x_6401_, 0);
lean_dec(v_unused_6410_);
v___x_6403_ = v___x_6401_;
v_isShared_6404_ = v_isSharedCheck_6409_;
goto v_resetjp_6402_;
}
else
{
lean_dec(v___x_6401_);
v___x_6403_ = lean_box(0);
v_isShared_6404_ = v_isSharedCheck_6409_;
goto v_resetjp_6402_;
}
v_resetjp_6402_:
{
lean_object* v___x_6405_; lean_object* v___x_6407_; 
v___x_6405_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy___redArg(v_tree_6390_);
if (v_isShared_6404_ == 0)
{
lean_ctor_set(v___x_6403_, 0, v___x_6405_);
v___x_6407_ = v___x_6403_;
goto v_reusejp_6406_;
}
else
{
lean_object* v_reuseFailAlloc_6408_; 
v_reuseFailAlloc_6408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6408_, 0, v___x_6405_);
v___x_6407_ = v_reuseFailAlloc_6408_;
goto v_reusejp_6406_;
}
v_reusejp_6406_:
{
return v___x_6407_;
}
}
}
else
{
lean_object* v_a_6411_; lean_object* v___x_6413_; uint8_t v_isShared_6414_; uint8_t v_isSharedCheck_6418_; 
lean_dec_ref(v_tree_6390_);
v_a_6411_ = lean_ctor_get(v___x_6401_, 0);
v_isSharedCheck_6418_ = !lean_is_exclusive(v___x_6401_);
if (v_isSharedCheck_6418_ == 0)
{
v___x_6413_ = v___x_6401_;
v_isShared_6414_ = v_isSharedCheck_6418_;
goto v_resetjp_6412_;
}
else
{
lean_inc(v_a_6411_);
lean_dec(v___x_6401_);
v___x_6413_ = lean_box(0);
v_isShared_6414_ = v_isSharedCheck_6418_;
goto v_resetjp_6412_;
}
v_resetjp_6412_:
{
lean_object* v___x_6416_; 
if (v_isShared_6414_ == 0)
{
v___x_6416_ = v___x_6413_;
goto v_reusejp_6415_;
}
else
{
lean_object* v_reuseFailAlloc_6417_; 
v_reuseFailAlloc_6417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6417_, 0, v_a_6411_);
v___x_6416_ = v_reuseFailAlloc_6417_;
goto v_reusejp_6415_;
}
v_reusejp_6415_:
{
return v___x_6416_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___boxed(lean_object* v_cctx_6420_, lean_object* v_ngen_6421_, lean_object* v_env_6422_, lean_object* v_act_6423_, lean_object* v_constantsPerTask_6424_, lean_object* v___y_6425_, lean_object* v___y_6426_, lean_object* v___y_6427_, lean_object* v___y_6428_, lean_object* v___y_6429_){
_start:
{
lean_object* v_res_6430_; 
v_res_6430_ = l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg(v_cctx_6420_, v_ngen_6421_, v_env_6422_, v_act_6423_, v_constantsPerTask_6424_, v___y_6425_, v___y_6426_, v___y_6427_, v___y_6428_);
lean_dec(v___y_6428_);
lean_dec_ref(v___y_6427_);
lean_dec(v___y_6426_);
lean_dec_ref(v___y_6425_);
lean_dec(v_constantsPerTask_6424_);
return v_res_6430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___lam__0(lean_object* v_a_6431_, lean_object* v___x_6432_, lean_object* v_addEntry_6433_, lean_object* v_constantsPerTask_6434_, lean_object* v_droppedEntriesRef_6435_, lean_object* v_droppedKeys_6436_, lean_object* v___y_6437_, lean_object* v___y_6438_, lean_object* v___y_6439_, lean_object* v___y_6440_){
_start:
{
lean_object* v___x_6442_; lean_object* v_env_6443_; lean_object* v___x_6444_; lean_object* v___x_6445_; 
v___x_6442_ = lean_st_ref_get(v___y_6440_);
v_env_6443_ = lean_ctor_get(v___x_6442_, 0);
lean_inc_ref(v_env_6443_);
lean_dec(v___x_6442_);
lean_inc_ref(v_a_6431_);
v___x_6444_ = l_Lean_Meta_LazyDiscrTree_createTreeCtx(v_a_6431_);
v___x_6445_ = l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg(v___x_6444_, v___x_6432_, v_env_6443_, v_addEntry_6433_, v_constantsPerTask_6434_, v___y_6437_, v___y_6438_, v___y_6439_, v___y_6440_);
if (lean_obj_tag(v___x_6445_) == 0)
{
if (lean_obj_tag(v_droppedEntriesRef_6435_) == 1)
{
lean_object* v_a_6446_; lean_object* v_val_6447_; lean_object* v___x_6449_; uint8_t v_isShared_6450_; uint8_t v_isSharedCheck_6480_; 
v_a_6446_ = lean_ctor_get(v___x_6445_, 0);
lean_inc(v_a_6446_);
lean_dec_ref_known(v___x_6445_, 1);
v_val_6447_ = lean_ctor_get(v_droppedEntriesRef_6435_, 0);
v_isSharedCheck_6480_ = !lean_is_exclusive(v_droppedEntriesRef_6435_);
if (v_isSharedCheck_6480_ == 0)
{
v___x_6449_ = v_droppedEntriesRef_6435_;
v_isShared_6450_ = v_isSharedCheck_6480_;
goto v_resetjp_6448_;
}
else
{
lean_inc(v_val_6447_);
lean_dec(v_droppedEntriesRef_6435_);
v___x_6449_ = lean_box(0);
v_isShared_6450_ = v_isSharedCheck_6480_;
goto v_resetjp_6448_;
}
v_resetjp_6448_:
{
lean_object* v___x_6451_; 
v___x_6451_ = l_Lean_Meta_LazyDiscrTree_extractKeys___redArg(v_a_6446_, v_droppedKeys_6436_, v___y_6437_, v___y_6438_, v___y_6439_, v___y_6440_);
lean_dec(v_droppedKeys_6436_);
if (lean_obj_tag(v___x_6451_) == 0)
{
lean_object* v_a_6452_; lean_object* v___x_6454_; uint8_t v_isShared_6455_; uint8_t v_isSharedCheck_6471_; 
v_a_6452_ = lean_ctor_get(v___x_6451_, 0);
v_isSharedCheck_6471_ = !lean_is_exclusive(v___x_6451_);
if (v_isSharedCheck_6471_ == 0)
{
v___x_6454_ = v___x_6451_;
v_isShared_6455_ = v_isSharedCheck_6471_;
goto v_resetjp_6453_;
}
else
{
lean_inc(v_a_6452_);
lean_dec(v___x_6451_);
v___x_6454_ = lean_box(0);
v_isShared_6455_ = v_isSharedCheck_6471_;
goto v_resetjp_6453_;
}
v_resetjp_6453_:
{
lean_object* v_fst_6456_; lean_object* v_snd_6457_; lean_object* v___x_6458_; lean_object* v___y_6460_; 
v_fst_6456_ = lean_ctor_get(v_a_6452_, 0);
lean_inc(v_fst_6456_);
v_snd_6457_ = lean_ctor_get(v_a_6452_, 1);
lean_inc(v_snd_6457_);
lean_dec(v_a_6452_);
v___x_6458_ = lean_st_ref_get(v_val_6447_);
if (lean_obj_tag(v___x_6458_) == 0)
{
lean_object* v___x_6469_; 
v___x_6469_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v___y_6460_ = v___x_6469_;
goto v___jp_6459_;
}
else
{
lean_object* v_val_6470_; 
v_val_6470_ = lean_ctor_get(v___x_6458_, 0);
lean_inc(v_val_6470_);
lean_dec_ref_known(v___x_6458_, 1);
v___y_6460_ = v_val_6470_;
goto v___jp_6459_;
}
v___jp_6459_:
{
lean_object* v___x_6461_; lean_object* v___x_6463_; 
v___x_6461_ = l_Array_append___redArg(v___y_6460_, v_fst_6456_);
lean_dec(v_fst_6456_);
if (v_isShared_6450_ == 0)
{
lean_ctor_set(v___x_6449_, 0, v___x_6461_);
v___x_6463_ = v___x_6449_;
goto v_reusejp_6462_;
}
else
{
lean_object* v_reuseFailAlloc_6468_; 
v_reuseFailAlloc_6468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6468_, 0, v___x_6461_);
v___x_6463_ = v_reuseFailAlloc_6468_;
goto v_reusejp_6462_;
}
v_reusejp_6462_:
{
lean_object* v___x_6464_; lean_object* v___x_6466_; 
v___x_6464_ = lean_st_ref_swap(v_val_6447_, v___x_6463_);
lean_dec(v_val_6447_);
lean_dec(v___x_6464_);
if (v_isShared_6455_ == 0)
{
lean_ctor_set(v___x_6454_, 0, v_snd_6457_);
v___x_6466_ = v___x_6454_;
goto v_reusejp_6465_;
}
else
{
lean_object* v_reuseFailAlloc_6467_; 
v_reuseFailAlloc_6467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6467_, 0, v_snd_6457_);
v___x_6466_ = v_reuseFailAlloc_6467_;
goto v_reusejp_6465_;
}
v_reusejp_6465_:
{
return v___x_6466_;
}
}
}
}
}
else
{
lean_object* v_a_6472_; lean_object* v___x_6474_; uint8_t v_isShared_6475_; uint8_t v_isSharedCheck_6479_; 
lean_del_object(v___x_6449_);
lean_dec(v_val_6447_);
v_a_6472_ = lean_ctor_get(v___x_6451_, 0);
v_isSharedCheck_6479_ = !lean_is_exclusive(v___x_6451_);
if (v_isSharedCheck_6479_ == 0)
{
v___x_6474_ = v___x_6451_;
v_isShared_6475_ = v_isSharedCheck_6479_;
goto v_resetjp_6473_;
}
else
{
lean_inc(v_a_6472_);
lean_dec(v___x_6451_);
v___x_6474_ = lean_box(0);
v_isShared_6475_ = v_isSharedCheck_6479_;
goto v_resetjp_6473_;
}
v_resetjp_6473_:
{
lean_object* v___x_6477_; 
if (v_isShared_6475_ == 0)
{
v___x_6477_ = v___x_6474_;
goto v_reusejp_6476_;
}
else
{
lean_object* v_reuseFailAlloc_6478_; 
v_reuseFailAlloc_6478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6478_, 0, v_a_6472_);
v___x_6477_ = v_reuseFailAlloc_6478_;
goto v_reusejp_6476_;
}
v_reusejp_6476_:
{
return v___x_6477_;
}
}
}
}
}
else
{
lean_object* v_a_6481_; lean_object* v___x_6482_; 
lean_dec(v_droppedEntriesRef_6435_);
v_a_6481_ = lean_ctor_get(v___x_6445_, 0);
lean_inc(v_a_6481_);
lean_dec_ref_known(v___x_6445_, 1);
v___x_6482_ = l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg(v_a_6481_, v_droppedKeys_6436_, v___y_6437_, v___y_6438_, v___y_6439_, v___y_6440_);
return v___x_6482_;
}
}
else
{
lean_dec(v_droppedKeys_6436_);
lean_dec(v_droppedEntriesRef_6435_);
return v___x_6445_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___lam__0___boxed(lean_object* v_a_6483_, lean_object* v___x_6484_, lean_object* v_addEntry_6485_, lean_object* v_constantsPerTask_6486_, lean_object* v_droppedEntriesRef_6487_, lean_object* v_droppedKeys_6488_, lean_object* v___y_6489_, lean_object* v___y_6490_, lean_object* v___y_6491_, lean_object* v___y_6492_, lean_object* v___y_6493_){
_start:
{
lean_object* v_res_6494_; 
v_res_6494_ = l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___lam__0(v_a_6483_, v___x_6484_, v_addEntry_6485_, v_constantsPerTask_6486_, v_droppedEntriesRef_6487_, v_droppedKeys_6488_, v___y_6489_, v___y_6490_, v___y_6491_, v___y_6492_);
lean_dec(v___y_6492_);
lean_dec_ref(v___y_6491_);
lean_dec(v___y_6490_);
lean_dec_ref(v___y_6489_);
lean_dec(v_constantsPerTask_6486_);
lean_dec_ref(v_a_6483_);
return v_res_6494_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg(lean_object* v_ref_6496_, lean_object* v_addEntry_6497_, lean_object* v_droppedKeys_6498_, lean_object* v_constantsPerTask_6499_, lean_object* v_droppedEntriesRef_6500_, lean_object* v_ty_6501_, lean_object* v_a_6502_, lean_object* v_a_6503_, lean_object* v_a_6504_, lean_object* v_a_6505_){
_start:
{
lean_object* v_a_6508_; lean_object* v___x_6530_; lean_object* v_ngen_6531_; lean_object* v_namePrefix_6532_; lean_object* v_idx_6533_; lean_object* v___x_6535_; uint8_t v_isShared_6536_; uint8_t v_isSharedCheck_6579_; 
v___x_6530_ = lean_st_ref_get(v_a_6505_);
v_ngen_6531_ = lean_ctor_get(v___x_6530_, 2);
lean_inc_ref(v_ngen_6531_);
lean_dec(v___x_6530_);
v_namePrefix_6532_ = lean_ctor_get(v_ngen_6531_, 0);
v_idx_6533_ = lean_ctor_get(v_ngen_6531_, 1);
v_isSharedCheck_6579_ = !lean_is_exclusive(v_ngen_6531_);
if (v_isSharedCheck_6579_ == 0)
{
v___x_6535_ = v_ngen_6531_;
v_isShared_6536_ = v_isSharedCheck_6579_;
goto v_resetjp_6534_;
}
else
{
lean_inc(v_idx_6533_);
lean_inc(v_namePrefix_6532_);
lean_dec(v_ngen_6531_);
v___x_6535_ = lean_box(0);
v_isShared_6536_ = v_isSharedCheck_6579_;
goto v_resetjp_6534_;
}
v___jp_6507_:
{
lean_object* v___x_6509_; 
v___x_6509_ = l_Lean_Meta_LazyDiscrTree_getMatch___redArg(v_a_6508_, v_ty_6501_, v_a_6502_, v_a_6503_, v_a_6504_, v_a_6505_);
if (lean_obj_tag(v___x_6509_) == 0)
{
lean_object* v_a_6510_; lean_object* v___x_6512_; uint8_t v_isShared_6513_; uint8_t v_isSharedCheck_6521_; 
v_a_6510_ = lean_ctor_get(v___x_6509_, 0);
v_isSharedCheck_6521_ = !lean_is_exclusive(v___x_6509_);
if (v_isSharedCheck_6521_ == 0)
{
v___x_6512_ = v___x_6509_;
v_isShared_6513_ = v_isSharedCheck_6521_;
goto v_resetjp_6511_;
}
else
{
lean_inc(v_a_6510_);
lean_dec(v___x_6509_);
v___x_6512_ = lean_box(0);
v_isShared_6513_ = v_isSharedCheck_6521_;
goto v_resetjp_6511_;
}
v_resetjp_6511_:
{
lean_object* v_fst_6514_; lean_object* v_snd_6515_; lean_object* v___x_6516_; lean_object* v___x_6517_; lean_object* v___x_6519_; 
v_fst_6514_ = lean_ctor_get(v_a_6510_, 0);
lean_inc(v_fst_6514_);
v_snd_6515_ = lean_ctor_get(v_a_6510_, 1);
lean_inc(v_snd_6515_);
lean_dec(v_a_6510_);
v___x_6516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6516_, 0, v_snd_6515_);
v___x_6517_ = lean_st_ref_swap(v_ref_6496_, v___x_6516_);
lean_dec(v___x_6517_);
if (v_isShared_6513_ == 0)
{
lean_ctor_set(v___x_6512_, 0, v_fst_6514_);
v___x_6519_ = v___x_6512_;
goto v_reusejp_6518_;
}
else
{
lean_object* v_reuseFailAlloc_6520_; 
v_reuseFailAlloc_6520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6520_, 0, v_fst_6514_);
v___x_6519_ = v_reuseFailAlloc_6520_;
goto v_reusejp_6518_;
}
v_reusejp_6518_:
{
return v___x_6519_;
}
}
}
else
{
lean_object* v_a_6522_; lean_object* v___x_6524_; uint8_t v_isShared_6525_; uint8_t v_isSharedCheck_6529_; 
v_a_6522_ = lean_ctor_get(v___x_6509_, 0);
v_isSharedCheck_6529_ = !lean_is_exclusive(v___x_6509_);
if (v_isSharedCheck_6529_ == 0)
{
v___x_6524_ = v___x_6509_;
v_isShared_6525_ = v_isSharedCheck_6529_;
goto v_resetjp_6523_;
}
else
{
lean_inc(v_a_6522_);
lean_dec(v___x_6509_);
v___x_6524_ = lean_box(0);
v_isShared_6525_ = v_isSharedCheck_6529_;
goto v_resetjp_6523_;
}
v_resetjp_6523_:
{
lean_object* v___x_6527_; 
if (v_isShared_6525_ == 0)
{
v___x_6527_ = v___x_6524_;
goto v_reusejp_6526_;
}
else
{
lean_object* v_reuseFailAlloc_6528_; 
v_reuseFailAlloc_6528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6528_, 0, v_a_6522_);
v___x_6527_ = v_reuseFailAlloc_6528_;
goto v_reusejp_6526_;
}
v_reusejp_6526_:
{
return v___x_6527_;
}
}
}
}
v_resetjp_6534_:
{
lean_object* v___x_6537_; lean_object* v___x_6538_; lean_object* v___x_6540_; 
lean_inc(v_idx_6533_);
lean_inc(v_namePrefix_6532_);
v___x_6537_ = l_Lean_Name_num___override(v_namePrefix_6532_, v_idx_6533_);
v___x_6538_ = lean_unsigned_to_nat(1u);
if (v_isShared_6536_ == 0)
{
lean_ctor_set(v___x_6535_, 1, v___x_6538_);
lean_ctor_set(v___x_6535_, 0, v___x_6537_);
v___x_6540_ = v___x_6535_;
goto v_reusejp_6539_;
}
else
{
lean_object* v_reuseFailAlloc_6578_; 
v_reuseFailAlloc_6578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6578_, 0, v___x_6537_);
lean_ctor_set(v_reuseFailAlloc_6578_, 1, v___x_6538_);
v___x_6540_ = v_reuseFailAlloc_6578_;
goto v_reusejp_6539_;
}
v_reusejp_6539_:
{
lean_object* v___f_6541_; lean_object* v___x_6542_; lean_object* v___x_6543_; lean_object* v___x_6544_; lean_object* v_env_6545_; lean_object* v_nextMacroScope_6546_; lean_object* v_auxDeclNGen_6547_; lean_object* v_traceState_6548_; lean_object* v_cache_6549_; lean_object* v_recordedDeps_6550_; lean_object* v_messages_6551_; lean_object* v_infoState_6552_; lean_object* v_snapshotTasks_6553_; lean_object* v___x_6555_; uint8_t v_isShared_6556_; uint8_t v_isSharedCheck_6576_; 
lean_inc_ref(v_a_6504_);
v___f_6541_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___lam__0___boxed), 11, 6);
lean_closure_set(v___f_6541_, 0, v_a_6504_);
lean_closure_set(v___f_6541_, 1, v___x_6540_);
lean_closure_set(v___f_6541_, 2, v_addEntry_6497_);
lean_closure_set(v___f_6541_, 3, v_constantsPerTask_6499_);
lean_closure_set(v___f_6541_, 4, v_droppedEntriesRef_6500_);
lean_closure_set(v___f_6541_, 5, v_droppedKeys_6498_);
v___x_6542_ = lean_nat_add(v_idx_6533_, v___x_6538_);
lean_dec(v_idx_6533_);
v___x_6543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6543_, 0, v_namePrefix_6532_);
lean_ctor_set(v___x_6543_, 1, v___x_6542_);
v___x_6544_ = lean_st_ref_take(v_a_6505_);
v_env_6545_ = lean_ctor_get(v___x_6544_, 0);
v_nextMacroScope_6546_ = lean_ctor_get(v___x_6544_, 1);
v_auxDeclNGen_6547_ = lean_ctor_get(v___x_6544_, 3);
v_traceState_6548_ = lean_ctor_get(v___x_6544_, 4);
v_cache_6549_ = lean_ctor_get(v___x_6544_, 5);
v_recordedDeps_6550_ = lean_ctor_get(v___x_6544_, 6);
v_messages_6551_ = lean_ctor_get(v___x_6544_, 7);
v_infoState_6552_ = lean_ctor_get(v___x_6544_, 8);
v_snapshotTasks_6553_ = lean_ctor_get(v___x_6544_, 9);
v_isSharedCheck_6576_ = !lean_is_exclusive(v___x_6544_);
if (v_isSharedCheck_6576_ == 0)
{
lean_object* v_unused_6577_; 
v_unused_6577_ = lean_ctor_get(v___x_6544_, 2);
lean_dec(v_unused_6577_);
v___x_6555_ = v___x_6544_;
v_isShared_6556_ = v_isSharedCheck_6576_;
goto v_resetjp_6554_;
}
else
{
lean_inc(v_snapshotTasks_6553_);
lean_inc(v_infoState_6552_);
lean_inc(v_messages_6551_);
lean_inc(v_recordedDeps_6550_);
lean_inc(v_cache_6549_);
lean_inc(v_traceState_6548_);
lean_inc(v_auxDeclNGen_6547_);
lean_inc(v_nextMacroScope_6546_);
lean_inc(v_env_6545_);
lean_dec(v___x_6544_);
v___x_6555_ = lean_box(0);
v_isShared_6556_ = v_isSharedCheck_6576_;
goto v_resetjp_6554_;
}
v_resetjp_6554_:
{
lean_object* v___x_6558_; 
if (v_isShared_6556_ == 0)
{
lean_ctor_set(v___x_6555_, 2, v___x_6543_);
v___x_6558_ = v___x_6555_;
goto v_reusejp_6557_;
}
else
{
lean_object* v_reuseFailAlloc_6575_; 
v_reuseFailAlloc_6575_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_6575_, 0, v_env_6545_);
lean_ctor_set(v_reuseFailAlloc_6575_, 1, v_nextMacroScope_6546_);
lean_ctor_set(v_reuseFailAlloc_6575_, 2, v___x_6543_);
lean_ctor_set(v_reuseFailAlloc_6575_, 3, v_auxDeclNGen_6547_);
lean_ctor_set(v_reuseFailAlloc_6575_, 4, v_traceState_6548_);
lean_ctor_set(v_reuseFailAlloc_6575_, 5, v_cache_6549_);
lean_ctor_set(v_reuseFailAlloc_6575_, 6, v_recordedDeps_6550_);
lean_ctor_set(v_reuseFailAlloc_6575_, 7, v_messages_6551_);
lean_ctor_set(v_reuseFailAlloc_6575_, 8, v_infoState_6552_);
lean_ctor_set(v_reuseFailAlloc_6575_, 9, v_snapshotTasks_6553_);
v___x_6558_ = v_reuseFailAlloc_6575_;
goto v_reusejp_6557_;
}
v_reusejp_6557_:
{
lean_object* v___x_6559_; lean_object* v___x_6560_; 
v___x_6559_ = lean_st_ref_put(v_a_6505_, v___x_6558_);
v___x_6560_ = lean_st_ref_get(v_ref_6496_);
if (lean_obj_tag(v___x_6560_) == 0)
{
lean_object* v___x_6561_; lean_object* v___x_6562_; lean_object* v___x_6563_; lean_object* v___x_6564_; 
v___x_6561_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_6504_);
v___x_6562_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___closed__0));
v___x_6563_ = lean_box(0);
v___x_6564_ = l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg(v___x_6562_, v___x_6561_, v___f_6541_, v___x_6563_, v_a_6502_, v_a_6503_, v_a_6504_, v_a_6505_);
lean_dec_ref(v___x_6561_);
if (lean_obj_tag(v___x_6564_) == 0)
{
lean_object* v_a_6565_; 
v_a_6565_ = lean_ctor_get(v___x_6564_, 0);
lean_inc(v_a_6565_);
lean_dec_ref_known(v___x_6564_, 1);
v_a_6508_ = v_a_6565_;
goto v___jp_6507_;
}
else
{
lean_object* v_a_6566_; lean_object* v___x_6568_; uint8_t v_isShared_6569_; uint8_t v_isSharedCheck_6573_; 
lean_dec_ref(v_ty_6501_);
v_a_6566_ = lean_ctor_get(v___x_6564_, 0);
v_isSharedCheck_6573_ = !lean_is_exclusive(v___x_6564_);
if (v_isSharedCheck_6573_ == 0)
{
v___x_6568_ = v___x_6564_;
v_isShared_6569_ = v_isSharedCheck_6573_;
goto v_resetjp_6567_;
}
else
{
lean_inc(v_a_6566_);
lean_dec(v___x_6564_);
v___x_6568_ = lean_box(0);
v_isShared_6569_ = v_isSharedCheck_6573_;
goto v_resetjp_6567_;
}
v_resetjp_6567_:
{
lean_object* v___x_6571_; 
if (v_isShared_6569_ == 0)
{
v___x_6571_ = v___x_6568_;
goto v_reusejp_6570_;
}
else
{
lean_object* v_reuseFailAlloc_6572_; 
v_reuseFailAlloc_6572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6572_, 0, v_a_6566_);
v___x_6571_ = v_reuseFailAlloc_6572_;
goto v_reusejp_6570_;
}
v_reusejp_6570_:
{
return v___x_6571_;
}
}
}
}
else
{
lean_object* v_val_6574_; 
lean_dec_ref(v___f_6541_);
v_val_6574_ = lean_ctor_get(v___x_6560_, 0);
lean_inc(v_val_6574_);
lean_dec_ref_known(v___x_6560_, 1);
v_a_6508_ = v_val_6574_;
goto v___jp_6507_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___boxed(lean_object* v_ref_6580_, lean_object* v_addEntry_6581_, lean_object* v_droppedKeys_6582_, lean_object* v_constantsPerTask_6583_, lean_object* v_droppedEntriesRef_6584_, lean_object* v_ty_6585_, lean_object* v_a_6586_, lean_object* v_a_6587_, lean_object* v_a_6588_, lean_object* v_a_6589_, lean_object* v_a_6590_){
_start:
{
lean_object* v_res_6591_; 
v_res_6591_ = l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg(v_ref_6580_, v_addEntry_6581_, v_droppedKeys_6582_, v_constantsPerTask_6583_, v_droppedEntriesRef_6584_, v_ty_6585_, v_a_6586_, v_a_6587_, v_a_6588_, v_a_6589_);
lean_dec(v_a_6589_);
lean_dec_ref(v_a_6588_);
lean_dec(v_a_6587_);
lean_dec_ref(v_a_6586_);
lean_dec(v_ref_6580_);
return v_res_6591_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches(lean_object* v_00_u03b1_6592_, lean_object* v_ref_6593_, lean_object* v_addEntry_6594_, lean_object* v_droppedKeys_6595_, lean_object* v_constantsPerTask_6596_, lean_object* v_droppedEntriesRef_6597_, lean_object* v_ty_6598_, lean_object* v_a_6599_, lean_object* v_a_6600_, lean_object* v_a_6601_, lean_object* v_a_6602_){
_start:
{
lean_object* v___x_6604_; 
v___x_6604_ = l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg(v_ref_6593_, v_addEntry_6594_, v_droppedKeys_6595_, v_constantsPerTask_6596_, v_droppedEntriesRef_6597_, v_ty_6598_, v_a_6599_, v_a_6600_, v_a_6601_, v_a_6602_);
return v___x_6604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___boxed(lean_object* v_00_u03b1_6605_, lean_object* v_ref_6606_, lean_object* v_addEntry_6607_, lean_object* v_droppedKeys_6608_, lean_object* v_constantsPerTask_6609_, lean_object* v_droppedEntriesRef_6610_, lean_object* v_ty_6611_, lean_object* v_a_6612_, lean_object* v_a_6613_, lean_object* v_a_6614_, lean_object* v_a_6615_, lean_object* v_a_6616_){
_start:
{
lean_object* v_res_6617_; 
v_res_6617_ = l_Lean_Meta_LazyDiscrTree_findImportMatches(v_00_u03b1_6605_, v_ref_6606_, v_addEntry_6607_, v_droppedKeys_6608_, v_constantsPerTask_6609_, v_droppedEntriesRef_6610_, v_ty_6611_, v_a_6612_, v_a_6613_, v_a_6614_, v_a_6615_);
lean_dec(v_a_6615_);
lean_dec_ref(v_a_6614_);
lean_dec(v_a_6613_);
lean_dec_ref(v_a_6612_);
lean_dec(v_ref_6606_);
return v_res_6617_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0(lean_object* v_00_u03b1_6618_, lean_object* v_cctx_6619_, lean_object* v_ngen_6620_, lean_object* v_env_6621_, lean_object* v_act_6622_, lean_object* v_constantsPerTask_6623_, lean_object* v___y_6624_, lean_object* v___y_6625_, lean_object* v___y_6626_, lean_object* v___y_6627_){
_start:
{
lean_object* v___x_6629_; 
v___x_6629_ = l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg(v_cctx_6619_, v_ngen_6620_, v_env_6621_, v_act_6622_, v_constantsPerTask_6623_, v___y_6624_, v___y_6625_, v___y_6626_, v___y_6627_);
return v___x_6629_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___boxed(lean_object* v_00_u03b1_6630_, lean_object* v_cctx_6631_, lean_object* v_ngen_6632_, lean_object* v_env_6633_, lean_object* v_act_6634_, lean_object* v_constantsPerTask_6635_, lean_object* v___y_6636_, lean_object* v___y_6637_, lean_object* v___y_6638_, lean_object* v___y_6639_, lean_object* v___y_6640_){
_start:
{
lean_object* v_res_6641_; 
v_res_6641_ = l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0(v_00_u03b1_6630_, v_cctx_6631_, v_ngen_6632_, v_env_6633_, v_act_6634_, v_constantsPerTask_6635_, v___y_6636_, v___y_6637_, v___y_6638_, v___y_6639_);
lean_dec(v___y_6639_);
lean_dec_ref(v___y_6638_);
lean_dec(v___y_6637_);
lean_dec_ref(v___y_6636_);
lean_dec(v_constantsPerTask_6635_);
return v_res_6641_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1(lean_object* v_00_u03b1_6642_, lean_object* v_cctx_6643_, lean_object* v_env_6644_, lean_object* v_act_6645_, lean_object* v_constantsPerTask_6646_, lean_object* v_n_6647_, lean_object* v_ngen_6648_, lean_object* v_tasks_6649_, lean_object* v_start_6650_, lean_object* v_cnt_6651_, lean_object* v_idx_6652_, lean_object* v___y_6653_, lean_object* v___y_6654_, lean_object* v___y_6655_, lean_object* v___y_6656_){
_start:
{
lean_object* v___x_6658_; 
v___x_6658_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___redArg(v_cctx_6643_, v_env_6644_, v_act_6645_, v_constantsPerTask_6646_, v_n_6647_, v_ngen_6648_, v_tasks_6649_, v_start_6650_, v_cnt_6651_, v_idx_6652_);
return v___x_6658_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___boxed(lean_object* v_00_u03b1_6659_, lean_object* v_cctx_6660_, lean_object* v_env_6661_, lean_object* v_act_6662_, lean_object* v_constantsPerTask_6663_, lean_object* v_n_6664_, lean_object* v_ngen_6665_, lean_object* v_tasks_6666_, lean_object* v_start_6667_, lean_object* v_cnt_6668_, lean_object* v_idx_6669_, lean_object* v___y_6670_, lean_object* v___y_6671_, lean_object* v___y_6672_, lean_object* v___y_6673_, lean_object* v___y_6674_){
_start:
{
lean_object* v_res_6675_; 
v_res_6675_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1(v_00_u03b1_6659_, v_cctx_6660_, v_env_6661_, v_act_6662_, v_constantsPerTask_6663_, v_n_6664_, v_ngen_6665_, v_tasks_6666_, v_start_6667_, v_cnt_6668_, v_idx_6669_, v___y_6670_, v___y_6671_, v___y_6672_, v___y_6673_);
lean_dec(v___y_6673_);
lean_dec_ref(v___y_6672_);
lean_dec(v___y_6671_);
lean_dec_ref(v___y_6670_);
lean_dec(v_constantsPerTask_6663_);
return v_res_6675_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2(lean_object* v_00_u03b1_6676_, lean_object* v_z_6677_, lean_object* v_tasks_6678_){
_start:
{
lean_object* v___x_6679_; 
v___x_6679_ = l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___redArg(v_z_6677_, v_tasks_6678_);
return v___x_6679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___boxed(lean_object* v_00_u03b1_6680_, lean_object* v_z_6681_, lean_object* v_tasks_6682_){
_start:
{
lean_object* v_res_6683_; 
v_res_6683_ = l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2(v_00_u03b1_6680_, v_z_6681_, v_tasks_6682_);
lean_dec_ref(v_tasks_6682_);
return v_res_6683_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5(lean_object* v_00_u03b1_6684_, lean_object* v_as_6685_, size_t v_i_6686_, size_t v_stop_6687_, lean_object* v_b_6688_){
_start:
{
lean_object* v___x_6689_; 
v___x_6689_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___redArg(v_as_6685_, v_i_6686_, v_stop_6687_, v_b_6688_);
return v___x_6689_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___boxed(lean_object* v_00_u03b1_6690_, lean_object* v_as_6691_, lean_object* v_i_6692_, lean_object* v_stop_6693_, lean_object* v_b_6694_){
_start:
{
size_t v_i_boxed_6695_; size_t v_stop_boxed_6696_; lean_object* v_res_6697_; 
v_i_boxed_6695_ = lean_unbox_usize(v_i_6692_);
lean_dec(v_i_6692_);
v_stop_boxed_6696_ = lean_unbox_usize(v_stop_6693_);
lean_dec(v_stop_6693_);
v_res_6697_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5(v_00_u03b1_6690_, v_as_6691_, v_i_boxed_6695_, v_stop_boxed_6696_, v_b_6694_);
lean_dec_ref(v_as_6691_);
return v_res_6697_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___redArg(lean_object* v___y_6698_){
_start:
{
lean_object* v___x_6700_; lean_object* v_ngen_6701_; lean_object* v_namePrefix_6702_; lean_object* v_idx_6703_; lean_object* v___x_6705_; uint8_t v_isShared_6706_; uint8_t v_isSharedCheck_6734_; 
v___x_6700_ = lean_st_ref_get(v___y_6698_);
v_ngen_6701_ = lean_ctor_get(v___x_6700_, 2);
lean_inc_ref(v_ngen_6701_);
lean_dec(v___x_6700_);
v_namePrefix_6702_ = lean_ctor_get(v_ngen_6701_, 0);
v_idx_6703_ = lean_ctor_get(v_ngen_6701_, 1);
v_isSharedCheck_6734_ = !lean_is_exclusive(v_ngen_6701_);
if (v_isSharedCheck_6734_ == 0)
{
v___x_6705_ = v_ngen_6701_;
v_isShared_6706_ = v_isSharedCheck_6734_;
goto v_resetjp_6704_;
}
else
{
lean_inc(v_idx_6703_);
lean_inc(v_namePrefix_6702_);
lean_dec(v_ngen_6701_);
v___x_6705_ = lean_box(0);
v_isShared_6706_ = v_isSharedCheck_6734_;
goto v_resetjp_6704_;
}
v_resetjp_6704_:
{
lean_object* v___x_6707_; lean_object* v___x_6708_; lean_object* v___x_6710_; 
lean_inc(v_idx_6703_);
lean_inc(v_namePrefix_6702_);
v___x_6707_ = l_Lean_Name_num___override(v_namePrefix_6702_, v_idx_6703_);
v___x_6708_ = lean_unsigned_to_nat(1u);
if (v_isShared_6706_ == 0)
{
lean_ctor_set(v___x_6705_, 1, v___x_6708_);
lean_ctor_set(v___x_6705_, 0, v___x_6707_);
v___x_6710_ = v___x_6705_;
goto v_reusejp_6709_;
}
else
{
lean_object* v_reuseFailAlloc_6733_; 
v_reuseFailAlloc_6733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6733_, 0, v___x_6707_);
lean_ctor_set(v_reuseFailAlloc_6733_, 1, v___x_6708_);
v___x_6710_ = v_reuseFailAlloc_6733_;
goto v_reusejp_6709_;
}
v_reusejp_6709_:
{
lean_object* v___x_6711_; lean_object* v___x_6712_; lean_object* v___x_6713_; lean_object* v_env_6714_; lean_object* v_nextMacroScope_6715_; lean_object* v_auxDeclNGen_6716_; lean_object* v_traceState_6717_; lean_object* v_cache_6718_; lean_object* v_recordedDeps_6719_; lean_object* v_messages_6720_; lean_object* v_infoState_6721_; lean_object* v_snapshotTasks_6722_; lean_object* v___x_6724_; uint8_t v_isShared_6725_; uint8_t v_isSharedCheck_6731_; 
v___x_6711_ = lean_nat_add(v_idx_6703_, v___x_6708_);
lean_dec(v_idx_6703_);
v___x_6712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6712_, 0, v_namePrefix_6702_);
lean_ctor_set(v___x_6712_, 1, v___x_6711_);
v___x_6713_ = lean_st_ref_take(v___y_6698_);
v_env_6714_ = lean_ctor_get(v___x_6713_, 0);
v_nextMacroScope_6715_ = lean_ctor_get(v___x_6713_, 1);
v_auxDeclNGen_6716_ = lean_ctor_get(v___x_6713_, 3);
v_traceState_6717_ = lean_ctor_get(v___x_6713_, 4);
v_cache_6718_ = lean_ctor_get(v___x_6713_, 5);
v_recordedDeps_6719_ = lean_ctor_get(v___x_6713_, 6);
v_messages_6720_ = lean_ctor_get(v___x_6713_, 7);
v_infoState_6721_ = lean_ctor_get(v___x_6713_, 8);
v_snapshotTasks_6722_ = lean_ctor_get(v___x_6713_, 9);
v_isSharedCheck_6731_ = !lean_is_exclusive(v___x_6713_);
if (v_isSharedCheck_6731_ == 0)
{
lean_object* v_unused_6732_; 
v_unused_6732_ = lean_ctor_get(v___x_6713_, 2);
lean_dec(v_unused_6732_);
v___x_6724_ = v___x_6713_;
v_isShared_6725_ = v_isSharedCheck_6731_;
goto v_resetjp_6723_;
}
else
{
lean_inc(v_snapshotTasks_6722_);
lean_inc(v_infoState_6721_);
lean_inc(v_messages_6720_);
lean_inc(v_recordedDeps_6719_);
lean_inc(v_cache_6718_);
lean_inc(v_traceState_6717_);
lean_inc(v_auxDeclNGen_6716_);
lean_inc(v_nextMacroScope_6715_);
lean_inc(v_env_6714_);
lean_dec(v___x_6713_);
v___x_6724_ = lean_box(0);
v_isShared_6725_ = v_isSharedCheck_6731_;
goto v_resetjp_6723_;
}
v_resetjp_6723_:
{
lean_object* v___x_6727_; 
if (v_isShared_6725_ == 0)
{
lean_ctor_set(v___x_6724_, 2, v___x_6712_);
v___x_6727_ = v___x_6724_;
goto v_reusejp_6726_;
}
else
{
lean_object* v_reuseFailAlloc_6730_; 
v_reuseFailAlloc_6730_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_6730_, 0, v_env_6714_);
lean_ctor_set(v_reuseFailAlloc_6730_, 1, v_nextMacroScope_6715_);
lean_ctor_set(v_reuseFailAlloc_6730_, 2, v___x_6712_);
lean_ctor_set(v_reuseFailAlloc_6730_, 3, v_auxDeclNGen_6716_);
lean_ctor_set(v_reuseFailAlloc_6730_, 4, v_traceState_6717_);
lean_ctor_set(v_reuseFailAlloc_6730_, 5, v_cache_6718_);
lean_ctor_set(v_reuseFailAlloc_6730_, 6, v_recordedDeps_6719_);
lean_ctor_set(v_reuseFailAlloc_6730_, 7, v_messages_6720_);
lean_ctor_set(v_reuseFailAlloc_6730_, 8, v_infoState_6721_);
lean_ctor_set(v_reuseFailAlloc_6730_, 9, v_snapshotTasks_6722_);
v___x_6727_ = v_reuseFailAlloc_6730_;
goto v_reusejp_6726_;
}
v_reusejp_6726_:
{
lean_object* v___x_6728_; lean_object* v___x_6729_; 
v___x_6728_ = lean_st_ref_put(v___y_6698_, v___x_6727_);
v___x_6729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6729_, 0, v___x_6710_);
return v___x_6729_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___redArg___boxed(lean_object* v___y_6735_, lean_object* v___y_6736_){
_start:
{
lean_object* v_res_6737_; 
v_res_6737_ = l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___redArg(v___y_6735_);
lean_dec(v___y_6735_);
return v_res_6737_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1(lean_object* v___y_6738_, lean_object* v___y_6739_){
_start:
{
lean_object* v___x_6741_; 
v___x_6741_ = l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___redArg(v___y_6739_);
return v___x_6741_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___boxed(lean_object* v___y_6742_, lean_object* v___y_6743_, lean_object* v___y_6744_){
_start:
{
lean_object* v_res_6745_; 
v_res_6745_ = l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1(v___y_6742_, v___y_6743_);
lean_dec(v___y_6743_);
lean_dec_ref(v___y_6742_);
return v_res_6745_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__0(void){
_start:
{
lean_object* v___x_6746_; lean_object* v___x_6747_; lean_object* v___x_6748_; 
v___x_6746_ = lean_unsigned_to_nat(32u);
v___x_6747_ = lean_mk_empty_array_with_capacity(v___x_6746_);
v___x_6748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6748_, 0, v___x_6747_);
return v___x_6748_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__1(void){
_start:
{
size_t v___x_6749_; lean_object* v___x_6750_; lean_object* v___x_6751_; lean_object* v___x_6752_; lean_object* v___x_6753_; lean_object* v___x_6754_; 
v___x_6749_ = ((size_t)5ULL);
v___x_6750_ = lean_unsigned_to_nat(0u);
v___x_6751_ = lean_unsigned_to_nat(32u);
v___x_6752_ = lean_mk_empty_array_with_capacity(v___x_6751_);
v___x_6753_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__0);
v___x_6754_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_6754_, 0, v___x_6753_);
lean_ctor_set(v___x_6754_, 1, v___x_6752_);
lean_ctor_set(v___x_6754_, 2, v___x_6750_);
lean_ctor_set(v___x_6754_, 3, v___x_6750_);
lean_ctor_set_usize(v___x_6754_, 4, v___x_6749_);
return v___x_6754_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__2(void){
_start:
{
lean_object* v___x_6755_; lean_object* v___x_6756_; lean_object* v___x_6757_; lean_object* v___x_6758_; 
v___x_6755_ = lean_box(1);
v___x_6756_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__1);
v___x_6757_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0);
v___x_6758_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6758_, 0, v___x_6757_);
lean_ctor_set(v___x_6758_, 1, v___x_6756_);
lean_ctor_set(v___x_6758_, 2, v___x_6755_);
return v___x_6758_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5(lean_object* v_msgData_6759_, lean_object* v___y_6760_, lean_object* v___y_6761_){
_start:
{
lean_object* v___x_6763_; lean_object* v_toCold_6764_; lean_object* v_env_6765_; lean_object* v_options_6766_; uint8_t v___x_6767_; lean_object* v_env_6768_; lean_object* v___x_6769_; lean_object* v___x_6770_; lean_object* v___x_6771_; lean_object* v___x_6772_; lean_object* v___x_6773_; 
v___x_6763_ = lean_st_ref_get(v___y_6761_);
v_toCold_6764_ = lean_ctor_get(v___y_6760_, 0);
v_env_6765_ = lean_ctor_get(v___x_6763_, 0);
lean_inc_ref(v_env_6765_);
lean_dec(v___x_6763_);
v_options_6766_ = lean_ctor_get(v_toCold_6764_, 2);
v___x_6767_ = 0;
v_env_6768_ = l_Lean_Environment_setRecordingDeps(v_env_6765_, v___x_6767_);
v___x_6769_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1);
v___x_6770_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__2);
lean_inc_ref(v_options_6766_);
v___x_6771_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_6771_, 0, v_env_6768_);
lean_ctor_set(v___x_6771_, 1, v___x_6769_);
lean_ctor_set(v___x_6771_, 2, v___x_6770_);
lean_ctor_set(v___x_6771_, 3, v_options_6766_);
v___x_6772_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_6772_, 0, v___x_6771_);
lean_ctor_set(v___x_6772_, 1, v_msgData_6759_);
v___x_6773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6773_, 0, v___x_6772_);
return v___x_6773_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___boxed(lean_object* v_msgData_6774_, lean_object* v___y_6775_, lean_object* v___y_6776_, lean_object* v___y_6777_){
_start:
{
lean_object* v_res_6778_; 
v_res_6778_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5(v_msgData_6774_, v___y_6775_, v___y_6776_);
lean_dec(v___y_6776_);
lean_dec_ref(v___y_6775_);
return v_res_6778_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4(lean_object* v_ref_6779_, lean_object* v_msgData_6780_, uint8_t v_severity_6781_, uint8_t v_isSilent_6782_, lean_object* v___y_6783_, lean_object* v___y_6784_){
_start:
{
lean_object* v___y_6787_; lean_object* v___y_6788_; lean_object* v___y_6789_; uint8_t v___y_6790_; lean_object* v___y_6791_; lean_object* v___y_6792_; uint8_t v___y_6793_; lean_object* v_toCold_6794_; lean_object* v___y_6795_; lean_object* v___y_6824_; lean_object* v___y_6825_; lean_object* v___y_6826_; uint8_t v___y_6827_; uint8_t v___y_6828_; uint8_t v___y_6829_; lean_object* v___y_6830_; lean_object* v___y_6831_; lean_object* v___y_6851_; lean_object* v___y_6852_; uint8_t v___y_6853_; uint8_t v___y_6854_; lean_object* v___y_6855_; uint8_t v___y_6856_; lean_object* v___y_6857_; uint8_t v___y_6861_; uint8_t v___x_6878_; uint8_t v___x_6879_; 
v___x_6878_ = 2;
v___x_6879_ = l_Lean_instBEqMessageSeverity_beq(v_severity_6781_, v___x_6878_);
if (v___x_6879_ == 0)
{
goto v___jp_6871_;
}
else
{
uint8_t v___x_6880_; 
lean_inc_ref(v_msgData_6780_);
v___x_6880_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_6780_);
if (v___x_6880_ == 0)
{
goto v___jp_6871_;
}
else
{
lean_object* v___x_6881_; lean_object* v___x_6882_; 
lean_dec_ref(v_msgData_6780_);
v___x_6881_ = lean_box(0);
v___x_6882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6882_, 0, v___x_6881_);
return v___x_6882_;
}
}
v___jp_6786_:
{
lean_object* v_currNamespace_6796_; lean_object* v_openDecls_6797_; lean_object* v___x_6798_; lean_object* v___x_6799_; lean_object* v___x_6800_; lean_object* v___x_6801_; lean_object* v_env_6802_; lean_object* v_nextMacroScope_6803_; lean_object* v_ngen_6804_; lean_object* v_auxDeclNGen_6805_; lean_object* v_traceState_6806_; lean_object* v_cache_6807_; lean_object* v_recordedDeps_6808_; lean_object* v_messages_6809_; lean_object* v_infoState_6810_; lean_object* v_snapshotTasks_6811_; lean_object* v___x_6813_; uint8_t v_isShared_6814_; uint8_t v_isSharedCheck_6822_; 
v_currNamespace_6796_ = lean_ctor_get(v_toCold_6794_, 4);
v_openDecls_6797_ = lean_ctor_get(v_toCold_6794_, 5);
lean_inc(v_openDecls_6797_);
lean_inc(v_currNamespace_6796_);
v___x_6798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6798_, 0, v_currNamespace_6796_);
lean_ctor_set(v___x_6798_, 1, v_openDecls_6797_);
v___x_6799_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6799_, 0, v___x_6798_);
lean_ctor_set(v___x_6799_, 1, v___y_6791_);
lean_inc_ref(v___y_6789_);
lean_inc_ref(v___y_6787_);
v___x_6800_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_6800_, 0, v___y_6787_);
lean_ctor_set(v___x_6800_, 1, v___y_6792_);
lean_ctor_set(v___x_6800_, 2, v___y_6788_);
lean_ctor_set(v___x_6800_, 3, v___y_6789_);
lean_ctor_set(v___x_6800_, 4, v___x_6799_);
lean_ctor_set_uint8(v___x_6800_, sizeof(void*)*5, v___y_6793_);
lean_ctor_set_uint8(v___x_6800_, sizeof(void*)*5 + 1, v___y_6790_);
lean_ctor_set_uint8(v___x_6800_, sizeof(void*)*5 + 2, v_isSilent_6782_);
v___x_6801_ = lean_st_ref_take(v___y_6795_);
v_env_6802_ = lean_ctor_get(v___x_6801_, 0);
v_nextMacroScope_6803_ = lean_ctor_get(v___x_6801_, 1);
v_ngen_6804_ = lean_ctor_get(v___x_6801_, 2);
v_auxDeclNGen_6805_ = lean_ctor_get(v___x_6801_, 3);
v_traceState_6806_ = lean_ctor_get(v___x_6801_, 4);
v_cache_6807_ = lean_ctor_get(v___x_6801_, 5);
v_recordedDeps_6808_ = lean_ctor_get(v___x_6801_, 6);
v_messages_6809_ = lean_ctor_get(v___x_6801_, 7);
v_infoState_6810_ = lean_ctor_get(v___x_6801_, 8);
v_snapshotTasks_6811_ = lean_ctor_get(v___x_6801_, 9);
v_isSharedCheck_6822_ = !lean_is_exclusive(v___x_6801_);
if (v_isSharedCheck_6822_ == 0)
{
v___x_6813_ = v___x_6801_;
v_isShared_6814_ = v_isSharedCheck_6822_;
goto v_resetjp_6812_;
}
else
{
lean_inc(v_snapshotTasks_6811_);
lean_inc(v_infoState_6810_);
lean_inc(v_messages_6809_);
lean_inc(v_recordedDeps_6808_);
lean_inc(v_cache_6807_);
lean_inc(v_traceState_6806_);
lean_inc(v_auxDeclNGen_6805_);
lean_inc(v_ngen_6804_);
lean_inc(v_nextMacroScope_6803_);
lean_inc(v_env_6802_);
lean_dec(v___x_6801_);
v___x_6813_ = lean_box(0);
v_isShared_6814_ = v_isSharedCheck_6822_;
goto v_resetjp_6812_;
}
v_resetjp_6812_:
{
lean_object* v___x_6815_; lean_object* v___x_6816_; lean_object* v___x_6818_; 
v___x_6815_ = lean_box(0);
v___x_6816_ = l_Lean_MessageLog_add(v___x_6800_, v_messages_6809_);
if (v_isShared_6814_ == 0)
{
lean_ctor_set(v___x_6813_, 7, v___x_6816_);
v___x_6818_ = v___x_6813_;
goto v_reusejp_6817_;
}
else
{
lean_object* v_reuseFailAlloc_6821_; 
v_reuseFailAlloc_6821_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_6821_, 0, v_env_6802_);
lean_ctor_set(v_reuseFailAlloc_6821_, 1, v_nextMacroScope_6803_);
lean_ctor_set(v_reuseFailAlloc_6821_, 2, v_ngen_6804_);
lean_ctor_set(v_reuseFailAlloc_6821_, 3, v_auxDeclNGen_6805_);
lean_ctor_set(v_reuseFailAlloc_6821_, 4, v_traceState_6806_);
lean_ctor_set(v_reuseFailAlloc_6821_, 5, v_cache_6807_);
lean_ctor_set(v_reuseFailAlloc_6821_, 6, v_recordedDeps_6808_);
lean_ctor_set(v_reuseFailAlloc_6821_, 7, v___x_6816_);
lean_ctor_set(v_reuseFailAlloc_6821_, 8, v_infoState_6810_);
lean_ctor_set(v_reuseFailAlloc_6821_, 9, v_snapshotTasks_6811_);
v___x_6818_ = v_reuseFailAlloc_6821_;
goto v_reusejp_6817_;
}
v_reusejp_6817_:
{
lean_object* v___x_6819_; lean_object* v___x_6820_; 
v___x_6819_ = lean_st_ref_put(v___y_6795_, v___x_6818_);
v___x_6820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6820_, 0, v___x_6815_);
return v___x_6820_;
}
}
}
v___jp_6823_:
{
lean_object* v_fileName_6832_; lean_object* v_fileMap_6833_; lean_object* v___x_6834_; lean_object* v___x_6835_; lean_object* v_a_6836_; lean_object* v___x_6838_; uint8_t v_isShared_6839_; uint8_t v_isSharedCheck_6849_; 
v_fileName_6832_ = lean_ctor_get(v___y_6830_, 0);
v_fileMap_6833_ = lean_ctor_get(v___y_6830_, 1);
v___x_6834_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_6780_);
v___x_6835_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5(v___x_6834_, v___y_6783_, v___y_6784_);
v_a_6836_ = lean_ctor_get(v___x_6835_, 0);
v_isSharedCheck_6849_ = !lean_is_exclusive(v___x_6835_);
if (v_isSharedCheck_6849_ == 0)
{
v___x_6838_ = v___x_6835_;
v_isShared_6839_ = v_isSharedCheck_6849_;
goto v_resetjp_6837_;
}
else
{
lean_inc(v_a_6836_);
lean_dec(v___x_6835_);
v___x_6838_ = lean_box(0);
v_isShared_6839_ = v_isSharedCheck_6849_;
goto v_resetjp_6837_;
}
v_resetjp_6837_:
{
lean_object* v___x_6840_; lean_object* v___x_6841_; lean_object* v___x_6842_; lean_object* v___x_6843_; 
lean_inc_ref_n(v_fileMap_6833_, 2);
v___x_6840_ = l_Lean_FileMap_toPosition(v_fileMap_6833_, v___y_6826_);
lean_dec(v___y_6826_);
v___x_6841_ = l_Lean_FileMap_toPosition(v_fileMap_6833_, v___y_6831_);
lean_dec(v___y_6831_);
v___x_6842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6842_, 0, v___x_6841_);
v___x_6843_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___closed__0));
if (v___y_6829_ == 0)
{
lean_del_object(v___x_6838_);
v___y_6787_ = v_fileName_6832_;
v___y_6788_ = v___x_6842_;
v___y_6789_ = v___x_6843_;
v___y_6790_ = v___y_6827_;
v___y_6791_ = v_a_6836_;
v___y_6792_ = v___x_6840_;
v___y_6793_ = v___y_6828_;
v_toCold_6794_ = v___y_6825_;
v___y_6795_ = v___y_6784_;
goto v___jp_6786_;
}
else
{
uint8_t v___x_6844_; 
lean_inc(v_a_6836_);
lean_inc_ref(v___y_6824_);
v___x_6844_ = l_Lean_MessageData_hasTag(v___y_6824_, v_a_6836_);
if (v___x_6844_ == 0)
{
lean_object* v___x_6845_; lean_object* v___x_6847_; 
lean_dec_ref_known(v___x_6842_, 1);
lean_dec_ref(v___x_6840_);
lean_dec(v_a_6836_);
v___x_6845_ = lean_box(0);
if (v_isShared_6839_ == 0)
{
lean_ctor_set(v___x_6838_, 0, v___x_6845_);
v___x_6847_ = v___x_6838_;
goto v_reusejp_6846_;
}
else
{
lean_object* v_reuseFailAlloc_6848_; 
v_reuseFailAlloc_6848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6848_, 0, v___x_6845_);
v___x_6847_ = v_reuseFailAlloc_6848_;
goto v_reusejp_6846_;
}
v_reusejp_6846_:
{
return v___x_6847_;
}
}
else
{
lean_del_object(v___x_6838_);
v___y_6787_ = v_fileName_6832_;
v___y_6788_ = v___x_6842_;
v___y_6789_ = v___x_6843_;
v___y_6790_ = v___y_6827_;
v___y_6791_ = v_a_6836_;
v___y_6792_ = v___x_6840_;
v___y_6793_ = v___y_6828_;
v_toCold_6794_ = v___y_6825_;
v___y_6795_ = v___y_6784_;
goto v___jp_6786_;
}
}
}
}
v___jp_6850_:
{
lean_object* v___x_6858_; 
v___x_6858_ = l_Lean_Syntax_getTailPos_x3f(v___y_6851_, v___y_6853_);
lean_dec(v___y_6851_);
if (lean_obj_tag(v___x_6858_) == 0)
{
lean_inc(v___y_6857_);
v___y_6824_ = v___y_6852_;
v___y_6825_ = v___y_6855_;
v___y_6826_ = v___y_6857_;
v___y_6827_ = v___y_6856_;
v___y_6828_ = v___y_6853_;
v___y_6829_ = v___y_6854_;
v___y_6830_ = v___y_6855_;
v___y_6831_ = v___y_6857_;
goto v___jp_6823_;
}
else
{
lean_object* v_val_6859_; 
v_val_6859_ = lean_ctor_get(v___x_6858_, 0);
lean_inc(v_val_6859_);
lean_dec_ref_known(v___x_6858_, 1);
v___y_6824_ = v___y_6852_;
v___y_6825_ = v___y_6855_;
v___y_6826_ = v___y_6857_;
v___y_6827_ = v___y_6856_;
v___y_6828_ = v___y_6853_;
v___y_6829_ = v___y_6854_;
v___y_6830_ = v___y_6855_;
v___y_6831_ = v_val_6859_;
goto v___jp_6823_;
}
}
v___jp_6860_:
{
lean_object* v_toCold_6862_; lean_object* v_ref_6863_; uint8_t v_suppressElabErrors_6864_; lean_object* v_ref_6865_; uint8_t v___x_6866_; lean_object* v___f_6867_; lean_object* v___x_6868_; 
v_toCold_6862_ = lean_ctor_get(v___y_6783_, 0);
v_ref_6863_ = lean_ctor_get(v___y_6783_, 2);
v_suppressElabErrors_6864_ = lean_ctor_get_uint8(v___y_6783_, sizeof(void*)*3 + 2);
v_ref_6865_ = l_Lean_replaceRef(v_ref_6779_, v_ref_6863_);
v___x_6866_ = 0;
v___f_6867_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___closed__1));
v___x_6868_ = l_Lean_Syntax_getPos_x3f(v_ref_6865_, v___x_6866_);
if (lean_obj_tag(v___x_6868_) == 0)
{
lean_object* v___x_6869_; 
v___x_6869_ = lean_unsigned_to_nat(0u);
v___y_6851_ = v_ref_6865_;
v___y_6852_ = v___f_6867_;
v___y_6853_ = v___x_6866_;
v___y_6854_ = v_suppressElabErrors_6864_;
v___y_6855_ = v_toCold_6862_;
v___y_6856_ = v___y_6861_;
v___y_6857_ = v___x_6869_;
goto v___jp_6850_;
}
else
{
lean_object* v_val_6870_; 
v_val_6870_ = lean_ctor_get(v___x_6868_, 0);
lean_inc(v_val_6870_);
lean_dec_ref_known(v___x_6868_, 1);
v___y_6851_ = v_ref_6865_;
v___y_6852_ = v___f_6867_;
v___y_6853_ = v___x_6866_;
v___y_6854_ = v_suppressElabErrors_6864_;
v___y_6855_ = v_toCold_6862_;
v___y_6856_ = v___y_6861_;
v___y_6857_ = v_val_6870_;
goto v___jp_6850_;
}
}
v___jp_6871_:
{
uint8_t v___x_6872_; uint8_t v___x_6873_; 
v___x_6872_ = 1;
v___x_6873_ = l_Lean_instBEqMessageSeverity_beq(v_severity_6781_, v___x_6872_);
if (v___x_6873_ == 0)
{
v___y_6861_ = v_severity_6781_;
goto v___jp_6860_;
}
else
{
lean_object* v___x_6874_; lean_object* v___x_6875_; uint8_t v___x_6876_; 
v___x_6874_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_6783_);
v___x_6875_ = l_Lean_warningAsError;
v___x_6876_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7_spec__9(v___x_6874_, v___x_6875_);
lean_dec_ref(v___x_6874_);
if (v___x_6876_ == 0)
{
v___y_6861_ = v_severity_6781_;
goto v___jp_6860_;
}
else
{
uint8_t v___x_6877_; 
v___x_6877_ = 2;
v___y_6861_ = v___x_6877_;
goto v___jp_6860_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_ref_6883_, lean_object* v_msgData_6884_, lean_object* v_severity_6885_, lean_object* v_isSilent_6886_, lean_object* v___y_6887_, lean_object* v___y_6888_, lean_object* v___y_6889_){
_start:
{
uint8_t v_severity_boxed_6890_; uint8_t v_isSilent_boxed_6891_; lean_object* v_res_6892_; 
v_severity_boxed_6890_ = lean_unbox(v_severity_6885_);
v_isSilent_boxed_6891_ = lean_unbox(v_isSilent_6886_);
v_res_6892_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4(v_ref_6883_, v_msgData_6884_, v_severity_boxed_6890_, v_isSilent_boxed_6891_, v___y_6887_, v___y_6888_);
lean_dec(v___y_6888_);
lean_dec_ref(v___y_6887_);
lean_dec(v_ref_6883_);
return v_res_6892_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2(lean_object* v_msgData_6893_, uint8_t v_severity_6894_, uint8_t v_isSilent_6895_, lean_object* v___y_6896_, lean_object* v___y_6897_){
_start:
{
lean_object* v_ref_6899_; lean_object* v___x_6900_; 
v_ref_6899_ = lean_ctor_get(v___y_6896_, 2);
v___x_6900_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4(v_ref_6899_, v_msgData_6893_, v_severity_6894_, v_isSilent_6895_, v___y_6896_, v___y_6897_);
return v___x_6900_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2___boxed(lean_object* v_msgData_6901_, lean_object* v_severity_6902_, lean_object* v_isSilent_6903_, lean_object* v___y_6904_, lean_object* v___y_6905_, lean_object* v___y_6906_){
_start:
{
uint8_t v_severity_boxed_6907_; uint8_t v_isSilent_boxed_6908_; lean_object* v_res_6909_; 
v_severity_boxed_6907_ = lean_unbox(v_severity_6902_);
v_isSilent_boxed_6908_ = lean_unbox(v_isSilent_6903_);
v_res_6909_ = l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2(v_msgData_6901_, v_severity_boxed_6907_, v_isSilent_boxed_6908_, v___y_6904_, v___y_6905_);
lean_dec(v___y_6905_);
lean_dec_ref(v___y_6904_);
return v_res_6909_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0(lean_object* v_msgData_6910_, lean_object* v___y_6911_, lean_object* v___y_6912_){
_start:
{
uint8_t v___x_6914_; uint8_t v___x_6915_; lean_object* v___x_6916_; 
v___x_6914_ = 2;
v___x_6915_ = 0;
v___x_6916_ = l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2(v_msgData_6910_, v___x_6914_, v___x_6915_, v___y_6911_, v___y_6912_);
return v___x_6916_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0___boxed(lean_object* v_msgData_6917_, lean_object* v___y_6918_, lean_object* v___y_6919_, lean_object* v___y_6920_){
_start:
{
lean_object* v_res_6921_; 
v_res_6921_ = l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0(v_msgData_6917_, v___y_6918_, v___y_6919_);
lean_dec(v___y_6919_);
lean_dec_ref(v___y_6918_);
return v_res_6921_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0(lean_object* v_f_6922_, lean_object* v___y_6923_, lean_object* v___y_6924_){
_start:
{
lean_object* v_module_6926_; lean_object* v_const_6927_; lean_object* v_exception_6928_; lean_object* v___x_6929_; lean_object* v___x_6930_; lean_object* v___x_6931_; lean_object* v___x_6932_; lean_object* v___x_6933_; lean_object* v___x_6934_; lean_object* v___x_6935_; lean_object* v___x_6936_; lean_object* v___x_6937_; lean_object* v___x_6938_; lean_object* v___x_6939_; lean_object* v___x_6940_; 
v_module_6926_ = lean_ctor_get(v_f_6922_, 0);
lean_inc(v_module_6926_);
v_const_6927_ = lean_ctor_get(v_f_6922_, 1);
lean_inc(v_const_6927_);
v_exception_6928_ = lean_ctor_get(v_f_6922_, 2);
lean_inc_ref(v_exception_6928_);
lean_dec_ref(v_f_6922_);
v___x_6929_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1);
v___x_6930_ = l_Lean_MessageData_ofName(v_const_6927_);
v___x_6931_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6931_, 0, v___x_6929_);
lean_ctor_set(v___x_6931_, 1, v___x_6930_);
v___x_6932_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3);
v___x_6933_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6933_, 0, v___x_6931_);
lean_ctor_set(v___x_6933_, 1, v___x_6932_);
v___x_6934_ = l_Lean_MessageData_ofName(v_module_6926_);
v___x_6935_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6935_, 0, v___x_6933_);
lean_ctor_set(v___x_6935_, 1, v___x_6934_);
v___x_6936_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5);
v___x_6937_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6937_, 0, v___x_6935_);
lean_ctor_set(v___x_6937_, 1, v___x_6936_);
v___x_6938_ = l_Lean_Exception_toMessageData(v_exception_6928_);
v___x_6939_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6939_, 0, v___x_6937_);
lean_ctor_set(v___x_6939_, 1, v___x_6938_);
v___x_6940_ = l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0(v___x_6939_, v___y_6923_, v___y_6924_);
return v___x_6940_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0___boxed(lean_object* v_f_6941_, lean_object* v___y_6942_, lean_object* v___y_6943_, lean_object* v___y_6944_){
_start:
{
lean_object* v_res_6945_; 
v_res_6945_ = l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0(v_f_6941_, v___y_6942_, v___y_6943_);
lean_dec(v___y_6943_);
lean_dec_ref(v___y_6942_);
return v_res_6945_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__2(lean_object* v_as_6946_, size_t v_i_6947_, size_t v_stop_6948_, lean_object* v_b_6949_, lean_object* v___y_6950_, lean_object* v___y_6951_){
_start:
{
uint8_t v___x_6953_; 
v___x_6953_ = lean_usize_dec_eq(v_i_6947_, v_stop_6948_);
if (v___x_6953_ == 0)
{
lean_object* v___x_6954_; lean_object* v___x_6955_; 
v___x_6954_ = lean_array_uget_borrowed(v_as_6946_, v_i_6947_);
lean_inc(v___x_6954_);
v___x_6955_ = l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0(v___x_6954_, v___y_6950_, v___y_6951_);
if (lean_obj_tag(v___x_6955_) == 0)
{
lean_object* v_a_6956_; size_t v___x_6957_; size_t v___x_6958_; 
v_a_6956_ = lean_ctor_get(v___x_6955_, 0);
lean_inc(v_a_6956_);
lean_dec_ref_known(v___x_6955_, 1);
v___x_6957_ = ((size_t)1ULL);
v___x_6958_ = lean_usize_add(v_i_6947_, v___x_6957_);
v_i_6947_ = v___x_6958_;
v_b_6949_ = v_a_6956_;
goto _start;
}
else
{
return v___x_6955_;
}
}
else
{
lean_object* v___x_6960_; 
v___x_6960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6960_, 0, v_b_6949_);
return v___x_6960_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__2___boxed(lean_object* v_as_6961_, lean_object* v_i_6962_, lean_object* v_stop_6963_, lean_object* v_b_6964_, lean_object* v___y_6965_, lean_object* v___y_6966_, lean_object* v___y_6967_){
_start:
{
size_t v_i_boxed_6968_; size_t v_stop_boxed_6969_; lean_object* v_res_6970_; 
v_i_boxed_6968_ = lean_unbox_usize(v_i_6962_);
lean_dec(v_i_6962_);
v_stop_boxed_6969_ = lean_unbox_usize(v_stop_6963_);
lean_dec(v_stop_6963_);
v_res_6970_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__2(v_as_6961_, v_i_boxed_6968_, v_stop_boxed_6969_, v_b_6964_, v___y_6965_, v___y_6966_);
lean_dec(v___y_6966_);
lean_dec_ref(v___y_6965_);
lean_dec_ref(v_as_6961_);
return v_res_6970_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___redArg(lean_object* v_entriesForConst_6971_, lean_object* v_a_6972_, lean_object* v_a_6973_){
_start:
{
lean_object* v___x_6975_; lean_object* v_env_6976_; lean_object* v___x_6977_; lean_object* v_a_6978_; lean_object* v___x_6980_; uint8_t v_isShared_6981_; uint8_t v_isSharedCheck_7005_; 
v___x_6975_ = lean_st_ref_get(v_a_6973_);
v_env_6976_ = lean_ctor_get(v___x_6975_, 0);
lean_inc_ref(v_env_6976_);
lean_dec(v___x_6975_);
v___x_6977_ = l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___redArg(v_a_6973_);
v_a_6978_ = lean_ctor_get(v___x_6977_, 0);
v_isSharedCheck_7005_ = !lean_is_exclusive(v___x_6977_);
if (v_isSharedCheck_7005_ == 0)
{
v___x_6980_ = v___x_6977_;
v_isShared_6981_ = v_isSharedCheck_7005_;
goto v_resetjp_6979_;
}
else
{
lean_inc(v_a_6978_);
lean_dec(v___x_6977_);
v___x_6980_ = lean_box(0);
v_isShared_6981_ = v_isSharedCheck_7005_;
goto v_resetjp_6979_;
}
v_resetjp_6979_:
{
lean_object* v___x_6982_; lean_object* v___x_6983_; lean_object* v___x_6989_; lean_object* v___x_6990_; lean_object* v___x_6991_; uint8_t v___x_6992_; 
v___x_6982_ = l_Lean_Meta_LazyDiscrTree_ImportData_new();
lean_inc_ref(v_a_6972_);
v___x_6983_ = l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg(v_a_6972_, v_a_6978_, v_env_6976_, v___x_6982_, v_entriesForConst_6971_);
v___x_6989_ = lean_st_ref_get(v___x_6982_);
lean_dec(v___x_6982_);
v___x_6990_ = lean_unsigned_to_nat(0u);
v___x_6991_ = lean_array_get_size(v___x_6989_);
v___x_6992_ = lean_nat_dec_lt(v___x_6990_, v___x_6991_);
if (v___x_6992_ == 0)
{
lean_dec(v___x_6989_);
goto v___jp_6984_;
}
else
{
lean_object* v___x_6993_; size_t v___x_6994_; size_t v___x_6995_; lean_object* v___x_6996_; 
v___x_6993_ = lean_box(0);
v___x_6994_ = ((size_t)0ULL);
v___x_6995_ = lean_usize_of_nat(v___x_6991_);
v___x_6996_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__2(v___x_6989_, v___x_6994_, v___x_6995_, v___x_6993_, v_a_6972_, v_a_6973_);
lean_dec(v___x_6989_);
if (lean_obj_tag(v___x_6996_) == 0)
{
lean_dec_ref_known(v___x_6996_, 1);
goto v___jp_6984_;
}
else
{
lean_object* v_a_6997_; lean_object* v___x_6999_; uint8_t v_isShared_7000_; uint8_t v_isSharedCheck_7004_; 
lean_dec_ref(v___x_6983_);
lean_del_object(v___x_6980_);
v_a_6997_ = lean_ctor_get(v___x_6996_, 0);
v_isSharedCheck_7004_ = !lean_is_exclusive(v___x_6996_);
if (v_isSharedCheck_7004_ == 0)
{
v___x_6999_ = v___x_6996_;
v_isShared_7000_ = v_isSharedCheck_7004_;
goto v_resetjp_6998_;
}
else
{
lean_inc(v_a_6997_);
lean_dec(v___x_6996_);
v___x_6999_ = lean_box(0);
v_isShared_7000_ = v_isSharedCheck_7004_;
goto v_resetjp_6998_;
}
v_resetjp_6998_:
{
lean_object* v___x_7002_; 
if (v_isShared_7000_ == 0)
{
v___x_7002_ = v___x_6999_;
goto v_reusejp_7001_;
}
else
{
lean_object* v_reuseFailAlloc_7003_; 
v_reuseFailAlloc_7003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7003_, 0, v_a_6997_);
v___x_7002_ = v_reuseFailAlloc_7003_;
goto v_reusejp_7001_;
}
v_reusejp_7001_:
{
return v___x_7002_;
}
}
}
}
v___jp_6984_:
{
lean_object* v___x_6985_; lean_object* v___x_6987_; 
v___x_6985_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy___redArg(v___x_6983_);
if (v_isShared_6981_ == 0)
{
lean_ctor_set(v___x_6980_, 0, v___x_6985_);
v___x_6987_ = v___x_6980_;
goto v_reusejp_6986_;
}
else
{
lean_object* v_reuseFailAlloc_6988_; 
v_reuseFailAlloc_6988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6988_, 0, v___x_6985_);
v___x_6987_ = v_reuseFailAlloc_6988_;
goto v_reusejp_6986_;
}
v_reusejp_6986_:
{
return v___x_6987_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___redArg___boxed(lean_object* v_entriesForConst_7006_, lean_object* v_a_7007_, lean_object* v_a_7008_, lean_object* v_a_7009_){
_start:
{
lean_object* v_res_7010_; 
v_res_7010_ = l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___redArg(v_entriesForConst_7006_, v_a_7007_, v_a_7008_);
lean_dec(v_a_7008_);
lean_dec_ref(v_a_7007_);
return v_res_7010_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree(lean_object* v_00_u03b1_7011_, lean_object* v_entriesForConst_7012_, lean_object* v_a_7013_, lean_object* v_a_7014_){
_start:
{
lean_object* v___x_7016_; 
v___x_7016_ = l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___redArg(v_entriesForConst_7012_, v_a_7013_, v_a_7014_);
return v___x_7016_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___boxed(lean_object* v_00_u03b1_7017_, lean_object* v_entriesForConst_7018_, lean_object* v_a_7019_, lean_object* v_a_7020_, lean_object* v_a_7021_){
_start:
{
lean_object* v_res_7022_; 
v_res_7022_ = l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree(v_00_u03b1_7017_, v_entriesForConst_7018_, v_a_7019_, v_a_7020_);
lean_dec(v_a_7020_);
lean_dec_ref(v_a_7019_);
return v_res_7022_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___lam__0(lean_object* v_entriesForConst_7023_, lean_object* v_droppedEntriesRef_7024_, lean_object* v_droppedKeys_7025_, lean_object* v___y_7026_, lean_object* v___y_7027_, lean_object* v___y_7028_, lean_object* v___y_7029_){
_start:
{
lean_object* v_t_7032_; lean_object* v___x_7035_; 
v___x_7035_ = l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___redArg(v_entriesForConst_7023_, v___y_7028_, v___y_7029_);
if (lean_obj_tag(v___x_7035_) == 0)
{
if (lean_obj_tag(v_droppedEntriesRef_7024_) == 1)
{
lean_object* v_a_7036_; lean_object* v_val_7037_; lean_object* v___x_7039_; uint8_t v_isShared_7040_; uint8_t v_isSharedCheck_7063_; 
v_a_7036_ = lean_ctor_get(v___x_7035_, 0);
lean_inc(v_a_7036_);
lean_dec_ref_known(v___x_7035_, 1);
v_val_7037_ = lean_ctor_get(v_droppedEntriesRef_7024_, 0);
v_isSharedCheck_7063_ = !lean_is_exclusive(v_droppedEntriesRef_7024_);
if (v_isSharedCheck_7063_ == 0)
{
v___x_7039_ = v_droppedEntriesRef_7024_;
v_isShared_7040_ = v_isSharedCheck_7063_;
goto v_resetjp_7038_;
}
else
{
lean_inc(v_val_7037_);
lean_dec(v_droppedEntriesRef_7024_);
v___x_7039_ = lean_box(0);
v_isShared_7040_ = v_isSharedCheck_7063_;
goto v_resetjp_7038_;
}
v_resetjp_7038_:
{
lean_object* v___x_7041_; 
v___x_7041_ = l_Lean_Meta_LazyDiscrTree_extractKeys___redArg(v_a_7036_, v_droppedKeys_7025_, v___y_7026_, v___y_7027_, v___y_7028_, v___y_7029_);
lean_dec(v_droppedKeys_7025_);
if (lean_obj_tag(v___x_7041_) == 0)
{
lean_object* v_a_7042_; lean_object* v_fst_7043_; lean_object* v_snd_7044_; lean_object* v___x_7045_; lean_object* v___y_7047_; 
v_a_7042_ = lean_ctor_get(v___x_7041_, 0);
lean_inc(v_a_7042_);
lean_dec_ref_known(v___x_7041_, 1);
v_fst_7043_ = lean_ctor_get(v_a_7042_, 0);
lean_inc(v_fst_7043_);
v_snd_7044_ = lean_ctor_get(v_a_7042_, 1);
lean_inc(v_snd_7044_);
lean_dec(v_a_7042_);
v___x_7045_ = lean_st_ref_get(v_val_7037_);
if (lean_obj_tag(v___x_7045_) == 0)
{
lean_object* v___x_7053_; 
v___x_7053_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v___y_7047_ = v___x_7053_;
goto v___jp_7046_;
}
else
{
lean_object* v_val_7054_; 
v_val_7054_ = lean_ctor_get(v___x_7045_, 0);
lean_inc(v_val_7054_);
lean_dec_ref_known(v___x_7045_, 1);
v___y_7047_ = v_val_7054_;
goto v___jp_7046_;
}
v___jp_7046_:
{
lean_object* v___x_7048_; lean_object* v___x_7050_; 
v___x_7048_ = l_Array_append___redArg(v___y_7047_, v_fst_7043_);
lean_dec(v_fst_7043_);
if (v_isShared_7040_ == 0)
{
lean_ctor_set(v___x_7039_, 0, v___x_7048_);
v___x_7050_ = v___x_7039_;
goto v_reusejp_7049_;
}
else
{
lean_object* v_reuseFailAlloc_7052_; 
v_reuseFailAlloc_7052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7052_, 0, v___x_7048_);
v___x_7050_ = v_reuseFailAlloc_7052_;
goto v_reusejp_7049_;
}
v_reusejp_7049_:
{
lean_object* v___x_7051_; 
v___x_7051_ = lean_st_ref_swap(v_val_7037_, v___x_7050_);
lean_dec(v_val_7037_);
lean_dec(v___x_7051_);
v_t_7032_ = v_snd_7044_;
goto v___jp_7031_;
}
}
}
else
{
lean_object* v_a_7055_; lean_object* v___x_7057_; uint8_t v_isShared_7058_; uint8_t v_isSharedCheck_7062_; 
lean_del_object(v___x_7039_);
lean_dec(v_val_7037_);
v_a_7055_ = lean_ctor_get(v___x_7041_, 0);
v_isSharedCheck_7062_ = !lean_is_exclusive(v___x_7041_);
if (v_isSharedCheck_7062_ == 0)
{
v___x_7057_ = v___x_7041_;
v_isShared_7058_ = v_isSharedCheck_7062_;
goto v_resetjp_7056_;
}
else
{
lean_inc(v_a_7055_);
lean_dec(v___x_7041_);
v___x_7057_ = lean_box(0);
v_isShared_7058_ = v_isSharedCheck_7062_;
goto v_resetjp_7056_;
}
v_resetjp_7056_:
{
lean_object* v___x_7060_; 
if (v_isShared_7058_ == 0)
{
v___x_7060_ = v___x_7057_;
goto v_reusejp_7059_;
}
else
{
lean_object* v_reuseFailAlloc_7061_; 
v_reuseFailAlloc_7061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7061_, 0, v_a_7055_);
v___x_7060_ = v_reuseFailAlloc_7061_;
goto v_reusejp_7059_;
}
v_reusejp_7059_:
{
return v___x_7060_;
}
}
}
}
}
else
{
lean_object* v_a_7064_; lean_object* v___x_7065_; 
lean_dec(v_droppedEntriesRef_7024_);
v_a_7064_ = lean_ctor_get(v___x_7035_, 0);
lean_inc(v_a_7064_);
lean_dec_ref_known(v___x_7035_, 1);
v___x_7065_ = l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg(v_a_7064_, v_droppedKeys_7025_, v___y_7026_, v___y_7027_, v___y_7028_, v___y_7029_);
if (lean_obj_tag(v___x_7065_) == 0)
{
lean_object* v_a_7066_; 
v_a_7066_ = lean_ctor_get(v___x_7065_, 0);
lean_inc(v_a_7066_);
lean_dec_ref_known(v___x_7065_, 1);
v_t_7032_ = v_a_7066_;
goto v___jp_7031_;
}
else
{
lean_object* v_a_7067_; lean_object* v___x_7069_; uint8_t v_isShared_7070_; uint8_t v_isSharedCheck_7074_; 
v_a_7067_ = lean_ctor_get(v___x_7065_, 0);
v_isSharedCheck_7074_ = !lean_is_exclusive(v___x_7065_);
if (v_isSharedCheck_7074_ == 0)
{
v___x_7069_ = v___x_7065_;
v_isShared_7070_ = v_isSharedCheck_7074_;
goto v_resetjp_7068_;
}
else
{
lean_inc(v_a_7067_);
lean_dec(v___x_7065_);
v___x_7069_ = lean_box(0);
v_isShared_7070_ = v_isSharedCheck_7074_;
goto v_resetjp_7068_;
}
v_resetjp_7068_:
{
lean_object* v___x_7072_; 
if (v_isShared_7070_ == 0)
{
v___x_7072_ = v___x_7069_;
goto v_reusejp_7071_;
}
else
{
lean_object* v_reuseFailAlloc_7073_; 
v_reuseFailAlloc_7073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7073_, 0, v_a_7067_);
v___x_7072_ = v_reuseFailAlloc_7073_;
goto v_reusejp_7071_;
}
v_reusejp_7071_:
{
return v___x_7072_;
}
}
}
}
}
else
{
lean_object* v_a_7075_; lean_object* v___x_7077_; uint8_t v_isShared_7078_; uint8_t v_isSharedCheck_7082_; 
lean_dec(v_droppedKeys_7025_);
lean_dec(v_droppedEntriesRef_7024_);
v_a_7075_ = lean_ctor_get(v___x_7035_, 0);
v_isSharedCheck_7082_ = !lean_is_exclusive(v___x_7035_);
if (v_isSharedCheck_7082_ == 0)
{
v___x_7077_ = v___x_7035_;
v_isShared_7078_ = v_isSharedCheck_7082_;
goto v_resetjp_7076_;
}
else
{
lean_inc(v_a_7075_);
lean_dec(v___x_7035_);
v___x_7077_ = lean_box(0);
v_isShared_7078_ = v_isSharedCheck_7082_;
goto v_resetjp_7076_;
}
v_resetjp_7076_:
{
lean_object* v___x_7080_; 
if (v_isShared_7078_ == 0)
{
v___x_7080_ = v___x_7077_;
goto v_reusejp_7079_;
}
else
{
lean_object* v_reuseFailAlloc_7081_; 
v_reuseFailAlloc_7081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7081_, 0, v_a_7075_);
v___x_7080_ = v_reuseFailAlloc_7081_;
goto v_reusejp_7079_;
}
v_reusejp_7079_:
{
return v___x_7080_;
}
}
}
v___jp_7031_:
{
lean_object* v___x_7033_; lean_object* v___x_7034_; 
v___x_7033_ = lean_st_mk_ref(v_t_7032_);
v___x_7034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7034_, 0, v___x_7033_);
return v___x_7034_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___lam__0___boxed(lean_object* v_entriesForConst_7083_, lean_object* v_droppedEntriesRef_7084_, lean_object* v_droppedKeys_7085_, lean_object* v___y_7086_, lean_object* v___y_7087_, lean_object* v___y_7088_, lean_object* v___y_7089_, lean_object* v___y_7090_){
_start:
{
lean_object* v_res_7091_; 
v_res_7091_ = l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___lam__0(v_entriesForConst_7083_, v_droppedEntriesRef_7084_, v_droppedKeys_7085_, v___y_7086_, v___y_7087_, v___y_7088_, v___y_7089_);
lean_dec(v___y_7089_);
lean_dec_ref(v___y_7088_);
lean_dec(v___y_7087_);
lean_dec_ref(v___y_7086_);
return v_res_7091_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg(lean_object* v_entriesForConst_7093_, lean_object* v_droppedKeys_7094_, lean_object* v_droppedEntriesRef_7095_, lean_object* v_a_7096_, lean_object* v_a_7097_, lean_object* v_a_7098_, lean_object* v_a_7099_){
_start:
{
lean_object* v___f_7101_; lean_object* v___x_7102_; lean_object* v___x_7103_; lean_object* v___x_7104_; lean_object* v___x_7105_; 
v___f_7101_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_7101_, 0, v_entriesForConst_7093_);
lean_closure_set(v___f_7101_, 1, v_droppedEntriesRef_7095_);
lean_closure_set(v___f_7101_, 2, v_droppedKeys_7094_);
v___x_7102_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_7098_);
v___x_7103_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___closed__0));
v___x_7104_ = lean_box(0);
v___x_7105_ = l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg(v___x_7103_, v___x_7102_, v___f_7101_, v___x_7104_, v_a_7096_, v_a_7097_, v_a_7098_, v_a_7099_);
lean_dec_ref(v___x_7102_);
return v___x_7105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___boxed(lean_object* v_entriesForConst_7106_, lean_object* v_droppedKeys_7107_, lean_object* v_droppedEntriesRef_7108_, lean_object* v_a_7109_, lean_object* v_a_7110_, lean_object* v_a_7111_, lean_object* v_a_7112_, lean_object* v_a_7113_){
_start:
{
lean_object* v_res_7114_; 
v_res_7114_ = l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg(v_entriesForConst_7106_, v_droppedKeys_7107_, v_droppedEntriesRef_7108_, v_a_7109_, v_a_7110_, v_a_7111_, v_a_7112_);
lean_dec(v_a_7112_);
lean_dec_ref(v_a_7111_);
lean_dec(v_a_7110_);
lean_dec_ref(v_a_7109_);
return v_res_7114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef(lean_object* v_00_u03b1_7115_, lean_object* v_entriesForConst_7116_, lean_object* v_droppedKeys_7117_, lean_object* v_droppedEntriesRef_7118_, lean_object* v_a_7119_, lean_object* v_a_7120_, lean_object* v_a_7121_, lean_object* v_a_7122_){
_start:
{
lean_object* v___x_7124_; 
v___x_7124_ = l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg(v_entriesForConst_7116_, v_droppedKeys_7117_, v_droppedEntriesRef_7118_, v_a_7119_, v_a_7120_, v_a_7121_, v_a_7122_);
return v___x_7124_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___boxed(lean_object* v_00_u03b1_7125_, lean_object* v_entriesForConst_7126_, lean_object* v_droppedKeys_7127_, lean_object* v_droppedEntriesRef_7128_, lean_object* v_a_7129_, lean_object* v_a_7130_, lean_object* v_a_7131_, lean_object* v_a_7132_, lean_object* v_a_7133_){
_start:
{
lean_object* v_res_7134_; 
v_res_7134_ = l_Lean_Meta_LazyDiscrTree_createModuleTreeRef(v_00_u03b1_7125_, v_entriesForConst_7126_, v_droppedKeys_7127_, v_droppedEntriesRef_7128_, v_a_7129_, v_a_7130_, v_a_7131_, v_a_7132_);
lean_dec(v_a_7132_);
lean_dec_ref(v_a_7131_);
lean_dec(v_a_7130_);
lean_dec_ref(v_a_7129_);
return v_res_7134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___lam__0(lean_object* v_moduleRef_7135_, lean_object* v_ty_7136_, lean_object* v___y_7137_, lean_object* v___y_7138_, lean_object* v___y_7139_, lean_object* v___y_7140_){
_start:
{
lean_object* v___x_7142_; lean_object* v___x_7143_; 
v___x_7142_ = lean_st_ref_get(v_moduleRef_7135_);
v___x_7143_ = l_Lean_Meta_LazyDiscrTree_getMatch___redArg(v___x_7142_, v_ty_7136_, v___y_7137_, v___y_7138_, v___y_7139_, v___y_7140_);
if (lean_obj_tag(v___x_7143_) == 0)
{
lean_object* v_a_7144_; lean_object* v___x_7146_; uint8_t v_isShared_7147_; uint8_t v_isSharedCheck_7154_; 
v_a_7144_ = lean_ctor_get(v___x_7143_, 0);
v_isSharedCheck_7154_ = !lean_is_exclusive(v___x_7143_);
if (v_isSharedCheck_7154_ == 0)
{
v___x_7146_ = v___x_7143_;
v_isShared_7147_ = v_isSharedCheck_7154_;
goto v_resetjp_7145_;
}
else
{
lean_inc(v_a_7144_);
lean_dec(v___x_7143_);
v___x_7146_ = lean_box(0);
v_isShared_7147_ = v_isSharedCheck_7154_;
goto v_resetjp_7145_;
}
v_resetjp_7145_:
{
lean_object* v_fst_7148_; lean_object* v_snd_7149_; lean_object* v___x_7150_; lean_object* v___x_7152_; 
v_fst_7148_ = lean_ctor_get(v_a_7144_, 0);
lean_inc(v_fst_7148_);
v_snd_7149_ = lean_ctor_get(v_a_7144_, 1);
lean_inc(v_snd_7149_);
lean_dec(v_a_7144_);
v___x_7150_ = lean_st_ref_swap(v_moduleRef_7135_, v_snd_7149_);
lean_dec(v___x_7150_);
if (v_isShared_7147_ == 0)
{
lean_ctor_set(v___x_7146_, 0, v_fst_7148_);
v___x_7152_ = v___x_7146_;
goto v_reusejp_7151_;
}
else
{
lean_object* v_reuseFailAlloc_7153_; 
v_reuseFailAlloc_7153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7153_, 0, v_fst_7148_);
v___x_7152_ = v_reuseFailAlloc_7153_;
goto v_reusejp_7151_;
}
v_reusejp_7151_:
{
return v___x_7152_;
}
}
}
else
{
lean_object* v_a_7155_; lean_object* v___x_7157_; uint8_t v_isShared_7158_; uint8_t v_isSharedCheck_7162_; 
v_a_7155_ = lean_ctor_get(v___x_7143_, 0);
v_isSharedCheck_7162_ = !lean_is_exclusive(v___x_7143_);
if (v_isSharedCheck_7162_ == 0)
{
v___x_7157_ = v___x_7143_;
v_isShared_7158_ = v_isSharedCheck_7162_;
goto v_resetjp_7156_;
}
else
{
lean_inc(v_a_7155_);
lean_dec(v___x_7143_);
v___x_7157_ = lean_box(0);
v_isShared_7158_ = v_isSharedCheck_7162_;
goto v_resetjp_7156_;
}
v_resetjp_7156_:
{
lean_object* v___x_7160_; 
if (v_isShared_7158_ == 0)
{
v___x_7160_ = v___x_7157_;
goto v_reusejp_7159_;
}
else
{
lean_object* v_reuseFailAlloc_7161_; 
v_reuseFailAlloc_7161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7161_, 0, v_a_7155_);
v___x_7160_ = v_reuseFailAlloc_7161_;
goto v_reusejp_7159_;
}
v_reusejp_7159_:
{
return v___x_7160_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___lam__0___boxed(lean_object* v_moduleRef_7163_, lean_object* v_ty_7164_, lean_object* v___y_7165_, lean_object* v___y_7166_, lean_object* v___y_7167_, lean_object* v___y_7168_, lean_object* v___y_7169_){
_start:
{
lean_object* v_res_7170_; 
v_res_7170_ = l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___lam__0(v_moduleRef_7163_, v_ty_7164_, v___y_7165_, v___y_7166_, v___y_7167_, v___y_7168_);
lean_dec(v___y_7168_);
lean_dec_ref(v___y_7167_);
lean_dec(v___y_7166_);
lean_dec_ref(v___y_7165_);
lean_dec(v_moduleRef_7163_);
return v_res_7170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg(lean_object* v_moduleRef_7172_, lean_object* v_ty_7173_, lean_object* v_a_7174_, lean_object* v_a_7175_, lean_object* v_a_7176_, lean_object* v_a_7177_){
_start:
{
lean_object* v___f_7179_; lean_object* v___x_7180_; lean_object* v___x_7181_; lean_object* v___x_7182_; lean_object* v___x_7183_; 
v___f_7179_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___lam__0___boxed), 7, 2);
lean_closure_set(v___f_7179_, 0, v_moduleRef_7172_);
lean_closure_set(v___f_7179_, 1, v_ty_7173_);
v___x_7180_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_7176_);
v___x_7181_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___closed__0));
v___x_7182_ = lean_box(0);
v___x_7183_ = l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg(v___x_7181_, v___x_7180_, v___f_7179_, v___x_7182_, v_a_7174_, v_a_7175_, v_a_7176_, v_a_7177_);
lean_dec_ref(v___x_7180_);
return v___x_7183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___boxed(lean_object* v_moduleRef_7184_, lean_object* v_ty_7185_, lean_object* v_a_7186_, lean_object* v_a_7187_, lean_object* v_a_7188_, lean_object* v_a_7189_, lean_object* v_a_7190_){
_start:
{
lean_object* v_res_7191_; 
v_res_7191_ = l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg(v_moduleRef_7184_, v_ty_7185_, v_a_7186_, v_a_7187_, v_a_7188_, v_a_7189_);
lean_dec(v_a_7189_);
lean_dec_ref(v_a_7188_);
lean_dec(v_a_7187_);
lean_dec_ref(v_a_7186_);
return v_res_7191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches(lean_object* v_00_u03b1_7192_, lean_object* v_moduleRef_7193_, lean_object* v_ty_7194_, lean_object* v_a_7195_, lean_object* v_a_7196_, lean_object* v_a_7197_, lean_object* v_a_7198_){
_start:
{
lean_object* v___x_7200_; 
v___x_7200_ = l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg(v_moduleRef_7193_, v_ty_7194_, v_a_7195_, v_a_7196_, v_a_7197_, v_a_7198_);
return v___x_7200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___boxed(lean_object* v_00_u03b1_7201_, lean_object* v_moduleRef_7202_, lean_object* v_ty_7203_, lean_object* v_a_7204_, lean_object* v_a_7205_, lean_object* v_a_7206_, lean_object* v_a_7207_, lean_object* v_a_7208_){
_start:
{
lean_object* v_res_7209_; 
v_res_7209_ = l_Lean_Meta_LazyDiscrTree_findModuleMatches(v_00_u03b1_7201_, v_moduleRef_7202_, v_ty_7203_, v_a_7204_, v_a_7205_, v_a_7206_, v_a_7207_);
lean_dec(v_a_7207_);
lean_dec_ref(v_a_7206_);
lean_dec(v_a_7205_);
lean_dec_ref(v_a_7204_);
return v_res_7209_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___redArg(lean_object* v_adjustResult_7210_, lean_object* v_j_7211_, size_t v_sz_7212_, size_t v_i_7213_, lean_object* v_bs_7214_){
_start:
{
uint8_t v___x_7215_; 
v___x_7215_ = lean_usize_dec_lt(v_i_7213_, v_sz_7212_);
if (v___x_7215_ == 0)
{
lean_dec(v_j_7211_);
lean_dec(v_adjustResult_7210_);
return v_bs_7214_;
}
else
{
lean_object* v_v_7216_; lean_object* v___x_7217_; lean_object* v_bs_x27_7218_; lean_object* v___x_7219_; size_t v___x_7220_; size_t v___x_7221_; lean_object* v___x_7222_; 
v_v_7216_ = lean_array_uget(v_bs_7214_, v_i_7213_);
v___x_7217_ = lean_unsigned_to_nat(0u);
v_bs_x27_7218_ = lean_array_uset(v_bs_7214_, v_i_7213_, v___x_7217_);
lean_inc(v_adjustResult_7210_);
lean_inc(v_j_7211_);
v___x_7219_ = lean_apply_2(v_adjustResult_7210_, v_j_7211_, v_v_7216_);
v___x_7220_ = ((size_t)1ULL);
v___x_7221_ = lean_usize_add(v_i_7213_, v___x_7220_);
v___x_7222_ = lean_array_uset(v_bs_x27_7218_, v_i_7213_, v___x_7219_);
v_i_7213_ = v___x_7221_;
v_bs_7214_ = v___x_7222_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___redArg___boxed(lean_object* v_adjustResult_7224_, lean_object* v_j_7225_, lean_object* v_sz_7226_, lean_object* v_i_7227_, lean_object* v_bs_7228_){
_start:
{
size_t v_sz_boxed_7229_; size_t v_i_boxed_7230_; lean_object* v_res_7231_; 
v_sz_boxed_7229_ = lean_unbox_usize(v_sz_7226_);
lean_dec(v_sz_7226_);
v_i_boxed_7230_ = lean_unbox_usize(v_i_7227_);
lean_dec(v_i_7227_);
v_res_7231_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___redArg(v_adjustResult_7224_, v_j_7225_, v_sz_boxed_7229_, v_i_boxed_7230_, v_bs_7228_);
return v_res_7231_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg(lean_object* v_adjustResult_7232_, lean_object* v_j_7233_, lean_object* v_as_7234_, size_t v_i_7235_, size_t v_stop_7236_, lean_object* v_b_7237_){
_start:
{
uint8_t v___x_7238_; 
v___x_7238_ = lean_usize_dec_eq(v_i_7235_, v_stop_7236_);
if (v___x_7238_ == 0)
{
lean_object* v___x_7239_; size_t v_sz_7240_; size_t v___x_7241_; lean_object* v___x_7242_; lean_object* v___x_7243_; size_t v___x_7244_; size_t v___x_7245_; 
v___x_7239_ = lean_array_uget_borrowed(v_as_7234_, v_i_7235_);
v_sz_7240_ = lean_array_size(v___x_7239_);
v___x_7241_ = ((size_t)0ULL);
lean_inc(v___x_7239_);
lean_inc(v_j_7233_);
lean_inc(v_adjustResult_7232_);
v___x_7242_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___redArg(v_adjustResult_7232_, v_j_7233_, v_sz_7240_, v___x_7241_, v___x_7239_);
v___x_7243_ = l_Array_append___redArg(v_b_7237_, v___x_7242_);
lean_dec_ref(v___x_7242_);
v___x_7244_ = ((size_t)1ULL);
v___x_7245_ = lean_usize_add(v_i_7235_, v___x_7244_);
v_i_7235_ = v___x_7245_;
v_b_7237_ = v___x_7243_;
goto _start;
}
else
{
lean_dec(v_j_7233_);
lean_dec(v_adjustResult_7232_);
return v_b_7237_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg___boxed(lean_object* v_adjustResult_7247_, lean_object* v_j_7248_, lean_object* v_as_7249_, lean_object* v_i_7250_, lean_object* v_stop_7251_, lean_object* v_b_7252_){
_start:
{
size_t v_i_boxed_7253_; size_t v_stop_boxed_7254_; lean_object* v_res_7255_; 
v_i_boxed_7253_ = lean_unbox_usize(v_i_7250_);
lean_dec(v_i_7250_);
v_stop_boxed_7254_ = lean_unbox_usize(v_stop_7251_);
lean_dec(v_stop_7251_);
v_res_7255_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg(v_adjustResult_7247_, v_j_7248_, v_as_7249_, v_i_boxed_7253_, v_stop_boxed_7254_, v_b_7252_);
lean_dec_ref(v_as_7249_);
return v_res_7255_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg(lean_object* v_n_7256_, lean_object* v_aa_7257_, lean_object* v_adjustResult_7258_, lean_object* v_n_7259_, lean_object* v_j_7260_, lean_object* v_a_7261_){
_start:
{
lean_object* v_zero_7262_; uint8_t v_isZero_7263_; 
v_zero_7262_ = lean_unsigned_to_nat(0u);
v_isZero_7263_ = lean_nat_dec_eq(v_j_7260_, v_zero_7262_);
if (v_isZero_7263_ == 1)
{
lean_dec(v_j_7260_);
lean_dec(v_adjustResult_7258_);
return v_a_7261_;
}
else
{
lean_object* v_one_7264_; lean_object* v_n_7265_; lean_object* v___x_7266_; lean_object* v___x_7267_; lean_object* v_j_7268_; lean_object* v_b_7269_; lean_object* v___x_7270_; uint8_t v___x_7271_; 
v_one_7264_ = lean_unsigned_to_nat(1u);
v_n_7265_ = lean_nat_sub(v_j_7260_, v_one_7264_);
v___x_7266_ = lean_nat_sub(v_n_7259_, v_j_7260_);
lean_dec(v_j_7260_);
v___x_7267_ = lean_nat_sub(v_n_7256_, v_one_7264_);
v_j_7268_ = lean_nat_sub(v___x_7267_, v___x_7266_);
lean_dec(v___x_7266_);
lean_dec(v___x_7267_);
v_b_7269_ = lean_array_fget_borrowed(v_aa_7257_, v_j_7268_);
v___x_7270_ = lean_array_get_size(v_b_7269_);
v___x_7271_ = lean_nat_dec_lt(v_zero_7262_, v___x_7270_);
if (v___x_7271_ == 0)
{
lean_dec(v_j_7268_);
v_j_7260_ = v_n_7265_;
goto _start;
}
else
{
size_t v___x_7273_; size_t v___x_7274_; lean_object* v___x_7275_; 
v___x_7273_ = ((size_t)0ULL);
v___x_7274_ = lean_usize_of_nat(v___x_7270_);
lean_inc(v_adjustResult_7258_);
v___x_7275_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg(v_adjustResult_7258_, v_j_7268_, v_b_7269_, v___x_7273_, v___x_7274_, v_a_7261_);
v_j_7260_ = v_n_7265_;
v_a_7261_ = v___x_7275_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg___boxed(lean_object* v_n_7277_, lean_object* v_aa_7278_, lean_object* v_adjustResult_7279_, lean_object* v_n_7280_, lean_object* v_j_7281_, lean_object* v_a_7282_){
_start:
{
lean_object* v_res_7283_; 
v_res_7283_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg(v_n_7277_, v_aa_7278_, v_adjustResult_7279_, v_n_7280_, v_j_7281_, v_a_7282_);
lean_dec(v_n_7280_);
lean_dec_ref(v_aa_7278_);
lean_dec(v_n_7277_);
return v_res_7283_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___redArg(lean_object* v_n_7284_, lean_object* v_adjustResult_7285_, lean_object* v_aa_7286_, lean_object* v_n_7287_, lean_object* v_j_7288_, lean_object* v_a_7289_){
_start:
{
lean_object* v_zero_7290_; uint8_t v_isZero_7291_; 
v_zero_7290_ = lean_unsigned_to_nat(0u);
v_isZero_7291_ = lean_nat_dec_eq(v_j_7288_, v_zero_7290_);
if (v_isZero_7291_ == 1)
{
lean_dec(v_adjustResult_7285_);
return v_a_7289_;
}
else
{
lean_object* v_one_7292_; lean_object* v_n_7293_; lean_object* v___x_7294_; lean_object* v___x_7295_; lean_object* v_j_7296_; lean_object* v_b_7297_; lean_object* v___x_7298_; uint8_t v___x_7299_; 
v_one_7292_ = lean_unsigned_to_nat(1u);
v_n_7293_ = lean_nat_sub(v_j_7288_, v_one_7292_);
v___x_7294_ = lean_nat_sub(v_n_7287_, v_j_7288_);
v___x_7295_ = lean_nat_sub(v_n_7284_, v_one_7292_);
v_j_7296_ = lean_nat_sub(v___x_7295_, v___x_7294_);
lean_dec(v___x_7294_);
lean_dec(v___x_7295_);
v_b_7297_ = lean_array_fget_borrowed(v_aa_7286_, v_j_7296_);
v___x_7298_ = lean_array_get_size(v_b_7297_);
v___x_7299_ = lean_nat_dec_lt(v_zero_7290_, v___x_7298_);
if (v___x_7299_ == 0)
{
lean_object* v___x_7300_; 
lean_dec(v_j_7296_);
v___x_7300_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg(v_n_7284_, v_aa_7286_, v_adjustResult_7285_, v_n_7287_, v_n_7293_, v_a_7289_);
return v___x_7300_;
}
else
{
size_t v___x_7301_; size_t v___x_7302_; lean_object* v___x_7303_; lean_object* v___x_7304_; 
v___x_7301_ = ((size_t)0ULL);
v___x_7302_ = lean_usize_of_nat(v___x_7298_);
lean_inc(v_adjustResult_7285_);
v___x_7303_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg(v_adjustResult_7285_, v_j_7296_, v_b_7297_, v___x_7301_, v___x_7302_, v_a_7289_);
v___x_7304_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg(v_n_7284_, v_aa_7286_, v_adjustResult_7285_, v_n_7287_, v_n_7293_, v___x_7303_);
return v___x_7304_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___redArg___boxed(lean_object* v_n_7305_, lean_object* v_adjustResult_7306_, lean_object* v_aa_7307_, lean_object* v_n_7308_, lean_object* v_j_7309_, lean_object* v_a_7310_){
_start:
{
lean_object* v_res_7311_; 
v_res_7311_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___redArg(v_n_7305_, v_adjustResult_7306_, v_aa_7307_, v_n_7308_, v_j_7309_, v_a_7310_);
lean_dec(v_j_7309_);
lean_dec(v_n_7308_);
lean_dec_ref(v_aa_7307_);
lean_dec(v_n_7305_);
return v_res_7311_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___redArg(lean_object* v_adjustResult_7312_, lean_object* v_mr_7313_, lean_object* v_a_7314_){
_start:
{
lean_object* v_n_7315_; lean_object* v___x_7316_; 
v_n_7315_ = lean_array_get_size(v_mr_7313_);
v___x_7316_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___redArg(v_n_7315_, v_adjustResult_7312_, v_mr_7313_, v_n_7315_, v_n_7315_, v_a_7314_);
return v___x_7316_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___redArg___boxed(lean_object* v_adjustResult_7317_, lean_object* v_mr_7318_, lean_object* v_a_7319_){
_start:
{
lean_object* v_res_7320_; 
v_res_7320_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___redArg(v_adjustResult_7317_, v_mr_7318_, v_a_7319_);
lean_dec_ref(v_mr_7318_);
return v_res_7320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt___redArg(lean_object* v_moduleTreeRef_7321_, lean_object* v_ref_7322_, lean_object* v_addEntry_7323_, lean_object* v_droppedKeys_7324_, lean_object* v_constantsPerTask_7325_, lean_object* v_droppedEntriesRef_7326_, lean_object* v_adjustResult_7327_, lean_object* v_ty_7328_, lean_object* v_a_7329_, lean_object* v_a_7330_, lean_object* v_a_7331_, lean_object* v_a_7332_){
_start:
{
lean_object* v___x_7334_; 
lean_inc_ref(v_ty_7328_);
v___x_7334_ = l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg(v_moduleTreeRef_7321_, v_ty_7328_, v_a_7329_, v_a_7330_, v_a_7331_, v_a_7332_);
if (lean_obj_tag(v___x_7334_) == 0)
{
lean_object* v_a_7335_; lean_object* v___x_7336_; 
v_a_7335_ = lean_ctor_get(v___x_7334_, 0);
lean_inc(v_a_7335_);
lean_dec_ref_known(v___x_7334_, 1);
v___x_7336_ = l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg(v_ref_7322_, v_addEntry_7323_, v_droppedKeys_7324_, v_constantsPerTask_7325_, v_droppedEntriesRef_7326_, v_ty_7328_, v_a_7329_, v_a_7330_, v_a_7331_, v_a_7332_);
if (lean_obj_tag(v___x_7336_) == 0)
{
lean_object* v_a_7337_; lean_object* v___x_7339_; uint8_t v_isShared_7340_; uint8_t v_isSharedCheck_7350_; 
v_a_7337_ = lean_ctor_get(v___x_7336_, 0);
v_isSharedCheck_7350_ = !lean_is_exclusive(v___x_7336_);
if (v_isSharedCheck_7350_ == 0)
{
v___x_7339_ = v___x_7336_;
v_isShared_7340_ = v_isSharedCheck_7350_;
goto v_resetjp_7338_;
}
else
{
lean_inc(v_a_7337_);
lean_dec(v___x_7336_);
v___x_7339_ = lean_box(0);
v_isShared_7340_ = v_isSharedCheck_7350_;
goto v_resetjp_7338_;
}
v_resetjp_7338_:
{
lean_object* v___x_7341_; lean_object* v___x_7342_; lean_object* v___x_7343_; lean_object* v___x_7344_; lean_object* v___x_7345_; lean_object* v___x_7346_; lean_object* v___x_7348_; 
v___x_7341_ = l_Lean_Meta_LazyDiscrTree_MatchResult_size___redArg(v_a_7335_);
v___x_7342_ = l_Lean_Meta_LazyDiscrTree_MatchResult_size___redArg(v_a_7337_);
v___x_7343_ = lean_nat_add(v___x_7341_, v___x_7342_);
lean_dec(v___x_7342_);
lean_dec(v___x_7341_);
v___x_7344_ = lean_mk_empty_array_with_capacity(v___x_7343_);
lean_dec(v___x_7343_);
lean_inc(v_adjustResult_7327_);
v___x_7345_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___redArg(v_adjustResult_7327_, v_a_7335_, v___x_7344_);
lean_dec(v_a_7335_);
v___x_7346_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___redArg(v_adjustResult_7327_, v_a_7337_, v___x_7345_);
lean_dec(v_a_7337_);
if (v_isShared_7340_ == 0)
{
lean_ctor_set(v___x_7339_, 0, v___x_7346_);
v___x_7348_ = v___x_7339_;
goto v_reusejp_7347_;
}
else
{
lean_object* v_reuseFailAlloc_7349_; 
v_reuseFailAlloc_7349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7349_, 0, v___x_7346_);
v___x_7348_ = v_reuseFailAlloc_7349_;
goto v_reusejp_7347_;
}
v_reusejp_7347_:
{
return v___x_7348_;
}
}
}
else
{
lean_object* v_a_7351_; lean_object* v___x_7353_; uint8_t v_isShared_7354_; uint8_t v_isSharedCheck_7358_; 
lean_dec(v_a_7335_);
lean_dec(v_adjustResult_7327_);
v_a_7351_ = lean_ctor_get(v___x_7336_, 0);
v_isSharedCheck_7358_ = !lean_is_exclusive(v___x_7336_);
if (v_isSharedCheck_7358_ == 0)
{
v___x_7353_ = v___x_7336_;
v_isShared_7354_ = v_isSharedCheck_7358_;
goto v_resetjp_7352_;
}
else
{
lean_inc(v_a_7351_);
lean_dec(v___x_7336_);
v___x_7353_ = lean_box(0);
v_isShared_7354_ = v_isSharedCheck_7358_;
goto v_resetjp_7352_;
}
v_resetjp_7352_:
{
lean_object* v___x_7356_; 
if (v_isShared_7354_ == 0)
{
v___x_7356_ = v___x_7353_;
goto v_reusejp_7355_;
}
else
{
lean_object* v_reuseFailAlloc_7357_; 
v_reuseFailAlloc_7357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7357_, 0, v_a_7351_);
v___x_7356_ = v_reuseFailAlloc_7357_;
goto v_reusejp_7355_;
}
v_reusejp_7355_:
{
return v___x_7356_;
}
}
}
}
else
{
lean_object* v_a_7359_; lean_object* v___x_7361_; uint8_t v_isShared_7362_; uint8_t v_isSharedCheck_7366_; 
lean_dec_ref(v_ty_7328_);
lean_dec(v_adjustResult_7327_);
lean_dec(v_droppedEntriesRef_7326_);
lean_dec(v_constantsPerTask_7325_);
lean_dec(v_droppedKeys_7324_);
lean_dec_ref(v_addEntry_7323_);
v_a_7359_ = lean_ctor_get(v___x_7334_, 0);
v_isSharedCheck_7366_ = !lean_is_exclusive(v___x_7334_);
if (v_isSharedCheck_7366_ == 0)
{
v___x_7361_ = v___x_7334_;
v_isShared_7362_ = v_isSharedCheck_7366_;
goto v_resetjp_7360_;
}
else
{
lean_inc(v_a_7359_);
lean_dec(v___x_7334_);
v___x_7361_ = lean_box(0);
v_isShared_7362_ = v_isSharedCheck_7366_;
goto v_resetjp_7360_;
}
v_resetjp_7360_:
{
lean_object* v___x_7364_; 
if (v_isShared_7362_ == 0)
{
v___x_7364_ = v___x_7361_;
goto v_reusejp_7363_;
}
else
{
lean_object* v_reuseFailAlloc_7365_; 
v_reuseFailAlloc_7365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7365_, 0, v_a_7359_);
v___x_7364_ = v_reuseFailAlloc_7365_;
goto v_reusejp_7363_;
}
v_reusejp_7363_:
{
return v___x_7364_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt___redArg___boxed(lean_object* v_moduleTreeRef_7367_, lean_object* v_ref_7368_, lean_object* v_addEntry_7369_, lean_object* v_droppedKeys_7370_, lean_object* v_constantsPerTask_7371_, lean_object* v_droppedEntriesRef_7372_, lean_object* v_adjustResult_7373_, lean_object* v_ty_7374_, lean_object* v_a_7375_, lean_object* v_a_7376_, lean_object* v_a_7377_, lean_object* v_a_7378_, lean_object* v_a_7379_){
_start:
{
lean_object* v_res_7380_; 
v_res_7380_ = l_Lean_Meta_LazyDiscrTree_findMatchesExt___redArg(v_moduleTreeRef_7367_, v_ref_7368_, v_addEntry_7369_, v_droppedKeys_7370_, v_constantsPerTask_7371_, v_droppedEntriesRef_7372_, v_adjustResult_7373_, v_ty_7374_, v_a_7375_, v_a_7376_, v_a_7377_, v_a_7378_);
lean_dec(v_a_7378_);
lean_dec_ref(v_a_7377_);
lean_dec(v_a_7376_);
lean_dec_ref(v_a_7375_);
lean_dec(v_ref_7368_);
return v_res_7380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt(lean_object* v_00_u03b1_7381_, lean_object* v_00_u03b2_7382_, lean_object* v_moduleTreeRef_7383_, lean_object* v_ref_7384_, lean_object* v_addEntry_7385_, lean_object* v_droppedKeys_7386_, lean_object* v_constantsPerTask_7387_, lean_object* v_droppedEntriesRef_7388_, lean_object* v_adjustResult_7389_, lean_object* v_ty_7390_, lean_object* v_a_7391_, lean_object* v_a_7392_, lean_object* v_a_7393_, lean_object* v_a_7394_){
_start:
{
lean_object* v___x_7396_; 
v___x_7396_ = l_Lean_Meta_LazyDiscrTree_findMatchesExt___redArg(v_moduleTreeRef_7383_, v_ref_7384_, v_addEntry_7385_, v_droppedKeys_7386_, v_constantsPerTask_7387_, v_droppedEntriesRef_7388_, v_adjustResult_7389_, v_ty_7390_, v_a_7391_, v_a_7392_, v_a_7393_, v_a_7394_);
return v___x_7396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt___boxed(lean_object* v_00_u03b1_7397_, lean_object* v_00_u03b2_7398_, lean_object* v_moduleTreeRef_7399_, lean_object* v_ref_7400_, lean_object* v_addEntry_7401_, lean_object* v_droppedKeys_7402_, lean_object* v_constantsPerTask_7403_, lean_object* v_droppedEntriesRef_7404_, lean_object* v_adjustResult_7405_, lean_object* v_ty_7406_, lean_object* v_a_7407_, lean_object* v_a_7408_, lean_object* v_a_7409_, lean_object* v_a_7410_, lean_object* v_a_7411_){
_start:
{
lean_object* v_res_7412_; 
v_res_7412_ = l_Lean_Meta_LazyDiscrTree_findMatchesExt(v_00_u03b1_7397_, v_00_u03b2_7398_, v_moduleTreeRef_7399_, v_ref_7400_, v_addEntry_7401_, v_droppedKeys_7402_, v_constantsPerTask_7403_, v_droppedEntriesRef_7404_, v_adjustResult_7405_, v_ty_7406_, v_a_7407_, v_a_7408_, v_a_7409_, v_a_7410_);
lean_dec(v_a_7410_);
lean_dec_ref(v_a_7409_);
lean_dec(v_a_7408_);
lean_dec_ref(v_a_7407_);
lean_dec(v_ref_7400_);
return v_res_7412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0(lean_object* v_00_u03b1_7413_, lean_object* v_00_u03b2_7414_, lean_object* v_adjustResult_7415_, lean_object* v_mr_7416_, lean_object* v_a_7417_){
_start:
{
lean_object* v___x_7418_; 
v___x_7418_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___redArg(v_adjustResult_7415_, v_mr_7416_, v_a_7417_);
return v___x_7418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___boxed(lean_object* v_00_u03b1_7419_, lean_object* v_00_u03b2_7420_, lean_object* v_adjustResult_7421_, lean_object* v_mr_7422_, lean_object* v_a_7423_){
_start:
{
lean_object* v_res_7424_; 
v_res_7424_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0(v_00_u03b1_7419_, v_00_u03b2_7420_, v_adjustResult_7421_, v_mr_7422_, v_a_7423_);
lean_dec_ref(v_mr_7422_);
return v_res_7424_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0(lean_object* v_00_u03b1_7425_, lean_object* v_00_u03b2_7426_, lean_object* v_adjustResult_7427_, lean_object* v_j_7428_, size_t v_sz_7429_, size_t v_i_7430_, lean_object* v_bs_7431_){
_start:
{
lean_object* v___x_7432_; 
v___x_7432_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___redArg(v_adjustResult_7427_, v_j_7428_, v_sz_7429_, v_i_7430_, v_bs_7431_);
return v___x_7432_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___boxed(lean_object* v_00_u03b1_7433_, lean_object* v_00_u03b2_7434_, lean_object* v_adjustResult_7435_, lean_object* v_j_7436_, lean_object* v_sz_7437_, lean_object* v_i_7438_, lean_object* v_bs_7439_){
_start:
{
size_t v_sz_boxed_7440_; size_t v_i_boxed_7441_; lean_object* v_res_7442_; 
v_sz_boxed_7440_ = lean_unbox_usize(v_sz_7437_);
lean_dec(v_sz_7437_);
v_i_boxed_7441_ = lean_unbox_usize(v_i_7438_);
lean_dec(v_i_7438_);
v_res_7442_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0(v_00_u03b1_7433_, v_00_u03b2_7434_, v_adjustResult_7435_, v_j_7436_, v_sz_boxed_7440_, v_i_boxed_7441_, v_bs_7439_);
return v_res_7442_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1(lean_object* v_00_u03b1_7443_, lean_object* v_00_u03b2_7444_, lean_object* v_adjustResult_7445_, lean_object* v_j_7446_, lean_object* v_as_7447_, size_t v_i_7448_, size_t v_stop_7449_, lean_object* v_b_7450_){
_start:
{
lean_object* v___x_7451_; 
v___x_7451_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg(v_adjustResult_7445_, v_j_7446_, v_as_7447_, v_i_7448_, v_stop_7449_, v_b_7450_);
return v___x_7451_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___boxed(lean_object* v_00_u03b1_7452_, lean_object* v_00_u03b2_7453_, lean_object* v_adjustResult_7454_, lean_object* v_j_7455_, lean_object* v_as_7456_, lean_object* v_i_7457_, lean_object* v_stop_7458_, lean_object* v_b_7459_){
_start:
{
size_t v_i_boxed_7460_; size_t v_stop_boxed_7461_; lean_object* v_res_7462_; 
v_i_boxed_7460_ = lean_unbox_usize(v_i_7457_);
lean_dec(v_i_7457_);
v_stop_boxed_7461_ = lean_unbox_usize(v_stop_7458_);
lean_dec(v_stop_7458_);
v_res_7462_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1(v_00_u03b1_7452_, v_00_u03b2_7453_, v_adjustResult_7454_, v_j_7455_, v_as_7456_, v_i_boxed_7460_, v_stop_boxed_7461_, v_b_7459_);
lean_dec_ref(v_as_7456_);
return v_res_7462_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2(lean_object* v_00_u03b2_7463_, lean_object* v_n_7464_, lean_object* v_00_u03b1_7465_, lean_object* v_adjustResult_7466_, lean_object* v_aa_7467_, lean_object* v_n_7468_, lean_object* v_j_7469_, lean_object* v_a_7470_, lean_object* v_a_7471_){
_start:
{
lean_object* v___x_7472_; 
v___x_7472_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___redArg(v_n_7464_, v_adjustResult_7466_, v_aa_7467_, v_n_7468_, v_j_7469_, v_a_7471_);
return v___x_7472_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___boxed(lean_object* v_00_u03b2_7473_, lean_object* v_n_7474_, lean_object* v_00_u03b1_7475_, lean_object* v_adjustResult_7476_, lean_object* v_aa_7477_, lean_object* v_n_7478_, lean_object* v_j_7479_, lean_object* v_a_7480_, lean_object* v_a_7481_){
_start:
{
lean_object* v_res_7482_; 
v_res_7482_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2(v_00_u03b2_7473_, v_n_7474_, v_00_u03b1_7475_, v_adjustResult_7476_, v_aa_7477_, v_n_7478_, v_j_7479_, v_a_7480_, v_a_7481_);
lean_dec(v_j_7479_);
lean_dec(v_n_7478_);
lean_dec_ref(v_aa_7477_);
lean_dec(v_n_7474_);
return v_res_7482_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3(lean_object* v_00_u03b2_7483_, lean_object* v_n_7484_, lean_object* v_00_u03b1_7485_, lean_object* v_aa_7486_, lean_object* v_adjustResult_7487_, lean_object* v_n_7488_, lean_object* v_j_7489_, lean_object* v_a_7490_, lean_object* v_a_7491_){
_start:
{
lean_object* v___x_7492_; 
v___x_7492_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg(v_n_7484_, v_aa_7486_, v_adjustResult_7487_, v_n_7488_, v_j_7489_, v_a_7491_);
return v___x_7492_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___boxed(lean_object* v_00_u03b2_7493_, lean_object* v_n_7494_, lean_object* v_00_u03b1_7495_, lean_object* v_aa_7496_, lean_object* v_adjustResult_7497_, lean_object* v_n_7498_, lean_object* v_j_7499_, lean_object* v_a_7500_, lean_object* v_a_7501_){
_start:
{
lean_object* v_res_7502_; 
v_res_7502_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3(v_00_u03b2_7493_, v_n_7494_, v_00_u03b1_7495_, v_aa_7496_, v_adjustResult_7497_, v_n_7498_, v_j_7499_, v_a_7500_, v_a_7501_);
lean_dec(v_n_7498_);
lean_dec_ref(v_aa_7496_);
lean_dec(v_n_7494_);
return v_res_7502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg___lam__0(lean_object* v_x_7503_, lean_object* v_v_7504_){
_start:
{
lean_inc(v_v_7504_);
return v_v_7504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg___lam__0___boxed(lean_object* v_x_7505_, lean_object* v_v_7506_){
_start:
{
lean_object* v_res_7507_; 
v_res_7507_ = l_Lean_Meta_LazyDiscrTree_findMatches___redArg___lam__0(v_x_7505_, v_v_7506_);
lean_dec(v_v_7506_);
lean_dec(v_x_7505_);
return v_res_7507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg(lean_object* v_ref_7509_, lean_object* v_addEntry_7510_, lean_object* v_droppedKeys_7511_, lean_object* v_constantsPerTask_7512_, lean_object* v_droppedEntriesRef_7513_, lean_object* v_ty_7514_, lean_object* v_a_7515_, lean_object* v_a_7516_, lean_object* v_a_7517_, lean_object* v_a_7518_){
_start:
{
lean_object* v___f_7520_; lean_object* v___x_7521_; 
v___f_7520_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_findMatches___redArg___closed__0));
lean_inc(v_droppedEntriesRef_7513_);
lean_inc(v_droppedKeys_7511_);
lean_inc_ref(v_addEntry_7510_);
v___x_7521_ = l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg(v_addEntry_7510_, v_droppedKeys_7511_, v_droppedEntriesRef_7513_, v_a_7515_, v_a_7516_, v_a_7517_, v_a_7518_);
if (lean_obj_tag(v___x_7521_) == 0)
{
lean_object* v_a_7522_; lean_object* v___x_7523_; 
v_a_7522_ = lean_ctor_get(v___x_7521_, 0);
lean_inc(v_a_7522_);
lean_dec_ref_known(v___x_7521_, 1);
v___x_7523_ = l_Lean_Meta_LazyDiscrTree_findMatchesExt___redArg(v_a_7522_, v_ref_7509_, v_addEntry_7510_, v_droppedKeys_7511_, v_constantsPerTask_7512_, v_droppedEntriesRef_7513_, v___f_7520_, v_ty_7514_, v_a_7515_, v_a_7516_, v_a_7517_, v_a_7518_);
return v___x_7523_;
}
else
{
lean_object* v_a_7524_; lean_object* v___x_7526_; uint8_t v_isShared_7527_; uint8_t v_isSharedCheck_7531_; 
lean_dec_ref(v_ty_7514_);
lean_dec(v_droppedEntriesRef_7513_);
lean_dec(v_constantsPerTask_7512_);
lean_dec(v_droppedKeys_7511_);
lean_dec_ref(v_addEntry_7510_);
v_a_7524_ = lean_ctor_get(v___x_7521_, 0);
v_isSharedCheck_7531_ = !lean_is_exclusive(v___x_7521_);
if (v_isSharedCheck_7531_ == 0)
{
v___x_7526_ = v___x_7521_;
v_isShared_7527_ = v_isSharedCheck_7531_;
goto v_resetjp_7525_;
}
else
{
lean_inc(v_a_7524_);
lean_dec(v___x_7521_);
v___x_7526_ = lean_box(0);
v_isShared_7527_ = v_isSharedCheck_7531_;
goto v_resetjp_7525_;
}
v_resetjp_7525_:
{
lean_object* v___x_7529_; 
if (v_isShared_7527_ == 0)
{
v___x_7529_ = v___x_7526_;
goto v_reusejp_7528_;
}
else
{
lean_object* v_reuseFailAlloc_7530_; 
v_reuseFailAlloc_7530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7530_, 0, v_a_7524_);
v___x_7529_ = v_reuseFailAlloc_7530_;
goto v_reusejp_7528_;
}
v_reusejp_7528_:
{
return v___x_7529_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg___boxed(lean_object* v_ref_7532_, lean_object* v_addEntry_7533_, lean_object* v_droppedKeys_7534_, lean_object* v_constantsPerTask_7535_, lean_object* v_droppedEntriesRef_7536_, lean_object* v_ty_7537_, lean_object* v_a_7538_, lean_object* v_a_7539_, lean_object* v_a_7540_, lean_object* v_a_7541_, lean_object* v_a_7542_){
_start:
{
lean_object* v_res_7543_; 
v_res_7543_ = l_Lean_Meta_LazyDiscrTree_findMatches___redArg(v_ref_7532_, v_addEntry_7533_, v_droppedKeys_7534_, v_constantsPerTask_7535_, v_droppedEntriesRef_7536_, v_ty_7537_, v_a_7538_, v_a_7539_, v_a_7540_, v_a_7541_);
lean_dec(v_a_7541_);
lean_dec_ref(v_a_7540_);
lean_dec(v_a_7539_);
lean_dec_ref(v_a_7538_);
lean_dec(v_ref_7532_);
return v_res_7543_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches(lean_object* v_00_u03b1_7544_, lean_object* v_ref_7545_, lean_object* v_addEntry_7546_, lean_object* v_droppedKeys_7547_, lean_object* v_constantsPerTask_7548_, lean_object* v_droppedEntriesRef_7549_, lean_object* v_ty_7550_, lean_object* v_a_7551_, lean_object* v_a_7552_, lean_object* v_a_7553_, lean_object* v_a_7554_){
_start:
{
lean_object* v___x_7556_; 
v___x_7556_ = l_Lean_Meta_LazyDiscrTree_findMatches___redArg(v_ref_7545_, v_addEntry_7546_, v_droppedKeys_7547_, v_constantsPerTask_7548_, v_droppedEntriesRef_7549_, v_ty_7550_, v_a_7551_, v_a_7552_, v_a_7553_, v_a_7554_);
return v___x_7556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___boxed(lean_object* v_00_u03b1_7557_, lean_object* v_ref_7558_, lean_object* v_addEntry_7559_, lean_object* v_droppedKeys_7560_, lean_object* v_constantsPerTask_7561_, lean_object* v_droppedEntriesRef_7562_, lean_object* v_ty_7563_, lean_object* v_a_7564_, lean_object* v_a_7565_, lean_object* v_a_7566_, lean_object* v_a_7567_, lean_object* v_a_7568_){
_start:
{
lean_object* v_res_7569_; 
v_res_7569_ = l_Lean_Meta_LazyDiscrTree_findMatches(v_00_u03b1_7557_, v_ref_7558_, v_addEntry_7559_, v_droppedKeys_7560_, v_constantsPerTask_7561_, v_droppedEntriesRef_7562_, v_ty_7563_, v_a_7564_, v_a_7565_, v_a_7566_, v_a_7567_);
lean_dec(v_a_7567_);
lean_dec_ref(v_a_7566_);
lean_dec(v_a_7565_);
lean_dec_ref(v_a_7564_);
lean_dec(v_ref_7558_);
return v_res_7569_;
}
}
lean_object* runtime_initialize_Lean_Meta_CompletionName(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_DiscrTree(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_LazyDiscrTree(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_CompletionName(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_DiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar = _init_l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar();
lean_mark_persistent(l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar);
l_Lean_Meta_LazyDiscrTree_initCapacity = _init_l_Lean_Meta_LazyDiscrTree_initCapacity();
lean_mark_persistent(l_Lean_Meta_LazyDiscrTree_initCapacity);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_LazyDiscrTree(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_CompletionName(uint8_t builtin);
lean_object* initialize_Lean_Meta_DiscrTree(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_LazyDiscrTree(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_CompletionName(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_DiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_LazyDiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_LazyDiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_LazyDiscrTree(builtin);
}
#ifdef __cplusplus
}
#endif
