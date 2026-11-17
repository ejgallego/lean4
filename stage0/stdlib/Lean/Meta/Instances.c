// Lean compiler output
// Module: Lean.Meta.Instances
// Imports: public import Init.Data.Range.Polymorphic.Stream public import Lean.Meta.DiscrTree.Main public import Lean.Meta.CollectMVars import Lean.Meta.PPBinder import Lean.Util.UnusedBinders import Lean.Meta.CollectFVars import Init.While import Lean.OriginalConstKind import Lean.ProjFns
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
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_isUnaryNode___redArg(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Array_eraseIdx___redArg(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_Meta_DiscrTree_instBEqKey_beq(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Expr_mvar___override(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_empty___redArg();
uint64_t l_Lean_Meta_DiscrTree_Key_hash(lean_object*);
uint8_t l_Lean_Meta_DiscrTree_Key_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_instInhabited___redArg();
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg(lean_object*);
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_getAttrParamOptPrio(lean_object*, lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_addCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Environment_getProjectionFnInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescopeReducing(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_getOutParamPositions_x3f(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Expr_setPPExplicit(lean_object*, uint8_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_joinSep(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_mkPath(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_getReducibilityStatusCore(lean_object*, lean_object*);
uint8_t l_Lean_instBEqReducibilityStatus_beq(uint8_t, uint8_t);
uint8_t l_Lean_ConstantInfo_isDefinition(lean_object*);
uint8_t l_Lean_wasOriginallyDefn(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasSorry(lean_object*);
lean_object* l_Lean_Meta_isClass_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
uint8_t lean_expr_has_loose_bvar(lean_object*, lean_object*);
lean_object* l_Lean_CollectFVars_State_ofFVarSet(lean_object*, lean_object*);
lean_object* l_Lean_Expr_collectFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getBinderInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_CollectFVars_State_add(lean_object*, lean_object*);
lean_object* l_Lean_CollectFVars_State_addDependencies(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_ppAsBinder(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
extern lean_object* l_Lean_MessageData_nil;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isClass(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
uint8_t l_Lean_instBEqAttributeKind_beq(uint8_t, uint8_t);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Name_hash___override___boxed(lean_object*);
uint8_t l_Lean_PersistentHashMap_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
lean_object* l_List_filterTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "synthInstance"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "checkSynthOrder"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(239, 153, 166, 25, 45, 140, 142, 203)}};
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(127, 121, 149, 143, 151, 161, 209, 111)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "check that instances do not introduce metavariable in non-out-params"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(210, 135, 61, 136, 69, 26, 61, 117)}};
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(214, 212, 166, 255, 222, 243, 240, 184)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_synthInstance_checkSynthOrder;
static const lean_array_object l_Lean_Meta_instInhabitedInstanceEntry_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_instInhabitedInstanceEntry_default___closed__0 = (const lean_object*)&l_Lean_Meta_instInhabitedInstanceEntry_default___closed__0_value;
static const lean_string_object l_Lean_Meta_instInhabitedInstanceEntry_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Meta_instInhabitedInstanceEntry_default___closed__1 = (const lean_object*)&l_Lean_Meta_instInhabitedInstanceEntry_default___closed__1_value;
static const lean_ctor_object l_Lean_Meta_instInhabitedInstanceEntry_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_instInhabitedInstanceEntry_default___closed__1_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Meta_instInhabitedInstanceEntry_default___closed__2 = (const lean_object*)&l_Lean_Meta_instInhabitedInstanceEntry_default___closed__2_value;
static lean_once_cell_t l_Lean_Meta_instInhabitedInstanceEntry_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedInstanceEntry_default___closed__3;
static lean_once_cell_t l_Lean_Meta_instInhabitedInstanceEntry_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedInstanceEntry_default___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedInstanceEntry_default;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedInstanceEntry;
LEAN_EXPORT uint8_t l_Lean_Meta_instBEqInstanceEntry___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instBEqInstanceEntry___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_instBEqInstanceEntry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instBEqInstanceEntry___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instBEqInstanceEntry___closed__0 = (const lean_object*)&l_Lean_Meta_instBEqInstanceEntry___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instBEqInstanceEntry = (const lean_object*)&l_Lean_Meta_instBEqInstanceEntry___closed__0_value;
static const lean_string_object l_Lean_Meta_instToFormatInstanceEntry___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "<local>"};
static const lean_object* l_Lean_Meta_instToFormatInstanceEntry___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_instToFormatInstanceEntry___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_instToFormatInstanceEntry___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instToFormatInstanceEntry___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Meta_instToFormatInstanceEntry___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_instToFormatInstanceEntry___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_instToFormatInstanceEntry___lam__0(lean_object*);
static const lean_closure_object l_Lean_Meta_instToFormatInstanceEntry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instToFormatInstanceEntry___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instToFormatInstanceEntry___closed__0 = (const lean_object*)&l_Lean_Meta_instToFormatInstanceEntry___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instToFormatInstanceEntry = (const lean_object*)&l_Lean_Meta_instToFormatInstanceEntry___closed__0_value;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0(lean_object*);
static lean_once_cell_t l_Lean_Meta_instInhabitedInstances_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedInstances_default___closed__0;
static lean_once_cell_t l_Lean_Meta_instInhabitedInstances_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedInstances_default___closed__1;
static lean_once_cell_t l_Lean_Meta_instInhabitedInstances_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedInstances_default___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedInstances_default;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedInstances;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_InstanceEntry_keyClass_spec__0(lean_object*);
static const lean_string_object l_Lean_Meta_InstanceEntry_keyClass___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Meta.Instances"};
static const lean_object* l_Lean_Meta_InstanceEntry_keyClass___closed__0 = (const lean_object*)&l_Lean_Meta_InstanceEntry_keyClass___closed__0_value;
static const lean_string_object l_Lean_Meta_InstanceEntry_keyClass___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Meta.InstanceEntry.keyClass"};
static const lean_object* l_Lean_Meta_InstanceEntry_keyClass___closed__1 = (const lean_object*)&l_Lean_Meta_InstanceEntry_keyClass___closed__1_value;
static const lean_string_object l_Lean_Meta_InstanceEntry_keyClass___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "instance key not rooted at a constant, which `addInstance` rejects"};
static const lean_object* l_Lean_Meta_InstanceEntry_keyClass___closed__2 = (const lean_object*)&l_Lean_Meta_InstanceEntry_keyClass___closed__2_value;
static lean_once_cell_t l_Lean_Meta_InstanceEntry_keyClass___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_InstanceEntry_keyClass___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_InstanceEntry_keyClass(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_InstanceEntry_keyClass___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_getClassChanges(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_getClassChanges___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4_spec__10_spec__17(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4_spec__10_spec__17___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4_spec__10___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__13_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__14___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__5_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__5_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__2_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0___closed__0_value),((lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__2___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__2(lean_object*);
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.Meta.DiscrTree.Basic"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__0 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__0_value;
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Meta.DiscrTree.insertKeyValue"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__1 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__1_value;
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid key sequence"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__2 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_addImportedInstanceEntry(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__14(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__13_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_addInstanceEntry(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_eraseCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___redArg___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Instances_erase___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Instances_erase___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Instances_erase___redArg___closed__0_value;
static const lean_closure_object l_Lean_Meta_Instances_erase___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_hash___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Instances_erase___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Instances_erase___redArg___closed__1_value;
static const lean_string_object l_Lean_Meta_Instances_erase___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Meta_Instances_erase___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Instances_erase___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Instances_erase___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Instances_erase___redArg___closed__3;
static const lean_string_object l_Lean_Meta_Instances_erase___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "` does not have [instance] attribute"};
static const lean_object* l_Lean_Meta_Instances_erase___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Instances_erase___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Instances_erase___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Instances_erase___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2____boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "instanceExtension"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 253, 187, 89, 234, 162, 232, 19)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_addInstanceEntry, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_addImportedInstanceEntry, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instanceExtension;
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "semiOutParam"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(141, 187, 140, 108, 143, 232, 13, 120)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__0_value;
static const lean_array_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__5_spec__6(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3(lean_object*, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__0_value)}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__1_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "cannot find synthesization order for instance "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__3 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__3_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__4;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " with type"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__5 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__5_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__6;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "\nall remaining arguments have metavariables:"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__7 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__7_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__8;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__11(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__12(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__0;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "synthOrder"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(199, 119, 89, 231, 199, 121, 219, 201)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__4;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "synthesizing the arguments of "};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__6;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = " in the order "};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__8;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__9 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__9_value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__10;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "instance does not provide concrete values for (semi-)out-params"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__11 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__11_value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__12;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "argument "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = ": `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_checkImpossibleInstance___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_checkImpossibleInstance___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__1;
static const lean_ctor_object l_Lean_Meta_checkImpossibleInstance___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_Meta_checkImpossibleInstance___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__0_value),((lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__2_value)}};
static const lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__3 = (const lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__3_value;
static const lean_string_object l_Lean_Meta_checkImpossibleInstance___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "This instance has "};
static const lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Meta_checkImpossibleInstance___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__5;
static const lean_string_object l_Lean_Meta_checkImpossibleInstance___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " argument"};
static const lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__6 = (const lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__6_value;
static lean_once_cell_t l_Lean_Meta_checkImpossibleInstance___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__7;
static const lean_string_object l_Lean_Meta_checkImpossibleInstance___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = " that cannot be inferred using typeclass synthesis. Specifically\n"};
static const lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__8 = (const lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__8_value;
static lean_once_cell_t l_Lean_Meta_checkImpossibleInstance___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__9;
static const lean_string_object l_Lean_Meta_checkImpossibleInstance___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 176, .m_capacity = 176, .m_length = 175, .m_data = "\n\nThese arguments are not instance-implicit and appear neither in another instance-implicit argument nor the return type, so they cannot be inferred using typeclass synthesis."};
static const lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__10 = (const lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__10_value;
static lean_once_cell_t l_Lean_Meta_checkImpossibleInstance___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__11;
static const lean_string_object l_Lean_Meta_checkImpossibleInstance___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "s"};
static const lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__12 = (const lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__12_value;
LEAN_EXPORT lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_hasUnusedForallBindersWhere___at___00Lean_Meta_checkImpossibleInstance_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_hasUnusedForallBindersWhere___at___00Lean_Meta_checkImpossibleInstance_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_checkImpossibleInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_checkImpossibleInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_checkNonClassInstance___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "The declaration `"};
static const lean_object* l_Lean_Meta_checkNonClassInstance___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_checkNonClassInstance___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_checkNonClassInstance___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkNonClassInstance___lam__0___closed__1;
static const lean_string_object l_Lean_Meta_checkNonClassInstance___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "` should not be an instance as its return type `"};
static const lean_object* l_Lean_Meta_checkNonClassInstance___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_checkNonClassInstance___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_checkNonClassInstance___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkNonClassInstance___lam__0___closed__3;
static const lean_string_object l_Lean_Meta_checkNonClassInstance___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "` is not a type class."};
static const lean_object* l_Lean_Meta_checkNonClassInstance___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_checkNonClassInstance___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Meta_checkNonClassInstance___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkNonClassInstance___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_checkNonClassInstance___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_checkNonClassInstance___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_checkNonClassInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_checkNonClassInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "warn"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__0 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "classDefReducibility"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__1 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__0_value),LEAN_SCALAR_PTR_LITERAL(187, 250, 156, 61, 219, 107, 141, 135)}};
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__1_value),LEAN_SCALAR_PTR_LITERAL(242, 199, 74, 147, 156, 95, 99, 180)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__2 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__3 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__3_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__4;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__5 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__5_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__6;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__7 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__7_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__8;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__9 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__9_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__10;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__11 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__11_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__12;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__13 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__13_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__14;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__15 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__15_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__16;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__17 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__17_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__18;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6_spec__9___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6_spec__9___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6_spec__9___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__0;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__1;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__3;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__4;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_addInstance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "invalid instance `"};
static const lean_object* l_Lean_Meta_addInstance___closed__0 = (const lean_object*)&l_Lean_Meta_addInstance___closed__0_value;
static lean_once_cell_t l_Lean_Meta_addInstance___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addInstance___closed__1;
static const lean_string_object l_Lean_Meta_addInstance___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 86, .m_capacity = 86, .m_length = 85, .m_data = "`, its type does not reduce to an application of a constant at reducible transparency"};
static const lean_object* l_Lean_Meta_addInstance___closed__2 = (const lean_object*)&l_Lean_Meta_addInstance___closed__2_value;
static lean_once_cell_t l_Lean_Meta_addInstance___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addInstance___closed__3;
static const lean_string_object l_Lean_Meta_addInstance___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instance `"};
static const lean_object* l_Lean_Meta_addInstance___closed__4 = (const lean_object*)&l_Lean_Meta_addInstance___closed__4_value;
static lean_once_cell_t l_Lean_Meta_addInstance___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addInstance___closed__5;
static const lean_string_object l_Lean_Meta_addInstance___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "` must be marked with `@[expose]`"};
static const lean_object* l_Lean_Meta_addInstance___closed__6 = (const lean_object*)&l_Lean_Meta_addInstance___closed__6_value;
static lean_once_cell_t l_Lean_Meta_addInstance___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addInstance___closed__7;
static const lean_string_object l_Lean_Meta_addInstance___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Definition `"};
static const lean_object* l_Lean_Meta_addInstance___closed__8 = (const lean_object*)&l_Lean_Meta_addInstance___closed__8_value;
static lean_once_cell_t l_Lean_Meta_addInstance___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addInstance___closed__9;
static const lean_string_object l_Lean_Meta_addInstance___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 274, .m_capacity = 274, .m_length = 273, .m_data = "` of class type is semireducible. Most type class instances should be instance-reducible, so consider marking this\ndefinition with `@[instance_reducible]`. If it is intentionally semireducible, this warning can be disabled with `set_option warn.classDefReducibility false`."};
static const lean_object* l_Lean_Meta_addInstance___closed__10 = (const lean_object*)&l_Lean_Meta_addInstance___closed__10_value;
static lean_once_cell_t l_Lean_Meta_addInstance___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addInstance___closed__11;
LEAN_EXPORT lean_object* l_Lean_Meta_addInstance(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_addInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6_spec__9(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_registerInstance(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_registerInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 24, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 1, 1, 1, 2, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Instances"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(116, 69, 223, 114, 12, 235, 248, 125)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed, .m_arity = 8, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(245, 103, 148, 95, 163, 61, 86, 28)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(96, 213, 176, 90, 5, 29, 4, 245)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(76, 119, 91, 79, 218, 216, 4, 30)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(57, 34, 109, 117, 86, 219, 202, 202)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(244, 31, 67, 74, 73, 155, 87, 189)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(245, 214, 117, 3, 115, 221, 181, 118)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(189, 44, 126, 187, 224, 191, 65, 145)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(19, 189, 251, 134, 243, 7, 213, 15)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1841422150) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(243, 241, 116, 150, 66, 138, 129, 211)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(232, 60, 149, 187, 173, 41, 226, 214)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(108, 138, 222, 169, 203, 203, 201, 186)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(213, 64, 26, 184, 137, 94, 159, 191)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instance"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(236, 216, 85, 168, 141, 176, 253, 81)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__26_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "type class instance"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__26_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__26_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__27_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__26_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__27_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__27_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 427, .m_capacity = 427, .m_length = 426, .m_data = "Registers type class instances.\n\nThe `instance` command, which expands to `@[instance] def`, is usually preferred over using this\nattribute directly. However it might sometimes still be necessary to use this attribute directly,\nin particular for `opaque` instances.\n\nTo assign priorities to instances, `@[instance prio]` can be used (where `prio` is a priority).\nThis corresponds to the `instance (priority := prio)` notation."};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getGlobalInstancesIndex___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getGlobalInstancesIndex___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getGlobalInstancesIndex(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getGlobalInstancesIndex___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceClassChanges(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceClassChanges___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getErasedInstances___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getErasedInstances___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getErasedInstances(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getErasedInstances___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_isInstanceCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isInstanceCore___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isInstance___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isInstance___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isInstance(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInstancePriority_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInstancePriority_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInstancePriority_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInstancePriority_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceAttrKind_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceAttrKind_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceAttrKind_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceAttrKind_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_instInhabitedDefaultInstances_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_instInhabitedDefaultInstances_default___closed__0 = (const lean_object*)&l_Lean_Meta_instInhabitedDefaultInstances_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instInhabitedDefaultInstances_default = (const lean_object*)&l_Lean_Meta_instInhabitedDefaultInstances_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instInhabitedDefaultInstances = (const lean_object*)&l_Lean_Meta_instInhabitedDefaultInstances_default___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_addDefaultInstanceEntry_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstanceEntry(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_addDefaultInstanceEntry_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2____boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "defaultInstanceExtension"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(210, 56, 120, 160, 178, 206, 131, 123)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_addDefaultInstanceEntry, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 8, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_defaultInstanceExtension;
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_addDefaultInstance___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "invalid default instance `"};
static const lean_object* l_Lean_Meta_addDefaultInstance___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_addDefaultInstance___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Meta_addDefaultInstance___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addDefaultInstance___lam__1___closed__1;
static const lean_string_object l_Lean_Meta_addDefaultInstance___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "`, it has type `("};
static const lean_object* l_Lean_Meta_addDefaultInstance___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_addDefaultInstance___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Meta_addDefaultInstance___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addDefaultInstance___lam__1___closed__3;
static const lean_string_object l_Lean_Meta_addDefaultInstance___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = " ...)`, but `"};
static const lean_object* l_Lean_Meta_addDefaultInstance___lam__1___closed__4 = (const lean_object*)&l_Lean_Meta_addDefaultInstance___lam__1___closed__4_value;
static lean_once_cell_t l_Lean_Meta_addDefaultInstance___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addDefaultInstance___lam__1___closed__5;
static const lean_string_object l_Lean_Meta_addDefaultInstance___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "` is not a type class"};
static const lean_object* l_Lean_Meta_addDefaultInstance___lam__1___closed__6 = (const lean_object*)&l_Lean_Meta_addDefaultInstance___lam__1___closed__6_value;
static lean_once_cell_t l_Lean_Meta_addDefaultInstance___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addDefaultInstance___lam__1___closed__7;
static const lean_string_object l_Lean_Meta_addDefaultInstance___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "`, type must be of the form `(C ...)` where `C` is a type class"};
static const lean_object* l_Lean_Meta_addDefaultInstance___lam__1___closed__8 = (const lean_object*)&l_Lean_Meta_addDefaultInstance___lam__1___closed__8_value;
static lean_once_cell_t l_Lean_Meta_addDefaultInstance___lam__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addDefaultInstance___lam__1___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Invalid attribute scope: Attribute `["};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "]` must be global, not `"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__3;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "global"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__4 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__4_value;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "local"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__5 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__5_value;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "scoped"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__6 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Attribute `["};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` cannot be erased"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)(((size_t)(397728026) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(222, 44, 186, 211, 61, 97, 170, 158)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(201, 145, 23, 81, 211, 60, 112, 222)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(97, 144, 67, 128, 102, 189, 169, 9)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(60, 200, 215, 58, 149, 211, 154, 152)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "default_instance"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(181, 85, 15, 3, 86, 102, 227, 255)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2____boxed, .m_arity = 9, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "type class default instance"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstancesPriorities___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstancesPriorities___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstancesPriorities(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_getDefaultInstances___redArg___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
_start:
{
lean_object* v_defValue_5_; lean_object* v_descr_6_; lean_object* v_deprecation_x3f_7_; lean_object* v___x_8_; uint8_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_defValue_5_ = lean_ctor_get(v_decl_2_, 0);
v_descr_6_ = lean_ctor_get(v_decl_2_, 1);
v_deprecation_x3f_7_ = lean_ctor_get(v_decl_2_, 2);
v___x_8_ = lean_alloc_ctor(1, 0, 1);
v___x_9_ = lean_unbox(v_defValue_5_);
lean_ctor_set_uint8(v___x_8_, 0, v___x_9_);
lean_inc(v_deprecation_x3f_7_);
lean_inc_ref(v_descr_6_);
lean_inc_n(v_name_1_, 2);
v___x_10_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_10_, 0, v_name_1_);
lean_ctor_set(v___x_10_, 1, v_ref_3_);
lean_ctor_set(v___x_10_, 2, v___x_8_);
lean_ctor_set(v___x_10_, 3, v_descr_6_);
lean_ctor_set(v___x_10_, 4, v_deprecation_x3f_7_);
v___x_11_ = lean_register_option(v_name_1_, v___x_10_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_19_; 
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_19_ == 0)
{
lean_object* v_unused_20_; 
v_unused_20_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_20_);
v___x_13_ = v___x_11_;
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
else
{
lean_dec(v___x_11_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_15_; lean_object* v___x_17_; 
lean_inc(v_defValue_5_);
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v_name_1_);
lean_ctor_set(v___x_15_, 1, v_defValue_5_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 0, v___x_15_);
v___x_17_ = v___x_13_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
else
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_28_; 
lean_dec(v_name_1_);
v_a_21_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_28_ == 0)
{
v___x_23_ = v___x_11_;
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_11_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_26_; 
if (v_isShared_24_ == 0)
{
v___x_26_ = v___x_23_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_a_21_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_53_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_));
v___x_54_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_));
v___x_55_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_));
v___x_56_ = l_Lean_Option_register___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__spec__0(v___x_53_, v___x_54_, v___x_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4____boxed(lean_object* v_a_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_();
return v_res_58_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedInstanceEntry_default___closed__3(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_64_ = lean_box(0);
v___x_65_ = ((lean_object*)(l_Lean_Meta_instInhabitedInstanceEntry_default___closed__2));
v___x_66_ = l_Lean_Expr_const___override(v___x_65_, v___x_64_);
return v___x_66_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedInstanceEntry_default___closed__4(void){
_start:
{
uint8_t v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_67_ = 0;
v___x_68_ = lean_box(0);
v___x_69_ = lean_unsigned_to_nat(0u);
v___x_70_ = lean_obj_once(&l_Lean_Meta_instInhabitedInstanceEntry_default___closed__3, &l_Lean_Meta_instInhabitedInstanceEntry_default___closed__3_once, _init_l_Lean_Meta_instInhabitedInstanceEntry_default___closed__3);
v___x_71_ = ((lean_object*)(l_Lean_Meta_instInhabitedInstanceEntry_default___closed__0));
v___x_72_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_72_, 0, v___x_71_);
lean_ctor_set(v___x_72_, 1, v___x_70_);
lean_ctor_set(v___x_72_, 2, v___x_69_);
lean_ctor_set(v___x_72_, 3, v___x_68_);
lean_ctor_set(v___x_72_, 4, v___x_71_);
lean_ctor_set_uint8(v___x_72_, sizeof(void*)*5, v___x_67_);
return v___x_72_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedInstanceEntry_default(void){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = lean_obj_once(&l_Lean_Meta_instInhabitedInstanceEntry_default___closed__4, &l_Lean_Meta_instInhabitedInstanceEntry_default___closed__4_once, _init_l_Lean_Meta_instInhabitedInstanceEntry_default___closed__4);
return v___x_73_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedInstanceEntry(void){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = l_Lean_Meta_instInhabitedInstanceEntry_default;
return v___x_74_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_instBEqInstanceEntry___lam__0(lean_object* v_e_u2081_75_, lean_object* v_e_u2082_76_){
_start:
{
lean_object* v_val_77_; lean_object* v_val_78_; uint8_t v___x_79_; 
v_val_77_ = lean_ctor_get(v_e_u2081_75_, 1);
v_val_78_ = lean_ctor_get(v_e_u2082_76_, 1);
v___x_79_ = lean_expr_eqv(v_val_77_, v_val_78_);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instBEqInstanceEntry___lam__0___boxed(lean_object* v_e_u2081_80_, lean_object* v_e_u2082_81_){
_start:
{
uint8_t v_res_82_; lean_object* v_r_83_; 
v_res_82_ = l_Lean_Meta_instBEqInstanceEntry___lam__0(v_e_u2081_80_, v_e_u2082_81_);
lean_dec_ref(v_e_u2082_81_);
lean_dec_ref(v_e_u2081_80_);
v_r_83_ = lean_box(v_res_82_);
return v_r_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instToFormatInstanceEntry___lam__0(lean_object* v_e_89_){
_start:
{
lean_object* v_globalName_x3f_90_; 
v_globalName_x3f_90_ = lean_ctor_get(v_e_89_, 3);
lean_inc(v_globalName_x3f_90_);
lean_dec_ref(v_e_89_);
if (lean_obj_tag(v_globalName_x3f_90_) == 1)
{
lean_object* v_val_91_; lean_object* v___x_93_; uint8_t v_isShared_94_; uint8_t v_isSharedCheck_100_; 
v_val_91_ = lean_ctor_get(v_globalName_x3f_90_, 0);
v_isSharedCheck_100_ = !lean_is_exclusive(v_globalName_x3f_90_);
if (v_isSharedCheck_100_ == 0)
{
v___x_93_ = v_globalName_x3f_90_;
v_isShared_94_ = v_isSharedCheck_100_;
goto v_resetjp_92_;
}
else
{
lean_inc(v_val_91_);
lean_dec(v_globalName_x3f_90_);
v___x_93_ = lean_box(0);
v_isShared_94_ = v_isSharedCheck_100_;
goto v_resetjp_92_;
}
v_resetjp_92_:
{
uint8_t v___x_95_; lean_object* v___x_96_; lean_object* v___x_98_; 
v___x_95_ = 1;
v___x_96_ = l_Lean_Name_toString(v_val_91_, v___x_95_);
if (v_isShared_94_ == 0)
{
lean_ctor_set_tag(v___x_93_, 3);
lean_ctor_set(v___x_93_, 0, v___x_96_);
v___x_98_ = v___x_93_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_99_; 
v_reuseFailAlloc_99_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_99_, 0, v___x_96_);
v___x_98_ = v_reuseFailAlloc_99_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
return v___x_98_;
}
}
}
else
{
lean_object* v___x_101_; 
lean_dec(v_globalName_x3f_90_);
v___x_101_ = ((lean_object*)(l_Lean_Meta_instToFormatInstanceEntry___lam__0___closed__1));
return v___x_101_;
}
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_104_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_105_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0);
v___x_106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_106_, 0, v___x_105_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg(){
_start:
{
lean_object* v___x_108_; 
v___x_108_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__1);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___boxed(lean_object* v___dummy_109_){
_start:
{
lean_object* v_res_110_; 
v_res_110_ = l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg();
return v_res_110_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___closed__0(void){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg();
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0(lean_object* v_00_u03b2_112_){
_start:
{
lean_object* v___x_113_; 
v___x_113_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___closed__0);
return v___x_113_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedInstances_default___closed__0(void){
_start:
{
lean_object* v___x_114_; 
v___x_114_ = l_Lean_Meta_DiscrTree_empty___redArg();
return v___x_114_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedInstances_default___closed__1(void){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_115_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0);
v___x_116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_116_, 0, v___x_115_);
return v___x_116_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedInstances_default___closed__2(void){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_117_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___closed__0);
v___x_118_ = lean_obj_once(&l_Lean_Meta_instInhabitedInstances_default___closed__1, &l_Lean_Meta_instInhabitedInstances_default___closed__1_once, _init_l_Lean_Meta_instInhabitedInstances_default___closed__1);
v___x_119_ = lean_obj_once(&l_Lean_Meta_instInhabitedInstances_default___closed__0, &l_Lean_Meta_instInhabitedInstances_default___closed__0_once, _init_l_Lean_Meta_instInhabitedInstances_default___closed__0);
v___x_120_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_120_, 0, v___x_119_);
lean_ctor_set(v___x_120_, 1, v___x_118_);
lean_ctor_set(v___x_120_, 2, v___x_117_);
lean_ctor_set(v___x_120_, 3, v___x_118_);
return v___x_120_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedInstances_default(void){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = lean_obj_once(&l_Lean_Meta_instInhabitedInstances_default___closed__2, &l_Lean_Meta_instInhabitedInstances_default___closed__2_once, _init_l_Lean_Meta_instInhabitedInstances_default___closed__2);
return v___x_121_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedInstances(void){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = l_Lean_Meta_instInhabitedInstances_default;
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_InstanceEntry_keyClass_spec__0(lean_object* v_msg_123_){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_124_ = lean_box(0);
v___x_125_ = lean_panic_fn_borrowed(v___x_124_, v_msg_123_);
return v___x_125_;
}
}
static lean_object* _init_l_Lean_Meta_InstanceEntry_keyClass___closed__3(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_129_ = ((lean_object*)(l_Lean_Meta_InstanceEntry_keyClass___closed__2));
v___x_130_ = lean_unsigned_to_nat(9u);
v___x_131_ = lean_unsigned_to_nat(95u);
v___x_132_ = ((lean_object*)(l_Lean_Meta_InstanceEntry_keyClass___closed__1));
v___x_133_ = ((lean_object*)(l_Lean_Meta_InstanceEntry_keyClass___closed__0));
v___x_134_ = l_mkPanicMessageWithDecl(v___x_133_, v___x_132_, v___x_131_, v___x_130_, v___x_129_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_InstanceEntry_keyClass(lean_object* v_e_135_){
_start:
{
lean_object* v_keys_139_; lean_object* v___x_140_; lean_object* v___x_141_; uint8_t v___x_142_; 
v_keys_139_ = lean_ctor_get(v_e_135_, 0);
v___x_140_ = lean_unsigned_to_nat(0u);
v___x_141_ = lean_array_get_size(v_keys_139_);
v___x_142_ = lean_nat_dec_lt(v___x_140_, v___x_141_);
if (v___x_142_ == 0)
{
goto v___jp_136_;
}
else
{
lean_object* v___x_143_; 
v___x_143_ = lean_array_fget_borrowed(v_keys_139_, v___x_140_);
if (lean_obj_tag(v___x_143_) == 4)
{
lean_object* v_a_144_; 
v_a_144_ = lean_ctor_get(v___x_143_, 0);
lean_inc(v_a_144_);
return v_a_144_;
}
else
{
goto v___jp_136_;
}
}
v___jp_136_:
{
lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_137_ = lean_obj_once(&l_Lean_Meta_InstanceEntry_keyClass___closed__3, &l_Lean_Meta_InstanceEntry_keyClass___closed__3_once, _init_l_Lean_Meta_InstanceEntry_keyClass___closed__3);
v___x_138_ = l_panic___at___00Lean_Meta_InstanceEntry_keyClass_spec__0(v___x_137_);
return v___x_138_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_InstanceEntry_keyClass___boxed(lean_object* v_e_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l_Lean_Meta_InstanceEntry_keyClass(v_e_145_);
lean_dec_ref(v_e_145_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_147_, lean_object* v_vals_148_, lean_object* v_i_149_, lean_object* v_k_150_){
_start:
{
lean_object* v___x_151_; uint8_t v___x_152_; 
v___x_151_ = lean_array_get_size(v_keys_147_);
v___x_152_ = lean_nat_dec_lt(v_i_149_, v___x_151_);
if (v___x_152_ == 0)
{
lean_object* v___x_153_; 
lean_dec(v_i_149_);
v___x_153_ = lean_box(0);
return v___x_153_;
}
else
{
lean_object* v_k_x27_154_; uint8_t v___x_155_; 
v_k_x27_154_ = lean_array_fget_borrowed(v_keys_147_, v_i_149_);
v___x_155_ = lean_name_eq(v_k_150_, v_k_x27_154_);
if (v___x_155_ == 0)
{
lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_156_ = lean_unsigned_to_nat(1u);
v___x_157_ = lean_nat_add(v_i_149_, v___x_156_);
lean_dec(v_i_149_);
v_i_149_ = v___x_157_;
goto _start;
}
else
{
lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_159_ = lean_array_fget_borrowed(v_vals_148_, v_i_149_);
lean_dec(v_i_149_);
lean_inc(v___x_159_);
v___x_160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_160_, 0, v___x_159_);
return v___x_160_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_161_, lean_object* v_vals_162_, lean_object* v_i_163_, lean_object* v_k_164_){
_start:
{
lean_object* v_res_165_; 
v_res_165_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0_spec__1___redArg(v_keys_161_, v_vals_162_, v_i_163_, v_k_164_);
lean_dec(v_k_164_);
lean_dec_ref(v_vals_162_);
lean_dec_ref(v_keys_161_);
return v_res_165_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0___redArg(lean_object* v_x_166_, size_t v_x_167_, lean_object* v_x_168_){
_start:
{
if (lean_obj_tag(v_x_166_) == 0)
{
lean_object* v_es_169_; lean_object* v___x_170_; size_t v___x_171_; size_t v___x_172_; lean_object* v_j_173_; lean_object* v___x_174_; 
v_es_169_ = lean_ctor_get(v_x_166_, 0);
v___x_170_ = lean_box(2);
v___x_171_ = ((size_t)31ULL);
v___x_172_ = lean_usize_land(v_x_167_, v___x_171_);
v_j_173_ = lean_usize_to_nat(v___x_172_);
v___x_174_ = lean_array_get_borrowed(v___x_170_, v_es_169_, v_j_173_);
lean_dec(v_j_173_);
switch(lean_obj_tag(v___x_174_))
{
case 0:
{
lean_object* v_key_175_; lean_object* v_val_176_; uint8_t v___x_177_; 
v_key_175_ = lean_ctor_get(v___x_174_, 0);
v_val_176_ = lean_ctor_get(v___x_174_, 1);
v___x_177_ = lean_name_eq(v_x_168_, v_key_175_);
if (v___x_177_ == 0)
{
lean_object* v___x_178_; 
v___x_178_ = lean_box(0);
return v___x_178_;
}
else
{
lean_object* v___x_179_; 
lean_inc(v_val_176_);
v___x_179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_179_, 0, v_val_176_);
return v___x_179_;
}
}
case 1:
{
lean_object* v_node_180_; size_t v___x_181_; size_t v___x_182_; 
v_node_180_ = lean_ctor_get(v___x_174_, 0);
v___x_181_ = ((size_t)5ULL);
v___x_182_ = lean_usize_shift_right(v_x_167_, v___x_181_);
v_x_166_ = v_node_180_;
v_x_167_ = v___x_182_;
goto _start;
}
default: 
{
lean_object* v___x_184_; 
v___x_184_ = lean_box(0);
return v___x_184_;
}
}
}
else
{
lean_object* v_ks_185_; lean_object* v_vs_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v_ks_185_ = lean_ctor_get(v_x_166_, 0);
v_vs_186_ = lean_ctor_get(v_x_166_, 1);
v___x_187_ = lean_unsigned_to_nat(0u);
v___x_188_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0_spec__1___redArg(v_ks_185_, v_vs_186_, v___x_187_, v_x_168_);
return v___x_188_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0___redArg___boxed(lean_object* v_x_189_, lean_object* v_x_190_, lean_object* v_x_191_){
_start:
{
size_t v_x_141__boxed_192_; lean_object* v_res_193_; 
v_x_141__boxed_192_ = lean_unbox_usize(v_x_190_);
lean_dec(v_x_190_);
v_res_193_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0___redArg(v_x_189_, v_x_141__boxed_192_, v_x_191_);
lean_dec(v_x_191_);
lean_dec_ref(v_x_189_);
return v_res_193_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0___redArg(lean_object* v_x_194_, lean_object* v_x_195_){
_start:
{
uint64_t v___y_197_; 
if (lean_obj_tag(v_x_195_) == 0)
{
uint64_t v___x_200_; 
v___x_200_ = 1723ULL;
v___y_197_ = v___x_200_;
goto v___jp_196_;
}
else
{
uint64_t v_hash_201_; 
v_hash_201_ = lean_ctor_get_uint64(v_x_195_, sizeof(void*)*2);
v___y_197_ = v_hash_201_;
goto v___jp_196_;
}
v___jp_196_:
{
size_t v___x_198_; lean_object* v___x_199_; 
v___x_198_ = lean_uint64_to_usize(v___y_197_);
v___x_199_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0___redArg(v_x_194_, v___x_198_, v_x_195_);
return v___x_199_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0___redArg___boxed(lean_object* v_x_202_, lean_object* v_x_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0___redArg(v_x_202_, v_x_203_);
lean_dec(v_x_203_);
lean_dec_ref(v_x_202_);
return v_res_204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_getClassChanges(lean_object* v_d_205_, lean_object* v_className_206_){
_start:
{
lean_object* v_classChanges_207_; lean_object* v___x_208_; 
v_classChanges_207_ = lean_ctor_get(v_d_205_, 3);
v___x_208_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0___redArg(v_classChanges_207_, v_className_206_);
if (lean_obj_tag(v___x_208_) == 0)
{
lean_object* v___x_209_; 
v___x_209_ = lean_box(0);
return v___x_209_;
}
else
{
lean_object* v_val_210_; 
v_val_210_ = lean_ctor_get(v___x_208_, 0);
lean_inc(v_val_210_);
lean_dec_ref_known(v___x_208_, 1);
return v_val_210_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_getClassChanges___boxed(lean_object* v_d_211_, lean_object* v_className_212_){
_start:
{
lean_object* v_res_213_; 
v_res_213_ = l_Lean_Meta_Instances_getClassChanges(v_d_211_, v_className_212_);
lean_dec(v_className_212_);
lean_dec_ref(v_d_211_);
return v_res_213_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0(lean_object* v_00_u03b2_214_, lean_object* v_x_215_, lean_object* v_x_216_){
_start:
{
lean_object* v___x_217_; 
v___x_217_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0___redArg(v_x_215_, v_x_216_);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0___boxed(lean_object* v_00_u03b2_218_, lean_object* v_x_219_, lean_object* v_x_220_){
_start:
{
lean_object* v_res_221_; 
v_res_221_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0(v_00_u03b2_218_, v_x_219_, v_x_220_);
lean_dec(v_x_220_);
lean_dec_ref(v_x_219_);
return v_res_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0(lean_object* v_00_u03b2_222_, lean_object* v_x_223_, size_t v_x_224_, lean_object* v_x_225_){
_start:
{
lean_object* v___x_226_; 
v___x_226_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0___redArg(v_x_223_, v_x_224_, v_x_225_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0___boxed(lean_object* v_00_u03b2_227_, lean_object* v_x_228_, lean_object* v_x_229_, lean_object* v_x_230_){
_start:
{
size_t v_x_218__boxed_231_; lean_object* v_res_232_; 
v_x_218__boxed_231_ = lean_unbox_usize(v_x_229_);
lean_dec(v_x_229_);
v_res_232_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0(v_00_u03b2_227_, v_x_228_, v_x_218__boxed_231_, v_x_230_);
lean_dec(v_x_230_);
lean_dec_ref(v_x_228_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_233_, lean_object* v_keys_234_, lean_object* v_vals_235_, lean_object* v_heq_236_, lean_object* v_i_237_, lean_object* v_k_238_){
_start:
{
lean_object* v___x_239_; 
v___x_239_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0_spec__1___redArg(v_keys_234_, v_vals_235_, v_i_237_, v_k_238_);
return v___x_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_240_, lean_object* v_keys_241_, lean_object* v_vals_242_, lean_object* v_heq_243_, lean_object* v_i_244_, lean_object* v_k_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0_spec__1(v_00_u03b2_240_, v_keys_241_, v_vals_242_, v_heq_243_, v_i_244_, v_k_245_);
lean_dec(v_k_245_);
lean_dec_ref(v_vals_242_);
lean_dec_ref(v_keys_241_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_247_, lean_object* v_x_248_, lean_object* v_x_249_, lean_object* v_x_250_){
_start:
{
lean_object* v_ks_251_; lean_object* v_vs_252_; lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_276_; 
v_ks_251_ = lean_ctor_get(v_x_247_, 0);
v_vs_252_ = lean_ctor_get(v_x_247_, 1);
v_isSharedCheck_276_ = !lean_is_exclusive(v_x_247_);
if (v_isSharedCheck_276_ == 0)
{
v___x_254_ = v_x_247_;
v_isShared_255_ = v_isSharedCheck_276_;
goto v_resetjp_253_;
}
else
{
lean_inc(v_vs_252_);
lean_inc(v_ks_251_);
lean_dec(v_x_247_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_276_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
lean_object* v___x_256_; uint8_t v___x_257_; 
v___x_256_ = lean_array_get_size(v_ks_251_);
v___x_257_ = lean_nat_dec_lt(v_x_248_, v___x_256_);
if (v___x_257_ == 0)
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_261_; 
lean_dec(v_x_248_);
v___x_258_ = lean_array_push(v_ks_251_, v_x_249_);
v___x_259_ = lean_array_push(v_vs_252_, v_x_250_);
if (v_isShared_255_ == 0)
{
lean_ctor_set(v___x_254_, 1, v___x_259_);
lean_ctor_set(v___x_254_, 0, v___x_258_);
v___x_261_ = v___x_254_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v___x_258_);
lean_ctor_set(v_reuseFailAlloc_262_, 1, v___x_259_);
v___x_261_ = v_reuseFailAlloc_262_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
return v___x_261_;
}
}
else
{
lean_object* v_k_x27_263_; uint8_t v___x_264_; 
v_k_x27_263_ = lean_array_fget_borrowed(v_ks_251_, v_x_248_);
v___x_264_ = lean_name_eq(v_x_249_, v_k_x27_263_);
if (v___x_264_ == 0)
{
lean_object* v___x_266_; 
if (v_isShared_255_ == 0)
{
v___x_266_ = v___x_254_;
goto v_reusejp_265_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v_ks_251_);
lean_ctor_set(v_reuseFailAlloc_270_, 1, v_vs_252_);
v___x_266_ = v_reuseFailAlloc_270_;
goto v_reusejp_265_;
}
v_reusejp_265_:
{
lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_267_ = lean_unsigned_to_nat(1u);
v___x_268_ = lean_nat_add(v_x_248_, v___x_267_);
lean_dec(v_x_248_);
v_x_247_ = v___x_266_;
v_x_248_ = v___x_268_;
goto _start;
}
}
else
{
lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_274_; 
v___x_271_ = lean_array_fset(v_ks_251_, v_x_248_, v_x_249_);
v___x_272_ = lean_array_fset(v_vs_252_, v_x_248_, v_x_250_);
lean_dec(v_x_248_);
if (v_isShared_255_ == 0)
{
lean_ctor_set(v___x_254_, 1, v___x_272_);
lean_ctor_set(v___x_254_, 0, v___x_271_);
v___x_274_ = v___x_254_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v___x_271_);
lean_ctor_set(v_reuseFailAlloc_275_, 1, v___x_272_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__1___redArg(lean_object* v_n_277_, lean_object* v_k_278_, lean_object* v_v_279_){
_start:
{
lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_280_ = lean_unsigned_to_nat(0u);
v___x_281_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__1_spec__2___redArg(v_n_277_, v___x_280_, v_k_278_, v_v_279_);
return v___x_281_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_282_; 
v___x_282_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_282_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg(lean_object* v_x_283_, size_t v_x_284_, size_t v_x_285_, lean_object* v_x_286_, lean_object* v_x_287_){
_start:
{
if (lean_obj_tag(v_x_283_) == 0)
{
lean_object* v_es_288_; size_t v___x_289_; size_t v___x_290_; lean_object* v_j_291_; lean_object* v___x_292_; uint8_t v___x_293_; 
v_es_288_ = lean_ctor_get(v_x_283_, 0);
v___x_289_ = ((size_t)31ULL);
v___x_290_ = lean_usize_land(v_x_284_, v___x_289_);
v_j_291_ = lean_usize_to_nat(v___x_290_);
v___x_292_ = lean_array_get_size(v_es_288_);
v___x_293_ = lean_nat_dec_lt(v_j_291_, v___x_292_);
if (v___x_293_ == 0)
{
lean_dec(v_j_291_);
lean_dec(v_x_287_);
lean_dec(v_x_286_);
return v_x_283_;
}
else
{
lean_object* v___x_295_; uint8_t v_isShared_296_; uint8_t v_isSharedCheck_332_; 
lean_inc_ref(v_es_288_);
v_isSharedCheck_332_ = !lean_is_exclusive(v_x_283_);
if (v_isSharedCheck_332_ == 0)
{
lean_object* v_unused_333_; 
v_unused_333_ = lean_ctor_get(v_x_283_, 0);
lean_dec(v_unused_333_);
v___x_295_ = v_x_283_;
v_isShared_296_ = v_isSharedCheck_332_;
goto v_resetjp_294_;
}
else
{
lean_dec(v_x_283_);
v___x_295_ = lean_box(0);
v_isShared_296_ = v_isSharedCheck_332_;
goto v_resetjp_294_;
}
v_resetjp_294_:
{
lean_object* v_v_297_; lean_object* v___x_298_; lean_object* v_xs_x27_299_; lean_object* v___y_301_; 
v_v_297_ = lean_array_fget(v_es_288_, v_j_291_);
v___x_298_ = lean_box(0);
v_xs_x27_299_ = lean_array_fset(v_es_288_, v_j_291_, v___x_298_);
switch(lean_obj_tag(v_v_297_))
{
case 0:
{
lean_object* v_key_306_; lean_object* v_val_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_317_; 
v_key_306_ = lean_ctor_get(v_v_297_, 0);
v_val_307_ = lean_ctor_get(v_v_297_, 1);
v_isSharedCheck_317_ = !lean_is_exclusive(v_v_297_);
if (v_isSharedCheck_317_ == 0)
{
v___x_309_ = v_v_297_;
v_isShared_310_ = v_isSharedCheck_317_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_val_307_);
lean_inc(v_key_306_);
lean_dec(v_v_297_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_317_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
uint8_t v___x_311_; 
v___x_311_ = lean_name_eq(v_x_286_, v_key_306_);
if (v___x_311_ == 0)
{
lean_object* v___x_312_; lean_object* v___x_313_; 
lean_del_object(v___x_309_);
v___x_312_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_306_, v_val_307_, v_x_286_, v_x_287_);
v___x_313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_313_, 0, v___x_312_);
v___y_301_ = v___x_313_;
goto v___jp_300_;
}
else
{
lean_object* v___x_315_; 
lean_dec(v_val_307_);
lean_dec(v_key_306_);
if (v_isShared_310_ == 0)
{
lean_ctor_set(v___x_309_, 1, v_x_287_);
lean_ctor_set(v___x_309_, 0, v_x_286_);
v___x_315_ = v___x_309_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v_x_286_);
lean_ctor_set(v_reuseFailAlloc_316_, 1, v_x_287_);
v___x_315_ = v_reuseFailAlloc_316_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
v___y_301_ = v___x_315_;
goto v___jp_300_;
}
}
}
}
case 1:
{
lean_object* v_node_318_; lean_object* v___x_320_; uint8_t v_isShared_321_; uint8_t v_isSharedCheck_330_; 
v_node_318_ = lean_ctor_get(v_v_297_, 0);
v_isSharedCheck_330_ = !lean_is_exclusive(v_v_297_);
if (v_isSharedCheck_330_ == 0)
{
v___x_320_ = v_v_297_;
v_isShared_321_ = v_isSharedCheck_330_;
goto v_resetjp_319_;
}
else
{
lean_inc(v_node_318_);
lean_dec(v_v_297_);
v___x_320_ = lean_box(0);
v_isShared_321_ = v_isSharedCheck_330_;
goto v_resetjp_319_;
}
v_resetjp_319_:
{
size_t v___x_322_; size_t v___x_323_; size_t v___x_324_; size_t v___x_325_; lean_object* v___x_326_; lean_object* v___x_328_; 
v___x_322_ = ((size_t)5ULL);
v___x_323_ = lean_usize_shift_right(v_x_284_, v___x_322_);
v___x_324_ = ((size_t)1ULL);
v___x_325_ = lean_usize_add(v_x_285_, v___x_324_);
v___x_326_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg(v_node_318_, v___x_323_, v___x_325_, v_x_286_, v_x_287_);
if (v_isShared_321_ == 0)
{
lean_ctor_set(v___x_320_, 0, v___x_326_);
v___x_328_ = v___x_320_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v___x_326_);
v___x_328_ = v_reuseFailAlloc_329_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
v___y_301_ = v___x_328_;
goto v___jp_300_;
}
}
}
default: 
{
lean_object* v___x_331_; 
v___x_331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_331_, 0, v_x_286_);
lean_ctor_set(v___x_331_, 1, v_x_287_);
v___y_301_ = v___x_331_;
goto v___jp_300_;
}
}
v___jp_300_:
{
lean_object* v___x_302_; lean_object* v___x_304_; 
v___x_302_ = lean_array_fset(v_xs_x27_299_, v_j_291_, v___y_301_);
lean_dec(v_j_291_);
if (v_isShared_296_ == 0)
{
lean_ctor_set(v___x_295_, 0, v___x_302_);
v___x_304_ = v___x_295_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v___x_302_);
v___x_304_ = v_reuseFailAlloc_305_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
return v___x_304_;
}
}
}
}
}
else
{
lean_object* v_ks_334_; lean_object* v_vs_335_; lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_353_; 
v_ks_334_ = lean_ctor_get(v_x_283_, 0);
v_vs_335_ = lean_ctor_get(v_x_283_, 1);
v_isSharedCheck_353_ = !lean_is_exclusive(v_x_283_);
if (v_isSharedCheck_353_ == 0)
{
v___x_337_ = v_x_283_;
v_isShared_338_ = v_isSharedCheck_353_;
goto v_resetjp_336_;
}
else
{
lean_inc(v_vs_335_);
lean_inc(v_ks_334_);
lean_dec(v_x_283_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_353_;
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
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_ks_334_);
lean_ctor_set(v_reuseFailAlloc_352_, 1, v_vs_335_);
v___x_340_ = v_reuseFailAlloc_352_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
lean_object* v_newNode_341_; size_t v___x_342_; uint8_t v___x_343_; 
v_newNode_341_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__1___redArg(v___x_340_, v_x_286_, v_x_287_);
v___x_342_ = ((size_t)7ULL);
v___x_343_ = lean_usize_dec_le(v___x_342_, v_x_285_);
if (v___x_343_ == 0)
{
lean_object* v___x_344_; lean_object* v___x_345_; uint8_t v___x_346_; 
v___x_344_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_341_);
v___x_345_ = lean_unsigned_to_nat(4u);
v___x_346_ = lean_nat_dec_lt(v___x_344_, v___x_345_);
lean_dec(v___x_344_);
if (v___x_346_ == 0)
{
lean_object* v_ks_347_; lean_object* v_vs_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v_ks_347_ = lean_ctor_get(v_newNode_341_, 0);
lean_inc_ref(v_ks_347_);
v_vs_348_ = lean_ctor_get(v_newNode_341_, 1);
lean_inc_ref(v_vs_348_);
lean_dec_ref(v_newNode_341_);
v___x_349_ = lean_unsigned_to_nat(0u);
v___x_350_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg___closed__0);
v___x_351_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__2___redArg(v_x_285_, v_ks_347_, v_vs_348_, v___x_349_, v___x_350_);
lean_dec_ref(v_vs_348_);
lean_dec_ref(v_ks_347_);
return v___x_351_;
}
else
{
return v_newNode_341_;
}
}
else
{
return v_newNode_341_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__2___redArg(size_t v_depth_354_, lean_object* v_keys_355_, lean_object* v_vals_356_, lean_object* v_i_357_, lean_object* v_entries_358_){
_start:
{
lean_object* v___x_359_; uint8_t v___x_360_; 
v___x_359_ = lean_array_get_size(v_keys_355_);
v___x_360_ = lean_nat_dec_lt(v_i_357_, v___x_359_);
if (v___x_360_ == 0)
{
lean_dec(v_i_357_);
return v_entries_358_;
}
else
{
lean_object* v_k_361_; lean_object* v_v_362_; uint64_t v___y_364_; 
v_k_361_ = lean_array_fget_borrowed(v_keys_355_, v_i_357_);
v_v_362_ = lean_array_fget_borrowed(v_vals_356_, v_i_357_);
if (lean_obj_tag(v_k_361_) == 0)
{
uint64_t v___x_375_; 
v___x_375_ = 1723ULL;
v___y_364_ = v___x_375_;
goto v___jp_363_;
}
else
{
uint64_t v_hash_376_; 
v_hash_376_ = lean_ctor_get_uint64(v_k_361_, sizeof(void*)*2);
v___y_364_ = v_hash_376_;
goto v___jp_363_;
}
v___jp_363_:
{
size_t v_h_365_; size_t v___x_366_; lean_object* v___x_367_; size_t v___x_368_; size_t v___x_369_; size_t v___x_370_; size_t v_h_371_; lean_object* v___x_372_; lean_object* v___x_373_; 
v_h_365_ = lean_uint64_to_usize(v___y_364_);
v___x_366_ = ((size_t)5ULL);
v___x_367_ = lean_unsigned_to_nat(1u);
v___x_368_ = ((size_t)1ULL);
v___x_369_ = lean_usize_sub(v_depth_354_, v___x_368_);
v___x_370_ = lean_usize_mul(v___x_366_, v___x_369_);
v_h_371_ = lean_usize_shift_right(v_h_365_, v___x_370_);
v___x_372_ = lean_nat_add(v_i_357_, v___x_367_);
lean_dec(v_i_357_);
lean_inc(v_v_362_);
lean_inc(v_k_361_);
v___x_373_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg(v_entries_358_, v_h_371_, v_depth_354_, v_k_361_, v_v_362_);
v_i_357_ = v___x_372_;
v_entries_358_ = v___x_373_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_377_, lean_object* v_keys_378_, lean_object* v_vals_379_, lean_object* v_i_380_, lean_object* v_entries_381_){
_start:
{
size_t v_depth_boxed_382_; lean_object* v_res_383_; 
v_depth_boxed_382_ = lean_unbox_usize(v_depth_377_);
lean_dec(v_depth_377_);
v_res_383_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__2___redArg(v_depth_boxed_382_, v_keys_378_, v_vals_379_, v_i_380_, v_entries_381_);
lean_dec_ref(v_vals_379_);
lean_dec_ref(v_keys_378_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg___boxed(lean_object* v_x_384_, lean_object* v_x_385_, lean_object* v_x_386_, lean_object* v_x_387_, lean_object* v_x_388_){
_start:
{
size_t v_x_363__boxed_389_; size_t v_x_364__boxed_390_; lean_object* v_res_391_; 
v_x_363__boxed_389_ = lean_unbox_usize(v_x_385_);
lean_dec(v_x_385_);
v_x_364__boxed_390_ = lean_unbox_usize(v_x_386_);
lean_dec(v_x_386_);
v_res_391_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg(v_x_384_, v_x_363__boxed_389_, v_x_364__boxed_390_, v_x_387_, v_x_388_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0___redArg(lean_object* v_x_392_, lean_object* v_x_393_, lean_object* v_x_394_){
_start:
{
uint64_t v___y_396_; 
if (lean_obj_tag(v_x_393_) == 0)
{
uint64_t v___x_400_; 
v___x_400_ = 1723ULL;
v___y_396_ = v___x_400_;
goto v___jp_395_;
}
else
{
uint64_t v_hash_401_; 
v_hash_401_ = lean_ctor_get_uint64(v_x_393_, sizeof(void*)*2);
v___y_396_ = v_hash_401_;
goto v___jp_395_;
}
v___jp_395_:
{
size_t v___x_397_; size_t v___x_398_; lean_object* v___x_399_; 
v___x_397_ = lean_uint64_to_usize(v___y_396_);
v___x_398_ = ((size_t)1ULL);
v___x_399_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg(v_x_392_, v___x_397_, v___x_398_, v_x_393_, v_x_394_);
return v___x_399_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange(lean_object* v_d_402_, lean_object* v_className_403_, lean_object* v_c_404_){
_start:
{
lean_object* v_discrTree_405_; lean_object* v_instanceNames_406_; lean_object* v_erased_407_; lean_object* v_classChanges_408_; lean_object* v___x_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_418_; 
v_discrTree_405_ = lean_ctor_get(v_d_402_, 0);
lean_inc_ref(v_discrTree_405_);
v_instanceNames_406_ = lean_ctor_get(v_d_402_, 1);
lean_inc_ref(v_instanceNames_406_);
v_erased_407_ = lean_ctor_get(v_d_402_, 2);
lean_inc_ref(v_erased_407_);
v_classChanges_408_ = lean_ctor_get(v_d_402_, 3);
lean_inc_ref(v_classChanges_408_);
v___x_409_ = l_Lean_Meta_Instances_getClassChanges(v_d_402_, v_className_403_);
v_isSharedCheck_418_ = !lean_is_exclusive(v_d_402_);
if (v_isSharedCheck_418_ == 0)
{
lean_object* v_unused_419_; lean_object* v_unused_420_; lean_object* v_unused_421_; lean_object* v_unused_422_; 
v_unused_419_ = lean_ctor_get(v_d_402_, 3);
lean_dec(v_unused_419_);
v_unused_420_ = lean_ctor_get(v_d_402_, 2);
lean_dec(v_unused_420_);
v_unused_421_ = lean_ctor_get(v_d_402_, 1);
lean_dec(v_unused_421_);
v_unused_422_ = lean_ctor_get(v_d_402_, 0);
lean_dec(v_unused_422_);
v___x_411_ = v_d_402_;
v_isShared_412_ = v_isSharedCheck_418_;
goto v_resetjp_410_;
}
else
{
lean_dec(v_d_402_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_418_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_416_; 
v___x_413_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_413_, 0, v_c_404_);
lean_ctor_set(v___x_413_, 1, v___x_409_);
v___x_414_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0___redArg(v_classChanges_408_, v_className_403_, v___x_413_);
if (v_isShared_412_ == 0)
{
lean_ctor_set(v___x_411_, 3, v___x_414_);
v___x_416_ = v___x_411_;
goto v_reusejp_415_;
}
else
{
lean_object* v_reuseFailAlloc_417_; 
v_reuseFailAlloc_417_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_417_, 0, v_discrTree_405_);
lean_ctor_set(v_reuseFailAlloc_417_, 1, v_instanceNames_406_);
lean_ctor_set(v_reuseFailAlloc_417_, 2, v_erased_407_);
lean_ctor_set(v_reuseFailAlloc_417_, 3, v___x_414_);
v___x_416_ = v_reuseFailAlloc_417_;
goto v_reusejp_415_;
}
v_reusejp_415_:
{
return v___x_416_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0(lean_object* v_00_u03b2_423_, lean_object* v_x_424_, lean_object* v_x_425_, lean_object* v_x_426_){
_start:
{
lean_object* v___x_427_; 
v___x_427_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0___redArg(v_x_424_, v_x_425_, v_x_426_);
return v___x_427_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0(lean_object* v_00_u03b2_428_, lean_object* v_x_429_, size_t v_x_430_, size_t v_x_431_, lean_object* v_x_432_, lean_object* v_x_433_){
_start:
{
lean_object* v___x_434_; 
v___x_434_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg(v_x_429_, v_x_430_, v_x_431_, v_x_432_, v_x_433_);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___boxed(lean_object* v_00_u03b2_435_, lean_object* v_x_436_, lean_object* v_x_437_, lean_object* v_x_438_, lean_object* v_x_439_, lean_object* v_x_440_){
_start:
{
size_t v_x_571__boxed_441_; size_t v_x_572__boxed_442_; lean_object* v_res_443_; 
v_x_571__boxed_441_ = lean_unbox_usize(v_x_437_);
lean_dec(v_x_437_);
v_x_572__boxed_442_ = lean_unbox_usize(v_x_438_);
lean_dec(v_x_438_);
v_res_443_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0(v_00_u03b2_435_, v_x_436_, v_x_571__boxed_441_, v_x_572__boxed_442_, v_x_439_, v_x_440_);
return v_res_443_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_444_, lean_object* v_n_445_, lean_object* v_k_446_, lean_object* v_v_447_){
_start:
{
lean_object* v___x_448_; 
v___x_448_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__1___redArg(v_n_445_, v_k_446_, v_v_447_);
return v___x_448_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_449_, size_t v_depth_450_, lean_object* v_keys_451_, lean_object* v_vals_452_, lean_object* v_heq_453_, lean_object* v_i_454_, lean_object* v_entries_455_){
_start:
{
lean_object* v___x_456_; 
v___x_456_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__2___redArg(v_depth_450_, v_keys_451_, v_vals_452_, v_i_454_, v_entries_455_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_457_, lean_object* v_depth_458_, lean_object* v_keys_459_, lean_object* v_vals_460_, lean_object* v_heq_461_, lean_object* v_i_462_, lean_object* v_entries_463_){
_start:
{
size_t v_depth_boxed_464_; lean_object* v_res_465_; 
v_depth_boxed_464_ = lean_unbox_usize(v_depth_458_);
lean_dec(v_depth_458_);
v_res_465_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__2(v_00_u03b2_457_, v_depth_boxed_464_, v_keys_459_, v_vals_460_, v_heq_461_, v_i_462_, v_entries_463_);
lean_dec_ref(v_vals_460_);
lean_dec_ref(v_keys_459_);
return v_res_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_466_, lean_object* v_x_467_, lean_object* v_x_468_, lean_object* v_x_469_, lean_object* v_x_470_){
_start:
{
lean_object* v___x_471_; 
v___x_471_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__1_spec__2___redArg(v_x_467_, v_x_468_, v_x_469_, v_x_470_);
return v___x_471_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4_spec__10_spec__17(lean_object* v_xs_472_, lean_object* v_v_473_, lean_object* v_i_474_){
_start:
{
lean_object* v___x_475_; uint8_t v___x_476_; 
v___x_475_ = lean_array_get_size(v_xs_472_);
v___x_476_ = lean_nat_dec_lt(v_i_474_, v___x_475_);
if (v___x_476_ == 0)
{
lean_object* v___x_477_; 
lean_dec(v_i_474_);
v___x_477_ = lean_box(0);
return v___x_477_;
}
else
{
lean_object* v___x_478_; uint8_t v___x_479_; 
v___x_478_ = lean_array_fget_borrowed(v_xs_472_, v_i_474_);
v___x_479_ = lean_name_eq(v___x_478_, v_v_473_);
if (v___x_479_ == 0)
{
lean_object* v___x_480_; lean_object* v___x_481_; 
v___x_480_ = lean_unsigned_to_nat(1u);
v___x_481_ = lean_nat_add(v_i_474_, v___x_480_);
lean_dec(v_i_474_);
v_i_474_ = v___x_481_;
goto _start;
}
else
{
lean_object* v___x_483_; 
v___x_483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_483_, 0, v_i_474_);
return v___x_483_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4_spec__10_spec__17___boxed(lean_object* v_xs_484_, lean_object* v_v_485_, lean_object* v_i_486_){
_start:
{
lean_object* v_res_487_; 
v_res_487_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4_spec__10_spec__17(v_xs_484_, v_v_485_, v_i_486_);
lean_dec(v_v_485_);
lean_dec_ref(v_xs_484_);
return v_res_487_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4_spec__10(lean_object* v_xs_488_, lean_object* v_v_489_){
_start:
{
lean_object* v___x_490_; lean_object* v___x_491_; 
v___x_490_ = lean_unsigned_to_nat(0u);
v___x_491_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4_spec__10_spec__17(v_xs_488_, v_v_489_, v___x_490_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4_spec__10___boxed(lean_object* v_xs_492_, lean_object* v_v_493_){
_start:
{
lean_object* v_res_494_; 
v_res_494_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4_spec__10(v_xs_492_, v_v_493_);
lean_dec(v_v_493_);
lean_dec_ref(v_xs_492_);
return v_res_494_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4___redArg(lean_object* v_x_495_, size_t v_x_496_, lean_object* v_x_497_){
_start:
{
if (lean_obj_tag(v_x_495_) == 0)
{
lean_object* v_es_498_; lean_object* v___x_499_; size_t v___x_500_; size_t v___x_501_; lean_object* v_j_502_; lean_object* v_entry_503_; 
v_es_498_ = lean_ctor_get(v_x_495_, 0);
v___x_499_ = lean_box(2);
v___x_500_ = ((size_t)31ULL);
v___x_501_ = lean_usize_land(v_x_496_, v___x_500_);
v_j_502_ = lean_usize_to_nat(v___x_501_);
v_entry_503_ = lean_array_get(v___x_499_, v_es_498_, v_j_502_);
switch(lean_obj_tag(v_entry_503_))
{
case 0:
{
lean_object* v_key_504_; uint8_t v___x_505_; 
v_key_504_ = lean_ctor_get(v_entry_503_, 0);
lean_inc(v_key_504_);
lean_dec_ref_known(v_entry_503_, 2);
v___x_505_ = lean_name_eq(v_x_497_, v_key_504_);
lean_dec(v_key_504_);
if (v___x_505_ == 0)
{
lean_dec(v_j_502_);
return v_x_495_;
}
else
{
lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_513_; 
lean_inc_ref(v_es_498_);
v_isSharedCheck_513_ = !lean_is_exclusive(v_x_495_);
if (v_isSharedCheck_513_ == 0)
{
lean_object* v_unused_514_; 
v_unused_514_ = lean_ctor_get(v_x_495_, 0);
lean_dec(v_unused_514_);
v___x_507_ = v_x_495_;
v_isShared_508_ = v_isSharedCheck_513_;
goto v_resetjp_506_;
}
else
{
lean_dec(v_x_495_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_513_;
goto v_resetjp_506_;
}
v_resetjp_506_:
{
lean_object* v___x_509_; lean_object* v___x_511_; 
v___x_509_ = lean_array_set(v_es_498_, v_j_502_, v___x_499_);
lean_dec(v_j_502_);
if (v_isShared_508_ == 0)
{
lean_ctor_set(v___x_507_, 0, v___x_509_);
v___x_511_ = v___x_507_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v___x_509_);
v___x_511_ = v_reuseFailAlloc_512_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
return v___x_511_;
}
}
}
}
case 1:
{
lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_549_; 
lean_inc_ref(v_es_498_);
v_isSharedCheck_549_ = !lean_is_exclusive(v_x_495_);
if (v_isSharedCheck_549_ == 0)
{
lean_object* v_unused_550_; 
v_unused_550_ = lean_ctor_get(v_x_495_, 0);
lean_dec(v_unused_550_);
v___x_516_ = v_x_495_;
v_isShared_517_ = v_isSharedCheck_549_;
goto v_resetjp_515_;
}
else
{
lean_dec(v_x_495_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_549_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v_node_518_; lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_548_; 
v_node_518_ = lean_ctor_get(v_entry_503_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v_entry_503_);
if (v_isSharedCheck_548_ == 0)
{
v___x_520_ = v_entry_503_;
v_isShared_521_ = v_isSharedCheck_548_;
goto v_resetjp_519_;
}
else
{
lean_inc(v_node_518_);
lean_dec(v_entry_503_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_548_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
size_t v___x_522_; lean_object* v_entries_523_; size_t v___x_524_; lean_object* v_newNode_525_; lean_object* v___x_526_; 
v___x_522_ = ((size_t)5ULL);
v_entries_523_ = lean_array_set(v_es_498_, v_j_502_, v___x_499_);
v___x_524_ = lean_usize_shift_right(v_x_496_, v___x_522_);
v_newNode_525_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4___redArg(v_node_518_, v___x_524_, v_x_497_);
lean_inc_ref(v_newNode_525_);
v___x_526_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_525_);
if (lean_obj_tag(v___x_526_) == 0)
{
lean_object* v___x_528_; 
if (v_isShared_521_ == 0)
{
lean_ctor_set(v___x_520_, 0, v_newNode_525_);
v___x_528_ = v___x_520_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v_newNode_525_);
v___x_528_ = v_reuseFailAlloc_533_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
lean_object* v___x_529_; lean_object* v___x_531_; 
v___x_529_ = lean_array_set(v_entries_523_, v_j_502_, v___x_528_);
lean_dec(v_j_502_);
if (v_isShared_517_ == 0)
{
lean_ctor_set(v___x_516_, 0, v___x_529_);
v___x_531_ = v___x_516_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v___x_529_);
v___x_531_ = v_reuseFailAlloc_532_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
return v___x_531_;
}
}
}
else
{
lean_object* v_val_534_; lean_object* v_fst_535_; lean_object* v_snd_536_; lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_547_; 
lean_dec_ref(v_newNode_525_);
lean_del_object(v___x_520_);
v_val_534_ = lean_ctor_get(v___x_526_, 0);
lean_inc(v_val_534_);
lean_dec_ref_known(v___x_526_, 1);
v_fst_535_ = lean_ctor_get(v_val_534_, 0);
v_snd_536_ = lean_ctor_get(v_val_534_, 1);
v_isSharedCheck_547_ = !lean_is_exclusive(v_val_534_);
if (v_isSharedCheck_547_ == 0)
{
v___x_538_ = v_val_534_;
v_isShared_539_ = v_isSharedCheck_547_;
goto v_resetjp_537_;
}
else
{
lean_inc(v_snd_536_);
lean_inc(v_fst_535_);
lean_dec(v_val_534_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_547_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
lean_object* v___x_541_; 
if (v_isShared_539_ == 0)
{
v___x_541_ = v___x_538_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v_fst_535_);
lean_ctor_set(v_reuseFailAlloc_546_, 1, v_snd_536_);
v___x_541_ = v_reuseFailAlloc_546_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
lean_object* v___x_542_; lean_object* v___x_544_; 
v___x_542_ = lean_array_set(v_entries_523_, v_j_502_, v___x_541_);
lean_dec(v_j_502_);
if (v_isShared_517_ == 0)
{
lean_ctor_set(v___x_516_, 0, v___x_542_);
v___x_544_ = v___x_516_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v___x_542_);
v___x_544_ = v_reuseFailAlloc_545_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
return v___x_544_;
}
}
}
}
}
}
}
default: 
{
lean_dec(v_j_502_);
return v_x_495_;
}
}
}
else
{
lean_object* v_ks_551_; lean_object* v_vs_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_566_; 
v_ks_551_ = lean_ctor_get(v_x_495_, 0);
v_vs_552_ = lean_ctor_get(v_x_495_, 1);
v_isSharedCheck_566_ = !lean_is_exclusive(v_x_495_);
if (v_isSharedCheck_566_ == 0)
{
v___x_554_ = v_x_495_;
v_isShared_555_ = v_isSharedCheck_566_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_vs_552_);
lean_inc(v_ks_551_);
lean_dec(v_x_495_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_566_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v___x_556_; 
v___x_556_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4_spec__10(v_ks_551_, v_x_497_);
if (lean_obj_tag(v___x_556_) == 0)
{
lean_object* v___x_558_; 
if (v_isShared_555_ == 0)
{
v___x_558_ = v___x_554_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v_ks_551_);
lean_ctor_set(v_reuseFailAlloc_559_, 1, v_vs_552_);
v___x_558_ = v_reuseFailAlloc_559_;
goto v_reusejp_557_;
}
v_reusejp_557_:
{
return v___x_558_;
}
}
else
{
lean_object* v_val_560_; lean_object* v_keys_x27_561_; lean_object* v_vals_x27_562_; lean_object* v___x_564_; 
v_val_560_ = lean_ctor_get(v___x_556_, 0);
lean_inc_n(v_val_560_, 2);
lean_dec_ref_known(v___x_556_, 1);
v_keys_x27_561_ = l_Array_eraseIdx___redArg(v_ks_551_, v_val_560_);
v_vals_x27_562_ = l_Array_eraseIdx___redArg(v_vs_552_, v_val_560_);
if (v_isShared_555_ == 0)
{
lean_ctor_set(v___x_554_, 1, v_vals_x27_562_);
lean_ctor_set(v___x_554_, 0, v_keys_x27_561_);
v___x_564_ = v___x_554_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v_keys_x27_561_);
lean_ctor_set(v_reuseFailAlloc_565_, 1, v_vals_x27_562_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4___redArg___boxed(lean_object* v_x_567_, lean_object* v_x_568_, lean_object* v_x_569_){
_start:
{
size_t v_x_2778__boxed_570_; lean_object* v_res_571_; 
v_x_2778__boxed_570_ = lean_unbox_usize(v_x_568_);
lean_dec(v_x_568_);
v_res_571_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4___redArg(v_x_567_, v_x_2778__boxed_570_, v_x_569_);
lean_dec(v_x_569_);
return v_res_571_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1___redArg(lean_object* v_x_572_, lean_object* v_x_573_){
_start:
{
uint64_t v___y_575_; 
if (lean_obj_tag(v_x_573_) == 0)
{
uint64_t v___x_578_; 
v___x_578_ = 1723ULL;
v___y_575_ = v___x_578_;
goto v___jp_574_;
}
else
{
uint64_t v_hash_579_; 
v_hash_579_ = lean_ctor_get_uint64(v_x_573_, sizeof(void*)*2);
v___y_575_ = v_hash_579_;
goto v___jp_574_;
}
v___jp_574_:
{
size_t v_h_576_; lean_object* v___x_577_; 
v_h_576_ = lean_uint64_to_usize(v___y_575_);
v___x_577_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4___redArg(v_x_572_, v_h_576_, v_x_573_);
return v___x_577_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1___redArg___boxed(lean_object* v_x_580_, lean_object* v_x_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1___redArg(v_x_580_, v_x_581_);
lean_dec(v_x_581_);
return v_res_582_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__13_spec__15___redArg(lean_object* v_x_583_, lean_object* v_x_584_, lean_object* v_x_585_, lean_object* v_x_586_){
_start:
{
lean_object* v_ks_587_; lean_object* v_vs_588_; lean_object* v___x_590_; uint8_t v_isShared_591_; uint8_t v_isSharedCheck_612_; 
v_ks_587_ = lean_ctor_get(v_x_583_, 0);
v_vs_588_ = lean_ctor_get(v_x_583_, 1);
v_isSharedCheck_612_ = !lean_is_exclusive(v_x_583_);
if (v_isSharedCheck_612_ == 0)
{
v___x_590_ = v_x_583_;
v_isShared_591_ = v_isSharedCheck_612_;
goto v_resetjp_589_;
}
else
{
lean_inc(v_vs_588_);
lean_inc(v_ks_587_);
lean_dec(v_x_583_);
v___x_590_ = lean_box(0);
v_isShared_591_ = v_isSharedCheck_612_;
goto v_resetjp_589_;
}
v_resetjp_589_:
{
lean_object* v___x_592_; uint8_t v___x_593_; 
v___x_592_ = lean_array_get_size(v_ks_587_);
v___x_593_ = lean_nat_dec_lt(v_x_584_, v___x_592_);
if (v___x_593_ == 0)
{
lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_597_; 
lean_dec(v_x_584_);
v___x_594_ = lean_array_push(v_ks_587_, v_x_585_);
v___x_595_ = lean_array_push(v_vs_588_, v_x_586_);
if (v_isShared_591_ == 0)
{
lean_ctor_set(v___x_590_, 1, v___x_595_);
lean_ctor_set(v___x_590_, 0, v___x_594_);
v___x_597_ = v___x_590_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v___x_594_);
lean_ctor_set(v_reuseFailAlloc_598_, 1, v___x_595_);
v___x_597_ = v_reuseFailAlloc_598_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
return v___x_597_;
}
}
else
{
lean_object* v_k_x27_599_; uint8_t v___x_600_; 
v_k_x27_599_ = lean_array_fget_borrowed(v_ks_587_, v_x_584_);
v___x_600_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_585_, v_k_x27_599_);
if (v___x_600_ == 0)
{
lean_object* v___x_602_; 
if (v_isShared_591_ == 0)
{
v___x_602_ = v___x_590_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v_ks_587_);
lean_ctor_set(v_reuseFailAlloc_606_, 1, v_vs_588_);
v___x_602_ = v_reuseFailAlloc_606_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_603_ = lean_unsigned_to_nat(1u);
v___x_604_ = lean_nat_add(v_x_584_, v___x_603_);
lean_dec(v_x_584_);
v_x_583_ = v___x_602_;
v_x_584_ = v___x_604_;
goto _start;
}
}
else
{
lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_610_; 
v___x_607_ = lean_array_fset(v_ks_587_, v_x_584_, v_x_585_);
v___x_608_ = lean_array_fset(v_vs_588_, v_x_584_, v_x_586_);
lean_dec(v_x_584_);
if (v_isShared_591_ == 0)
{
lean_ctor_set(v___x_590_, 1, v___x_608_);
lean_ctor_set(v___x_590_, 0, v___x_607_);
v___x_610_ = v___x_590_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v___x_607_);
lean_ctor_set(v_reuseFailAlloc_611_, 1, v___x_608_);
v___x_610_ = v_reuseFailAlloc_611_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
return v___x_610_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__13___redArg(lean_object* v_n_613_, lean_object* v_k_614_, lean_object* v_v_615_){
_start:
{
lean_object* v___x_616_; lean_object* v___x_617_; 
v___x_616_ = lean_unsigned_to_nat(0u);
v___x_617_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__13_spec__15___redArg(v_n_613_, v___x_616_, v_k_614_, v_v_615_);
return v___x_617_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6___redArg(lean_object* v_x_618_, size_t v_x_619_, size_t v_x_620_, lean_object* v_x_621_, lean_object* v_x_622_){
_start:
{
if (lean_obj_tag(v_x_618_) == 0)
{
lean_object* v_es_623_; size_t v___x_624_; size_t v___x_625_; lean_object* v_j_626_; lean_object* v___x_627_; uint8_t v___x_628_; 
v_es_623_ = lean_ctor_get(v_x_618_, 0);
v___x_624_ = ((size_t)31ULL);
v___x_625_ = lean_usize_land(v_x_619_, v___x_624_);
v_j_626_ = lean_usize_to_nat(v___x_625_);
v___x_627_ = lean_array_get_size(v_es_623_);
v___x_628_ = lean_nat_dec_lt(v_j_626_, v___x_627_);
if (v___x_628_ == 0)
{
lean_dec(v_j_626_);
lean_dec(v_x_622_);
lean_dec(v_x_621_);
return v_x_618_;
}
else
{
lean_object* v___x_630_; uint8_t v_isShared_631_; uint8_t v_isSharedCheck_667_; 
lean_inc_ref(v_es_623_);
v_isSharedCheck_667_ = !lean_is_exclusive(v_x_618_);
if (v_isSharedCheck_667_ == 0)
{
lean_object* v_unused_668_; 
v_unused_668_ = lean_ctor_get(v_x_618_, 0);
lean_dec(v_unused_668_);
v___x_630_ = v_x_618_;
v_isShared_631_ = v_isSharedCheck_667_;
goto v_resetjp_629_;
}
else
{
lean_dec(v_x_618_);
v___x_630_ = lean_box(0);
v_isShared_631_ = v_isSharedCheck_667_;
goto v_resetjp_629_;
}
v_resetjp_629_:
{
lean_object* v_v_632_; lean_object* v___x_633_; lean_object* v_xs_x27_634_; lean_object* v___y_636_; 
v_v_632_ = lean_array_fget(v_es_623_, v_j_626_);
v___x_633_ = lean_box(0);
v_xs_x27_634_ = lean_array_fset(v_es_623_, v_j_626_, v___x_633_);
switch(lean_obj_tag(v_v_632_))
{
case 0:
{
lean_object* v_key_641_; lean_object* v_val_642_; lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_652_; 
v_key_641_ = lean_ctor_get(v_v_632_, 0);
v_val_642_ = lean_ctor_get(v_v_632_, 1);
v_isSharedCheck_652_ = !lean_is_exclusive(v_v_632_);
if (v_isSharedCheck_652_ == 0)
{
v___x_644_ = v_v_632_;
v_isShared_645_ = v_isSharedCheck_652_;
goto v_resetjp_643_;
}
else
{
lean_inc(v_val_642_);
lean_inc(v_key_641_);
lean_dec(v_v_632_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_652_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
uint8_t v___x_646_; 
v___x_646_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_621_, v_key_641_);
if (v___x_646_ == 0)
{
lean_object* v___x_647_; lean_object* v___x_648_; 
lean_del_object(v___x_644_);
v___x_647_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_641_, v_val_642_, v_x_621_, v_x_622_);
v___x_648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_648_, 0, v___x_647_);
v___y_636_ = v___x_648_;
goto v___jp_635_;
}
else
{
lean_object* v___x_650_; 
lean_dec(v_val_642_);
lean_dec(v_key_641_);
if (v_isShared_645_ == 0)
{
lean_ctor_set(v___x_644_, 1, v_x_622_);
lean_ctor_set(v___x_644_, 0, v_x_621_);
v___x_650_ = v___x_644_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v_x_621_);
lean_ctor_set(v_reuseFailAlloc_651_, 1, v_x_622_);
v___x_650_ = v_reuseFailAlloc_651_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
v___y_636_ = v___x_650_;
goto v___jp_635_;
}
}
}
}
case 1:
{
lean_object* v_node_653_; lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_665_; 
v_node_653_ = lean_ctor_get(v_v_632_, 0);
v_isSharedCheck_665_ = !lean_is_exclusive(v_v_632_);
if (v_isSharedCheck_665_ == 0)
{
v___x_655_ = v_v_632_;
v_isShared_656_ = v_isSharedCheck_665_;
goto v_resetjp_654_;
}
else
{
lean_inc(v_node_653_);
lean_dec(v_v_632_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_665_;
goto v_resetjp_654_;
}
v_resetjp_654_:
{
size_t v___x_657_; size_t v___x_658_; size_t v___x_659_; size_t v___x_660_; lean_object* v___x_661_; lean_object* v___x_663_; 
v___x_657_ = ((size_t)5ULL);
v___x_658_ = lean_usize_shift_right(v_x_619_, v___x_657_);
v___x_659_ = ((size_t)1ULL);
v___x_660_ = lean_usize_add(v_x_620_, v___x_659_);
v___x_661_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6___redArg(v_node_653_, v___x_658_, v___x_660_, v_x_621_, v_x_622_);
if (v_isShared_656_ == 0)
{
lean_ctor_set(v___x_655_, 0, v___x_661_);
v___x_663_ = v___x_655_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_664_; 
v_reuseFailAlloc_664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_664_, 0, v___x_661_);
v___x_663_ = v_reuseFailAlloc_664_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
v___y_636_ = v___x_663_;
goto v___jp_635_;
}
}
}
default: 
{
lean_object* v___x_666_; 
v___x_666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_666_, 0, v_x_621_);
lean_ctor_set(v___x_666_, 1, v_x_622_);
v___y_636_ = v___x_666_;
goto v___jp_635_;
}
}
v___jp_635_:
{
lean_object* v___x_637_; lean_object* v___x_639_; 
v___x_637_ = lean_array_fset(v_xs_x27_634_, v_j_626_, v___y_636_);
lean_dec(v_j_626_);
if (v_isShared_631_ == 0)
{
lean_ctor_set(v___x_630_, 0, v___x_637_);
v___x_639_ = v___x_630_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v___x_637_);
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
else
{
lean_object* v_ks_669_; lean_object* v_vs_670_; lean_object* v___x_672_; uint8_t v_isShared_673_; uint8_t v_isSharedCheck_688_; 
v_ks_669_ = lean_ctor_get(v_x_618_, 0);
v_vs_670_ = lean_ctor_get(v_x_618_, 1);
v_isSharedCheck_688_ = !lean_is_exclusive(v_x_618_);
if (v_isSharedCheck_688_ == 0)
{
v___x_672_ = v_x_618_;
v_isShared_673_ = v_isSharedCheck_688_;
goto v_resetjp_671_;
}
else
{
lean_inc(v_vs_670_);
lean_inc(v_ks_669_);
lean_dec(v_x_618_);
v___x_672_ = lean_box(0);
v_isShared_673_ = v_isSharedCheck_688_;
goto v_resetjp_671_;
}
v_resetjp_671_:
{
lean_object* v___x_675_; 
if (v_isShared_673_ == 0)
{
v___x_675_ = v___x_672_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v_ks_669_);
lean_ctor_set(v_reuseFailAlloc_687_, 1, v_vs_670_);
v___x_675_ = v_reuseFailAlloc_687_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
lean_object* v_newNode_676_; size_t v___x_677_; uint8_t v___x_678_; 
v_newNode_676_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__13___redArg(v___x_675_, v_x_621_, v_x_622_);
v___x_677_ = ((size_t)7ULL);
v___x_678_ = lean_usize_dec_le(v___x_677_, v_x_620_);
if (v___x_678_ == 0)
{
lean_object* v___x_679_; lean_object* v___x_680_; uint8_t v___x_681_; 
v___x_679_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_676_);
v___x_680_ = lean_unsigned_to_nat(4u);
v___x_681_ = lean_nat_dec_lt(v___x_679_, v___x_680_);
lean_dec(v___x_679_);
if (v___x_681_ == 0)
{
lean_object* v_ks_682_; lean_object* v_vs_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
v_ks_682_ = lean_ctor_get(v_newNode_676_, 0);
lean_inc_ref(v_ks_682_);
v_vs_683_ = lean_ctor_get(v_newNode_676_, 1);
lean_inc_ref(v_vs_683_);
lean_dec_ref(v_newNode_676_);
v___x_684_ = lean_unsigned_to_nat(0u);
v___x_685_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg___closed__0);
v___x_686_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__14___redArg(v_x_620_, v_ks_682_, v_vs_683_, v___x_684_, v___x_685_);
lean_dec_ref(v_vs_683_);
lean_dec_ref(v_ks_682_);
return v___x_686_;
}
else
{
return v_newNode_676_;
}
}
else
{
return v_newNode_676_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__14___redArg(size_t v_depth_689_, lean_object* v_keys_690_, lean_object* v_vals_691_, lean_object* v_i_692_, lean_object* v_entries_693_){
_start:
{
lean_object* v___x_694_; uint8_t v___x_695_; 
v___x_694_ = lean_array_get_size(v_keys_690_);
v___x_695_ = lean_nat_dec_lt(v_i_692_, v___x_694_);
if (v___x_695_ == 0)
{
lean_dec(v_i_692_);
return v_entries_693_;
}
else
{
lean_object* v_k_696_; lean_object* v_v_697_; uint64_t v___x_698_; size_t v_h_699_; size_t v___x_700_; lean_object* v___x_701_; size_t v___x_702_; size_t v___x_703_; size_t v___x_704_; size_t v_h_705_; lean_object* v___x_706_; lean_object* v___x_707_; 
v_k_696_ = lean_array_fget_borrowed(v_keys_690_, v_i_692_);
v_v_697_ = lean_array_fget_borrowed(v_vals_691_, v_i_692_);
v___x_698_ = l_Lean_Meta_DiscrTree_Key_hash(v_k_696_);
v_h_699_ = lean_uint64_to_usize(v___x_698_);
v___x_700_ = ((size_t)5ULL);
v___x_701_ = lean_unsigned_to_nat(1u);
v___x_702_ = ((size_t)1ULL);
v___x_703_ = lean_usize_sub(v_depth_689_, v___x_702_);
v___x_704_ = lean_usize_mul(v___x_700_, v___x_703_);
v_h_705_ = lean_usize_shift_right(v_h_699_, v___x_704_);
v___x_706_ = lean_nat_add(v_i_692_, v___x_701_);
lean_dec(v_i_692_);
lean_inc(v_v_697_);
lean_inc(v_k_696_);
v___x_707_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6___redArg(v_entries_693_, v_h_705_, v_depth_689_, v_k_696_, v_v_697_);
v_i_692_ = v___x_706_;
v_entries_693_ = v___x_707_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__14___redArg___boxed(lean_object* v_depth_709_, lean_object* v_keys_710_, lean_object* v_vals_711_, lean_object* v_i_712_, lean_object* v_entries_713_){
_start:
{
size_t v_depth_boxed_714_; lean_object* v_res_715_; 
v_depth_boxed_714_ = lean_unbox_usize(v_depth_709_);
lean_dec(v_depth_709_);
v_res_715_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__14___redArg(v_depth_boxed_714_, v_keys_710_, v_vals_711_, v_i_712_, v_entries_713_);
lean_dec_ref(v_vals_711_);
lean_dec_ref(v_keys_710_);
return v_res_715_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6___redArg___boxed(lean_object* v_x_716_, lean_object* v_x_717_, lean_object* v_x_718_, lean_object* v_x_719_, lean_object* v_x_720_){
_start:
{
size_t v_x_3003__boxed_721_; size_t v_x_3004__boxed_722_; lean_object* v_res_723_; 
v_x_3003__boxed_721_ = lean_unbox_usize(v_x_717_);
lean_dec(v_x_717_);
v_x_3004__boxed_722_ = lean_unbox_usize(v_x_718_);
lean_dec(v_x_718_);
v_res_723_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6___redArg(v_x_716_, v_x_3003__boxed_721_, v_x_3004__boxed_722_, v_x_719_, v_x_720_);
return v_res_723_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__5_spec__11(lean_object* v_xs_724_, lean_object* v_v_725_, lean_object* v_i_726_){
_start:
{
lean_object* v___x_727_; uint8_t v___x_728_; 
v___x_727_ = lean_array_get_size(v_xs_724_);
v___x_728_ = lean_nat_dec_lt(v_i_726_, v___x_727_);
if (v___x_728_ == 0)
{
lean_object* v___x_729_; 
lean_dec(v_i_726_);
v___x_729_ = lean_box(0);
return v___x_729_;
}
else
{
lean_object* v___x_730_; uint8_t v___x_731_; 
v___x_730_ = lean_array_fget_borrowed(v_xs_724_, v_i_726_);
v___x_731_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v___x_730_, v_v_725_);
if (v___x_731_ == 0)
{
lean_object* v___x_732_; lean_object* v___x_733_; 
v___x_732_ = lean_unsigned_to_nat(1u);
v___x_733_ = lean_nat_add(v_i_726_, v___x_732_);
lean_dec(v_i_726_);
v_i_726_ = v___x_733_;
goto _start;
}
else
{
lean_object* v___x_735_; 
v___x_735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_735_, 0, v_i_726_);
return v___x_735_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__5_spec__11___boxed(lean_object* v_xs_736_, lean_object* v_v_737_, lean_object* v_i_738_){
_start:
{
lean_object* v_res_739_; 
v_res_739_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__5_spec__11(v_xs_736_, v_v_737_, v_i_738_);
lean_dec(v_v_737_);
lean_dec_ref(v_xs_736_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__5(lean_object* v_xs_740_, lean_object* v_v_741_){
_start:
{
lean_object* v___x_742_; lean_object* v___x_743_; 
v___x_742_ = lean_unsigned_to_nat(0u);
v___x_743_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__5_spec__11(v_xs_740_, v_v_741_, v___x_742_);
return v___x_743_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__5___boxed(lean_object* v_xs_744_, lean_object* v_v_745_){
_start:
{
lean_object* v_res_746_; 
v_res_746_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__5(v_xs_744_, v_v_745_);
lean_dec(v_v_745_);
lean_dec_ref(v_xs_744_);
return v_res_746_;
}
}
LEAN_EXPORT uint8_t l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0(lean_object* v_a_747_, lean_object* v_b_748_){
_start:
{
lean_object* v_fst_749_; lean_object* v_fst_750_; uint8_t v___x_751_; 
v_fst_749_ = lean_ctor_get(v_a_747_, 0);
v_fst_750_ = lean_ctor_get(v_b_748_, 0);
v___x_751_ = l_Lean_Meta_DiscrTree_Key_lt(v_fst_749_, v_fst_750_);
return v___x_751_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0___boxed(lean_object* v_a_752_, lean_object* v_b_753_){
_start:
{
uint8_t v_res_754_; lean_object* v_r_755_; 
v_res_754_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0(v_a_752_, v_b_753_);
lean_dec_ref(v_b_753_);
lean_dec_ref(v_a_752_);
v_r_755_ = lean_box(v_res_754_);
return v_r_755_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___lam__0(lean_object* v_x_756_, lean_object* v_keys_757_, lean_object* v_v_758_, lean_object* v_k_759_, lean_object* v_x_760_){
_start:
{
lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v_c_763_; lean_object* v___x_764_; 
v___x_761_ = lean_unsigned_to_nat(1u);
v___x_762_ = lean_nat_add(v_x_756_, v___x_761_);
v_c_763_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_757_, v_v_758_, v___x_762_);
lean_dec(v___x_762_);
v___x_764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_764_, 0, v_k_759_);
lean_ctor_set(v___x_764_, 1, v_c_763_);
return v___x_764_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___lam__0___boxed(lean_object* v_x_765_, lean_object* v_keys_766_, lean_object* v_v_767_, lean_object* v_k_768_, lean_object* v_x_769_){
_start:
{
lean_object* v_res_770_; 
v_res_770_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___lam__0(v_x_765_, v_keys_766_, v_v_767_, v_k_768_, v_x_769_);
lean_dec_ref(v_keys_766_);
lean_dec(v_x_765_);
return v_res_770_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__2_spec__6(lean_object* v_vs_771_, lean_object* v_v_772_, lean_object* v_i_773_){
_start:
{
lean_object* v___x_774_; uint8_t v___x_775_; 
v___x_774_ = lean_array_get_size(v_vs_771_);
v___x_775_ = lean_nat_dec_lt(v_i_773_, v___x_774_);
if (v___x_775_ == 0)
{
lean_object* v___x_776_; 
lean_dec(v_i_773_);
v___x_776_ = lean_array_push(v_vs_771_, v_v_772_);
return v___x_776_;
}
else
{
lean_object* v_val_777_; lean_object* v___x_778_; lean_object* v_val_779_; uint8_t v___x_780_; 
v_val_777_ = lean_ctor_get(v_v_772_, 1);
v___x_778_ = lean_array_fget_borrowed(v_vs_771_, v_i_773_);
v_val_779_ = lean_ctor_get(v___x_778_, 1);
v___x_780_ = lean_expr_eqv(v_val_777_, v_val_779_);
if (v___x_780_ == 0)
{
lean_object* v___x_781_; lean_object* v___x_782_; 
v___x_781_ = lean_unsigned_to_nat(1u);
v___x_782_ = lean_nat_add(v_i_773_, v___x_781_);
lean_dec(v_i_773_);
v_i_773_ = v___x_782_;
goto _start;
}
else
{
lean_object* v___x_784_; 
v___x_784_ = lean_array_fset(v_vs_771_, v_i_773_, v_v_772_);
lean_dec(v_i_773_);
return v___x_784_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__2(lean_object* v_vs_785_, lean_object* v_v_786_){
_start:
{
lean_object* v___x_787_; lean_object* v___x_788_; 
v___x_787_ = lean_unsigned_to_nat(0u);
v___x_788_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__2_spec__6(v_vs_785_, v_v_786_, v___x_787_);
return v___x_788_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v___x_789_, lean_object* v_as_790_, lean_object* v_k_791_, lean_object* v_x_792_, lean_object* v_x_793_){
_start:
{
lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v_mid_796_; lean_object* v_midVal_797_; uint8_t v___x_798_; 
v___x_794_ = lean_nat_add(v_x_792_, v_x_793_);
v___x_795_ = lean_unsigned_to_nat(1u);
v_mid_796_ = lean_nat_shiftr(v___x_794_, v___x_795_);
lean_dec(v___x_794_);
v_midVal_797_ = lean_array_fget_borrowed(v_as_790_, v_mid_796_);
v___x_798_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0(v_midVal_797_, v_k_791_);
if (v___x_798_ == 0)
{
uint8_t v___x_799_; 
lean_dec(v_x_793_);
v___x_799_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0(v_k_791_, v_midVal_797_);
if (v___x_799_ == 0)
{
lean_object* v___x_800_; uint8_t v___x_801_; 
lean_dec(v_x_792_);
v___x_800_ = lean_array_get_size(v_as_790_);
v___x_801_ = lean_nat_dec_lt(v_mid_796_, v___x_800_);
if (v___x_801_ == 0)
{
lean_dec(v_mid_796_);
lean_dec_ref(v___x_789_);
return v_as_790_;
}
else
{
lean_object* v___x_802_; lean_object* v_xs_x27_803_; lean_object* v___x_804_; 
v___x_802_ = lean_box(0);
v_xs_x27_803_ = lean_array_fset(v_as_790_, v_mid_796_, v___x_802_);
v___x_804_ = lean_array_fset(v_xs_x27_803_, v_mid_796_, v___x_789_);
lean_dec(v_mid_796_);
return v___x_804_;
}
}
else
{
v_x_793_ = v_mid_796_;
goto _start;
}
}
else
{
uint8_t v___x_806_; 
v___x_806_ = lean_nat_dec_eq(v_mid_796_, v_x_792_);
if (v___x_806_ == 0)
{
lean_dec(v_x_792_);
v_x_792_ = v_mid_796_;
goto _start;
}
else
{
lean_object* v___x_808_; lean_object* v_j_809_; lean_object* v_as_810_; lean_object* v___x_811_; 
lean_dec(v_mid_796_);
lean_dec(v_x_793_);
v___x_808_ = lean_nat_add(v_x_792_, v___x_795_);
lean_dec(v_x_792_);
v_j_809_ = lean_array_get_size(v_as_790_);
v_as_810_ = lean_array_push(v_as_790_, v___x_789_);
v___x_811_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_808_, v_as_810_, v_j_809_);
lean_dec(v___x_808_);
return v___x_811_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v___x_812_, lean_object* v_as_813_, lean_object* v_k_814_, lean_object* v_x_815_, lean_object* v_x_816_){
_start:
{
lean_object* v_res_817_; 
v_res_817_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1_spec__4___redArg(v___x_812_, v_as_813_, v_k_814_, v_x_815_, v_x_816_);
lean_dec_ref(v_k_814_);
return v_res_817_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1(lean_object* v___x_818_, lean_object* v_as_819_, lean_object* v_k_820_){
_start:
{
lean_object* v___x_821_; lean_object* v___x_822_; uint8_t v___x_823_; 
v___x_821_ = lean_array_get_size(v_as_819_);
v___x_822_ = lean_unsigned_to_nat(0u);
v___x_823_ = lean_nat_dec_eq(v___x_821_, v___x_822_);
if (v___x_823_ == 0)
{
lean_object* v___x_824_; uint8_t v___x_825_; 
v___x_824_ = lean_array_fget_borrowed(v_as_819_, v___x_822_);
v___x_825_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0(v_k_820_, v___x_824_);
if (v___x_825_ == 0)
{
uint8_t v___x_826_; 
v___x_826_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0(v___x_824_, v_k_820_);
if (v___x_826_ == 0)
{
uint8_t v___x_827_; 
v___x_827_ = lean_nat_dec_lt(v___x_822_, v___x_821_);
if (v___x_827_ == 0)
{
lean_dec_ref(v___x_818_);
return v_as_819_;
}
else
{
lean_object* v___x_828_; lean_object* v_xs_x27_829_; lean_object* v___x_830_; 
v___x_828_ = lean_box(0);
v_xs_x27_829_ = lean_array_fset(v_as_819_, v___x_822_, v___x_828_);
v___x_830_ = lean_array_fset(v_xs_x27_829_, v___x_822_, v___x_818_);
return v___x_830_;
}
}
else
{
lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; uint8_t v___x_834_; 
v___x_831_ = lean_unsigned_to_nat(1u);
v___x_832_ = lean_nat_sub(v___x_821_, v___x_831_);
v___x_833_ = lean_array_fget_borrowed(v_as_819_, v___x_832_);
v___x_834_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0(v___x_833_, v_k_820_);
if (v___x_834_ == 0)
{
uint8_t v___x_835_; 
v___x_835_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0(v_k_820_, v___x_833_);
if (v___x_835_ == 0)
{
uint8_t v___x_836_; 
v___x_836_ = lean_nat_dec_lt(v___x_832_, v___x_821_);
if (v___x_836_ == 0)
{
lean_dec(v___x_832_);
lean_dec_ref(v___x_818_);
return v_as_819_;
}
else
{
lean_object* v___x_837_; lean_object* v_xs_x27_838_; lean_object* v___x_839_; 
v___x_837_ = lean_box(0);
v_xs_x27_838_ = lean_array_fset(v_as_819_, v___x_832_, v___x_837_);
v___x_839_ = lean_array_fset(v_xs_x27_838_, v___x_832_, v___x_818_);
lean_dec(v___x_832_);
return v___x_839_;
}
}
else
{
lean_object* v___x_840_; 
v___x_840_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1_spec__4___redArg(v___x_818_, v_as_819_, v_k_820_, v___x_822_, v___x_832_);
return v___x_840_;
}
}
else
{
lean_object* v___x_841_; 
lean_dec(v___x_832_);
v___x_841_ = lean_array_push(v_as_819_, v___x_818_);
return v___x_841_;
}
}
}
else
{
lean_object* v_as_842_; lean_object* v___x_843_; 
v_as_842_ = lean_array_push(v_as_819_, v___x_818_);
v___x_843_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_822_, v_as_842_, v___x_821_);
return v___x_843_;
}
}
else
{
lean_object* v___x_844_; 
v___x_844_ = lean_array_push(v_as_819_, v___x_818_);
return v___x_844_;
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___boxed(lean_object* v___x_845_, lean_object* v_as_846_, lean_object* v_k_847_){
_start:
{
lean_object* v_res_848_; 
v_res_848_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1(v___x_845_, v_as_846_, v_k_847_);
lean_dec_ref(v_k_847_);
return v_res_848_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3_spec__8___redArg(lean_object* v_x_853_, lean_object* v_keys_854_, lean_object* v_v_855_, lean_object* v_k_856_, lean_object* v_as_857_, lean_object* v_k_858_, lean_object* v_x_859_, lean_object* v_x_860_){
_start:
{
lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v_mid_863_; lean_object* v_midVal_864_; uint8_t v___x_865_; 
v___x_861_ = lean_nat_add(v_x_859_, v_x_860_);
v___x_862_ = lean_unsigned_to_nat(1u);
v_mid_863_ = lean_nat_shiftr(v___x_861_, v___x_862_);
lean_dec(v___x_861_);
v_midVal_864_ = lean_array_fget(v_as_857_, v_mid_863_);
v___x_865_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0(v_midVal_864_, v_k_858_);
if (v___x_865_ == 0)
{
uint8_t v___x_866_; 
lean_dec(v_x_860_);
v___x_866_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0(v_k_858_, v_midVal_864_);
if (v___x_866_ == 0)
{
lean_object* v___x_867_; uint8_t v___x_868_; 
lean_dec(v_x_859_);
v___x_867_ = lean_array_get_size(v_as_857_);
v___x_868_ = lean_nat_dec_lt(v_mid_863_, v___x_867_);
if (v___x_868_ == 0)
{
lean_dec(v_midVal_864_);
lean_dec(v_mid_863_);
lean_dec(v_k_856_);
lean_dec_ref(v_v_855_);
return v_as_857_;
}
else
{
lean_object* v_snd_869_; lean_object* v___x_871_; uint8_t v_isShared_872_; uint8_t v_isSharedCheck_881_; 
v_snd_869_ = lean_ctor_get(v_midVal_864_, 1);
v_isSharedCheck_881_ = !lean_is_exclusive(v_midVal_864_);
if (v_isSharedCheck_881_ == 0)
{
lean_object* v_unused_882_; 
v_unused_882_ = lean_ctor_get(v_midVal_864_, 0);
lean_dec(v_unused_882_);
v___x_871_ = v_midVal_864_;
v_isShared_872_ = v_isSharedCheck_881_;
goto v_resetjp_870_;
}
else
{
lean_inc(v_snd_869_);
lean_dec(v_midVal_864_);
v___x_871_ = lean_box(0);
v_isShared_872_ = v_isSharedCheck_881_;
goto v_resetjp_870_;
}
v_resetjp_870_:
{
lean_object* v___x_873_; lean_object* v_xs_x27_874_; lean_object* v___x_875_; lean_object* v_c_876_; lean_object* v___x_878_; 
v___x_873_ = lean_box(0);
v_xs_x27_874_ = lean_array_fset(v_as_857_, v_mid_863_, v___x_873_);
v___x_875_ = lean_nat_add(v_x_853_, v___x_862_);
v_c_876_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0(v_keys_854_, v_v_855_, v___x_875_, v_snd_869_);
lean_dec(v___x_875_);
if (v_isShared_872_ == 0)
{
lean_ctor_set(v___x_871_, 1, v_c_876_);
lean_ctor_set(v___x_871_, 0, v_k_856_);
v___x_878_ = v___x_871_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v_k_856_);
lean_ctor_set(v_reuseFailAlloc_880_, 1, v_c_876_);
v___x_878_ = v_reuseFailAlloc_880_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
lean_object* v___x_879_; 
v___x_879_ = lean_array_fset(v_xs_x27_874_, v_mid_863_, v___x_878_);
lean_dec(v_mid_863_);
return v___x_879_;
}
}
}
}
else
{
lean_dec(v_midVal_864_);
v_x_860_ = v_mid_863_;
goto _start;
}
}
else
{
uint8_t v___x_884_; 
lean_dec(v_midVal_864_);
v___x_884_ = lean_nat_dec_eq(v_mid_863_, v_x_859_);
if (v___x_884_ == 0)
{
lean_dec(v_x_859_);
v_x_859_ = v_mid_863_;
goto _start;
}
else
{
lean_object* v___x_886_; lean_object* v_c_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v_j_890_; lean_object* v_as_891_; lean_object* v___x_892_; 
lean_dec(v_mid_863_);
lean_dec(v_x_860_);
v___x_886_ = lean_nat_add(v_x_853_, v___x_862_);
v_c_887_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_854_, v_v_855_, v___x_886_);
lean_dec(v___x_886_);
v___x_888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_888_, 0, v_k_856_);
lean_ctor_set(v___x_888_, 1, v_c_887_);
v___x_889_ = lean_nat_add(v_x_859_, v___x_862_);
lean_dec(v_x_859_);
v_j_890_ = lean_array_get_size(v_as_857_);
v_as_891_ = lean_array_push(v_as_857_, v___x_888_);
v___x_892_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_889_, v_as_891_, v_j_890_);
lean_dec(v___x_889_);
return v___x_892_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3(lean_object* v_x_893_, lean_object* v_keys_894_, lean_object* v_v_895_, lean_object* v_k_896_, lean_object* v_as_897_, lean_object* v_k_898_){
_start:
{
lean_object* v___x_899_; lean_object* v___x_900_; uint8_t v___x_901_; 
v___x_899_ = lean_array_get_size(v_as_897_);
v___x_900_ = lean_unsigned_to_nat(0u);
v___x_901_ = lean_nat_dec_eq(v___x_899_, v___x_900_);
if (v___x_901_ == 0)
{
lean_object* v___x_902_; uint8_t v___x_903_; 
v___x_902_ = lean_array_fget_borrowed(v_as_897_, v___x_900_);
v___x_903_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0(v_k_898_, v___x_902_);
if (v___x_903_ == 0)
{
uint8_t v___x_904_; 
v___x_904_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0(v___x_902_, v_k_898_);
if (v___x_904_ == 0)
{
uint8_t v___x_905_; 
v___x_905_ = lean_nat_dec_lt(v___x_900_, v___x_899_);
if (v___x_905_ == 0)
{
lean_dec(v_k_896_);
lean_dec_ref(v_v_895_);
return v_as_897_;
}
else
{
lean_object* v___x_906_; lean_object* v_xs_x27_907_; lean_object* v___x_908_; lean_object* v___x_909_; 
lean_inc(v___x_902_);
v___x_906_ = lean_box(0);
v_xs_x27_907_ = lean_array_fset(v_as_897_, v___x_900_, v___x_906_);
v___x_908_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___lam__2(v_x_893_, v_keys_894_, v_v_895_, v_k_896_, v___x_902_);
v___x_909_ = lean_array_fset(v_xs_x27_907_, v___x_900_, v___x_908_);
return v___x_909_;
}
}
else
{
lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; uint8_t v___x_913_; 
v___x_910_ = lean_unsigned_to_nat(1u);
v___x_911_ = lean_nat_sub(v___x_899_, v___x_910_);
v___x_912_ = lean_array_fget_borrowed(v_as_897_, v___x_911_);
v___x_913_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0(v___x_912_, v_k_898_);
if (v___x_913_ == 0)
{
uint8_t v___x_914_; 
v___x_914_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0(v_k_898_, v___x_912_);
if (v___x_914_ == 0)
{
uint8_t v___x_915_; 
v___x_915_ = lean_nat_dec_lt(v___x_911_, v___x_899_);
if (v___x_915_ == 0)
{
lean_dec(v___x_911_);
lean_dec(v_k_896_);
lean_dec_ref(v_v_895_);
return v_as_897_;
}
else
{
lean_object* v___x_916_; lean_object* v_xs_x27_917_; lean_object* v___x_918_; lean_object* v___x_919_; 
lean_inc(v___x_912_);
v___x_916_ = lean_box(0);
v_xs_x27_917_ = lean_array_fset(v_as_897_, v___x_911_, v___x_916_);
v___x_918_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___lam__2(v_x_893_, v_keys_894_, v_v_895_, v_k_896_, v___x_912_);
v___x_919_ = lean_array_fset(v_xs_x27_917_, v___x_911_, v___x_918_);
lean_dec(v___x_911_);
return v___x_919_;
}
}
else
{
lean_object* v___x_920_; 
v___x_920_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3_spec__8___redArg(v_x_893_, v_keys_894_, v_v_895_, v_k_896_, v_as_897_, v_k_898_, v___x_900_, v___x_911_);
return v___x_920_;
}
}
else
{
lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
lean_dec(v___x_911_);
v___x_921_ = lean_box(0);
v___x_922_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___lam__0(v_x_893_, v_keys_894_, v_v_895_, v_k_896_, v___x_921_);
v___x_923_ = lean_array_push(v_as_897_, v___x_922_);
return v___x_923_;
}
}
}
else
{
lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v_as_926_; lean_object* v___x_927_; 
v___x_924_ = lean_box(0);
v___x_925_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___lam__0(v_x_893_, v_keys_894_, v_v_895_, v_k_896_, v___x_924_);
v_as_926_ = lean_array_push(v_as_897_, v___x_925_);
v___x_927_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_900_, v_as_926_, v___x_899_);
return v___x_927_;
}
}
else
{
lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; 
v___x_928_ = lean_box(0);
v___x_929_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___lam__0(v_x_893_, v_keys_894_, v_v_895_, v_k_896_, v___x_928_);
v___x_930_ = lean_array_push(v_as_897_, v___x_929_);
return v___x_930_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0(lean_object* v_keys_931_, lean_object* v_v_932_, lean_object* v_x_933_, lean_object* v_x_934_){
_start:
{
if (lean_obj_tag(v_x_934_) == 0)
{
lean_object* v_key_935_; lean_object* v_child_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_970_; 
v_key_935_ = lean_ctor_get(v_x_934_, 0);
v_child_936_ = lean_ctor_get(v_x_934_, 1);
v_isSharedCheck_970_ = !lean_is_exclusive(v_x_934_);
if (v_isSharedCheck_970_ == 0)
{
v___x_938_ = v_x_934_;
v_isShared_939_ = v_isSharedCheck_970_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_child_936_);
lean_inc(v_key_935_);
lean_dec(v_x_934_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_970_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
lean_object* v___x_940_; uint8_t v___x_941_; 
v___x_940_ = lean_array_get_size(v_keys_931_);
v___x_941_ = lean_nat_dec_lt(v_x_933_, v___x_940_);
if (v___x_941_ == 0)
{
lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_948_; 
v___x_942_ = lean_unsigned_to_nat(1u);
v___x_943_ = lean_mk_empty_array_with_capacity(v___x_942_);
lean_inc_ref(v___x_943_);
v___x_944_ = lean_array_push(v___x_943_, v_v_932_);
v___x_945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_945_, 0, v_key_935_);
lean_ctor_set(v___x_945_, 1, v_child_936_);
v___x_946_ = lean_array_push(v___x_943_, v___x_945_);
if (v_isShared_939_ == 0)
{
lean_ctor_set_tag(v___x_938_, 1);
lean_ctor_set(v___x_938_, 1, v___x_946_);
lean_ctor_set(v___x_938_, 0, v___x_944_);
v___x_948_ = v___x_938_;
goto v_reusejp_947_;
}
else
{
lean_object* v_reuseFailAlloc_949_; 
v_reuseFailAlloc_949_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_949_, 0, v___x_944_);
lean_ctor_set(v_reuseFailAlloc_949_, 1, v___x_946_);
v___x_948_ = v_reuseFailAlloc_949_;
goto v_reusejp_947_;
}
v_reusejp_947_:
{
return v___x_948_;
}
}
else
{
lean_object* v___x_950_; uint8_t v___x_951_; 
v___x_950_ = lean_array_fget_borrowed(v_keys_931_, v_x_933_);
v___x_951_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v___x_950_, v_key_935_);
if (v___x_951_ == 0)
{
lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_962_; 
v___x_952_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0___closed__0));
v___x_953_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_953_, 0, v_key_935_);
lean_ctor_set(v___x_953_, 1, v_child_936_);
v___x_954_ = lean_unsigned_to_nat(1u);
v___x_955_ = lean_mk_empty_array_with_capacity(v___x_954_);
v___x_956_ = lean_array_push(v___x_955_, v___x_953_);
v___x_957_ = lean_nat_add(v_x_933_, v___x_954_);
v___x_958_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_931_, v_v_932_, v___x_957_);
lean_dec(v___x_957_);
lean_inc(v___x_950_);
v___x_959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_959_, 0, v___x_950_);
lean_ctor_set(v___x_959_, 1, v___x_958_);
lean_inc_ref(v___x_959_);
v___x_960_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1(v___x_959_, v___x_956_, v___x_959_);
lean_dec_ref_known(v___x_959_, 2);
if (v_isShared_939_ == 0)
{
lean_ctor_set_tag(v___x_938_, 1);
lean_ctor_set(v___x_938_, 1, v___x_960_);
lean_ctor_set(v___x_938_, 0, v___x_952_);
v___x_962_ = v___x_938_;
goto v_reusejp_961_;
}
else
{
lean_object* v_reuseFailAlloc_963_; 
v_reuseFailAlloc_963_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_963_, 0, v___x_952_);
lean_ctor_set(v_reuseFailAlloc_963_, 1, v___x_960_);
v___x_962_ = v_reuseFailAlloc_963_;
goto v_reusejp_961_;
}
v_reusejp_961_:
{
return v___x_962_;
}
}
else
{
lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_968_; 
v___x_964_ = lean_unsigned_to_nat(1u);
v___x_965_ = lean_nat_add(v_x_933_, v___x_964_);
v___x_966_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0(v_keys_931_, v_v_932_, v___x_965_, v_child_936_);
lean_dec(v___x_965_);
if (v_isShared_939_ == 0)
{
lean_ctor_set(v___x_938_, 1, v___x_966_);
v___x_968_ = v___x_938_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v_key_935_);
lean_ctor_set(v_reuseFailAlloc_969_, 1, v___x_966_);
v___x_968_ = v_reuseFailAlloc_969_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
return v___x_968_;
}
}
}
}
}
else
{
lean_object* v_vs_971_; lean_object* v_children_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_989_; 
v_vs_971_ = lean_ctor_get(v_x_934_, 0);
v_children_972_ = lean_ctor_get(v_x_934_, 1);
v_isSharedCheck_989_ = !lean_is_exclusive(v_x_934_);
if (v_isSharedCheck_989_ == 0)
{
v___x_974_ = v_x_934_;
v_isShared_975_ = v_isSharedCheck_989_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_children_972_);
lean_inc(v_vs_971_);
lean_dec(v_x_934_);
v___x_974_ = lean_box(0);
v_isShared_975_ = v_isSharedCheck_989_;
goto v_resetjp_973_;
}
v_resetjp_973_:
{
lean_object* v___x_976_; uint8_t v___x_977_; 
v___x_976_ = lean_array_get_size(v_keys_931_);
v___x_977_ = lean_nat_dec_lt(v_x_933_, v___x_976_);
if (v___x_977_ == 0)
{
lean_object* v___x_978_; lean_object* v___x_980_; 
v___x_978_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__2(v_vs_971_, v_v_932_);
if (v_isShared_975_ == 0)
{
lean_ctor_set(v___x_974_, 0, v___x_978_);
v___x_980_ = v___x_974_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v___x_978_);
lean_ctor_set(v_reuseFailAlloc_981_, 1, v_children_972_);
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
lean_object* v_k_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v_c_985_; lean_object* v___x_987_; 
v_k_982_ = lean_array_fget_borrowed(v_keys_931_, v_x_933_);
v___x_983_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0___closed__1));
lean_inc_n(v_k_982_, 2);
v___x_984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_984_, 0, v_k_982_);
lean_ctor_set(v___x_984_, 1, v___x_983_);
v_c_985_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3(v_x_933_, v_keys_931_, v_v_932_, v_k_982_, v_children_972_, v___x_984_);
lean_dec_ref_known(v___x_984_, 2);
if (v_isShared_975_ == 0)
{
lean_ctor_set(v___x_974_, 1, v_c_985_);
v___x_987_ = v___x_974_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v_vs_971_);
lean_ctor_set(v_reuseFailAlloc_988_, 1, v_c_985_);
v___x_987_ = v_reuseFailAlloc_988_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
return v___x_987_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___lam__2(lean_object* v_x_990_, lean_object* v_keys_991_, lean_object* v_v_992_, lean_object* v_k_993_, lean_object* v_x_994_){
_start:
{
lean_object* v_snd_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1005_; 
v_snd_995_ = lean_ctor_get(v_x_994_, 1);
v_isSharedCheck_1005_ = !lean_is_exclusive(v_x_994_);
if (v_isSharedCheck_1005_ == 0)
{
lean_object* v_unused_1006_; 
v_unused_1006_ = lean_ctor_get(v_x_994_, 0);
lean_dec(v_unused_1006_);
v___x_997_ = v_x_994_;
v_isShared_998_ = v_isSharedCheck_1005_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_snd_995_);
lean_dec(v_x_994_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1005_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v_c_1001_; lean_object* v___x_1003_; 
v___x_999_ = lean_unsigned_to_nat(1u);
v___x_1000_ = lean_nat_add(v_x_990_, v___x_999_);
v_c_1001_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0(v_keys_991_, v_v_992_, v___x_1000_, v_snd_995_);
lean_dec(v___x_1000_);
if (v_isShared_998_ == 0)
{
lean_ctor_set(v___x_997_, 1, v_c_1001_);
lean_ctor_set(v___x_997_, 0, v_k_993_);
v___x_1003_ = v___x_997_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v_k_993_);
lean_ctor_set(v_reuseFailAlloc_1004_, 1, v_c_1001_);
v___x_1003_ = v_reuseFailAlloc_1004_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
return v___x_1003_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___lam__2___boxed(lean_object* v_x_1007_, lean_object* v_keys_1008_, lean_object* v_v_1009_, lean_object* v_k_1010_, lean_object* v_x_1011_){
_start:
{
lean_object* v_res_1012_; 
v_res_1012_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___lam__2(v_x_1007_, v_keys_1008_, v_v_1009_, v_k_1010_, v_x_1011_);
lean_dec_ref(v_keys_1008_);
lean_dec(v_x_1007_);
return v_res_1012_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3_spec__8___redArg___boxed(lean_object* v_x_1013_, lean_object* v_keys_1014_, lean_object* v_v_1015_, lean_object* v_k_1016_, lean_object* v_as_1017_, lean_object* v_k_1018_, lean_object* v_x_1019_, lean_object* v_x_1020_){
_start:
{
lean_object* v_res_1021_; 
v_res_1021_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3_spec__8___redArg(v_x_1013_, v_keys_1014_, v_v_1015_, v_k_1016_, v_as_1017_, v_k_1018_, v_x_1019_, v_x_1020_);
lean_dec_ref(v_k_1018_);
lean_dec_ref(v_keys_1014_);
lean_dec(v_x_1013_);
return v_res_1021_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0___boxed(lean_object* v_keys_1022_, lean_object* v_v_1023_, lean_object* v_x_1024_, lean_object* v_x_1025_){
_start:
{
lean_object* v_res_1026_; 
v_res_1026_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0(v_keys_1022_, v_v_1023_, v_x_1024_, v_x_1025_);
lean_dec(v_x_1024_);
lean_dec_ref(v_keys_1022_);
return v_res_1026_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___boxed(lean_object* v_x_1027_, lean_object* v_keys_1028_, lean_object* v_v_1029_, lean_object* v_k_1030_, lean_object* v_as_1031_, lean_object* v_k_1032_){
_start:
{
lean_object* v_res_1033_; 
v_res_1033_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3(v_x_1027_, v_keys_1028_, v_v_1029_, v_k_1030_, v_as_1031_, v_k_1032_);
lean_dec_ref(v_k_1032_);
lean_dec_ref(v_keys_1028_);
lean_dec(v_x_1027_);
return v_res_1033_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1___lam__0(lean_object* v_keys_1034_, lean_object* v_v_1035_, lean_object* v_x_1036_){
_start:
{
if (lean_obj_tag(v_x_1036_) == 0)
{
lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; 
v___x_1037_ = lean_unsigned_to_nat(1u);
v___x_1038_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_1034_, v_v_1035_, v___x_1037_);
v___x_1039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1039_, 0, v___x_1038_);
return v___x_1039_;
}
else
{
lean_object* v_val_1040_; lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1049_; 
v_val_1040_ = lean_ctor_get(v_x_1036_, 0);
v_isSharedCheck_1049_ = !lean_is_exclusive(v_x_1036_);
if (v_isSharedCheck_1049_ == 0)
{
v___x_1042_ = v_x_1036_;
v_isShared_1043_ = v_isSharedCheck_1049_;
goto v_resetjp_1041_;
}
else
{
lean_inc(v_val_1040_);
lean_dec(v_x_1036_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1049_;
goto v_resetjp_1041_;
}
v_resetjp_1041_:
{
lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1047_; 
v___x_1044_ = lean_unsigned_to_nat(1u);
v___x_1045_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0(v_keys_1034_, v_v_1035_, v___x_1044_, v_val_1040_);
if (v_isShared_1043_ == 0)
{
lean_ctor_set(v___x_1042_, 0, v___x_1045_);
v___x_1047_ = v___x_1042_;
goto v_reusejp_1046_;
}
else
{
lean_object* v_reuseFailAlloc_1048_; 
v_reuseFailAlloc_1048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1048_, 0, v___x_1045_);
v___x_1047_ = v_reuseFailAlloc_1048_;
goto v_reusejp_1046_;
}
v_reusejp_1046_:
{
return v___x_1047_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1___lam__0___boxed(lean_object* v_keys_1050_, lean_object* v_v_1051_, lean_object* v_x_1052_){
_start:
{
lean_object* v_res_1053_; 
v_res_1053_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1___lam__0(v_keys_1050_, v_v_1051_, v_x_1052_);
lean_dec_ref(v_keys_1050_);
return v_res_1053_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1(lean_object* v_keys_1054_, lean_object* v_v_1055_, lean_object* v_x_1056_, size_t v_x_1057_, size_t v_x_1058_, lean_object* v_x_1059_){
_start:
{
if (lean_obj_tag(v_x_1056_) == 0)
{
lean_object* v_es_1060_; size_t v___x_1061_; size_t v___x_1062_; lean_object* v_j_1063_; lean_object* v___x_1064_; uint8_t v___x_1065_; 
v_es_1060_ = lean_ctor_get(v_x_1056_, 0);
v___x_1061_ = ((size_t)31ULL);
v___x_1062_ = lean_usize_land(v_x_1057_, v___x_1061_);
v_j_1063_ = lean_usize_to_nat(v___x_1062_);
v___x_1064_ = lean_array_get_size(v_es_1060_);
v___x_1065_ = lean_nat_dec_lt(v_j_1063_, v___x_1064_);
if (v___x_1065_ == 0)
{
lean_dec(v_j_1063_);
lean_dec(v_x_1059_);
lean_dec_ref(v_v_1055_);
return v_x_1056_;
}
else
{
lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1133_; 
lean_inc_ref(v_es_1060_);
v_isSharedCheck_1133_ = !lean_is_exclusive(v_x_1056_);
if (v_isSharedCheck_1133_ == 0)
{
lean_object* v_unused_1134_; 
v_unused_1134_ = lean_ctor_get(v_x_1056_, 0);
lean_dec(v_unused_1134_);
v___x_1067_ = v_x_1056_;
v_isShared_1068_ = v_isSharedCheck_1133_;
goto v_resetjp_1066_;
}
else
{
lean_dec(v_x_1056_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1133_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
lean_object* v_v_1069_; lean_object* v___x_1070_; lean_object* v_xs_x27_1071_; lean_object* v___y_1073_; 
v_v_1069_ = lean_array_fget(v_es_1060_, v_j_1063_);
v___x_1070_ = lean_box(0);
v_xs_x27_1071_ = lean_array_fset(v_es_1060_, v_j_1063_, v___x_1070_);
switch(lean_obj_tag(v_v_1069_))
{
case 0:
{
lean_object* v_key_1078_; lean_object* v_val_1079_; uint8_t v___x_1080_; 
v_key_1078_ = lean_ctor_get(v_v_1069_, 0);
v_val_1079_ = lean_ctor_get(v_v_1069_, 1);
v___x_1080_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_1059_, v_key_1078_);
if (v___x_1080_ == 0)
{
lean_object* v___x_1081_; lean_object* v___x_1082_; 
v___x_1081_ = lean_box(0);
v___x_1082_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1___lam__0(v_keys_1054_, v_v_1055_, v___x_1081_);
if (lean_obj_tag(v___x_1082_) == 0)
{
lean_dec(v_x_1059_);
v___y_1073_ = v_v_1069_;
goto v___jp_1072_;
}
else
{
lean_object* v_val_1083_; lean_object* v___x_1085_; uint8_t v_isShared_1086_; uint8_t v_isSharedCheck_1091_; 
lean_inc(v_val_1079_);
lean_inc(v_key_1078_);
lean_dec_ref_known(v_v_1069_, 2);
v_val_1083_ = lean_ctor_get(v___x_1082_, 0);
v_isSharedCheck_1091_ = !lean_is_exclusive(v___x_1082_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1085_ = v___x_1082_;
v_isShared_1086_ = v_isSharedCheck_1091_;
goto v_resetjp_1084_;
}
else
{
lean_inc(v_val_1083_);
lean_dec(v___x_1082_);
v___x_1085_ = lean_box(0);
v_isShared_1086_ = v_isSharedCheck_1091_;
goto v_resetjp_1084_;
}
v_resetjp_1084_:
{
lean_object* v___x_1087_; lean_object* v___x_1089_; 
v___x_1087_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1078_, v_val_1079_, v_x_1059_, v_val_1083_);
if (v_isShared_1086_ == 0)
{
lean_ctor_set(v___x_1085_, 0, v___x_1087_);
v___x_1089_ = v___x_1085_;
goto v_reusejp_1088_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v___x_1087_);
v___x_1089_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1088_;
}
v_reusejp_1088_:
{
v___y_1073_ = v___x_1089_;
goto v___jp_1072_;
}
}
}
}
else
{
lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1102_; 
lean_inc(v_val_1079_);
v_isSharedCheck_1102_ = !lean_is_exclusive(v_v_1069_);
if (v_isSharedCheck_1102_ == 0)
{
lean_object* v_unused_1103_; lean_object* v_unused_1104_; 
v_unused_1103_ = lean_ctor_get(v_v_1069_, 1);
lean_dec(v_unused_1103_);
v_unused_1104_ = lean_ctor_get(v_v_1069_, 0);
lean_dec(v_unused_1104_);
v___x_1093_ = v_v_1069_;
v_isShared_1094_ = v_isSharedCheck_1102_;
goto v_resetjp_1092_;
}
else
{
lean_dec(v_v_1069_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1102_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
lean_object* v___x_1095_; lean_object* v___x_1096_; 
v___x_1095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1095_, 0, v_val_1079_);
v___x_1096_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1___lam__0(v_keys_1054_, v_v_1055_, v___x_1095_);
if (lean_obj_tag(v___x_1096_) == 0)
{
lean_object* v___x_1097_; 
lean_del_object(v___x_1093_);
lean_dec(v_x_1059_);
v___x_1097_ = lean_box(2);
v___y_1073_ = v___x_1097_;
goto v___jp_1072_;
}
else
{
lean_object* v_val_1098_; lean_object* v___x_1100_; 
v_val_1098_ = lean_ctor_get(v___x_1096_, 0);
lean_inc(v_val_1098_);
lean_dec_ref_known(v___x_1096_, 1);
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 1, v_val_1098_);
lean_ctor_set(v___x_1093_, 0, v_x_1059_);
v___x_1100_ = v___x_1093_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v_x_1059_);
lean_ctor_set(v_reuseFailAlloc_1101_, 1, v_val_1098_);
v___x_1100_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
v___y_1073_ = v___x_1100_;
goto v___jp_1072_;
}
}
}
}
}
case 1:
{
lean_object* v_node_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1128_; 
v_node_1105_ = lean_ctor_get(v_v_1069_, 0);
v_isSharedCheck_1128_ = !lean_is_exclusive(v_v_1069_);
if (v_isSharedCheck_1128_ == 0)
{
v___x_1107_ = v_v_1069_;
v_isShared_1108_ = v_isSharedCheck_1128_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_node_1105_);
lean_dec(v_v_1069_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1128_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
size_t v___x_1109_; size_t v___x_1110_; size_t v___x_1111_; size_t v___x_1112_; lean_object* v_newNode_1113_; lean_object* v___x_1114_; 
v___x_1109_ = ((size_t)5ULL);
v___x_1110_ = lean_usize_shift_right(v_x_1057_, v___x_1109_);
v___x_1111_ = ((size_t)1ULL);
v___x_1112_ = lean_usize_add(v_x_1058_, v___x_1111_);
v_newNode_1113_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1(v_keys_1054_, v_v_1055_, v_node_1105_, v___x_1110_, v___x_1112_, v_x_1059_);
lean_inc_ref(v_newNode_1113_);
v___x_1114_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_1113_);
if (lean_obj_tag(v___x_1114_) == 0)
{
lean_object* v___x_1116_; 
if (v_isShared_1108_ == 0)
{
lean_ctor_set(v___x_1107_, 0, v_newNode_1113_);
v___x_1116_ = v___x_1107_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v_newNode_1113_);
v___x_1116_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
v___y_1073_ = v___x_1116_;
goto v___jp_1072_;
}
}
else
{
lean_object* v_val_1118_; lean_object* v_fst_1119_; lean_object* v_snd_1120_; lean_object* v___x_1122_; uint8_t v_isShared_1123_; uint8_t v_isSharedCheck_1127_; 
lean_dec_ref(v_newNode_1113_);
lean_del_object(v___x_1107_);
v_val_1118_ = lean_ctor_get(v___x_1114_, 0);
lean_inc(v_val_1118_);
lean_dec_ref_known(v___x_1114_, 1);
v_fst_1119_ = lean_ctor_get(v_val_1118_, 0);
v_snd_1120_ = lean_ctor_get(v_val_1118_, 1);
v_isSharedCheck_1127_ = !lean_is_exclusive(v_val_1118_);
if (v_isSharedCheck_1127_ == 0)
{
v___x_1122_ = v_val_1118_;
v_isShared_1123_ = v_isSharedCheck_1127_;
goto v_resetjp_1121_;
}
else
{
lean_inc(v_snd_1120_);
lean_inc(v_fst_1119_);
lean_dec(v_val_1118_);
v___x_1122_ = lean_box(0);
v_isShared_1123_ = v_isSharedCheck_1127_;
goto v_resetjp_1121_;
}
v_resetjp_1121_:
{
lean_object* v___x_1125_; 
if (v_isShared_1123_ == 0)
{
v___x_1125_ = v___x_1122_;
goto v_reusejp_1124_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v_fst_1119_);
lean_ctor_set(v_reuseFailAlloc_1126_, 1, v_snd_1120_);
v___x_1125_ = v_reuseFailAlloc_1126_;
goto v_reusejp_1124_;
}
v_reusejp_1124_:
{
v___y_1073_ = v___x_1125_;
goto v___jp_1072_;
}
}
}
}
}
default: 
{
lean_object* v___x_1129_; lean_object* v___x_1130_; 
v___x_1129_ = lean_box(0);
v___x_1130_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1___lam__0(v_keys_1054_, v_v_1055_, v___x_1129_);
if (lean_obj_tag(v___x_1130_) == 0)
{
lean_dec(v_x_1059_);
v___y_1073_ = v_v_1069_;
goto v___jp_1072_;
}
else
{
lean_object* v_val_1131_; lean_object* v___x_1132_; 
v_val_1131_ = lean_ctor_get(v___x_1130_, 0);
lean_inc(v_val_1131_);
lean_dec_ref_known(v___x_1130_, 1);
v___x_1132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1132_, 0, v_x_1059_);
lean_ctor_set(v___x_1132_, 1, v_val_1131_);
v___y_1073_ = v___x_1132_;
goto v___jp_1072_;
}
}
}
v___jp_1072_:
{
lean_object* v___x_1074_; lean_object* v___x_1076_; 
v___x_1074_ = lean_array_fset(v_xs_x27_1071_, v_j_1063_, v___y_1073_);
lean_dec(v_j_1063_);
if (v_isShared_1068_ == 0)
{
lean_ctor_set(v___x_1067_, 0, v___x_1074_);
v___x_1076_ = v___x_1067_;
goto v_reusejp_1075_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v___x_1074_);
v___x_1076_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1075_;
}
v_reusejp_1075_:
{
return v___x_1076_;
}
}
}
}
}
else
{
lean_object* v_ks_1135_; lean_object* v_vs_1136_; lean_object* v___x_1138_; uint8_t v_isShared_1139_; uint8_t v_isSharedCheck_1169_; 
v_ks_1135_ = lean_ctor_get(v_x_1056_, 0);
v_vs_1136_ = lean_ctor_get(v_x_1056_, 1);
v_isSharedCheck_1169_ = !lean_is_exclusive(v_x_1056_);
if (v_isSharedCheck_1169_ == 0)
{
v___x_1138_ = v_x_1056_;
v_isShared_1139_ = v_isSharedCheck_1169_;
goto v_resetjp_1137_;
}
else
{
lean_inc(v_vs_1136_);
lean_inc(v_ks_1135_);
lean_dec(v_x_1056_);
v___x_1138_ = lean_box(0);
v_isShared_1139_ = v_isSharedCheck_1169_;
goto v_resetjp_1137_;
}
v_resetjp_1137_:
{
lean_object* v___x_1140_; 
v___x_1140_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__5(v_ks_1135_, v_x_1059_);
if (lean_obj_tag(v___x_1140_) == 0)
{
lean_object* v___x_1142_; 
if (v_isShared_1139_ == 0)
{
v___x_1142_ = v___x_1138_;
goto v_reusejp_1141_;
}
else
{
lean_object* v_reuseFailAlloc_1147_; 
v_reuseFailAlloc_1147_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1147_, 0, v_ks_1135_);
lean_ctor_set(v_reuseFailAlloc_1147_, 1, v_vs_1136_);
v___x_1142_ = v_reuseFailAlloc_1147_;
goto v_reusejp_1141_;
}
v_reusejp_1141_:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; 
v___x_1143_ = lean_box(0);
v___x_1144_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1___lam__0(v_keys_1054_, v_v_1055_, v___x_1143_);
if (lean_obj_tag(v___x_1144_) == 0)
{
lean_dec(v_x_1059_);
return v___x_1142_;
}
else
{
lean_object* v_val_1145_; lean_object* v___x_1146_; 
v_val_1145_ = lean_ctor_get(v___x_1144_, 0);
lean_inc(v_val_1145_);
lean_dec_ref_known(v___x_1144_, 1);
v___x_1146_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6___redArg(v___x_1142_, v_x_1057_, v_x_1058_, v_x_1059_, v_val_1145_);
return v___x_1146_;
}
}
}
else
{
lean_object* v_val_1148_; lean_object* v___x_1150_; uint8_t v_isShared_1151_; uint8_t v_isSharedCheck_1168_; 
v_val_1148_ = lean_ctor_get(v___x_1140_, 0);
v_isSharedCheck_1168_ = !lean_is_exclusive(v___x_1140_);
if (v_isSharedCheck_1168_ == 0)
{
v___x_1150_ = v___x_1140_;
v_isShared_1151_ = v_isSharedCheck_1168_;
goto v_resetjp_1149_;
}
else
{
lean_inc(v_val_1148_);
lean_dec(v___x_1140_);
v___x_1150_ = lean_box(0);
v_isShared_1151_ = v_isSharedCheck_1168_;
goto v_resetjp_1149_;
}
v_resetjp_1149_:
{
lean_object* v_v_x27_1152_; lean_object* v_keys_1153_; lean_object* v_vals_1154_; lean_object* v___x_1156_; 
v_v_x27_1152_ = lean_array_fget(v_vs_1136_, v_val_1148_);
lean_inc(v_val_1148_);
v_keys_1153_ = l_Array_eraseIdx___redArg(v_ks_1135_, v_val_1148_);
v_vals_1154_ = l_Array_eraseIdx___redArg(v_vs_1136_, v_val_1148_);
if (v_isShared_1151_ == 0)
{
lean_ctor_set(v___x_1150_, 0, v_v_x27_1152_);
v___x_1156_ = v___x_1150_;
goto v_reusejp_1155_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v_v_x27_1152_);
v___x_1156_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1155_;
}
v_reusejp_1155_:
{
lean_object* v___x_1157_; 
v___x_1157_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1___lam__0(v_keys_1054_, v_v_1055_, v___x_1156_);
if (lean_obj_tag(v___x_1157_) == 0)
{
lean_object* v___x_1159_; 
lean_dec(v_x_1059_);
if (v_isShared_1139_ == 0)
{
lean_ctor_set(v___x_1138_, 1, v_vals_1154_);
lean_ctor_set(v___x_1138_, 0, v_keys_1153_);
v___x_1159_ = v___x_1138_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v_keys_1153_);
lean_ctor_set(v_reuseFailAlloc_1160_, 1, v_vals_1154_);
v___x_1159_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
return v___x_1159_;
}
}
else
{
lean_object* v_val_1161_; lean_object* v_keys_1162_; lean_object* v_vals_1163_; lean_object* v___x_1165_; 
v_val_1161_ = lean_ctor_get(v___x_1157_, 0);
lean_inc(v_val_1161_);
lean_dec_ref_known(v___x_1157_, 1);
v_keys_1162_ = lean_array_push(v_keys_1153_, v_x_1059_);
v_vals_1163_ = lean_array_push(v_vals_1154_, v_val_1161_);
if (v_isShared_1139_ == 0)
{
lean_ctor_set(v___x_1138_, 1, v_vals_1163_);
lean_ctor_set(v___x_1138_, 0, v_keys_1162_);
v___x_1165_ = v___x_1138_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v_keys_1162_);
lean_ctor_set(v_reuseFailAlloc_1166_, 1, v_vals_1163_);
v___x_1165_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
return v___x_1165_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1___boxed(lean_object* v_keys_1170_, lean_object* v_v_1171_, lean_object* v_x_1172_, lean_object* v_x_1173_, lean_object* v_x_1174_, lean_object* v_x_1175_){
_start:
{
size_t v_x_3599__boxed_1176_; size_t v_x_3600__boxed_1177_; lean_object* v_res_1178_; 
v_x_3599__boxed_1176_ = lean_unbox_usize(v_x_1173_);
lean_dec(v_x_1173_);
v_x_3600__boxed_1177_ = lean_unbox_usize(v_x_1174_);
lean_dec(v_x_1174_);
v_res_1178_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1(v_keys_1170_, v_v_1171_, v_x_1172_, v_x_3599__boxed_1176_, v_x_3600__boxed_1177_, v_x_1175_);
lean_dec_ref(v_keys_1170_);
return v_res_1178_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1179_; 
v___x_1179_ = l_Lean_Meta_DiscrTree_instInhabited___redArg();
return v___x_1179_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__2(lean_object* v_msg_1180_){
_start:
{
lean_object* v___x_1181_; lean_object* v___x_1182_; 
v___x_1181_ = lean_obj_once(&l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__2___closed__0, &l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__2___closed__0_once, _init_l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__2___closed__0);
v___x_1182_ = lean_panic_fn_borrowed(v___x_1181_, v_msg_1180_);
return v___x_1182_;
}
}
static lean_object* _init_l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; 
v___x_1186_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__2));
v___x_1187_ = lean_unsigned_to_nat(23u);
v___x_1188_ = lean_unsigned_to_nat(179u);
v___x_1189_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__1));
v___x_1190_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__0));
v___x_1191_ = l_mkPanicMessageWithDecl(v___x_1190_, v___x_1189_, v___x_1188_, v___x_1187_, v___x_1186_);
return v___x_1191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0(lean_object* v_d_1192_, lean_object* v_keys_1193_, lean_object* v_v_1194_){
_start:
{
lean_object* v___x_1195_; lean_object* v___x_1196_; uint8_t v___x_1197_; 
v___x_1195_ = lean_array_get_size(v_keys_1193_);
v___x_1196_ = lean_unsigned_to_nat(0u);
v___x_1197_ = lean_nat_dec_eq(v___x_1195_, v___x_1196_);
if (v___x_1197_ == 0)
{
lean_object* v___x_1198_; lean_object* v_k_1199_; uint64_t v___x_1200_; size_t v_h_1201_; size_t v___x_1202_; lean_object* v___x_1203_; 
v___x_1198_ = lean_box(0);
v_k_1199_ = lean_array_get_borrowed(v___x_1198_, v_keys_1193_, v___x_1196_);
v___x_1200_ = l_Lean_Meta_DiscrTree_Key_hash(v_k_1199_);
v_h_1201_ = lean_uint64_to_usize(v___x_1200_);
v___x_1202_ = ((size_t)1ULL);
lean_inc(v_k_1199_);
v___x_1203_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1(v_keys_1193_, v_v_1194_, v_d_1192_, v_h_1201_, v___x_1202_, v_k_1199_);
return v___x_1203_;
}
else
{
lean_object* v___x_1204_; lean_object* v___x_1205_; 
lean_dec_ref(v_v_1194_);
lean_dec_ref(v_d_1192_);
v___x_1204_ = lean_obj_once(&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__3, &l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__3_once, _init_l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__3);
v___x_1205_ = l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__2(v___x_1204_);
return v___x_1205_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___boxed(lean_object* v_d_1206_, lean_object* v_keys_1207_, lean_object* v_v_1208_){
_start:
{
lean_object* v_res_1209_; 
v_res_1209_ = l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0(v_d_1206_, v_keys_1207_, v_v_1208_);
lean_dec_ref(v_keys_1207_);
return v_res_1209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addImportedInstanceEntry(lean_object* v_d_1210_, lean_object* v_e_1211_){
_start:
{
lean_object* v_globalName_x3f_1212_; 
v_globalName_x3f_1212_ = lean_ctor_get(v_e_1211_, 3);
if (lean_obj_tag(v_globalName_x3f_1212_) == 0)
{
lean_object* v_keys_1213_; lean_object* v_discrTree_1214_; lean_object* v_instanceNames_1215_; lean_object* v_erased_1216_; lean_object* v_classChanges_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1225_; 
v_keys_1213_ = lean_ctor_get(v_e_1211_, 0);
lean_inc_ref(v_keys_1213_);
v_discrTree_1214_ = lean_ctor_get(v_d_1210_, 0);
v_instanceNames_1215_ = lean_ctor_get(v_d_1210_, 1);
v_erased_1216_ = lean_ctor_get(v_d_1210_, 2);
v_classChanges_1217_ = lean_ctor_get(v_d_1210_, 3);
v_isSharedCheck_1225_ = !lean_is_exclusive(v_d_1210_);
if (v_isSharedCheck_1225_ == 0)
{
v___x_1219_ = v_d_1210_;
v_isShared_1220_ = v_isSharedCheck_1225_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_classChanges_1217_);
lean_inc(v_erased_1216_);
lean_inc(v_instanceNames_1215_);
lean_inc(v_discrTree_1214_);
lean_dec(v_d_1210_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1225_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1221_; lean_object* v___x_1223_; 
v___x_1221_ = l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0(v_discrTree_1214_, v_keys_1213_, v_e_1211_);
lean_dec_ref(v_keys_1213_);
if (v_isShared_1220_ == 0)
{
lean_ctor_set(v___x_1219_, 0, v___x_1221_);
v___x_1223_ = v___x_1219_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v___x_1221_);
lean_ctor_set(v_reuseFailAlloc_1224_, 1, v_instanceNames_1215_);
lean_ctor_set(v_reuseFailAlloc_1224_, 2, v_erased_1216_);
lean_ctor_set(v_reuseFailAlloc_1224_, 3, v_classChanges_1217_);
v___x_1223_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
return v___x_1223_;
}
}
}
else
{
lean_object* v_keys_1226_; lean_object* v_val_1227_; lean_object* v_discrTree_1228_; lean_object* v_instanceNames_1229_; lean_object* v_erased_1230_; lean_object* v_classChanges_1231_; lean_object* v___x_1233_; uint8_t v_isShared_1234_; uint8_t v_isSharedCheck_1241_; 
v_keys_1226_ = lean_ctor_get(v_e_1211_, 0);
v_val_1227_ = lean_ctor_get(v_globalName_x3f_1212_, 0);
lean_inc(v_val_1227_);
v_discrTree_1228_ = lean_ctor_get(v_d_1210_, 0);
v_instanceNames_1229_ = lean_ctor_get(v_d_1210_, 1);
v_erased_1230_ = lean_ctor_get(v_d_1210_, 2);
v_classChanges_1231_ = lean_ctor_get(v_d_1210_, 3);
v_isSharedCheck_1241_ = !lean_is_exclusive(v_d_1210_);
if (v_isSharedCheck_1241_ == 0)
{
v___x_1233_ = v_d_1210_;
v_isShared_1234_ = v_isSharedCheck_1241_;
goto v_resetjp_1232_;
}
else
{
lean_inc(v_classChanges_1231_);
lean_inc(v_erased_1230_);
lean_inc(v_instanceNames_1229_);
lean_inc(v_discrTree_1228_);
lean_dec(v_d_1210_);
v___x_1233_ = lean_box(0);
v_isShared_1234_ = v_isSharedCheck_1241_;
goto v_resetjp_1232_;
}
v_resetjp_1232_:
{
lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1239_; 
lean_inc_ref(v_e_1211_);
v___x_1235_ = l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0(v_discrTree_1228_, v_keys_1226_, v_e_1211_);
lean_inc(v_val_1227_);
v___x_1236_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0___redArg(v_instanceNames_1229_, v_val_1227_, v_e_1211_);
v___x_1237_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1___redArg(v_erased_1230_, v_val_1227_);
lean_dec(v_val_1227_);
if (v_isShared_1234_ == 0)
{
lean_ctor_set(v___x_1233_, 2, v___x_1237_);
lean_ctor_set(v___x_1233_, 1, v___x_1236_);
lean_ctor_set(v___x_1233_, 0, v___x_1235_);
v___x_1239_ = v___x_1233_;
goto v_reusejp_1238_;
}
else
{
lean_object* v_reuseFailAlloc_1240_; 
v_reuseFailAlloc_1240_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1240_, 0, v___x_1235_);
lean_ctor_set(v_reuseFailAlloc_1240_, 1, v___x_1236_);
lean_ctor_set(v_reuseFailAlloc_1240_, 2, v___x_1237_);
lean_ctor_set(v_reuseFailAlloc_1240_, 3, v_classChanges_1231_);
v___x_1239_ = v_reuseFailAlloc_1240_;
goto v_reusejp_1238_;
}
v_reusejp_1238_:
{
return v___x_1239_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1(lean_object* v_00_u03b2_1242_, lean_object* v_x_1243_, lean_object* v_x_1244_){
_start:
{
lean_object* v___x_1245_; 
v___x_1245_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1___redArg(v_x_1243_, v_x_1244_);
return v___x_1245_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1___boxed(lean_object* v_00_u03b2_1246_, lean_object* v_x_1247_, lean_object* v_x_1248_){
_start:
{
lean_object* v_res_1249_; 
v_res_1249_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1(v_00_u03b2_1246_, v_x_1247_, v_x_1248_);
lean_dec(v_x_1248_);
return v_res_1249_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4(lean_object* v_00_u03b2_1250_, lean_object* v_x_1251_, size_t v_x_1252_, lean_object* v_x_1253_){
_start:
{
lean_object* v___x_1254_; 
v___x_1254_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4___redArg(v_x_1251_, v_x_1252_, v_x_1253_);
return v___x_1254_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4___boxed(lean_object* v_00_u03b2_1255_, lean_object* v_x_1256_, lean_object* v_x_1257_, lean_object* v_x_1258_){
_start:
{
size_t v_x_3911__boxed_1259_; lean_object* v_res_1260_; 
v_x_3911__boxed_1259_ = lean_unbox_usize(v_x_1257_);
lean_dec(v_x_1257_);
v_res_1260_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4(v_00_u03b2_1255_, v_x_1256_, v_x_3911__boxed_1259_, v_x_1258_);
lean_dec(v_x_1258_);
return v_res_1260_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6(lean_object* v_00_u03b2_1261_, lean_object* v_x_1262_, size_t v_x_1263_, size_t v_x_1264_, lean_object* v_x_1265_, lean_object* v_x_1266_){
_start:
{
lean_object* v___x_1267_; 
v___x_1267_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6___redArg(v_x_1262_, v_x_1263_, v_x_1264_, v_x_1265_, v_x_1266_);
return v___x_1267_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6___boxed(lean_object* v_00_u03b2_1268_, lean_object* v_x_1269_, lean_object* v_x_1270_, lean_object* v_x_1271_, lean_object* v_x_1272_, lean_object* v_x_1273_){
_start:
{
size_t v_x_3922__boxed_1274_; size_t v_x_3923__boxed_1275_; lean_object* v_res_1276_; 
v_x_3922__boxed_1274_ = lean_unbox_usize(v_x_1270_);
lean_dec(v_x_1270_);
v_x_3923__boxed_1275_ = lean_unbox_usize(v_x_1271_);
lean_dec(v_x_1271_);
v_res_1276_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6(v_00_u03b2_1268_, v_x_1269_, v_x_3922__boxed_1274_, v_x_3923__boxed_1275_, v_x_1272_, v_x_1273_);
return v_res_1276_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1_spec__4(lean_object* v___x_1277_, lean_object* v_as_1278_, lean_object* v_k_1279_, lean_object* v_x_1280_, lean_object* v_x_1281_, lean_object* v_x_1282_, lean_object* v_x_1283_){
_start:
{
lean_object* v___x_1284_; 
v___x_1284_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1_spec__4___redArg(v___x_1277_, v_as_1278_, v_k_1279_, v_x_1280_, v_x_1281_);
return v___x_1284_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v___x_1285_, lean_object* v_as_1286_, lean_object* v_k_1287_, lean_object* v_x_1288_, lean_object* v_x_1289_, lean_object* v_x_1290_, lean_object* v_x_1291_){
_start:
{
lean_object* v_res_1292_; 
v_res_1292_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1_spec__4(v___x_1285_, v_as_1286_, v_k_1287_, v_x_1288_, v_x_1289_, v_x_1290_, v_x_1291_);
lean_dec_ref(v_k_1287_);
return v_res_1292_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3_spec__8(lean_object* v_x_1293_, lean_object* v_keys_1294_, lean_object* v_v_1295_, lean_object* v_k_1296_, lean_object* v_as_1297_, lean_object* v_k_1298_, lean_object* v_x_1299_, lean_object* v_x_1300_, lean_object* v_x_1301_, lean_object* v_x_1302_){
_start:
{
lean_object* v___x_1303_; 
v___x_1303_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3_spec__8___redArg(v_x_1293_, v_keys_1294_, v_v_1295_, v_k_1296_, v_as_1297_, v_k_1298_, v_x_1299_, v_x_1300_);
return v___x_1303_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3_spec__8___boxed(lean_object* v_x_1304_, lean_object* v_keys_1305_, lean_object* v_v_1306_, lean_object* v_k_1307_, lean_object* v_as_1308_, lean_object* v_k_1309_, lean_object* v_x_1310_, lean_object* v_x_1311_, lean_object* v_x_1312_, lean_object* v_x_1313_){
_start:
{
lean_object* v_res_1314_; 
v_res_1314_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3_spec__8(v_x_1304_, v_keys_1305_, v_v_1306_, v_k_1307_, v_as_1308_, v_k_1309_, v_x_1310_, v_x_1311_, v_x_1312_, v_x_1313_);
lean_dec_ref(v_k_1309_);
lean_dec_ref(v_keys_1305_);
lean_dec(v_x_1304_);
return v_res_1314_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__13(lean_object* v_00_u03b2_1315_, lean_object* v_n_1316_, lean_object* v_k_1317_, lean_object* v_v_1318_){
_start:
{
lean_object* v___x_1319_; 
v___x_1319_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__13___redArg(v_n_1316_, v_k_1317_, v_v_1318_);
return v___x_1319_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__14(lean_object* v_00_u03b2_1320_, size_t v_depth_1321_, lean_object* v_keys_1322_, lean_object* v_vals_1323_, lean_object* v_heq_1324_, lean_object* v_i_1325_, lean_object* v_entries_1326_){
_start:
{
lean_object* v___x_1327_; 
v___x_1327_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__14___redArg(v_depth_1321_, v_keys_1322_, v_vals_1323_, v_i_1325_, v_entries_1326_);
return v___x_1327_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__14___boxed(lean_object* v_00_u03b2_1328_, lean_object* v_depth_1329_, lean_object* v_keys_1330_, lean_object* v_vals_1331_, lean_object* v_heq_1332_, lean_object* v_i_1333_, lean_object* v_entries_1334_){
_start:
{
size_t v_depth_boxed_1335_; lean_object* v_res_1336_; 
v_depth_boxed_1335_ = lean_unbox_usize(v_depth_1329_);
lean_dec(v_depth_1329_);
v_res_1336_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__14(v_00_u03b2_1328_, v_depth_boxed_1335_, v_keys_1330_, v_vals_1331_, v_heq_1332_, v_i_1333_, v_entries_1334_);
lean_dec_ref(v_vals_1331_);
lean_dec_ref(v_keys_1330_);
return v_res_1336_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__13_spec__15(lean_object* v_00_u03b2_1337_, lean_object* v_x_1338_, lean_object* v_x_1339_, lean_object* v_x_1340_, lean_object* v_x_1341_){
_start:
{
lean_object* v___x_1342_; 
v___x_1342_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__13_spec__15___redArg(v_x_1338_, v_x_1339_, v_x_1340_, v_x_1341_);
return v___x_1342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addInstanceEntry(lean_object* v_d_1343_, lean_object* v_e_1344_){
_start:
{
lean_object* v_val_1345_; lean_object* v_priority_1346_; lean_object* v_synthOrder_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; 
v_val_1345_ = lean_ctor_get(v_e_1344_, 1);
v_priority_1346_ = lean_ctor_get(v_e_1344_, 2);
v_synthOrder_1347_ = lean_ctor_get(v_e_1344_, 4);
v___x_1348_ = l_Lean_Meta_InstanceEntry_keyClass(v_e_1344_);
lean_inc_ref(v_synthOrder_1347_);
lean_inc(v_priority_1346_);
lean_inc_ref(v_val_1345_);
v___x_1349_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1349_, 0, v_val_1345_);
lean_ctor_set(v___x_1349_, 1, v_priority_1346_);
lean_ctor_set(v___x_1349_, 2, v_synthOrder_1347_);
v___x_1350_ = l___private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange(v_d_1343_, v___x_1348_, v___x_1349_);
v___x_1351_ = l_Lean_Meta_addImportedInstanceEntry(v___x_1350_, v_e_1344_);
return v___x_1351_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_eraseCore(lean_object* v_d_1352_, lean_object* v_declName_1353_){
_start:
{
lean_object* v_discrTree_1355_; lean_object* v_instanceNames_1356_; lean_object* v_erased_1357_; lean_object* v_classChanges_1358_; lean_object* v_discrTree_1363_; lean_object* v_instanceNames_1364_; lean_object* v_erased_1365_; lean_object* v_classChanges_1366_; lean_object* v___x_1367_; 
v_discrTree_1363_ = lean_ctor_get(v_d_1352_, 0);
v_instanceNames_1364_ = lean_ctor_get(v_d_1352_, 1);
v_erased_1365_ = lean_ctor_get(v_d_1352_, 2);
v_classChanges_1366_ = lean_ctor_get(v_d_1352_, 3);
v___x_1367_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0___redArg(v_instanceNames_1364_, v_declName_1353_);
if (lean_obj_tag(v___x_1367_) == 0)
{
lean_inc_ref(v_classChanges_1366_);
lean_inc_ref(v_erased_1365_);
lean_inc_ref(v_instanceNames_1364_);
lean_inc_ref(v_discrTree_1363_);
lean_dec_ref(v_d_1352_);
v_discrTree_1355_ = v_discrTree_1363_;
v_instanceNames_1356_ = v_instanceNames_1364_;
v_erased_1357_ = v_erased_1365_;
v_classChanges_1358_ = v_classChanges_1366_;
goto v___jp_1354_;
}
else
{
lean_object* v_val_1368_; lean_object* v___x_1370_; uint8_t v_isShared_1371_; uint8_t v_isSharedCheck_1381_; 
v_val_1368_ = lean_ctor_get(v___x_1367_, 0);
v_isSharedCheck_1381_ = !lean_is_exclusive(v___x_1367_);
if (v_isSharedCheck_1381_ == 0)
{
v___x_1370_ = v___x_1367_;
v_isShared_1371_ = v_isSharedCheck_1381_;
goto v_resetjp_1369_;
}
else
{
lean_inc(v_val_1368_);
lean_dec(v___x_1367_);
v___x_1370_ = lean_box(0);
v_isShared_1371_ = v_isSharedCheck_1381_;
goto v_resetjp_1369_;
}
v_resetjp_1369_:
{
lean_object* v___x_1372_; lean_object* v___x_1374_; 
v___x_1372_ = l_Lean_Meta_InstanceEntry_keyClass(v_val_1368_);
lean_dec(v_val_1368_);
lean_inc(v_declName_1353_);
if (v_isShared_1371_ == 0)
{
lean_ctor_set(v___x_1370_, 0, v_declName_1353_);
v___x_1374_ = v___x_1370_;
goto v_reusejp_1373_;
}
else
{
lean_object* v_reuseFailAlloc_1380_; 
v_reuseFailAlloc_1380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1380_, 0, v_declName_1353_);
v___x_1374_ = v_reuseFailAlloc_1380_;
goto v_reusejp_1373_;
}
v_reusejp_1373_:
{
lean_object* v___x_1375_; lean_object* v_discrTree_1376_; lean_object* v_instanceNames_1377_; lean_object* v_erased_1378_; lean_object* v_classChanges_1379_; 
v___x_1375_ = l___private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange(v_d_1352_, v___x_1372_, v___x_1374_);
v_discrTree_1376_ = lean_ctor_get(v___x_1375_, 0);
lean_inc_ref(v_discrTree_1376_);
v_instanceNames_1377_ = lean_ctor_get(v___x_1375_, 1);
lean_inc_ref(v_instanceNames_1377_);
v_erased_1378_ = lean_ctor_get(v___x_1375_, 2);
lean_inc_ref(v_erased_1378_);
v_classChanges_1379_ = lean_ctor_get(v___x_1375_, 3);
lean_inc_ref(v_classChanges_1379_);
lean_dec_ref(v___x_1375_);
v_discrTree_1355_ = v_discrTree_1376_;
v_instanceNames_1356_ = v_instanceNames_1377_;
v_erased_1357_ = v_erased_1378_;
v_classChanges_1358_ = v_classChanges_1379_;
goto v___jp_1354_;
}
}
}
v___jp_1354_:
{
lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; 
v___x_1359_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1___redArg(v_instanceNames_1356_, v_declName_1353_);
v___x_1360_ = lean_box(0);
v___x_1361_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0___redArg(v_erased_1357_, v_declName_1353_, v___x_1360_);
v___x_1362_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1362_, 0, v_discrTree_1355_);
lean_ctor_set(v___x_1362_, 1, v___x_1359_);
lean_ctor_set(v___x_1362_, 2, v___x_1361_);
lean_ctor_set(v___x_1362_, 3, v_classChanges_1358_);
return v___x_1362_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___redArg___lam__0(lean_object* v_d_1382_, lean_object* v_declName_1383_, lean_object* v_toPure_1384_, lean_object* v_____r_1385_){
_start:
{
lean_object* v___x_1386_; lean_object* v___x_1387_; 
v___x_1386_ = l_Lean_Meta_Instances_eraseCore(v_d_1382_, v_declName_1383_);
v___x_1387_ = lean_apply_2(v_toPure_1384_, lean_box(0), v___x_1386_);
return v___x_1387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___redArg___lam__1(lean_object* v___f_1388_, lean_object* v_____r_1389_){
_start:
{
lean_object* v___x_1390_; 
v___x_1390_ = lean_apply_1(v___f_1388_, v_____r_1389_);
return v___x_1390_;
}
}
static lean_object* _init_l_Lean_Meta_Instances_erase___redArg___closed__3(void){
_start:
{
lean_object* v___x_1394_; lean_object* v___x_1395_; 
v___x_1394_ = ((lean_object*)(l_Lean_Meta_Instances_erase___redArg___closed__2));
v___x_1395_ = l_Lean_stringToMessageData(v___x_1394_);
return v___x_1395_;
}
}
static lean_object* _init_l_Lean_Meta_Instances_erase___redArg___closed__5(void){
_start:
{
lean_object* v___x_1397_; lean_object* v___x_1398_; 
v___x_1397_ = ((lean_object*)(l_Lean_Meta_Instances_erase___redArg___closed__4));
v___x_1398_ = l_Lean_stringToMessageData(v___x_1397_);
return v___x_1398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___redArg(lean_object* v_inst_1399_, lean_object* v_inst_1400_, lean_object* v_d_1401_, lean_object* v_declName_1402_){
_start:
{
lean_object* v_toApplicative_1403_; lean_object* v_toBind_1404_; lean_object* v_toPure_1405_; lean_object* v_instanceNames_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___f_1409_; uint8_t v___x_1410_; 
v_toApplicative_1403_ = lean_ctor_get(v_inst_1399_, 0);
v_toBind_1404_ = lean_ctor_get(v_inst_1399_, 1);
lean_inc(v_toBind_1404_);
v_toPure_1405_ = lean_ctor_get(v_toApplicative_1403_, 1);
v_instanceNames_1406_ = lean_ctor_get(v_d_1401_, 1);
v___x_1407_ = ((lean_object*)(l_Lean_Meta_Instances_erase___redArg___closed__0));
v___x_1408_ = ((lean_object*)(l_Lean_Meta_Instances_erase___redArg___closed__1));
lean_inc(v_toPure_1405_);
lean_inc_n(v_declName_1402_, 2);
lean_inc_ref(v_d_1401_);
v___f_1409_ = lean_alloc_closure((void*)(l_Lean_Meta_Instances_erase___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1409_, 0, v_d_1401_);
lean_closure_set(v___f_1409_, 1, v_declName_1402_);
lean_closure_set(v___f_1409_, 2, v_toPure_1405_);
lean_inc_ref(v_instanceNames_1406_);
v___x_1410_ = l_Lean_PersistentHashMap_contains___redArg(v___x_1407_, v___x_1408_, v_instanceNames_1406_, v_declName_1402_);
if (v___x_1410_ == 0)
{
lean_object* v___f_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; 
lean_dec_ref(v_d_1401_);
v___f_1411_ = lean_alloc_closure((void*)(l_Lean_Meta_Instances_erase___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1411_, 0, v___f_1409_);
v___x_1412_ = lean_obj_once(&l_Lean_Meta_Instances_erase___redArg___closed__3, &l_Lean_Meta_Instances_erase___redArg___closed__3_once, _init_l_Lean_Meta_Instances_erase___redArg___closed__3);
v___x_1413_ = l_Lean_MessageData_ofConstName(v_declName_1402_, v___x_1410_);
v___x_1414_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1414_, 0, v___x_1412_);
lean_ctor_set(v___x_1414_, 1, v___x_1413_);
v___x_1415_ = lean_obj_once(&l_Lean_Meta_Instances_erase___redArg___closed__5, &l_Lean_Meta_Instances_erase___redArg___closed__5_once, _init_l_Lean_Meta_Instances_erase___redArg___closed__5);
v___x_1416_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1416_, 0, v___x_1414_);
lean_ctor_set(v___x_1416_, 1, v___x_1415_);
v___x_1417_ = l_Lean_throwError___redArg(v_inst_1399_, v_inst_1400_, v___x_1416_);
v___x_1418_ = lean_apply_4(v_toBind_1404_, lean_box(0), lean_box(0), v___x_1417_, v___f_1411_);
return v___x_1418_;
}
else
{
lean_object* v___x_1419_; lean_object* v___x_1420_; 
lean_inc(v_toPure_1405_);
lean_dec_ref(v___f_1409_);
lean_dec(v_toBind_1404_);
lean_dec_ref(v_inst_1400_);
lean_dec_ref(v_inst_1399_);
v___x_1419_ = lean_box(0);
v___x_1420_ = l_Lean_Meta_Instances_erase___redArg___lam__0(v_d_1401_, v_declName_1402_, v_toPure_1405_, v___x_1419_);
return v___x_1420_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase(lean_object* v_m_1421_, lean_object* v_inst_1422_, lean_object* v_inst_1423_, lean_object* v_d_1424_, lean_object* v_declName_1425_){
_start:
{
lean_object* v___x_1426_; 
v___x_1426_ = l_Lean_Meta_Instances_erase___redArg(v_inst_1422_, v_inst_1423_, v_d_1424_, v_declName_1425_);
return v___x_1426_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_(lean_object* v_x_1427_, lean_object* v_e_1428_){
_start:
{
lean_object* v_globalName_x3f_1433_; 
v_globalName_x3f_1433_ = lean_ctor_get(v_e_1428_, 3);
lean_inc(v_globalName_x3f_1433_);
if (lean_obj_tag(v_globalName_x3f_1433_) == 0)
{
goto v___jp_1429_;
}
else
{
lean_object* v_val_1434_; lean_object* v___x_1436_; uint8_t v_isShared_1437_; uint8_t v_isSharedCheck_1443_; 
v_val_1434_ = lean_ctor_get(v_globalName_x3f_1433_, 0);
v_isSharedCheck_1443_ = !lean_is_exclusive(v_globalName_x3f_1433_);
if (v_isSharedCheck_1443_ == 0)
{
v___x_1436_ = v_globalName_x3f_1433_;
v_isShared_1437_ = v_isSharedCheck_1443_;
goto v_resetjp_1435_;
}
else
{
lean_inc(v_val_1434_);
lean_dec(v_globalName_x3f_1433_);
v___x_1436_ = lean_box(0);
v_isShared_1437_ = v_isSharedCheck_1443_;
goto v_resetjp_1435_;
}
v_resetjp_1435_:
{
uint8_t v___x_1438_; 
v___x_1438_ = l_Lean_isPrivateName(v_val_1434_);
lean_dec(v_val_1434_);
if (v___x_1438_ == 0)
{
lean_object* v___x_1440_; 
if (v_isShared_1437_ == 0)
{
lean_ctor_set(v___x_1436_, 0, v_e_1428_);
v___x_1440_ = v___x_1436_;
goto v_reusejp_1439_;
}
else
{
lean_object* v_reuseFailAlloc_1442_; 
v_reuseFailAlloc_1442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1442_, 0, v_e_1428_);
v___x_1440_ = v_reuseFailAlloc_1442_;
goto v_reusejp_1439_;
}
v_reusejp_1439_:
{
lean_object* v___x_1441_; 
lean_inc_ref_n(v___x_1440_, 2);
v___x_1441_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1441_, 0, v___x_1440_);
lean_ctor_set(v___x_1441_, 1, v___x_1440_);
lean_ctor_set(v___x_1441_, 2, v___x_1440_);
return v___x_1441_;
}
}
else
{
lean_del_object(v___x_1436_);
goto v___jp_1429_;
}
}
}
v___jp_1429_:
{
lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; 
v___x_1430_ = lean_box(0);
v___x_1431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1431_, 0, v_e_1428_);
v___x_1432_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1432_, 0, v___x_1430_);
lean_ctor_set(v___x_1432_, 1, v___x_1430_);
lean_ctor_set(v___x_1432_, 2, v___x_1431_);
return v___x_1432_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2____boxed(lean_object* v_x_1444_, lean_object* v_e_1445_){
_start:
{
lean_object* v_res_1446_; 
v_res_1446_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_(v_x_1444_, v_e_1445_);
lean_dec_ref(v_x_1444_);
return v_res_1446_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_(lean_object* v___y_1447_){
_start:
{
lean_inc_ref(v___y_1447_);
return v___y_1447_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2____boxed(lean_object* v___y_1448_){
_start:
{
lean_object* v_res_1449_; 
v_res_1449_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_(v___y_1448_);
lean_dec_ref(v___y_1448_);
return v_res_1449_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1459_; uint8_t v___x_1460_; uint8_t v___x_1461_; lean_object* v___f_1462_; lean_object* v___f_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; 
v___x_1459_ = lean_box(0);
v___x_1460_ = 0;
v___x_1461_ = 1;
v___f_1462_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_));
v___f_1463_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_));
v___x_1464_ = lean_obj_once(&l_Lean_Meta_instInhabitedInstances_default___closed__2, &l_Lean_Meta_instInhabitedInstances_default___closed__2_once, _init_l_Lean_Meta_instInhabitedInstances_default___closed__2);
v___x_1465_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_));
v___x_1466_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_));
v___x_1467_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_));
v___x_1468_ = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(v___x_1468_, 0, v___x_1467_);
lean_ctor_set(v___x_1468_, 1, v___x_1466_);
lean_ctor_set(v___x_1468_, 2, v___x_1465_);
lean_ctor_set(v___x_1468_, 3, v___x_1464_);
lean_ctor_set(v___x_1468_, 4, v___f_1463_);
lean_ctor_set(v___x_1468_, 5, v___f_1462_);
lean_ctor_set(v___x_1468_, 6, v___x_1459_);
lean_ctor_set_uint8(v___x_1468_, sizeof(void*)*7, v___x_1461_);
lean_ctor_set_uint8(v___x_1468_, sizeof(void*)*7 + 1, v___x_1460_);
return v___x_1468_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1470_; lean_object* v___x_1471_; 
v___x_1470_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_);
v___x_1471_ = l_Lean_registerSimpleScopedEnvExtension___redArg(v___x_1470_);
return v___x_1471_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2____boxed(lean_object* v_a_1472_){
_start:
{
lean_object* v_res_1473_; 
v_res_1473_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_();
return v_res_1473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___redArg(lean_object* v_k_1474_, uint8_t v_allowLevelAssignments_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_){
_start:
{
lean_object* v___x_1481_; 
v___x_1481_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_1475_, v_k_1474_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1479_);
if (lean_obj_tag(v___x_1481_) == 0)
{
lean_object* v_a_1482_; lean_object* v___x_1484_; uint8_t v_isShared_1485_; uint8_t v_isSharedCheck_1489_; 
v_a_1482_ = lean_ctor_get(v___x_1481_, 0);
v_isSharedCheck_1489_ = !lean_is_exclusive(v___x_1481_);
if (v_isSharedCheck_1489_ == 0)
{
v___x_1484_ = v___x_1481_;
v_isShared_1485_ = v_isSharedCheck_1489_;
goto v_resetjp_1483_;
}
else
{
lean_inc(v_a_1482_);
lean_dec(v___x_1481_);
v___x_1484_ = lean_box(0);
v_isShared_1485_ = v_isSharedCheck_1489_;
goto v_resetjp_1483_;
}
v_resetjp_1483_:
{
lean_object* v___x_1487_; 
if (v_isShared_1485_ == 0)
{
v___x_1487_ = v___x_1484_;
goto v_reusejp_1486_;
}
else
{
lean_object* v_reuseFailAlloc_1488_; 
v_reuseFailAlloc_1488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1488_, 0, v_a_1482_);
v___x_1487_ = v_reuseFailAlloc_1488_;
goto v_reusejp_1486_;
}
v_reusejp_1486_:
{
return v___x_1487_;
}
}
}
else
{
lean_object* v_a_1490_; lean_object* v___x_1492_; uint8_t v_isShared_1493_; uint8_t v_isSharedCheck_1497_; 
v_a_1490_ = lean_ctor_get(v___x_1481_, 0);
v_isSharedCheck_1497_ = !lean_is_exclusive(v___x_1481_);
if (v_isSharedCheck_1497_ == 0)
{
v___x_1492_ = v___x_1481_;
v_isShared_1493_ = v_isSharedCheck_1497_;
goto v_resetjp_1491_;
}
else
{
lean_inc(v_a_1490_);
lean_dec(v___x_1481_);
v___x_1492_ = lean_box(0);
v_isShared_1493_ = v_isSharedCheck_1497_;
goto v_resetjp_1491_;
}
v_resetjp_1491_:
{
lean_object* v___x_1495_; 
if (v_isShared_1493_ == 0)
{
v___x_1495_ = v___x_1492_;
goto v_reusejp_1494_;
}
else
{
lean_object* v_reuseFailAlloc_1496_; 
v_reuseFailAlloc_1496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1496_, 0, v_a_1490_);
v___x_1495_ = v_reuseFailAlloc_1496_;
goto v_reusejp_1494_;
}
v_reusejp_1494_:
{
return v___x_1495_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___redArg___boxed(lean_object* v_k_1498_, lean_object* v_allowLevelAssignments_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1505_; lean_object* v_res_1506_; 
v_allowLevelAssignments_boxed_1505_ = lean_unbox(v_allowLevelAssignments_1499_);
v_res_1506_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___redArg(v_k_1498_, v_allowLevelAssignments_boxed_1505_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_);
lean_dec(v___y_1503_);
lean_dec_ref(v___y_1502_);
lean_dec(v___y_1501_);
lean_dec_ref(v___y_1500_);
return v_res_1506_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0(lean_object* v_00_u03b1_1507_, lean_object* v_k_1508_, uint8_t v_allowLevelAssignments_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_){
_start:
{
lean_object* v___x_1515_; 
v___x_1515_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___redArg(v_k_1508_, v_allowLevelAssignments_1509_, v___y_1510_, v___y_1511_, v___y_1512_, v___y_1513_);
return v___x_1515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___boxed(lean_object* v_00_u03b1_1516_, lean_object* v_k_1517_, lean_object* v_allowLevelAssignments_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1524_; lean_object* v_res_1525_; 
v_allowLevelAssignments_boxed_1524_ = lean_unbox(v_allowLevelAssignments_1518_);
v_res_1525_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0(v_00_u03b1_1516_, v_k_1517_, v_allowLevelAssignments_boxed_1524_, v___y_1519_, v___y_1520_, v___y_1521_, v___y_1522_);
lean_dec(v___y_1522_);
lean_dec_ref(v___y_1521_);
lean_dec(v___y_1520_);
lean_dec_ref(v___y_1519_);
return v_res_1525_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___lam__0(lean_object* v_a_1526_, lean_object* v___x_1527_, uint8_t v___x_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_){
_start:
{
lean_object* v___x_1534_; 
v___x_1534_ = l_Lean_Meta_forallMetaTelescopeReducing(v_a_1526_, v___x_1527_, v___x_1528_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_);
if (lean_obj_tag(v___x_1534_) == 0)
{
lean_object* v_a_1535_; lean_object* v_snd_1536_; lean_object* v_snd_1537_; uint8_t v___x_1538_; lean_object* v___x_1539_; 
v_a_1535_ = lean_ctor_get(v___x_1534_, 0);
lean_inc(v_a_1535_);
lean_dec_ref_known(v___x_1534_, 1);
v_snd_1536_ = lean_ctor_get(v_a_1535_, 1);
lean_inc(v_snd_1536_);
lean_dec(v_a_1535_);
v_snd_1537_ = lean_ctor_get(v_snd_1536_, 1);
lean_inc(v_snd_1537_);
lean_dec(v_snd_1536_);
v___x_1538_ = 0;
v___x_1539_ = l_Lean_Meta_DiscrTree_mkPath(v_snd_1537_, v___x_1538_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_);
return v___x_1539_;
}
else
{
lean_object* v_a_1540_; lean_object* v___x_1542_; uint8_t v_isShared_1543_; uint8_t v_isSharedCheck_1547_; 
v_a_1540_ = lean_ctor_get(v___x_1534_, 0);
v_isSharedCheck_1547_ = !lean_is_exclusive(v___x_1534_);
if (v_isSharedCheck_1547_ == 0)
{
v___x_1542_ = v___x_1534_;
v_isShared_1543_ = v_isSharedCheck_1547_;
goto v_resetjp_1541_;
}
else
{
lean_inc(v_a_1540_);
lean_dec(v___x_1534_);
v___x_1542_ = lean_box(0);
v_isShared_1543_ = v_isSharedCheck_1547_;
goto v_resetjp_1541_;
}
v_resetjp_1541_:
{
lean_object* v___x_1545_; 
if (v_isShared_1543_ == 0)
{
v___x_1545_ = v___x_1542_;
goto v_reusejp_1544_;
}
else
{
lean_object* v_reuseFailAlloc_1546_; 
v_reuseFailAlloc_1546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1546_, 0, v_a_1540_);
v___x_1545_ = v_reuseFailAlloc_1546_;
goto v_reusejp_1544_;
}
v_reusejp_1544_:
{
return v___x_1545_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___lam__0___boxed(lean_object* v_a_1548_, lean_object* v___x_1549_, lean_object* v___x_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_){
_start:
{
uint8_t v___x_497__boxed_1556_; lean_object* v_res_1557_; 
v___x_497__boxed_1556_ = lean_unbox(v___x_1550_);
v_res_1557_ = l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___lam__0(v_a_1548_, v___x_1549_, v___x_497__boxed_1556_, v___y_1551_, v___y_1552_, v___y_1553_, v___y_1554_);
lean_dec(v___y_1554_);
lean_dec_ref(v___y_1553_);
lean_dec(v___y_1552_);
lean_dec_ref(v___y_1551_);
return v_res_1557_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey(lean_object* v_e_1558_, lean_object* v_a_1559_, lean_object* v_a_1560_, lean_object* v_a_1561_, lean_object* v_a_1562_){
_start:
{
lean_object* v___x_1564_; 
lean_inc(v_a_1562_);
lean_inc_ref(v_a_1561_);
lean_inc(v_a_1560_);
lean_inc_ref(v_a_1559_);
v___x_1564_ = lean_infer_type(v_e_1558_, v_a_1559_, v_a_1560_, v_a_1561_, v_a_1562_);
if (lean_obj_tag(v___x_1564_) == 0)
{
lean_object* v_a_1565_; lean_object* v___x_1566_; uint8_t v___x_1567_; lean_object* v___x_1568_; lean_object* v___f_1569_; uint8_t v___x_1570_; lean_object* v___x_1571_; 
v_a_1565_ = lean_ctor_get(v___x_1564_, 0);
lean_inc(v_a_1565_);
lean_dec_ref_known(v___x_1564_, 1);
v___x_1566_ = lean_box(0);
v___x_1567_ = 0;
v___x_1568_ = lean_box(v___x_1567_);
v___f_1569_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1569_, 0, v_a_1565_);
lean_closure_set(v___f_1569_, 1, v___x_1566_);
lean_closure_set(v___f_1569_, 2, v___x_1568_);
v___x_1570_ = 0;
v___x_1571_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___redArg(v___f_1569_, v___x_1570_, v_a_1559_, v_a_1560_, v_a_1561_, v_a_1562_);
return v___x_1571_;
}
else
{
lean_object* v_a_1572_; lean_object* v___x_1574_; uint8_t v_isShared_1575_; uint8_t v_isSharedCheck_1579_; 
v_a_1572_ = lean_ctor_get(v___x_1564_, 0);
v_isSharedCheck_1579_ = !lean_is_exclusive(v___x_1564_);
if (v_isSharedCheck_1579_ == 0)
{
v___x_1574_ = v___x_1564_;
v_isShared_1575_ = v_isSharedCheck_1579_;
goto v_resetjp_1573_;
}
else
{
lean_inc(v_a_1572_);
lean_dec(v___x_1564_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___boxed(lean_object* v_e_1580_, lean_object* v_a_1581_, lean_object* v_a_1582_, lean_object* v_a_1583_, lean_object* v_a_1584_, lean_object* v_a_1585_){
_start:
{
lean_object* v_res_1586_; 
v_res_1586_ = l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey(v_e_1580_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_);
lean_dec(v_a_1584_);
lean_dec_ref(v_a_1583_);
lean_dec(v_a_1582_);
lean_dec_ref(v_a_1581_);
return v_res_1586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___lam__0(lean_object* v_k_1587_, lean_object* v_b_1588_, lean_object* v_c_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_){
_start:
{
lean_object* v___x_1595_; 
lean_inc(v___y_1593_);
lean_inc_ref(v___y_1592_);
lean_inc(v___y_1591_);
lean_inc_ref(v___y_1590_);
v___x_1595_ = lean_apply_7(v_k_1587_, v_b_1588_, v_c_1589_, v___y_1590_, v___y_1591_, v___y_1592_, v___y_1593_, lean_box(0));
return v___x_1595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___lam__0___boxed(lean_object* v_k_1596_, lean_object* v_b_1597_, lean_object* v_c_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_){
_start:
{
lean_object* v_res_1604_; 
v_res_1604_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___lam__0(v_k_1596_, v_b_1597_, v_c_1598_, v___y_1599_, v___y_1600_, v___y_1601_, v___y_1602_);
lean_dec(v___y_1602_);
lean_dec_ref(v___y_1601_);
lean_dec(v___y_1600_);
lean_dec_ref(v___y_1599_);
return v_res_1604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(lean_object* v_type_1605_, lean_object* v_k_1606_, uint8_t v_cleanupAnnotations_1607_, uint8_t v_whnfType_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_){
_start:
{
lean_object* v___f_1614_; lean_object* v___x_1615_; 
v___f_1614_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1614_, 0, v_k_1606_);
v___x_1615_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_1605_, v___f_1614_, v_cleanupAnnotations_1607_, v_whnfType_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_);
if (lean_obj_tag(v___x_1615_) == 0)
{
lean_object* v_a_1616_; lean_object* v___x_1618_; uint8_t v_isShared_1619_; uint8_t v_isSharedCheck_1623_; 
v_a_1616_ = lean_ctor_get(v___x_1615_, 0);
v_isSharedCheck_1623_ = !lean_is_exclusive(v___x_1615_);
if (v_isSharedCheck_1623_ == 0)
{
v___x_1618_ = v___x_1615_;
v_isShared_1619_ = v_isSharedCheck_1623_;
goto v_resetjp_1617_;
}
else
{
lean_inc(v_a_1616_);
lean_dec(v___x_1615_);
v___x_1618_ = lean_box(0);
v_isShared_1619_ = v_isSharedCheck_1623_;
goto v_resetjp_1617_;
}
v_resetjp_1617_:
{
lean_object* v___x_1621_; 
if (v_isShared_1619_ == 0)
{
v___x_1621_ = v___x_1618_;
goto v_reusejp_1620_;
}
else
{
lean_object* v_reuseFailAlloc_1622_; 
v_reuseFailAlloc_1622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1622_, 0, v_a_1616_);
v___x_1621_ = v_reuseFailAlloc_1622_;
goto v_reusejp_1620_;
}
v_reusejp_1620_:
{
return v___x_1621_;
}
}
}
else
{
lean_object* v_a_1624_; lean_object* v___x_1626_; uint8_t v_isShared_1627_; uint8_t v_isSharedCheck_1631_; 
v_a_1624_ = lean_ctor_get(v___x_1615_, 0);
v_isSharedCheck_1631_ = !lean_is_exclusive(v___x_1615_);
if (v_isSharedCheck_1631_ == 0)
{
v___x_1626_ = v___x_1615_;
v_isShared_1627_ = v_isSharedCheck_1631_;
goto v_resetjp_1625_;
}
else
{
lean_inc(v_a_1624_);
lean_dec(v___x_1615_);
v___x_1626_ = lean_box(0);
v_isShared_1627_ = v_isSharedCheck_1631_;
goto v_resetjp_1625_;
}
v_resetjp_1625_:
{
lean_object* v___x_1629_; 
if (v_isShared_1627_ == 0)
{
v___x_1629_ = v___x_1626_;
goto v_reusejp_1628_;
}
else
{
lean_object* v_reuseFailAlloc_1630_; 
v_reuseFailAlloc_1630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1630_, 0, v_a_1624_);
v___x_1629_ = v_reuseFailAlloc_1630_;
goto v_reusejp_1628_;
}
v_reusejp_1628_:
{
return v___x_1629_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___boxed(lean_object* v_type_1632_, lean_object* v_k_1633_, lean_object* v_cleanupAnnotations_1634_, lean_object* v_whnfType_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1641_; uint8_t v_whnfType_boxed_1642_; lean_object* v_res_1643_; 
v_cleanupAnnotations_boxed_1641_ = lean_unbox(v_cleanupAnnotations_1634_);
v_whnfType_boxed_1642_ = lean_unbox(v_whnfType_1635_);
v_res_1643_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(v_type_1632_, v_k_1633_, v_cleanupAnnotations_boxed_1641_, v_whnfType_boxed_1642_, v___y_1636_, v___y_1637_, v___y_1638_, v___y_1639_);
lean_dec(v___y_1639_);
lean_dec_ref(v___y_1638_);
lean_dec(v___y_1637_);
lean_dec_ref(v___y_1636_);
return v_res_1643_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1(lean_object* v_00_u03b1_1644_, lean_object* v_type_1645_, lean_object* v_k_1646_, uint8_t v_cleanupAnnotations_1647_, uint8_t v_whnfType_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_){
_start:
{
lean_object* v___x_1654_; 
v___x_1654_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(v_type_1645_, v_k_1646_, v_cleanupAnnotations_1647_, v_whnfType_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_);
return v___x_1654_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___boxed(lean_object* v_00_u03b1_1655_, lean_object* v_type_1656_, lean_object* v_k_1657_, lean_object* v_cleanupAnnotations_1658_, lean_object* v_whnfType_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1665_; uint8_t v_whnfType_boxed_1666_; lean_object* v_res_1667_; 
v_cleanupAnnotations_boxed_1665_ = lean_unbox(v_cleanupAnnotations_1658_);
v_whnfType_boxed_1666_ = lean_unbox(v_whnfType_1659_);
v_res_1667_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1(v_00_u03b1_1655_, v_type_1656_, v_k_1657_, v_cleanupAnnotations_boxed_1665_, v_whnfType_boxed_1666_, v___y_1660_, v___y_1661_, v___y_1662_, v___y_1663_);
lean_dec(v___y_1663_);
lean_dec_ref(v___y_1662_);
lean_dec(v___y_1661_);
lean_dec_ref(v___y_1660_);
return v_res_1667_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0(lean_object* v_as_1671_, size_t v_sz_1672_, size_t v_i_1673_, lean_object* v_b_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_){
_start:
{
lean_object* v_a_1681_; uint8_t v___x_1685_; 
v___x_1685_ = lean_usize_dec_lt(v_i_1673_, v_sz_1672_);
if (v___x_1685_ == 0)
{
lean_object* v___x_1686_; 
v___x_1686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1686_, 0, v_b_1674_);
return v___x_1686_;
}
else
{
lean_object* v_fst_1687_; lean_object* v_snd_1688_; lean_object* v___x_1690_; uint8_t v_isShared_1691_; uint8_t v_isSharedCheck_1735_; 
v_fst_1687_ = lean_ctor_get(v_b_1674_, 0);
v_snd_1688_ = lean_ctor_get(v_b_1674_, 1);
v_isSharedCheck_1735_ = !lean_is_exclusive(v_b_1674_);
if (v_isSharedCheck_1735_ == 0)
{
v___x_1690_ = v_b_1674_;
v_isShared_1691_ = v_isSharedCheck_1735_;
goto v_resetjp_1689_;
}
else
{
lean_inc(v_snd_1688_);
lean_inc(v_fst_1687_);
lean_dec(v_b_1674_);
v___x_1690_ = lean_box(0);
v_isShared_1691_ = v_isSharedCheck_1735_;
goto v_resetjp_1689_;
}
v_resetjp_1689_:
{
lean_object* v_next_1697_; 
v_next_1697_ = lean_ctor_get(v_snd_1688_, 0);
lean_inc(v_next_1697_);
if (lean_obj_tag(v_next_1697_) == 0)
{
goto v___jp_1692_;
}
else
{
lean_object* v_upperBound_1698_; lean_object* v_val_1699_; lean_object* v___x_1701_; uint8_t v_isShared_1702_; uint8_t v_isSharedCheck_1734_; 
v_upperBound_1698_ = lean_ctor_get(v_snd_1688_, 1);
v_val_1699_ = lean_ctor_get(v_next_1697_, 0);
v_isSharedCheck_1734_ = !lean_is_exclusive(v_next_1697_);
if (v_isSharedCheck_1734_ == 0)
{
v___x_1701_ = v_next_1697_;
v_isShared_1702_ = v_isSharedCheck_1734_;
goto v_resetjp_1700_;
}
else
{
lean_inc(v_val_1699_);
lean_dec(v_next_1697_);
v___x_1701_ = lean_box(0);
v_isShared_1702_ = v_isSharedCheck_1734_;
goto v_resetjp_1700_;
}
v_resetjp_1700_:
{
uint8_t v___x_1703_; 
v___x_1703_ = lean_nat_dec_lt(v_val_1699_, v_upperBound_1698_);
if (v___x_1703_ == 0)
{
lean_del_object(v___x_1701_);
lean_dec(v_val_1699_);
goto v___jp_1692_;
}
else
{
lean_object* v___x_1705_; uint8_t v_isShared_1706_; uint8_t v_isSharedCheck_1731_; 
lean_inc(v_upperBound_1698_);
lean_del_object(v___x_1690_);
v_isSharedCheck_1731_ = !lean_is_exclusive(v_snd_1688_);
if (v_isSharedCheck_1731_ == 0)
{
lean_object* v_unused_1732_; lean_object* v_unused_1733_; 
v_unused_1732_ = lean_ctor_get(v_snd_1688_, 1);
lean_dec(v_unused_1732_);
v_unused_1733_ = lean_ctor_get(v_snd_1688_, 0);
lean_dec(v_unused_1733_);
v___x_1705_ = v_snd_1688_;
v_isShared_1706_ = v_isSharedCheck_1731_;
goto v_resetjp_1704_;
}
else
{
lean_dec(v_snd_1688_);
v___x_1705_ = lean_box(0);
v_isShared_1706_ = v_isSharedCheck_1731_;
goto v_resetjp_1704_;
}
v_resetjp_1704_:
{
lean_object* v_a_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1711_; 
v_a_1707_ = lean_array_uget_borrowed(v_as_1671_, v_i_1673_);
v___x_1708_ = lean_unsigned_to_nat(1u);
v___x_1709_ = lean_nat_add(v_val_1699_, v___x_1708_);
if (v_isShared_1702_ == 0)
{
lean_ctor_set(v___x_1701_, 0, v___x_1709_);
v___x_1711_ = v___x_1701_;
goto v_reusejp_1710_;
}
else
{
lean_object* v_reuseFailAlloc_1730_; 
v_reuseFailAlloc_1730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1730_, 0, v___x_1709_);
v___x_1711_ = v_reuseFailAlloc_1730_;
goto v_reusejp_1710_;
}
v_reusejp_1710_:
{
lean_object* v___x_1713_; 
if (v_isShared_1706_ == 0)
{
lean_ctor_set(v___x_1705_, 0, v___x_1711_);
v___x_1713_ = v___x_1705_;
goto v_reusejp_1712_;
}
else
{
lean_object* v_reuseFailAlloc_1729_; 
v_reuseFailAlloc_1729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1729_, 0, v___x_1711_);
lean_ctor_set(v_reuseFailAlloc_1729_, 1, v_upperBound_1698_);
v___x_1713_ = v_reuseFailAlloc_1729_;
goto v_reusejp_1712_;
}
v_reusejp_1712_:
{
lean_object* v___x_1714_; 
lean_inc(v___y_1678_);
lean_inc_ref(v___y_1677_);
lean_inc(v___y_1676_);
lean_inc_ref(v___y_1675_);
lean_inc(v_a_1707_);
v___x_1714_ = lean_infer_type(v_a_1707_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_);
if (lean_obj_tag(v___x_1714_) == 0)
{
lean_object* v_a_1715_; lean_object* v___x_1716_; uint8_t v___x_1717_; 
v_a_1715_ = lean_ctor_get(v___x_1714_, 0);
lean_inc(v_a_1715_);
lean_dec_ref_known(v___x_1714_, 1);
v___x_1716_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0___closed__1));
v___x_1717_ = l_Lean_Expr_isAppOf(v_a_1715_, v___x_1716_);
lean_dec(v_a_1715_);
if (v___x_1717_ == 0)
{
lean_object* v___x_1718_; 
lean_dec(v_val_1699_);
v___x_1718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1718_, 0, v_fst_1687_);
lean_ctor_set(v___x_1718_, 1, v___x_1713_);
v_a_1681_ = v___x_1718_;
goto v___jp_1680_;
}
else
{
lean_object* v___x_1719_; lean_object* v___x_1720_; 
v___x_1719_ = lean_array_push(v_fst_1687_, v_val_1699_);
v___x_1720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1720_, 0, v___x_1719_);
lean_ctor_set(v___x_1720_, 1, v___x_1713_);
v_a_1681_ = v___x_1720_;
goto v___jp_1680_;
}
}
else
{
lean_object* v_a_1721_; lean_object* v___x_1723_; uint8_t v_isShared_1724_; uint8_t v_isSharedCheck_1728_; 
lean_dec_ref(v___x_1713_);
lean_dec(v_val_1699_);
lean_dec(v_fst_1687_);
v_a_1721_ = lean_ctor_get(v___x_1714_, 0);
v_isSharedCheck_1728_ = !lean_is_exclusive(v___x_1714_);
if (v_isSharedCheck_1728_ == 0)
{
v___x_1723_ = v___x_1714_;
v_isShared_1724_ = v_isSharedCheck_1728_;
goto v_resetjp_1722_;
}
else
{
lean_inc(v_a_1721_);
lean_dec(v___x_1714_);
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
}
}
}
}
v___jp_1692_:
{
lean_object* v___x_1694_; 
if (v_isShared_1691_ == 0)
{
v___x_1694_ = v___x_1690_;
goto v_reusejp_1693_;
}
else
{
lean_object* v_reuseFailAlloc_1696_; 
v_reuseFailAlloc_1696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1696_, 0, v_fst_1687_);
lean_ctor_set(v_reuseFailAlloc_1696_, 1, v_snd_1688_);
v___x_1694_ = v_reuseFailAlloc_1696_;
goto v_reusejp_1693_;
}
v_reusejp_1693_:
{
lean_object* v___x_1695_; 
v___x_1695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1695_, 0, v___x_1694_);
return v___x_1695_;
}
}
}
}
v___jp_1680_:
{
size_t v___x_1682_; size_t v___x_1683_; 
v___x_1682_ = ((size_t)1ULL);
v___x_1683_ = lean_usize_add(v_i_1673_, v___x_1682_);
v_i_1673_ = v___x_1683_;
v_b_1674_ = v_a_1681_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0___boxed(lean_object* v_as_1736_, lean_object* v_sz_1737_, lean_object* v_i_1738_, lean_object* v_b_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_){
_start:
{
size_t v_sz_boxed_1745_; size_t v_i_boxed_1746_; lean_object* v_res_1747_; 
v_sz_boxed_1745_ = lean_unbox_usize(v_sz_1737_);
lean_dec(v_sz_1737_);
v_i_boxed_1746_ = lean_unbox_usize(v_i_1738_);
lean_dec(v_i_1738_);
v_res_1747_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0(v_as_1736_, v_sz_boxed_1745_, v_i_boxed_1746_, v_b_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_);
lean_dec(v___y_1743_);
lean_dec_ref(v___y_1742_);
lean_dec(v___y_1741_);
lean_dec_ref(v___y_1740_);
lean_dec_ref(v_as_1736_);
return v_res_1747_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0(lean_object* v_declName_1752_, lean_object* v_args_1753_, lean_object* v_x_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_){
_start:
{
lean_object* v___x_1760_; lean_object* v___y_1762_; lean_object* v_env_1787_; lean_object* v___x_1788_; 
v___x_1760_ = lean_st_ref_get(v___y_1758_);
v_env_1787_ = lean_ctor_get(v___x_1760_, 0);
lean_inc_ref(v_env_1787_);
lean_dec(v___x_1760_);
v___x_1788_ = l_Lean_getOutParamPositions_x3f(v_env_1787_, v_declName_1752_);
if (lean_obj_tag(v___x_1788_) == 0)
{
lean_object* v___x_1789_; 
v___x_1789_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__1));
v___y_1762_ = v___x_1789_;
goto v___jp_1761_;
}
else
{
lean_object* v_val_1790_; 
v_val_1790_ = lean_ctor_get(v___x_1788_, 0);
lean_inc(v_val_1790_);
lean_dec_ref_known(v___x_1788_, 1);
v___y_1762_ = v_val_1790_;
goto v___jp_1761_;
}
v___jp_1761_:
{
lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; size_t v_sz_1767_; size_t v___x_1768_; lean_object* v___x_1769_; 
v___x_1763_ = lean_array_get_size(v_args_1753_);
v___x_1764_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__0));
v___x_1765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1765_, 0, v___x_1764_);
lean_ctor_set(v___x_1765_, 1, v___x_1763_);
v___x_1766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1766_, 0, v___y_1762_);
lean_ctor_set(v___x_1766_, 1, v___x_1765_);
v_sz_1767_ = lean_array_size(v_args_1753_);
v___x_1768_ = ((size_t)0ULL);
v___x_1769_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0(v_args_1753_, v_sz_1767_, v___x_1768_, v___x_1766_, v___y_1755_, v___y_1756_, v___y_1757_, v___y_1758_);
if (lean_obj_tag(v___x_1769_) == 0)
{
lean_object* v_a_1770_; lean_object* v___x_1772_; uint8_t v_isShared_1773_; uint8_t v_isSharedCheck_1778_; 
v_a_1770_ = lean_ctor_get(v___x_1769_, 0);
v_isSharedCheck_1778_ = !lean_is_exclusive(v___x_1769_);
if (v_isSharedCheck_1778_ == 0)
{
v___x_1772_ = v___x_1769_;
v_isShared_1773_ = v_isSharedCheck_1778_;
goto v_resetjp_1771_;
}
else
{
lean_inc(v_a_1770_);
lean_dec(v___x_1769_);
v___x_1772_ = lean_box(0);
v_isShared_1773_ = v_isSharedCheck_1778_;
goto v_resetjp_1771_;
}
v_resetjp_1771_:
{
lean_object* v_fst_1774_; lean_object* v___x_1776_; 
v_fst_1774_ = lean_ctor_get(v_a_1770_, 0);
lean_inc(v_fst_1774_);
lean_dec(v_a_1770_);
if (v_isShared_1773_ == 0)
{
lean_ctor_set(v___x_1772_, 0, v_fst_1774_);
v___x_1776_ = v___x_1772_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v_fst_1774_);
v___x_1776_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1775_;
}
v_reusejp_1775_:
{
return v___x_1776_;
}
}
}
else
{
lean_object* v_a_1779_; lean_object* v___x_1781_; uint8_t v_isShared_1782_; uint8_t v_isSharedCheck_1786_; 
v_a_1779_ = lean_ctor_get(v___x_1769_, 0);
v_isSharedCheck_1786_ = !lean_is_exclusive(v___x_1769_);
if (v_isSharedCheck_1786_ == 0)
{
v___x_1781_ = v___x_1769_;
v_isShared_1782_ = v_isSharedCheck_1786_;
goto v_resetjp_1780_;
}
else
{
lean_inc(v_a_1779_);
lean_dec(v___x_1769_);
v___x_1781_ = lean_box(0);
v_isShared_1782_ = v_isSharedCheck_1786_;
goto v_resetjp_1780_;
}
v_resetjp_1780_:
{
lean_object* v___x_1784_; 
if (v_isShared_1782_ == 0)
{
v___x_1784_ = v___x_1781_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v_a_1779_);
v___x_1784_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1783_;
}
v_reusejp_1783_:
{
return v___x_1784_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___boxed(lean_object* v_declName_1791_, lean_object* v_args_1792_, lean_object* v_x_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_){
_start:
{
lean_object* v_res_1799_; 
v_res_1799_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0(v_declName_1791_, v_args_1792_, v_x_1793_, v___y_1794_, v___y_1795_, v___y_1796_, v___y_1797_);
lean_dec(v___y_1797_);
lean_dec_ref(v___y_1796_);
lean_dec(v___y_1795_);
lean_dec_ref(v___y_1794_);
lean_dec_ref(v_x_1793_);
lean_dec_ref(v_args_1792_);
lean_dec(v_declName_1791_);
return v_res_1799_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf(lean_object* v_classTy_1800_, lean_object* v_a_1801_, lean_object* v_a_1802_, lean_object* v_a_1803_, lean_object* v_a_1804_){
_start:
{
lean_object* v___x_1806_; 
v___x_1806_ = l_Lean_Expr_getAppFn(v_classTy_1800_);
if (lean_obj_tag(v___x_1806_) == 4)
{
lean_object* v_declName_1807_; lean_object* v___f_1808_; lean_object* v___x_1809_; 
v_declName_1807_ = lean_ctor_get(v___x_1806_, 0);
lean_inc(v_declName_1807_);
v___f_1808_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1808_, 0, v_declName_1807_);
lean_inc(v_a_1804_);
lean_inc_ref(v_a_1803_);
lean_inc(v_a_1802_);
lean_inc_ref(v_a_1801_);
v___x_1809_ = lean_infer_type(v___x_1806_, v_a_1801_, v_a_1802_, v_a_1803_, v_a_1804_);
if (lean_obj_tag(v___x_1809_) == 0)
{
lean_object* v_a_1810_; uint8_t v___x_1811_; lean_object* v___x_1812_; 
v_a_1810_ = lean_ctor_get(v___x_1809_, 0);
lean_inc(v_a_1810_);
lean_dec_ref_known(v___x_1809_, 1);
v___x_1811_ = 0;
v___x_1812_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(v_a_1810_, v___f_1808_, v___x_1811_, v___x_1811_, v_a_1801_, v_a_1802_, v_a_1803_, v_a_1804_);
return v___x_1812_;
}
else
{
lean_object* v_a_1813_; lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1820_; 
lean_dec_ref(v___f_1808_);
v_a_1813_ = lean_ctor_get(v___x_1809_, 0);
v_isSharedCheck_1820_ = !lean_is_exclusive(v___x_1809_);
if (v_isSharedCheck_1820_ == 0)
{
v___x_1815_ = v___x_1809_;
v_isShared_1816_ = v_isSharedCheck_1820_;
goto v_resetjp_1814_;
}
else
{
lean_inc(v_a_1813_);
lean_dec(v___x_1809_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1820_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
lean_object* v___x_1818_; 
if (v_isShared_1816_ == 0)
{
v___x_1818_ = v___x_1815_;
goto v_reusejp_1817_;
}
else
{
lean_object* v_reuseFailAlloc_1819_; 
v_reuseFailAlloc_1819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1819_, 0, v_a_1813_);
v___x_1818_ = v_reuseFailAlloc_1819_;
goto v_reusejp_1817_;
}
v_reusejp_1817_:
{
return v___x_1818_;
}
}
}
}
else
{
lean_object* v___x_1821_; lean_object* v___x_1822_; 
lean_dec_ref(v___x_1806_);
v___x_1821_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__1));
v___x_1822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1822_, 0, v___x_1821_);
return v___x_1822_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___boxed(lean_object* v_classTy_1823_, lean_object* v_a_1824_, lean_object* v_a_1825_, lean_object* v_a_1826_, lean_object* v_a_1827_, lean_object* v_a_1828_){
_start:
{
lean_object* v_res_1829_; 
v_res_1829_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf(v_classTy_1823_, v_a_1824_, v_a_1825_, v_a_1826_, v_a_1827_);
lean_dec(v_a_1827_);
lean_dec_ref(v_a_1826_);
lean_dec(v_a_1825_);
lean_dec_ref(v_a_1824_);
lean_dec_ref(v_classTy_1823_);
return v_res_1829_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__0(lean_object* v_a_1830_, lean_object* v_as_1831_, lean_object* v_j_1832_){
_start:
{
lean_object* v___x_1833_; uint8_t v___x_1834_; 
v___x_1833_ = lean_array_get_size(v_as_1831_);
v___x_1834_ = lean_nat_dec_lt(v_j_1832_, v___x_1833_);
if (v___x_1834_ == 0)
{
lean_object* v___x_1835_; 
lean_dec(v_j_1832_);
v___x_1835_ = lean_box(0);
return v___x_1835_;
}
else
{
lean_object* v___x_1836_; lean_object* v___x_1837_; uint8_t v___x_1838_; 
v___x_1836_ = lean_array_fget_borrowed(v_as_1831_, v_j_1832_);
v___x_1837_ = l_Lean_Expr_mvarId_x21(v___x_1836_);
v___x_1838_ = l_Lean_instBEqMVarId_beq(v___x_1837_, v_a_1830_);
lean_dec(v___x_1837_);
if (v___x_1838_ == 0)
{
lean_object* v___x_1839_; lean_object* v___x_1840_; 
v___x_1839_ = lean_unsigned_to_nat(1u);
v___x_1840_ = lean_nat_add(v_j_1832_, v___x_1839_);
lean_dec(v_j_1832_);
v_j_1832_ = v___x_1840_;
goto _start;
}
else
{
lean_object* v___x_1842_; 
v___x_1842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1842_, 0, v_j_1832_);
return v___x_1842_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__0___boxed(lean_object* v_a_1843_, lean_object* v_as_1844_, lean_object* v_j_1845_){
_start:
{
lean_object* v_res_1846_; 
v_res_1846_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__0(v_a_1843_, v_as_1844_, v_j_1845_);
lean_dec_ref(v_as_1844_);
lean_dec(v_a_1843_);
return v_res_1846_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4_spec__5___redArg(lean_object* v_x_1847_, lean_object* v_x_1848_, lean_object* v_x_1849_, lean_object* v_x_1850_){
_start:
{
lean_object* v_ks_1851_; lean_object* v_vs_1852_; lean_object* v___x_1854_; uint8_t v_isShared_1855_; uint8_t v_isSharedCheck_1876_; 
v_ks_1851_ = lean_ctor_get(v_x_1847_, 0);
v_vs_1852_ = lean_ctor_get(v_x_1847_, 1);
v_isSharedCheck_1876_ = !lean_is_exclusive(v_x_1847_);
if (v_isSharedCheck_1876_ == 0)
{
v___x_1854_ = v_x_1847_;
v_isShared_1855_ = v_isSharedCheck_1876_;
goto v_resetjp_1853_;
}
else
{
lean_inc(v_vs_1852_);
lean_inc(v_ks_1851_);
lean_dec(v_x_1847_);
v___x_1854_ = lean_box(0);
v_isShared_1855_ = v_isSharedCheck_1876_;
goto v_resetjp_1853_;
}
v_resetjp_1853_:
{
lean_object* v___x_1856_; uint8_t v___x_1857_; 
v___x_1856_ = lean_array_get_size(v_ks_1851_);
v___x_1857_ = lean_nat_dec_lt(v_x_1848_, v___x_1856_);
if (v___x_1857_ == 0)
{
lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1861_; 
lean_dec(v_x_1848_);
v___x_1858_ = lean_array_push(v_ks_1851_, v_x_1849_);
v___x_1859_ = lean_array_push(v_vs_1852_, v_x_1850_);
if (v_isShared_1855_ == 0)
{
lean_ctor_set(v___x_1854_, 1, v___x_1859_);
lean_ctor_set(v___x_1854_, 0, v___x_1858_);
v___x_1861_ = v___x_1854_;
goto v_reusejp_1860_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v___x_1858_);
lean_ctor_set(v_reuseFailAlloc_1862_, 1, v___x_1859_);
v___x_1861_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1860_;
}
v_reusejp_1860_:
{
return v___x_1861_;
}
}
else
{
lean_object* v_k_x27_1863_; uint8_t v___x_1864_; 
v_k_x27_1863_ = lean_array_fget_borrowed(v_ks_1851_, v_x_1848_);
v___x_1864_ = l_Lean_instBEqMVarId_beq(v_x_1849_, v_k_x27_1863_);
if (v___x_1864_ == 0)
{
lean_object* v___x_1866_; 
if (v_isShared_1855_ == 0)
{
v___x_1866_ = v___x_1854_;
goto v_reusejp_1865_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v_ks_1851_);
lean_ctor_set(v_reuseFailAlloc_1870_, 1, v_vs_1852_);
v___x_1866_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1865_;
}
v_reusejp_1865_:
{
lean_object* v___x_1867_; lean_object* v___x_1868_; 
v___x_1867_ = lean_unsigned_to_nat(1u);
v___x_1868_ = lean_nat_add(v_x_1848_, v___x_1867_);
lean_dec(v_x_1848_);
v_x_1847_ = v___x_1866_;
v_x_1848_ = v___x_1868_;
goto _start;
}
}
else
{
lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1874_; 
v___x_1871_ = lean_array_fset(v_ks_1851_, v_x_1848_, v_x_1849_);
v___x_1872_ = lean_array_fset(v_vs_1852_, v_x_1848_, v_x_1850_);
lean_dec(v_x_1848_);
if (v_isShared_1855_ == 0)
{
lean_ctor_set(v___x_1854_, 1, v___x_1872_);
lean_ctor_set(v___x_1854_, 0, v___x_1871_);
v___x_1874_ = v___x_1854_;
goto v_reusejp_1873_;
}
else
{
lean_object* v_reuseFailAlloc_1875_; 
v_reuseFailAlloc_1875_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1875_, 0, v___x_1871_);
lean_ctor_set(v_reuseFailAlloc_1875_, 1, v___x_1872_);
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
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4___redArg(lean_object* v_n_1877_, lean_object* v_k_1878_, lean_object* v_v_1879_){
_start:
{
lean_object* v___x_1880_; lean_object* v___x_1881_; 
v___x_1880_ = lean_unsigned_to_nat(0u);
v___x_1881_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4_spec__5___redArg(v_n_1877_, v___x_1880_, v_k_1878_, v_v_1879_);
return v___x_1881_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg(lean_object* v_x_1882_, size_t v_x_1883_, size_t v_x_1884_, lean_object* v_x_1885_, lean_object* v_x_1886_){
_start:
{
if (lean_obj_tag(v_x_1882_) == 0)
{
lean_object* v_es_1887_; size_t v___x_1888_; size_t v___x_1889_; lean_object* v_j_1890_; lean_object* v___x_1891_; uint8_t v___x_1892_; 
v_es_1887_ = lean_ctor_get(v_x_1882_, 0);
v___x_1888_ = ((size_t)31ULL);
v___x_1889_ = lean_usize_land(v_x_1883_, v___x_1888_);
v_j_1890_ = lean_usize_to_nat(v___x_1889_);
v___x_1891_ = lean_array_get_size(v_es_1887_);
v___x_1892_ = lean_nat_dec_lt(v_j_1890_, v___x_1891_);
if (v___x_1892_ == 0)
{
lean_dec(v_j_1890_);
lean_dec(v_x_1886_);
lean_dec(v_x_1885_);
return v_x_1882_;
}
else
{
lean_object* v___x_1894_; uint8_t v_isShared_1895_; uint8_t v_isSharedCheck_1931_; 
lean_inc_ref(v_es_1887_);
v_isSharedCheck_1931_ = !lean_is_exclusive(v_x_1882_);
if (v_isSharedCheck_1931_ == 0)
{
lean_object* v_unused_1932_; 
v_unused_1932_ = lean_ctor_get(v_x_1882_, 0);
lean_dec(v_unused_1932_);
v___x_1894_ = v_x_1882_;
v_isShared_1895_ = v_isSharedCheck_1931_;
goto v_resetjp_1893_;
}
else
{
lean_dec(v_x_1882_);
v___x_1894_ = lean_box(0);
v_isShared_1895_ = v_isSharedCheck_1931_;
goto v_resetjp_1893_;
}
v_resetjp_1893_:
{
lean_object* v_v_1896_; lean_object* v___x_1897_; lean_object* v_xs_x27_1898_; lean_object* v___y_1900_; 
v_v_1896_ = lean_array_fget(v_es_1887_, v_j_1890_);
v___x_1897_ = lean_box(0);
v_xs_x27_1898_ = lean_array_fset(v_es_1887_, v_j_1890_, v___x_1897_);
switch(lean_obj_tag(v_v_1896_))
{
case 0:
{
lean_object* v_key_1905_; lean_object* v_val_1906_; lean_object* v___x_1908_; uint8_t v_isShared_1909_; uint8_t v_isSharedCheck_1916_; 
v_key_1905_ = lean_ctor_get(v_v_1896_, 0);
v_val_1906_ = lean_ctor_get(v_v_1896_, 1);
v_isSharedCheck_1916_ = !lean_is_exclusive(v_v_1896_);
if (v_isSharedCheck_1916_ == 0)
{
v___x_1908_ = v_v_1896_;
v_isShared_1909_ = v_isSharedCheck_1916_;
goto v_resetjp_1907_;
}
else
{
lean_inc(v_val_1906_);
lean_inc(v_key_1905_);
lean_dec(v_v_1896_);
v___x_1908_ = lean_box(0);
v_isShared_1909_ = v_isSharedCheck_1916_;
goto v_resetjp_1907_;
}
v_resetjp_1907_:
{
uint8_t v___x_1910_; 
v___x_1910_ = l_Lean_instBEqMVarId_beq(v_x_1885_, v_key_1905_);
if (v___x_1910_ == 0)
{
lean_object* v___x_1911_; lean_object* v___x_1912_; 
lean_del_object(v___x_1908_);
v___x_1911_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1905_, v_val_1906_, v_x_1885_, v_x_1886_);
v___x_1912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1912_, 0, v___x_1911_);
v___y_1900_ = v___x_1912_;
goto v___jp_1899_;
}
else
{
lean_object* v___x_1914_; 
lean_dec(v_val_1906_);
lean_dec(v_key_1905_);
if (v_isShared_1909_ == 0)
{
lean_ctor_set(v___x_1908_, 1, v_x_1886_);
lean_ctor_set(v___x_1908_, 0, v_x_1885_);
v___x_1914_ = v___x_1908_;
goto v_reusejp_1913_;
}
else
{
lean_object* v_reuseFailAlloc_1915_; 
v_reuseFailAlloc_1915_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1915_, 0, v_x_1885_);
lean_ctor_set(v_reuseFailAlloc_1915_, 1, v_x_1886_);
v___x_1914_ = v_reuseFailAlloc_1915_;
goto v_reusejp_1913_;
}
v_reusejp_1913_:
{
v___y_1900_ = v___x_1914_;
goto v___jp_1899_;
}
}
}
}
case 1:
{
lean_object* v_node_1917_; lean_object* v___x_1919_; uint8_t v_isShared_1920_; uint8_t v_isSharedCheck_1929_; 
v_node_1917_ = lean_ctor_get(v_v_1896_, 0);
v_isSharedCheck_1929_ = !lean_is_exclusive(v_v_1896_);
if (v_isSharedCheck_1929_ == 0)
{
v___x_1919_ = v_v_1896_;
v_isShared_1920_ = v_isSharedCheck_1929_;
goto v_resetjp_1918_;
}
else
{
lean_inc(v_node_1917_);
lean_dec(v_v_1896_);
v___x_1919_ = lean_box(0);
v_isShared_1920_ = v_isSharedCheck_1929_;
goto v_resetjp_1918_;
}
v_resetjp_1918_:
{
size_t v___x_1921_; size_t v___x_1922_; size_t v___x_1923_; size_t v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1927_; 
v___x_1921_ = ((size_t)5ULL);
v___x_1922_ = lean_usize_shift_right(v_x_1883_, v___x_1921_);
v___x_1923_ = ((size_t)1ULL);
v___x_1924_ = lean_usize_add(v_x_1884_, v___x_1923_);
v___x_1925_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg(v_node_1917_, v___x_1922_, v___x_1924_, v_x_1885_, v_x_1886_);
if (v_isShared_1920_ == 0)
{
lean_ctor_set(v___x_1919_, 0, v___x_1925_);
v___x_1927_ = v___x_1919_;
goto v_reusejp_1926_;
}
else
{
lean_object* v_reuseFailAlloc_1928_; 
v_reuseFailAlloc_1928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1928_, 0, v___x_1925_);
v___x_1927_ = v_reuseFailAlloc_1928_;
goto v_reusejp_1926_;
}
v_reusejp_1926_:
{
v___y_1900_ = v___x_1927_;
goto v___jp_1899_;
}
}
}
default: 
{
lean_object* v___x_1930_; 
v___x_1930_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1930_, 0, v_x_1885_);
lean_ctor_set(v___x_1930_, 1, v_x_1886_);
v___y_1900_ = v___x_1930_;
goto v___jp_1899_;
}
}
v___jp_1899_:
{
lean_object* v___x_1901_; lean_object* v___x_1903_; 
v___x_1901_ = lean_array_fset(v_xs_x27_1898_, v_j_1890_, v___y_1900_);
lean_dec(v_j_1890_);
if (v_isShared_1895_ == 0)
{
lean_ctor_set(v___x_1894_, 0, v___x_1901_);
v___x_1903_ = v___x_1894_;
goto v_reusejp_1902_;
}
else
{
lean_object* v_reuseFailAlloc_1904_; 
v_reuseFailAlloc_1904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1904_, 0, v___x_1901_);
v___x_1903_ = v_reuseFailAlloc_1904_;
goto v_reusejp_1902_;
}
v_reusejp_1902_:
{
return v___x_1903_;
}
}
}
}
}
else
{
lean_object* v_ks_1933_; lean_object* v_vs_1934_; lean_object* v___x_1936_; uint8_t v_isShared_1937_; uint8_t v_isSharedCheck_1952_; 
v_ks_1933_ = lean_ctor_get(v_x_1882_, 0);
v_vs_1934_ = lean_ctor_get(v_x_1882_, 1);
v_isSharedCheck_1952_ = !lean_is_exclusive(v_x_1882_);
if (v_isSharedCheck_1952_ == 0)
{
v___x_1936_ = v_x_1882_;
v_isShared_1937_ = v_isSharedCheck_1952_;
goto v_resetjp_1935_;
}
else
{
lean_inc(v_vs_1934_);
lean_inc(v_ks_1933_);
lean_dec(v_x_1882_);
v___x_1936_ = lean_box(0);
v_isShared_1937_ = v_isSharedCheck_1952_;
goto v_resetjp_1935_;
}
v_resetjp_1935_:
{
lean_object* v___x_1939_; 
if (v_isShared_1937_ == 0)
{
v___x_1939_ = v___x_1936_;
goto v_reusejp_1938_;
}
else
{
lean_object* v_reuseFailAlloc_1951_; 
v_reuseFailAlloc_1951_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1951_, 0, v_ks_1933_);
lean_ctor_set(v_reuseFailAlloc_1951_, 1, v_vs_1934_);
v___x_1939_ = v_reuseFailAlloc_1951_;
goto v_reusejp_1938_;
}
v_reusejp_1938_:
{
lean_object* v_newNode_1940_; size_t v___x_1941_; uint8_t v___x_1942_; 
v_newNode_1940_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4___redArg(v___x_1939_, v_x_1885_, v_x_1886_);
v___x_1941_ = ((size_t)7ULL);
v___x_1942_ = lean_usize_dec_le(v___x_1941_, v_x_1884_);
if (v___x_1942_ == 0)
{
lean_object* v___x_1943_; lean_object* v___x_1944_; uint8_t v___x_1945_; 
v___x_1943_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1940_);
v___x_1944_ = lean_unsigned_to_nat(4u);
v___x_1945_ = lean_nat_dec_lt(v___x_1943_, v___x_1944_);
lean_dec(v___x_1943_);
if (v___x_1945_ == 0)
{
lean_object* v_ks_1946_; lean_object* v_vs_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; 
v_ks_1946_ = lean_ctor_get(v_newNode_1940_, 0);
lean_inc_ref(v_ks_1946_);
v_vs_1947_ = lean_ctor_get(v_newNode_1940_, 1);
lean_inc_ref(v_vs_1947_);
lean_dec_ref(v_newNode_1940_);
v___x_1948_ = lean_unsigned_to_nat(0u);
v___x_1949_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg___closed__0);
v___x_1950_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___redArg(v_x_1884_, v_ks_1946_, v_vs_1947_, v___x_1948_, v___x_1949_);
lean_dec_ref(v_vs_1947_);
lean_dec_ref(v_ks_1946_);
return v___x_1950_;
}
else
{
return v_newNode_1940_;
}
}
else
{
return v_newNode_1940_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___redArg(size_t v_depth_1953_, lean_object* v_keys_1954_, lean_object* v_vals_1955_, lean_object* v_i_1956_, lean_object* v_entries_1957_){
_start:
{
lean_object* v___x_1958_; uint8_t v___x_1959_; 
v___x_1958_ = lean_array_get_size(v_keys_1954_);
v___x_1959_ = lean_nat_dec_lt(v_i_1956_, v___x_1958_);
if (v___x_1959_ == 0)
{
lean_dec(v_i_1956_);
return v_entries_1957_;
}
else
{
lean_object* v_k_1960_; lean_object* v_v_1961_; uint64_t v___x_1962_; size_t v_h_1963_; size_t v___x_1964_; lean_object* v___x_1965_; size_t v___x_1966_; size_t v___x_1967_; size_t v___x_1968_; size_t v_h_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; 
v_k_1960_ = lean_array_fget_borrowed(v_keys_1954_, v_i_1956_);
v_v_1961_ = lean_array_fget_borrowed(v_vals_1955_, v_i_1956_);
v___x_1962_ = l_Lean_instHashableMVarId_hash(v_k_1960_);
v_h_1963_ = lean_uint64_to_usize(v___x_1962_);
v___x_1964_ = ((size_t)5ULL);
v___x_1965_ = lean_unsigned_to_nat(1u);
v___x_1966_ = ((size_t)1ULL);
v___x_1967_ = lean_usize_sub(v_depth_1953_, v___x_1966_);
v___x_1968_ = lean_usize_mul(v___x_1964_, v___x_1967_);
v_h_1969_ = lean_usize_shift_right(v_h_1963_, v___x_1968_);
v___x_1970_ = lean_nat_add(v_i_1956_, v___x_1965_);
lean_dec(v_i_1956_);
lean_inc(v_v_1961_);
lean_inc(v_k_1960_);
v___x_1971_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg(v_entries_1957_, v_h_1969_, v_depth_1953_, v_k_1960_, v_v_1961_);
v_i_1956_ = v___x_1970_;
v_entries_1957_ = v___x_1971_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_depth_1973_, lean_object* v_keys_1974_, lean_object* v_vals_1975_, lean_object* v_i_1976_, lean_object* v_entries_1977_){
_start:
{
size_t v_depth_boxed_1978_; lean_object* v_res_1979_; 
v_depth_boxed_1978_ = lean_unbox_usize(v_depth_1973_);
lean_dec(v_depth_1973_);
v_res_1979_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___redArg(v_depth_boxed_1978_, v_keys_1974_, v_vals_1975_, v_i_1976_, v_entries_1977_);
lean_dec_ref(v_vals_1975_);
lean_dec_ref(v_keys_1974_);
return v_res_1979_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_x_1980_, lean_object* v_x_1981_, lean_object* v_x_1982_, lean_object* v_x_1983_, lean_object* v_x_1984_){
_start:
{
size_t v_x_1607__boxed_1985_; size_t v_x_1608__boxed_1986_; lean_object* v_res_1987_; 
v_x_1607__boxed_1985_ = lean_unbox_usize(v_x_1981_);
lean_dec(v_x_1981_);
v_x_1608__boxed_1986_ = lean_unbox_usize(v_x_1982_);
lean_dec(v_x_1982_);
v_res_1987_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg(v_x_1980_, v_x_1607__boxed_1985_, v_x_1608__boxed_1986_, v_x_1983_, v_x_1984_);
return v_res_1987_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1___redArg(lean_object* v_x_1988_, lean_object* v_x_1989_, lean_object* v_x_1990_){
_start:
{
uint64_t v___x_1991_; size_t v___x_1992_; size_t v___x_1993_; lean_object* v___x_1994_; 
v___x_1991_ = l_Lean_instHashableMVarId_hash(v_x_1989_);
v___x_1992_ = lean_uint64_to_usize(v___x_1991_);
v___x_1993_ = ((size_t)1ULL);
v___x_1994_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg(v_x_1988_, v___x_1992_, v___x_1993_, v_x_1989_, v_x_1990_);
return v___x_1994_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___redArg(lean_object* v_mvarId_1995_, lean_object* v_val_1996_, lean_object* v___y_1997_){
_start:
{
lean_object* v___x_1999_; lean_object* v_mctx_2000_; lean_object* v_cache_2001_; lean_object* v_zetaDeltaFVarIds_2002_; lean_object* v_postponed_2003_; lean_object* v_diag_2004_; lean_object* v___x_2006_; uint8_t v_isShared_2007_; uint8_t v_isSharedCheck_2033_; 
v___x_1999_ = lean_st_ref_take(v___y_1997_);
v_mctx_2000_ = lean_ctor_get(v___x_1999_, 0);
v_cache_2001_ = lean_ctor_get(v___x_1999_, 1);
v_zetaDeltaFVarIds_2002_ = lean_ctor_get(v___x_1999_, 2);
v_postponed_2003_ = lean_ctor_get(v___x_1999_, 3);
v_diag_2004_ = lean_ctor_get(v___x_1999_, 4);
v_isSharedCheck_2033_ = !lean_is_exclusive(v___x_1999_);
if (v_isSharedCheck_2033_ == 0)
{
v___x_2006_ = v___x_1999_;
v_isShared_2007_ = v_isSharedCheck_2033_;
goto v_resetjp_2005_;
}
else
{
lean_inc(v_diag_2004_);
lean_inc(v_postponed_2003_);
lean_inc(v_zetaDeltaFVarIds_2002_);
lean_inc(v_cache_2001_);
lean_inc(v_mctx_2000_);
lean_dec(v___x_1999_);
v___x_2006_ = lean_box(0);
v_isShared_2007_ = v_isSharedCheck_2033_;
goto v_resetjp_2005_;
}
v_resetjp_2005_:
{
lean_object* v_depth_2008_; lean_object* v_levelAssignDepth_2009_; lean_object* v_lmvarCounter_2010_; lean_object* v_mvarCounter_2011_; lean_object* v_lDecls_2012_; lean_object* v_decls_2013_; lean_object* v_userNames_2014_; lean_object* v_lAssignment_2015_; lean_object* v_eAssignment_2016_; lean_object* v_dAssignment_2017_; lean_object* v_instanceTypedMVars_2018_; lean_object* v___x_2020_; uint8_t v_isShared_2021_; uint8_t v_isSharedCheck_2032_; 
v_depth_2008_ = lean_ctor_get(v_mctx_2000_, 0);
v_levelAssignDepth_2009_ = lean_ctor_get(v_mctx_2000_, 1);
v_lmvarCounter_2010_ = lean_ctor_get(v_mctx_2000_, 2);
v_mvarCounter_2011_ = lean_ctor_get(v_mctx_2000_, 3);
v_lDecls_2012_ = lean_ctor_get(v_mctx_2000_, 4);
v_decls_2013_ = lean_ctor_get(v_mctx_2000_, 5);
v_userNames_2014_ = lean_ctor_get(v_mctx_2000_, 6);
v_lAssignment_2015_ = lean_ctor_get(v_mctx_2000_, 7);
v_eAssignment_2016_ = lean_ctor_get(v_mctx_2000_, 8);
v_dAssignment_2017_ = lean_ctor_get(v_mctx_2000_, 9);
v_instanceTypedMVars_2018_ = lean_ctor_get(v_mctx_2000_, 10);
v_isSharedCheck_2032_ = !lean_is_exclusive(v_mctx_2000_);
if (v_isSharedCheck_2032_ == 0)
{
v___x_2020_ = v_mctx_2000_;
v_isShared_2021_ = v_isSharedCheck_2032_;
goto v_resetjp_2019_;
}
else
{
lean_inc(v_instanceTypedMVars_2018_);
lean_inc(v_dAssignment_2017_);
lean_inc(v_eAssignment_2016_);
lean_inc(v_lAssignment_2015_);
lean_inc(v_userNames_2014_);
lean_inc(v_decls_2013_);
lean_inc(v_lDecls_2012_);
lean_inc(v_mvarCounter_2011_);
lean_inc(v_lmvarCounter_2010_);
lean_inc(v_levelAssignDepth_2009_);
lean_inc(v_depth_2008_);
lean_dec(v_mctx_2000_);
v___x_2020_ = lean_box(0);
v_isShared_2021_ = v_isSharedCheck_2032_;
goto v_resetjp_2019_;
}
v_resetjp_2019_:
{
lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2025_; 
v___x_2022_ = lean_box(0);
v___x_2023_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1___redArg(v_eAssignment_2016_, v_mvarId_1995_, v_val_1996_);
if (v_isShared_2021_ == 0)
{
lean_ctor_set(v___x_2020_, 8, v___x_2023_);
v___x_2025_ = v___x_2020_;
goto v_reusejp_2024_;
}
else
{
lean_object* v_reuseFailAlloc_2031_; 
v_reuseFailAlloc_2031_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_2031_, 0, v_depth_2008_);
lean_ctor_set(v_reuseFailAlloc_2031_, 1, v_levelAssignDepth_2009_);
lean_ctor_set(v_reuseFailAlloc_2031_, 2, v_lmvarCounter_2010_);
lean_ctor_set(v_reuseFailAlloc_2031_, 3, v_mvarCounter_2011_);
lean_ctor_set(v_reuseFailAlloc_2031_, 4, v_lDecls_2012_);
lean_ctor_set(v_reuseFailAlloc_2031_, 5, v_decls_2013_);
lean_ctor_set(v_reuseFailAlloc_2031_, 6, v_userNames_2014_);
lean_ctor_set(v_reuseFailAlloc_2031_, 7, v_lAssignment_2015_);
lean_ctor_set(v_reuseFailAlloc_2031_, 8, v___x_2023_);
lean_ctor_set(v_reuseFailAlloc_2031_, 9, v_dAssignment_2017_);
lean_ctor_set(v_reuseFailAlloc_2031_, 10, v_instanceTypedMVars_2018_);
v___x_2025_ = v_reuseFailAlloc_2031_;
goto v_reusejp_2024_;
}
v_reusejp_2024_:
{
lean_object* v___x_2027_; 
if (v_isShared_2007_ == 0)
{
lean_ctor_set(v___x_2006_, 0, v___x_2025_);
v___x_2027_ = v___x_2006_;
goto v_reusejp_2026_;
}
else
{
lean_object* v_reuseFailAlloc_2030_; 
v_reuseFailAlloc_2030_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2030_, 0, v___x_2025_);
lean_ctor_set(v_reuseFailAlloc_2030_, 1, v_cache_2001_);
lean_ctor_set(v_reuseFailAlloc_2030_, 2, v_zetaDeltaFVarIds_2002_);
lean_ctor_set(v_reuseFailAlloc_2030_, 3, v_postponed_2003_);
lean_ctor_set(v_reuseFailAlloc_2030_, 4, v_diag_2004_);
v___x_2027_ = v_reuseFailAlloc_2030_;
goto v_reusejp_2026_;
}
v_reusejp_2026_:
{
lean_object* v___x_2028_; lean_object* v___x_2029_; 
v___x_2028_ = lean_st_ref_put(v___y_1997_, v___x_2027_);
v___x_2029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2029_, 0, v___x_2022_);
return v___x_2029_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___redArg___boxed(lean_object* v_mvarId_2034_, lean_object* v_val_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_){
_start:
{
lean_object* v_res_2038_; 
v_res_2038_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___redArg(v_mvarId_2034_, v_val_2035_, v___y_2036_);
lean_dec(v___y_2036_);
return v_res_2038_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__2(lean_object* v_argMVars_2039_, lean_object* v_argVars_2040_, lean_object* v_as_2041_, size_t v_sz_2042_, size_t v_i_2043_, lean_object* v_b_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_){
_start:
{
uint8_t v___x_2050_; 
v___x_2050_ = lean_usize_dec_lt(v_i_2043_, v_sz_2042_);
if (v___x_2050_ == 0)
{
lean_object* v___x_2051_; 
v___x_2051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2051_, 0, v_b_2044_);
return v___x_2051_;
}
else
{
lean_object* v___x_2052_; lean_object* v_a_2053_; lean_object* v___y_2055_; lean_object* v___y_2056_; lean_object* v___y_2057_; lean_object* v___y_2058_; lean_object* v___x_2074_; lean_object* v___x_2075_; 
v___x_2052_ = lean_box(0);
v_a_2053_ = lean_array_uget_borrowed(v_as_2041_, v_i_2043_);
v___x_2074_ = lean_unsigned_to_nat(0u);
v___x_2075_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__0(v_a_2053_, v_argMVars_2039_, v___x_2074_);
if (lean_obj_tag(v___x_2075_) == 1)
{
lean_object* v_val_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; 
v_val_2076_ = lean_ctor_get(v___x_2075_, 0);
lean_inc(v_val_2076_);
lean_dec_ref_known(v___x_2075_, 1);
v___x_2077_ = l_Lean_instInhabitedExpr;
v___x_2078_ = lean_array_get_borrowed(v___x_2077_, v_argVars_2040_, v_val_2076_);
lean_dec(v_val_2076_);
lean_inc(v___x_2078_);
lean_inc(v_a_2053_);
v___x_2079_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___redArg(v_a_2053_, v___x_2078_, v___y_2046_);
if (lean_obj_tag(v___x_2079_) == 0)
{
lean_dec_ref_known(v___x_2079_, 1);
v___y_2055_ = v___y_2045_;
v___y_2056_ = v___y_2046_;
v___y_2057_ = v___y_2047_;
v___y_2058_ = v___y_2048_;
goto v___jp_2054_;
}
else
{
return v___x_2079_;
}
}
else
{
lean_dec(v___x_2075_);
v___y_2055_ = v___y_2045_;
v___y_2056_ = v___y_2046_;
v___y_2057_ = v___y_2047_;
v___y_2058_ = v___y_2048_;
goto v___jp_2054_;
}
v___jp_2054_:
{
lean_object* v___x_2059_; lean_object* v___x_2060_; 
lean_inc(v_a_2053_);
v___x_2059_ = l_Lean_Expr_mvar___override(v_a_2053_);
lean_inc(v___y_2058_);
lean_inc_ref(v___y_2057_);
lean_inc(v___y_2056_);
lean_inc_ref(v___y_2055_);
v___x_2060_ = lean_infer_type(v___x_2059_, v___y_2055_, v___y_2056_, v___y_2057_, v___y_2058_);
if (lean_obj_tag(v___x_2060_) == 0)
{
lean_object* v_a_2061_; lean_object* v___x_2062_; 
v_a_2061_ = lean_ctor_get(v___x_2060_, 0);
lean_inc(v_a_2061_);
lean_dec_ref_known(v___x_2060_, 1);
v___x_2062_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn(v_argMVars_2039_, v_argVars_2040_, v_a_2061_, v___y_2055_, v___y_2056_, v___y_2057_, v___y_2058_);
if (lean_obj_tag(v___x_2062_) == 0)
{
size_t v___x_2063_; size_t v___x_2064_; 
lean_dec_ref_known(v___x_2062_, 1);
v___x_2063_ = ((size_t)1ULL);
v___x_2064_ = lean_usize_add(v_i_2043_, v___x_2063_);
v_i_2043_ = v___x_2064_;
v_b_2044_ = v___x_2052_;
goto _start;
}
else
{
return v___x_2062_;
}
}
else
{
lean_object* v_a_2066_; lean_object* v___x_2068_; uint8_t v_isShared_2069_; uint8_t v_isSharedCheck_2073_; 
v_a_2066_ = lean_ctor_get(v___x_2060_, 0);
v_isSharedCheck_2073_ = !lean_is_exclusive(v___x_2060_);
if (v_isSharedCheck_2073_ == 0)
{
v___x_2068_ = v___x_2060_;
v_isShared_2069_ = v_isSharedCheck_2073_;
goto v_resetjp_2067_;
}
else
{
lean_inc(v_a_2066_);
lean_dec(v___x_2060_);
v___x_2068_ = lean_box(0);
v_isShared_2069_ = v_isSharedCheck_2073_;
goto v_resetjp_2067_;
}
v_resetjp_2067_:
{
lean_object* v___x_2071_; 
if (v_isShared_2069_ == 0)
{
v___x_2071_ = v___x_2068_;
goto v_reusejp_2070_;
}
else
{
lean_object* v_reuseFailAlloc_2072_; 
v_reuseFailAlloc_2072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2072_, 0, v_a_2066_);
v___x_2071_ = v_reuseFailAlloc_2072_;
goto v_reusejp_2070_;
}
v_reusejp_2070_:
{
return v___x_2071_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn(lean_object* v_argMVars_2080_, lean_object* v_argVars_2081_, lean_object* v_e_2082_, lean_object* v_a_2083_, lean_object* v_a_2084_, lean_object* v_a_2085_, lean_object* v_a_2086_){
_start:
{
lean_object* v___x_2088_; 
v___x_2088_ = l_Lean_Meta_getMVars(v_e_2082_, v_a_2083_, v_a_2084_, v_a_2085_, v_a_2086_);
if (lean_obj_tag(v___x_2088_) == 0)
{
lean_object* v_a_2089_; lean_object* v___x_2090_; size_t v_sz_2091_; size_t v___x_2092_; lean_object* v___x_2093_; 
v_a_2089_ = lean_ctor_get(v___x_2088_, 0);
lean_inc(v_a_2089_);
lean_dec_ref_known(v___x_2088_, 1);
v___x_2090_ = lean_box(0);
v_sz_2091_ = lean_array_size(v_a_2089_);
v___x_2092_ = ((size_t)0ULL);
v___x_2093_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__2(v_argMVars_2080_, v_argVars_2081_, v_a_2089_, v_sz_2091_, v___x_2092_, v___x_2090_, v_a_2083_, v_a_2084_, v_a_2085_, v_a_2086_);
lean_dec(v_a_2089_);
if (lean_obj_tag(v___x_2093_) == 0)
{
lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2100_; 
v_isSharedCheck_2100_ = !lean_is_exclusive(v___x_2093_);
if (v_isSharedCheck_2100_ == 0)
{
lean_object* v_unused_2101_; 
v_unused_2101_ = lean_ctor_get(v___x_2093_, 0);
lean_dec(v_unused_2101_);
v___x_2095_ = v___x_2093_;
v_isShared_2096_ = v_isSharedCheck_2100_;
goto v_resetjp_2094_;
}
else
{
lean_dec(v___x_2093_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2100_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
lean_object* v___x_2098_; 
if (v_isShared_2096_ == 0)
{
lean_ctor_set(v___x_2095_, 0, v___x_2090_);
v___x_2098_ = v___x_2095_;
goto v_reusejp_2097_;
}
else
{
lean_object* v_reuseFailAlloc_2099_; 
v_reuseFailAlloc_2099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2099_, 0, v___x_2090_);
v___x_2098_ = v_reuseFailAlloc_2099_;
goto v_reusejp_2097_;
}
v_reusejp_2097_:
{
return v___x_2098_;
}
}
}
else
{
return v___x_2093_;
}
}
else
{
lean_object* v_a_2102_; lean_object* v___x_2104_; uint8_t v_isShared_2105_; uint8_t v_isSharedCheck_2109_; 
v_a_2102_ = lean_ctor_get(v___x_2088_, 0);
v_isSharedCheck_2109_ = !lean_is_exclusive(v___x_2088_);
if (v_isSharedCheck_2109_ == 0)
{
v___x_2104_ = v___x_2088_;
v_isShared_2105_ = v_isSharedCheck_2109_;
goto v_resetjp_2103_;
}
else
{
lean_inc(v_a_2102_);
lean_dec(v___x_2088_);
v___x_2104_ = lean_box(0);
v_isShared_2105_ = v_isSharedCheck_2109_;
goto v_resetjp_2103_;
}
v_resetjp_2103_:
{
lean_object* v___x_2107_; 
if (v_isShared_2105_ == 0)
{
v___x_2107_ = v___x_2104_;
goto v_reusejp_2106_;
}
else
{
lean_object* v_reuseFailAlloc_2108_; 
v_reuseFailAlloc_2108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2108_, 0, v_a_2102_);
v___x_2107_ = v_reuseFailAlloc_2108_;
goto v_reusejp_2106_;
}
v_reusejp_2106_:
{
return v___x_2107_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn___boxed(lean_object* v_argMVars_2110_, lean_object* v_argVars_2111_, lean_object* v_e_2112_, lean_object* v_a_2113_, lean_object* v_a_2114_, lean_object* v_a_2115_, lean_object* v_a_2116_, lean_object* v_a_2117_){
_start:
{
lean_object* v_res_2118_; 
v_res_2118_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn(v_argMVars_2110_, v_argVars_2111_, v_e_2112_, v_a_2113_, v_a_2114_, v_a_2115_, v_a_2116_);
lean_dec(v_a_2116_);
lean_dec_ref(v_a_2115_);
lean_dec(v_a_2114_);
lean_dec_ref(v_a_2113_);
lean_dec_ref(v_argVars_2111_);
lean_dec_ref(v_argMVars_2110_);
return v_res_2118_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__2___boxed(lean_object* v_argMVars_2119_, lean_object* v_argVars_2120_, lean_object* v_as_2121_, lean_object* v_sz_2122_, lean_object* v_i_2123_, lean_object* v_b_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_){
_start:
{
size_t v_sz_boxed_2130_; size_t v_i_boxed_2131_; lean_object* v_res_2132_; 
v_sz_boxed_2130_ = lean_unbox_usize(v_sz_2122_);
lean_dec(v_sz_2122_);
v_i_boxed_2131_ = lean_unbox_usize(v_i_2123_);
lean_dec(v_i_2123_);
v_res_2132_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__2(v_argMVars_2119_, v_argVars_2120_, v_as_2121_, v_sz_boxed_2130_, v_i_boxed_2131_, v_b_2124_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_);
lean_dec(v___y_2128_);
lean_dec_ref(v___y_2127_);
lean_dec(v___y_2126_);
lean_dec_ref(v___y_2125_);
lean_dec_ref(v_as_2121_);
lean_dec_ref(v_argVars_2120_);
lean_dec_ref(v_argMVars_2119_);
return v_res_2132_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1(lean_object* v_mvarId_2133_, lean_object* v_val_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_){
_start:
{
lean_object* v___x_2140_; 
v___x_2140_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___redArg(v_mvarId_2133_, v_val_2134_, v___y_2136_);
return v___x_2140_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___boxed(lean_object* v_mvarId_2141_, lean_object* v_val_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_){
_start:
{
lean_object* v_res_2148_; 
v_res_2148_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1(v_mvarId_2141_, v_val_2142_, v___y_2143_, v___y_2144_, v___y_2145_, v___y_2146_);
lean_dec(v___y_2146_);
lean_dec_ref(v___y_2145_);
lean_dec(v___y_2144_);
lean_dec_ref(v___y_2143_);
return v_res_2148_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1(lean_object* v_00_u03b2_2149_, lean_object* v_x_2150_, lean_object* v_x_2151_, lean_object* v_x_2152_){
_start:
{
lean_object* v___x_2153_; 
v___x_2153_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1___redArg(v_x_2150_, v_x_2151_, v_x_2152_);
return v___x_2153_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2(lean_object* v_00_u03b2_2154_, lean_object* v_x_2155_, size_t v_x_2156_, size_t v_x_2157_, lean_object* v_x_2158_, lean_object* v_x_2159_){
_start:
{
lean_object* v___x_2160_; 
v___x_2160_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg(v_x_2155_, v_x_2156_, v_x_2157_, v_x_2158_, v_x_2159_);
return v___x_2160_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2161_, lean_object* v_x_2162_, lean_object* v_x_2163_, lean_object* v_x_2164_, lean_object* v_x_2165_, lean_object* v_x_2166_){
_start:
{
size_t v_x_1965__boxed_2167_; size_t v_x_1966__boxed_2168_; lean_object* v_res_2169_; 
v_x_1965__boxed_2167_ = lean_unbox_usize(v_x_2163_);
lean_dec(v_x_2163_);
v_x_1966__boxed_2168_ = lean_unbox_usize(v_x_2164_);
lean_dec(v_x_2164_);
v_res_2169_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2(v_00_u03b2_2161_, v_x_2162_, v_x_1965__boxed_2167_, v_x_1966__boxed_2168_, v_x_2165_, v_x_2166_);
return v_res_2169_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_2170_, lean_object* v_n_2171_, lean_object* v_k_2172_, lean_object* v_v_2173_){
_start:
{
lean_object* v___x_2174_; 
v___x_2174_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4___redArg(v_n_2171_, v_k_2172_, v_v_2173_);
return v___x_2174_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_2175_, size_t v_depth_2176_, lean_object* v_keys_2177_, lean_object* v_vals_2178_, lean_object* v_heq_2179_, lean_object* v_i_2180_, lean_object* v_entries_2181_){
_start:
{
lean_object* v___x_2182_; 
v___x_2182_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___redArg(v_depth_2176_, v_keys_2177_, v_vals_2178_, v_i_2180_, v_entries_2181_);
return v___x_2182_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___boxed(lean_object* v_00_u03b2_2183_, lean_object* v_depth_2184_, lean_object* v_keys_2185_, lean_object* v_vals_2186_, lean_object* v_heq_2187_, lean_object* v_i_2188_, lean_object* v_entries_2189_){
_start:
{
size_t v_depth_boxed_2190_; lean_object* v_res_2191_; 
v_depth_boxed_2190_ = lean_unbox_usize(v_depth_2184_);
lean_dec(v_depth_2184_);
v_res_2191_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5(v_00_u03b2_2183_, v_depth_boxed_2190_, v_keys_2185_, v_vals_2186_, v_heq_2187_, v_i_2188_, v_entries_2189_);
lean_dec_ref(v_vals_2186_);
lean_dec_ref(v_keys_2185_);
return v_res_2191_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_2192_, lean_object* v_x_2193_, lean_object* v_x_2194_, lean_object* v_x_2195_, lean_object* v_x_2196_){
_start:
{
lean_object* v___x_2197_; 
v___x_2197_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4_spec__5___redArg(v_x_2193_, v_x_2194_, v_x_2195_, v_x_2196_);
return v___x_2197_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1(lean_object* v_opts_2198_, lean_object* v_opt_2199_){
_start:
{
lean_object* v_name_2200_; lean_object* v_defValue_2201_; lean_object* v_map_2202_; lean_object* v___x_2203_; 
v_name_2200_ = lean_ctor_get(v_opt_2199_, 0);
v_defValue_2201_ = lean_ctor_get(v_opt_2199_, 1);
v_map_2202_ = lean_ctor_get(v_opts_2198_, 0);
v___x_2203_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2202_, v_name_2200_);
if (lean_obj_tag(v___x_2203_) == 0)
{
uint8_t v___x_2204_; 
v___x_2204_ = lean_unbox(v_defValue_2201_);
return v___x_2204_;
}
else
{
lean_object* v_val_2205_; 
v_val_2205_ = lean_ctor_get(v___x_2203_, 0);
lean_inc(v_val_2205_);
lean_dec_ref_known(v___x_2203_, 1);
if (lean_obj_tag(v_val_2205_) == 1)
{
uint8_t v_v_2206_; 
v_v_2206_ = lean_ctor_get_uint8(v_val_2205_, 0);
lean_dec_ref_known(v_val_2205_, 0);
return v_v_2206_;
}
else
{
uint8_t v___x_2207_; 
lean_dec(v_val_2205_);
v___x_2207_ = lean_unbox(v_defValue_2201_);
return v___x_2207_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1___boxed(lean_object* v_opts_2208_, lean_object* v_opt_2209_){
_start:
{
uint8_t v_res_2210_; lean_object* v_r_2211_; 
v_res_2210_ = l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1(v_opts_2208_, v_opt_2209_);
lean_dec_ref(v_opt_2209_);
lean_dec_ref(v_opts_2208_);
v_r_2211_ = lean_box(v_res_2210_);
return v_r_2211_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___redArg(lean_object* v_e_2212_, lean_object* v___y_2213_){
_start:
{
uint8_t v___x_2215_; 
v___x_2215_ = l_Lean_Expr_hasMVar(v_e_2212_);
if (v___x_2215_ == 0)
{
lean_object* v___x_2216_; 
v___x_2216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2216_, 0, v_e_2212_);
return v___x_2216_;
}
else
{
lean_object* v___x_2217_; lean_object* v_mctx_2218_; lean_object* v___x_2219_; lean_object* v_fst_2220_; lean_object* v_snd_2221_; lean_object* v___x_2222_; lean_object* v_cache_2223_; lean_object* v_zetaDeltaFVarIds_2224_; lean_object* v_postponed_2225_; lean_object* v_diag_2226_; lean_object* v___x_2228_; uint8_t v_isShared_2229_; uint8_t v_isSharedCheck_2235_; 
v___x_2217_ = lean_st_ref_get(v___y_2213_);
v_mctx_2218_ = lean_ctor_get(v___x_2217_, 0);
lean_inc_ref(v_mctx_2218_);
lean_dec(v___x_2217_);
v___x_2219_ = l_Lean_instantiateMVarsCore(v_mctx_2218_, v_e_2212_);
v_fst_2220_ = lean_ctor_get(v___x_2219_, 0);
lean_inc(v_fst_2220_);
v_snd_2221_ = lean_ctor_get(v___x_2219_, 1);
lean_inc(v_snd_2221_);
lean_dec_ref(v___x_2219_);
v___x_2222_ = lean_st_ref_take(v___y_2213_);
v_cache_2223_ = lean_ctor_get(v___x_2222_, 1);
v_zetaDeltaFVarIds_2224_ = lean_ctor_get(v___x_2222_, 2);
v_postponed_2225_ = lean_ctor_get(v___x_2222_, 3);
v_diag_2226_ = lean_ctor_get(v___x_2222_, 4);
v_isSharedCheck_2235_ = !lean_is_exclusive(v___x_2222_);
if (v_isSharedCheck_2235_ == 0)
{
lean_object* v_unused_2236_; 
v_unused_2236_ = lean_ctor_get(v___x_2222_, 0);
lean_dec(v_unused_2236_);
v___x_2228_ = v___x_2222_;
v_isShared_2229_ = v_isSharedCheck_2235_;
goto v_resetjp_2227_;
}
else
{
lean_inc(v_diag_2226_);
lean_inc(v_postponed_2225_);
lean_inc(v_zetaDeltaFVarIds_2224_);
lean_inc(v_cache_2223_);
lean_dec(v___x_2222_);
v___x_2228_ = lean_box(0);
v_isShared_2229_ = v_isSharedCheck_2235_;
goto v_resetjp_2227_;
}
v_resetjp_2227_:
{
lean_object* v___x_2231_; 
if (v_isShared_2229_ == 0)
{
lean_ctor_set(v___x_2228_, 0, v_snd_2221_);
v___x_2231_ = v___x_2228_;
goto v_reusejp_2230_;
}
else
{
lean_object* v_reuseFailAlloc_2234_; 
v_reuseFailAlloc_2234_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2234_, 0, v_snd_2221_);
lean_ctor_set(v_reuseFailAlloc_2234_, 1, v_cache_2223_);
lean_ctor_set(v_reuseFailAlloc_2234_, 2, v_zetaDeltaFVarIds_2224_);
lean_ctor_set(v_reuseFailAlloc_2234_, 3, v_postponed_2225_);
lean_ctor_set(v_reuseFailAlloc_2234_, 4, v_diag_2226_);
v___x_2231_ = v_reuseFailAlloc_2234_;
goto v_reusejp_2230_;
}
v_reusejp_2230_:
{
lean_object* v___x_2232_; lean_object* v___x_2233_; 
v___x_2232_ = lean_st_ref_put(v___y_2213_, v___x_2231_);
v___x_2233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2233_, 0, v_fst_2220_);
return v___x_2233_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___redArg___boxed(lean_object* v_e_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_){
_start:
{
lean_object* v_res_2240_; 
v_res_2240_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___redArg(v_e_2237_, v___y_2238_);
lean_dec(v___y_2238_);
return v_res_2240_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2(lean_object* v_e_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_){
_start:
{
lean_object* v___x_2247_; 
v___x_2247_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___redArg(v_e_2241_, v___y_2243_);
return v___x_2247_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___boxed(lean_object* v_e_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_){
_start:
{
lean_object* v_res_2254_; 
v_res_2254_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2(v_e_2248_, v___y_2249_, v___y_2250_, v___y_2251_, v___y_2252_);
lean_dec(v___y_2252_);
lean_dec_ref(v___y_2251_);
lean_dec(v___y_2250_);
lean_dec_ref(v___y_2249_);
return v_res_2254_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4_spec__4(lean_object* v_msgData_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_){
_start:
{
lean_object* v___x_2261_; lean_object* v_env_2262_; uint8_t v___x_2263_; lean_object* v_env_2264_; lean_object* v___x_2265_; lean_object* v_toCold_2266_; lean_object* v_mctx_2267_; lean_object* v_lctx_2268_; lean_object* v_options_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; 
v___x_2261_ = lean_st_ref_get(v___y_2259_);
v_env_2262_ = lean_ctor_get(v___x_2261_, 0);
lean_inc_ref(v_env_2262_);
lean_dec(v___x_2261_);
v___x_2263_ = 0;
v_env_2264_ = l_Lean_Environment_setRecordingDeps(v_env_2262_, v___x_2263_);
v___x_2265_ = lean_st_ref_get(v___y_2257_);
v_toCold_2266_ = lean_ctor_get(v___y_2258_, 0);
v_mctx_2267_ = lean_ctor_get(v___x_2265_, 0);
lean_inc_ref(v_mctx_2267_);
lean_dec(v___x_2265_);
v_lctx_2268_ = lean_ctor_get(v___y_2256_, 2);
v_options_2269_ = lean_ctor_get(v_toCold_2266_, 2);
lean_inc_ref(v_options_2269_);
lean_inc_ref(v_lctx_2268_);
v___x_2270_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2270_, 0, v_env_2264_);
lean_ctor_set(v___x_2270_, 1, v_mctx_2267_);
lean_ctor_set(v___x_2270_, 2, v_lctx_2268_);
lean_ctor_set(v___x_2270_, 3, v_options_2269_);
v___x_2271_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2271_, 0, v___x_2270_);
lean_ctor_set(v___x_2271_, 1, v_msgData_2255_);
v___x_2272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2272_, 0, v___x_2271_);
return v___x_2272_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4_spec__4___boxed(lean_object* v_msgData_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_){
_start:
{
lean_object* v_res_2279_; 
v_res_2279_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4_spec__4(v_msgData_2273_, v___y_2274_, v___y_2275_, v___y_2276_, v___y_2277_);
lean_dec(v___y_2277_);
lean_dec_ref(v___y_2276_);
lean_dec(v___y_2275_);
lean_dec_ref(v___y_2274_);
return v_res_2279_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4___redArg(lean_object* v_msg_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_){
_start:
{
lean_object* v_ref_2286_; lean_object* v___x_2287_; lean_object* v_a_2288_; lean_object* v___x_2290_; uint8_t v_isShared_2291_; uint8_t v_isSharedCheck_2296_; 
v_ref_2286_ = lean_ctor_get(v___y_2283_, 2);
v___x_2287_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4_spec__4(v_msg_2280_, v___y_2281_, v___y_2282_, v___y_2283_, v___y_2284_);
v_a_2288_ = lean_ctor_get(v___x_2287_, 0);
v_isSharedCheck_2296_ = !lean_is_exclusive(v___x_2287_);
if (v_isSharedCheck_2296_ == 0)
{
v___x_2290_ = v___x_2287_;
v_isShared_2291_ = v_isSharedCheck_2296_;
goto v_resetjp_2289_;
}
else
{
lean_inc(v_a_2288_);
lean_dec(v___x_2287_);
v___x_2290_ = lean_box(0);
v_isShared_2291_ = v_isSharedCheck_2296_;
goto v_resetjp_2289_;
}
v_resetjp_2289_:
{
lean_object* v___x_2292_; lean_object* v___x_2294_; 
lean_inc(v_ref_2286_);
v___x_2292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2292_, 0, v_ref_2286_);
lean_ctor_set(v___x_2292_, 1, v_a_2288_);
if (v_isShared_2291_ == 0)
{
lean_ctor_set_tag(v___x_2290_, 1);
lean_ctor_set(v___x_2290_, 0, v___x_2292_);
v___x_2294_ = v___x_2290_;
goto v_reusejp_2293_;
}
else
{
lean_object* v_reuseFailAlloc_2295_; 
v_reuseFailAlloc_2295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2295_, 0, v___x_2292_);
v___x_2294_ = v_reuseFailAlloc_2295_;
goto v_reusejp_2293_;
}
v_reusejp_2293_:
{
return v___x_2294_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4___redArg___boxed(lean_object* v_msg_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_){
_start:
{
lean_object* v_res_2303_; 
v_res_2303_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4___redArg(v_msg_2297_, v___y_2298_, v___y_2299_, v___y_2300_, v___y_2301_);
lean_dec(v___y_2301_);
lean_dec_ref(v___y_2300_);
lean_dec(v___y_2299_);
lean_dec_ref(v___y_2298_);
return v_res_2303_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__5_spec__6(lean_object* v_a_2304_, lean_object* v_as_2305_, size_t v_i_2306_, size_t v_stop_2307_){
_start:
{
uint8_t v___x_2308_; 
v___x_2308_ = lean_usize_dec_eq(v_i_2306_, v_stop_2307_);
if (v___x_2308_ == 0)
{
lean_object* v___x_2309_; uint8_t v___x_2310_; 
v___x_2309_ = lean_array_uget_borrowed(v_as_2305_, v_i_2306_);
v___x_2310_ = lean_nat_dec_eq(v_a_2304_, v___x_2309_);
if (v___x_2310_ == 0)
{
size_t v___x_2311_; size_t v___x_2312_; 
v___x_2311_ = ((size_t)1ULL);
v___x_2312_ = lean_usize_add(v_i_2306_, v___x_2311_);
v_i_2306_ = v___x_2312_;
goto _start;
}
else
{
return v___x_2310_;
}
}
else
{
uint8_t v___x_2314_; 
v___x_2314_ = 0;
return v___x_2314_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__5_spec__6___boxed(lean_object* v_a_2315_, lean_object* v_as_2316_, lean_object* v_i_2317_, lean_object* v_stop_2318_){
_start:
{
size_t v_i_boxed_2319_; size_t v_stop_boxed_2320_; uint8_t v_res_2321_; lean_object* v_r_2322_; 
v_i_boxed_2319_ = lean_unbox_usize(v_i_2317_);
lean_dec(v_i_2317_);
v_stop_boxed_2320_ = lean_unbox_usize(v_stop_2318_);
lean_dec(v_stop_2318_);
v_res_2321_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__5_spec__6(v_a_2315_, v_as_2316_, v_i_boxed_2319_, v_stop_boxed_2320_);
lean_dec_ref(v_as_2316_);
lean_dec(v_a_2315_);
v_r_2322_ = lean_box(v_res_2321_);
return v_r_2322_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__5(lean_object* v_as_2323_, lean_object* v_a_2324_){
_start:
{
lean_object* v___x_2325_; lean_object* v___x_2326_; uint8_t v___x_2327_; 
v___x_2325_ = lean_unsigned_to_nat(0u);
v___x_2326_ = lean_array_get_size(v_as_2323_);
v___x_2327_ = lean_nat_dec_lt(v___x_2325_, v___x_2326_);
if (v___x_2327_ == 0)
{
return v___x_2327_;
}
else
{
size_t v___x_2328_; size_t v___x_2329_; uint8_t v___x_2330_; 
v___x_2328_ = ((size_t)0ULL);
v___x_2329_ = lean_usize_of_nat(v___x_2326_);
v___x_2330_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__5_spec__6(v_a_2324_, v_as_2323_, v___x_2328_, v___x_2329_);
return v___x_2330_;
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__5___boxed(lean_object* v_as_2331_, lean_object* v_a_2332_){
_start:
{
uint8_t v_res_2333_; lean_object* v_r_2334_; 
v_res_2333_ = l_Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__5(v_as_2331_, v_a_2332_);
lean_dec(v_a_2332_);
lean_dec_ref(v_as_2331_);
v_r_2334_ = lean_box(v_res_2333_);
return v_r_2334_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__8(lean_object* v_a_2335_, lean_object* v_fst_2336_, lean_object* v_argVars_2337_, lean_object* v_as_2338_, size_t v_sz_2339_, size_t v_i_2340_, lean_object* v_b_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_, lean_object* v___y_2344_, lean_object* v___y_2345_){
_start:
{
lean_object* v_a_2348_; uint8_t v___x_2352_; 
v___x_2352_ = lean_usize_dec_lt(v_i_2340_, v_sz_2339_);
if (v___x_2352_ == 0)
{
lean_object* v___x_2353_; 
v___x_2353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2353_, 0, v_b_2341_);
return v___x_2353_;
}
else
{
lean_object* v_next_2354_; 
v_next_2354_ = lean_ctor_get(v_b_2341_, 0);
lean_inc(v_next_2354_);
if (lean_obj_tag(v_next_2354_) == 0)
{
lean_object* v___x_2355_; 
v___x_2355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2355_, 0, v_b_2341_);
return v___x_2355_;
}
else
{
lean_object* v_upperBound_2356_; lean_object* v_val_2357_; lean_object* v___x_2359_; uint8_t v_isShared_2360_; uint8_t v_isSharedCheck_2388_; 
v_upperBound_2356_ = lean_ctor_get(v_b_2341_, 1);
v_val_2357_ = lean_ctor_get(v_next_2354_, 0);
v_isSharedCheck_2388_ = !lean_is_exclusive(v_next_2354_);
if (v_isSharedCheck_2388_ == 0)
{
v___x_2359_ = v_next_2354_;
v_isShared_2360_ = v_isSharedCheck_2388_;
goto v_resetjp_2358_;
}
else
{
lean_inc(v_val_2357_);
lean_dec(v_next_2354_);
v___x_2359_ = lean_box(0);
v_isShared_2360_ = v_isSharedCheck_2388_;
goto v_resetjp_2358_;
}
v_resetjp_2358_:
{
uint8_t v___x_2361_; 
v___x_2361_ = lean_nat_dec_lt(v_val_2357_, v_upperBound_2356_);
if (v___x_2361_ == 0)
{
lean_object* v___x_2362_; 
lean_del_object(v___x_2359_);
lean_dec(v_val_2357_);
v___x_2362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2362_, 0, v_b_2341_);
return v___x_2362_;
}
else
{
lean_object* v___x_2364_; uint8_t v_isShared_2365_; uint8_t v_isSharedCheck_2385_; 
lean_inc(v_upperBound_2356_);
v_isSharedCheck_2385_ = !lean_is_exclusive(v_b_2341_);
if (v_isSharedCheck_2385_ == 0)
{
lean_object* v_unused_2386_; lean_object* v_unused_2387_; 
v_unused_2386_ = lean_ctor_get(v_b_2341_, 1);
lean_dec(v_unused_2386_);
v_unused_2387_ = lean_ctor_get(v_b_2341_, 0);
lean_dec(v_unused_2387_);
v___x_2364_ = v_b_2341_;
v_isShared_2365_ = v_isSharedCheck_2385_;
goto v_resetjp_2363_;
}
else
{
lean_dec(v_b_2341_);
v___x_2364_ = lean_box(0);
v_isShared_2365_ = v_isSharedCheck_2385_;
goto v_resetjp_2363_;
}
v_resetjp_2363_:
{
lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2369_; 
v___x_2366_ = lean_unsigned_to_nat(1u);
v___x_2367_ = lean_nat_add(v_val_2357_, v___x_2366_);
if (v_isShared_2360_ == 0)
{
lean_ctor_set(v___x_2359_, 0, v___x_2367_);
v___x_2369_ = v___x_2359_;
goto v_reusejp_2368_;
}
else
{
lean_object* v_reuseFailAlloc_2384_; 
v_reuseFailAlloc_2384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2384_, 0, v___x_2367_);
v___x_2369_ = v_reuseFailAlloc_2384_;
goto v_reusejp_2368_;
}
v_reusejp_2368_:
{
lean_object* v___x_2371_; 
if (v_isShared_2365_ == 0)
{
lean_ctor_set(v___x_2364_, 0, v___x_2369_);
v___x_2371_ = v___x_2364_;
goto v_reusejp_2370_;
}
else
{
lean_object* v_reuseFailAlloc_2383_; 
v_reuseFailAlloc_2383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2383_, 0, v___x_2369_);
lean_ctor_set(v_reuseFailAlloc_2383_, 1, v_upperBound_2356_);
v___x_2371_ = v_reuseFailAlloc_2383_;
goto v_reusejp_2370_;
}
v_reusejp_2370_:
{
uint8_t v___x_2372_; 
v___x_2372_ = l_Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__5(v_a_2335_, v_val_2357_);
lean_dec(v_val_2357_);
if (v___x_2372_ == 0)
{
lean_object* v_a_2373_; lean_object* v___x_2374_; 
v_a_2373_ = lean_array_uget_borrowed(v_as_2338_, v_i_2340_);
lean_inc(v_a_2373_);
v___x_2374_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn(v_fst_2336_, v_argVars_2337_, v_a_2373_, v___y_2342_, v___y_2343_, v___y_2344_, v___y_2345_);
if (lean_obj_tag(v___x_2374_) == 0)
{
lean_dec_ref_known(v___x_2374_, 1);
v_a_2348_ = v___x_2371_;
goto v___jp_2347_;
}
else
{
lean_object* v_a_2375_; lean_object* v___x_2377_; uint8_t v_isShared_2378_; uint8_t v_isSharedCheck_2382_; 
lean_dec_ref(v___x_2371_);
v_a_2375_ = lean_ctor_get(v___x_2374_, 0);
v_isSharedCheck_2382_ = !lean_is_exclusive(v___x_2374_);
if (v_isSharedCheck_2382_ == 0)
{
v___x_2377_ = v___x_2374_;
v_isShared_2378_ = v_isSharedCheck_2382_;
goto v_resetjp_2376_;
}
else
{
lean_inc(v_a_2375_);
lean_dec(v___x_2374_);
v___x_2377_ = lean_box(0);
v_isShared_2378_ = v_isSharedCheck_2382_;
goto v_resetjp_2376_;
}
v_resetjp_2376_:
{
lean_object* v___x_2380_; 
if (v_isShared_2378_ == 0)
{
v___x_2380_ = v___x_2377_;
goto v_reusejp_2379_;
}
else
{
lean_object* v_reuseFailAlloc_2381_; 
v_reuseFailAlloc_2381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2381_, 0, v_a_2375_);
v___x_2380_ = v_reuseFailAlloc_2381_;
goto v_reusejp_2379_;
}
v_reusejp_2379_:
{
return v___x_2380_;
}
}
}
}
else
{
v_a_2348_ = v___x_2371_;
goto v___jp_2347_;
}
}
}
}
}
}
}
}
v___jp_2347_:
{
size_t v___x_2349_; size_t v___x_2350_; 
v___x_2349_ = ((size_t)1ULL);
v___x_2350_ = lean_usize_add(v_i_2340_, v___x_2349_);
v_i_2340_ = v___x_2350_;
v_b_2341_ = v_a_2348_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__8___boxed(lean_object* v_a_2389_, lean_object* v_fst_2390_, lean_object* v_argVars_2391_, lean_object* v_as_2392_, lean_object* v_sz_2393_, lean_object* v_i_2394_, lean_object* v_b_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_){
_start:
{
size_t v_sz_boxed_2401_; size_t v_i_boxed_2402_; lean_object* v_res_2403_; 
v_sz_boxed_2401_ = lean_unbox_usize(v_sz_2393_);
lean_dec(v_sz_2393_);
v_i_boxed_2402_ = lean_unbox_usize(v_i_2394_);
lean_dec(v_i_2394_);
v_res_2403_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__8(v_a_2389_, v_fst_2390_, v_argVars_2391_, v_as_2392_, v_sz_boxed_2401_, v_i_boxed_2402_, v_b_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_);
lean_dec(v___y_2399_);
lean_dec_ref(v___y_2398_);
lean_dec(v___y_2397_);
lean_dec_ref(v___y_2396_);
lean_dec_ref(v_as_2392_);
lean_dec_ref(v_argVars_2391_);
lean_dec_ref(v_fst_2390_);
lean_dec_ref(v_a_2389_);
return v_res_2403_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3(lean_object* v_fst_2404_, uint8_t v___x_2405_, size_t v_sz_2406_, size_t v_i_2407_, lean_object* v_bs_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_){
_start:
{
uint8_t v___x_2414_; 
v___x_2414_ = lean_usize_dec_lt(v_i_2407_, v_sz_2406_);
if (v___x_2414_ == 0)
{
lean_object* v___x_2415_; 
v___x_2415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2415_, 0, v_bs_2408_);
return v___x_2415_;
}
else
{
lean_object* v___x_2416_; lean_object* v_v_2417_; lean_object* v___x_2418_; lean_object* v_bs_x27_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; 
v___x_2416_ = l_Lean_instInhabitedExpr;
v_v_2417_ = lean_array_uget(v_bs_2408_, v_i_2407_);
v___x_2418_ = lean_unsigned_to_nat(0u);
v_bs_x27_2419_ = lean_array_uset(v_bs_2408_, v_i_2407_, v___x_2418_);
v___x_2420_ = lean_array_get_borrowed(v___x_2416_, v_fst_2404_, v_v_2417_);
lean_dec(v_v_2417_);
lean_inc(v___y_2412_);
lean_inc_ref(v___y_2411_);
lean_inc(v___y_2410_);
lean_inc_ref(v___y_2409_);
lean_inc(v___x_2420_);
v___x_2421_ = lean_infer_type(v___x_2420_, v___y_2409_, v___y_2410_, v___y_2411_, v___y_2412_);
if (lean_obj_tag(v___x_2421_) == 0)
{
lean_object* v_a_2422_; lean_object* v___x_2423_; 
v_a_2422_ = lean_ctor_get(v___x_2421_, 0);
lean_inc(v_a_2422_);
lean_dec_ref_known(v___x_2421_, 1);
v___x_2423_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___redArg(v_a_2422_, v___y_2410_);
if (lean_obj_tag(v___x_2423_) == 0)
{
lean_object* v_a_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; size_t v___x_2427_; size_t v___x_2428_; lean_object* v___x_2429_; 
v_a_2424_ = lean_ctor_get(v___x_2423_, 0);
lean_inc(v_a_2424_);
lean_dec_ref_known(v___x_2423_, 1);
v___x_2425_ = l_Lean_Expr_setPPExplicit(v_a_2424_, v___x_2405_);
v___x_2426_ = l_Lean_indentExpr(v___x_2425_);
v___x_2427_ = ((size_t)1ULL);
v___x_2428_ = lean_usize_add(v_i_2407_, v___x_2427_);
v___x_2429_ = lean_array_uset(v_bs_x27_2419_, v_i_2407_, v___x_2426_);
v_i_2407_ = v___x_2428_;
v_bs_2408_ = v___x_2429_;
goto _start;
}
else
{
lean_object* v_a_2431_; lean_object* v___x_2433_; uint8_t v_isShared_2434_; uint8_t v_isSharedCheck_2438_; 
lean_dec_ref(v_bs_x27_2419_);
v_a_2431_ = lean_ctor_get(v___x_2423_, 0);
v_isSharedCheck_2438_ = !lean_is_exclusive(v___x_2423_);
if (v_isSharedCheck_2438_ == 0)
{
v___x_2433_ = v___x_2423_;
v_isShared_2434_ = v_isSharedCheck_2438_;
goto v_resetjp_2432_;
}
else
{
lean_inc(v_a_2431_);
lean_dec(v___x_2423_);
v___x_2433_ = lean_box(0);
v_isShared_2434_ = v_isSharedCheck_2438_;
goto v_resetjp_2432_;
}
v_resetjp_2432_:
{
lean_object* v___x_2436_; 
if (v_isShared_2434_ == 0)
{
v___x_2436_ = v___x_2433_;
goto v_reusejp_2435_;
}
else
{
lean_object* v_reuseFailAlloc_2437_; 
v_reuseFailAlloc_2437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2437_, 0, v_a_2431_);
v___x_2436_ = v_reuseFailAlloc_2437_;
goto v_reusejp_2435_;
}
v_reusejp_2435_:
{
return v___x_2436_;
}
}
}
}
else
{
lean_object* v_a_2439_; lean_object* v___x_2441_; uint8_t v_isShared_2442_; uint8_t v_isSharedCheck_2446_; 
lean_dec_ref(v_bs_x27_2419_);
v_a_2439_ = lean_ctor_get(v___x_2421_, 0);
v_isSharedCheck_2446_ = !lean_is_exclusive(v___x_2421_);
if (v_isSharedCheck_2446_ == 0)
{
v___x_2441_ = v___x_2421_;
v_isShared_2442_ = v_isSharedCheck_2446_;
goto v_resetjp_2440_;
}
else
{
lean_inc(v_a_2439_);
lean_dec(v___x_2421_);
v___x_2441_ = lean_box(0);
v_isShared_2442_ = v_isSharedCheck_2446_;
goto v_resetjp_2440_;
}
v_resetjp_2440_:
{
lean_object* v___x_2444_; 
if (v_isShared_2442_ == 0)
{
v___x_2444_ = v___x_2441_;
goto v_reusejp_2443_;
}
else
{
lean_object* v_reuseFailAlloc_2445_; 
v_reuseFailAlloc_2445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2445_, 0, v_a_2439_);
v___x_2444_ = v_reuseFailAlloc_2445_;
goto v_reusejp_2443_;
}
v_reusejp_2443_:
{
return v___x_2444_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3___boxed(lean_object* v_fst_2447_, lean_object* v___x_2448_, lean_object* v_sz_2449_, lean_object* v_i_2450_, lean_object* v_bs_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_){
_start:
{
uint8_t v___x_23606__boxed_2457_; size_t v_sz_boxed_2458_; size_t v_i_boxed_2459_; lean_object* v_res_2460_; 
v___x_23606__boxed_2457_ = lean_unbox(v___x_2448_);
v_sz_boxed_2458_ = lean_unbox_usize(v_sz_2449_);
lean_dec(v_sz_2449_);
v_i_boxed_2459_ = lean_unbox_usize(v_i_2450_);
lean_dec(v_i_2450_);
v_res_2460_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3(v_fst_2447_, v___x_23606__boxed_2457_, v_sz_boxed_2458_, v_i_boxed_2459_, v_bs_2451_, v___y_2452_, v___y_2453_, v___y_2454_, v___y_2455_);
lean_dec(v___y_2455_);
lean_dec_ref(v___y_2454_);
lean_dec(v___y_2453_);
lean_dec_ref(v___y_2452_);
lean_dec_ref(v_fst_2447_);
return v_res_2460_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(lean_object* v_upperBound_2461_, lean_object* v_a_2462_, lean_object* v___x_2463_, lean_object* v_a_2464_, lean_object* v_b_2465_){
_start:
{
uint8_t v___x_2467_; 
v___x_2467_ = lean_nat_dec_lt(v_a_2464_, v_upperBound_2461_);
if (v___x_2467_ == 0)
{
lean_object* v___x_2468_; 
lean_dec(v_a_2464_);
v___x_2468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2468_, 0, v_b_2465_);
return v___x_2468_;
}
else
{
lean_object* v_snd_2469_; lean_object* v___x_2471_; uint8_t v_isShared_2472_; uint8_t v_isSharedCheck_2509_; 
v_snd_2469_ = lean_ctor_get(v_b_2465_, 1);
v_isSharedCheck_2509_ = !lean_is_exclusive(v_b_2465_);
if (v_isSharedCheck_2509_ == 0)
{
lean_object* v_unused_2510_; 
v_unused_2510_ = lean_ctor_get(v_b_2465_, 0);
lean_dec(v_unused_2510_);
v___x_2471_ = v_b_2465_;
v_isShared_2472_ = v_isSharedCheck_2509_;
goto v_resetjp_2470_;
}
else
{
lean_inc(v_snd_2469_);
lean_dec(v_b_2465_);
v___x_2471_ = lean_box(0);
v_isShared_2472_ = v_isSharedCheck_2509_;
goto v_resetjp_2470_;
}
v_resetjp_2470_:
{
lean_object* v_array_2473_; lean_object* v_start_2474_; lean_object* v_stop_2475_; lean_object* v___x_2476_; uint8_t v___x_2477_; 
v_array_2473_ = lean_ctor_get(v_snd_2469_, 0);
v_start_2474_ = lean_ctor_get(v_snd_2469_, 1);
v_stop_2475_ = lean_ctor_get(v_snd_2469_, 2);
v___x_2476_ = lean_box(0);
v___x_2477_ = lean_nat_dec_lt(v_start_2474_, v_stop_2475_);
if (v___x_2477_ == 0)
{
lean_object* v___x_2479_; 
lean_dec(v_a_2464_);
if (v_isShared_2472_ == 0)
{
lean_ctor_set(v___x_2471_, 0, v___x_2476_);
v___x_2479_ = v___x_2471_;
goto v_reusejp_2478_;
}
else
{
lean_object* v_reuseFailAlloc_2481_; 
v_reuseFailAlloc_2481_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2481_, 0, v___x_2476_);
lean_ctor_set(v_reuseFailAlloc_2481_, 1, v_snd_2469_);
v___x_2479_ = v_reuseFailAlloc_2481_;
goto v_reusejp_2478_;
}
v_reusejp_2478_:
{
lean_object* v___x_2480_; 
v___x_2480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2480_, 0, v___x_2479_);
return v___x_2480_;
}
}
else
{
lean_object* v___x_2483_; uint8_t v_isShared_2484_; uint8_t v_isSharedCheck_2505_; 
lean_inc(v_stop_2475_);
lean_inc(v_start_2474_);
lean_inc_ref(v_array_2473_);
v_isSharedCheck_2505_ = !lean_is_exclusive(v_snd_2469_);
if (v_isSharedCheck_2505_ == 0)
{
lean_object* v_unused_2506_; lean_object* v_unused_2507_; lean_object* v_unused_2508_; 
v_unused_2506_ = lean_ctor_get(v_snd_2469_, 2);
lean_dec(v_unused_2506_);
v_unused_2507_ = lean_ctor_get(v_snd_2469_, 1);
lean_dec(v_unused_2507_);
v_unused_2508_ = lean_ctor_get(v_snd_2469_, 0);
lean_dec(v_unused_2508_);
v___x_2483_ = v_snd_2469_;
v_isShared_2484_ = v_isSharedCheck_2505_;
goto v_resetjp_2482_;
}
else
{
lean_dec(v_snd_2469_);
v___x_2483_ = lean_box(0);
v_isShared_2484_ = v_isSharedCheck_2505_;
goto v_resetjp_2482_;
}
v_resetjp_2482_:
{
lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2489_; 
v___x_2485_ = lean_array_fget(v_array_2473_, v_start_2474_);
v___x_2486_ = lean_unsigned_to_nat(1u);
v___x_2487_ = lean_nat_add(v_start_2474_, v___x_2486_);
lean_dec(v_start_2474_);
if (v_isShared_2484_ == 0)
{
lean_ctor_set(v___x_2483_, 1, v___x_2487_);
v___x_2489_ = v___x_2483_;
goto v_reusejp_2488_;
}
else
{
lean_object* v_reuseFailAlloc_2504_; 
v_reuseFailAlloc_2504_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2504_, 0, v_array_2473_);
lean_ctor_set(v_reuseFailAlloc_2504_, 1, v___x_2487_);
lean_ctor_set(v_reuseFailAlloc_2504_, 2, v_stop_2475_);
v___x_2489_ = v_reuseFailAlloc_2504_;
goto v_reusejp_2488_;
}
v_reusejp_2488_:
{
uint8_t v___x_2496_; 
v___x_2496_ = l_Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__5(v_a_2462_, v_a_2464_);
if (v___x_2496_ == 0)
{
uint8_t v___x_2497_; 
v___x_2497_ = l_Lean_Expr_hasExprMVar(v___x_2485_);
lean_dec(v___x_2485_);
if (v___x_2497_ == 0)
{
goto v___jp_2490_;
}
else
{
lean_object* v___x_2498_; uint8_t v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; 
lean_del_object(v___x_2471_);
lean_dec(v_a_2464_);
v___x_2498_ = lean_unsigned_to_nat(0u);
v___x_2499_ = lean_nat_dec_eq(v___x_2463_, v___x_2498_);
v___x_2500_ = lean_box(v___x_2499_);
v___x_2501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2501_, 0, v___x_2500_);
v___x_2502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2502_, 0, v___x_2501_);
lean_ctor_set(v___x_2502_, 1, v___x_2489_);
v___x_2503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2503_, 0, v___x_2502_);
return v___x_2503_;
}
}
else
{
lean_dec(v___x_2485_);
goto v___jp_2490_;
}
v___jp_2490_:
{
lean_object* v___x_2492_; 
if (v_isShared_2472_ == 0)
{
lean_ctor_set(v___x_2471_, 1, v___x_2489_);
lean_ctor_set(v___x_2471_, 0, v___x_2476_);
v___x_2492_ = v___x_2471_;
goto v_reusejp_2491_;
}
else
{
lean_object* v_reuseFailAlloc_2495_; 
v_reuseFailAlloc_2495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2495_, 0, v___x_2476_);
lean_ctor_set(v_reuseFailAlloc_2495_, 1, v___x_2489_);
v___x_2492_ = v_reuseFailAlloc_2495_;
goto v_reusejp_2491_;
}
v_reusejp_2491_:
{
lean_object* v___x_2493_; 
v___x_2493_ = lean_nat_add(v_a_2464_, v___x_2486_);
lean_dec(v_a_2464_);
v_a_2464_ = v___x_2493_;
v_b_2465_ = v___x_2492_;
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
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg___boxed(lean_object* v_upperBound_2511_, lean_object* v_a_2512_, lean_object* v___x_2513_, lean_object* v_a_2514_, lean_object* v_b_2515_, lean_object* v___y_2516_){
_start:
{
lean_object* v_res_2517_; 
v_res_2517_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v_upperBound_2511_, v_a_2512_, v___x_2513_, v_a_2514_, v_b_2515_);
lean_dec(v___x_2513_);
lean_dec_ref(v_a_2512_);
lean_dec(v_upperBound_2511_);
return v_res_2517_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2518_; lean_object* v_dummy_2519_; 
v___x_2518_ = lean_box(0);
v_dummy_2519_ = l_Lean_Expr_sort___override(v___x_2518_);
return v_dummy_2519_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0(lean_object* v___x_2520_, lean_object* v___x_2521_, uint8_t v___x_2522_, lean_object* v_x_2523_, lean_object* v_argTy_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_){
_start:
{
lean_object* v___x_2530_; 
lean_inc(v___y_2528_);
lean_inc_ref(v___y_2527_);
lean_inc(v___y_2526_);
lean_inc_ref(v___y_2525_);
v___x_2530_ = lean_whnf(v_argTy_2524_, v___y_2525_, v___y_2526_, v___y_2527_, v___y_2528_);
if (lean_obj_tag(v___x_2530_) == 0)
{
lean_object* v_a_2531_; lean_object* v___x_2532_; 
v_a_2531_ = lean_ctor_get(v___x_2530_, 0);
lean_inc(v_a_2531_);
lean_dec_ref_known(v___x_2530_, 1);
v___x_2532_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf(v_a_2531_, v___y_2525_, v___y_2526_, v___y_2527_, v___y_2528_);
if (lean_obj_tag(v___x_2532_) == 0)
{
lean_object* v_a_2533_; lean_object* v_dummy_2534_; lean_object* v_nargs_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; 
v_a_2533_ = lean_ctor_get(v___x_2532_, 0);
lean_inc(v_a_2533_);
lean_dec_ref_known(v___x_2532_, 1);
v_dummy_2534_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__0);
v_nargs_2535_ = l_Lean_Expr_getAppNumArgs(v_a_2531_);
lean_inc(v_nargs_2535_);
v___x_2536_ = lean_mk_array(v_nargs_2535_, v_dummy_2534_);
v___x_2537_ = lean_unsigned_to_nat(1u);
v___x_2538_ = lean_nat_sub(v_nargs_2535_, v___x_2537_);
lean_dec(v_nargs_2535_);
v___x_2539_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_2531_, v___x_2536_, v___x_2538_);
v___x_2540_ = lean_array_get_size(v___x_2539_);
lean_inc(v___x_2520_);
v___x_2541_ = l_Array_toSubarray___redArg(v___x_2539_, v___x_2520_, v___x_2540_);
v___x_2542_ = lean_box(0);
v___x_2543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2543_, 0, v___x_2542_);
lean_ctor_set(v___x_2543_, 1, v___x_2541_);
v___x_2544_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v___x_2540_, v_a_2533_, v___x_2521_, v___x_2520_, v___x_2543_);
lean_dec(v_a_2533_);
if (lean_obj_tag(v___x_2544_) == 0)
{
lean_object* v_a_2545_; lean_object* v___x_2547_; uint8_t v_isShared_2548_; uint8_t v_isSharedCheck_2558_; 
v_a_2545_ = lean_ctor_get(v___x_2544_, 0);
v_isSharedCheck_2558_ = !lean_is_exclusive(v___x_2544_);
if (v_isSharedCheck_2558_ == 0)
{
v___x_2547_ = v___x_2544_;
v_isShared_2548_ = v_isSharedCheck_2558_;
goto v_resetjp_2546_;
}
else
{
lean_inc(v_a_2545_);
lean_dec(v___x_2544_);
v___x_2547_ = lean_box(0);
v_isShared_2548_ = v_isSharedCheck_2558_;
goto v_resetjp_2546_;
}
v_resetjp_2546_:
{
lean_object* v_fst_2549_; 
v_fst_2549_ = lean_ctor_get(v_a_2545_, 0);
lean_inc(v_fst_2549_);
lean_dec(v_a_2545_);
if (lean_obj_tag(v_fst_2549_) == 0)
{
lean_object* v___x_2550_; lean_object* v___x_2552_; 
v___x_2550_ = lean_box(v___x_2522_);
if (v_isShared_2548_ == 0)
{
lean_ctor_set(v___x_2547_, 0, v___x_2550_);
v___x_2552_ = v___x_2547_;
goto v_reusejp_2551_;
}
else
{
lean_object* v_reuseFailAlloc_2553_; 
v_reuseFailAlloc_2553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2553_, 0, v___x_2550_);
v___x_2552_ = v_reuseFailAlloc_2553_;
goto v_reusejp_2551_;
}
v_reusejp_2551_:
{
return v___x_2552_;
}
}
else
{
lean_object* v_val_2554_; lean_object* v___x_2556_; 
v_val_2554_ = lean_ctor_get(v_fst_2549_, 0);
lean_inc(v_val_2554_);
lean_dec_ref_known(v_fst_2549_, 1);
if (v_isShared_2548_ == 0)
{
lean_ctor_set(v___x_2547_, 0, v_val_2554_);
v___x_2556_ = v___x_2547_;
goto v_reusejp_2555_;
}
else
{
lean_object* v_reuseFailAlloc_2557_; 
v_reuseFailAlloc_2557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2557_, 0, v_val_2554_);
v___x_2556_ = v_reuseFailAlloc_2557_;
goto v_reusejp_2555_;
}
v_reusejp_2555_:
{
return v___x_2556_;
}
}
}
}
else
{
lean_object* v_a_2559_; lean_object* v___x_2561_; uint8_t v_isShared_2562_; uint8_t v_isSharedCheck_2566_; 
v_a_2559_ = lean_ctor_get(v___x_2544_, 0);
v_isSharedCheck_2566_ = !lean_is_exclusive(v___x_2544_);
if (v_isSharedCheck_2566_ == 0)
{
v___x_2561_ = v___x_2544_;
v_isShared_2562_ = v_isSharedCheck_2566_;
goto v_resetjp_2560_;
}
else
{
lean_inc(v_a_2559_);
lean_dec(v___x_2544_);
v___x_2561_ = lean_box(0);
v_isShared_2562_ = v_isSharedCheck_2566_;
goto v_resetjp_2560_;
}
v_resetjp_2560_:
{
lean_object* v___x_2564_; 
if (v_isShared_2562_ == 0)
{
v___x_2564_ = v___x_2561_;
goto v_reusejp_2563_;
}
else
{
lean_object* v_reuseFailAlloc_2565_; 
v_reuseFailAlloc_2565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2565_, 0, v_a_2559_);
v___x_2564_ = v_reuseFailAlloc_2565_;
goto v_reusejp_2563_;
}
v_reusejp_2563_:
{
return v___x_2564_;
}
}
}
}
else
{
lean_object* v_a_2567_; lean_object* v___x_2569_; uint8_t v_isShared_2570_; uint8_t v_isSharedCheck_2574_; 
lean_dec(v_a_2531_);
lean_dec(v___x_2520_);
v_a_2567_ = lean_ctor_get(v___x_2532_, 0);
v_isSharedCheck_2574_ = !lean_is_exclusive(v___x_2532_);
if (v_isSharedCheck_2574_ == 0)
{
v___x_2569_ = v___x_2532_;
v_isShared_2570_ = v_isSharedCheck_2574_;
goto v_resetjp_2568_;
}
else
{
lean_inc(v_a_2567_);
lean_dec(v___x_2532_);
v___x_2569_ = lean_box(0);
v_isShared_2570_ = v_isSharedCheck_2574_;
goto v_resetjp_2568_;
}
v_resetjp_2568_:
{
lean_object* v___x_2572_; 
if (v_isShared_2570_ == 0)
{
v___x_2572_ = v___x_2569_;
goto v_reusejp_2571_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v_a_2567_);
v___x_2572_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2571_;
}
v_reusejp_2571_:
{
return v___x_2572_;
}
}
}
}
else
{
lean_object* v_a_2575_; lean_object* v___x_2577_; uint8_t v_isShared_2578_; uint8_t v_isSharedCheck_2582_; 
lean_dec(v___x_2520_);
v_a_2575_ = lean_ctor_get(v___x_2530_, 0);
v_isSharedCheck_2582_ = !lean_is_exclusive(v___x_2530_);
if (v_isSharedCheck_2582_ == 0)
{
v___x_2577_ = v___x_2530_;
v_isShared_2578_ = v_isSharedCheck_2582_;
goto v_resetjp_2576_;
}
else
{
lean_inc(v_a_2575_);
lean_dec(v___x_2530_);
v___x_2577_ = lean_box(0);
v_isShared_2578_ = v_isSharedCheck_2582_;
goto v_resetjp_2576_;
}
v_resetjp_2576_:
{
lean_object* v___x_2580_; 
if (v_isShared_2578_ == 0)
{
v___x_2580_ = v___x_2577_;
goto v_reusejp_2579_;
}
else
{
lean_object* v_reuseFailAlloc_2581_; 
v_reuseFailAlloc_2581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2581_, 0, v_a_2575_);
v___x_2580_ = v_reuseFailAlloc_2581_;
goto v_reusejp_2579_;
}
v_reusejp_2579_:
{
return v___x_2580_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___boxed(lean_object* v___x_2583_, lean_object* v___x_2584_, lean_object* v___x_2585_, lean_object* v_x_2586_, lean_object* v_argTy_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_){
_start:
{
uint8_t v___x_23784__boxed_2593_; lean_object* v_res_2594_; 
v___x_23784__boxed_2593_ = lean_unbox(v___x_2585_);
v_res_2594_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0(v___x_2583_, v___x_2584_, v___x_23784__boxed_2593_, v_x_2586_, v_argTy_2587_, v___y_2588_, v___y_2589_, v___y_2590_, v___y_2591_);
lean_dec(v___y_2591_);
lean_dec_ref(v___y_2590_);
lean_dec(v___y_2589_);
lean_dec_ref(v___y_2588_);
lean_dec_ref(v_x_2586_);
lean_dec(v___x_2584_);
return v_res_2594_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7(lean_object* v_fst_2598_, lean_object* v_projInfo_x3f_2599_, lean_object* v___x_2600_, lean_object* v_argVars_2601_, lean_object* v_as_2602_, size_t v_sz_2603_, size_t v_i_2604_, lean_object* v_b_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_){
_start:
{
uint8_t v___x_2611_; 
v___x_2611_ = lean_usize_dec_lt(v_i_2604_, v_sz_2603_);
if (v___x_2611_ == 0)
{
lean_object* v___x_2612_; 
lean_dec(v___x_2600_);
v___x_2612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2612_, 0, v_b_2605_);
return v___x_2612_;
}
else
{
lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___f_2618_; uint8_t v___x_2619_; lean_object* v_a_2620_; lean_object* v___y_2627_; lean_object* v___x_2641_; lean_object* v___x_2642_; 
lean_dec_ref(v_b_2605_);
v___x_2613_ = lean_box(0);
v___x_2614_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___closed__0));
v___x_2615_ = l_Lean_instInhabitedExpr;
v___x_2616_ = lean_unsigned_to_nat(0u);
v___x_2617_ = lean_box(v___x_2611_);
lean_inc(v___x_2600_);
v___f_2618_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___boxed), 10, 3);
lean_closure_set(v___f_2618_, 0, v___x_2616_);
lean_closure_set(v___f_2618_, 1, v___x_2600_);
lean_closure_set(v___f_2618_, 2, v___x_2617_);
v___x_2619_ = lean_nat_dec_eq(v___x_2600_, v___x_2616_);
v_a_2620_ = lean_array_uget_borrowed(v_as_2602_, v_i_2604_);
v___x_2641_ = lean_array_get_borrowed(v___x_2615_, v_fst_2598_, v_a_2620_);
lean_inc(v___y_2609_);
lean_inc_ref(v___y_2608_);
lean_inc(v___y_2607_);
lean_inc_ref(v___y_2606_);
lean_inc(v___x_2641_);
v___x_2642_ = lean_infer_type(v___x_2641_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_);
if (lean_obj_tag(v___x_2642_) == 0)
{
lean_object* v_a_2643_; lean_object* v___x_2644_; 
v_a_2643_ = lean_ctor_get(v___x_2642_, 0);
lean_inc(v_a_2643_);
lean_dec_ref_known(v___x_2642_, 1);
v___x_2644_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___redArg(v_a_2643_, v___y_2607_);
if (lean_obj_tag(v___x_2644_) == 0)
{
if (lean_obj_tag(v_projInfo_x3f_2599_) == 1)
{
lean_object* v_val_2645_; lean_object* v_a_2646_; lean_object* v_numParams_2647_; uint8_t v___x_2648_; 
v_val_2645_ = lean_ctor_get(v_projInfo_x3f_2599_, 0);
v_a_2646_ = lean_ctor_get(v___x_2644_, 0);
lean_inc(v_a_2646_);
lean_dec_ref_known(v___x_2644_, 1);
v_numParams_2647_ = lean_ctor_get(v_val_2645_, 1);
v___x_2648_ = lean_nat_dec_eq(v_numParams_2647_, v_a_2620_);
if (v___x_2648_ == 0)
{
lean_object* v___x_2649_; 
v___x_2649_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(v_a_2646_, v___f_2618_, v___x_2619_, v___x_2619_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_);
v___y_2627_ = v___x_2649_;
goto v___jp_2626_;
}
else
{
lean_object* v___x_2650_; 
lean_dec_ref(v___f_2618_);
lean_dec(v___x_2600_);
v___x_2650_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn(v_fst_2598_, v_argVars_2601_, v_a_2646_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_);
if (lean_obj_tag(v___x_2650_) == 0)
{
lean_dec_ref_known(v___x_2650_, 1);
goto v___jp_2621_;
}
else
{
lean_object* v_a_2651_; lean_object* v___x_2653_; uint8_t v_isShared_2654_; uint8_t v_isSharedCheck_2658_; 
v_a_2651_ = lean_ctor_get(v___x_2650_, 0);
v_isSharedCheck_2658_ = !lean_is_exclusive(v___x_2650_);
if (v_isSharedCheck_2658_ == 0)
{
v___x_2653_ = v___x_2650_;
v_isShared_2654_ = v_isSharedCheck_2658_;
goto v_resetjp_2652_;
}
else
{
lean_inc(v_a_2651_);
lean_dec(v___x_2650_);
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
}
}
else
{
lean_object* v_a_2659_; lean_object* v___x_2660_; 
v_a_2659_ = lean_ctor_get(v___x_2644_, 0);
lean_inc(v_a_2659_);
lean_dec_ref_known(v___x_2644_, 1);
v___x_2660_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(v_a_2659_, v___f_2618_, v___x_2619_, v___x_2619_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_);
v___y_2627_ = v___x_2660_;
goto v___jp_2626_;
}
}
else
{
lean_object* v_a_2661_; lean_object* v___x_2663_; uint8_t v_isShared_2664_; uint8_t v_isSharedCheck_2668_; 
lean_dec_ref(v___f_2618_);
lean_dec(v___x_2600_);
v_a_2661_ = lean_ctor_get(v___x_2644_, 0);
v_isSharedCheck_2668_ = !lean_is_exclusive(v___x_2644_);
if (v_isSharedCheck_2668_ == 0)
{
v___x_2663_ = v___x_2644_;
v_isShared_2664_ = v_isSharedCheck_2668_;
goto v_resetjp_2662_;
}
else
{
lean_inc(v_a_2661_);
lean_dec(v___x_2644_);
v___x_2663_ = lean_box(0);
v_isShared_2664_ = v_isSharedCheck_2668_;
goto v_resetjp_2662_;
}
v_resetjp_2662_:
{
lean_object* v___x_2666_; 
if (v_isShared_2664_ == 0)
{
v___x_2666_ = v___x_2663_;
goto v_reusejp_2665_;
}
else
{
lean_object* v_reuseFailAlloc_2667_; 
v_reuseFailAlloc_2667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2667_, 0, v_a_2661_);
v___x_2666_ = v_reuseFailAlloc_2667_;
goto v_reusejp_2665_;
}
v_reusejp_2665_:
{
return v___x_2666_;
}
}
}
}
else
{
lean_object* v_a_2669_; lean_object* v___x_2671_; uint8_t v_isShared_2672_; uint8_t v_isSharedCheck_2676_; 
lean_dec_ref(v___f_2618_);
lean_dec(v___x_2600_);
v_a_2669_ = lean_ctor_get(v___x_2642_, 0);
v_isSharedCheck_2676_ = !lean_is_exclusive(v___x_2642_);
if (v_isSharedCheck_2676_ == 0)
{
v___x_2671_ = v___x_2642_;
v_isShared_2672_ = v_isSharedCheck_2676_;
goto v_resetjp_2670_;
}
else
{
lean_inc(v_a_2669_);
lean_dec(v___x_2642_);
v___x_2671_ = lean_box(0);
v_isShared_2672_ = v_isSharedCheck_2676_;
goto v_resetjp_2670_;
}
v_resetjp_2670_:
{
lean_object* v___x_2674_; 
if (v_isShared_2672_ == 0)
{
v___x_2674_ = v___x_2671_;
goto v_reusejp_2673_;
}
else
{
lean_object* v_reuseFailAlloc_2675_; 
v_reuseFailAlloc_2675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2675_, 0, v_a_2669_);
v___x_2674_ = v_reuseFailAlloc_2675_;
goto v_reusejp_2673_;
}
v_reusejp_2673_:
{
return v___x_2674_;
}
}
}
v___jp_2621_:
{
lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; 
lean_inc(v_a_2620_);
v___x_2622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2622_, 0, v_a_2620_);
v___x_2623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2623_, 0, v___x_2622_);
v___x_2624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2624_, 0, v___x_2623_);
lean_ctor_set(v___x_2624_, 1, v___x_2613_);
v___x_2625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2625_, 0, v___x_2624_);
return v___x_2625_;
}
v___jp_2626_:
{
if (lean_obj_tag(v___y_2627_) == 0)
{
lean_object* v_a_2628_; uint8_t v___x_2629_; 
v_a_2628_ = lean_ctor_get(v___y_2627_, 0);
lean_inc(v_a_2628_);
lean_dec_ref_known(v___y_2627_, 1);
v___x_2629_ = lean_unbox(v_a_2628_);
lean_dec(v_a_2628_);
if (v___x_2629_ == 0)
{
size_t v___x_2630_; size_t v___x_2631_; 
v___x_2630_ = ((size_t)1ULL);
v___x_2631_ = lean_usize_add(v_i_2604_, v___x_2630_);
v_i_2604_ = v___x_2631_;
v_b_2605_ = v___x_2614_;
goto _start;
}
else
{
lean_dec(v___x_2600_);
goto v___jp_2621_;
}
}
else
{
lean_object* v_a_2633_; lean_object* v___x_2635_; uint8_t v_isShared_2636_; uint8_t v_isSharedCheck_2640_; 
lean_dec(v___x_2600_);
v_a_2633_ = lean_ctor_get(v___y_2627_, 0);
v_isSharedCheck_2640_ = !lean_is_exclusive(v___y_2627_);
if (v_isSharedCheck_2640_ == 0)
{
v___x_2635_ = v___y_2627_;
v_isShared_2636_ = v_isSharedCheck_2640_;
goto v_resetjp_2634_;
}
else
{
lean_inc(v_a_2633_);
lean_dec(v___y_2627_);
v___x_2635_ = lean_box(0);
v_isShared_2636_ = v_isSharedCheck_2640_;
goto v_resetjp_2634_;
}
v_resetjp_2634_:
{
lean_object* v___x_2638_; 
if (v_isShared_2636_ == 0)
{
v___x_2638_ = v___x_2635_;
goto v_reusejp_2637_;
}
else
{
lean_object* v_reuseFailAlloc_2639_; 
v_reuseFailAlloc_2639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2639_, 0, v_a_2633_);
v___x_2638_ = v_reuseFailAlloc_2639_;
goto v_reusejp_2637_;
}
v_reusejp_2637_:
{
return v___x_2638_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___boxed(lean_object* v_fst_2677_, lean_object* v_projInfo_x3f_2678_, lean_object* v___x_2679_, lean_object* v_argVars_2680_, lean_object* v_as_2681_, lean_object* v_sz_2682_, lean_object* v_i_2683_, lean_object* v_b_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_){
_start:
{
size_t v_sz_boxed_2690_; size_t v_i_boxed_2691_; lean_object* v_res_2692_; 
v_sz_boxed_2690_ = lean_unbox_usize(v_sz_2682_);
lean_dec(v_sz_2682_);
v_i_boxed_2691_ = lean_unbox_usize(v_i_2683_);
lean_dec(v_i_2683_);
v_res_2692_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7(v_fst_2677_, v_projInfo_x3f_2678_, v___x_2679_, v_argVars_2680_, v_as_2681_, v_sz_boxed_2690_, v_i_boxed_2691_, v_b_2684_, v___y_2685_, v___y_2686_, v___y_2687_, v___y_2688_);
lean_dec(v___y_2688_);
lean_dec_ref(v___y_2687_);
lean_dec(v___y_2686_);
lean_dec_ref(v___y_2685_);
lean_dec_ref(v_as_2681_);
lean_dec_ref(v_argVars_2680_);
lean_dec(v_projInfo_x3f_2678_);
lean_dec_ref(v_fst_2677_);
return v_res_2692_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__0(lean_object* v_next_2693_, lean_object* v_as_2694_, size_t v_i_2695_, size_t v_stop_2696_, lean_object* v_b_2697_){
_start:
{
lean_object* v___y_2699_; uint8_t v___x_2703_; 
v___x_2703_ = lean_usize_dec_eq(v_i_2695_, v_stop_2696_);
if (v___x_2703_ == 0)
{
lean_object* v___x_2704_; uint8_t v___x_2705_; 
v___x_2704_ = lean_array_uget_borrowed(v_as_2694_, v_i_2695_);
v___x_2705_ = lean_nat_dec_eq(v___x_2704_, v_next_2693_);
if (v___x_2705_ == 0)
{
lean_object* v___x_2706_; 
lean_inc(v___x_2704_);
v___x_2706_ = lean_array_push(v_b_2697_, v___x_2704_);
v___y_2699_ = v___x_2706_;
goto v___jp_2698_;
}
else
{
v___y_2699_ = v_b_2697_;
goto v___jp_2698_;
}
}
else
{
return v_b_2697_;
}
v___jp_2698_:
{
size_t v___x_2700_; size_t v___x_2701_; 
v___x_2700_ = ((size_t)1ULL);
v___x_2701_ = lean_usize_add(v_i_2695_, v___x_2700_);
v_i_2695_ = v___x_2701_;
v_b_2697_ = v___y_2699_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__0___boxed(lean_object* v_next_2707_, lean_object* v_as_2708_, lean_object* v_i_2709_, lean_object* v_stop_2710_, lean_object* v_b_2711_){
_start:
{
size_t v_i_boxed_2712_; size_t v_stop_boxed_2713_; lean_object* v_res_2714_; 
v_i_boxed_2712_ = lean_unbox_usize(v_i_2709_);
lean_dec(v_i_2709_);
v_stop_boxed_2713_ = lean_unbox_usize(v_stop_2710_);
lean_dec(v_stop_2710_);
v_res_2714_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__0(v_next_2707_, v_as_2708_, v_i_boxed_2712_, v_stop_boxed_2713_, v_b_2711_);
lean_dec_ref(v_as_2708_);
lean_dec(v_next_2707_);
return v_res_2714_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__0(lean_object* v_fst_2715_, lean_object* v___x_2716_, lean_object* v_fst_2717_, lean_object* v_argVars_2718_, lean_object* v_snd_2719_, lean_object* v_next_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_){
_start:
{
lean_object* v___x_2726_; lean_object* v___y_2728_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; uint8_t v___x_2771_; 
lean_inc(v_next_2720_);
v___x_2726_ = lean_array_push(v_fst_2715_, v_next_2720_);
v___x_2768_ = lean_unsigned_to_nat(0u);
v___x_2769_ = lean_array_get_size(v_snd_2719_);
v___x_2770_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__1));
v___x_2771_ = lean_nat_dec_lt(v___x_2768_, v___x_2769_);
if (v___x_2771_ == 0)
{
v___y_2728_ = v___x_2770_;
goto v___jp_2727_;
}
else
{
size_t v___x_2772_; size_t v___x_2773_; lean_object* v___x_2774_; 
v___x_2772_ = ((size_t)0ULL);
v___x_2773_ = lean_usize_of_nat(v___x_2769_);
v___x_2774_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__0(v_next_2720_, v_snd_2719_, v___x_2772_, v___x_2773_, v___x_2770_);
v___y_2728_ = v___x_2774_;
goto v___jp_2727_;
}
v___jp_2727_:
{
lean_object* v___x_2729_; lean_object* v___x_2730_; 
v___x_2729_ = lean_array_get_borrowed(v___x_2716_, v_fst_2717_, v_next_2720_);
lean_dec(v_next_2720_);
lean_inc(v___y_2724_);
lean_inc_ref(v___y_2723_);
lean_inc(v___y_2722_);
lean_inc_ref(v___y_2721_);
lean_inc(v___x_2729_);
v___x_2730_ = lean_infer_type(v___x_2729_, v___y_2721_, v___y_2722_, v___y_2723_, v___y_2724_);
if (lean_obj_tag(v___x_2730_) == 0)
{
lean_object* v_a_2731_; lean_object* v___x_2732_; 
v_a_2731_ = lean_ctor_get(v___x_2730_, 0);
lean_inc(v_a_2731_);
lean_dec_ref_known(v___x_2730_, 1);
v___x_2732_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn(v_fst_2717_, v_argVars_2718_, v_a_2731_, v___y_2721_, v___y_2722_, v___y_2723_, v___y_2724_);
if (lean_obj_tag(v___x_2732_) == 0)
{
lean_object* v___x_2733_; 
lean_dec_ref_known(v___x_2732_, 1);
lean_inc(v___x_2729_);
v___x_2733_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn(v_fst_2717_, v_argVars_2718_, v___x_2729_, v___y_2721_, v___y_2722_, v___y_2723_, v___y_2724_);
if (lean_obj_tag(v___x_2733_) == 0)
{
lean_object* v___x_2735_; uint8_t v_isShared_2736_; uint8_t v_isSharedCheck_2742_; 
v_isSharedCheck_2742_ = !lean_is_exclusive(v___x_2733_);
if (v_isSharedCheck_2742_ == 0)
{
lean_object* v_unused_2743_; 
v_unused_2743_ = lean_ctor_get(v___x_2733_, 0);
lean_dec(v_unused_2743_);
v___x_2735_ = v___x_2733_;
v_isShared_2736_ = v_isSharedCheck_2742_;
goto v_resetjp_2734_;
}
else
{
lean_dec(v___x_2733_);
v___x_2735_ = lean_box(0);
v_isShared_2736_ = v_isSharedCheck_2742_;
goto v_resetjp_2734_;
}
v_resetjp_2734_:
{
lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2740_; 
v___x_2737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2737_, 0, v___x_2726_);
lean_ctor_set(v___x_2737_, 1, v___y_2728_);
v___x_2738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2738_, 0, v___x_2737_);
if (v_isShared_2736_ == 0)
{
lean_ctor_set(v___x_2735_, 0, v___x_2738_);
v___x_2740_ = v___x_2735_;
goto v_reusejp_2739_;
}
else
{
lean_object* v_reuseFailAlloc_2741_; 
v_reuseFailAlloc_2741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2741_, 0, v___x_2738_);
v___x_2740_ = v_reuseFailAlloc_2741_;
goto v_reusejp_2739_;
}
v_reusejp_2739_:
{
return v___x_2740_;
}
}
}
else
{
lean_object* v_a_2744_; lean_object* v___x_2746_; uint8_t v_isShared_2747_; uint8_t v_isSharedCheck_2751_; 
lean_dec_ref(v___y_2728_);
lean_dec_ref(v___x_2726_);
v_a_2744_ = lean_ctor_get(v___x_2733_, 0);
v_isSharedCheck_2751_ = !lean_is_exclusive(v___x_2733_);
if (v_isSharedCheck_2751_ == 0)
{
v___x_2746_ = v___x_2733_;
v_isShared_2747_ = v_isSharedCheck_2751_;
goto v_resetjp_2745_;
}
else
{
lean_inc(v_a_2744_);
lean_dec(v___x_2733_);
v___x_2746_ = lean_box(0);
v_isShared_2747_ = v_isSharedCheck_2751_;
goto v_resetjp_2745_;
}
v_resetjp_2745_:
{
lean_object* v___x_2749_; 
if (v_isShared_2747_ == 0)
{
v___x_2749_ = v___x_2746_;
goto v_reusejp_2748_;
}
else
{
lean_object* v_reuseFailAlloc_2750_; 
v_reuseFailAlloc_2750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2750_, 0, v_a_2744_);
v___x_2749_ = v_reuseFailAlloc_2750_;
goto v_reusejp_2748_;
}
v_reusejp_2748_:
{
return v___x_2749_;
}
}
}
}
else
{
lean_object* v_a_2752_; lean_object* v___x_2754_; uint8_t v_isShared_2755_; uint8_t v_isSharedCheck_2759_; 
lean_dec_ref(v___y_2728_);
lean_dec_ref(v___x_2726_);
v_a_2752_ = lean_ctor_get(v___x_2732_, 0);
v_isSharedCheck_2759_ = !lean_is_exclusive(v___x_2732_);
if (v_isSharedCheck_2759_ == 0)
{
v___x_2754_ = v___x_2732_;
v_isShared_2755_ = v_isSharedCheck_2759_;
goto v_resetjp_2753_;
}
else
{
lean_inc(v_a_2752_);
lean_dec(v___x_2732_);
v___x_2754_ = lean_box(0);
v_isShared_2755_ = v_isSharedCheck_2759_;
goto v_resetjp_2753_;
}
v_resetjp_2753_:
{
lean_object* v___x_2757_; 
if (v_isShared_2755_ == 0)
{
v___x_2757_ = v___x_2754_;
goto v_reusejp_2756_;
}
else
{
lean_object* v_reuseFailAlloc_2758_; 
v_reuseFailAlloc_2758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2758_, 0, v_a_2752_);
v___x_2757_ = v_reuseFailAlloc_2758_;
goto v_reusejp_2756_;
}
v_reusejp_2756_:
{
return v___x_2757_;
}
}
}
}
else
{
lean_object* v_a_2760_; lean_object* v___x_2762_; uint8_t v_isShared_2763_; uint8_t v_isSharedCheck_2767_; 
lean_dec_ref(v___y_2728_);
lean_dec_ref(v___x_2726_);
v_a_2760_ = lean_ctor_get(v___x_2730_, 0);
v_isSharedCheck_2767_ = !lean_is_exclusive(v___x_2730_);
if (v_isSharedCheck_2767_ == 0)
{
v___x_2762_ = v___x_2730_;
v_isShared_2763_ = v_isSharedCheck_2767_;
goto v_resetjp_2761_;
}
else
{
lean_inc(v_a_2760_);
lean_dec(v___x_2730_);
v___x_2762_ = lean_box(0);
v_isShared_2763_ = v_isSharedCheck_2767_;
goto v_resetjp_2761_;
}
v_resetjp_2761_:
{
lean_object* v___x_2765_; 
if (v_isShared_2763_ == 0)
{
v___x_2765_ = v___x_2762_;
goto v_reusejp_2764_;
}
else
{
lean_object* v_reuseFailAlloc_2766_; 
v_reuseFailAlloc_2766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2766_, 0, v_a_2760_);
v___x_2765_ = v_reuseFailAlloc_2766_;
goto v_reusejp_2764_;
}
v_reusejp_2764_:
{
return v___x_2765_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__0___boxed(lean_object* v_fst_2775_, lean_object* v___x_2776_, lean_object* v_fst_2777_, lean_object* v_argVars_2778_, lean_object* v_snd_2779_, lean_object* v_next_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_){
_start:
{
lean_object* v_res_2786_; 
v_res_2786_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__0(v_fst_2775_, v___x_2776_, v_fst_2777_, v_argVars_2778_, v_snd_2779_, v_next_2780_, v___y_2781_, v___y_2782_, v___y_2783_, v___y_2784_);
lean_dec(v___y_2784_);
lean_dec_ref(v___y_2783_);
lean_dec(v___y_2782_);
lean_dec_ref(v___y_2781_);
lean_dec(v_snd_2779_);
lean_dec_ref(v_argVars_2778_);
lean_dec_ref(v_fst_2777_);
lean_dec_ref(v___x_2776_);
return v_res_2786_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__1(lean_object* v___x_2787_, lean_object* v_snd_2788_, lean_object* v___f_2789_, lean_object* v_____r_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_){
_start:
{
lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; 
v___x_2796_ = lean_unsigned_to_nat(0u);
v___x_2797_ = lean_array_get_borrowed(v___x_2787_, v_snd_2788_, v___x_2796_);
lean_inc(v___y_2794_);
lean_inc_ref(v___y_2793_);
lean_inc(v___y_2792_);
lean_inc_ref(v___y_2791_);
lean_inc(v___x_2797_);
v___x_2798_ = lean_apply_6(v___f_2789_, v___x_2797_, v___y_2791_, v___y_2792_, v___y_2793_, v___y_2794_, lean_box(0));
return v___x_2798_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__1___boxed(lean_object* v___x_2799_, lean_object* v_snd_2800_, lean_object* v___f_2801_, lean_object* v_____r_2802_, lean_object* v___y_2803_, lean_object* v___y_2804_, lean_object* v___y_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_){
_start:
{
lean_object* v_res_2808_; 
v_res_2808_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__1(v___x_2799_, v_snd_2800_, v___f_2801_, v_____r_2802_, v___y_2803_, v___y_2804_, v___y_2805_, v___y_2806_);
lean_dec(v___y_2806_);
lean_dec_ref(v___y_2805_);
lean_dec(v___y_2804_);
lean_dec_ref(v___y_2803_);
lean_dec(v_snd_2800_);
lean_dec(v___x_2799_);
return v_res_2808_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2(void){
_start:
{
lean_object* v___x_2812_; lean_object* v___x_2813_; 
v___x_2812_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__1));
v___x_2813_ = l_Lean_MessageData_ofFormat(v___x_2812_);
return v___x_2813_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__4(void){
_start:
{
lean_object* v___x_2815_; lean_object* v___x_2816_; 
v___x_2815_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__3));
v___x_2816_ = l_Lean_stringToMessageData(v___x_2815_);
return v___x_2816_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__6(void){
_start:
{
lean_object* v___x_2818_; lean_object* v___x_2819_; 
v___x_2818_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__5));
v___x_2819_ = l_Lean_stringToMessageData(v___x_2818_);
return v___x_2819_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__8(void){
_start:
{
lean_object* v___x_2821_; lean_object* v___x_2822_; 
v___x_2821_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__7));
v___x_2822_ = l_Lean_stringToMessageData(v___x_2821_);
return v___x_2822_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg(lean_object* v_fst_2823_, lean_object* v_argVars_2824_, lean_object* v_inst_2825_, lean_object* v_a_2826_, lean_object* v_projInfo_x3f_2827_, lean_object* v_a_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_){
_start:
{
lean_object* v___y_2835_; lean_object* v_fst_2855_; lean_object* v_snd_2856_; lean_object* v___x_2858_; uint8_t v_isShared_2859_; uint8_t v_isSharedCheck_2928_; 
v_fst_2855_ = lean_ctor_get(v_a_2828_, 0);
v_snd_2856_ = lean_ctor_get(v_a_2828_, 1);
v_isSharedCheck_2928_ = !lean_is_exclusive(v_a_2828_);
if (v_isSharedCheck_2928_ == 0)
{
v___x_2858_ = v_a_2828_;
v_isShared_2859_ = v_isSharedCheck_2928_;
goto v_resetjp_2857_;
}
else
{
lean_inc(v_snd_2856_);
lean_inc(v_fst_2855_);
lean_dec(v_a_2828_);
v___x_2858_ = lean_box(0);
v_isShared_2859_ = v_isSharedCheck_2928_;
goto v_resetjp_2857_;
}
v___jp_2834_:
{
if (lean_obj_tag(v___y_2835_) == 0)
{
lean_object* v_a_2836_; lean_object* v___x_2838_; uint8_t v_isShared_2839_; uint8_t v_isSharedCheck_2846_; 
v_a_2836_ = lean_ctor_get(v___y_2835_, 0);
v_isSharedCheck_2846_ = !lean_is_exclusive(v___y_2835_);
if (v_isSharedCheck_2846_ == 0)
{
v___x_2838_ = v___y_2835_;
v_isShared_2839_ = v_isSharedCheck_2846_;
goto v_resetjp_2837_;
}
else
{
lean_inc(v_a_2836_);
lean_dec(v___y_2835_);
v___x_2838_ = lean_box(0);
v_isShared_2839_ = v_isSharedCheck_2846_;
goto v_resetjp_2837_;
}
v_resetjp_2837_:
{
if (lean_obj_tag(v_a_2836_) == 0)
{
lean_object* v_a_2840_; lean_object* v___x_2842_; 
lean_dec_ref(v_a_2826_);
lean_dec_ref(v_inst_2825_);
lean_dec_ref(v_argVars_2824_);
lean_dec_ref(v_fst_2823_);
v_a_2840_ = lean_ctor_get(v_a_2836_, 0);
lean_inc(v_a_2840_);
lean_dec_ref_known(v_a_2836_, 1);
if (v_isShared_2839_ == 0)
{
lean_ctor_set(v___x_2838_, 0, v_a_2840_);
v___x_2842_ = v___x_2838_;
goto v_reusejp_2841_;
}
else
{
lean_object* v_reuseFailAlloc_2843_; 
v_reuseFailAlloc_2843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2843_, 0, v_a_2840_);
v___x_2842_ = v_reuseFailAlloc_2843_;
goto v_reusejp_2841_;
}
v_reusejp_2841_:
{
return v___x_2842_;
}
}
else
{
lean_object* v_a_2844_; 
lean_del_object(v___x_2838_);
v_a_2844_ = lean_ctor_get(v_a_2836_, 0);
lean_inc(v_a_2844_);
lean_dec_ref_known(v_a_2836_, 1);
v_a_2828_ = v_a_2844_;
goto _start;
}
}
}
else
{
lean_object* v_a_2847_; lean_object* v___x_2849_; uint8_t v_isShared_2850_; uint8_t v_isSharedCheck_2854_; 
lean_dec_ref(v_a_2826_);
lean_dec_ref(v_inst_2825_);
lean_dec_ref(v_argVars_2824_);
lean_dec_ref(v_fst_2823_);
v_a_2847_ = lean_ctor_get(v___y_2835_, 0);
v_isSharedCheck_2854_ = !lean_is_exclusive(v___y_2835_);
if (v_isSharedCheck_2854_ == 0)
{
v___x_2849_ = v___y_2835_;
v_isShared_2850_ = v_isSharedCheck_2854_;
goto v_resetjp_2848_;
}
else
{
lean_inc(v_a_2847_);
lean_dec(v___y_2835_);
v___x_2849_ = lean_box(0);
v_isShared_2850_ = v_isSharedCheck_2854_;
goto v_resetjp_2848_;
}
v_resetjp_2848_:
{
lean_object* v___x_2852_; 
if (v_isShared_2850_ == 0)
{
v___x_2852_ = v___x_2849_;
goto v_reusejp_2851_;
}
else
{
lean_object* v_reuseFailAlloc_2853_; 
v_reuseFailAlloc_2853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2853_, 0, v_a_2847_);
v___x_2852_ = v_reuseFailAlloc_2853_;
goto v_reusejp_2851_;
}
v_reusejp_2851_:
{
return v___x_2852_;
}
}
}
}
v_resetjp_2857_:
{
lean_object* v___x_2860_; lean_object* v___x_2861_; uint8_t v___x_2862_; 
v___x_2860_ = lean_array_get_size(v_snd_2856_);
v___x_2861_ = lean_unsigned_to_nat(0u);
v___x_2862_ = lean_nat_dec_eq(v___x_2860_, v___x_2861_);
if (v___x_2862_ == 0)
{
lean_object* v___x_2863_; lean_object* v___f_2864_; lean_object* v___x_2907_; size_t v_sz_2908_; size_t v___x_2909_; lean_object* v___x_2910_; 
lean_del_object(v___x_2858_);
v___x_2863_ = l_Lean_instInhabitedExpr;
lean_inc(v_snd_2856_);
lean_inc_ref(v_argVars_2824_);
lean_inc_ref(v_fst_2823_);
lean_inc(v_fst_2855_);
v___f_2864_ = lean_alloc_closure((void*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__0___boxed), 11, 5);
lean_closure_set(v___f_2864_, 0, v_fst_2855_);
lean_closure_set(v___f_2864_, 1, v___x_2863_);
lean_closure_set(v___f_2864_, 2, v_fst_2823_);
lean_closure_set(v___f_2864_, 3, v_argVars_2824_);
lean_closure_set(v___f_2864_, 4, v_snd_2856_);
v___x_2907_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___closed__0));
v_sz_2908_ = lean_array_size(v_snd_2856_);
v___x_2909_ = ((size_t)0ULL);
v___x_2910_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7(v_fst_2823_, v_projInfo_x3f_2827_, v___x_2860_, v_argVars_2824_, v_snd_2856_, v_sz_2908_, v___x_2909_, v___x_2907_, v___y_2829_, v___y_2830_, v___y_2831_, v___y_2832_);
if (lean_obj_tag(v___x_2910_) == 0)
{
lean_object* v_a_2911_; lean_object* v_fst_2912_; 
v_a_2911_ = lean_ctor_get(v___x_2910_, 0);
lean_inc(v_a_2911_);
lean_dec_ref_known(v___x_2910_, 1);
v_fst_2912_ = lean_ctor_get(v_a_2911_, 0);
lean_inc(v_fst_2912_);
lean_dec(v_a_2911_);
if (lean_obj_tag(v_fst_2912_) == 0)
{
lean_dec(v_fst_2855_);
goto v___jp_2865_;
}
else
{
lean_object* v_val_2913_; 
v_val_2913_ = lean_ctor_get(v_fst_2912_, 0);
lean_inc(v_val_2913_);
lean_dec_ref_known(v_fst_2912_, 1);
if (lean_obj_tag(v_val_2913_) == 0)
{
lean_dec(v_fst_2855_);
goto v___jp_2865_;
}
else
{
lean_object* v_val_2914_; lean_object* v___x_2915_; 
lean_dec_ref(v___f_2864_);
v_val_2914_ = lean_ctor_get(v_val_2913_, 0);
lean_inc(v_val_2914_);
lean_dec_ref_known(v_val_2913_, 1);
v___x_2915_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__0(v_fst_2855_, v___x_2863_, v_fst_2823_, v_argVars_2824_, v_snd_2856_, v_val_2914_, v___y_2829_, v___y_2830_, v___y_2831_, v___y_2832_);
lean_dec(v_snd_2856_);
v___y_2835_ = v___x_2915_;
goto v___jp_2834_;
}
}
}
else
{
lean_object* v_a_2916_; lean_object* v___x_2918_; uint8_t v_isShared_2919_; uint8_t v_isSharedCheck_2923_; 
lean_dec_ref(v___f_2864_);
lean_dec(v_snd_2856_);
lean_dec(v_fst_2855_);
lean_dec_ref(v_a_2826_);
lean_dec_ref(v_inst_2825_);
lean_dec_ref(v_argVars_2824_);
lean_dec_ref(v_fst_2823_);
v_a_2916_ = lean_ctor_get(v___x_2910_, 0);
v_isSharedCheck_2923_ = !lean_is_exclusive(v___x_2910_);
if (v_isSharedCheck_2923_ == 0)
{
v___x_2918_ = v___x_2910_;
v_isShared_2919_ = v_isSharedCheck_2923_;
goto v_resetjp_2917_;
}
else
{
lean_inc(v_a_2916_);
lean_dec(v___x_2910_);
v___x_2918_ = lean_box(0);
v_isShared_2919_ = v_isSharedCheck_2923_;
goto v_resetjp_2917_;
}
v_resetjp_2917_:
{
lean_object* v___x_2921_; 
if (v_isShared_2919_ == 0)
{
v___x_2921_ = v___x_2918_;
goto v_reusejp_2920_;
}
else
{
lean_object* v_reuseFailAlloc_2922_; 
v_reuseFailAlloc_2922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2922_, 0, v_a_2916_);
v___x_2921_ = v_reuseFailAlloc_2922_;
goto v_reusejp_2920_;
}
v_reusejp_2920_:
{
return v___x_2921_;
}
}
}
v___jp_2865_:
{
lean_object* v___x_2866_; lean_object* v___x_2867_; uint8_t v___x_2868_; 
v___x_2866_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_2831_);
v___x_2867_ = l_Lean_Meta_synthInstance_checkSynthOrder;
v___x_2868_ = l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1(v___x_2866_, v___x_2867_);
lean_dec_ref(v___x_2866_);
if (v___x_2868_ == 0)
{
lean_object* v___x_2869_; lean_object* v___x_2870_; 
v___x_2869_ = lean_box(0);
v___x_2870_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__1(v___x_2861_, v_snd_2856_, v___f_2864_, v___x_2869_, v___y_2829_, v___y_2830_, v___y_2831_, v___y_2832_);
lean_dec(v_snd_2856_);
v___y_2835_ = v___x_2870_;
goto v___jp_2834_;
}
else
{
size_t v_sz_2871_; size_t v___x_2872_; lean_object* v___x_2873_; 
v_sz_2871_ = lean_array_size(v_snd_2856_);
v___x_2872_ = ((size_t)0ULL);
lean_inc(v_snd_2856_);
v___x_2873_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3(v_fst_2823_, v___x_2868_, v_sz_2871_, v___x_2872_, v_snd_2856_, v___y_2829_, v___y_2830_, v___y_2831_, v___y_2832_);
if (lean_obj_tag(v___x_2873_) == 0)
{
lean_object* v_a_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; 
v_a_2874_ = lean_ctor_get(v___x_2873_, 0);
lean_inc(v_a_2874_);
lean_dec_ref_known(v___x_2873_, 1);
v___x_2875_ = lean_array_to_list(v_a_2874_);
v___x_2876_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2);
v___x_2877_ = l_Lean_MessageData_joinSep(v___x_2875_, v___x_2876_);
v___x_2878_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__4, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__4_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__4);
lean_inc_ref(v_inst_2825_);
v___x_2879_ = l_Lean_MessageData_ofExpr(v_inst_2825_);
v___x_2880_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2880_, 0, v___x_2878_);
lean_ctor_set(v___x_2880_, 1, v___x_2879_);
v___x_2881_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__6, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__6_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__6);
v___x_2882_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2882_, 0, v___x_2880_);
lean_ctor_set(v___x_2882_, 1, v___x_2881_);
lean_inc_ref(v_a_2826_);
v___x_2883_ = l_Lean_indentExpr(v_a_2826_);
v___x_2884_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2884_, 0, v___x_2882_);
lean_ctor_set(v___x_2884_, 1, v___x_2883_);
v___x_2885_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__8, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__8_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__8);
v___x_2886_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2886_, 0, v___x_2884_);
lean_ctor_set(v___x_2886_, 1, v___x_2885_);
v___x_2887_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2887_, 0, v___x_2886_);
lean_ctor_set(v___x_2887_, 1, v___x_2877_);
v___x_2888_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4___redArg(v___x_2887_, v___y_2829_, v___y_2830_, v___y_2831_, v___y_2832_);
if (lean_obj_tag(v___x_2888_) == 0)
{
lean_object* v_a_2889_; lean_object* v___x_2890_; 
v_a_2889_ = lean_ctor_get(v___x_2888_, 0);
lean_inc(v_a_2889_);
lean_dec_ref_known(v___x_2888_, 1);
v___x_2890_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__1(v___x_2861_, v_snd_2856_, v___f_2864_, v_a_2889_, v___y_2829_, v___y_2830_, v___y_2831_, v___y_2832_);
lean_dec(v_snd_2856_);
v___y_2835_ = v___x_2890_;
goto v___jp_2834_;
}
else
{
lean_object* v_a_2891_; lean_object* v___x_2893_; uint8_t v_isShared_2894_; uint8_t v_isSharedCheck_2898_; 
lean_dec_ref(v___f_2864_);
lean_dec(v_snd_2856_);
lean_dec_ref(v_a_2826_);
lean_dec_ref(v_inst_2825_);
lean_dec_ref(v_argVars_2824_);
lean_dec_ref(v_fst_2823_);
v_a_2891_ = lean_ctor_get(v___x_2888_, 0);
v_isSharedCheck_2898_ = !lean_is_exclusive(v___x_2888_);
if (v_isSharedCheck_2898_ == 0)
{
v___x_2893_ = v___x_2888_;
v_isShared_2894_ = v_isSharedCheck_2898_;
goto v_resetjp_2892_;
}
else
{
lean_inc(v_a_2891_);
lean_dec(v___x_2888_);
v___x_2893_ = lean_box(0);
v_isShared_2894_ = v_isSharedCheck_2898_;
goto v_resetjp_2892_;
}
v_resetjp_2892_:
{
lean_object* v___x_2896_; 
if (v_isShared_2894_ == 0)
{
v___x_2896_ = v___x_2893_;
goto v_reusejp_2895_;
}
else
{
lean_object* v_reuseFailAlloc_2897_; 
v_reuseFailAlloc_2897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2897_, 0, v_a_2891_);
v___x_2896_ = v_reuseFailAlloc_2897_;
goto v_reusejp_2895_;
}
v_reusejp_2895_:
{
return v___x_2896_;
}
}
}
}
else
{
lean_object* v_a_2899_; lean_object* v___x_2901_; uint8_t v_isShared_2902_; uint8_t v_isSharedCheck_2906_; 
lean_dec_ref(v___f_2864_);
lean_dec(v_snd_2856_);
lean_dec_ref(v_a_2826_);
lean_dec_ref(v_inst_2825_);
lean_dec_ref(v_argVars_2824_);
lean_dec_ref(v_fst_2823_);
v_a_2899_ = lean_ctor_get(v___x_2873_, 0);
v_isSharedCheck_2906_ = !lean_is_exclusive(v___x_2873_);
if (v_isSharedCheck_2906_ == 0)
{
v___x_2901_ = v___x_2873_;
v_isShared_2902_ = v_isSharedCheck_2906_;
goto v_resetjp_2900_;
}
else
{
lean_inc(v_a_2899_);
lean_dec(v___x_2873_);
v___x_2901_ = lean_box(0);
v_isShared_2902_ = v_isSharedCheck_2906_;
goto v_resetjp_2900_;
}
v_resetjp_2900_:
{
lean_object* v___x_2904_; 
if (v_isShared_2902_ == 0)
{
v___x_2904_ = v___x_2901_;
goto v_reusejp_2903_;
}
else
{
lean_object* v_reuseFailAlloc_2905_; 
v_reuseFailAlloc_2905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2905_, 0, v_a_2899_);
v___x_2904_ = v_reuseFailAlloc_2905_;
goto v_reusejp_2903_;
}
v_reusejp_2903_:
{
return v___x_2904_;
}
}
}
}
}
}
else
{
lean_object* v___x_2925_; 
lean_dec_ref(v_a_2826_);
lean_dec_ref(v_inst_2825_);
lean_dec_ref(v_argVars_2824_);
lean_dec_ref(v_fst_2823_);
if (v_isShared_2859_ == 0)
{
v___x_2925_ = v___x_2858_;
goto v_reusejp_2924_;
}
else
{
lean_object* v_reuseFailAlloc_2927_; 
v_reuseFailAlloc_2927_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2927_, 0, v_fst_2855_);
lean_ctor_set(v_reuseFailAlloc_2927_, 1, v_snd_2856_);
v___x_2925_ = v_reuseFailAlloc_2927_;
goto v_reusejp_2924_;
}
v_reusejp_2924_:
{
lean_object* v___x_2926_; 
v___x_2926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2926_, 0, v___x_2925_);
return v___x_2926_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___boxed(lean_object* v_fst_2929_, lean_object* v_argVars_2930_, lean_object* v_inst_2931_, lean_object* v_a_2932_, lean_object* v_projInfo_x3f_2933_, lean_object* v_a_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_){
_start:
{
lean_object* v_res_2940_; 
v_res_2940_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg(v_fst_2929_, v_argVars_2930_, v_inst_2931_, v_a_2932_, v_projInfo_x3f_2933_, v_a_2934_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_);
lean_dec(v___y_2938_);
lean_dec_ref(v___y_2937_);
lean_dec(v___y_2936_);
lean_dec_ref(v___y_2935_);
lean_dec(v_projInfo_x3f_2933_);
return v_res_2940_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__9(lean_object* v_fst_2941_, lean_object* v_a_2942_, lean_object* v_a_2943_){
_start:
{
if (lean_obj_tag(v_a_2942_) == 0)
{
lean_object* v___x_2944_; 
v___x_2944_ = l_List_reverse___redArg(v_a_2943_);
return v___x_2944_;
}
else
{
lean_object* v_head_2945_; lean_object* v_tail_2946_; lean_object* v___x_2948_; uint8_t v_isShared_2949_; uint8_t v_isSharedCheck_2961_; 
v_head_2945_ = lean_ctor_get(v_a_2942_, 0);
v_tail_2946_ = lean_ctor_get(v_a_2942_, 1);
v_isSharedCheck_2961_ = !lean_is_exclusive(v_a_2942_);
if (v_isSharedCheck_2961_ == 0)
{
v___x_2948_ = v_a_2942_;
v_isShared_2949_ = v_isSharedCheck_2961_;
goto v_resetjp_2947_;
}
else
{
lean_inc(v_tail_2946_);
lean_inc(v_head_2945_);
lean_dec(v_a_2942_);
v___x_2948_ = lean_box(0);
v_isShared_2949_ = v_isSharedCheck_2961_;
goto v_resetjp_2947_;
}
v_resetjp_2947_:
{
uint8_t v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; uint8_t v___x_2953_; uint8_t v___x_2954_; uint8_t v___x_2955_; 
v___x_2950_ = 0;
v___x_2951_ = lean_box(v___x_2950_);
v___x_2952_ = lean_array_get(v___x_2951_, v_fst_2941_, v_head_2945_);
lean_dec(v___x_2951_);
v___x_2953_ = 3;
v___x_2954_ = lean_unbox(v___x_2952_);
lean_dec(v___x_2952_);
v___x_2955_ = l_Lean_instBEqBinderInfo_beq(v___x_2954_, v___x_2953_);
if (v___x_2955_ == 0)
{
lean_del_object(v___x_2948_);
lean_dec(v_head_2945_);
v_a_2942_ = v_tail_2946_;
goto _start;
}
else
{
lean_object* v___x_2958_; 
if (v_isShared_2949_ == 0)
{
lean_ctor_set(v___x_2948_, 1, v_a_2943_);
v___x_2958_ = v___x_2948_;
goto v_reusejp_2957_;
}
else
{
lean_object* v_reuseFailAlloc_2960_; 
v_reuseFailAlloc_2960_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2960_, 0, v_head_2945_);
lean_ctor_set(v_reuseFailAlloc_2960_, 1, v_a_2943_);
v___x_2958_ = v_reuseFailAlloc_2960_;
goto v_reusejp_2957_;
}
v_reusejp_2957_:
{
v_a_2942_ = v_tail_2946_;
v_a_2943_ = v___x_2958_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__9___boxed(lean_object* v_fst_2962_, lean_object* v_a_2963_, lean_object* v_a_2964_){
_start:
{
lean_object* v_res_2965_; 
v_res_2965_ = l_List_filterTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__9(v_fst_2962_, v_a_2963_, v_a_2964_);
lean_dec_ref(v_fst_2962_);
return v_res_2965_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__11(lean_object* v_argVars_2966_, size_t v_sz_2967_, size_t v_i_2968_, lean_object* v_bs_2969_, lean_object* v___y_2970_, lean_object* v___y_2971_, lean_object* v___y_2972_, lean_object* v___y_2973_){
_start:
{
uint8_t v___x_2975_; 
v___x_2975_ = lean_usize_dec_lt(v_i_2968_, v_sz_2967_);
if (v___x_2975_ == 0)
{
lean_object* v___x_2976_; 
v___x_2976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2976_, 0, v_bs_2969_);
return v___x_2976_;
}
else
{
lean_object* v___x_2977_; lean_object* v_v_2978_; lean_object* v___x_2979_; lean_object* v_bs_x27_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; 
v___x_2977_ = l_Lean_instInhabitedExpr;
v_v_2978_ = lean_array_uget(v_bs_2969_, v_i_2968_);
v___x_2979_ = lean_unsigned_to_nat(0u);
v_bs_x27_2980_ = lean_array_uset(v_bs_2969_, v_i_2968_, v___x_2979_);
v___x_2981_ = lean_array_get_borrowed(v___x_2977_, v_argVars_2966_, v_v_2978_);
lean_dec(v_v_2978_);
lean_inc(v___y_2973_);
lean_inc_ref(v___y_2972_);
lean_inc(v___y_2971_);
lean_inc_ref(v___y_2970_);
lean_inc(v___x_2981_);
v___x_2982_ = lean_infer_type(v___x_2981_, v___y_2970_, v___y_2971_, v___y_2972_, v___y_2973_);
if (lean_obj_tag(v___x_2982_) == 0)
{
lean_object* v_a_2983_; lean_object* v___x_2984_; size_t v___x_2985_; size_t v___x_2986_; lean_object* v___x_2987_; 
v_a_2983_ = lean_ctor_get(v___x_2982_, 0);
lean_inc(v_a_2983_);
lean_dec_ref_known(v___x_2982_, 1);
v___x_2984_ = l_Lean_indentExpr(v_a_2983_);
v___x_2985_ = ((size_t)1ULL);
v___x_2986_ = lean_usize_add(v_i_2968_, v___x_2985_);
v___x_2987_ = lean_array_uset(v_bs_x27_2980_, v_i_2968_, v___x_2984_);
v_i_2968_ = v___x_2986_;
v_bs_2969_ = v___x_2987_;
goto _start;
}
else
{
lean_object* v_a_2989_; lean_object* v___x_2991_; uint8_t v_isShared_2992_; uint8_t v_isSharedCheck_2996_; 
lean_dec_ref(v_bs_x27_2980_);
v_a_2989_ = lean_ctor_get(v___x_2982_, 0);
v_isSharedCheck_2996_ = !lean_is_exclusive(v___x_2982_);
if (v_isSharedCheck_2996_ == 0)
{
v___x_2991_ = v___x_2982_;
v_isShared_2992_ = v_isSharedCheck_2996_;
goto v_resetjp_2990_;
}
else
{
lean_inc(v_a_2989_);
lean_dec(v___x_2982_);
v___x_2991_ = lean_box(0);
v_isShared_2992_ = v_isSharedCheck_2996_;
goto v_resetjp_2990_;
}
v_resetjp_2990_:
{
lean_object* v___x_2994_; 
if (v_isShared_2992_ == 0)
{
v___x_2994_ = v___x_2991_;
goto v_reusejp_2993_;
}
else
{
lean_object* v_reuseFailAlloc_2995_; 
v_reuseFailAlloc_2995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2995_, 0, v_a_2989_);
v___x_2994_ = v_reuseFailAlloc_2995_;
goto v_reusejp_2993_;
}
v_reusejp_2993_:
{
return v___x_2994_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__11___boxed(lean_object* v_argVars_2997_, lean_object* v_sz_2998_, lean_object* v_i_2999_, lean_object* v_bs_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_, lean_object* v___y_3005_){
_start:
{
size_t v_sz_boxed_3006_; size_t v_i_boxed_3007_; lean_object* v_res_3008_; 
v_sz_boxed_3006_ = lean_unbox_usize(v_sz_2998_);
lean_dec(v_sz_2998_);
v_i_boxed_3007_ = lean_unbox_usize(v_i_2999_);
lean_dec(v_i_2999_);
v_res_3008_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__11(v_argVars_2997_, v_sz_boxed_3006_, v_i_boxed_3007_, v_bs_3000_, v___y_3001_, v___y_3002_, v___y_3003_, v___y_3004_);
lean_dec(v___y_3004_);
lean_dec_ref(v___y_3003_);
lean_dec(v___y_3002_);
lean_dec_ref(v___y_3001_);
lean_dec_ref(v_argVars_2997_);
return v_res_3008_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__12(lean_object* v_a_3009_, lean_object* v_a_3010_){
_start:
{
if (lean_obj_tag(v_a_3009_) == 0)
{
lean_object* v___x_3011_; 
v___x_3011_ = l_List_reverse___redArg(v_a_3010_);
return v___x_3011_;
}
else
{
lean_object* v_head_3012_; lean_object* v_tail_3013_; lean_object* v___x_3015_; uint8_t v_isShared_3016_; uint8_t v_isSharedCheck_3024_; 
v_head_3012_ = lean_ctor_get(v_a_3009_, 0);
v_tail_3013_ = lean_ctor_get(v_a_3009_, 1);
v_isSharedCheck_3024_ = !lean_is_exclusive(v_a_3009_);
if (v_isSharedCheck_3024_ == 0)
{
v___x_3015_ = v_a_3009_;
v_isShared_3016_ = v_isSharedCheck_3024_;
goto v_resetjp_3014_;
}
else
{
lean_inc(v_tail_3013_);
lean_inc(v_head_3012_);
lean_dec(v_a_3009_);
v___x_3015_ = lean_box(0);
v_isShared_3016_ = v_isSharedCheck_3024_;
goto v_resetjp_3014_;
}
v_resetjp_3014_:
{
lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3021_; 
v___x_3017_ = l_Nat_reprFast(v_head_3012_);
v___x_3018_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3018_, 0, v___x_3017_);
v___x_3019_ = l_Lean_MessageData_ofFormat(v___x_3018_);
if (v_isShared_3016_ == 0)
{
lean_ctor_set(v___x_3015_, 1, v_a_3010_);
lean_ctor_set(v___x_3015_, 0, v___x_3019_);
v___x_3021_ = v___x_3015_;
goto v_reusejp_3020_;
}
else
{
lean_object* v_reuseFailAlloc_3023_; 
v_reuseFailAlloc_3023_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3023_, 0, v___x_3019_);
lean_ctor_set(v_reuseFailAlloc_3023_, 1, v_a_3010_);
v___x_3021_ = v_reuseFailAlloc_3023_;
goto v_reusejp_3020_;
}
v_reusejp_3020_:
{
v_a_3009_ = v_tail_3013_;
v_a_3010_ = v___x_3021_;
goto _start;
}
}
}
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__0(void){
_start:
{
lean_object* v___x_3025_; double v___x_3026_; 
v___x_3025_ = lean_unsigned_to_nat(0u);
v___x_3026_ = lean_float_of_nat(v___x_3025_);
return v___x_3026_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13(lean_object* v_cls_3029_, lean_object* v_msg_3030_, lean_object* v___y_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_, lean_object* v___y_3034_){
_start:
{
lean_object* v_ref_3036_; lean_object* v___x_3037_; lean_object* v_a_3038_; lean_object* v___x_3040_; uint8_t v_isShared_3041_; uint8_t v_isSharedCheck_3083_; 
v_ref_3036_ = lean_ctor_get(v___y_3033_, 2);
v___x_3037_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4_spec__4(v_msg_3030_, v___y_3031_, v___y_3032_, v___y_3033_, v___y_3034_);
v_a_3038_ = lean_ctor_get(v___x_3037_, 0);
v_isSharedCheck_3083_ = !lean_is_exclusive(v___x_3037_);
if (v_isSharedCheck_3083_ == 0)
{
v___x_3040_ = v___x_3037_;
v_isShared_3041_ = v_isSharedCheck_3083_;
goto v_resetjp_3039_;
}
else
{
lean_inc(v_a_3038_);
lean_dec(v___x_3037_);
v___x_3040_ = lean_box(0);
v_isShared_3041_ = v_isSharedCheck_3083_;
goto v_resetjp_3039_;
}
v_resetjp_3039_:
{
lean_object* v___x_3042_; lean_object* v_traceState_3043_; lean_object* v_env_3044_; lean_object* v_nextMacroScope_3045_; lean_object* v_ngen_3046_; lean_object* v_auxDeclNGen_3047_; lean_object* v_cache_3048_; lean_object* v_recordedDeps_3049_; lean_object* v_messages_3050_; lean_object* v_infoState_3051_; lean_object* v_snapshotTasks_3052_; lean_object* v___x_3054_; uint8_t v_isShared_3055_; uint8_t v_isSharedCheck_3082_; 
v___x_3042_ = lean_st_ref_take(v___y_3034_);
v_traceState_3043_ = lean_ctor_get(v___x_3042_, 4);
v_env_3044_ = lean_ctor_get(v___x_3042_, 0);
v_nextMacroScope_3045_ = lean_ctor_get(v___x_3042_, 1);
v_ngen_3046_ = lean_ctor_get(v___x_3042_, 2);
v_auxDeclNGen_3047_ = lean_ctor_get(v___x_3042_, 3);
v_cache_3048_ = lean_ctor_get(v___x_3042_, 5);
v_recordedDeps_3049_ = lean_ctor_get(v___x_3042_, 6);
v_messages_3050_ = lean_ctor_get(v___x_3042_, 7);
v_infoState_3051_ = lean_ctor_get(v___x_3042_, 8);
v_snapshotTasks_3052_ = lean_ctor_get(v___x_3042_, 9);
v_isSharedCheck_3082_ = !lean_is_exclusive(v___x_3042_);
if (v_isSharedCheck_3082_ == 0)
{
v___x_3054_ = v___x_3042_;
v_isShared_3055_ = v_isSharedCheck_3082_;
goto v_resetjp_3053_;
}
else
{
lean_inc(v_snapshotTasks_3052_);
lean_inc(v_infoState_3051_);
lean_inc(v_messages_3050_);
lean_inc(v_recordedDeps_3049_);
lean_inc(v_cache_3048_);
lean_inc(v_traceState_3043_);
lean_inc(v_auxDeclNGen_3047_);
lean_inc(v_ngen_3046_);
lean_inc(v_nextMacroScope_3045_);
lean_inc(v_env_3044_);
lean_dec(v___x_3042_);
v___x_3054_ = lean_box(0);
v_isShared_3055_ = v_isSharedCheck_3082_;
goto v_resetjp_3053_;
}
v_resetjp_3053_:
{
uint64_t v_tid_3056_; lean_object* v_traces_3057_; lean_object* v___x_3059_; uint8_t v_isShared_3060_; uint8_t v_isSharedCheck_3081_; 
v_tid_3056_ = lean_ctor_get_uint64(v_traceState_3043_, sizeof(void*)*1);
v_traces_3057_ = lean_ctor_get(v_traceState_3043_, 0);
v_isSharedCheck_3081_ = !lean_is_exclusive(v_traceState_3043_);
if (v_isSharedCheck_3081_ == 0)
{
v___x_3059_ = v_traceState_3043_;
v_isShared_3060_ = v_isSharedCheck_3081_;
goto v_resetjp_3058_;
}
else
{
lean_inc(v_traces_3057_);
lean_dec(v_traceState_3043_);
v___x_3059_ = lean_box(0);
v_isShared_3060_ = v_isSharedCheck_3081_;
goto v_resetjp_3058_;
}
v_resetjp_3058_:
{
lean_object* v___x_3061_; lean_object* v___x_3062_; double v___x_3063_; uint8_t v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3072_; 
v___x_3061_ = lean_box(0);
v___x_3062_ = lean_box(0);
v___x_3063_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__0);
v___x_3064_ = 0;
v___x_3065_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__0));
v___x_3066_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3066_, 0, v_cls_3029_);
lean_ctor_set(v___x_3066_, 1, v___x_3062_);
lean_ctor_set(v___x_3066_, 2, v___x_3065_);
lean_ctor_set_float(v___x_3066_, sizeof(void*)*3, v___x_3063_);
lean_ctor_set_float(v___x_3066_, sizeof(void*)*3 + 8, v___x_3063_);
lean_ctor_set_uint8(v___x_3066_, sizeof(void*)*3 + 16, v___x_3064_);
v___x_3067_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__1));
v___x_3068_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3068_, 0, v___x_3066_);
lean_ctor_set(v___x_3068_, 1, v_a_3038_);
lean_ctor_set(v___x_3068_, 2, v___x_3067_);
lean_inc(v_ref_3036_);
v___x_3069_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3069_, 0, v_ref_3036_);
lean_ctor_set(v___x_3069_, 1, v___x_3068_);
v___x_3070_ = l_Lean_PersistentArray_push___redArg(v_traces_3057_, v___x_3069_);
if (v_isShared_3060_ == 0)
{
lean_ctor_set(v___x_3059_, 0, v___x_3070_);
v___x_3072_ = v___x_3059_;
goto v_reusejp_3071_;
}
else
{
lean_object* v_reuseFailAlloc_3080_; 
v_reuseFailAlloc_3080_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3080_, 0, v___x_3070_);
lean_ctor_set_uint64(v_reuseFailAlloc_3080_, sizeof(void*)*1, v_tid_3056_);
v___x_3072_ = v_reuseFailAlloc_3080_;
goto v_reusejp_3071_;
}
v_reusejp_3071_:
{
lean_object* v___x_3074_; 
if (v_isShared_3055_ == 0)
{
lean_ctor_set(v___x_3054_, 4, v___x_3072_);
v___x_3074_ = v___x_3054_;
goto v_reusejp_3073_;
}
else
{
lean_object* v_reuseFailAlloc_3079_; 
v_reuseFailAlloc_3079_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3079_, 0, v_env_3044_);
lean_ctor_set(v_reuseFailAlloc_3079_, 1, v_nextMacroScope_3045_);
lean_ctor_set(v_reuseFailAlloc_3079_, 2, v_ngen_3046_);
lean_ctor_set(v_reuseFailAlloc_3079_, 3, v_auxDeclNGen_3047_);
lean_ctor_set(v_reuseFailAlloc_3079_, 4, v___x_3072_);
lean_ctor_set(v_reuseFailAlloc_3079_, 5, v_cache_3048_);
lean_ctor_set(v_reuseFailAlloc_3079_, 6, v_recordedDeps_3049_);
lean_ctor_set(v_reuseFailAlloc_3079_, 7, v_messages_3050_);
lean_ctor_set(v_reuseFailAlloc_3079_, 8, v_infoState_3051_);
lean_ctor_set(v_reuseFailAlloc_3079_, 9, v_snapshotTasks_3052_);
v___x_3074_ = v_reuseFailAlloc_3079_;
goto v_reusejp_3073_;
}
v_reusejp_3073_:
{
lean_object* v___x_3075_; lean_object* v___x_3077_; 
v___x_3075_ = lean_st_ref_put(v___y_3034_, v___x_3074_);
if (v_isShared_3041_ == 0)
{
lean_ctor_set(v___x_3040_, 0, v___x_3061_);
v___x_3077_ = v___x_3040_;
goto v_reusejp_3076_;
}
else
{
lean_object* v_reuseFailAlloc_3078_; 
v_reuseFailAlloc_3078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3078_, 0, v___x_3061_);
v___x_3077_ = v_reuseFailAlloc_3078_;
goto v_reusejp_3076_;
}
v_reusejp_3076_:
{
return v___x_3077_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___boxed(lean_object* v_cls_3084_, lean_object* v_msg_3085_, lean_object* v___y_3086_, lean_object* v___y_3087_, lean_object* v___y_3088_, lean_object* v___y_3089_, lean_object* v___y_3090_){
_start:
{
lean_object* v_res_3091_; 
v_res_3091_ = l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13(v_cls_3084_, v_msg_3085_, v___y_3086_, v___y_3087_, v___y_3088_, v___y_3089_);
lean_dec(v___y_3089_);
lean_dec_ref(v___y_3088_);
lean_dec(v___y_3087_);
lean_dec_ref(v___y_3086_);
return v_res_3091_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__4(void){
_start:
{
lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; 
v___x_3099_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__1));
v___x_3100_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__3));
v___x_3101_ = l_Lean_Name_append(v___x_3100_, v___x_3099_);
return v___x_3101_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__6(void){
_start:
{
lean_object* v___x_3103_; lean_object* v___x_3104_; 
v___x_3103_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__5));
v___x_3104_ = l_Lean_stringToMessageData(v___x_3103_);
return v___x_3104_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__8(void){
_start:
{
lean_object* v___x_3106_; lean_object* v___x_3107_; 
v___x_3106_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__7));
v___x_3107_ = l_Lean_stringToMessageData(v___x_3106_);
return v___x_3107_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__10(void){
_start:
{
lean_object* v___x_3109_; lean_object* v___x_3110_; 
v___x_3109_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__9));
v___x_3110_ = l_Lean_stringToMessageData(v___x_3109_);
return v___x_3110_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__12(void){
_start:
{
lean_object* v___x_3112_; lean_object* v___x_3113_; 
v___x_3112_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__11));
v___x_3113_ = l_Lean_stringToMessageData(v___x_3112_);
return v___x_3113_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0(lean_object* v_a_3114_, lean_object* v_fst_3115_, lean_object* v_fst_3116_, lean_object* v_inst_3117_, lean_object* v_a_3118_, lean_object* v_projInfo_x3f_3119_, lean_object* v_argVars_3120_, lean_object* v_x_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_, lean_object* v___y_3124_, lean_object* v___y_3125_){
_start:
{
lean_object* v___x_3127_; 
v___x_3127_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf(v_a_3114_, v___y_3122_, v___y_3123_, v___y_3124_, v___y_3125_);
if (lean_obj_tag(v___x_3127_) == 0)
{
lean_object* v_a_3128_; lean_object* v_dummy_3129_; lean_object* v_nargs_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; size_t v_sz_3138_; size_t v___x_3139_; lean_object* v___x_3140_; 
v_a_3128_ = lean_ctor_get(v___x_3127_, 0);
lean_inc(v_a_3128_);
lean_dec_ref_known(v___x_3127_, 1);
v_dummy_3129_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__0);
v_nargs_3130_ = l_Lean_Expr_getAppNumArgs(v_a_3114_);
lean_inc(v_nargs_3130_);
v___x_3131_ = lean_mk_array(v_nargs_3130_, v_dummy_3129_);
v___x_3132_ = lean_unsigned_to_nat(1u);
v___x_3133_ = lean_nat_sub(v_nargs_3130_, v___x_3132_);
lean_dec(v_nargs_3130_);
lean_inc_ref(v_a_3114_);
v___x_3134_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_3114_, v___x_3131_, v___x_3133_);
v___x_3135_ = lean_array_get_size(v___x_3134_);
v___x_3136_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__0));
v___x_3137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3137_, 0, v___x_3136_);
lean_ctor_set(v___x_3137_, 1, v___x_3135_);
v_sz_3138_ = lean_array_size(v___x_3134_);
v___x_3139_ = ((size_t)0ULL);
v___x_3140_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__8(v_a_3128_, v_fst_3115_, v_argVars_3120_, v___x_3134_, v_sz_3138_, v___x_3139_, v___x_3137_, v___y_3122_, v___y_3123_, v___y_3124_, v___y_3125_);
lean_dec_ref(v___x_3134_);
lean_dec(v_a_3128_);
if (lean_obj_tag(v___x_3140_) == 0)
{
lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; 
lean_dec_ref_known(v___x_3140_, 1);
v___x_3141_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__1));
v___x_3142_ = lean_array_get_size(v_fst_3115_);
v___x_3143_ = l_List_range(v___x_3142_);
v___x_3144_ = lean_box(0);
v___x_3145_ = l_List_filterTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__9(v_fst_3116_, v___x_3143_, v___x_3144_);
v___x_3146_ = lean_array_mk(v___x_3145_);
v___x_3147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3147_, 0, v___x_3141_);
lean_ctor_set(v___x_3147_, 1, v___x_3146_);
lean_inc_ref(v_inst_3117_);
lean_inc_ref(v_argVars_3120_);
v___x_3148_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg(v_fst_3115_, v_argVars_3120_, v_inst_3117_, v_a_3118_, v_projInfo_x3f_3119_, v___x_3147_, v___y_3122_, v___y_3123_, v___y_3124_, v___y_3125_);
if (lean_obj_tag(v___x_3148_) == 0)
{
lean_object* v_a_3149_; lean_object* v___x_3151_; uint8_t v_isShared_3152_; uint8_t v_isSharedCheck_3241_; 
v_a_3149_ = lean_ctor_get(v___x_3148_, 0);
v_isSharedCheck_3241_ = !lean_is_exclusive(v___x_3148_);
if (v_isSharedCheck_3241_ == 0)
{
v___x_3151_ = v___x_3148_;
v_isShared_3152_ = v_isSharedCheck_3241_;
goto v_resetjp_3150_;
}
else
{
lean_inc(v_a_3149_);
lean_dec(v___x_3148_);
v___x_3151_ = lean_box(0);
v_isShared_3152_ = v_isSharedCheck_3241_;
goto v_resetjp_3150_;
}
v_resetjp_3150_:
{
lean_object* v_fst_3153_; lean_object* v___x_3155_; uint8_t v_isShared_3156_; uint8_t v_isSharedCheck_3239_; 
v_fst_3153_ = lean_ctor_get(v_a_3149_, 0);
v_isSharedCheck_3239_ = !lean_is_exclusive(v_a_3149_);
if (v_isSharedCheck_3239_ == 0)
{
lean_object* v_unused_3240_; 
v_unused_3240_ = lean_ctor_get(v_a_3149_, 1);
lean_dec(v_unused_3240_);
v___x_3155_ = v_a_3149_;
v_isShared_3156_ = v_isSharedCheck_3239_;
goto v_resetjp_3154_;
}
else
{
lean_inc(v_fst_3153_);
lean_dec(v_a_3149_);
v___x_3155_ = lean_box(0);
v_isShared_3156_ = v_isSharedCheck_3239_;
goto v_resetjp_3154_;
}
v_resetjp_3154_:
{
lean_object* v___y_3158_; lean_object* v___y_3159_; lean_object* v___y_3160_; lean_object* v___y_3161_; lean_object* v___x_3220_; lean_object* v___x_3221_; uint8_t v___x_3222_; 
v___x_3220_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_3124_);
v___x_3221_ = l_Lean_Meta_synthInstance_checkSynthOrder;
v___x_3222_ = l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1(v___x_3220_, v___x_3221_);
lean_dec_ref(v___x_3220_);
if (v___x_3222_ == 0)
{
lean_dec_ref(v_a_3114_);
v___y_3158_ = v___y_3122_;
v___y_3159_ = v___y_3123_;
v___y_3160_ = v___y_3124_;
v___y_3161_ = v___y_3125_;
goto v___jp_3157_;
}
else
{
lean_object* v___x_3223_; lean_object* v_a_3224_; uint8_t v___x_3225_; 
v___x_3223_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___redArg(v_a_3114_, v___y_3123_);
v_a_3224_ = lean_ctor_get(v___x_3223_, 0);
lean_inc(v_a_3224_);
lean_dec_ref(v___x_3223_);
v___x_3225_ = l_Lean_Expr_hasExprMVar(v_a_3224_);
if (v___x_3225_ == 0)
{
lean_dec(v_a_3224_);
v___y_3158_ = v___y_3122_;
v___y_3159_ = v___y_3123_;
v___y_3160_ = v___y_3124_;
v___y_3161_ = v___y_3125_;
goto v___jp_3157_;
}
else
{
lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v_a_3231_; lean_object* v___x_3233_; uint8_t v_isShared_3234_; uint8_t v_isSharedCheck_3238_; 
lean_del_object(v___x_3155_);
lean_dec(v_fst_3153_);
lean_del_object(v___x_3151_);
lean_dec_ref(v_argVars_3120_);
lean_dec_ref(v_inst_3117_);
v___x_3226_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__12, &l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__12_once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__12);
v___x_3227_ = l_Lean_Expr_setPPExplicit(v_a_3224_, v___x_3225_);
v___x_3228_ = l_Lean_indentExpr(v___x_3227_);
v___x_3229_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3229_, 0, v___x_3226_);
lean_ctor_set(v___x_3229_, 1, v___x_3228_);
v___x_3230_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4___redArg(v___x_3229_, v___y_3122_, v___y_3123_, v___y_3124_, v___y_3125_);
v_a_3231_ = lean_ctor_get(v___x_3230_, 0);
v_isSharedCheck_3238_ = !lean_is_exclusive(v___x_3230_);
if (v_isSharedCheck_3238_ == 0)
{
v___x_3233_ = v___x_3230_;
v_isShared_3234_ = v_isSharedCheck_3238_;
goto v_resetjp_3232_;
}
else
{
lean_inc(v_a_3231_);
lean_dec(v___x_3230_);
v___x_3233_ = lean_box(0);
v_isShared_3234_ = v_isSharedCheck_3238_;
goto v_resetjp_3232_;
}
v_resetjp_3232_:
{
lean_object* v___x_3236_; 
if (v_isShared_3234_ == 0)
{
v___x_3236_ = v___x_3233_;
goto v_reusejp_3235_;
}
else
{
lean_object* v_reuseFailAlloc_3237_; 
v_reuseFailAlloc_3237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3237_, 0, v_a_3231_);
v___x_3236_ = v_reuseFailAlloc_3237_;
goto v_reusejp_3235_;
}
v_reusejp_3235_:
{
return v___x_3236_;
}
}
}
}
v___jp_3157_:
{
lean_object* v_toCold_3162_; lean_object* v_options_3163_; uint8_t v_hasTrace_3164_; 
v_toCold_3162_ = lean_ctor_get(v___y_3160_, 0);
v_options_3163_ = lean_ctor_get(v_toCold_3162_, 2);
v_hasTrace_3164_ = lean_ctor_get_uint8(v_options_3163_, sizeof(void*)*1);
if (v_hasTrace_3164_ == 0)
{
lean_object* v___x_3166_; 
lean_del_object(v___x_3155_);
lean_dec_ref(v_argVars_3120_);
lean_dec_ref(v_inst_3117_);
if (v_isShared_3152_ == 0)
{
lean_ctor_set(v___x_3151_, 0, v_fst_3153_);
v___x_3166_ = v___x_3151_;
goto v_reusejp_3165_;
}
else
{
lean_object* v_reuseFailAlloc_3167_; 
v_reuseFailAlloc_3167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3167_, 0, v_fst_3153_);
v___x_3166_ = v_reuseFailAlloc_3167_;
goto v_reusejp_3165_;
}
v_reusejp_3165_:
{
return v___x_3166_;
}
}
else
{
lean_object* v_inheritedTraceOptions_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; uint8_t v___x_3171_; 
v_inheritedTraceOptions_3168_ = lean_ctor_get(v_toCold_3162_, 11);
v___x_3169_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__1));
v___x_3170_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__4, &l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__4_once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__4);
v___x_3171_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3168_, v_options_3163_, v___x_3170_);
if (v___x_3171_ == 0)
{
lean_object* v___x_3173_; 
lean_del_object(v___x_3155_);
lean_dec_ref(v_argVars_3120_);
lean_dec_ref(v_inst_3117_);
if (v_isShared_3152_ == 0)
{
lean_ctor_set(v___x_3151_, 0, v_fst_3153_);
v___x_3173_ = v___x_3151_;
goto v_reusejp_3172_;
}
else
{
lean_object* v_reuseFailAlloc_3174_; 
v_reuseFailAlloc_3174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3174_, 0, v_fst_3153_);
v___x_3173_ = v_reuseFailAlloc_3174_;
goto v_reusejp_3172_;
}
v_reusejp_3172_:
{
return v___x_3173_;
}
}
else
{
size_t v_sz_3175_; lean_object* v___x_3176_; 
lean_del_object(v___x_3151_);
v_sz_3175_ = lean_array_size(v_fst_3153_);
lean_inc(v_fst_3153_);
v___x_3176_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__11(v_argVars_3120_, v_sz_3175_, v___x_3139_, v_fst_3153_, v___y_3158_, v___y_3159_, v___y_3160_, v___y_3161_);
lean_dec_ref(v_argVars_3120_);
if (lean_obj_tag(v___x_3176_) == 0)
{
lean_object* v_a_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3181_; 
v_a_3177_ = lean_ctor_get(v___x_3176_, 0);
lean_inc(v_a_3177_);
lean_dec_ref_known(v___x_3176_, 1);
v___x_3178_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__6, &l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__6_once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__6);
v___x_3179_ = l_Lean_MessageData_ofExpr(v_inst_3117_);
if (v_isShared_3156_ == 0)
{
lean_ctor_set_tag(v___x_3155_, 7);
lean_ctor_set(v___x_3155_, 1, v___x_3179_);
lean_ctor_set(v___x_3155_, 0, v___x_3178_);
v___x_3181_ = v___x_3155_;
goto v_reusejp_3180_;
}
else
{
lean_object* v_reuseFailAlloc_3211_; 
v_reuseFailAlloc_3211_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3211_, 0, v___x_3178_);
lean_ctor_set(v_reuseFailAlloc_3211_, 1, v___x_3179_);
v___x_3181_ = v_reuseFailAlloc_3211_;
goto v_reusejp_3180_;
}
v_reusejp_3180_:
{
lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; 
v___x_3182_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__8, &l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__8_once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__8);
v___x_3183_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3183_, 0, v___x_3181_);
lean_ctor_set(v___x_3183_, 1, v___x_3182_);
lean_inc(v_fst_3153_);
v___x_3184_ = lean_array_to_list(v_fst_3153_);
v___x_3185_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__12(v___x_3184_, v___x_3144_);
v___x_3186_ = l_Lean_MessageData_ofList(v___x_3185_);
v___x_3187_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3187_, 0, v___x_3183_);
lean_ctor_set(v___x_3187_, 1, v___x_3186_);
v___x_3188_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__10, &l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__10_once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__10);
v___x_3189_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3189_, 0, v___x_3187_);
lean_ctor_set(v___x_3189_, 1, v___x_3188_);
v___x_3190_ = lean_array_to_list(v_a_3177_);
v___x_3191_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2);
v___x_3192_ = l_Lean_MessageData_joinSep(v___x_3190_, v___x_3191_);
v___x_3193_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3193_, 0, v___x_3189_);
lean_ctor_set(v___x_3193_, 1, v___x_3192_);
v___x_3194_ = l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13(v___x_3169_, v___x_3193_, v___y_3158_, v___y_3159_, v___y_3160_, v___y_3161_);
if (lean_obj_tag(v___x_3194_) == 0)
{
lean_object* v___x_3196_; uint8_t v_isShared_3197_; uint8_t v_isSharedCheck_3201_; 
v_isSharedCheck_3201_ = !lean_is_exclusive(v___x_3194_);
if (v_isSharedCheck_3201_ == 0)
{
lean_object* v_unused_3202_; 
v_unused_3202_ = lean_ctor_get(v___x_3194_, 0);
lean_dec(v_unused_3202_);
v___x_3196_ = v___x_3194_;
v_isShared_3197_ = v_isSharedCheck_3201_;
goto v_resetjp_3195_;
}
else
{
lean_dec(v___x_3194_);
v___x_3196_ = lean_box(0);
v_isShared_3197_ = v_isSharedCheck_3201_;
goto v_resetjp_3195_;
}
v_resetjp_3195_:
{
lean_object* v___x_3199_; 
if (v_isShared_3197_ == 0)
{
lean_ctor_set(v___x_3196_, 0, v_fst_3153_);
v___x_3199_ = v___x_3196_;
goto v_reusejp_3198_;
}
else
{
lean_object* v_reuseFailAlloc_3200_; 
v_reuseFailAlloc_3200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3200_, 0, v_fst_3153_);
v___x_3199_ = v_reuseFailAlloc_3200_;
goto v_reusejp_3198_;
}
v_reusejp_3198_:
{
return v___x_3199_;
}
}
}
else
{
lean_object* v_a_3203_; lean_object* v___x_3205_; uint8_t v_isShared_3206_; uint8_t v_isSharedCheck_3210_; 
lean_dec(v_fst_3153_);
v_a_3203_ = lean_ctor_get(v___x_3194_, 0);
v_isSharedCheck_3210_ = !lean_is_exclusive(v___x_3194_);
if (v_isSharedCheck_3210_ == 0)
{
v___x_3205_ = v___x_3194_;
v_isShared_3206_ = v_isSharedCheck_3210_;
goto v_resetjp_3204_;
}
else
{
lean_inc(v_a_3203_);
lean_dec(v___x_3194_);
v___x_3205_ = lean_box(0);
v_isShared_3206_ = v_isSharedCheck_3210_;
goto v_resetjp_3204_;
}
v_resetjp_3204_:
{
lean_object* v___x_3208_; 
if (v_isShared_3206_ == 0)
{
v___x_3208_ = v___x_3205_;
goto v_reusejp_3207_;
}
else
{
lean_object* v_reuseFailAlloc_3209_; 
v_reuseFailAlloc_3209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3209_, 0, v_a_3203_);
v___x_3208_ = v_reuseFailAlloc_3209_;
goto v_reusejp_3207_;
}
v_reusejp_3207_:
{
return v___x_3208_;
}
}
}
}
}
else
{
lean_object* v_a_3212_; lean_object* v___x_3214_; uint8_t v_isShared_3215_; uint8_t v_isSharedCheck_3219_; 
lean_del_object(v___x_3155_);
lean_dec(v_fst_3153_);
lean_dec_ref(v_inst_3117_);
v_a_3212_ = lean_ctor_get(v___x_3176_, 0);
v_isSharedCheck_3219_ = !lean_is_exclusive(v___x_3176_);
if (v_isSharedCheck_3219_ == 0)
{
v___x_3214_ = v___x_3176_;
v_isShared_3215_ = v_isSharedCheck_3219_;
goto v_resetjp_3213_;
}
else
{
lean_inc(v_a_3212_);
lean_dec(v___x_3176_);
v___x_3214_ = lean_box(0);
v_isShared_3215_ = v_isSharedCheck_3219_;
goto v_resetjp_3213_;
}
v_resetjp_3213_:
{
lean_object* v___x_3217_; 
if (v_isShared_3215_ == 0)
{
v___x_3217_ = v___x_3214_;
goto v_reusejp_3216_;
}
else
{
lean_object* v_reuseFailAlloc_3218_; 
v_reuseFailAlloc_3218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3218_, 0, v_a_3212_);
v___x_3217_ = v_reuseFailAlloc_3218_;
goto v_reusejp_3216_;
}
v_reusejp_3216_:
{
return v___x_3217_;
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
lean_object* v_a_3242_; lean_object* v___x_3244_; uint8_t v_isShared_3245_; uint8_t v_isSharedCheck_3249_; 
lean_dec_ref(v_argVars_3120_);
lean_dec_ref(v_inst_3117_);
lean_dec_ref(v_a_3114_);
v_a_3242_ = lean_ctor_get(v___x_3148_, 0);
v_isSharedCheck_3249_ = !lean_is_exclusive(v___x_3148_);
if (v_isSharedCheck_3249_ == 0)
{
v___x_3244_ = v___x_3148_;
v_isShared_3245_ = v_isSharedCheck_3249_;
goto v_resetjp_3243_;
}
else
{
lean_inc(v_a_3242_);
lean_dec(v___x_3148_);
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
lean_object* v_a_3250_; lean_object* v___x_3252_; uint8_t v_isShared_3253_; uint8_t v_isSharedCheck_3257_; 
lean_dec_ref(v_argVars_3120_);
lean_dec_ref(v_a_3118_);
lean_dec_ref(v_inst_3117_);
lean_dec_ref(v_fst_3115_);
lean_dec_ref(v_a_3114_);
v_a_3250_ = lean_ctor_get(v___x_3140_, 0);
v_isSharedCheck_3257_ = !lean_is_exclusive(v___x_3140_);
if (v_isSharedCheck_3257_ == 0)
{
v___x_3252_ = v___x_3140_;
v_isShared_3253_ = v_isSharedCheck_3257_;
goto v_resetjp_3251_;
}
else
{
lean_inc(v_a_3250_);
lean_dec(v___x_3140_);
v___x_3252_ = lean_box(0);
v_isShared_3253_ = v_isSharedCheck_3257_;
goto v_resetjp_3251_;
}
v_resetjp_3251_:
{
lean_object* v___x_3255_; 
if (v_isShared_3253_ == 0)
{
v___x_3255_ = v___x_3252_;
goto v_reusejp_3254_;
}
else
{
lean_object* v_reuseFailAlloc_3256_; 
v_reuseFailAlloc_3256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3256_, 0, v_a_3250_);
v___x_3255_ = v_reuseFailAlloc_3256_;
goto v_reusejp_3254_;
}
v_reusejp_3254_:
{
return v___x_3255_;
}
}
}
}
else
{
lean_dec_ref(v_argVars_3120_);
lean_dec_ref(v_a_3118_);
lean_dec_ref(v_inst_3117_);
lean_dec_ref(v_fst_3115_);
lean_dec_ref(v_a_3114_);
return v___x_3127_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___boxed(lean_object* v_a_3258_, lean_object* v_fst_3259_, lean_object* v_fst_3260_, lean_object* v_inst_3261_, lean_object* v_a_3262_, lean_object* v_projInfo_x3f_3263_, lean_object* v_argVars_3264_, lean_object* v_x_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_, lean_object* v___y_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_){
_start:
{
lean_object* v_res_3271_; 
v_res_3271_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0(v_a_3258_, v_fst_3259_, v_fst_3260_, v_inst_3261_, v_a_3262_, v_projInfo_x3f_3263_, v_argVars_3264_, v_x_3265_, v___y_3266_, v___y_3267_, v___y_3268_, v___y_3269_);
lean_dec(v___y_3269_);
lean_dec_ref(v___y_3268_);
lean_dec(v___y_3267_);
lean_dec_ref(v___y_3266_);
lean_dec_ref(v_x_3265_);
lean_dec(v_projInfo_x3f_3263_);
lean_dec_ref(v_fst_3260_);
return v_res_3271_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__1(lean_object* v_inst_3272_, lean_object* v_projInfo_x3f_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_){
_start:
{
lean_object* v___x_3279_; 
lean_inc(v___y_3277_);
lean_inc_ref(v___y_3276_);
lean_inc(v___y_3275_);
lean_inc_ref(v___y_3274_);
lean_inc_ref(v_inst_3272_);
v___x_3279_ = lean_infer_type(v_inst_3272_, v___y_3274_, v___y_3275_, v___y_3276_, v___y_3277_);
if (lean_obj_tag(v___x_3279_) == 0)
{
lean_object* v_a_3280_; lean_object* v___x_3281_; uint8_t v___x_3282_; lean_object* v___x_3283_; 
v_a_3280_ = lean_ctor_get(v___x_3279_, 0);
lean_inc_n(v_a_3280_, 2);
lean_dec_ref_known(v___x_3279_, 1);
v___x_3281_ = lean_box(0);
v___x_3282_ = 0;
v___x_3283_ = l_Lean_Meta_forallMetaTelescopeReducing(v_a_3280_, v___x_3281_, v___x_3282_, v___y_3274_, v___y_3275_, v___y_3276_, v___y_3277_);
if (lean_obj_tag(v___x_3283_) == 0)
{
lean_object* v_a_3284_; lean_object* v_snd_3285_; lean_object* v_fst_3286_; lean_object* v_fst_3287_; lean_object* v_snd_3288_; lean_object* v___x_3289_; 
v_a_3284_ = lean_ctor_get(v___x_3283_, 0);
lean_inc(v_a_3284_);
lean_dec_ref_known(v___x_3283_, 1);
v_snd_3285_ = lean_ctor_get(v_a_3284_, 1);
lean_inc(v_snd_3285_);
v_fst_3286_ = lean_ctor_get(v_a_3284_, 0);
lean_inc(v_fst_3286_);
lean_dec(v_a_3284_);
v_fst_3287_ = lean_ctor_get(v_snd_3285_, 0);
lean_inc(v_fst_3287_);
v_snd_3288_ = lean_ctor_get(v_snd_3285_, 1);
lean_inc(v_snd_3288_);
lean_dec(v_snd_3285_);
lean_inc(v___y_3277_);
lean_inc_ref(v___y_3276_);
lean_inc(v___y_3275_);
lean_inc_ref(v___y_3274_);
v___x_3289_ = lean_whnf(v_snd_3288_, v___y_3274_, v___y_3275_, v___y_3276_, v___y_3277_);
if (lean_obj_tag(v___x_3289_) == 0)
{
lean_object* v_a_3290_; lean_object* v___f_3291_; uint8_t v___x_3292_; lean_object* v___x_3293_; 
v_a_3290_ = lean_ctor_get(v___x_3289_, 0);
lean_inc(v_a_3290_);
lean_dec_ref_known(v___x_3289_, 1);
lean_inc(v_a_3280_);
v___f_3291_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___boxed), 13, 6);
lean_closure_set(v___f_3291_, 0, v_a_3290_);
lean_closure_set(v___f_3291_, 1, v_fst_3286_);
lean_closure_set(v___f_3291_, 2, v_fst_3287_);
lean_closure_set(v___f_3291_, 3, v_inst_3272_);
lean_closure_set(v___f_3291_, 4, v_a_3280_);
lean_closure_set(v___f_3291_, 5, v_projInfo_x3f_3273_);
v___x_3292_ = 0;
v___x_3293_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(v_a_3280_, v___f_3291_, v___x_3292_, v___x_3292_, v___y_3274_, v___y_3275_, v___y_3276_, v___y_3277_);
lean_dec(v___y_3277_);
lean_dec_ref(v___y_3276_);
lean_dec(v___y_3275_);
lean_dec_ref(v___y_3274_);
return v___x_3293_;
}
else
{
lean_object* v_a_3294_; lean_object* v___x_3296_; uint8_t v_isShared_3297_; uint8_t v_isSharedCheck_3301_; 
lean_dec(v_fst_3287_);
lean_dec(v_fst_3286_);
lean_dec(v_a_3280_);
lean_dec(v___y_3277_);
lean_dec_ref(v___y_3276_);
lean_dec(v___y_3275_);
lean_dec_ref(v___y_3274_);
lean_dec(v_projInfo_x3f_3273_);
lean_dec_ref(v_inst_3272_);
v_a_3294_ = lean_ctor_get(v___x_3289_, 0);
v_isSharedCheck_3301_ = !lean_is_exclusive(v___x_3289_);
if (v_isSharedCheck_3301_ == 0)
{
v___x_3296_ = v___x_3289_;
v_isShared_3297_ = v_isSharedCheck_3301_;
goto v_resetjp_3295_;
}
else
{
lean_inc(v_a_3294_);
lean_dec(v___x_3289_);
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
else
{
lean_object* v_a_3302_; lean_object* v___x_3304_; uint8_t v_isShared_3305_; uint8_t v_isSharedCheck_3309_; 
lean_dec(v_a_3280_);
lean_dec(v___y_3277_);
lean_dec_ref(v___y_3276_);
lean_dec(v___y_3275_);
lean_dec_ref(v___y_3274_);
lean_dec(v_projInfo_x3f_3273_);
lean_dec_ref(v_inst_3272_);
v_a_3302_ = lean_ctor_get(v___x_3283_, 0);
v_isSharedCheck_3309_ = !lean_is_exclusive(v___x_3283_);
if (v_isSharedCheck_3309_ == 0)
{
v___x_3304_ = v___x_3283_;
v_isShared_3305_ = v_isSharedCheck_3309_;
goto v_resetjp_3303_;
}
else
{
lean_inc(v_a_3302_);
lean_dec(v___x_3283_);
v___x_3304_ = lean_box(0);
v_isShared_3305_ = v_isSharedCheck_3309_;
goto v_resetjp_3303_;
}
v_resetjp_3303_:
{
lean_object* v___x_3307_; 
if (v_isShared_3305_ == 0)
{
v___x_3307_ = v___x_3304_;
goto v_reusejp_3306_;
}
else
{
lean_object* v_reuseFailAlloc_3308_; 
v_reuseFailAlloc_3308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3308_, 0, v_a_3302_);
v___x_3307_ = v_reuseFailAlloc_3308_;
goto v_reusejp_3306_;
}
v_reusejp_3306_:
{
return v___x_3307_;
}
}
}
}
else
{
lean_object* v_a_3310_; lean_object* v___x_3312_; uint8_t v_isShared_3313_; uint8_t v_isSharedCheck_3317_; 
lean_dec(v___y_3277_);
lean_dec_ref(v___y_3276_);
lean_dec(v___y_3275_);
lean_dec_ref(v___y_3274_);
lean_dec(v_projInfo_x3f_3273_);
lean_dec_ref(v_inst_3272_);
v_a_3310_ = lean_ctor_get(v___x_3279_, 0);
v_isSharedCheck_3317_ = !lean_is_exclusive(v___x_3279_);
if (v_isSharedCheck_3317_ == 0)
{
v___x_3312_ = v___x_3279_;
v_isShared_3313_ = v_isSharedCheck_3317_;
goto v_resetjp_3311_;
}
else
{
lean_inc(v_a_3310_);
lean_dec(v___x_3279_);
v___x_3312_ = lean_box(0);
v_isShared_3313_ = v_isSharedCheck_3317_;
goto v_resetjp_3311_;
}
v_resetjp_3311_:
{
lean_object* v___x_3315_; 
if (v_isShared_3313_ == 0)
{
v___x_3315_ = v___x_3312_;
goto v_reusejp_3314_;
}
else
{
lean_object* v_reuseFailAlloc_3316_; 
v_reuseFailAlloc_3316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3316_, 0, v_a_3310_);
v___x_3315_ = v_reuseFailAlloc_3316_;
goto v_reusejp_3314_;
}
v_reusejp_3314_:
{
return v___x_3315_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__1___boxed(lean_object* v_inst_3318_, lean_object* v_projInfo_x3f_3319_, lean_object* v___y_3320_, lean_object* v___y_3321_, lean_object* v___y_3322_, lean_object* v___y_3323_, lean_object* v___y_3324_){
_start:
{
lean_object* v_res_3325_; 
v_res_3325_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__1(v_inst_3318_, v_projInfo_x3f_3319_, v___y_3320_, v___y_3321_, v___y_3322_, v___y_3323_);
return v_res_3325_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder(lean_object* v_inst_3326_, lean_object* v_projInfo_x3f_3327_, lean_object* v_a_3328_, lean_object* v_a_3329_, lean_object* v_a_3330_, lean_object* v_a_3331_){
_start:
{
lean_object* v___y_3334_; lean_object* v___x_3351_; uint8_t v_transparency_3352_; uint8_t v___x_3353_; uint8_t v___x_3354_; 
v___x_3351_ = l_Lean_Meta_Context_config(v_a_3328_);
v_transparency_3352_ = lean_ctor_get_uint8(v___x_3351_, 9);
lean_dec_ref(v___x_3351_);
v___x_3353_ = 2;
v___x_3354_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3352_, v___x_3353_);
if (v___x_3354_ == 0)
{
lean_object* v_keyedConfig_3355_; uint8_t v_trackZetaDelta_3356_; lean_object* v_zetaDeltaSet_3357_; lean_object* v_lctx_3358_; lean_object* v_localInstances_3359_; lean_object* v_defEqCtx_x3f_3360_; lean_object* v_synthPendingDepth_3361_; lean_object* v_customCanUnfoldPredicate_x3f_3362_; uint8_t v_univApprox_3363_; uint8_t v_inTypeClassResolution_3364_; uint8_t v_cacheInferType_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; 
v_keyedConfig_3355_ = lean_ctor_get(v_a_3328_, 0);
v_trackZetaDelta_3356_ = lean_ctor_get_uint8(v_a_3328_, sizeof(void*)*7);
v_zetaDeltaSet_3357_ = lean_ctor_get(v_a_3328_, 1);
v_lctx_3358_ = lean_ctor_get(v_a_3328_, 2);
v_localInstances_3359_ = lean_ctor_get(v_a_3328_, 3);
v_defEqCtx_x3f_3360_ = lean_ctor_get(v_a_3328_, 4);
v_synthPendingDepth_3361_ = lean_ctor_get(v_a_3328_, 5);
v_customCanUnfoldPredicate_x3f_3362_ = lean_ctor_get(v_a_3328_, 6);
v_univApprox_3363_ = lean_ctor_get_uint8(v_a_3328_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3364_ = lean_ctor_get_uint8(v_a_3328_, sizeof(void*)*7 + 2);
v_cacheInferType_3365_ = lean_ctor_get_uint8(v_a_3328_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_3355_);
v___x_3366_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3353_, v_keyedConfig_3355_);
lean_inc(v_customCanUnfoldPredicate_x3f_3362_);
lean_inc(v_synthPendingDepth_3361_);
lean_inc(v_defEqCtx_x3f_3360_);
lean_inc_ref(v_localInstances_3359_);
lean_inc_ref(v_lctx_3358_);
lean_inc(v_zetaDeltaSet_3357_);
v___x_3367_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3367_, 0, v___x_3366_);
lean_ctor_set(v___x_3367_, 1, v_zetaDeltaSet_3357_);
lean_ctor_set(v___x_3367_, 2, v_lctx_3358_);
lean_ctor_set(v___x_3367_, 3, v_localInstances_3359_);
lean_ctor_set(v___x_3367_, 4, v_defEqCtx_x3f_3360_);
lean_ctor_set(v___x_3367_, 5, v_synthPendingDepth_3361_);
lean_ctor_set(v___x_3367_, 6, v_customCanUnfoldPredicate_x3f_3362_);
lean_ctor_set_uint8(v___x_3367_, sizeof(void*)*7, v_trackZetaDelta_3356_);
lean_ctor_set_uint8(v___x_3367_, sizeof(void*)*7 + 1, v_univApprox_3363_);
lean_ctor_set_uint8(v___x_3367_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3364_);
lean_ctor_set_uint8(v___x_3367_, sizeof(void*)*7 + 3, v_cacheInferType_3365_);
lean_inc(v_a_3331_);
lean_inc_ref(v_a_3330_);
lean_inc(v_a_3329_);
v___x_3368_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__1(v_inst_3326_, v_projInfo_x3f_3327_, v___x_3367_, v_a_3329_, v_a_3330_, v_a_3331_);
v___y_3334_ = v___x_3368_;
goto v___jp_3333_;
}
else
{
lean_object* v___x_3369_; 
lean_inc(v_a_3331_);
lean_inc_ref(v_a_3330_);
lean_inc(v_a_3329_);
lean_inc_ref(v_a_3328_);
v___x_3369_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__1(v_inst_3326_, v_projInfo_x3f_3327_, v_a_3328_, v_a_3329_, v_a_3330_, v_a_3331_);
v___y_3334_ = v___x_3369_;
goto v___jp_3333_;
}
v___jp_3333_:
{
if (lean_obj_tag(v___y_3334_) == 0)
{
lean_object* v_a_3335_; lean_object* v___x_3337_; uint8_t v_isShared_3338_; uint8_t v_isSharedCheck_3342_; 
v_a_3335_ = lean_ctor_get(v___y_3334_, 0);
v_isSharedCheck_3342_ = !lean_is_exclusive(v___y_3334_);
if (v_isSharedCheck_3342_ == 0)
{
v___x_3337_ = v___y_3334_;
v_isShared_3338_ = v_isSharedCheck_3342_;
goto v_resetjp_3336_;
}
else
{
lean_inc(v_a_3335_);
lean_dec(v___y_3334_);
v___x_3337_ = lean_box(0);
v_isShared_3338_ = v_isSharedCheck_3342_;
goto v_resetjp_3336_;
}
v_resetjp_3336_:
{
lean_object* v___x_3340_; 
if (v_isShared_3338_ == 0)
{
v___x_3340_ = v___x_3337_;
goto v_reusejp_3339_;
}
else
{
lean_object* v_reuseFailAlloc_3341_; 
v_reuseFailAlloc_3341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3341_, 0, v_a_3335_);
v___x_3340_ = v_reuseFailAlloc_3341_;
goto v_reusejp_3339_;
}
v_reusejp_3339_:
{
return v___x_3340_;
}
}
}
else
{
lean_object* v_a_3343_; lean_object* v___x_3345_; uint8_t v_isShared_3346_; uint8_t v_isSharedCheck_3350_; 
v_a_3343_ = lean_ctor_get(v___y_3334_, 0);
v_isSharedCheck_3350_ = !lean_is_exclusive(v___y_3334_);
if (v_isSharedCheck_3350_ == 0)
{
v___x_3345_ = v___y_3334_;
v_isShared_3346_ = v_isSharedCheck_3350_;
goto v_resetjp_3344_;
}
else
{
lean_inc(v_a_3343_);
lean_dec(v___y_3334_);
v___x_3345_ = lean_box(0);
v_isShared_3346_ = v_isSharedCheck_3350_;
goto v_resetjp_3344_;
}
v_resetjp_3344_:
{
lean_object* v___x_3348_; 
if (v_isShared_3346_ == 0)
{
v___x_3348_ = v___x_3345_;
goto v_reusejp_3347_;
}
else
{
lean_object* v_reuseFailAlloc_3349_; 
v_reuseFailAlloc_3349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3349_, 0, v_a_3343_);
v___x_3348_ = v_reuseFailAlloc_3349_;
goto v_reusejp_3347_;
}
v_reusejp_3347_:
{
return v___x_3348_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___boxed(lean_object* v_inst_3370_, lean_object* v_projInfo_x3f_3371_, lean_object* v_a_3372_, lean_object* v_a_3373_, lean_object* v_a_3374_, lean_object* v_a_3375_, lean_object* v_a_3376_){
_start:
{
lean_object* v_res_3377_; 
v_res_3377_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder(v_inst_3370_, v_projInfo_x3f_3371_, v_a_3372_, v_a_3373_, v_a_3374_, v_a_3375_);
lean_dec(v_a_3375_);
lean_dec_ref(v_a_3374_);
lean_dec(v_a_3373_);
lean_dec_ref(v_a_3372_);
return v_res_3377_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4(lean_object* v_00_u03b1_3378_, lean_object* v_msg_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_){
_start:
{
lean_object* v___x_3385_; 
v___x_3385_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4___redArg(v_msg_3379_, v___y_3380_, v___y_3381_, v___y_3382_, v___y_3383_);
return v___x_3385_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4___boxed(lean_object* v_00_u03b1_3386_, lean_object* v_msg_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_){
_start:
{
lean_object* v_res_3393_; 
v_res_3393_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4(v_00_u03b1_3386_, v_msg_3387_, v___y_3388_, v___y_3389_, v___y_3390_, v___y_3391_);
lean_dec(v___y_3391_);
lean_dec_ref(v___y_3390_);
lean_dec(v___y_3389_);
lean_dec_ref(v___y_3388_);
return v_res_3393_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6(lean_object* v_upperBound_3394_, lean_object* v_a_3395_, lean_object* v___x_3396_, lean_object* v_inst_3397_, lean_object* v_R_3398_, lean_object* v_a_3399_, lean_object* v_b_3400_, lean_object* v_c_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_, lean_object* v___y_3404_, lean_object* v___y_3405_){
_start:
{
lean_object* v___x_3407_; 
v___x_3407_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v_upperBound_3394_, v_a_3395_, v___x_3396_, v_a_3399_, v_b_3400_);
return v___x_3407_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___boxed(lean_object* v_upperBound_3408_, lean_object* v_a_3409_, lean_object* v___x_3410_, lean_object* v_inst_3411_, lean_object* v_R_3412_, lean_object* v_a_3413_, lean_object* v_b_3414_, lean_object* v_c_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_, lean_object* v___y_3419_, lean_object* v___y_3420_){
_start:
{
lean_object* v_res_3421_; 
v_res_3421_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6(v_upperBound_3408_, v_a_3409_, v___x_3410_, v_inst_3411_, v_R_3412_, v_a_3413_, v_b_3414_, v_c_3415_, v___y_3416_, v___y_3417_, v___y_3418_, v___y_3419_);
lean_dec(v___y_3419_);
lean_dec_ref(v___y_3418_);
lean_dec(v___y_3417_);
lean_dec_ref(v___y_3416_);
lean_dec(v___x_3410_);
lean_dec_ref(v_a_3409_);
lean_dec(v_upperBound_3408_);
return v_res_3421_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10(lean_object* v_fst_3422_, lean_object* v_argVars_3423_, lean_object* v_inst_3424_, lean_object* v_a_3425_, lean_object* v_projInfo_x3f_3426_, lean_object* v_inst_3427_, lean_object* v_a_3428_, lean_object* v___y_3429_, lean_object* v___y_3430_, lean_object* v___y_3431_, lean_object* v___y_3432_){
_start:
{
lean_object* v___x_3434_; 
v___x_3434_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg(v_fst_3422_, v_argVars_3423_, v_inst_3424_, v_a_3425_, v_projInfo_x3f_3426_, v_a_3428_, v___y_3429_, v___y_3430_, v___y_3431_, v___y_3432_);
return v___x_3434_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___boxed(lean_object* v_fst_3435_, lean_object* v_argVars_3436_, lean_object* v_inst_3437_, lean_object* v_a_3438_, lean_object* v_projInfo_x3f_3439_, lean_object* v_inst_3440_, lean_object* v_a_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_, lean_object* v___y_3446_){
_start:
{
lean_object* v_res_3447_; 
v_res_3447_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10(v_fst_3435_, v_argVars_3436_, v_inst_3437_, v_a_3438_, v_projInfo_x3f_3439_, v_inst_3440_, v_a_3441_, v___y_3442_, v___y_3443_, v___y_3444_, v___y_3445_);
lean_dec(v___y_3445_);
lean_dec_ref(v___y_3444_);
lean_dec(v___y_3443_);
lean_dec_ref(v___y_3442_);
lean_dec(v_projInfo_x3f_3439_);
return v_res_3447_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5___redArg(lean_object* v_type_3448_, lean_object* v_k_3449_, uint8_t v_cleanupAnnotations_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_, lean_object* v___y_3453_, lean_object* v___y_3454_){
_start:
{
lean_object* v___f_3456_; uint8_t v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; 
v___f_3456_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_3456_, 0, v_k_3449_);
v___x_3457_ = 0;
v___x_3458_ = lean_box(0);
v___x_3459_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_3457_, v___x_3458_, v_type_3448_, v___f_3456_, v_cleanupAnnotations_3450_, v___x_3457_, v___y_3451_, v___y_3452_, v___y_3453_, v___y_3454_);
if (lean_obj_tag(v___x_3459_) == 0)
{
lean_object* v_a_3460_; lean_object* v___x_3462_; uint8_t v_isShared_3463_; uint8_t v_isSharedCheck_3467_; 
v_a_3460_ = lean_ctor_get(v___x_3459_, 0);
v_isSharedCheck_3467_ = !lean_is_exclusive(v___x_3459_);
if (v_isSharedCheck_3467_ == 0)
{
v___x_3462_ = v___x_3459_;
v_isShared_3463_ = v_isSharedCheck_3467_;
goto v_resetjp_3461_;
}
else
{
lean_inc(v_a_3460_);
lean_dec(v___x_3459_);
v___x_3462_ = lean_box(0);
v_isShared_3463_ = v_isSharedCheck_3467_;
goto v_resetjp_3461_;
}
v_resetjp_3461_:
{
lean_object* v___x_3465_; 
if (v_isShared_3463_ == 0)
{
v___x_3465_ = v___x_3462_;
goto v_reusejp_3464_;
}
else
{
lean_object* v_reuseFailAlloc_3466_; 
v_reuseFailAlloc_3466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3466_, 0, v_a_3460_);
v___x_3465_ = v_reuseFailAlloc_3466_;
goto v_reusejp_3464_;
}
v_reusejp_3464_:
{
return v___x_3465_;
}
}
}
else
{
lean_object* v_a_3468_; lean_object* v___x_3470_; uint8_t v_isShared_3471_; uint8_t v_isSharedCheck_3475_; 
v_a_3468_ = lean_ctor_get(v___x_3459_, 0);
v_isSharedCheck_3475_ = !lean_is_exclusive(v___x_3459_);
if (v_isSharedCheck_3475_ == 0)
{
v___x_3470_ = v___x_3459_;
v_isShared_3471_ = v_isSharedCheck_3475_;
goto v_resetjp_3469_;
}
else
{
lean_inc(v_a_3468_);
lean_dec(v___x_3459_);
v___x_3470_ = lean_box(0);
v_isShared_3471_ = v_isSharedCheck_3475_;
goto v_resetjp_3469_;
}
v_resetjp_3469_:
{
lean_object* v___x_3473_; 
if (v_isShared_3471_ == 0)
{
v___x_3473_ = v___x_3470_;
goto v_reusejp_3472_;
}
else
{
lean_object* v_reuseFailAlloc_3474_; 
v_reuseFailAlloc_3474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3474_, 0, v_a_3468_);
v___x_3473_ = v_reuseFailAlloc_3474_;
goto v_reusejp_3472_;
}
v_reusejp_3472_:
{
return v___x_3473_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5___redArg___boxed(lean_object* v_type_3476_, lean_object* v_k_3477_, lean_object* v_cleanupAnnotations_3478_, lean_object* v___y_3479_, lean_object* v___y_3480_, lean_object* v___y_3481_, lean_object* v___y_3482_, lean_object* v___y_3483_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3484_; lean_object* v_res_3485_; 
v_cleanupAnnotations_boxed_3484_ = lean_unbox(v_cleanupAnnotations_3478_);
v_res_3485_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5___redArg(v_type_3476_, v_k_3477_, v_cleanupAnnotations_boxed_3484_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_);
lean_dec(v___y_3482_);
lean_dec_ref(v___y_3481_);
lean_dec(v___y_3480_);
lean_dec_ref(v___y_3479_);
return v_res_3485_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5(lean_object* v_00_u03b1_3486_, lean_object* v_type_3487_, lean_object* v_k_3488_, uint8_t v_cleanupAnnotations_3489_, lean_object* v___y_3490_, lean_object* v___y_3491_, lean_object* v___y_3492_, lean_object* v___y_3493_){
_start:
{
lean_object* v___x_3495_; 
v___x_3495_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5___redArg(v_type_3487_, v_k_3488_, v_cleanupAnnotations_3489_, v___y_3490_, v___y_3491_, v___y_3492_, v___y_3493_);
return v___x_3495_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5___boxed(lean_object* v_00_u03b1_3496_, lean_object* v_type_3497_, lean_object* v_k_3498_, lean_object* v_cleanupAnnotations_3499_, lean_object* v___y_3500_, lean_object* v___y_3501_, lean_object* v___y_3502_, lean_object* v___y_3503_, lean_object* v___y_3504_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3505_; lean_object* v_res_3506_; 
v_cleanupAnnotations_boxed_3505_ = lean_unbox(v_cleanupAnnotations_3499_);
v_res_3506_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5(v_00_u03b1_3496_, v_type_3497_, v_k_3498_, v_cleanupAnnotations_boxed_3505_, v___y_3500_, v___y_3501_, v___y_3502_, v___y_3503_);
lean_dec(v___y_3503_);
lean_dec_ref(v___y_3502_);
lean_dec(v___y_3501_);
lean_dec_ref(v___y_3500_);
return v_res_3506_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0(uint8_t v___x_3514_, lean_object* v_x_3515_){
_start:
{
if (lean_obj_tag(v_x_3515_) == 1)
{
lean_object* v_pre_3516_; 
v_pre_3516_ = lean_ctor_get(v_x_3515_, 0);
switch(lean_obj_tag(v_pre_3516_))
{
case 1:
{
lean_object* v_pre_3517_; 
v_pre_3517_ = lean_ctor_get(v_pre_3516_, 0);
switch(lean_obj_tag(v_pre_3517_))
{
case 0:
{
lean_object* v_str_3518_; lean_object* v_str_3519_; lean_object* v___x_3520_; uint8_t v___x_3521_; 
v_str_3518_ = lean_ctor_get(v_x_3515_, 1);
v_str_3519_ = lean_ctor_get(v_pre_3516_, 1);
v___x_3520_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0___closed__0));
v___x_3521_ = lean_string_dec_eq(v_str_3519_, v___x_3520_);
if (v___x_3521_ == 0)
{
lean_object* v___x_3522_; uint8_t v___x_3523_; 
v___x_3522_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0___closed__1));
v___x_3523_ = lean_string_dec_eq(v_str_3519_, v___x_3522_);
if (v___x_3523_ == 0)
{
return v___x_3523_;
}
else
{
lean_object* v___x_3524_; uint8_t v___x_3525_; 
v___x_3524_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0___closed__2));
v___x_3525_ = lean_string_dec_eq(v_str_3518_, v___x_3524_);
return v___x_3525_;
}
}
else
{
lean_object* v___x_3526_; uint8_t v___x_3527_; 
v___x_3526_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0___closed__3));
v___x_3527_ = lean_string_dec_eq(v_str_3518_, v___x_3526_);
return v___x_3527_;
}
}
case 1:
{
lean_object* v_pre_3528_; 
v_pre_3528_ = lean_ctor_get(v_pre_3517_, 0);
if (lean_obj_tag(v_pre_3528_) == 0)
{
lean_object* v_str_3529_; lean_object* v_str_3530_; lean_object* v_str_3531_; lean_object* v___x_3532_; uint8_t v___x_3533_; 
v_str_3529_ = lean_ctor_get(v_x_3515_, 1);
v_str_3530_ = lean_ctor_get(v_pre_3516_, 1);
v_str_3531_ = lean_ctor_get(v_pre_3517_, 1);
v___x_3532_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0___closed__4));
v___x_3533_ = lean_string_dec_eq(v_str_3531_, v___x_3532_);
if (v___x_3533_ == 0)
{
return v___x_3533_;
}
else
{
lean_object* v___x_3534_; uint8_t v___x_3535_; 
v___x_3534_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0___closed__5));
v___x_3535_ = lean_string_dec_eq(v_str_3530_, v___x_3534_);
if (v___x_3535_ == 0)
{
return v___x_3535_;
}
else
{
lean_object* v___x_3536_; uint8_t v___x_3537_; 
v___x_3536_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0___closed__6));
v___x_3537_ = lean_string_dec_eq(v_str_3529_, v___x_3536_);
return v___x_3537_;
}
}
}
else
{
return v___x_3514_;
}
}
default: 
{
return v___x_3514_;
}
}
}
case 0:
{
lean_object* v_str_3538_; lean_object* v___x_3539_; uint8_t v___x_3540_; 
v_str_3538_ = lean_ctor_get(v_x_3515_, 1);
v___x_3539_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__2));
v___x_3540_ = lean_string_dec_eq(v_str_3538_, v___x_3539_);
return v___x_3540_;
}
default: 
{
return v___x_3514_;
}
}
}
else
{
return v___x_3514_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0___boxed(lean_object* v___x_3541_, lean_object* v_x_3542_){
_start:
{
uint8_t v___x_10783__boxed_3543_; uint8_t v_res_3544_; lean_object* v_r_3545_; 
v___x_10783__boxed_3543_ = lean_unbox(v___x_3541_);
v_res_3544_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___lam__0(v___x_10783__boxed_3543_, v_x_3542_);
lean_dec(v_x_3542_);
v_r_3545_ = lean_box(v_res_3544_);
return v_r_3545_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6(lean_object* v_ref_3549_, lean_object* v_msgData_3550_, uint8_t v_severity_3551_, uint8_t v_isSilent_3552_, lean_object* v___y_3553_, lean_object* v___y_3554_, lean_object* v___y_3555_, lean_object* v___y_3556_){
_start:
{
lean_object* v___y_3559_; lean_object* v___y_3560_; lean_object* v___y_3561_; uint8_t v___y_3562_; lean_object* v___y_3563_; uint8_t v___y_3564_; lean_object* v___y_3565_; lean_object* v_toCold_3566_; lean_object* v___y_3567_; lean_object* v___y_3596_; lean_object* v___y_3597_; uint8_t v___y_3598_; lean_object* v___y_3599_; uint8_t v___y_3600_; uint8_t v___y_3601_; lean_object* v___y_3602_; lean_object* v___y_3603_; uint8_t v___y_3623_; uint8_t v___y_3624_; lean_object* v___y_3625_; lean_object* v___y_3626_; lean_object* v___y_3627_; uint8_t v___y_3628_; lean_object* v___y_3629_; uint8_t v___y_3633_; uint8_t v___x_3650_; uint8_t v___x_3651_; 
v___x_3650_ = 2;
v___x_3651_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3551_, v___x_3650_);
if (v___x_3651_ == 0)
{
goto v___jp_3643_;
}
else
{
uint8_t v___x_3652_; 
lean_inc_ref(v_msgData_3550_);
v___x_3652_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_3550_);
if (v___x_3652_ == 0)
{
goto v___jp_3643_;
}
else
{
lean_object* v___x_3653_; lean_object* v___x_3654_; 
lean_dec_ref(v_msgData_3550_);
v___x_3653_ = lean_box(0);
v___x_3654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3654_, 0, v___x_3653_);
return v___x_3654_;
}
}
v___jp_3558_:
{
lean_object* v_currNamespace_3568_; lean_object* v_openDecls_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v_env_3574_; lean_object* v_nextMacroScope_3575_; lean_object* v_ngen_3576_; lean_object* v_auxDeclNGen_3577_; lean_object* v_traceState_3578_; lean_object* v_cache_3579_; lean_object* v_recordedDeps_3580_; lean_object* v_messages_3581_; lean_object* v_infoState_3582_; lean_object* v_snapshotTasks_3583_; lean_object* v___x_3585_; uint8_t v_isShared_3586_; uint8_t v_isSharedCheck_3594_; 
v_currNamespace_3568_ = lean_ctor_get(v_toCold_3566_, 4);
v_openDecls_3569_ = lean_ctor_get(v_toCold_3566_, 5);
lean_inc(v_openDecls_3569_);
lean_inc(v_currNamespace_3568_);
v___x_3570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3570_, 0, v_currNamespace_3568_);
lean_ctor_set(v___x_3570_, 1, v_openDecls_3569_);
v___x_3571_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3571_, 0, v___x_3570_);
lean_ctor_set(v___x_3571_, 1, v___y_3559_);
lean_inc_ref(v___y_3563_);
lean_inc_ref(v___y_3560_);
v___x_3572_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_3572_, 0, v___y_3560_);
lean_ctor_set(v___x_3572_, 1, v___y_3565_);
lean_ctor_set(v___x_3572_, 2, v___y_3561_);
lean_ctor_set(v___x_3572_, 3, v___y_3563_);
lean_ctor_set(v___x_3572_, 4, v___x_3571_);
lean_ctor_set_uint8(v___x_3572_, sizeof(void*)*5, v___y_3564_);
lean_ctor_set_uint8(v___x_3572_, sizeof(void*)*5 + 1, v___y_3562_);
lean_ctor_set_uint8(v___x_3572_, sizeof(void*)*5 + 2, v_isSilent_3552_);
v___x_3573_ = lean_st_ref_take(v___y_3567_);
v_env_3574_ = lean_ctor_get(v___x_3573_, 0);
v_nextMacroScope_3575_ = lean_ctor_get(v___x_3573_, 1);
v_ngen_3576_ = lean_ctor_get(v___x_3573_, 2);
v_auxDeclNGen_3577_ = lean_ctor_get(v___x_3573_, 3);
v_traceState_3578_ = lean_ctor_get(v___x_3573_, 4);
v_cache_3579_ = lean_ctor_get(v___x_3573_, 5);
v_recordedDeps_3580_ = lean_ctor_get(v___x_3573_, 6);
v_messages_3581_ = lean_ctor_get(v___x_3573_, 7);
v_infoState_3582_ = lean_ctor_get(v___x_3573_, 8);
v_snapshotTasks_3583_ = lean_ctor_get(v___x_3573_, 9);
v_isSharedCheck_3594_ = !lean_is_exclusive(v___x_3573_);
if (v_isSharedCheck_3594_ == 0)
{
v___x_3585_ = v___x_3573_;
v_isShared_3586_ = v_isSharedCheck_3594_;
goto v_resetjp_3584_;
}
else
{
lean_inc(v_snapshotTasks_3583_);
lean_inc(v_infoState_3582_);
lean_inc(v_messages_3581_);
lean_inc(v_recordedDeps_3580_);
lean_inc(v_cache_3579_);
lean_inc(v_traceState_3578_);
lean_inc(v_auxDeclNGen_3577_);
lean_inc(v_ngen_3576_);
lean_inc(v_nextMacroScope_3575_);
lean_inc(v_env_3574_);
lean_dec(v___x_3573_);
v___x_3585_ = lean_box(0);
v_isShared_3586_ = v_isSharedCheck_3594_;
goto v_resetjp_3584_;
}
v_resetjp_3584_:
{
lean_object* v___x_3587_; lean_object* v___x_3588_; lean_object* v___x_3590_; 
v___x_3587_ = lean_box(0);
v___x_3588_ = l_Lean_MessageLog_add(v___x_3572_, v_messages_3581_);
if (v_isShared_3586_ == 0)
{
lean_ctor_set(v___x_3585_, 7, v___x_3588_);
v___x_3590_ = v___x_3585_;
goto v_reusejp_3589_;
}
else
{
lean_object* v_reuseFailAlloc_3593_; 
v_reuseFailAlloc_3593_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3593_, 0, v_env_3574_);
lean_ctor_set(v_reuseFailAlloc_3593_, 1, v_nextMacroScope_3575_);
lean_ctor_set(v_reuseFailAlloc_3593_, 2, v_ngen_3576_);
lean_ctor_set(v_reuseFailAlloc_3593_, 3, v_auxDeclNGen_3577_);
lean_ctor_set(v_reuseFailAlloc_3593_, 4, v_traceState_3578_);
lean_ctor_set(v_reuseFailAlloc_3593_, 5, v_cache_3579_);
lean_ctor_set(v_reuseFailAlloc_3593_, 6, v_recordedDeps_3580_);
lean_ctor_set(v_reuseFailAlloc_3593_, 7, v___x_3588_);
lean_ctor_set(v_reuseFailAlloc_3593_, 8, v_infoState_3582_);
lean_ctor_set(v_reuseFailAlloc_3593_, 9, v_snapshotTasks_3583_);
v___x_3590_ = v_reuseFailAlloc_3593_;
goto v_reusejp_3589_;
}
v_reusejp_3589_:
{
lean_object* v___x_3591_; lean_object* v___x_3592_; 
v___x_3591_ = lean_st_ref_put(v___y_3567_, v___x_3590_);
v___x_3592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3592_, 0, v___x_3587_);
return v___x_3592_;
}
}
}
v___jp_3595_:
{
lean_object* v_fileName_3604_; lean_object* v_fileMap_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v_a_3608_; lean_object* v___x_3610_; uint8_t v_isShared_3611_; uint8_t v_isSharedCheck_3621_; 
v_fileName_3604_ = lean_ctor_get(v___y_3602_, 0);
v_fileMap_3605_ = lean_ctor_get(v___y_3602_, 1);
v___x_3606_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_3550_);
v___x_3607_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4_spec__4(v___x_3606_, v___y_3553_, v___y_3554_, v___y_3555_, v___y_3556_);
v_a_3608_ = lean_ctor_get(v___x_3607_, 0);
v_isSharedCheck_3621_ = !lean_is_exclusive(v___x_3607_);
if (v_isSharedCheck_3621_ == 0)
{
v___x_3610_ = v___x_3607_;
v_isShared_3611_ = v_isSharedCheck_3621_;
goto v_resetjp_3609_;
}
else
{
lean_inc(v_a_3608_);
lean_dec(v___x_3607_);
v___x_3610_ = lean_box(0);
v_isShared_3611_ = v_isSharedCheck_3621_;
goto v_resetjp_3609_;
}
v_resetjp_3609_:
{
lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; 
lean_inc_ref_n(v_fileMap_3605_, 2);
v___x_3612_ = l_Lean_FileMap_toPosition(v_fileMap_3605_, v___y_3599_);
lean_dec(v___y_3599_);
v___x_3613_ = l_Lean_FileMap_toPosition(v_fileMap_3605_, v___y_3603_);
lean_dec(v___y_3603_);
v___x_3614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3614_, 0, v___x_3613_);
v___x_3615_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__0));
if (v___y_3598_ == 0)
{
lean_del_object(v___x_3610_);
v___y_3559_ = v_a_3608_;
v___y_3560_ = v_fileName_3604_;
v___y_3561_ = v___x_3614_;
v___y_3562_ = v___y_3600_;
v___y_3563_ = v___x_3615_;
v___y_3564_ = v___y_3601_;
v___y_3565_ = v___x_3612_;
v_toCold_3566_ = v___y_3596_;
v___y_3567_ = v___y_3556_;
goto v___jp_3558_;
}
else
{
uint8_t v___x_3616_; 
lean_inc(v_a_3608_);
lean_inc_ref(v___y_3597_);
v___x_3616_ = l_Lean_MessageData_hasTag(v___y_3597_, v_a_3608_);
if (v___x_3616_ == 0)
{
lean_object* v___x_3617_; lean_object* v___x_3619_; 
lean_dec_ref_known(v___x_3614_, 1);
lean_dec_ref(v___x_3612_);
lean_dec(v_a_3608_);
v___x_3617_ = lean_box(0);
if (v_isShared_3611_ == 0)
{
lean_ctor_set(v___x_3610_, 0, v___x_3617_);
v___x_3619_ = v___x_3610_;
goto v_reusejp_3618_;
}
else
{
lean_object* v_reuseFailAlloc_3620_; 
v_reuseFailAlloc_3620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3620_, 0, v___x_3617_);
v___x_3619_ = v_reuseFailAlloc_3620_;
goto v_reusejp_3618_;
}
v_reusejp_3618_:
{
return v___x_3619_;
}
}
else
{
lean_del_object(v___x_3610_);
v___y_3559_ = v_a_3608_;
v___y_3560_ = v_fileName_3604_;
v___y_3561_ = v___x_3614_;
v___y_3562_ = v___y_3600_;
v___y_3563_ = v___x_3615_;
v___y_3564_ = v___y_3601_;
v___y_3565_ = v___x_3612_;
v_toCold_3566_ = v___y_3596_;
v___y_3567_ = v___y_3556_;
goto v___jp_3558_;
}
}
}
}
v___jp_3622_:
{
lean_object* v___x_3630_; 
v___x_3630_ = l_Lean_Syntax_getTailPos_x3f(v___y_3626_, v___y_3624_);
lean_dec(v___y_3626_);
if (lean_obj_tag(v___x_3630_) == 0)
{
lean_inc(v___y_3629_);
v___y_3596_ = v___y_3625_;
v___y_3597_ = v___y_3627_;
v___y_3598_ = v___y_3623_;
v___y_3599_ = v___y_3629_;
v___y_3600_ = v___y_3628_;
v___y_3601_ = v___y_3624_;
v___y_3602_ = v___y_3625_;
v___y_3603_ = v___y_3629_;
goto v___jp_3595_;
}
else
{
lean_object* v_val_3631_; 
v_val_3631_ = lean_ctor_get(v___x_3630_, 0);
lean_inc(v_val_3631_);
lean_dec_ref_known(v___x_3630_, 1);
v___y_3596_ = v___y_3625_;
v___y_3597_ = v___y_3627_;
v___y_3598_ = v___y_3623_;
v___y_3599_ = v___y_3629_;
v___y_3600_ = v___y_3628_;
v___y_3601_ = v___y_3624_;
v___y_3602_ = v___y_3625_;
v___y_3603_ = v_val_3631_;
goto v___jp_3595_;
}
}
v___jp_3632_:
{
lean_object* v_toCold_3634_; lean_object* v_ref_3635_; uint8_t v_suppressElabErrors_3636_; lean_object* v_ref_3637_; uint8_t v___x_3638_; lean_object* v___f_3639_; lean_object* v___x_3640_; 
v_toCold_3634_ = lean_ctor_get(v___y_3555_, 0);
v_ref_3635_ = lean_ctor_get(v___y_3555_, 2);
v_suppressElabErrors_3636_ = lean_ctor_get_uint8(v___y_3555_, sizeof(void*)*3 + 2);
v_ref_3637_ = l_Lean_replaceRef(v_ref_3549_, v_ref_3635_);
v___x_3638_ = 0;
v___f_3639_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___closed__0));
v___x_3640_ = l_Lean_Syntax_getPos_x3f(v_ref_3637_, v___x_3638_);
if (lean_obj_tag(v___x_3640_) == 0)
{
lean_object* v___x_3641_; 
v___x_3641_ = lean_unsigned_to_nat(0u);
v___y_3623_ = v_suppressElabErrors_3636_;
v___y_3624_ = v___x_3638_;
v___y_3625_ = v_toCold_3634_;
v___y_3626_ = v_ref_3637_;
v___y_3627_ = v___f_3639_;
v___y_3628_ = v___y_3633_;
v___y_3629_ = v___x_3641_;
goto v___jp_3622_;
}
else
{
lean_object* v_val_3642_; 
v_val_3642_ = lean_ctor_get(v___x_3640_, 0);
lean_inc(v_val_3642_);
lean_dec_ref_known(v___x_3640_, 1);
v___y_3623_ = v_suppressElabErrors_3636_;
v___y_3624_ = v___x_3638_;
v___y_3625_ = v_toCold_3634_;
v___y_3626_ = v_ref_3637_;
v___y_3627_ = v___f_3639_;
v___y_3628_ = v___y_3633_;
v___y_3629_ = v_val_3642_;
goto v___jp_3622_;
}
}
v___jp_3643_:
{
uint8_t v___x_3644_; uint8_t v___x_3645_; 
v___x_3644_ = 1;
v___x_3645_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3551_, v___x_3644_);
if (v___x_3645_ == 0)
{
v___y_3633_ = v_severity_3551_;
goto v___jp_3632_;
}
else
{
lean_object* v___x_3646_; lean_object* v___x_3647_; uint8_t v___x_3648_; 
v___x_3646_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_3555_);
v___x_3647_ = l_Lean_warningAsError;
v___x_3648_ = l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1(v___x_3646_, v___x_3647_);
lean_dec_ref(v___x_3646_);
if (v___x_3648_ == 0)
{
v___y_3633_ = v_severity_3551_;
goto v___jp_3632_;
}
else
{
uint8_t v___x_3649_; 
v___x_3649_ = 2;
v___y_3633_ = v___x_3649_;
goto v___jp_3632_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6___boxed(lean_object* v_ref_3655_, lean_object* v_msgData_3656_, lean_object* v_severity_3657_, lean_object* v_isSilent_3658_, lean_object* v___y_3659_, lean_object* v___y_3660_, lean_object* v___y_3661_, lean_object* v___y_3662_, lean_object* v___y_3663_){
_start:
{
uint8_t v_severity_boxed_3664_; uint8_t v_isSilent_boxed_3665_; lean_object* v_res_3666_; 
v_severity_boxed_3664_ = lean_unbox(v_severity_3657_);
v_isSilent_boxed_3665_ = lean_unbox(v_isSilent_3658_);
v_res_3666_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6(v_ref_3655_, v_msgData_3656_, v_severity_boxed_3664_, v_isSilent_boxed_3665_, v___y_3659_, v___y_3660_, v___y_3661_, v___y_3662_);
lean_dec(v___y_3662_);
lean_dec_ref(v___y_3661_);
lean_dec(v___y_3660_);
lean_dec_ref(v___y_3659_);
lean_dec(v_ref_3655_);
return v_res_3666_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4(lean_object* v_msgData_3667_, uint8_t v_severity_3668_, uint8_t v_isSilent_3669_, lean_object* v___y_3670_, lean_object* v___y_3671_, lean_object* v___y_3672_, lean_object* v___y_3673_){
_start:
{
lean_object* v_ref_3675_; lean_object* v___x_3676_; 
v_ref_3675_ = lean_ctor_get(v___y_3672_, 2);
v___x_3676_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4_spec__6(v_ref_3675_, v_msgData_3667_, v_severity_3668_, v_isSilent_3669_, v___y_3670_, v___y_3671_, v___y_3672_, v___y_3673_);
return v___x_3676_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4___boxed(lean_object* v_msgData_3677_, lean_object* v_severity_3678_, lean_object* v_isSilent_3679_, lean_object* v___y_3680_, lean_object* v___y_3681_, lean_object* v___y_3682_, lean_object* v___y_3683_, lean_object* v___y_3684_){
_start:
{
uint8_t v_severity_boxed_3685_; uint8_t v_isSilent_boxed_3686_; lean_object* v_res_3687_; 
v_severity_boxed_3685_ = lean_unbox(v_severity_3678_);
v_isSilent_boxed_3686_ = lean_unbox(v_isSilent_3679_);
v_res_3687_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4(v_msgData_3677_, v_severity_boxed_3685_, v_isSilent_boxed_3686_, v___y_3680_, v___y_3681_, v___y_3682_, v___y_3683_);
lean_dec(v___y_3683_);
lean_dec_ref(v___y_3682_);
lean_dec(v___y_3681_);
lean_dec_ref(v___y_3680_);
return v_res_3687_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4(lean_object* v_msgData_3688_, lean_object* v___y_3689_, lean_object* v___y_3690_, lean_object* v___y_3691_, lean_object* v___y_3692_){
_start:
{
uint8_t v___x_3694_; uint8_t v___x_3695_; lean_object* v___x_3696_; 
v___x_3694_ = 1;
v___x_3695_ = 0;
v___x_3696_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4_spec__4(v_msgData_3688_, v___x_3694_, v___x_3695_, v___y_3689_, v___y_3690_, v___y_3691_, v___y_3692_);
return v___x_3696_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4___boxed(lean_object* v_msgData_3697_, lean_object* v___y_3698_, lean_object* v___y_3699_, lean_object* v___y_3700_, lean_object* v___y_3701_, lean_object* v___y_3702_){
_start:
{
lean_object* v_res_3703_; 
v_res_3703_ = l_Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4(v_msgData_3697_, v___y_3698_, v___y_3699_, v___y_3700_, v___y_3701_);
lean_dec(v___y_3701_);
lean_dec_ref(v___y_3700_);
lean_dec(v___y_3699_);
lean_dec_ref(v___y_3698_);
return v_res_3703_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg(lean_object* v_k_3704_, lean_object* v_t_3705_){
_start:
{
if (lean_obj_tag(v_t_3705_) == 0)
{
lean_object* v_k_3706_; lean_object* v_l_3707_; lean_object* v_r_3708_; uint8_t v___x_3709_; 
v_k_3706_ = lean_ctor_get(v_t_3705_, 1);
v_l_3707_ = lean_ctor_get(v_t_3705_, 3);
v_r_3708_ = lean_ctor_get(v_t_3705_, 4);
v___x_3709_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_3704_, v_k_3706_);
switch(v___x_3709_)
{
case 0:
{
v_t_3705_ = v_l_3707_;
goto _start;
}
case 1:
{
uint8_t v___x_3711_; 
v___x_3711_ = 1;
return v___x_3711_;
}
default: 
{
v_t_3705_ = v_r_3708_;
goto _start;
}
}
}
else
{
uint8_t v___x_3713_; 
v___x_3713_ = 0;
return v___x_3713_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg___boxed(lean_object* v_k_3714_, lean_object* v_t_3715_){
_start:
{
uint8_t v_res_3716_; lean_object* v_r_3717_; 
v_res_3716_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg(v_k_3714_, v_t_3715_);
lean_dec(v_t_3715_);
lean_dec(v_k_3714_);
v_r_3717_ = lean_box(v_res_3716_);
return v_r_3717_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_3719_; lean_object* v___x_3720_; 
v___x_3719_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg___closed__0));
v___x_3720_ = l_Lean_stringToMessageData(v___x_3719_);
return v___x_3720_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg___closed__3(void){
_start:
{
lean_object* v___x_3722_; lean_object* v___x_3723_; 
v___x_3722_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg___closed__2));
v___x_3723_ = l_Lean_stringToMessageData(v___x_3722_);
return v___x_3723_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg(lean_object* v_a_3724_, lean_object* v_as_3725_, size_t v_sz_3726_, size_t v_i_3727_, lean_object* v_b_3728_, lean_object* v___y_3729_, lean_object* v___y_3730_, lean_object* v___y_3731_){
_start:
{
lean_object* v_a_3734_; uint8_t v___x_3738_; 
v___x_3738_ = lean_usize_dec_lt(v_i_3727_, v_sz_3726_);
if (v___x_3738_ == 0)
{
lean_object* v___x_3739_; 
v___x_3739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3739_, 0, v_b_3728_);
return v___x_3739_;
}
else
{
lean_object* v_snd_3740_; 
v_snd_3740_ = lean_ctor_get(v_b_3728_, 1);
lean_inc(v_snd_3740_);
if (lean_obj_tag(v_snd_3740_) == 0)
{
lean_object* v_fst_3741_; lean_object* v___x_3743_; uint8_t v_isShared_3744_; uint8_t v_isSharedCheck_3749_; 
v_fst_3741_ = lean_ctor_get(v_b_3728_, 0);
v_isSharedCheck_3749_ = !lean_is_exclusive(v_b_3728_);
if (v_isSharedCheck_3749_ == 0)
{
lean_object* v_unused_3750_; 
v_unused_3750_ = lean_ctor_get(v_b_3728_, 1);
lean_dec(v_unused_3750_);
v___x_3743_ = v_b_3728_;
v_isShared_3744_ = v_isSharedCheck_3749_;
goto v_resetjp_3742_;
}
else
{
lean_inc(v_fst_3741_);
lean_dec(v_b_3728_);
v___x_3743_ = lean_box(0);
v_isShared_3744_ = v_isSharedCheck_3749_;
goto v_resetjp_3742_;
}
v_resetjp_3742_:
{
lean_object* v___x_3746_; 
if (v_isShared_3744_ == 0)
{
v___x_3746_ = v___x_3743_;
goto v_reusejp_3745_;
}
else
{
lean_object* v_reuseFailAlloc_3748_; 
v_reuseFailAlloc_3748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3748_, 0, v_fst_3741_);
lean_ctor_set(v_reuseFailAlloc_3748_, 1, v_snd_3740_);
v___x_3746_ = v_reuseFailAlloc_3748_;
goto v_reusejp_3745_;
}
v_reusejp_3745_:
{
lean_object* v___x_3747_; 
v___x_3747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3747_, 0, v___x_3746_);
return v___x_3747_;
}
}
}
else
{
lean_object* v_fst_3751_; lean_object* v___x_3753_; uint8_t v_isShared_3754_; uint8_t v_isSharedCheck_3808_; 
v_fst_3751_ = lean_ctor_get(v_b_3728_, 0);
v_isSharedCheck_3808_ = !lean_is_exclusive(v_b_3728_);
if (v_isSharedCheck_3808_ == 0)
{
lean_object* v_unused_3809_; 
v_unused_3809_ = lean_ctor_get(v_b_3728_, 1);
lean_dec(v_unused_3809_);
v___x_3753_ = v_b_3728_;
v_isShared_3754_ = v_isSharedCheck_3808_;
goto v_resetjp_3752_;
}
else
{
lean_inc(v_fst_3751_);
lean_dec(v_b_3728_);
v___x_3753_ = lean_box(0);
v_isShared_3754_ = v_isSharedCheck_3808_;
goto v_resetjp_3752_;
}
v_resetjp_3752_:
{
lean_object* v_val_3755_; lean_object* v___x_3757_; uint8_t v_isShared_3758_; uint8_t v_isSharedCheck_3807_; 
v_val_3755_ = lean_ctor_get(v_snd_3740_, 0);
v_isSharedCheck_3807_ = !lean_is_exclusive(v_snd_3740_);
if (v_isSharedCheck_3807_ == 0)
{
v___x_3757_ = v_snd_3740_;
v_isShared_3758_ = v_isSharedCheck_3807_;
goto v_resetjp_3756_;
}
else
{
lean_inc(v_val_3755_);
lean_dec(v_snd_3740_);
v___x_3757_ = lean_box(0);
v_isShared_3758_ = v_isSharedCheck_3807_;
goto v_resetjp_3756_;
}
v_resetjp_3756_:
{
lean_object* v_fvarSet_3759_; lean_object* v_a_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3764_; 
v_fvarSet_3759_ = lean_ctor_get(v_a_3724_, 1);
v_a_3760_ = lean_array_uget_borrowed(v_as_3725_, v_i_3727_);
v___x_3761_ = lean_unsigned_to_nat(1u);
v___x_3762_ = lean_nat_add(v_val_3755_, v___x_3761_);
if (v_isShared_3758_ == 0)
{
lean_ctor_set(v___x_3757_, 0, v___x_3762_);
v___x_3764_ = v___x_3757_;
goto v_reusejp_3763_;
}
else
{
lean_object* v_reuseFailAlloc_3806_; 
v_reuseFailAlloc_3806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3806_, 0, v___x_3762_);
v___x_3764_ = v_reuseFailAlloc_3806_;
goto v_reusejp_3763_;
}
v_reusejp_3763_:
{
lean_object* v___x_3765_; uint8_t v___x_3766_; 
v___x_3765_ = l_Lean_Expr_fvarId_x21(v_a_3760_);
v___x_3766_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg(v___x_3765_, v_fvarSet_3759_);
if (v___x_3766_ == 0)
{
lean_object* v___x_3767_; 
v___x_3767_ = l_Lean_FVarId_getDecl___redArg(v___x_3765_, v___y_3729_, v___y_3730_, v___y_3731_);
if (lean_obj_tag(v___x_3767_) == 0)
{
lean_object* v_a_3768_; lean_object* v___x_3769_; 
v_a_3768_ = lean_ctor_get(v___x_3767_, 0);
lean_inc(v_a_3768_);
lean_dec_ref_known(v___x_3767_, 1);
v___x_3769_ = l_Lean_LocalDecl_ppAsBinder(v_a_3768_);
if (lean_obj_tag(v___x_3769_) == 1)
{
lean_object* v_val_3770_; lean_object* v___x_3772_; uint8_t v_isShared_3773_; uint8_t v_isSharedCheck_3791_; 
v_val_3770_ = lean_ctor_get(v___x_3769_, 0);
v_isSharedCheck_3791_ = !lean_is_exclusive(v___x_3769_);
if (v_isSharedCheck_3791_ == 0)
{
v___x_3772_ = v___x_3769_;
v_isShared_3773_ = v_isSharedCheck_3791_;
goto v_resetjp_3771_;
}
else
{
lean_inc(v_val_3770_);
lean_dec(v___x_3769_);
v___x_3772_ = lean_box(0);
v_isShared_3773_ = v_isSharedCheck_3791_;
goto v_resetjp_3771_;
}
v_resetjp_3771_:
{
lean_object* v___x_3774_; lean_object* v___x_3775_; lean_object* v___x_3777_; 
v___x_3774_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg___closed__1);
v___x_3775_ = l_Nat_reprFast(v_val_3755_);
if (v_isShared_3773_ == 0)
{
lean_ctor_set_tag(v___x_3772_, 3);
lean_ctor_set(v___x_3772_, 0, v___x_3775_);
v___x_3777_ = v___x_3772_;
goto v_reusejp_3776_;
}
else
{
lean_object* v_reuseFailAlloc_3790_; 
v_reuseFailAlloc_3790_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3790_, 0, v___x_3775_);
v___x_3777_ = v_reuseFailAlloc_3790_;
goto v_reusejp_3776_;
}
v_reusejp_3776_:
{
lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3788_; 
v___x_3778_ = l_Lean_MessageData_ofFormat(v___x_3777_);
v___x_3779_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3779_, 0, v___x_3774_);
lean_ctor_set(v___x_3779_, 1, v___x_3778_);
v___x_3780_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg___closed__3);
v___x_3781_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3781_, 0, v___x_3779_);
lean_ctor_set(v___x_3781_, 1, v___x_3780_);
v___x_3782_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3782_, 0, v___x_3781_);
lean_ctor_set(v___x_3782_, 1, v_val_3770_);
v___x_3783_ = lean_obj_once(&l_Lean_Meta_Instances_erase___redArg___closed__3, &l_Lean_Meta_Instances_erase___redArg___closed__3_once, _init_l_Lean_Meta_Instances_erase___redArg___closed__3);
v___x_3784_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3784_, 0, v___x_3782_);
lean_ctor_set(v___x_3784_, 1, v___x_3783_);
v___x_3785_ = l_Lean_indentD(v___x_3784_);
v___x_3786_ = lean_array_push(v_fst_3751_, v___x_3785_);
if (v_isShared_3754_ == 0)
{
lean_ctor_set(v___x_3753_, 1, v___x_3764_);
lean_ctor_set(v___x_3753_, 0, v___x_3786_);
v___x_3788_ = v___x_3753_;
goto v_reusejp_3787_;
}
else
{
lean_object* v_reuseFailAlloc_3789_; 
v_reuseFailAlloc_3789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3789_, 0, v___x_3786_);
lean_ctor_set(v_reuseFailAlloc_3789_, 1, v___x_3764_);
v___x_3788_ = v_reuseFailAlloc_3789_;
goto v_reusejp_3787_;
}
v_reusejp_3787_:
{
v_a_3734_ = v___x_3788_;
goto v___jp_3733_;
}
}
}
}
else
{
lean_object* v___x_3793_; 
lean_dec(v___x_3769_);
lean_dec(v_val_3755_);
if (v_isShared_3754_ == 0)
{
lean_ctor_set(v___x_3753_, 1, v___x_3764_);
v___x_3793_ = v___x_3753_;
goto v_reusejp_3792_;
}
else
{
lean_object* v_reuseFailAlloc_3794_; 
v_reuseFailAlloc_3794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3794_, 0, v_fst_3751_);
lean_ctor_set(v_reuseFailAlloc_3794_, 1, v___x_3764_);
v___x_3793_ = v_reuseFailAlloc_3794_;
goto v_reusejp_3792_;
}
v_reusejp_3792_:
{
v_a_3734_ = v___x_3793_;
goto v___jp_3733_;
}
}
}
else
{
lean_object* v_a_3795_; lean_object* v___x_3797_; uint8_t v_isShared_3798_; uint8_t v_isSharedCheck_3802_; 
lean_dec_ref(v___x_3764_);
lean_dec(v_val_3755_);
lean_del_object(v___x_3753_);
lean_dec(v_fst_3751_);
v_a_3795_ = lean_ctor_get(v___x_3767_, 0);
v_isSharedCheck_3802_ = !lean_is_exclusive(v___x_3767_);
if (v_isSharedCheck_3802_ == 0)
{
v___x_3797_ = v___x_3767_;
v_isShared_3798_ = v_isSharedCheck_3802_;
goto v_resetjp_3796_;
}
else
{
lean_inc(v_a_3795_);
lean_dec(v___x_3767_);
v___x_3797_ = lean_box(0);
v_isShared_3798_ = v_isSharedCheck_3802_;
goto v_resetjp_3796_;
}
v_resetjp_3796_:
{
lean_object* v___x_3800_; 
if (v_isShared_3798_ == 0)
{
v___x_3800_ = v___x_3797_;
goto v_reusejp_3799_;
}
else
{
lean_object* v_reuseFailAlloc_3801_; 
v_reuseFailAlloc_3801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3801_, 0, v_a_3795_);
v___x_3800_ = v_reuseFailAlloc_3801_;
goto v_reusejp_3799_;
}
v_reusejp_3799_:
{
return v___x_3800_;
}
}
}
}
else
{
lean_object* v___x_3804_; 
lean_dec(v___x_3765_);
lean_dec(v_val_3755_);
if (v_isShared_3754_ == 0)
{
lean_ctor_set(v___x_3753_, 1, v___x_3764_);
v___x_3804_ = v___x_3753_;
goto v_reusejp_3803_;
}
else
{
lean_object* v_reuseFailAlloc_3805_; 
v_reuseFailAlloc_3805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3805_, 0, v_fst_3751_);
lean_ctor_set(v_reuseFailAlloc_3805_, 1, v___x_3764_);
v___x_3804_ = v_reuseFailAlloc_3805_;
goto v_reusejp_3803_;
}
v_reusejp_3803_:
{
v_a_3734_ = v___x_3804_;
goto v___jp_3733_;
}
}
}
}
}
}
}
v___jp_3733_:
{
size_t v___x_3735_; size_t v___x_3736_; 
v___x_3735_ = ((size_t)1ULL);
v___x_3736_ = lean_usize_add(v_i_3727_, v___x_3735_);
v_i_3727_ = v___x_3736_;
v_b_3728_ = v_a_3734_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg___boxed(lean_object* v_a_3810_, lean_object* v_as_3811_, lean_object* v_sz_3812_, lean_object* v_i_3813_, lean_object* v_b_3814_, lean_object* v___y_3815_, lean_object* v___y_3816_, lean_object* v___y_3817_, lean_object* v___y_3818_){
_start:
{
size_t v_sz_boxed_3819_; size_t v_i_boxed_3820_; lean_object* v_res_3821_; 
v_sz_boxed_3819_ = lean_unbox_usize(v_sz_3812_);
lean_dec(v_sz_3812_);
v_i_boxed_3820_ = lean_unbox_usize(v_i_3813_);
lean_dec(v_i_3813_);
v_res_3821_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg(v_a_3810_, v_as_3811_, v_sz_boxed_3819_, v_i_boxed_3820_, v_b_3814_, v___y_3815_, v___y_3816_, v___y_3817_);
lean_dec(v___y_3817_);
lean_dec_ref(v___y_3816_);
lean_dec_ref(v___y_3815_);
lean_dec_ref(v_as_3811_);
lean_dec_ref(v_a_3810_);
return v_res_3821_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg(lean_object* v_as_3822_, size_t v_sz_3823_, size_t v_i_3824_, lean_object* v_b_3825_, lean_object* v___y_3826_, lean_object* v___y_3827_, lean_object* v___y_3828_, lean_object* v___y_3829_){
_start:
{
lean_object* v_a_3832_; uint8_t v___x_3836_; 
v___x_3836_ = lean_usize_dec_lt(v_i_3824_, v_sz_3823_);
if (v___x_3836_ == 0)
{
lean_object* v___x_3837_; 
v___x_3837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3837_, 0, v_b_3825_);
return v___x_3837_;
}
else
{
lean_object* v___x_3838_; lean_object* v_a_3839_; lean_object* v___x_3840_; lean_object* v___x_3841_; 
v___x_3838_ = lean_box(0);
v_a_3839_ = lean_array_uget_borrowed(v_as_3822_, v_i_3824_);
v___x_3840_ = l_Lean_Expr_fvarId_x21(v_a_3839_);
lean_inc(v___x_3840_);
v___x_3841_ = l_Lean_FVarId_getBinderInfo___redArg(v___x_3840_, v___y_3827_, v___y_3828_, v___y_3829_);
if (lean_obj_tag(v___x_3841_) == 0)
{
lean_object* v_a_3842_; uint8_t v___x_3843_; uint8_t v___x_3844_; 
v_a_3842_ = lean_ctor_get(v___x_3841_, 0);
lean_inc(v_a_3842_);
lean_dec_ref_known(v___x_3841_, 1);
v___x_3843_ = lean_unbox(v_a_3842_);
lean_dec(v_a_3842_);
v___x_3844_ = l_Lean_BinderInfo_isInstImplicit(v___x_3843_);
if (v___x_3844_ == 0)
{
lean_dec(v___x_3840_);
v_a_3832_ = v___x_3838_;
goto v___jp_3831_;
}
else
{
lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; 
v___x_3845_ = lean_st_ref_take(v___y_3826_);
v___x_3846_ = l_Lean_CollectFVars_State_add(v___x_3845_, v___x_3840_);
v___x_3847_ = lean_st_ref_put(v___y_3826_, v___x_3846_);
v_a_3832_ = v___x_3838_;
goto v___jp_3831_;
}
}
else
{
lean_object* v_a_3848_; lean_object* v___x_3850_; uint8_t v_isShared_3851_; uint8_t v_isSharedCheck_3855_; 
lean_dec(v___x_3840_);
v_a_3848_ = lean_ctor_get(v___x_3841_, 0);
v_isSharedCheck_3855_ = !lean_is_exclusive(v___x_3841_);
if (v_isSharedCheck_3855_ == 0)
{
v___x_3850_ = v___x_3841_;
v_isShared_3851_ = v_isSharedCheck_3855_;
goto v_resetjp_3849_;
}
else
{
lean_inc(v_a_3848_);
lean_dec(v___x_3841_);
v___x_3850_ = lean_box(0);
v_isShared_3851_ = v_isSharedCheck_3855_;
goto v_resetjp_3849_;
}
v_resetjp_3849_:
{
lean_object* v___x_3853_; 
if (v_isShared_3851_ == 0)
{
v___x_3853_ = v___x_3850_;
goto v_reusejp_3852_;
}
else
{
lean_object* v_reuseFailAlloc_3854_; 
v_reuseFailAlloc_3854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3854_, 0, v_a_3848_);
v___x_3853_ = v_reuseFailAlloc_3854_;
goto v_reusejp_3852_;
}
v_reusejp_3852_:
{
return v___x_3853_;
}
}
}
}
v___jp_3831_:
{
size_t v___x_3833_; size_t v___x_3834_; 
v___x_3833_ = ((size_t)1ULL);
v___x_3834_ = lean_usize_add(v_i_3824_, v___x_3833_);
v_i_3824_ = v___x_3834_;
v_b_3825_ = v_a_3832_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg___boxed(lean_object* v_as_3856_, lean_object* v_sz_3857_, lean_object* v_i_3858_, lean_object* v_b_3859_, lean_object* v___y_3860_, lean_object* v___y_3861_, lean_object* v___y_3862_, lean_object* v___y_3863_, lean_object* v___y_3864_){
_start:
{
size_t v_sz_boxed_3865_; size_t v_i_boxed_3866_; lean_object* v_res_3867_; 
v_sz_boxed_3865_ = lean_unbox_usize(v_sz_3857_);
lean_dec(v_sz_3857_);
v_i_boxed_3866_ = lean_unbox_usize(v_i_3858_);
lean_dec(v_i_3858_);
v_res_3867_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg(v_as_3856_, v_sz_boxed_3865_, v_i_boxed_3866_, v_b_3859_, v___y_3860_, v___y_3861_, v___y_3862_, v___y_3863_);
lean_dec(v___y_3863_);
lean_dec_ref(v___y_3862_);
lean_dec_ref(v___y_3861_);
lean_dec(v___y_3860_);
lean_dec_ref(v_as_3856_);
return v_res_3867_;
}
}
static lean_object* _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; 
v___x_3870_ = ((lean_object*)(l_Lean_Meta_checkImpossibleInstance___lam__0___closed__0));
v___x_3871_ = lean_box(1);
v___x_3872_ = l_Lean_CollectFVars_State_ofFVarSet(v___x_3871_, v___x_3870_);
return v___x_3872_;
}
}
static lean_object* _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__5(void){
_start:
{
lean_object* v___x_3879_; lean_object* v___x_3880_; 
v___x_3879_ = ((lean_object*)(l_Lean_Meta_checkImpossibleInstance___lam__0___closed__4));
v___x_3880_ = l_Lean_stringToMessageData(v___x_3879_);
return v___x_3880_;
}
}
static lean_object* _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__7(void){
_start:
{
lean_object* v___x_3882_; lean_object* v___x_3883_; 
v___x_3882_ = ((lean_object*)(l_Lean_Meta_checkImpossibleInstance___lam__0___closed__6));
v___x_3883_ = l_Lean_stringToMessageData(v___x_3882_);
return v___x_3883_;
}
}
static lean_object* _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__9(void){
_start:
{
lean_object* v___x_3885_; lean_object* v___x_3886_; 
v___x_3885_ = ((lean_object*)(l_Lean_Meta_checkImpossibleInstance___lam__0___closed__8));
v___x_3886_ = l_Lean_stringToMessageData(v___x_3885_);
return v___x_3886_;
}
}
static lean_object* _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__11(void){
_start:
{
lean_object* v___x_3888_; lean_object* v___x_3889_; 
v___x_3888_ = ((lean_object*)(l_Lean_Meta_checkImpossibleInstance___lam__0___closed__10));
v___x_3889_ = l_Lean_stringToMessageData(v___x_3888_);
return v___x_3889_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0(lean_object* v___x_3891_, lean_object* v_args_3892_, lean_object* v_ty_3893_, lean_object* v___y_3894_, lean_object* v___y_3895_, lean_object* v___y_3896_, lean_object* v___y_3897_){
_start:
{
lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; 
v___x_3899_ = lean_unsigned_to_nat(0u);
v___x_3900_ = lean_obj_once(&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__1, &l_Lean_Meta_checkImpossibleInstance___lam__0___closed__1_once, _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__1);
v___x_3901_ = lean_st_mk_ref(v___x_3900_);
v___x_3902_ = l_Lean_Expr_collectFVars(v_ty_3893_, v___x_3901_, v___y_3894_, v___y_3895_, v___y_3896_, v___y_3897_);
if (lean_obj_tag(v___x_3902_) == 0)
{
lean_object* v___x_3903_; size_t v_sz_3904_; size_t v___x_3905_; lean_object* v___x_3906_; 
lean_dec_ref_known(v___x_3902_, 1);
v___x_3903_ = lean_box(0);
v_sz_3904_ = lean_array_size(v_args_3892_);
v___x_3905_ = ((size_t)0ULL);
v___x_3906_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg(v_args_3892_, v_sz_3904_, v___x_3905_, v___x_3903_, v___x_3901_, v___y_3894_, v___y_3896_, v___y_3897_);
if (lean_obj_tag(v___x_3906_) == 0)
{
lean_object* v___x_3908_; uint8_t v_isShared_3909_; uint8_t v_isSharedCheck_3977_; 
v_isSharedCheck_3977_ = !lean_is_exclusive(v___x_3906_);
if (v_isSharedCheck_3977_ == 0)
{
lean_object* v_unused_3978_; 
v_unused_3978_ = lean_ctor_get(v___x_3906_, 0);
lean_dec(v_unused_3978_);
v___x_3908_ = v___x_3906_;
v_isShared_3909_ = v_isSharedCheck_3977_;
goto v_resetjp_3907_;
}
else
{
lean_dec(v___x_3906_);
v___x_3908_ = lean_box(0);
v_isShared_3909_ = v_isSharedCheck_3977_;
goto v_resetjp_3907_;
}
v_resetjp_3907_:
{
lean_object* v___x_3910_; lean_object* v___x_3911_; 
v___x_3910_ = lean_st_ref_get(v___x_3901_);
lean_dec(v___x_3901_);
v___x_3911_ = l_Lean_CollectFVars_State_addDependencies(v___x_3910_, v___y_3894_, v___y_3895_, v___y_3896_, v___y_3897_);
if (lean_obj_tag(v___x_3911_) == 0)
{
lean_object* v_a_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; 
v_a_3912_ = lean_ctor_get(v___x_3911_, 0);
lean_inc(v_a_3912_);
lean_dec_ref_known(v___x_3911_, 1);
v___x_3913_ = lean_unsigned_to_nat(1u);
v___x_3914_ = ((lean_object*)(l_Lean_Meta_checkImpossibleInstance___lam__0___closed__3));
v___x_3915_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg(v_a_3912_, v_args_3892_, v_sz_3904_, v___x_3905_, v___x_3914_, v___y_3894_, v___y_3896_, v___y_3897_);
lean_dec(v_a_3912_);
if (lean_obj_tag(v___x_3915_) == 0)
{
lean_object* v_a_3916_; lean_object* v___x_3918_; uint8_t v_isShared_3919_; uint8_t v_isSharedCheck_3960_; 
v_a_3916_ = lean_ctor_get(v___x_3915_, 0);
v_isSharedCheck_3960_ = !lean_is_exclusive(v___x_3915_);
if (v_isSharedCheck_3960_ == 0)
{
v___x_3918_ = v___x_3915_;
v_isShared_3919_ = v_isSharedCheck_3960_;
goto v_resetjp_3917_;
}
else
{
lean_inc(v_a_3916_);
lean_dec(v___x_3915_);
v___x_3918_ = lean_box(0);
v_isShared_3919_ = v_isSharedCheck_3960_;
goto v_resetjp_3917_;
}
v_resetjp_3917_:
{
lean_object* v_fst_3920_; lean_object* v___x_3922_; uint8_t v_isShared_3923_; uint8_t v_isSharedCheck_3958_; 
v_fst_3920_ = lean_ctor_get(v_a_3916_, 0);
v_isSharedCheck_3958_ = !lean_is_exclusive(v_a_3916_);
if (v_isSharedCheck_3958_ == 0)
{
lean_object* v_unused_3959_; 
v_unused_3959_ = lean_ctor_get(v_a_3916_, 1);
lean_dec(v_unused_3959_);
v___x_3922_ = v_a_3916_;
v_isShared_3923_ = v_isSharedCheck_3958_;
goto v_resetjp_3921_;
}
else
{
lean_inc(v_fst_3920_);
lean_dec(v_a_3916_);
v___x_3922_ = lean_box(0);
v_isShared_3923_ = v_isSharedCheck_3958_;
goto v_resetjp_3921_;
}
v_resetjp_3921_:
{
lean_object* v___x_3924_; uint8_t v___x_3925_; 
v___x_3924_ = lean_array_get_size(v_fst_3920_);
v___x_3925_ = lean_nat_dec_eq(v___x_3924_, v___x_3899_);
if (v___x_3925_ == 0)
{
lean_object* v___x_3926_; lean_object* v___x_3927_; lean_object* v___x_3929_; 
lean_del_object(v___x_3918_);
v___x_3926_ = lean_obj_once(&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__5, &l_Lean_Meta_checkImpossibleInstance___lam__0___closed__5_once, _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__5);
v___x_3927_ = l_Nat_reprFast(v___x_3924_);
if (v_isShared_3909_ == 0)
{
lean_ctor_set_tag(v___x_3908_, 3);
lean_ctor_set(v___x_3908_, 0, v___x_3927_);
v___x_3929_ = v___x_3908_;
goto v_reusejp_3928_;
}
else
{
lean_object* v_reuseFailAlloc_3954_; 
v_reuseFailAlloc_3954_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3954_, 0, v___x_3927_);
v___x_3929_ = v_reuseFailAlloc_3954_;
goto v_reusejp_3928_;
}
v_reusejp_3928_:
{
lean_object* v___x_3930_; lean_object* v___x_3932_; 
v___x_3930_ = l_Lean_MessageData_ofFormat(v___x_3929_);
if (v_isShared_3923_ == 0)
{
lean_ctor_set_tag(v___x_3922_, 7);
lean_ctor_set(v___x_3922_, 1, v___x_3930_);
lean_ctor_set(v___x_3922_, 0, v___x_3926_);
v___x_3932_ = v___x_3922_;
goto v_reusejp_3931_;
}
else
{
lean_object* v_reuseFailAlloc_3953_; 
v_reuseFailAlloc_3953_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3953_, 0, v___x_3926_);
lean_ctor_set(v_reuseFailAlloc_3953_, 1, v___x_3930_);
v___x_3932_ = v_reuseFailAlloc_3953_;
goto v_reusejp_3931_;
}
v_reusejp_3931_:
{
lean_object* v___x_3933_; lean_object* v___x_3934_; lean_object* v___y_3936_; uint8_t v___x_3950_; 
v___x_3933_ = lean_obj_once(&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__7, &l_Lean_Meta_checkImpossibleInstance___lam__0___closed__7_once, _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__7);
v___x_3934_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3934_, 0, v___x_3932_);
lean_ctor_set(v___x_3934_, 1, v___x_3933_);
v___x_3950_ = lean_nat_dec_eq(v___x_3924_, v___x_3913_);
if (v___x_3950_ == 0)
{
lean_object* v___x_3951_; 
v___x_3951_ = ((lean_object*)(l_Lean_Meta_checkImpossibleInstance___lam__0___closed__12));
v___y_3936_ = v___x_3951_;
goto v___jp_3935_;
}
else
{
lean_object* v___x_3952_; 
v___x_3952_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__0));
v___y_3936_ = v___x_3952_;
goto v___jp_3935_;
}
v___jp_3935_:
{
lean_object* v___x_3937_; lean_object* v___x_3938_; lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; lean_object* v___x_3942_; lean_object* v___x_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; lean_object* v___x_3946_; uint8_t v___x_3947_; 
lean_inc_ref(v___y_3936_);
v___x_3937_ = l_Lean_stringToMessageData(v___y_3936_);
v___x_3938_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3938_, 0, v___x_3934_);
lean_ctor_set(v___x_3938_, 1, v___x_3937_);
v___x_3939_ = lean_obj_once(&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__9, &l_Lean_Meta_checkImpossibleInstance___lam__0___closed__9_once, _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__9);
v___x_3940_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3940_, 0, v___x_3938_);
lean_ctor_set(v___x_3940_, 1, v___x_3939_);
v___x_3941_ = lean_array_to_list(v_fst_3920_);
v___x_3942_ = l_Lean_MessageData_nil;
v___x_3943_ = l_Lean_MessageData_joinSep(v___x_3941_, v___x_3942_);
v___x_3944_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3944_, 0, v___x_3940_);
lean_ctor_set(v___x_3944_, 1, v___x_3943_);
v___x_3945_ = lean_obj_once(&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__11, &l_Lean_Meta_checkImpossibleInstance___lam__0___closed__11_once, _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__11);
v___x_3946_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3946_, 0, v___x_3944_);
lean_ctor_set(v___x_3946_, 1, v___x_3945_);
v___x_3947_ = l_Lean_Expr_hasSorry(v___x_3891_);
if (v___x_3947_ == 0)
{
lean_object* v___x_3948_; 
v___x_3948_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4___redArg(v___x_3946_, v___y_3894_, v___y_3895_, v___y_3896_, v___y_3897_);
return v___x_3948_;
}
else
{
lean_object* v___x_3949_; 
v___x_3949_ = l_Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4(v___x_3946_, v___y_3894_, v___y_3895_, v___y_3896_, v___y_3897_);
return v___x_3949_;
}
}
}
}
}
else
{
lean_object* v___x_3956_; 
lean_del_object(v___x_3922_);
lean_dec(v_fst_3920_);
lean_del_object(v___x_3908_);
if (v_isShared_3919_ == 0)
{
lean_ctor_set(v___x_3918_, 0, v___x_3903_);
v___x_3956_ = v___x_3918_;
goto v_reusejp_3955_;
}
else
{
lean_object* v_reuseFailAlloc_3957_; 
v_reuseFailAlloc_3957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3957_, 0, v___x_3903_);
v___x_3956_ = v_reuseFailAlloc_3957_;
goto v_reusejp_3955_;
}
v_reusejp_3955_:
{
return v___x_3956_;
}
}
}
}
}
else
{
lean_object* v_a_3961_; lean_object* v___x_3963_; uint8_t v_isShared_3964_; uint8_t v_isSharedCheck_3968_; 
lean_del_object(v___x_3908_);
v_a_3961_ = lean_ctor_get(v___x_3915_, 0);
v_isSharedCheck_3968_ = !lean_is_exclusive(v___x_3915_);
if (v_isSharedCheck_3968_ == 0)
{
v___x_3963_ = v___x_3915_;
v_isShared_3964_ = v_isSharedCheck_3968_;
goto v_resetjp_3962_;
}
else
{
lean_inc(v_a_3961_);
lean_dec(v___x_3915_);
v___x_3963_ = lean_box(0);
v_isShared_3964_ = v_isSharedCheck_3968_;
goto v_resetjp_3962_;
}
v_resetjp_3962_:
{
lean_object* v___x_3966_; 
if (v_isShared_3964_ == 0)
{
v___x_3966_ = v___x_3963_;
goto v_reusejp_3965_;
}
else
{
lean_object* v_reuseFailAlloc_3967_; 
v_reuseFailAlloc_3967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3967_, 0, v_a_3961_);
v___x_3966_ = v_reuseFailAlloc_3967_;
goto v_reusejp_3965_;
}
v_reusejp_3965_:
{
return v___x_3966_;
}
}
}
}
else
{
lean_object* v_a_3969_; lean_object* v___x_3971_; uint8_t v_isShared_3972_; uint8_t v_isSharedCheck_3976_; 
lean_del_object(v___x_3908_);
v_a_3969_ = lean_ctor_get(v___x_3911_, 0);
v_isSharedCheck_3976_ = !lean_is_exclusive(v___x_3911_);
if (v_isSharedCheck_3976_ == 0)
{
v___x_3971_ = v___x_3911_;
v_isShared_3972_ = v_isSharedCheck_3976_;
goto v_resetjp_3970_;
}
else
{
lean_inc(v_a_3969_);
lean_dec(v___x_3911_);
v___x_3971_ = lean_box(0);
v_isShared_3972_ = v_isSharedCheck_3976_;
goto v_resetjp_3970_;
}
v_resetjp_3970_:
{
lean_object* v___x_3974_; 
if (v_isShared_3972_ == 0)
{
v___x_3974_ = v___x_3971_;
goto v_reusejp_3973_;
}
else
{
lean_object* v_reuseFailAlloc_3975_; 
v_reuseFailAlloc_3975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3975_, 0, v_a_3969_);
v___x_3974_ = v_reuseFailAlloc_3975_;
goto v_reusejp_3973_;
}
v_reusejp_3973_:
{
return v___x_3974_;
}
}
}
}
}
else
{
lean_dec(v___x_3901_);
return v___x_3906_;
}
}
else
{
lean_dec(v___x_3901_);
return v___x_3902_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___boxed(lean_object* v___x_3979_, lean_object* v_args_3980_, lean_object* v_ty_3981_, lean_object* v___y_3982_, lean_object* v___y_3983_, lean_object* v___y_3984_, lean_object* v___y_3985_, lean_object* v___y_3986_){
_start:
{
lean_object* v_res_3987_; 
v_res_3987_ = l_Lean_Meta_checkImpossibleInstance___lam__0(v___x_3979_, v_args_3980_, v_ty_3981_, v___y_3982_, v___y_3983_, v___y_3984_, v___y_3985_);
lean_dec(v___y_3985_);
lean_dec_ref(v___y_3984_);
lean_dec(v___y_3983_);
lean_dec_ref(v___y_3982_);
lean_dec_ref(v_args_3980_);
lean_dec_ref(v___x_3979_);
return v_res_3987_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_hasUnusedForallBindersWhere___at___00Lean_Meta_checkImpossibleInstance_spec__0(lean_object* v_e_3988_){
_start:
{
lean_object* v___x_3989_; 
v___x_3989_ = l_Lean_Expr_cleanupAnnotations(v_e_3988_);
lean_dec_ref(v_e_3988_);
switch(lean_obj_tag(v___x_3989_))
{
case 7:
{
lean_object* v_body_3990_; uint8_t v_binderInfo_3991_; uint8_t v___x_3992_; 
v_body_3990_ = lean_ctor_get(v___x_3989_, 2);
lean_inc_ref(v_body_3990_);
v_binderInfo_3991_ = lean_ctor_get_uint8(v___x_3989_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v___x_3989_, 3);
v___x_3992_ = l_Lean_BinderInfo_isInstImplicit(v_binderInfo_3991_);
if (v___x_3992_ == 0)
{
lean_object* v___x_3993_; uint8_t v___x_3994_; 
v___x_3993_ = lean_unsigned_to_nat(0u);
v___x_3994_ = lean_expr_has_loose_bvar(v_body_3990_, v___x_3993_);
if (v___x_3994_ == 0)
{
uint8_t v___x_3995_; 
lean_dec_ref(v_body_3990_);
v___x_3995_ = 1;
return v___x_3995_;
}
else
{
v_e_3988_ = v_body_3990_;
goto _start;
}
}
else
{
v_e_3988_ = v_body_3990_;
goto _start;
}
}
case 8:
{
lean_object* v_body_3998_; 
v_body_3998_ = lean_ctor_get(v___x_3989_, 3);
lean_inc_ref(v_body_3998_);
lean_dec_ref_known(v___x_3989_, 4);
v_e_3988_ = v_body_3998_;
goto _start;
}
default: 
{
uint8_t v___x_4000_; 
lean_dec_ref(v___x_3989_);
v___x_4000_ = 0;
return v___x_4000_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_hasUnusedForallBindersWhere___at___00Lean_Meta_checkImpossibleInstance_spec__0___boxed(lean_object* v_e_4001_){
_start:
{
uint8_t v_res_4002_; lean_object* v_r_4003_; 
v_res_4002_ = l_Lean_Expr_hasUnusedForallBindersWhere___at___00Lean_Meta_checkImpossibleInstance_spec__0(v_e_4001_);
v_r_4003_ = lean_box(v_res_4002_);
return v_r_4003_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkImpossibleInstance(lean_object* v_cinfo_4004_, lean_object* v_a_4005_, lean_object* v_a_4006_, lean_object* v_a_4007_, lean_object* v_a_4008_){
_start:
{
lean_object* v___x_4010_; uint8_t v___x_4011_; 
v___x_4010_ = l_Lean_ConstantInfo_type(v_cinfo_4004_);
lean_inc_ref(v___x_4010_);
v___x_4011_ = l_Lean_Expr_hasUnusedForallBindersWhere___at___00Lean_Meta_checkImpossibleInstance_spec__0(v___x_4010_);
if (v___x_4011_ == 0)
{
lean_object* v___x_4012_; lean_object* v___x_4013_; 
lean_dec_ref(v___x_4010_);
v___x_4012_ = lean_box(0);
v___x_4013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4013_, 0, v___x_4012_);
return v___x_4013_;
}
else
{
lean_object* v___f_4014_; uint8_t v___x_4015_; lean_object* v___x_4016_; 
lean_inc_ref(v___x_4010_);
v___f_4014_ = lean_alloc_closure((void*)(l_Lean_Meta_checkImpossibleInstance___lam__0___boxed), 8, 1);
lean_closure_set(v___f_4014_, 0, v___x_4010_);
v___x_4015_ = 0;
v___x_4016_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5___redArg(v___x_4010_, v___f_4014_, v___x_4015_, v_a_4005_, v_a_4006_, v_a_4007_, v_a_4008_);
return v___x_4016_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkImpossibleInstance___boxed(lean_object* v_cinfo_4017_, lean_object* v_a_4018_, lean_object* v_a_4019_, lean_object* v_a_4020_, lean_object* v_a_4021_, lean_object* v_a_4022_){
_start:
{
lean_object* v_res_4023_; 
v_res_4023_ = l_Lean_Meta_checkImpossibleInstance(v_cinfo_4017_, v_a_4018_, v_a_4019_, v_a_4020_, v_a_4021_);
lean_dec(v_a_4021_);
lean_dec_ref(v_a_4020_);
lean_dec(v_a_4019_);
lean_dec_ref(v_a_4018_);
lean_dec_ref(v_cinfo_4017_);
return v_res_4023_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1(lean_object* v_as_4024_, size_t v_sz_4025_, size_t v_i_4026_, lean_object* v_b_4027_, lean_object* v___y_4028_, lean_object* v___y_4029_, lean_object* v___y_4030_, lean_object* v___y_4031_, lean_object* v___y_4032_){
_start:
{
lean_object* v___x_4034_; 
v___x_4034_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg(v_as_4024_, v_sz_4025_, v_i_4026_, v_b_4027_, v___y_4028_, v___y_4029_, v___y_4031_, v___y_4032_);
return v___x_4034_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___boxed(lean_object* v_as_4035_, lean_object* v_sz_4036_, lean_object* v_i_4037_, lean_object* v_b_4038_, lean_object* v___y_4039_, lean_object* v___y_4040_, lean_object* v___y_4041_, lean_object* v___y_4042_, lean_object* v___y_4043_, lean_object* v___y_4044_){
_start:
{
size_t v_sz_boxed_4045_; size_t v_i_boxed_4046_; lean_object* v_res_4047_; 
v_sz_boxed_4045_ = lean_unbox_usize(v_sz_4036_);
lean_dec(v_sz_4036_);
v_i_boxed_4046_ = lean_unbox_usize(v_i_4037_);
lean_dec(v_i_4037_);
v_res_4047_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1(v_as_4035_, v_sz_boxed_4045_, v_i_boxed_4046_, v_b_4038_, v___y_4039_, v___y_4040_, v___y_4041_, v___y_4042_, v___y_4043_);
lean_dec(v___y_4043_);
lean_dec_ref(v___y_4042_);
lean_dec(v___y_4041_);
lean_dec_ref(v___y_4040_);
lean_dec(v___y_4039_);
lean_dec_ref(v_as_4035_);
return v_res_4047_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__2(lean_object* v_00_u03b2_4048_, lean_object* v_k_4049_, lean_object* v_t_4050_){
_start:
{
uint8_t v___x_4051_; 
v___x_4051_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg(v_k_4049_, v_t_4050_);
return v___x_4051_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__2___boxed(lean_object* v_00_u03b2_4052_, lean_object* v_k_4053_, lean_object* v_t_4054_){
_start:
{
uint8_t v_res_4055_; lean_object* v_r_4056_; 
v_res_4055_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__2(v_00_u03b2_4052_, v_k_4053_, v_t_4054_);
lean_dec(v_t_4054_);
lean_dec(v_k_4053_);
v_r_4056_ = lean_box(v_res_4055_);
return v_r_4056_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3(lean_object* v_a_4057_, lean_object* v_as_4058_, size_t v_sz_4059_, size_t v_i_4060_, lean_object* v_b_4061_, lean_object* v___y_4062_, lean_object* v___y_4063_, lean_object* v___y_4064_, lean_object* v___y_4065_){
_start:
{
lean_object* v___x_4067_; 
v___x_4067_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg(v_a_4057_, v_as_4058_, v_sz_4059_, v_i_4060_, v_b_4061_, v___y_4062_, v___y_4064_, v___y_4065_);
return v___x_4067_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___boxed(lean_object* v_a_4068_, lean_object* v_as_4069_, lean_object* v_sz_4070_, lean_object* v_i_4071_, lean_object* v_b_4072_, lean_object* v___y_4073_, lean_object* v___y_4074_, lean_object* v___y_4075_, lean_object* v___y_4076_, lean_object* v___y_4077_){
_start:
{
size_t v_sz_boxed_4078_; size_t v_i_boxed_4079_; lean_object* v_res_4080_; 
v_sz_boxed_4078_ = lean_unbox_usize(v_sz_4070_);
lean_dec(v_sz_4070_);
v_i_boxed_4079_ = lean_unbox_usize(v_i_4071_);
lean_dec(v_i_4071_);
v_res_4080_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3(v_a_4068_, v_as_4069_, v_sz_boxed_4078_, v_i_boxed_4079_, v_b_4072_, v___y_4073_, v___y_4074_, v___y_4075_, v___y_4076_);
lean_dec(v___y_4076_);
lean_dec_ref(v___y_4075_);
lean_dec(v___y_4074_);
lean_dec_ref(v___y_4073_);
lean_dec_ref(v_as_4069_);
lean_dec_ref(v_a_4068_);
return v_res_4080_;
}
}
static lean_object* _init_l_Lean_Meta_checkNonClassInstance___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4082_; lean_object* v___x_4083_; 
v___x_4082_ = ((lean_object*)(l_Lean_Meta_checkNonClassInstance___lam__0___closed__0));
v___x_4083_ = l_Lean_stringToMessageData(v___x_4082_);
return v___x_4083_;
}
}
static lean_object* _init_l_Lean_Meta_checkNonClassInstance___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4085_; lean_object* v___x_4086_; 
v___x_4085_ = ((lean_object*)(l_Lean_Meta_checkNonClassInstance___lam__0___closed__2));
v___x_4086_ = l_Lean_stringToMessageData(v___x_4085_);
return v___x_4086_;
}
}
static lean_object* _init_l_Lean_Meta_checkNonClassInstance___lam__0___closed__5(void){
_start:
{
lean_object* v___x_4088_; lean_object* v___x_4089_; 
v___x_4088_ = ((lean_object*)(l_Lean_Meta_checkNonClassInstance___lam__0___closed__4));
v___x_4089_ = l_Lean_stringToMessageData(v___x_4088_);
return v___x_4089_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkNonClassInstance___lam__0(lean_object* v_c_4090_, lean_object* v_x_4091_, lean_object* v_target_4092_, lean_object* v___y_4093_, lean_object* v___y_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_){
_start:
{
lean_object* v___x_4098_; 
lean_inc_ref(v_target_4092_);
v___x_4098_ = l_Lean_Meta_isClass_x3f(v_target_4092_, v___y_4093_, v___y_4094_, v___y_4095_, v___y_4096_);
if (lean_obj_tag(v___x_4098_) == 0)
{
lean_object* v_a_4099_; lean_object* v___x_4101_; uint8_t v_isShared_4102_; uint8_t v_isSharedCheck_4117_; 
v_a_4099_ = lean_ctor_get(v___x_4098_, 0);
v_isSharedCheck_4117_ = !lean_is_exclusive(v___x_4098_);
if (v_isSharedCheck_4117_ == 0)
{
v___x_4101_ = v___x_4098_;
v_isShared_4102_ = v_isSharedCheck_4117_;
goto v_resetjp_4100_;
}
else
{
lean_inc(v_a_4099_);
lean_dec(v___x_4098_);
v___x_4101_ = lean_box(0);
v_isShared_4102_ = v_isSharedCheck_4117_;
goto v_resetjp_4100_;
}
v_resetjp_4100_:
{
if (lean_obj_tag(v_a_4099_) == 0)
{
lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; 
lean_del_object(v___x_4101_);
v___x_4103_ = lean_obj_once(&l_Lean_Meta_checkNonClassInstance___lam__0___closed__1, &l_Lean_Meta_checkNonClassInstance___lam__0___closed__1_once, _init_l_Lean_Meta_checkNonClassInstance___lam__0___closed__1);
v___x_4104_ = l_Lean_MessageData_ofExpr(v_c_4090_);
v___x_4105_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4105_, 0, v___x_4103_);
lean_ctor_set(v___x_4105_, 1, v___x_4104_);
v___x_4106_ = lean_obj_once(&l_Lean_Meta_checkNonClassInstance___lam__0___closed__3, &l_Lean_Meta_checkNonClassInstance___lam__0___closed__3_once, _init_l_Lean_Meta_checkNonClassInstance___lam__0___closed__3);
v___x_4107_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4107_, 0, v___x_4105_);
lean_ctor_set(v___x_4107_, 1, v___x_4106_);
v___x_4108_ = l_Lean_MessageData_ofExpr(v_target_4092_);
v___x_4109_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4109_, 0, v___x_4107_);
lean_ctor_set(v___x_4109_, 1, v___x_4108_);
v___x_4110_ = lean_obj_once(&l_Lean_Meta_checkNonClassInstance___lam__0___closed__5, &l_Lean_Meta_checkNonClassInstance___lam__0___closed__5_once, _init_l_Lean_Meta_checkNonClassInstance___lam__0___closed__5);
v___x_4111_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4111_, 0, v___x_4109_);
lean_ctor_set(v___x_4111_, 1, v___x_4110_);
v___x_4112_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4___redArg(v___x_4111_, v___y_4093_, v___y_4094_, v___y_4095_, v___y_4096_);
return v___x_4112_;
}
else
{
lean_object* v___x_4113_; lean_object* v___x_4115_; 
lean_dec_ref_known(v_a_4099_, 1);
lean_dec_ref(v_target_4092_);
lean_dec_ref(v_c_4090_);
v___x_4113_ = lean_box(0);
if (v_isShared_4102_ == 0)
{
lean_ctor_set(v___x_4101_, 0, v___x_4113_);
v___x_4115_ = v___x_4101_;
goto v_reusejp_4114_;
}
else
{
lean_object* v_reuseFailAlloc_4116_; 
v_reuseFailAlloc_4116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4116_, 0, v___x_4113_);
v___x_4115_ = v_reuseFailAlloc_4116_;
goto v_reusejp_4114_;
}
v_reusejp_4114_:
{
return v___x_4115_;
}
}
}
}
else
{
lean_object* v_a_4118_; lean_object* v___x_4120_; uint8_t v_isShared_4121_; uint8_t v_isSharedCheck_4125_; 
lean_dec_ref(v_target_4092_);
lean_dec_ref(v_c_4090_);
v_a_4118_ = lean_ctor_get(v___x_4098_, 0);
v_isSharedCheck_4125_ = !lean_is_exclusive(v___x_4098_);
if (v_isSharedCheck_4125_ == 0)
{
v___x_4120_ = v___x_4098_;
v_isShared_4121_ = v_isSharedCheck_4125_;
goto v_resetjp_4119_;
}
else
{
lean_inc(v_a_4118_);
lean_dec(v___x_4098_);
v___x_4120_ = lean_box(0);
v_isShared_4121_ = v_isSharedCheck_4125_;
goto v_resetjp_4119_;
}
v_resetjp_4119_:
{
lean_object* v___x_4123_; 
if (v_isShared_4121_ == 0)
{
v___x_4123_ = v___x_4120_;
goto v_reusejp_4122_;
}
else
{
lean_object* v_reuseFailAlloc_4124_; 
v_reuseFailAlloc_4124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4124_, 0, v_a_4118_);
v___x_4123_ = v_reuseFailAlloc_4124_;
goto v_reusejp_4122_;
}
v_reusejp_4122_:
{
return v___x_4123_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkNonClassInstance___lam__0___boxed(lean_object* v_c_4126_, lean_object* v_x_4127_, lean_object* v_target_4128_, lean_object* v___y_4129_, lean_object* v___y_4130_, lean_object* v___y_4131_, lean_object* v___y_4132_, lean_object* v___y_4133_){
_start:
{
lean_object* v_res_4134_; 
v_res_4134_ = l_Lean_Meta_checkNonClassInstance___lam__0(v_c_4126_, v_x_4127_, v_target_4128_, v___y_4129_, v___y_4130_, v___y_4131_, v___y_4132_);
lean_dec(v___y_4132_);
lean_dec_ref(v___y_4131_);
lean_dec(v___y_4130_);
lean_dec_ref(v___y_4129_);
lean_dec_ref(v_x_4127_);
return v_res_4134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkNonClassInstance(lean_object* v_c_4135_, lean_object* v_a_4136_, lean_object* v_a_4137_, lean_object* v_a_4138_, lean_object* v_a_4139_){
_start:
{
lean_object* v___f_4141_; lean_object* v___x_4142_; 
lean_inc_ref(v_c_4135_);
v___f_4141_ = lean_alloc_closure((void*)(l_Lean_Meta_checkNonClassInstance___lam__0___boxed), 8, 1);
lean_closure_set(v___f_4141_, 0, v_c_4135_);
lean_inc(v_a_4139_);
lean_inc_ref(v_a_4138_);
lean_inc(v_a_4137_);
lean_inc_ref(v_a_4136_);
v___x_4142_ = lean_infer_type(v_c_4135_, v_a_4136_, v_a_4137_, v_a_4138_, v_a_4139_);
if (lean_obj_tag(v___x_4142_) == 0)
{
lean_object* v_a_4143_; uint8_t v___x_4144_; lean_object* v___x_4145_; 
v_a_4143_ = lean_ctor_get(v___x_4142_, 0);
lean_inc(v_a_4143_);
lean_dec_ref_known(v___x_4142_, 1);
v___x_4144_ = 0;
v___x_4145_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(v_a_4143_, v___f_4141_, v___x_4144_, v___x_4144_, v_a_4136_, v_a_4137_, v_a_4138_, v_a_4139_);
return v___x_4145_;
}
else
{
lean_object* v_a_4146_; lean_object* v___x_4148_; uint8_t v_isShared_4149_; uint8_t v_isSharedCheck_4153_; 
lean_dec_ref(v___f_4141_);
v_a_4146_ = lean_ctor_get(v___x_4142_, 0);
v_isSharedCheck_4153_ = !lean_is_exclusive(v___x_4142_);
if (v_isSharedCheck_4153_ == 0)
{
v___x_4148_ = v___x_4142_;
v_isShared_4149_ = v_isSharedCheck_4153_;
goto v_resetjp_4147_;
}
else
{
lean_inc(v_a_4146_);
lean_dec(v___x_4142_);
v___x_4148_ = lean_box(0);
v_isShared_4149_ = v_isSharedCheck_4153_;
goto v_resetjp_4147_;
}
v_resetjp_4147_:
{
lean_object* v___x_4151_; 
if (v_isShared_4149_ == 0)
{
v___x_4151_ = v___x_4148_;
goto v_reusejp_4150_;
}
else
{
lean_object* v_reuseFailAlloc_4152_; 
v_reuseFailAlloc_4152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4152_, 0, v_a_4146_);
v___x_4151_ = v_reuseFailAlloc_4152_;
goto v_reusejp_4150_;
}
v_reusejp_4150_:
{
return v___x_4151_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkNonClassInstance___boxed(lean_object* v_c_4154_, lean_object* v_a_4155_, lean_object* v_a_4156_, lean_object* v_a_4157_, lean_object* v_a_4158_, lean_object* v_a_4159_){
_start:
{
lean_object* v_res_4160_; 
v_res_4160_ = l_Lean_Meta_checkNonClassInstance(v_c_4154_, v_a_4155_, v_a_4156_, v_a_4157_, v_a_4158_);
lean_dec(v_a_4158_);
lean_dec_ref(v_a_4157_);
lean_dec(v_a_4156_);
lean_dec_ref(v_a_4155_);
return v_res_4160_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__2___redArg(lean_object* v_declName_4171_, lean_object* v___y_4172_){
_start:
{
lean_object* v___x_4174_; lean_object* v_env_4175_; lean_object* v___x_4176_; lean_object* v___x_4177_; 
v___x_4174_ = lean_st_ref_get(v___y_4172_);
v_env_4175_ = lean_ctor_get(v___x_4174_, 0);
lean_inc_ref(v_env_4175_);
lean_dec(v___x_4174_);
v___x_4176_ = l_Lean_Environment_getProjectionFnInfo_x3f(v_env_4175_, v_declName_4171_);
v___x_4177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4177_, 0, v___x_4176_);
return v___x_4177_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__2___redArg___boxed(lean_object* v_declName_4178_, lean_object* v___y_4179_, lean_object* v___y_4180_){
_start:
{
lean_object* v_res_4181_; 
v_res_4181_ = l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__2___redArg(v_declName_4178_, v___y_4179_);
lean_dec(v___y_4179_);
return v_res_4181_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__2(lean_object* v_declName_4182_, lean_object* v___y_4183_, lean_object* v___y_4184_, lean_object* v___y_4185_, lean_object* v___y_4186_){
_start:
{
lean_object* v___x_4188_; 
v___x_4188_ = l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__2___redArg(v_declName_4182_, v___y_4186_);
return v___x_4188_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__2___boxed(lean_object* v_declName_4189_, lean_object* v___y_4190_, lean_object* v___y_4191_, lean_object* v___y_4192_, lean_object* v___y_4193_, lean_object* v___y_4194_){
_start:
{
lean_object* v_res_4195_; 
v_res_4195_ = l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__2(v_declName_4189_, v___y_4190_, v___y_4191_, v___y_4192_, v___y_4193_);
lean_dec(v___y_4193_);
lean_dec_ref(v___y_4192_);
lean_dec(v___y_4191_);
lean_dec_ref(v___y_4190_);
return v_res_4195_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__4___redArg(lean_object* v_declName_4196_, lean_object* v___y_4197_){
_start:
{
lean_object* v___x_4199_; lean_object* v_env_4200_; uint8_t v___x_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; 
v___x_4199_ = lean_st_ref_get(v___y_4197_);
v_env_4200_ = lean_ctor_get(v___x_4199_, 0);
lean_inc_ref(v_env_4200_);
lean_dec(v___x_4199_);
v___x_4201_ = l_Lean_getReducibilityStatusCore(v_env_4200_, v_declName_4196_);
v___x_4202_ = lean_box(v___x_4201_);
v___x_4203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4203_, 0, v___x_4202_);
return v___x_4203_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__4___redArg___boxed(lean_object* v_declName_4204_, lean_object* v___y_4205_, lean_object* v___y_4206_){
_start:
{
lean_object* v_res_4207_; 
v_res_4207_ = l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__4___redArg(v_declName_4204_, v___y_4205_);
lean_dec(v___y_4205_);
return v_res_4207_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__4(lean_object* v_declName_4208_, lean_object* v___y_4209_, lean_object* v___y_4210_, lean_object* v___y_4211_, lean_object* v___y_4212_){
_start:
{
lean_object* v___x_4214_; 
v___x_4214_ = l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__4___redArg(v_declName_4208_, v___y_4212_);
return v___x_4214_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__4___boxed(lean_object* v_declName_4215_, lean_object* v___y_4216_, lean_object* v___y_4217_, lean_object* v___y_4218_, lean_object* v___y_4219_, lean_object* v___y_4220_){
_start:
{
lean_object* v_res_4221_; 
v_res_4221_ = l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__4(v_declName_4215_, v___y_4216_, v___y_4217_, v___y_4218_, v___y_4219_);
lean_dec(v___y_4219_);
lean_dec_ref(v___y_4218_);
lean_dec(v___y_4217_);
lean_dec_ref(v___y_4216_);
return v_res_4221_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__0(void){
_start:
{
lean_object* v___x_4222_; lean_object* v___x_4223_; 
v___x_4222_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0);
v___x_4223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4223_, 0, v___x_4222_);
return v___x_4223_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__1(void){
_start:
{
lean_object* v___x_4224_; lean_object* v___x_4225_; lean_object* v___x_4226_; 
v___x_4224_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__0);
v___x_4225_ = lean_unsigned_to_nat(0u);
v___x_4226_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_4226_, 0, v___x_4225_);
lean_ctor_set(v___x_4226_, 1, v___x_4225_);
lean_ctor_set(v___x_4226_, 2, v___x_4225_);
lean_ctor_set(v___x_4226_, 3, v___x_4225_);
lean_ctor_set(v___x_4226_, 4, v___x_4224_);
lean_ctor_set(v___x_4226_, 5, v___x_4224_);
lean_ctor_set(v___x_4226_, 6, v___x_4224_);
lean_ctor_set(v___x_4226_, 7, v___x_4224_);
lean_ctor_set(v___x_4226_, 8, v___x_4224_);
lean_ctor_set(v___x_4226_, 9, v___x_4224_);
lean_ctor_set(v___x_4226_, 10, v___x_4224_);
return v___x_4226_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__2(void){
_start:
{
lean_object* v___x_4227_; lean_object* v___x_4228_; lean_object* v___x_4229_; 
v___x_4227_ = lean_unsigned_to_nat(32u);
v___x_4228_ = lean_mk_empty_array_with_capacity(v___x_4227_);
v___x_4229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4229_, 0, v___x_4228_);
return v___x_4229_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__3(void){
_start:
{
size_t v___x_4230_; lean_object* v___x_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; 
v___x_4230_ = ((size_t)5ULL);
v___x_4231_ = lean_unsigned_to_nat(0u);
v___x_4232_ = lean_unsigned_to_nat(32u);
v___x_4233_ = lean_mk_empty_array_with_capacity(v___x_4232_);
v___x_4234_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__2);
v___x_4235_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_4235_, 0, v___x_4234_);
lean_ctor_set(v___x_4235_, 1, v___x_4233_);
lean_ctor_set(v___x_4235_, 2, v___x_4231_);
lean_ctor_set(v___x_4235_, 3, v___x_4231_);
lean_ctor_set_usize(v___x_4235_, 4, v___x_4230_);
return v___x_4235_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__4(void){
_start:
{
lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; 
v___x_4236_ = lean_box(1);
v___x_4237_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__3);
v___x_4238_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__0);
v___x_4239_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4239_, 0, v___x_4238_);
lean_ctor_set(v___x_4239_, 1, v___x_4237_);
lean_ctor_set(v___x_4239_, 2, v___x_4236_);
return v___x_4239_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__6(void){
_start:
{
lean_object* v___x_4241_; lean_object* v___x_4242_; 
v___x_4241_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__5));
v___x_4242_ = l_Lean_stringToMessageData(v___x_4241_);
return v___x_4242_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__8(void){
_start:
{
lean_object* v___x_4244_; lean_object* v___x_4245_; 
v___x_4244_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__7));
v___x_4245_ = l_Lean_stringToMessageData(v___x_4244_);
return v___x_4245_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__10(void){
_start:
{
lean_object* v___x_4247_; lean_object* v___x_4248_; 
v___x_4247_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__9));
v___x_4248_ = l_Lean_stringToMessageData(v___x_4247_);
return v___x_4248_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__12(void){
_start:
{
lean_object* v___x_4250_; lean_object* v___x_4251_; 
v___x_4250_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__11));
v___x_4251_ = l_Lean_stringToMessageData(v___x_4250_);
return v___x_4251_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__14(void){
_start:
{
lean_object* v___x_4253_; lean_object* v___x_4254_; 
v___x_4253_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__13));
v___x_4254_ = l_Lean_stringToMessageData(v___x_4253_);
return v___x_4254_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__16(void){
_start:
{
lean_object* v___x_4256_; lean_object* v___x_4257_; 
v___x_4256_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__15));
v___x_4257_ = l_Lean_stringToMessageData(v___x_4256_);
return v___x_4257_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__18(void){
_start:
{
lean_object* v___x_4259_; lean_object* v___x_4260_; 
v___x_4259_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__17));
v___x_4260_ = l_Lean_stringToMessageData(v___x_4259_);
return v___x_4260_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg(lean_object* v_msg_4261_, lean_object* v_declHint_4262_, lean_object* v___y_4263_){
_start:
{
lean_object* v___x_4265_; lean_object* v___x_4266_; lean_object* v_env_4267_; uint8_t v___x_4268_; 
v___x_4265_ = lean_box(0);
v___x_4266_ = lean_st_ref_get(v___y_4263_);
v_env_4267_ = lean_ctor_get(v___x_4266_, 0);
lean_inc_ref(v_env_4267_);
lean_dec(v___x_4266_);
v___x_4268_ = l_Lean_Name_isAnonymous(v_declHint_4262_);
if (v___x_4268_ == 0)
{
uint8_t v_isExporting_4269_; 
v_isExporting_4269_ = lean_ctor_get_uint8(v_env_4267_, sizeof(void*)*13);
if (v_isExporting_4269_ == 0)
{
lean_object* v___x_4270_; 
lean_dec_ref(v_env_4267_);
lean_dec(v_declHint_4262_);
v___x_4270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4270_, 0, v_msg_4261_);
return v___x_4270_;
}
else
{
lean_object* v___x_4271_; uint8_t v___x_4272_; 
lean_inc_ref(v_env_4267_);
v___x_4271_ = l_Lean_Environment_setExporting(v_env_4267_, v___x_4268_);
lean_inc(v_declHint_4262_);
lean_inc_ref(v___x_4271_);
v___x_4272_ = l_Lean_Environment_contains(v___x_4271_, v_declHint_4262_, v_isExporting_4269_);
if (v___x_4272_ == 0)
{
lean_object* v___x_4273_; 
lean_dec_ref(v___x_4271_);
lean_dec_ref(v_env_4267_);
lean_dec(v_declHint_4262_);
v___x_4273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4273_, 0, v_msg_4261_);
return v___x_4273_;
}
else
{
lean_object* v___x_4274_; lean_object* v___x_4275_; lean_object* v___x_4276_; lean_object* v___x_4277_; lean_object* v___x_4278_; lean_object* v_c_4279_; lean_object* v___x_4280_; 
v___x_4274_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__1);
v___x_4275_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__4);
v___x_4276_ = l_Lean_Options_empty;
lean_inc_ref(v___x_4271_);
v___x_4277_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4277_, 0, v___x_4271_);
lean_ctor_set(v___x_4277_, 1, v___x_4274_);
lean_ctor_set(v___x_4277_, 2, v___x_4275_);
lean_ctor_set(v___x_4277_, 3, v___x_4276_);
lean_inc(v_declHint_4262_);
v___x_4278_ = l_Lean_MessageData_ofConstName(v_declHint_4262_, v___x_4268_);
v_c_4279_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_4279_, 0, v___x_4277_);
lean_ctor_set(v_c_4279_, 1, v___x_4278_);
v___x_4280_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_4271_, v_declHint_4262_);
lean_dec_ref(v___x_4271_);
if (lean_obj_tag(v___x_4280_) == 0)
{
lean_object* v___x_4281_; lean_object* v___x_4282_; lean_object* v___x_4283_; lean_object* v___x_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; 
lean_dec_ref(v_env_4267_);
lean_dec(v_declHint_4262_);
v___x_4281_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__6);
v___x_4282_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4282_, 0, v___x_4281_);
lean_ctor_set(v___x_4282_, 1, v_c_4279_);
v___x_4283_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__8);
v___x_4284_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4284_, 0, v___x_4282_);
lean_ctor_set(v___x_4284_, 1, v___x_4283_);
v___x_4285_ = l_Lean_MessageData_note(v___x_4284_);
v___x_4286_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4286_, 0, v_msg_4261_);
lean_ctor_set(v___x_4286_, 1, v___x_4285_);
v___x_4287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4287_, 0, v___x_4286_);
return v___x_4287_;
}
else
{
lean_object* v_val_4288_; lean_object* v___x_4290_; uint8_t v_isShared_4291_; uint8_t v_isSharedCheck_4322_; 
v_val_4288_ = lean_ctor_get(v___x_4280_, 0);
v_isSharedCheck_4322_ = !lean_is_exclusive(v___x_4280_);
if (v_isSharedCheck_4322_ == 0)
{
v___x_4290_ = v___x_4280_;
v_isShared_4291_ = v_isSharedCheck_4322_;
goto v_resetjp_4289_;
}
else
{
lean_inc(v_val_4288_);
lean_dec(v___x_4280_);
v___x_4290_ = lean_box(0);
v_isShared_4291_ = v_isSharedCheck_4322_;
goto v_resetjp_4289_;
}
v_resetjp_4289_:
{
lean_object* v___x_4292_; lean_object* v_moduleNames_4293_; lean_object* v_mod_4294_; uint8_t v___x_4295_; 
v___x_4292_ = l_Lean_Environment_header(v_env_4267_);
lean_dec_ref(v_env_4267_);
v_moduleNames_4293_ = lean_ctor_get(v___x_4292_, 4);
lean_inc_ref(v_moduleNames_4293_);
lean_dec_ref(v___x_4292_);
v_mod_4294_ = lean_array_get(v___x_4265_, v_moduleNames_4293_, v_val_4288_);
lean_dec(v_val_4288_);
lean_dec_ref(v_moduleNames_4293_);
v___x_4295_ = l_Lean_isPrivateName(v_declHint_4262_);
lean_dec(v_declHint_4262_);
if (v___x_4295_ == 0)
{
lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; lean_object* v___x_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; lean_object* v___x_4303_; lean_object* v___x_4304_; lean_object* v___x_4305_; lean_object* v___x_4307_; 
v___x_4296_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__10);
v___x_4297_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4297_, 0, v___x_4296_);
lean_ctor_set(v___x_4297_, 1, v_c_4279_);
v___x_4298_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__12);
v___x_4299_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4299_, 0, v___x_4297_);
lean_ctor_set(v___x_4299_, 1, v___x_4298_);
v___x_4300_ = l_Lean_MessageData_ofName(v_mod_4294_);
v___x_4301_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4301_, 0, v___x_4299_);
lean_ctor_set(v___x_4301_, 1, v___x_4300_);
v___x_4302_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__14);
v___x_4303_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4303_, 0, v___x_4301_);
lean_ctor_set(v___x_4303_, 1, v___x_4302_);
v___x_4304_ = l_Lean_MessageData_note(v___x_4303_);
v___x_4305_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4305_, 0, v_msg_4261_);
lean_ctor_set(v___x_4305_, 1, v___x_4304_);
if (v_isShared_4291_ == 0)
{
lean_ctor_set_tag(v___x_4290_, 0);
lean_ctor_set(v___x_4290_, 0, v___x_4305_);
v___x_4307_ = v___x_4290_;
goto v_reusejp_4306_;
}
else
{
lean_object* v_reuseFailAlloc_4308_; 
v_reuseFailAlloc_4308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4308_, 0, v___x_4305_);
v___x_4307_ = v_reuseFailAlloc_4308_;
goto v_reusejp_4306_;
}
v_reusejp_4306_:
{
return v___x_4307_;
}
}
else
{
lean_object* v___x_4309_; lean_object* v___x_4310_; lean_object* v___x_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; lean_object* v___x_4315_; lean_object* v___x_4316_; lean_object* v___x_4317_; lean_object* v___x_4318_; lean_object* v___x_4320_; 
v___x_4309_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__6);
v___x_4310_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4310_, 0, v___x_4309_);
lean_ctor_set(v___x_4310_, 1, v_c_4279_);
v___x_4311_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__16);
v___x_4312_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4312_, 0, v___x_4310_);
lean_ctor_set(v___x_4312_, 1, v___x_4311_);
v___x_4313_ = l_Lean_MessageData_ofName(v_mod_4294_);
v___x_4314_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4314_, 0, v___x_4312_);
lean_ctor_set(v___x_4314_, 1, v___x_4313_);
v___x_4315_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__18, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__18_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__18);
v___x_4316_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4316_, 0, v___x_4314_);
lean_ctor_set(v___x_4316_, 1, v___x_4315_);
v___x_4317_ = l_Lean_MessageData_note(v___x_4316_);
v___x_4318_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4318_, 0, v_msg_4261_);
lean_ctor_set(v___x_4318_, 1, v___x_4317_);
if (v_isShared_4291_ == 0)
{
lean_ctor_set_tag(v___x_4290_, 0);
lean_ctor_set(v___x_4290_, 0, v___x_4318_);
v___x_4320_ = v___x_4290_;
goto v_reusejp_4319_;
}
else
{
lean_object* v_reuseFailAlloc_4321_; 
v_reuseFailAlloc_4321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4321_, 0, v___x_4318_);
v___x_4320_ = v_reuseFailAlloc_4321_;
goto v_reusejp_4319_;
}
v_reusejp_4319_:
{
return v___x_4320_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4323_; 
lean_dec_ref(v_env_4267_);
lean_dec(v_declHint_4262_);
v___x_4323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4323_, 0, v_msg_4261_);
return v___x_4323_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___boxed(lean_object* v_msg_4324_, lean_object* v_declHint_4325_, lean_object* v___y_4326_, lean_object* v___y_4327_){
_start:
{
lean_object* v_res_4328_; 
v_res_4328_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg(v_msg_4324_, v_declHint_4325_, v___y_4326_);
lean_dec(v___y_4326_);
return v_res_4328_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11(lean_object* v_msg_4329_, lean_object* v_declHint_4330_, lean_object* v___y_4331_, lean_object* v___y_4332_, lean_object* v___y_4333_, lean_object* v___y_4334_){
_start:
{
lean_object* v___x_4336_; lean_object* v_a_4337_; lean_object* v___x_4339_; uint8_t v_isShared_4340_; uint8_t v_isSharedCheck_4346_; 
v___x_4336_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg(v_msg_4329_, v_declHint_4330_, v___y_4334_);
v_a_4337_ = lean_ctor_get(v___x_4336_, 0);
v_isSharedCheck_4346_ = !lean_is_exclusive(v___x_4336_);
if (v_isSharedCheck_4346_ == 0)
{
v___x_4339_ = v___x_4336_;
v_isShared_4340_ = v_isSharedCheck_4346_;
goto v_resetjp_4338_;
}
else
{
lean_inc(v_a_4337_);
lean_dec(v___x_4336_);
v___x_4339_ = lean_box(0);
v_isShared_4340_ = v_isSharedCheck_4346_;
goto v_resetjp_4338_;
}
v_resetjp_4338_:
{
lean_object* v___x_4341_; lean_object* v___x_4342_; lean_object* v___x_4344_; 
v___x_4341_ = l_Lean_unknownIdentifierMessageTag;
v___x_4342_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_4342_, 0, v___x_4341_);
lean_ctor_set(v___x_4342_, 1, v_a_4337_);
if (v_isShared_4340_ == 0)
{
lean_ctor_set(v___x_4339_, 0, v___x_4342_);
v___x_4344_ = v___x_4339_;
goto v_reusejp_4343_;
}
else
{
lean_object* v_reuseFailAlloc_4345_; 
v_reuseFailAlloc_4345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4345_, 0, v___x_4342_);
v___x_4344_ = v_reuseFailAlloc_4345_;
goto v_reusejp_4343_;
}
v_reusejp_4343_:
{
return v___x_4344_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11___boxed(lean_object* v_msg_4347_, lean_object* v_declHint_4348_, lean_object* v___y_4349_, lean_object* v___y_4350_, lean_object* v___y_4351_, lean_object* v___y_4352_, lean_object* v___y_4353_){
_start:
{
lean_object* v_res_4354_; 
v_res_4354_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11(v_msg_4347_, v_declHint_4348_, v___y_4349_, v___y_4350_, v___y_4351_, v___y_4352_);
lean_dec(v___y_4352_);
lean_dec_ref(v___y_4351_);
lean_dec(v___y_4350_);
lean_dec_ref(v___y_4349_);
return v_res_4354_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__12___redArg(lean_object* v_ref_4355_, lean_object* v_msg_4356_, lean_object* v___y_4357_, lean_object* v___y_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_){
_start:
{
lean_object* v_toCold_4362_; lean_object* v_currRecDepth_4363_; lean_object* v_ref_4364_; uint16_t v_optionFlags_4365_; uint8_t v_suppressElabErrors_4366_; uint8_t v_checkDeprecated_4367_; uint8_t v_isRecordingDeps_4368_; lean_object* v_ref_4369_; lean_object* v___x_4370_; lean_object* v___x_4371_; 
v_toCold_4362_ = lean_ctor_get(v___y_4359_, 0);
v_currRecDepth_4363_ = lean_ctor_get(v___y_4359_, 1);
v_ref_4364_ = lean_ctor_get(v___y_4359_, 2);
v_optionFlags_4365_ = lean_ctor_get_uint16(v___y_4359_, sizeof(void*)*3);
v_suppressElabErrors_4366_ = lean_ctor_get_uint8(v___y_4359_, sizeof(void*)*3 + 2);
v_checkDeprecated_4367_ = lean_ctor_get_uint8(v___y_4359_, sizeof(void*)*3 + 3);
v_isRecordingDeps_4368_ = lean_ctor_get_uint8(v___y_4359_, sizeof(void*)*3 + 4);
v_ref_4369_ = l_Lean_replaceRef(v_ref_4355_, v_ref_4364_);
lean_inc(v_currRecDepth_4363_);
lean_inc_ref(v_toCold_4362_);
v___x_4370_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_4370_, 0, v_toCold_4362_);
lean_ctor_set(v___x_4370_, 1, v_currRecDepth_4363_);
lean_ctor_set(v___x_4370_, 2, v_ref_4369_);
lean_ctor_set_uint16(v___x_4370_, sizeof(void*)*3, v_optionFlags_4365_);
lean_ctor_set_uint8(v___x_4370_, sizeof(void*)*3 + 2, v_suppressElabErrors_4366_);
lean_ctor_set_uint8(v___x_4370_, sizeof(void*)*3 + 3, v_checkDeprecated_4367_);
lean_ctor_set_uint8(v___x_4370_, sizeof(void*)*3 + 4, v_isRecordingDeps_4368_);
v___x_4371_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4___redArg(v_msg_4356_, v___y_4357_, v___y_4358_, v___x_4370_, v___y_4360_);
lean_dec_ref_known(v___x_4370_, 3);
return v___x_4371_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__12___redArg___boxed(lean_object* v_ref_4372_, lean_object* v_msg_4373_, lean_object* v___y_4374_, lean_object* v___y_4375_, lean_object* v___y_4376_, lean_object* v___y_4377_, lean_object* v___y_4378_){
_start:
{
lean_object* v_res_4379_; 
v_res_4379_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__12___redArg(v_ref_4372_, v_msg_4373_, v___y_4374_, v___y_4375_, v___y_4376_, v___y_4377_);
lean_dec(v___y_4377_);
lean_dec_ref(v___y_4376_);
lean_dec(v___y_4375_);
lean_dec_ref(v___y_4374_);
lean_dec(v_ref_4372_);
return v_res_4379_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8___redArg(lean_object* v_ref_4380_, lean_object* v_msg_4381_, lean_object* v_declHint_4382_, lean_object* v___y_4383_, lean_object* v___y_4384_, lean_object* v___y_4385_, lean_object* v___y_4386_){
_start:
{
lean_object* v___x_4388_; lean_object* v_a_4389_; lean_object* v___x_4390_; 
v___x_4388_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11(v_msg_4381_, v_declHint_4382_, v___y_4383_, v___y_4384_, v___y_4385_, v___y_4386_);
v_a_4389_ = lean_ctor_get(v___x_4388_, 0);
lean_inc(v_a_4389_);
lean_dec_ref(v___x_4388_);
v___x_4390_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__12___redArg(v_ref_4380_, v_a_4389_, v___y_4383_, v___y_4384_, v___y_4385_, v___y_4386_);
return v___x_4390_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8___redArg___boxed(lean_object* v_ref_4391_, lean_object* v_msg_4392_, lean_object* v_declHint_4393_, lean_object* v___y_4394_, lean_object* v___y_4395_, lean_object* v___y_4396_, lean_object* v___y_4397_, lean_object* v___y_4398_){
_start:
{
lean_object* v_res_4399_; 
v_res_4399_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8___redArg(v_ref_4391_, v_msg_4392_, v_declHint_4393_, v___y_4394_, v___y_4395_, v___y_4396_, v___y_4397_);
lean_dec(v___y_4397_);
lean_dec_ref(v___y_4396_);
lean_dec(v___y_4395_);
lean_dec_ref(v___y_4394_);
lean_dec(v_ref_4391_);
return v_res_4399_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_4401_; lean_object* v___x_4402_; 
v___x_4401_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg___closed__0));
v___x_4402_ = l_Lean_stringToMessageData(v___x_4401_);
return v___x_4402_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg(lean_object* v_ref_4403_, lean_object* v_constName_4404_, lean_object* v___y_4405_, lean_object* v___y_4406_, lean_object* v___y_4407_, lean_object* v___y_4408_){
_start:
{
lean_object* v___x_4410_; uint8_t v___x_4411_; lean_object* v___x_4412_; lean_object* v___x_4413_; lean_object* v___x_4414_; lean_object* v___x_4415_; lean_object* v___x_4416_; 
v___x_4410_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg___closed__1);
v___x_4411_ = 0;
lean_inc(v_constName_4404_);
v___x_4412_ = l_Lean_MessageData_ofConstName(v_constName_4404_, v___x_4411_);
v___x_4413_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4413_, 0, v___x_4410_);
lean_ctor_set(v___x_4413_, 1, v___x_4412_);
v___x_4414_ = lean_obj_once(&l_Lean_Meta_Instances_erase___redArg___closed__3, &l_Lean_Meta_Instances_erase___redArg___closed__3_once, _init_l_Lean_Meta_Instances_erase___redArg___closed__3);
v___x_4415_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4415_, 0, v___x_4413_);
lean_ctor_set(v___x_4415_, 1, v___x_4414_);
v___x_4416_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8___redArg(v_ref_4403_, v___x_4415_, v_constName_4404_, v___y_4405_, v___y_4406_, v___y_4407_, v___y_4408_);
return v___x_4416_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg___boxed(lean_object* v_ref_4417_, lean_object* v_constName_4418_, lean_object* v___y_4419_, lean_object* v___y_4420_, lean_object* v___y_4421_, lean_object* v___y_4422_, lean_object* v___y_4423_){
_start:
{
lean_object* v_res_4424_; 
v_res_4424_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg(v_ref_4417_, v_constName_4418_, v___y_4419_, v___y_4420_, v___y_4421_, v___y_4422_);
lean_dec(v___y_4422_);
lean_dec_ref(v___y_4421_);
lean_dec(v___y_4420_);
lean_dec_ref(v___y_4419_);
lean_dec(v_ref_4417_);
return v_res_4424_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3___redArg(lean_object* v_constName_4425_, lean_object* v___y_4426_, lean_object* v___y_4427_, lean_object* v___y_4428_, lean_object* v___y_4429_){
_start:
{
lean_object* v_ref_4431_; lean_object* v___x_4432_; 
v_ref_4431_ = lean_ctor_get(v___y_4428_, 2);
v___x_4432_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg(v_ref_4431_, v_constName_4425_, v___y_4426_, v___y_4427_, v___y_4428_, v___y_4429_);
return v___x_4432_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3___redArg___boxed(lean_object* v_constName_4433_, lean_object* v___y_4434_, lean_object* v___y_4435_, lean_object* v___y_4436_, lean_object* v___y_4437_, lean_object* v___y_4438_){
_start:
{
lean_object* v_res_4439_; 
v_res_4439_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3___redArg(v_constName_4433_, v___y_4434_, v___y_4435_, v___y_4436_, v___y_4437_);
lean_dec(v___y_4437_);
lean_dec_ref(v___y_4436_);
lean_dec(v___y_4435_);
lean_dec_ref(v___y_4434_);
return v_res_4439_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__0(lean_object* v_constName_4440_, lean_object* v___y_4441_, lean_object* v___y_4442_, lean_object* v___y_4443_, lean_object* v___y_4444_){
_start:
{
lean_object* v___x_4446_; lean_object* v_env_4447_; uint8_t v___x_4448_; lean_object* v___x_4449_; 
v___x_4446_ = lean_st_ref_get(v___y_4444_);
v_env_4447_ = lean_ctor_get(v___x_4446_, 0);
lean_inc_ref(v_env_4447_);
lean_dec(v___x_4446_);
v___x_4448_ = 0;
lean_inc(v_constName_4440_);
v___x_4449_ = l_Lean_Environment_findConstVal_x3f(v_env_4447_, v_constName_4440_, v___x_4448_);
if (lean_obj_tag(v___x_4449_) == 0)
{
lean_object* v___x_4450_; 
v___x_4450_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3___redArg(v_constName_4440_, v___y_4441_, v___y_4442_, v___y_4443_, v___y_4444_);
return v___x_4450_;
}
else
{
lean_object* v_val_4451_; lean_object* v___x_4453_; uint8_t v_isShared_4454_; uint8_t v_isSharedCheck_4458_; 
lean_dec(v_constName_4440_);
v_val_4451_ = lean_ctor_get(v___x_4449_, 0);
v_isSharedCheck_4458_ = !lean_is_exclusive(v___x_4449_);
if (v_isSharedCheck_4458_ == 0)
{
v___x_4453_ = v___x_4449_;
v_isShared_4454_ = v_isSharedCheck_4458_;
goto v_resetjp_4452_;
}
else
{
lean_inc(v_val_4451_);
lean_dec(v___x_4449_);
v___x_4453_ = lean_box(0);
v_isShared_4454_ = v_isSharedCheck_4458_;
goto v_resetjp_4452_;
}
v_resetjp_4452_:
{
lean_object* v___x_4456_; 
if (v_isShared_4454_ == 0)
{
lean_ctor_set_tag(v___x_4453_, 0);
v___x_4456_ = v___x_4453_;
goto v_reusejp_4455_;
}
else
{
lean_object* v_reuseFailAlloc_4457_; 
v_reuseFailAlloc_4457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4457_, 0, v_val_4451_);
v___x_4456_ = v_reuseFailAlloc_4457_;
goto v_reusejp_4455_;
}
v_reusejp_4455_:
{
return v___x_4456_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__0___boxed(lean_object* v_constName_4459_, lean_object* v___y_4460_, lean_object* v___y_4461_, lean_object* v___y_4462_, lean_object* v___y_4463_, lean_object* v___y_4464_){
_start:
{
lean_object* v_res_4465_; 
v_res_4465_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__0(v_constName_4459_, v___y_4460_, v___y_4461_, v___y_4462_, v___y_4463_);
lean_dec(v___y_4463_);
lean_dec_ref(v___y_4462_);
lean_dec(v___y_4461_);
lean_dec_ref(v___y_4460_);
return v_res_4465_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__1(lean_object* v_a_4466_, lean_object* v_a_4467_){
_start:
{
if (lean_obj_tag(v_a_4466_) == 0)
{
lean_object* v___x_4468_; 
v___x_4468_ = l_List_reverse___redArg(v_a_4467_);
return v___x_4468_;
}
else
{
lean_object* v_head_4469_; lean_object* v_tail_4470_; lean_object* v___x_4472_; uint8_t v_isShared_4473_; uint8_t v_isSharedCheck_4479_; 
v_head_4469_ = lean_ctor_get(v_a_4466_, 0);
v_tail_4470_ = lean_ctor_get(v_a_4466_, 1);
v_isSharedCheck_4479_ = !lean_is_exclusive(v_a_4466_);
if (v_isSharedCheck_4479_ == 0)
{
v___x_4472_ = v_a_4466_;
v_isShared_4473_ = v_isSharedCheck_4479_;
goto v_resetjp_4471_;
}
else
{
lean_inc(v_tail_4470_);
lean_inc(v_head_4469_);
lean_dec(v_a_4466_);
v___x_4472_ = lean_box(0);
v_isShared_4473_ = v_isSharedCheck_4479_;
goto v_resetjp_4471_;
}
v_resetjp_4471_:
{
lean_object* v___x_4474_; lean_object* v___x_4476_; 
v___x_4474_ = l_Lean_mkLevelParam(v_head_4469_);
if (v_isShared_4473_ == 0)
{
lean_ctor_set(v___x_4472_, 1, v_a_4467_);
lean_ctor_set(v___x_4472_, 0, v___x_4474_);
v___x_4476_ = v___x_4472_;
goto v_reusejp_4475_;
}
else
{
lean_object* v_reuseFailAlloc_4478_; 
v_reuseFailAlloc_4478_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4478_, 0, v___x_4474_);
lean_ctor_set(v_reuseFailAlloc_4478_, 1, v_a_4467_);
v___x_4476_ = v_reuseFailAlloc_4478_;
goto v_reusejp_4475_;
}
v_reusejp_4475_:
{
v_a_4466_ = v_tail_4470_;
v_a_4467_ = v___x_4476_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0(lean_object* v_constName_4480_, lean_object* v___y_4481_, lean_object* v___y_4482_, lean_object* v___y_4483_, lean_object* v___y_4484_){
_start:
{
lean_object* v___x_4486_; 
lean_inc(v_constName_4480_);
v___x_4486_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__0(v_constName_4480_, v___y_4481_, v___y_4482_, v___y_4483_, v___y_4484_);
if (lean_obj_tag(v___x_4486_) == 0)
{
lean_object* v_a_4487_; lean_object* v___x_4489_; uint8_t v_isShared_4490_; uint8_t v_isSharedCheck_4498_; 
v_a_4487_ = lean_ctor_get(v___x_4486_, 0);
v_isSharedCheck_4498_ = !lean_is_exclusive(v___x_4486_);
if (v_isSharedCheck_4498_ == 0)
{
v___x_4489_ = v___x_4486_;
v_isShared_4490_ = v_isSharedCheck_4498_;
goto v_resetjp_4488_;
}
else
{
lean_inc(v_a_4487_);
lean_dec(v___x_4486_);
v___x_4489_ = lean_box(0);
v_isShared_4490_ = v_isSharedCheck_4498_;
goto v_resetjp_4488_;
}
v_resetjp_4488_:
{
lean_object* v_levelParams_4491_; lean_object* v___x_4492_; lean_object* v___x_4493_; lean_object* v___x_4494_; lean_object* v___x_4496_; 
v_levelParams_4491_ = lean_ctor_get(v_a_4487_, 1);
lean_inc(v_levelParams_4491_);
lean_dec(v_a_4487_);
v___x_4492_ = lean_box(0);
v___x_4493_ = l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__1(v_levelParams_4491_, v___x_4492_);
v___x_4494_ = l_Lean_mkConst(v_constName_4480_, v___x_4493_);
if (v_isShared_4490_ == 0)
{
lean_ctor_set(v___x_4489_, 0, v___x_4494_);
v___x_4496_ = v___x_4489_;
goto v_reusejp_4495_;
}
else
{
lean_object* v_reuseFailAlloc_4497_; 
v_reuseFailAlloc_4497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4497_, 0, v___x_4494_);
v___x_4496_ = v_reuseFailAlloc_4497_;
goto v_reusejp_4495_;
}
v_reusejp_4495_:
{
return v___x_4496_;
}
}
}
else
{
lean_object* v_a_4499_; lean_object* v___x_4501_; uint8_t v_isShared_4502_; uint8_t v_isSharedCheck_4506_; 
lean_dec(v_constName_4480_);
v_a_4499_ = lean_ctor_get(v___x_4486_, 0);
v_isSharedCheck_4506_ = !lean_is_exclusive(v___x_4486_);
if (v_isSharedCheck_4506_ == 0)
{
v___x_4501_ = v___x_4486_;
v_isShared_4502_ = v_isSharedCheck_4506_;
goto v_resetjp_4500_;
}
else
{
lean_inc(v_a_4499_);
lean_dec(v___x_4486_);
v___x_4501_ = lean_box(0);
v_isShared_4502_ = v_isSharedCheck_4506_;
goto v_resetjp_4500_;
}
v_resetjp_4500_:
{
lean_object* v___x_4504_; 
if (v_isShared_4502_ == 0)
{
v___x_4504_ = v___x_4501_;
goto v_reusejp_4503_;
}
else
{
lean_object* v_reuseFailAlloc_4505_; 
v_reuseFailAlloc_4505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4505_, 0, v_a_4499_);
v___x_4504_ = v_reuseFailAlloc_4505_;
goto v_reusejp_4503_;
}
v_reusejp_4503_:
{
return v___x_4504_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0___boxed(lean_object* v_constName_4507_, lean_object* v___y_4508_, lean_object* v___y_4509_, lean_object* v___y_4510_, lean_object* v___y_4511_, lean_object* v___y_4512_){
_start:
{
lean_object* v_res_4513_; 
v_res_4513_ = l_Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0(v_constName_4507_, v___y_4508_, v___y_4509_, v___y_4510_, v___y_4511_);
lean_dec(v___y_4511_);
lean_dec_ref(v___y_4510_);
lean_dec(v___y_4509_);
lean_dec_ref(v___y_4508_);
return v_res_4513_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_4514_; lean_object* v___x_4515_; 
v___x_4514_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0);
v___x_4515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4515_, 0, v___x_4514_);
return v___x_4515_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6_spec__9___redArg(){
_start:
{
lean_object* v___x_4517_; 
v___x_4517_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6_spec__9___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6_spec__9___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6_spec__9___redArg___closed__0);
return v___x_4517_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6_spec__9___redArg___boxed(lean_object* v___dummy_4518_){
_start:
{
lean_object* v_res_4519_; 
v_res_4519_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6_spec__9___redArg();
return v_res_4519_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_4520_; lean_object* v___x_4521_; 
v___x_4520_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0);
v___x_4521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4521_, 0, v___x_4520_);
return v___x_4521_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_4522_; lean_object* v___x_4523_; 
v___x_4522_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__0);
v___x_4523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4523_, 0, v___x_4522_);
lean_ctor_set(v___x_4523_, 1, v___x_4522_);
return v___x_4523_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_4524_; 
v___x_4524_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6_spec__9___redArg();
return v___x_4524_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__3(void){
_start:
{
lean_object* v___x_4525_; lean_object* v___x_4526_; 
v___x_4525_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__0);
v___x_4526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4526_, 0, v___x_4525_);
lean_ctor_set(v___x_4526_, 1, v___x_4525_);
return v___x_4526_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__4(void){
_start:
{
lean_object* v___x_4527_; lean_object* v___x_4528_; lean_object* v___x_4529_; 
v___x_4527_ = lean_unsigned_to_nat(0u);
v___x_4528_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__0);
v___x_4529_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4529_, 0, v___x_4528_);
lean_ctor_set(v___x_4529_, 1, v___x_4528_);
lean_ctor_set(v___x_4529_, 2, v___x_4527_);
return v___x_4529_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__5(void){
_start:
{
lean_object* v___x_4530_; lean_object* v___x_4531_; lean_object* v___x_4532_; lean_object* v___x_4533_; lean_object* v___x_4534_; 
v___x_4530_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__4, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__4_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__4);
v___x_4531_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__3, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__3_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__3);
v___x_4532_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__0);
v___x_4533_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2);
v___x_4534_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_4534_, 0, v___x_4533_);
lean_ctor_set(v___x_4534_, 1, v___x_4532_);
lean_ctor_set(v___x_4534_, 2, v___x_4531_);
lean_ctor_set(v___x_4534_, 3, v___x_4532_);
lean_ctor_set(v___x_4534_, 4, v___x_4532_);
lean_ctor_set(v___x_4534_, 5, v___x_4532_);
lean_ctor_set(v___x_4534_, 6, v___x_4532_);
lean_ctor_set(v___x_4534_, 7, v___x_4530_);
return v___x_4534_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg(lean_object* v_ext_4535_, lean_object* v_b_4536_, uint8_t v_kind_4537_, lean_object* v___y_4538_, lean_object* v___y_4539_, lean_object* v___y_4540_){
_start:
{
lean_object* v_toCold_4542_; lean_object* v_currNamespace_4543_; lean_object* v___x_4544_; lean_object* v_env_4545_; lean_object* v_nextMacroScope_4546_; lean_object* v_ngen_4547_; lean_object* v_auxDeclNGen_4548_; lean_object* v_traceState_4549_; lean_object* v_recordedDeps_4550_; lean_object* v_messages_4551_; lean_object* v_infoState_4552_; lean_object* v_snapshotTasks_4553_; lean_object* v___x_4555_; uint8_t v_isShared_4556_; uint8_t v_isSharedCheck_4580_; 
v_toCold_4542_ = lean_ctor_get(v___y_4539_, 0);
v_currNamespace_4543_ = lean_ctor_get(v_toCold_4542_, 4);
v___x_4544_ = lean_st_ref_take(v___y_4540_);
v_env_4545_ = lean_ctor_get(v___x_4544_, 0);
v_nextMacroScope_4546_ = lean_ctor_get(v___x_4544_, 1);
v_ngen_4547_ = lean_ctor_get(v___x_4544_, 2);
v_auxDeclNGen_4548_ = lean_ctor_get(v___x_4544_, 3);
v_traceState_4549_ = lean_ctor_get(v___x_4544_, 4);
v_recordedDeps_4550_ = lean_ctor_get(v___x_4544_, 6);
v_messages_4551_ = lean_ctor_get(v___x_4544_, 7);
v_infoState_4552_ = lean_ctor_get(v___x_4544_, 8);
v_snapshotTasks_4553_ = lean_ctor_get(v___x_4544_, 9);
v_isSharedCheck_4580_ = !lean_is_exclusive(v___x_4544_);
if (v_isSharedCheck_4580_ == 0)
{
lean_object* v_unused_4581_; 
v_unused_4581_ = lean_ctor_get(v___x_4544_, 5);
lean_dec(v_unused_4581_);
v___x_4555_ = v___x_4544_;
v_isShared_4556_ = v_isSharedCheck_4580_;
goto v_resetjp_4554_;
}
else
{
lean_inc(v_snapshotTasks_4553_);
lean_inc(v_infoState_4552_);
lean_inc(v_messages_4551_);
lean_inc(v_recordedDeps_4550_);
lean_inc(v_traceState_4549_);
lean_inc(v_auxDeclNGen_4548_);
lean_inc(v_ngen_4547_);
lean_inc(v_nextMacroScope_4546_);
lean_inc(v_env_4545_);
lean_dec(v___x_4544_);
v___x_4555_ = lean_box(0);
v_isShared_4556_ = v_isSharedCheck_4580_;
goto v_resetjp_4554_;
}
v_resetjp_4554_:
{
lean_object* v___x_4557_; lean_object* v___x_4558_; lean_object* v___x_4560_; 
lean_inc(v_currNamespace_4543_);
v___x_4557_ = l_Lean_ScopedEnvExtension_addCore___redArg(v_env_4545_, v_ext_4535_, v_b_4536_, v_kind_4537_, v_currNamespace_4543_);
v___x_4558_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__1);
if (v_isShared_4556_ == 0)
{
lean_ctor_set(v___x_4555_, 5, v___x_4558_);
lean_ctor_set(v___x_4555_, 0, v___x_4557_);
v___x_4560_ = v___x_4555_;
goto v_reusejp_4559_;
}
else
{
lean_object* v_reuseFailAlloc_4579_; 
v_reuseFailAlloc_4579_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4579_, 0, v___x_4557_);
lean_ctor_set(v_reuseFailAlloc_4579_, 1, v_nextMacroScope_4546_);
lean_ctor_set(v_reuseFailAlloc_4579_, 2, v_ngen_4547_);
lean_ctor_set(v_reuseFailAlloc_4579_, 3, v_auxDeclNGen_4548_);
lean_ctor_set(v_reuseFailAlloc_4579_, 4, v_traceState_4549_);
lean_ctor_set(v_reuseFailAlloc_4579_, 5, v___x_4558_);
lean_ctor_set(v_reuseFailAlloc_4579_, 6, v_recordedDeps_4550_);
lean_ctor_set(v_reuseFailAlloc_4579_, 7, v_messages_4551_);
lean_ctor_set(v_reuseFailAlloc_4579_, 8, v_infoState_4552_);
lean_ctor_set(v_reuseFailAlloc_4579_, 9, v_snapshotTasks_4553_);
v___x_4560_ = v_reuseFailAlloc_4579_;
goto v_reusejp_4559_;
}
v_reusejp_4559_:
{
lean_object* v___x_4561_; lean_object* v___x_4562_; lean_object* v_mctx_4563_; lean_object* v_zetaDeltaFVarIds_4564_; lean_object* v_postponed_4565_; lean_object* v_diag_4566_; lean_object* v___x_4568_; uint8_t v_isShared_4569_; uint8_t v_isSharedCheck_4577_; 
v___x_4561_ = lean_st_ref_put(v___y_4540_, v___x_4560_);
v___x_4562_ = lean_st_ref_take(v___y_4538_);
v_mctx_4563_ = lean_ctor_get(v___x_4562_, 0);
v_zetaDeltaFVarIds_4564_ = lean_ctor_get(v___x_4562_, 2);
v_postponed_4565_ = lean_ctor_get(v___x_4562_, 3);
v_diag_4566_ = lean_ctor_get(v___x_4562_, 4);
v_isSharedCheck_4577_ = !lean_is_exclusive(v___x_4562_);
if (v_isSharedCheck_4577_ == 0)
{
lean_object* v_unused_4578_; 
v_unused_4578_ = lean_ctor_get(v___x_4562_, 1);
lean_dec(v_unused_4578_);
v___x_4568_ = v___x_4562_;
v_isShared_4569_ = v_isSharedCheck_4577_;
goto v_resetjp_4567_;
}
else
{
lean_inc(v_diag_4566_);
lean_inc(v_postponed_4565_);
lean_inc(v_zetaDeltaFVarIds_4564_);
lean_inc(v_mctx_4563_);
lean_dec(v___x_4562_);
v___x_4568_ = lean_box(0);
v_isShared_4569_ = v_isSharedCheck_4577_;
goto v_resetjp_4567_;
}
v_resetjp_4567_:
{
lean_object* v___x_4570_; lean_object* v___x_4571_; lean_object* v___x_4573_; 
v___x_4570_ = lean_box(0);
v___x_4571_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__5, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__5_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__5);
if (v_isShared_4569_ == 0)
{
lean_ctor_set(v___x_4568_, 1, v___x_4571_);
v___x_4573_ = v___x_4568_;
goto v_reusejp_4572_;
}
else
{
lean_object* v_reuseFailAlloc_4576_; 
v_reuseFailAlloc_4576_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4576_, 0, v_mctx_4563_);
lean_ctor_set(v_reuseFailAlloc_4576_, 1, v___x_4571_);
lean_ctor_set(v_reuseFailAlloc_4576_, 2, v_zetaDeltaFVarIds_4564_);
lean_ctor_set(v_reuseFailAlloc_4576_, 3, v_postponed_4565_);
lean_ctor_set(v_reuseFailAlloc_4576_, 4, v_diag_4566_);
v___x_4573_ = v_reuseFailAlloc_4576_;
goto v_reusejp_4572_;
}
v_reusejp_4572_:
{
lean_object* v___x_4574_; lean_object* v___x_4575_; 
v___x_4574_ = lean_st_ref_put(v___y_4538_, v___x_4573_);
v___x_4575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4575_, 0, v___x_4570_);
return v___x_4575_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___boxed(lean_object* v_ext_4582_, lean_object* v_b_4583_, lean_object* v_kind_4584_, lean_object* v___y_4585_, lean_object* v___y_4586_, lean_object* v___y_4587_, lean_object* v___y_4588_){
_start:
{
uint8_t v_kind_boxed_4589_; lean_object* v_res_4590_; 
v_kind_boxed_4589_ = lean_unbox(v_kind_4584_);
v_res_4590_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg(v_ext_4582_, v_b_4583_, v_kind_boxed_4589_, v___y_4585_, v___y_4586_, v___y_4587_);
lean_dec(v___y_4587_);
lean_dec_ref(v___y_4586_);
lean_dec(v___y_4585_);
return v_res_4590_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1(lean_object* v_constName_4591_, lean_object* v___y_4592_, lean_object* v___y_4593_, lean_object* v___y_4594_, lean_object* v___y_4595_){
_start:
{
lean_object* v___x_4597_; lean_object* v_env_4598_; uint8_t v___x_4599_; lean_object* v___x_4600_; 
v___x_4597_ = lean_st_ref_get(v___y_4595_);
v_env_4598_ = lean_ctor_get(v___x_4597_, 0);
lean_inc_ref(v_env_4598_);
lean_dec(v___x_4597_);
v___x_4599_ = 0;
lean_inc(v_constName_4591_);
v___x_4600_ = l_Lean_Environment_find_x3f(v_env_4598_, v_constName_4591_, v___x_4599_);
if (lean_obj_tag(v___x_4600_) == 0)
{
lean_object* v___x_4601_; 
v___x_4601_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3___redArg(v_constName_4591_, v___y_4592_, v___y_4593_, v___y_4594_, v___y_4595_);
return v___x_4601_;
}
else
{
lean_object* v_val_4602_; lean_object* v___x_4604_; uint8_t v_isShared_4605_; uint8_t v_isSharedCheck_4609_; 
lean_dec(v_constName_4591_);
v_val_4602_ = lean_ctor_get(v___x_4600_, 0);
v_isSharedCheck_4609_ = !lean_is_exclusive(v___x_4600_);
if (v_isSharedCheck_4609_ == 0)
{
v___x_4604_ = v___x_4600_;
v_isShared_4605_ = v_isSharedCheck_4609_;
goto v_resetjp_4603_;
}
else
{
lean_inc(v_val_4602_);
lean_dec(v___x_4600_);
v___x_4604_ = lean_box(0);
v_isShared_4605_ = v_isSharedCheck_4609_;
goto v_resetjp_4603_;
}
v_resetjp_4603_:
{
lean_object* v___x_4607_; 
if (v_isShared_4605_ == 0)
{
lean_ctor_set_tag(v___x_4604_, 0);
v___x_4607_ = v___x_4604_;
goto v_reusejp_4606_;
}
else
{
lean_object* v_reuseFailAlloc_4608_; 
v_reuseFailAlloc_4608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4608_, 0, v_val_4602_);
v___x_4607_ = v_reuseFailAlloc_4608_;
goto v_reusejp_4606_;
}
v_reusejp_4606_:
{
return v___x_4607_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1___boxed(lean_object* v_constName_4610_, lean_object* v___y_4611_, lean_object* v___y_4612_, lean_object* v___y_4613_, lean_object* v___y_4614_, lean_object* v___y_4615_){
_start:
{
lean_object* v_res_4616_; 
v_res_4616_ = l_Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1(v_constName_4610_, v___y_4611_, v___y_4612_, v___y_4613_, v___y_4614_);
lean_dec(v___y_4614_);
lean_dec_ref(v___y_4613_);
lean_dec(v___y_4612_);
lean_dec_ref(v___y_4611_);
return v_res_4616_;
}
}
static lean_object* _init_l_Lean_Meta_addInstance___closed__1(void){
_start:
{
lean_object* v___x_4618_; lean_object* v___x_4619_; 
v___x_4618_ = ((lean_object*)(l_Lean_Meta_addInstance___closed__0));
v___x_4619_ = l_Lean_stringToMessageData(v___x_4618_);
return v___x_4619_;
}
}
static lean_object* _init_l_Lean_Meta_addInstance___closed__3(void){
_start:
{
lean_object* v___x_4621_; lean_object* v___x_4622_; 
v___x_4621_ = ((lean_object*)(l_Lean_Meta_addInstance___closed__2));
v___x_4622_ = l_Lean_stringToMessageData(v___x_4621_);
return v___x_4622_;
}
}
static lean_object* _init_l_Lean_Meta_addInstance___closed__5(void){
_start:
{
lean_object* v___x_4624_; lean_object* v___x_4625_; 
v___x_4624_ = ((lean_object*)(l_Lean_Meta_addInstance___closed__4));
v___x_4625_ = l_Lean_stringToMessageData(v___x_4624_);
return v___x_4625_;
}
}
static lean_object* _init_l_Lean_Meta_addInstance___closed__7(void){
_start:
{
lean_object* v___x_4627_; lean_object* v___x_4628_; 
v___x_4627_ = ((lean_object*)(l_Lean_Meta_addInstance___closed__6));
v___x_4628_ = l_Lean_stringToMessageData(v___x_4627_);
return v___x_4628_;
}
}
static lean_object* _init_l_Lean_Meta_addInstance___closed__9(void){
_start:
{
lean_object* v___x_4630_; lean_object* v___x_4631_; 
v___x_4630_ = ((lean_object*)(l_Lean_Meta_addInstance___closed__8));
v___x_4631_ = l_Lean_stringToMessageData(v___x_4630_);
return v___x_4631_;
}
}
static lean_object* _init_l_Lean_Meta_addInstance___closed__11(void){
_start:
{
lean_object* v___x_4633_; lean_object* v___x_4634_; 
v___x_4633_ = ((lean_object*)(l_Lean_Meta_addInstance___closed__10));
v___x_4634_ = l_Lean_stringToMessageData(v___x_4633_);
return v___x_4634_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addInstance(lean_object* v_declName_4635_, uint8_t v_attrKind_4636_, lean_object* v_prio_4637_, lean_object* v_a_4638_, lean_object* v_a_4639_, lean_object* v_a_4640_, lean_object* v_a_4641_){
_start:
{
lean_object* v___x_4643_; 
lean_inc(v_declName_4635_);
v___x_4643_ = l_Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0(v_declName_4635_, v_a_4638_, v_a_4639_, v_a_4640_, v_a_4641_);
if (lean_obj_tag(v___x_4643_) == 0)
{
lean_object* v_a_4644_; lean_object* v___y_4646_; lean_object* v___y_4647_; lean_object* v___y_4648_; lean_object* v___y_4649_; lean_object* v___y_4650_; lean_object* v___y_4651_; lean_object* v___x_4656_; 
v_a_4644_ = lean_ctor_get(v___x_4643_, 0);
lean_inc(v_a_4644_);
lean_dec_ref_known(v___x_4643_, 1);
lean_inc(v_declName_4635_);
v___x_4656_ = l_Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1(v_declName_4635_, v_a_4638_, v_a_4639_, v_a_4640_, v_a_4641_);
if (lean_obj_tag(v___x_4656_) == 0)
{
lean_object* v_a_4657_; lean_object* v___y_4659_; lean_object* v___y_4660_; lean_object* v___y_4661_; lean_object* v___y_4662_; lean_object* v___y_4663_; lean_object* v___y_4664_; lean_object* v___y_4675_; lean_object* v___y_4676_; lean_object* v___y_4677_; lean_object* v___y_4678_; lean_object* v___y_4679_; lean_object* v___y_4697_; lean_object* v___y_4698_; lean_object* v___y_4699_; lean_object* v___y_4700_; lean_object* v___x_4745_; uint8_t v___x_4746_; 
v_a_4657_ = lean_ctor_get(v___x_4656_, 0);
lean_inc(v_a_4657_);
lean_dec_ref_known(v___x_4656_, 1);
v___x_4745_ = l_Lean_ConstantInfo_type(v_a_4657_);
v___x_4746_ = l_Lean_Expr_hasSorry(v___x_4745_);
lean_dec_ref(v___x_4745_);
if (v___x_4746_ == 0)
{
lean_object* v___x_4747_; 
lean_inc(v_a_4644_);
v___x_4747_ = l_Lean_Meta_checkNonClassInstance(v_a_4644_, v_a_4638_, v_a_4639_, v_a_4640_, v_a_4641_);
if (lean_obj_tag(v___x_4747_) == 0)
{
lean_object* v___x_4748_; 
lean_dec_ref_known(v___x_4747_, 1);
v___x_4748_ = l_Lean_Meta_checkImpossibleInstance(v_a_4657_, v_a_4638_, v_a_4639_, v_a_4640_, v_a_4641_);
if (lean_obj_tag(v___x_4748_) == 0)
{
lean_dec_ref_known(v___x_4748_, 1);
v___y_4697_ = v_a_4638_;
v___y_4698_ = v_a_4639_;
v___y_4699_ = v_a_4640_;
v___y_4700_ = v_a_4641_;
goto v___jp_4696_;
}
else
{
lean_dec(v_a_4657_);
lean_dec(v_a_4644_);
lean_dec(v_prio_4637_);
lean_dec(v_declName_4635_);
return v___x_4748_;
}
}
else
{
lean_dec(v_a_4657_);
lean_dec(v_a_4644_);
lean_dec(v_prio_4637_);
lean_dec(v_declName_4635_);
return v___x_4747_;
}
}
else
{
v___y_4697_ = v_a_4638_;
v___y_4698_ = v_a_4639_;
v___y_4699_ = v_a_4640_;
v___y_4700_ = v_a_4641_;
goto v___jp_4696_;
}
v___jp_4658_:
{
lean_object* v___x_4665_; lean_object* v___x_4666_; lean_object* v___x_4667_; lean_object* v___x_4668_; lean_object* v___x_4669_; lean_object* v___x_4670_; lean_object* v___x_4671_; lean_object* v___x_4672_; lean_object* v___x_4673_; 
lean_dec_ref(v___y_4663_);
lean_dec_ref(v___y_4662_);
v___x_4665_ = lean_obj_once(&l_Lean_Meta_addInstance___closed__1, &l_Lean_Meta_addInstance___closed__1_once, _init_l_Lean_Meta_addInstance___closed__1);
v___x_4666_ = l_Lean_MessageData_ofName(v_declName_4635_);
v___x_4667_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4667_, 0, v___x_4665_);
lean_ctor_set(v___x_4667_, 1, v___x_4666_);
v___x_4668_ = lean_obj_once(&l_Lean_Meta_addInstance___closed__3, &l_Lean_Meta_addInstance___closed__3_once, _init_l_Lean_Meta_addInstance___closed__3);
v___x_4669_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4669_, 0, v___x_4667_);
lean_ctor_set(v___x_4669_, 1, v___x_4668_);
v___x_4670_ = l_Lean_ConstantInfo_type(v_a_4657_);
lean_dec(v_a_4657_);
v___x_4671_ = l_Lean_indentExpr(v___x_4670_);
v___x_4672_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4672_, 0, v___x_4669_);
lean_ctor_set(v___x_4672_, 1, v___x_4671_);
v___x_4673_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4___redArg(v___x_4672_, v___y_4661_, v___y_4659_, v___y_4664_, v___y_4660_);
return v___x_4673_;
}
v___jp_4674_:
{
lean_object* v___x_4680_; lean_object* v_a_4681_; lean_object* v___x_4682_; 
lean_inc(v_declName_4635_);
v___x_4680_ = l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__2___redArg(v_declName_4635_, v___y_4679_);
v_a_4681_ = lean_ctor_get(v___x_4680_, 0);
lean_inc(v_a_4681_);
lean_dec_ref(v___x_4680_);
lean_inc(v_a_4644_);
v___x_4682_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder(v_a_4644_, v_a_4681_, v___y_4676_, v___y_4677_, v___y_4678_, v___y_4679_);
if (lean_obj_tag(v___x_4682_) == 0)
{
lean_object* v_a_4683_; lean_object* v___x_4684_; lean_object* v___x_4685_; uint8_t v___x_4686_; 
v_a_4683_ = lean_ctor_get(v___x_4682_, 0);
lean_inc(v_a_4683_);
lean_dec_ref_known(v___x_4682_, 1);
v___x_4684_ = lean_unsigned_to_nat(0u);
v___x_4685_ = lean_array_get_size(v___y_4675_);
v___x_4686_ = lean_nat_dec_lt(v___x_4684_, v___x_4685_);
if (v___x_4686_ == 0)
{
lean_dec(v_a_4644_);
lean_dec(v_prio_4637_);
v___y_4659_ = v___y_4677_;
v___y_4660_ = v___y_4679_;
v___y_4661_ = v___y_4676_;
v___y_4662_ = v_a_4683_;
v___y_4663_ = v___y_4675_;
v___y_4664_ = v___y_4678_;
goto v___jp_4658_;
}
else
{
lean_object* v___x_4687_; 
v___x_4687_ = lean_array_fget_borrowed(v___y_4675_, v___x_4684_);
if (lean_obj_tag(v___x_4687_) == 4)
{
lean_dec(v_a_4657_);
v___y_4646_ = v_a_4683_;
v___y_4647_ = v___y_4675_;
v___y_4648_ = v___y_4676_;
v___y_4649_ = v___y_4677_;
v___y_4650_ = v___y_4678_;
v___y_4651_ = v___y_4679_;
goto v___jp_4645_;
}
else
{
lean_dec(v_a_4644_);
lean_dec(v_prio_4637_);
v___y_4659_ = v___y_4677_;
v___y_4660_ = v___y_4679_;
v___y_4661_ = v___y_4676_;
v___y_4662_ = v_a_4683_;
v___y_4663_ = v___y_4675_;
v___y_4664_ = v___y_4678_;
goto v___jp_4658_;
}
}
}
else
{
lean_object* v_a_4688_; lean_object* v___x_4690_; uint8_t v_isShared_4691_; uint8_t v_isSharedCheck_4695_; 
lean_dec_ref(v___y_4675_);
lean_dec(v_a_4657_);
lean_dec(v_a_4644_);
lean_dec(v_prio_4637_);
lean_dec(v_declName_4635_);
v_a_4688_ = lean_ctor_get(v___x_4682_, 0);
v_isSharedCheck_4695_ = !lean_is_exclusive(v___x_4682_);
if (v_isSharedCheck_4695_ == 0)
{
v___x_4690_ = v___x_4682_;
v_isShared_4691_ = v_isSharedCheck_4695_;
goto v_resetjp_4689_;
}
else
{
lean_inc(v_a_4688_);
lean_dec(v___x_4682_);
v___x_4690_ = lean_box(0);
v_isShared_4691_ = v_isSharedCheck_4695_;
goto v_resetjp_4689_;
}
v_resetjp_4689_:
{
lean_object* v___x_4693_; 
if (v_isShared_4691_ == 0)
{
v___x_4693_ = v___x_4690_;
goto v_reusejp_4692_;
}
else
{
lean_object* v_reuseFailAlloc_4694_; 
v_reuseFailAlloc_4694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4694_, 0, v_a_4688_);
v___x_4693_ = v_reuseFailAlloc_4694_;
goto v_reusejp_4692_;
}
v_reusejp_4692_:
{
return v___x_4693_;
}
}
}
}
v___jp_4696_:
{
lean_object* v___x_4701_; 
lean_inc(v_a_4644_);
v___x_4701_ = l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey(v_a_4644_, v___y_4697_, v___y_4698_, v___y_4699_, v___y_4700_);
if (lean_obj_tag(v___x_4701_) == 0)
{
lean_object* v_a_4702_; lean_object* v___x_4703_; lean_object* v_a_4704_; uint8_t v___x_4705_; uint8_t v___x_4706_; uint8_t v___x_4707_; 
v_a_4702_ = lean_ctor_get(v___x_4701_, 0);
lean_inc(v_a_4702_);
lean_dec_ref_known(v___x_4701_, 1);
lean_inc(v_declName_4635_);
v___x_4703_ = l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__4___redArg(v_declName_4635_, v___y_4700_);
v_a_4704_ = lean_ctor_get(v___x_4703_, 0);
lean_inc(v_a_4704_);
lean_dec_ref(v___x_4703_);
v___x_4705_ = 1;
v___x_4706_ = lean_unbox(v_a_4704_);
lean_dec(v_a_4704_);
v___x_4707_ = l_Lean_instBEqReducibilityStatus_beq(v___x_4706_, v___x_4705_);
if (v___x_4707_ == 0)
{
v___y_4675_ = v_a_4702_;
v___y_4676_ = v___y_4697_;
v___y_4677_ = v___y_4698_;
v___y_4678_ = v___y_4699_;
v___y_4679_ = v___y_4700_;
goto v___jp_4674_;
}
else
{
lean_object* v___x_4708_; 
lean_inc(v_declName_4635_);
v___x_4708_ = l_Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1(v_declName_4635_, v___y_4697_, v___y_4698_, v___y_4699_, v___y_4700_);
if (lean_obj_tag(v___x_4708_) == 0)
{
lean_object* v_a_4709_; uint8_t v___x_4710_; 
v_a_4709_ = lean_ctor_get(v___x_4708_, 0);
lean_inc(v_a_4709_);
lean_dec_ref_known(v___x_4708_, 1);
v___x_4710_ = l_Lean_ConstantInfo_isDefinition(v_a_4709_);
lean_dec(v_a_4709_);
if (v___x_4710_ == 0)
{
lean_object* v___x_4711_; lean_object* v_env_4712_; uint8_t v___x_4713_; 
v___x_4711_ = lean_st_ref_get(v___y_4700_);
v_env_4712_ = lean_ctor_get(v___x_4711_, 0);
lean_inc_ref(v_env_4712_);
lean_dec(v___x_4711_);
lean_inc(v_declName_4635_);
v___x_4713_ = l_Lean_wasOriginallyDefn(v_env_4712_, v_declName_4635_);
if (v___x_4713_ == 0)
{
v___y_4675_ = v_a_4702_;
v___y_4676_ = v___y_4697_;
v___y_4677_ = v___y_4698_;
v___y_4678_ = v___y_4699_;
v___y_4679_ = v___y_4700_;
goto v___jp_4674_;
}
else
{
lean_object* v___x_4714_; lean_object* v___x_4715_; lean_object* v___x_4716_; lean_object* v___x_4717_; lean_object* v___x_4718_; lean_object* v___x_4719_; 
v___x_4714_ = lean_obj_once(&l_Lean_Meta_addInstance___closed__5, &l_Lean_Meta_addInstance___closed__5_once, _init_l_Lean_Meta_addInstance___closed__5);
lean_inc(v_declName_4635_);
v___x_4715_ = l_Lean_MessageData_ofName(v_declName_4635_);
v___x_4716_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4716_, 0, v___x_4714_);
lean_ctor_set(v___x_4716_, 1, v___x_4715_);
v___x_4717_ = lean_obj_once(&l_Lean_Meta_addInstance___closed__7, &l_Lean_Meta_addInstance___closed__7_once, _init_l_Lean_Meta_addInstance___closed__7);
v___x_4718_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4718_, 0, v___x_4716_);
lean_ctor_set(v___x_4718_, 1, v___x_4717_);
v___x_4719_ = l_Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4(v___x_4718_, v___y_4697_, v___y_4698_, v___y_4699_, v___y_4700_);
if (lean_obj_tag(v___x_4719_) == 0)
{
lean_dec_ref_known(v___x_4719_, 1);
v___y_4675_ = v_a_4702_;
v___y_4676_ = v___y_4697_;
v___y_4677_ = v___y_4698_;
v___y_4678_ = v___y_4699_;
v___y_4679_ = v___y_4700_;
goto v___jp_4674_;
}
else
{
lean_dec(v_a_4702_);
lean_dec(v_a_4657_);
lean_dec(v_a_4644_);
lean_dec(v_prio_4637_);
lean_dec(v_declName_4635_);
return v___x_4719_;
}
}
}
else
{
lean_object* v___x_4720_; lean_object* v___x_4721_; uint8_t v___x_4722_; 
v___x_4720_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_4699_);
v___x_4721_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility));
v___x_4722_ = l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1(v___x_4720_, v___x_4721_);
lean_dec_ref(v___x_4720_);
if (v___x_4722_ == 0)
{
v___y_4675_ = v_a_4702_;
v___y_4676_ = v___y_4697_;
v___y_4677_ = v___y_4698_;
v___y_4678_ = v___y_4699_;
v___y_4679_ = v___y_4700_;
goto v___jp_4674_;
}
else
{
lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4725_; lean_object* v___x_4726_; lean_object* v___x_4727_; lean_object* v___x_4728_; 
v___x_4723_ = lean_obj_once(&l_Lean_Meta_addInstance___closed__9, &l_Lean_Meta_addInstance___closed__9_once, _init_l_Lean_Meta_addInstance___closed__9);
lean_inc(v_declName_4635_);
v___x_4724_ = l_Lean_MessageData_ofName(v_declName_4635_);
v___x_4725_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4725_, 0, v___x_4723_);
lean_ctor_set(v___x_4725_, 1, v___x_4724_);
v___x_4726_ = lean_obj_once(&l_Lean_Meta_addInstance___closed__11, &l_Lean_Meta_addInstance___closed__11_once, _init_l_Lean_Meta_addInstance___closed__11);
v___x_4727_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4727_, 0, v___x_4725_);
lean_ctor_set(v___x_4727_, 1, v___x_4726_);
v___x_4728_ = l_Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__4(v___x_4727_, v___y_4697_, v___y_4698_, v___y_4699_, v___y_4700_);
if (lean_obj_tag(v___x_4728_) == 0)
{
lean_dec_ref_known(v___x_4728_, 1);
v___y_4675_ = v_a_4702_;
v___y_4676_ = v___y_4697_;
v___y_4677_ = v___y_4698_;
v___y_4678_ = v___y_4699_;
v___y_4679_ = v___y_4700_;
goto v___jp_4674_;
}
else
{
lean_dec(v_a_4702_);
lean_dec(v_a_4657_);
lean_dec(v_a_4644_);
lean_dec(v_prio_4637_);
lean_dec(v_declName_4635_);
return v___x_4728_;
}
}
}
}
else
{
lean_object* v_a_4729_; lean_object* v___x_4731_; uint8_t v_isShared_4732_; uint8_t v_isSharedCheck_4736_; 
lean_dec(v_a_4702_);
lean_dec(v_a_4657_);
lean_dec(v_a_4644_);
lean_dec(v_prio_4637_);
lean_dec(v_declName_4635_);
v_a_4729_ = lean_ctor_get(v___x_4708_, 0);
v_isSharedCheck_4736_ = !lean_is_exclusive(v___x_4708_);
if (v_isSharedCheck_4736_ == 0)
{
v___x_4731_ = v___x_4708_;
v_isShared_4732_ = v_isSharedCheck_4736_;
goto v_resetjp_4730_;
}
else
{
lean_inc(v_a_4729_);
lean_dec(v___x_4708_);
v___x_4731_ = lean_box(0);
v_isShared_4732_ = v_isSharedCheck_4736_;
goto v_resetjp_4730_;
}
v_resetjp_4730_:
{
lean_object* v___x_4734_; 
if (v_isShared_4732_ == 0)
{
v___x_4734_ = v___x_4731_;
goto v_reusejp_4733_;
}
else
{
lean_object* v_reuseFailAlloc_4735_; 
v_reuseFailAlloc_4735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4735_, 0, v_a_4729_);
v___x_4734_ = v_reuseFailAlloc_4735_;
goto v_reusejp_4733_;
}
v_reusejp_4733_:
{
return v___x_4734_;
}
}
}
}
}
else
{
lean_object* v_a_4737_; lean_object* v___x_4739_; uint8_t v_isShared_4740_; uint8_t v_isSharedCheck_4744_; 
lean_dec(v_a_4657_);
lean_dec(v_a_4644_);
lean_dec(v_prio_4637_);
lean_dec(v_declName_4635_);
v_a_4737_ = lean_ctor_get(v___x_4701_, 0);
v_isSharedCheck_4744_ = !lean_is_exclusive(v___x_4701_);
if (v_isSharedCheck_4744_ == 0)
{
v___x_4739_ = v___x_4701_;
v_isShared_4740_ = v_isSharedCheck_4744_;
goto v_resetjp_4738_;
}
else
{
lean_inc(v_a_4737_);
lean_dec(v___x_4701_);
v___x_4739_ = lean_box(0);
v_isShared_4740_ = v_isSharedCheck_4744_;
goto v_resetjp_4738_;
}
v_resetjp_4738_:
{
lean_object* v___x_4742_; 
if (v_isShared_4740_ == 0)
{
v___x_4742_ = v___x_4739_;
goto v_reusejp_4741_;
}
else
{
lean_object* v_reuseFailAlloc_4743_; 
v_reuseFailAlloc_4743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4743_, 0, v_a_4737_);
v___x_4742_ = v_reuseFailAlloc_4743_;
goto v_reusejp_4741_;
}
v_reusejp_4741_:
{
return v___x_4742_;
}
}
}
}
}
else
{
lean_object* v_a_4749_; lean_object* v___x_4751_; uint8_t v_isShared_4752_; uint8_t v_isSharedCheck_4756_; 
lean_dec(v_a_4644_);
lean_dec(v_prio_4637_);
lean_dec(v_declName_4635_);
v_a_4749_ = lean_ctor_get(v___x_4656_, 0);
v_isSharedCheck_4756_ = !lean_is_exclusive(v___x_4656_);
if (v_isSharedCheck_4756_ == 0)
{
v___x_4751_ = v___x_4656_;
v_isShared_4752_ = v_isSharedCheck_4756_;
goto v_resetjp_4750_;
}
else
{
lean_inc(v_a_4749_);
lean_dec(v___x_4656_);
v___x_4751_ = lean_box(0);
v_isShared_4752_ = v_isSharedCheck_4756_;
goto v_resetjp_4750_;
}
v_resetjp_4750_:
{
lean_object* v___x_4754_; 
if (v_isShared_4752_ == 0)
{
v___x_4754_ = v___x_4751_;
goto v_reusejp_4753_;
}
else
{
lean_object* v_reuseFailAlloc_4755_; 
v_reuseFailAlloc_4755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4755_, 0, v_a_4749_);
v___x_4754_ = v_reuseFailAlloc_4755_;
goto v_reusejp_4753_;
}
v_reusejp_4753_:
{
return v___x_4754_;
}
}
}
v___jp_4645_:
{
lean_object* v___x_4652_; lean_object* v___x_4653_; lean_object* v___x_4654_; lean_object* v___x_4655_; 
v___x_4652_ = l_Lean_Meta_instanceExtension;
v___x_4653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4653_, 0, v_declName_4635_);
v___x_4654_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_4654_, 0, v___y_4647_);
lean_ctor_set(v___x_4654_, 1, v_a_4644_);
lean_ctor_set(v___x_4654_, 2, v_prio_4637_);
lean_ctor_set(v___x_4654_, 3, v___x_4653_);
lean_ctor_set(v___x_4654_, 4, v___y_4646_);
lean_ctor_set_uint8(v___x_4654_, sizeof(void*)*5, v_attrKind_4636_);
v___x_4655_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg(v___x_4652_, v___x_4654_, v_attrKind_4636_, v___y_4649_, v___y_4650_, v___y_4651_);
return v___x_4655_;
}
}
else
{
lean_object* v_a_4757_; lean_object* v___x_4759_; uint8_t v_isShared_4760_; uint8_t v_isSharedCheck_4764_; 
lean_dec(v_prio_4637_);
lean_dec(v_declName_4635_);
v_a_4757_ = lean_ctor_get(v___x_4643_, 0);
v_isSharedCheck_4764_ = !lean_is_exclusive(v___x_4643_);
if (v_isSharedCheck_4764_ == 0)
{
v___x_4759_ = v___x_4643_;
v_isShared_4760_ = v_isSharedCheck_4764_;
goto v_resetjp_4758_;
}
else
{
lean_inc(v_a_4757_);
lean_dec(v___x_4643_);
v___x_4759_ = lean_box(0);
v_isShared_4760_ = v_isSharedCheck_4764_;
goto v_resetjp_4758_;
}
v_resetjp_4758_:
{
lean_object* v___x_4762_; 
if (v_isShared_4760_ == 0)
{
v___x_4762_ = v___x_4759_;
goto v_reusejp_4761_;
}
else
{
lean_object* v_reuseFailAlloc_4763_; 
v_reuseFailAlloc_4763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4763_, 0, v_a_4757_);
v___x_4762_ = v_reuseFailAlloc_4763_;
goto v_reusejp_4761_;
}
v_reusejp_4761_:
{
return v___x_4762_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addInstance___boxed(lean_object* v_declName_4765_, lean_object* v_attrKind_4766_, lean_object* v_prio_4767_, lean_object* v_a_4768_, lean_object* v_a_4769_, lean_object* v_a_4770_, lean_object* v_a_4771_, lean_object* v_a_4772_){
_start:
{
uint8_t v_attrKind_boxed_4773_; lean_object* v_res_4774_; 
v_attrKind_boxed_4773_ = lean_unbox(v_attrKind_4766_);
v_res_4774_ = l_Lean_Meta_addInstance(v_declName_4765_, v_attrKind_boxed_4773_, v_prio_4767_, v_a_4768_, v_a_4769_, v_a_4770_, v_a_4771_);
lean_dec(v_a_4771_);
lean_dec_ref(v_a_4770_);
lean_dec(v_a_4769_);
lean_dec_ref(v_a_4768_);
return v_res_4774_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3(lean_object* v_00_u03b1_4775_, lean_object* v_00_u03b2_4776_, lean_object* v_00_u03c3_4777_, lean_object* v_ext_4778_, lean_object* v_b_4779_, uint8_t v_kind_4780_, lean_object* v___y_4781_, lean_object* v___y_4782_, lean_object* v___y_4783_, lean_object* v___y_4784_){
_start:
{
lean_object* v___x_4786_; 
v___x_4786_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg(v_ext_4778_, v_b_4779_, v_kind_4780_, v___y_4782_, v___y_4783_, v___y_4784_);
return v___x_4786_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___boxed(lean_object* v_00_u03b1_4787_, lean_object* v_00_u03b2_4788_, lean_object* v_00_u03c3_4789_, lean_object* v_ext_4790_, lean_object* v_b_4791_, lean_object* v_kind_4792_, lean_object* v___y_4793_, lean_object* v___y_4794_, lean_object* v___y_4795_, lean_object* v___y_4796_, lean_object* v___y_4797_){
_start:
{
uint8_t v_kind_boxed_4798_; lean_object* v_res_4799_; 
v_kind_boxed_4798_ = lean_unbox(v_kind_4792_);
v_res_4799_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3(v_00_u03b1_4787_, v_00_u03b2_4788_, v_00_u03c3_4789_, v_ext_4790_, v_b_4791_, v_kind_boxed_4798_, v___y_4793_, v___y_4794_, v___y_4795_, v___y_4796_);
lean_dec(v___y_4796_);
lean_dec_ref(v___y_4795_);
lean_dec(v___y_4794_);
lean_dec_ref(v___y_4793_);
return v_res_4799_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3(lean_object* v_00_u03b1_4800_, lean_object* v_constName_4801_, lean_object* v___y_4802_, lean_object* v___y_4803_, lean_object* v___y_4804_, lean_object* v___y_4805_){
_start:
{
lean_object* v___x_4807_; 
v___x_4807_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3___redArg(v_constName_4801_, v___y_4802_, v___y_4803_, v___y_4804_, v___y_4805_);
return v___x_4807_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3___boxed(lean_object* v_00_u03b1_4808_, lean_object* v_constName_4809_, lean_object* v___y_4810_, lean_object* v___y_4811_, lean_object* v___y_4812_, lean_object* v___y_4813_, lean_object* v___y_4814_){
_start:
{
lean_object* v_res_4815_; 
v_res_4815_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3(v_00_u03b1_4808_, v_constName_4809_, v___y_4810_, v___y_4811_, v___y_4812_, v___y_4813_);
lean_dec(v___y_4813_);
lean_dec_ref(v___y_4812_);
lean_dec(v___y_4811_);
lean_dec_ref(v___y_4810_);
return v_res_4815_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6_spec__9(lean_object* v_00_u03b2_4816_){
_start:
{
lean_object* v___x_4817_; 
v___x_4817_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2);
return v___x_4817_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6___redArg(){
_start:
{
lean_object* v___x_4819_; 
v___x_4819_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2);
return v___x_4819_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6___redArg___boxed(lean_object* v___dummy_4820_){
_start:
{
lean_object* v_res_4821_; 
v_res_4821_ = l_Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6___redArg();
return v_res_4821_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6(lean_object* v_00_u03b2_4822_){
_start:
{
lean_object* v___x_4823_; 
v___x_4823_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2);
return v___x_4823_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6(lean_object* v_00_u03b1_4824_, lean_object* v_ref_4825_, lean_object* v_constName_4826_, lean_object* v___y_4827_, lean_object* v___y_4828_, lean_object* v___y_4829_, lean_object* v___y_4830_){
_start:
{
lean_object* v___x_4832_; 
v___x_4832_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg(v_ref_4825_, v_constName_4826_, v___y_4827_, v___y_4828_, v___y_4829_, v___y_4830_);
return v___x_4832_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___boxed(lean_object* v_00_u03b1_4833_, lean_object* v_ref_4834_, lean_object* v_constName_4835_, lean_object* v___y_4836_, lean_object* v___y_4837_, lean_object* v___y_4838_, lean_object* v___y_4839_, lean_object* v___y_4840_){
_start:
{
lean_object* v_res_4841_; 
v_res_4841_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6(v_00_u03b1_4833_, v_ref_4834_, v_constName_4835_, v___y_4836_, v___y_4837_, v___y_4838_, v___y_4839_);
lean_dec(v___y_4839_);
lean_dec_ref(v___y_4838_);
lean_dec(v___y_4837_);
lean_dec_ref(v___y_4836_);
lean_dec(v_ref_4834_);
return v_res_4841_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8(lean_object* v_00_u03b1_4842_, lean_object* v_ref_4843_, lean_object* v_msg_4844_, lean_object* v_declHint_4845_, lean_object* v___y_4846_, lean_object* v___y_4847_, lean_object* v___y_4848_, lean_object* v___y_4849_){
_start:
{
lean_object* v___x_4851_; 
v___x_4851_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8___redArg(v_ref_4843_, v_msg_4844_, v_declHint_4845_, v___y_4846_, v___y_4847_, v___y_4848_, v___y_4849_);
return v___x_4851_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8___boxed(lean_object* v_00_u03b1_4852_, lean_object* v_ref_4853_, lean_object* v_msg_4854_, lean_object* v_declHint_4855_, lean_object* v___y_4856_, lean_object* v___y_4857_, lean_object* v___y_4858_, lean_object* v___y_4859_, lean_object* v___y_4860_){
_start:
{
lean_object* v_res_4861_; 
v_res_4861_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8(v_00_u03b1_4852_, v_ref_4853_, v_msg_4854_, v_declHint_4855_, v___y_4856_, v___y_4857_, v___y_4858_, v___y_4859_);
lean_dec(v___y_4859_);
lean_dec_ref(v___y_4858_);
lean_dec(v___y_4857_);
lean_dec_ref(v___y_4856_);
lean_dec(v_ref_4853_);
return v_res_4861_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12(lean_object* v_msg_4862_, lean_object* v_declHint_4863_, lean_object* v___y_4864_, lean_object* v___y_4865_, lean_object* v___y_4866_, lean_object* v___y_4867_){
_start:
{
lean_object* v___x_4869_; 
v___x_4869_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg(v_msg_4862_, v_declHint_4863_, v___y_4867_);
return v___x_4869_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___boxed(lean_object* v_msg_4870_, lean_object* v_declHint_4871_, lean_object* v___y_4872_, lean_object* v___y_4873_, lean_object* v___y_4874_, lean_object* v___y_4875_, lean_object* v___y_4876_){
_start:
{
lean_object* v_res_4877_; 
v_res_4877_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12(v_msg_4870_, v_declHint_4871_, v___y_4872_, v___y_4873_, v___y_4874_, v___y_4875_);
lean_dec(v___y_4875_);
lean_dec_ref(v___y_4874_);
lean_dec(v___y_4873_);
lean_dec_ref(v___y_4872_);
return v_res_4877_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__12(lean_object* v_00_u03b1_4878_, lean_object* v_ref_4879_, lean_object* v_msg_4880_, lean_object* v___y_4881_, lean_object* v___y_4882_, lean_object* v___y_4883_, lean_object* v___y_4884_){
_start:
{
lean_object* v___x_4886_; 
v___x_4886_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__12___redArg(v_ref_4879_, v_msg_4880_, v___y_4881_, v___y_4882_, v___y_4883_, v___y_4884_);
return v___x_4886_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__12___boxed(lean_object* v_00_u03b1_4887_, lean_object* v_ref_4888_, lean_object* v_msg_4889_, lean_object* v___y_4890_, lean_object* v___y_4891_, lean_object* v___y_4892_, lean_object* v___y_4893_, lean_object* v___y_4894_){
_start:
{
lean_object* v_res_4895_; 
v_res_4895_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__12(v_00_u03b1_4887_, v_ref_4888_, v_msg_4889_, v___y_4890_, v___y_4891_, v___y_4892_, v___y_4893_);
lean_dec(v___y_4893_);
lean_dec_ref(v___y_4892_);
lean_dec(v___y_4891_);
lean_dec_ref(v___y_4890_);
lean_dec(v_ref_4888_);
return v_res_4895_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg(lean_object* v_declName_4896_, uint8_t v_s_4897_, lean_object* v___y_4898_, lean_object* v___y_4899_){
_start:
{
lean_object* v___x_4901_; lean_object* v_env_4902_; lean_object* v_nextMacroScope_4903_; lean_object* v_ngen_4904_; lean_object* v_auxDeclNGen_4905_; lean_object* v_traceState_4906_; lean_object* v_recordedDeps_4907_; lean_object* v_messages_4908_; lean_object* v_infoState_4909_; lean_object* v_snapshotTasks_4910_; lean_object* v___x_4912_; uint8_t v_isShared_4913_; uint8_t v_isSharedCheck_4939_; 
v___x_4901_ = lean_st_ref_take(v___y_4899_);
v_env_4902_ = lean_ctor_get(v___x_4901_, 0);
v_nextMacroScope_4903_ = lean_ctor_get(v___x_4901_, 1);
v_ngen_4904_ = lean_ctor_get(v___x_4901_, 2);
v_auxDeclNGen_4905_ = lean_ctor_get(v___x_4901_, 3);
v_traceState_4906_ = lean_ctor_get(v___x_4901_, 4);
v_recordedDeps_4907_ = lean_ctor_get(v___x_4901_, 6);
v_messages_4908_ = lean_ctor_get(v___x_4901_, 7);
v_infoState_4909_ = lean_ctor_get(v___x_4901_, 8);
v_snapshotTasks_4910_ = lean_ctor_get(v___x_4901_, 9);
v_isSharedCheck_4939_ = !lean_is_exclusive(v___x_4901_);
if (v_isSharedCheck_4939_ == 0)
{
lean_object* v_unused_4940_; 
v_unused_4940_ = lean_ctor_get(v___x_4901_, 5);
lean_dec(v_unused_4940_);
v___x_4912_ = v___x_4901_;
v_isShared_4913_ = v_isSharedCheck_4939_;
goto v_resetjp_4911_;
}
else
{
lean_inc(v_snapshotTasks_4910_);
lean_inc(v_infoState_4909_);
lean_inc(v_messages_4908_);
lean_inc(v_recordedDeps_4907_);
lean_inc(v_traceState_4906_);
lean_inc(v_auxDeclNGen_4905_);
lean_inc(v_ngen_4904_);
lean_inc(v_nextMacroScope_4903_);
lean_inc(v_env_4902_);
lean_dec(v___x_4901_);
v___x_4912_ = lean_box(0);
v_isShared_4913_ = v_isSharedCheck_4939_;
goto v_resetjp_4911_;
}
v_resetjp_4911_:
{
uint8_t v___x_4914_; lean_object* v___x_4915_; lean_object* v___x_4916_; lean_object* v___x_4917_; lean_object* v___x_4919_; 
v___x_4914_ = 0;
v___x_4915_ = lean_box(0);
v___x_4916_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_4902_, v_declName_4896_, v_s_4897_, v___x_4914_, v___x_4915_);
v___x_4917_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__1);
if (v_isShared_4913_ == 0)
{
lean_ctor_set(v___x_4912_, 5, v___x_4917_);
lean_ctor_set(v___x_4912_, 0, v___x_4916_);
v___x_4919_ = v___x_4912_;
goto v_reusejp_4918_;
}
else
{
lean_object* v_reuseFailAlloc_4938_; 
v_reuseFailAlloc_4938_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4938_, 0, v___x_4916_);
lean_ctor_set(v_reuseFailAlloc_4938_, 1, v_nextMacroScope_4903_);
lean_ctor_set(v_reuseFailAlloc_4938_, 2, v_ngen_4904_);
lean_ctor_set(v_reuseFailAlloc_4938_, 3, v_auxDeclNGen_4905_);
lean_ctor_set(v_reuseFailAlloc_4938_, 4, v_traceState_4906_);
lean_ctor_set(v_reuseFailAlloc_4938_, 5, v___x_4917_);
lean_ctor_set(v_reuseFailAlloc_4938_, 6, v_recordedDeps_4907_);
lean_ctor_set(v_reuseFailAlloc_4938_, 7, v_messages_4908_);
lean_ctor_set(v_reuseFailAlloc_4938_, 8, v_infoState_4909_);
lean_ctor_set(v_reuseFailAlloc_4938_, 9, v_snapshotTasks_4910_);
v___x_4919_ = v_reuseFailAlloc_4938_;
goto v_reusejp_4918_;
}
v_reusejp_4918_:
{
lean_object* v___x_4920_; lean_object* v___x_4921_; lean_object* v_mctx_4922_; lean_object* v_zetaDeltaFVarIds_4923_; lean_object* v_postponed_4924_; lean_object* v_diag_4925_; lean_object* v___x_4927_; uint8_t v_isShared_4928_; uint8_t v_isSharedCheck_4936_; 
v___x_4920_ = lean_st_ref_put(v___y_4899_, v___x_4919_);
v___x_4921_ = lean_st_ref_take(v___y_4898_);
v_mctx_4922_ = lean_ctor_get(v___x_4921_, 0);
v_zetaDeltaFVarIds_4923_ = lean_ctor_get(v___x_4921_, 2);
v_postponed_4924_ = lean_ctor_get(v___x_4921_, 3);
v_diag_4925_ = lean_ctor_get(v___x_4921_, 4);
v_isSharedCheck_4936_ = !lean_is_exclusive(v___x_4921_);
if (v_isSharedCheck_4936_ == 0)
{
lean_object* v_unused_4937_; 
v_unused_4937_ = lean_ctor_get(v___x_4921_, 1);
lean_dec(v_unused_4937_);
v___x_4927_ = v___x_4921_;
v_isShared_4928_ = v_isSharedCheck_4936_;
goto v_resetjp_4926_;
}
else
{
lean_inc(v_diag_4925_);
lean_inc(v_postponed_4924_);
lean_inc(v_zetaDeltaFVarIds_4923_);
lean_inc(v_mctx_4922_);
lean_dec(v___x_4921_);
v___x_4927_ = lean_box(0);
v_isShared_4928_ = v_isSharedCheck_4936_;
goto v_resetjp_4926_;
}
v_resetjp_4926_:
{
lean_object* v___x_4929_; lean_object* v___x_4930_; lean_object* v___x_4932_; 
v___x_4929_ = lean_box(0);
v___x_4930_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__5, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__5_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__5);
if (v_isShared_4928_ == 0)
{
lean_ctor_set(v___x_4927_, 1, v___x_4930_);
v___x_4932_ = v___x_4927_;
goto v_reusejp_4931_;
}
else
{
lean_object* v_reuseFailAlloc_4935_; 
v_reuseFailAlloc_4935_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4935_, 0, v_mctx_4922_);
lean_ctor_set(v_reuseFailAlloc_4935_, 1, v___x_4930_);
lean_ctor_set(v_reuseFailAlloc_4935_, 2, v_zetaDeltaFVarIds_4923_);
lean_ctor_set(v_reuseFailAlloc_4935_, 3, v_postponed_4924_);
lean_ctor_set(v_reuseFailAlloc_4935_, 4, v_diag_4925_);
v___x_4932_ = v_reuseFailAlloc_4935_;
goto v_reusejp_4931_;
}
v_reusejp_4931_:
{
lean_object* v___x_4933_; lean_object* v___x_4934_; 
v___x_4933_ = lean_st_ref_put(v___y_4898_, v___x_4932_);
v___x_4934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4934_, 0, v___x_4929_);
return v___x_4934_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg___boxed(lean_object* v_declName_4941_, lean_object* v_s_4942_, lean_object* v___y_4943_, lean_object* v___y_4944_, lean_object* v___y_4945_){
_start:
{
uint8_t v_s_boxed_4946_; lean_object* v_res_4947_; 
v_s_boxed_4946_ = lean_unbox(v_s_4942_);
v_res_4947_ = l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg(v_declName_4941_, v_s_boxed_4946_, v___y_4943_, v___y_4944_);
lean_dec(v___y_4944_);
lean_dec(v___y_4943_);
return v_res_4947_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_registerInstance(lean_object* v_declName_4948_, uint8_t v_attrKind_4949_, lean_object* v_prio_4950_, lean_object* v_a_4951_, lean_object* v_a_4952_, lean_object* v_a_4953_, lean_object* v_a_4954_){
_start:
{
uint8_t v___x_4956_; lean_object* v___x_4957_; lean_object* v___x_4958_; 
v___x_4956_ = 4;
lean_inc(v_declName_4948_);
v___x_4957_ = l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg(v_declName_4948_, v___x_4956_, v_a_4952_, v_a_4954_);
lean_dec_ref(v___x_4957_);
v___x_4958_ = l_Lean_Meta_addInstance(v_declName_4948_, v_attrKind_4949_, v_prio_4950_, v_a_4951_, v_a_4952_, v_a_4953_, v_a_4954_);
return v___x_4958_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_registerInstance___boxed(lean_object* v_declName_4959_, lean_object* v_attrKind_4960_, lean_object* v_prio_4961_, lean_object* v_a_4962_, lean_object* v_a_4963_, lean_object* v_a_4964_, lean_object* v_a_4965_, lean_object* v_a_4966_){
_start:
{
uint8_t v_attrKind_boxed_4967_; lean_object* v_res_4968_; 
v_attrKind_boxed_4967_ = lean_unbox(v_attrKind_4960_);
v_res_4968_ = l_Lean_Meta_registerInstance(v_declName_4959_, v_attrKind_boxed_4967_, v_prio_4961_, v_a_4962_, v_a_4963_, v_a_4964_, v_a_4965_);
lean_dec(v_a_4965_);
lean_dec_ref(v_a_4964_);
lean_dec(v_a_4963_);
lean_dec_ref(v_a_4962_);
return v_res_4968_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0(lean_object* v_declName_4969_, uint8_t v_s_4970_, lean_object* v___y_4971_, lean_object* v___y_4972_, lean_object* v___y_4973_, lean_object* v___y_4974_){
_start:
{
lean_object* v___x_4976_; 
v___x_4976_ = l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg(v_declName_4969_, v_s_4970_, v___y_4972_, v___y_4974_);
return v___x_4976_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___boxed(lean_object* v_declName_4977_, lean_object* v_s_4978_, lean_object* v___y_4979_, lean_object* v___y_4980_, lean_object* v___y_4981_, lean_object* v___y_4982_, lean_object* v___y_4983_){
_start:
{
uint8_t v_s_boxed_4984_; lean_object* v_res_4985_; 
v_s_boxed_4984_ = lean_unbox(v_s_4978_);
v_res_4985_ = l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0(v_declName_4977_, v_s_boxed_4984_, v___y_4979_, v___y_4980_, v___y_4981_, v___y_4982_);
lean_dec(v___y_4982_);
lean_dec_ref(v___y_4981_);
lean_dec(v___y_4980_);
lean_dec_ref(v___y_4979_);
return v_res_4985_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(lean_object* v_a_4986_, lean_object* v_x_4987_){
_start:
{
lean_inc_ref(v_a_4986_);
return v_a_4986_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object* v_a_4988_, lean_object* v_x_4989_){
_start:
{
lean_object* v_res_4990_; 
v_res_4990_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(v_a_4988_, v_x_4989_);
lean_dec_ref(v_x_4989_);
lean_dec_ref(v_a_4988_);
return v_res_4990_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1_spec__3(lean_object* v_msgData_4991_, lean_object* v___y_4992_, lean_object* v___y_4993_){
_start:
{
lean_object* v___x_4995_; lean_object* v_toCold_4996_; lean_object* v_env_4997_; lean_object* v_options_4998_; uint8_t v___x_4999_; lean_object* v_env_5000_; lean_object* v___x_5001_; lean_object* v___x_5002_; lean_object* v___x_5003_; lean_object* v___x_5004_; lean_object* v___x_5005_; lean_object* v___x_5006_; lean_object* v___x_5007_; 
v___x_4995_ = lean_st_ref_get(v___y_4993_);
v_toCold_4996_ = lean_ctor_get(v___y_4992_, 0);
v_env_4997_ = lean_ctor_get(v___x_4995_, 0);
lean_inc_ref(v_env_4997_);
lean_dec(v___x_4995_);
v_options_4998_ = lean_ctor_get(v_toCold_4996_, 2);
v___x_4999_ = 0;
v_env_5000_ = l_Lean_Environment_setRecordingDeps(v_env_4997_, v___x_4999_);
v___x_5001_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__1);
v___x_5002_ = lean_unsigned_to_nat(32u);
v___x_5003_ = lean_mk_empty_array_with_capacity(v___x_5002_);
lean_dec_ref(v___x_5003_);
v___x_5004_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__4);
lean_inc_ref(v_options_4998_);
v___x_5005_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5005_, 0, v_env_5000_);
lean_ctor_set(v___x_5005_, 1, v___x_5001_);
lean_ctor_set(v___x_5005_, 2, v___x_5004_);
lean_ctor_set(v___x_5005_, 3, v_options_4998_);
v___x_5006_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_5006_, 0, v___x_5005_);
lean_ctor_set(v___x_5006_, 1, v_msgData_4991_);
v___x_5007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5007_, 0, v___x_5006_);
return v___x_5007_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1_spec__3___boxed(lean_object* v_msgData_5008_, lean_object* v___y_5009_, lean_object* v___y_5010_, lean_object* v___y_5011_){
_start:
{
lean_object* v_res_5012_; 
v_res_5012_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1_spec__3(v_msgData_5008_, v___y_5009_, v___y_5010_);
lean_dec(v___y_5010_);
lean_dec_ref(v___y_5009_);
return v_res_5012_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg(lean_object* v_msg_5013_, lean_object* v___y_5014_, lean_object* v___y_5015_){
_start:
{
lean_object* v_ref_5017_; lean_object* v___x_5018_; lean_object* v_a_5019_; lean_object* v___x_5021_; uint8_t v_isShared_5022_; uint8_t v_isSharedCheck_5027_; 
v_ref_5017_ = lean_ctor_get(v___y_5014_, 2);
v___x_5018_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1_spec__3(v_msg_5013_, v___y_5014_, v___y_5015_);
v_a_5019_ = lean_ctor_get(v___x_5018_, 0);
v_isSharedCheck_5027_ = !lean_is_exclusive(v___x_5018_);
if (v_isSharedCheck_5027_ == 0)
{
v___x_5021_ = v___x_5018_;
v_isShared_5022_ = v_isSharedCheck_5027_;
goto v_resetjp_5020_;
}
else
{
lean_inc(v_a_5019_);
lean_dec(v___x_5018_);
v___x_5021_ = lean_box(0);
v_isShared_5022_ = v_isSharedCheck_5027_;
goto v_resetjp_5020_;
}
v_resetjp_5020_:
{
lean_object* v___x_5023_; lean_object* v___x_5025_; 
lean_inc(v_ref_5017_);
v___x_5023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5023_, 0, v_ref_5017_);
lean_ctor_set(v___x_5023_, 1, v_a_5019_);
if (v_isShared_5022_ == 0)
{
lean_ctor_set_tag(v___x_5021_, 1);
lean_ctor_set(v___x_5021_, 0, v___x_5023_);
v___x_5025_ = v___x_5021_;
goto v_reusejp_5024_;
}
else
{
lean_object* v_reuseFailAlloc_5026_; 
v_reuseFailAlloc_5026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5026_, 0, v___x_5023_);
v___x_5025_ = v_reuseFailAlloc_5026_;
goto v_reusejp_5024_;
}
v_reusejp_5024_:
{
return v___x_5025_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg___boxed(lean_object* v_msg_5028_, lean_object* v___y_5029_, lean_object* v___y_5030_, lean_object* v___y_5031_){
_start:
{
lean_object* v_res_5032_; 
v_res_5032_ = l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg(v_msg_5028_, v___y_5029_, v___y_5030_);
lean_dec(v___y_5030_);
lean_dec_ref(v___y_5029_);
return v_res_5032_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_keys_5033_, lean_object* v_i_5034_, lean_object* v_k_5035_){
_start:
{
lean_object* v___x_5036_; uint8_t v___x_5037_; 
v___x_5036_ = lean_array_get_size(v_keys_5033_);
v___x_5037_ = lean_nat_dec_lt(v_i_5034_, v___x_5036_);
if (v___x_5037_ == 0)
{
lean_dec(v_i_5034_);
return v___x_5037_;
}
else
{
lean_object* v_k_x27_5038_; uint8_t v___x_5039_; 
v_k_x27_5038_ = lean_array_fget_borrowed(v_keys_5033_, v_i_5034_);
v___x_5039_ = lean_name_eq(v_k_5035_, v_k_x27_5038_);
if (v___x_5039_ == 0)
{
lean_object* v___x_5040_; lean_object* v___x_5041_; 
v___x_5040_ = lean_unsigned_to_nat(1u);
v___x_5041_ = lean_nat_add(v_i_5034_, v___x_5040_);
lean_dec(v_i_5034_);
v_i_5034_ = v___x_5041_;
goto _start;
}
else
{
lean_dec(v_i_5034_);
return v___x_5037_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_keys_5043_, lean_object* v_i_5044_, lean_object* v_k_5045_){
_start:
{
uint8_t v_res_5046_; lean_object* v_r_5047_; 
v_res_5046_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(v_keys_5043_, v_i_5044_, v_k_5045_);
lean_dec(v_k_5045_);
lean_dec_ref(v_keys_5043_);
v_r_5047_ = lean_box(v_res_5046_);
return v_r_5047_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object* v_x_5048_, size_t v_x_5049_, lean_object* v_x_5050_){
_start:
{
if (lean_obj_tag(v_x_5048_) == 0)
{
lean_object* v_es_5051_; lean_object* v___x_5052_; size_t v___x_5053_; size_t v___x_5054_; lean_object* v_j_5055_; lean_object* v___x_5056_; 
v_es_5051_ = lean_ctor_get(v_x_5048_, 0);
v___x_5052_ = lean_box(2);
v___x_5053_ = ((size_t)31ULL);
v___x_5054_ = lean_usize_land(v_x_5049_, v___x_5053_);
v_j_5055_ = lean_usize_to_nat(v___x_5054_);
v___x_5056_ = lean_array_get_borrowed(v___x_5052_, v_es_5051_, v_j_5055_);
lean_dec(v_j_5055_);
switch(lean_obj_tag(v___x_5056_))
{
case 0:
{
lean_object* v_key_5057_; uint8_t v___x_5058_; 
v_key_5057_ = lean_ctor_get(v___x_5056_, 0);
v___x_5058_ = lean_name_eq(v_x_5050_, v_key_5057_);
return v___x_5058_;
}
case 1:
{
lean_object* v_node_5059_; size_t v___x_5060_; size_t v___x_5061_; 
v_node_5059_ = lean_ctor_get(v___x_5056_, 0);
v___x_5060_ = ((size_t)5ULL);
v___x_5061_ = lean_usize_shift_right(v_x_5049_, v___x_5060_);
v_x_5048_ = v_node_5059_;
v_x_5049_ = v___x_5061_;
goto _start;
}
default: 
{
uint8_t v___x_5063_; 
v___x_5063_ = 0;
return v___x_5063_;
}
}
}
else
{
lean_object* v_ks_5064_; lean_object* v___x_5065_; uint8_t v___x_5066_; 
v_ks_5064_ = lean_ctor_get(v_x_5048_, 0);
v___x_5065_ = lean_unsigned_to_nat(0u);
v___x_5066_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(v_ks_5064_, v___x_5065_, v_x_5050_);
return v___x_5066_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_5067_, lean_object* v_x_5068_, lean_object* v_x_5069_){
_start:
{
size_t v_x_2480__boxed_5070_; uint8_t v_res_5071_; lean_object* v_r_5072_; 
v_x_2480__boxed_5070_ = lean_unbox_usize(v_x_5068_);
lean_dec(v_x_5068_);
v_res_5071_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_x_5067_, v_x_2480__boxed_5070_, v_x_5069_);
lean_dec(v_x_5069_);
lean_dec_ref(v_x_5067_);
v_r_5072_ = lean_box(v_res_5071_);
return v_r_5072_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_x_5073_, lean_object* v_x_5074_){
_start:
{
uint64_t v___y_5076_; 
if (lean_obj_tag(v_x_5074_) == 0)
{
uint64_t v___x_5079_; 
v___x_5079_ = 1723ULL;
v___y_5076_ = v___x_5079_;
goto v___jp_5075_;
}
else
{
uint64_t v_hash_5080_; 
v_hash_5080_ = lean_ctor_get_uint64(v_x_5074_, sizeof(void*)*2);
v___y_5076_ = v_hash_5080_;
goto v___jp_5075_;
}
v___jp_5075_:
{
size_t v___x_5077_; uint8_t v___x_5078_; 
v___x_5077_ = lean_uint64_to_usize(v___y_5076_);
v___x_5078_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_x_5073_, v___x_5077_, v_x_5074_);
return v___x_5078_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_x_5081_, lean_object* v_x_5082_){
_start:
{
uint8_t v_res_5083_; lean_object* v_r_5084_; 
v_res_5083_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_5081_, v_x_5082_);
lean_dec(v_x_5082_);
lean_dec_ref(v_x_5081_);
v_r_5084_ = lean_box(v_res_5083_);
return v_r_5084_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0(lean_object* v_d_5085_, lean_object* v_declName_5086_, lean_object* v___y_5087_, lean_object* v___y_5088_){
_start:
{
lean_object* v_instanceNames_5093_; uint8_t v___x_5094_; 
v_instanceNames_5093_ = lean_ctor_get(v_d_5085_, 1);
v___x_5094_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___redArg(v_instanceNames_5093_, v_declName_5086_);
if (v___x_5094_ == 0)
{
lean_object* v___x_5095_; lean_object* v___x_5096_; lean_object* v___x_5097_; lean_object* v___x_5098_; lean_object* v___x_5099_; lean_object* v___x_5100_; lean_object* v_a_5101_; lean_object* v___x_5103_; uint8_t v_isShared_5104_; uint8_t v_isSharedCheck_5108_; 
lean_dec_ref(v_d_5085_);
v___x_5095_ = lean_obj_once(&l_Lean_Meta_Instances_erase___redArg___closed__3, &l_Lean_Meta_Instances_erase___redArg___closed__3_once, _init_l_Lean_Meta_Instances_erase___redArg___closed__3);
v___x_5096_ = l_Lean_MessageData_ofConstName(v_declName_5086_, v___x_5094_);
v___x_5097_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5097_, 0, v___x_5095_);
lean_ctor_set(v___x_5097_, 1, v___x_5096_);
v___x_5098_ = lean_obj_once(&l_Lean_Meta_Instances_erase___redArg___closed__5, &l_Lean_Meta_Instances_erase___redArg___closed__5_once, _init_l_Lean_Meta_Instances_erase___redArg___closed__5);
v___x_5099_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5099_, 0, v___x_5097_);
lean_ctor_set(v___x_5099_, 1, v___x_5098_);
v___x_5100_ = l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg(v___x_5099_, v___y_5087_, v___y_5088_);
v_a_5101_ = lean_ctor_get(v___x_5100_, 0);
v_isSharedCheck_5108_ = !lean_is_exclusive(v___x_5100_);
if (v_isSharedCheck_5108_ == 0)
{
v___x_5103_ = v___x_5100_;
v_isShared_5104_ = v_isSharedCheck_5108_;
goto v_resetjp_5102_;
}
else
{
lean_inc(v_a_5101_);
lean_dec(v___x_5100_);
v___x_5103_ = lean_box(0);
v_isShared_5104_ = v_isSharedCheck_5108_;
goto v_resetjp_5102_;
}
v_resetjp_5102_:
{
lean_object* v___x_5106_; 
if (v_isShared_5104_ == 0)
{
v___x_5106_ = v___x_5103_;
goto v_reusejp_5105_;
}
else
{
lean_object* v_reuseFailAlloc_5107_; 
v_reuseFailAlloc_5107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5107_, 0, v_a_5101_);
v___x_5106_ = v_reuseFailAlloc_5107_;
goto v_reusejp_5105_;
}
v_reusejp_5105_:
{
return v___x_5106_;
}
}
}
else
{
goto v___jp_5090_;
}
v___jp_5090_:
{
lean_object* v___x_5091_; lean_object* v___x_5092_; 
v___x_5091_ = l_Lean_Meta_Instances_eraseCore(v_d_5085_, v_declName_5086_);
v___x_5092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5092_, 0, v___x_5091_);
return v___x_5092_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0___boxed(lean_object* v_d_5109_, lean_object* v_declName_5110_, lean_object* v___y_5111_, lean_object* v___y_5112_, lean_object* v___y_5113_){
_start:
{
lean_object* v_res_5114_; 
v_res_5114_ = l_Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0(v_d_5109_, v_declName_5110_, v___y_5111_, v___y_5112_);
lean_dec(v___y_5112_);
lean_dec_ref(v___y_5111_);
return v_res_5114_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(lean_object* v___x_5115_, lean_object* v_declName_5116_, lean_object* v___y_5117_, lean_object* v___y_5118_){
_start:
{
lean_object* v___x_5120_; lean_object* v_env_5121_; lean_object* v___x_5122_; lean_object* v_ext_5123_; lean_object* v_toEnvExtension_5124_; lean_object* v_asyncMode_5125_; uint8_t v___x_5126_; lean_object* v___x_5127_; lean_object* v___x_5128_; 
v___x_5120_ = lean_st_ref_get(v___y_5118_);
v_env_5121_ = lean_ctor_get(v___x_5120_, 0);
lean_inc_ref(v_env_5121_);
lean_dec(v___x_5120_);
v___x_5122_ = l_Lean_Meta_instanceExtension;
v_ext_5123_ = lean_ctor_get(v___x_5122_, 1);
v_toEnvExtension_5124_ = lean_ctor_get(v_ext_5123_, 0);
v_asyncMode_5125_ = lean_ctor_get(v_toEnvExtension_5124_, 2);
v___x_5126_ = 0;
v___x_5127_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_5115_, v___x_5122_, v_env_5121_, v_asyncMode_5125_, v___x_5126_);
v___x_5128_ = l_Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0(v___x_5127_, v_declName_5116_, v___y_5117_, v___y_5118_);
if (lean_obj_tag(v___x_5128_) == 0)
{
lean_object* v_a_5129_; lean_object* v___x_5131_; uint8_t v_isShared_5132_; uint8_t v_isSharedCheck_5159_; 
v_a_5129_ = lean_ctor_get(v___x_5128_, 0);
v_isSharedCheck_5159_ = !lean_is_exclusive(v___x_5128_);
if (v_isSharedCheck_5159_ == 0)
{
v___x_5131_ = v___x_5128_;
v_isShared_5132_ = v_isSharedCheck_5159_;
goto v_resetjp_5130_;
}
else
{
lean_inc(v_a_5129_);
lean_dec(v___x_5128_);
v___x_5131_ = lean_box(0);
v_isShared_5132_ = v_isSharedCheck_5159_;
goto v_resetjp_5130_;
}
v_resetjp_5130_:
{
lean_object* v___f_5133_; lean_object* v___x_5134_; lean_object* v_env_5135_; lean_object* v_nextMacroScope_5136_; lean_object* v_ngen_5137_; lean_object* v_auxDeclNGen_5138_; lean_object* v_traceState_5139_; lean_object* v_recordedDeps_5140_; lean_object* v_messages_5141_; lean_object* v_infoState_5142_; lean_object* v_snapshotTasks_5143_; lean_object* v___x_5145_; uint8_t v_isShared_5146_; uint8_t v_isSharedCheck_5157_; 
v___f_5133_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_5133_, 0, v_a_5129_);
v___x_5134_ = lean_st_ref_take(v___y_5118_);
v_env_5135_ = lean_ctor_get(v___x_5134_, 0);
v_nextMacroScope_5136_ = lean_ctor_get(v___x_5134_, 1);
v_ngen_5137_ = lean_ctor_get(v___x_5134_, 2);
v_auxDeclNGen_5138_ = lean_ctor_get(v___x_5134_, 3);
v_traceState_5139_ = lean_ctor_get(v___x_5134_, 4);
v_recordedDeps_5140_ = lean_ctor_get(v___x_5134_, 6);
v_messages_5141_ = lean_ctor_get(v___x_5134_, 7);
v_infoState_5142_ = lean_ctor_get(v___x_5134_, 8);
v_snapshotTasks_5143_ = lean_ctor_get(v___x_5134_, 9);
v_isSharedCheck_5157_ = !lean_is_exclusive(v___x_5134_);
if (v_isSharedCheck_5157_ == 0)
{
lean_object* v_unused_5158_; 
v_unused_5158_ = lean_ctor_get(v___x_5134_, 5);
lean_dec(v_unused_5158_);
v___x_5145_ = v___x_5134_;
v_isShared_5146_ = v_isSharedCheck_5157_;
goto v_resetjp_5144_;
}
else
{
lean_inc(v_snapshotTasks_5143_);
lean_inc(v_infoState_5142_);
lean_inc(v_messages_5141_);
lean_inc(v_recordedDeps_5140_);
lean_inc(v_traceState_5139_);
lean_inc(v_auxDeclNGen_5138_);
lean_inc(v_ngen_5137_);
lean_inc(v_nextMacroScope_5136_);
lean_inc(v_env_5135_);
lean_dec(v___x_5134_);
v___x_5145_ = lean_box(0);
v_isShared_5146_ = v_isSharedCheck_5157_;
goto v_resetjp_5144_;
}
v_resetjp_5144_:
{
lean_object* v___x_5147_; lean_object* v___x_5148_; lean_object* v___x_5149_; lean_object* v___x_5151_; 
v___x_5147_ = lean_box(0);
v___x_5148_ = l_Lean_ScopedEnvExtension_modifyState___redArg(v___x_5122_, v_env_5135_, v___f_5133_);
v___x_5149_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__1);
if (v_isShared_5146_ == 0)
{
lean_ctor_set(v___x_5145_, 5, v___x_5149_);
lean_ctor_set(v___x_5145_, 0, v___x_5148_);
v___x_5151_ = v___x_5145_;
goto v_reusejp_5150_;
}
else
{
lean_object* v_reuseFailAlloc_5156_; 
v_reuseFailAlloc_5156_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_5156_, 0, v___x_5148_);
lean_ctor_set(v_reuseFailAlloc_5156_, 1, v_nextMacroScope_5136_);
lean_ctor_set(v_reuseFailAlloc_5156_, 2, v_ngen_5137_);
lean_ctor_set(v_reuseFailAlloc_5156_, 3, v_auxDeclNGen_5138_);
lean_ctor_set(v_reuseFailAlloc_5156_, 4, v_traceState_5139_);
lean_ctor_set(v_reuseFailAlloc_5156_, 5, v___x_5149_);
lean_ctor_set(v_reuseFailAlloc_5156_, 6, v_recordedDeps_5140_);
lean_ctor_set(v_reuseFailAlloc_5156_, 7, v_messages_5141_);
lean_ctor_set(v_reuseFailAlloc_5156_, 8, v_infoState_5142_);
lean_ctor_set(v_reuseFailAlloc_5156_, 9, v_snapshotTasks_5143_);
v___x_5151_ = v_reuseFailAlloc_5156_;
goto v_reusejp_5150_;
}
v_reusejp_5150_:
{
lean_object* v___x_5152_; lean_object* v___x_5154_; 
v___x_5152_ = lean_st_ref_put(v___y_5118_, v___x_5151_);
if (v_isShared_5132_ == 0)
{
lean_ctor_set(v___x_5131_, 0, v___x_5147_);
v___x_5154_ = v___x_5131_;
goto v_reusejp_5153_;
}
else
{
lean_object* v_reuseFailAlloc_5155_; 
v_reuseFailAlloc_5155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5155_, 0, v___x_5147_);
v___x_5154_ = v_reuseFailAlloc_5155_;
goto v_reusejp_5153_;
}
v_reusejp_5153_:
{
return v___x_5154_;
}
}
}
}
}
else
{
lean_object* v_a_5160_; lean_object* v___x_5162_; uint8_t v_isShared_5163_; uint8_t v_isSharedCheck_5167_; 
v_a_5160_ = lean_ctor_get(v___x_5128_, 0);
v_isSharedCheck_5167_ = !lean_is_exclusive(v___x_5128_);
if (v_isSharedCheck_5167_ == 0)
{
v___x_5162_ = v___x_5128_;
v_isShared_5163_ = v_isSharedCheck_5167_;
goto v_resetjp_5161_;
}
else
{
lean_inc(v_a_5160_);
lean_dec(v___x_5128_);
v___x_5162_ = lean_box(0);
v_isShared_5163_ = v_isSharedCheck_5167_;
goto v_resetjp_5161_;
}
v_resetjp_5161_:
{
lean_object* v___x_5165_; 
if (v_isShared_5163_ == 0)
{
v___x_5165_ = v___x_5162_;
goto v_reusejp_5164_;
}
else
{
lean_object* v_reuseFailAlloc_5166_; 
v_reuseFailAlloc_5166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5166_, 0, v_a_5160_);
v___x_5165_ = v_reuseFailAlloc_5166_;
goto v_reusejp_5164_;
}
v_reusejp_5164_:
{
return v___x_5165_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object* v___x_5168_, lean_object* v_declName_5169_, lean_object* v___y_5170_, lean_object* v___y_5171_, lean_object* v___y_5172_){
_start:
{
lean_object* v_res_5173_; 
v_res_5173_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(v___x_5168_, v_declName_5169_, v___y_5170_, v___y_5171_);
lean_dec(v___y_5171_);
lean_dec_ref(v___y_5170_);
lean_dec_ref(v___x_5168_);
return v_res_5173_;
}
}
static uint64_t _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5180_; uint64_t v___x_5181_; 
v___x_5180_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_5181_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_5180_);
return v___x_5181_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
uint64_t v___x_5182_; lean_object* v___x_5183_; lean_object* v___x_5184_; 
v___x_5182_ = lean_uint64_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_5183_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_5184_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_5184_, 0, v___x_5183_);
lean_ctor_set_uint64(v___x_5184_, sizeof(void*)*1, v___x_5182_);
return v___x_5184_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5185_; lean_object* v___x_5186_; 
v___x_5185_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0);
v___x_5186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5186_, 0, v___x_5185_);
return v___x_5186_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5187_; lean_object* v___x_5188_; 
v___x_5187_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_5188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5188_, 0, v___x_5187_);
lean_ctor_set(v___x_5188_, 1, v___x_5187_);
return v___x_5188_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5189_; lean_object* v___x_5190_; 
v___x_5189_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_5190_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5190_, 0, v___x_5189_);
lean_ctor_set(v___x_5190_, 1, v___x_5189_);
lean_ctor_set(v___x_5190_, 2, v___x_5189_);
lean_ctor_set(v___x_5190_, 3, v___x_5189_);
lean_ctor_set(v___x_5190_, 4, v___x_5189_);
return v___x_5190_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(lean_object* v___x_5191_, lean_object* v___x_5192_, lean_object* v_declName_5193_, lean_object* v_stx_5194_, uint8_t v_attrKind_5195_, lean_object* v___y_5196_, lean_object* v___y_5197_){
_start:
{
lean_object* v___x_5199_; lean_object* v___x_5200_; lean_object* v___x_5201_; 
v___x_5199_ = lean_unsigned_to_nat(1u);
v___x_5200_ = l_Lean_Syntax_getArg(v_stx_5194_, v___x_5199_);
v___x_5201_ = l_Lean_getAttrParamOptPrio(v___x_5200_, v___y_5196_, v___y_5197_);
if (lean_obj_tag(v___x_5201_) == 0)
{
lean_object* v_a_5202_; uint8_t v___x_5203_; uint8_t v___x_5204_; lean_object* v___x_5205_; lean_object* v___x_5206_; lean_object* v___x_5207_; lean_object* v___x_5208_; lean_object* v___x_5209_; size_t v___x_5210_; lean_object* v___x_5211_; lean_object* v___x_5212_; lean_object* v___x_5213_; lean_object* v___x_5214_; lean_object* v___x_5215_; lean_object* v___x_5216_; lean_object* v___x_5217_; lean_object* v___x_5218_; lean_object* v___x_5219_; lean_object* v___x_5220_; lean_object* v___x_5221_; lean_object* v___x_5222_; lean_object* v___x_5223_; lean_object* v___x_5224_; lean_object* v___x_5225_; lean_object* v___x_5226_; 
v_a_5202_ = lean_ctor_get(v___x_5201_, 0);
lean_inc(v_a_5202_);
lean_dec_ref_known(v___x_5201_, 1);
v___x_5203_ = 0;
v___x_5204_ = 1;
v___x_5205_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_5206_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_5207_ = lean_unsigned_to_nat(32u);
v___x_5208_ = lean_mk_empty_array_with_capacity(v___x_5207_);
v___x_5209_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__2);
v___x_5210_ = ((size_t)5ULL);
lean_inc_n(v___x_5191_, 7);
v___x_5211_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_5211_, 0, v___x_5209_);
lean_ctor_set(v___x_5211_, 1, v___x_5208_);
lean_ctor_set(v___x_5211_, 2, v___x_5191_);
lean_ctor_set(v___x_5211_, 3, v___x_5191_);
lean_ctor_set_usize(v___x_5211_, 4, v___x_5210_);
v___x_5212_ = lean_box(1);
lean_inc_ref(v___x_5211_);
v___x_5213_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5213_, 0, v___x_5206_);
lean_ctor_set(v___x_5213_, 1, v___x_5211_);
lean_ctor_set(v___x_5213_, 2, v___x_5212_);
v___x_5214_ = lean_mk_empty_array_with_capacity(v___x_5191_);
v___x_5215_ = lean_box(0);
lean_inc(v___x_5192_);
v___x_5216_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_5216_, 0, v___x_5205_);
lean_ctor_set(v___x_5216_, 1, v___x_5192_);
lean_ctor_set(v___x_5216_, 2, v___x_5213_);
lean_ctor_set(v___x_5216_, 3, v___x_5214_);
lean_ctor_set(v___x_5216_, 4, v___x_5215_);
lean_ctor_set(v___x_5216_, 5, v___x_5191_);
lean_ctor_set(v___x_5216_, 6, v___x_5215_);
lean_ctor_set_uint8(v___x_5216_, sizeof(void*)*7, v___x_5203_);
lean_ctor_set_uint8(v___x_5216_, sizeof(void*)*7 + 1, v___x_5203_);
lean_ctor_set_uint8(v___x_5216_, sizeof(void*)*7 + 2, v___x_5203_);
lean_ctor_set_uint8(v___x_5216_, sizeof(void*)*7 + 3, v___x_5204_);
v___x_5217_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_5217_, 0, v___x_5191_);
lean_ctor_set(v___x_5217_, 1, v___x_5191_);
lean_ctor_set(v___x_5217_, 2, v___x_5191_);
lean_ctor_set(v___x_5217_, 3, v___x_5191_);
lean_ctor_set(v___x_5217_, 4, v___x_5206_);
lean_ctor_set(v___x_5217_, 5, v___x_5206_);
lean_ctor_set(v___x_5217_, 6, v___x_5206_);
lean_ctor_set(v___x_5217_, 7, v___x_5206_);
lean_ctor_set(v___x_5217_, 8, v___x_5206_);
lean_ctor_set(v___x_5217_, 9, v___x_5206_);
lean_ctor_set(v___x_5217_, 10, v___x_5206_);
v___x_5218_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2);
v___x_5219_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_5220_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5220_, 0, v___x_5206_);
lean_ctor_set(v___x_5220_, 1, v___x_5206_);
lean_ctor_set(v___x_5220_, 2, v___x_5191_);
v___x_5221_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_5221_, 0, v___x_5218_);
lean_ctor_set(v___x_5221_, 1, v___x_5206_);
lean_ctor_set(v___x_5221_, 2, v___x_5219_);
lean_ctor_set(v___x_5221_, 3, v___x_5206_);
lean_ctor_set(v___x_5221_, 4, v___x_5206_);
lean_ctor_set(v___x_5221_, 5, v___x_5206_);
lean_ctor_set(v___x_5221_, 6, v___x_5206_);
lean_ctor_set(v___x_5221_, 7, v___x_5220_);
v___x_5222_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_5223_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5223_, 0, v___x_5217_);
lean_ctor_set(v___x_5223_, 1, v___x_5221_);
lean_ctor_set(v___x_5223_, 2, v___x_5192_);
lean_ctor_set(v___x_5223_, 3, v___x_5211_);
lean_ctor_set(v___x_5223_, 4, v___x_5222_);
v___x_5224_ = lean_box(0);
v___x_5225_ = lean_st_mk_ref(v___x_5223_);
v___x_5226_ = l_Lean_Meta_addInstance(v_declName_5193_, v_attrKind_5195_, v_a_5202_, v___x_5216_, v___x_5225_, v___y_5196_, v___y_5197_);
lean_dec_ref_known(v___x_5216_, 7);
if (lean_obj_tag(v___x_5226_) == 0)
{
lean_object* v___x_5228_; uint8_t v_isShared_5229_; uint8_t v_isSharedCheck_5234_; 
v_isSharedCheck_5234_ = !lean_is_exclusive(v___x_5226_);
if (v_isSharedCheck_5234_ == 0)
{
lean_object* v_unused_5235_; 
v_unused_5235_ = lean_ctor_get(v___x_5226_, 0);
lean_dec(v_unused_5235_);
v___x_5228_ = v___x_5226_;
v_isShared_5229_ = v_isSharedCheck_5234_;
goto v_resetjp_5227_;
}
else
{
lean_dec(v___x_5226_);
v___x_5228_ = lean_box(0);
v_isShared_5229_ = v_isSharedCheck_5234_;
goto v_resetjp_5227_;
}
v_resetjp_5227_:
{
lean_object* v___x_5230_; lean_object* v___x_5232_; 
v___x_5230_ = lean_st_ref_get(v___x_5225_);
lean_dec(v___x_5225_);
lean_dec(v___x_5230_);
if (v_isShared_5229_ == 0)
{
lean_ctor_set(v___x_5228_, 0, v___x_5224_);
v___x_5232_ = v___x_5228_;
goto v_reusejp_5231_;
}
else
{
lean_object* v_reuseFailAlloc_5233_; 
v_reuseFailAlloc_5233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5233_, 0, v___x_5224_);
v___x_5232_ = v_reuseFailAlloc_5233_;
goto v_reusejp_5231_;
}
v_reusejp_5231_:
{
return v___x_5232_;
}
}
}
else
{
lean_dec(v___x_5225_);
return v___x_5226_;
}
}
else
{
lean_object* v_a_5236_; lean_object* v___x_5238_; uint8_t v_isShared_5239_; uint8_t v_isSharedCheck_5243_; 
lean_dec(v_declName_5193_);
lean_dec(v___x_5192_);
lean_dec(v___x_5191_);
v_a_5236_ = lean_ctor_get(v___x_5201_, 0);
v_isSharedCheck_5243_ = !lean_is_exclusive(v___x_5201_);
if (v_isSharedCheck_5243_ == 0)
{
v___x_5238_ = v___x_5201_;
v_isShared_5239_ = v_isSharedCheck_5243_;
goto v_resetjp_5237_;
}
else
{
lean_inc(v_a_5236_);
lean_dec(v___x_5201_);
v___x_5238_ = lean_box(0);
v_isShared_5239_ = v_isSharedCheck_5243_;
goto v_resetjp_5237_;
}
v_resetjp_5237_:
{
lean_object* v___x_5241_; 
if (v_isShared_5239_ == 0)
{
v___x_5241_ = v___x_5238_;
goto v_reusejp_5240_;
}
else
{
lean_object* v_reuseFailAlloc_5242_; 
v_reuseFailAlloc_5242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5242_, 0, v_a_5236_);
v___x_5241_ = v_reuseFailAlloc_5242_;
goto v_reusejp_5240_;
}
v_reusejp_5240_:
{
return v___x_5241_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object* v___x_5244_, lean_object* v___x_5245_, lean_object* v_declName_5246_, lean_object* v_stx_5247_, lean_object* v_attrKind_5248_, lean_object* v___y_5249_, lean_object* v___y_5250_, lean_object* v___y_5251_){
_start:
{
uint8_t v_attrKind_boxed_5252_; lean_object* v_res_5253_; 
v_attrKind_boxed_5252_ = lean_unbox(v_attrKind_5248_);
v_res_5253_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(v___x_5244_, v___x_5245_, v_declName_5246_, v_stx_5247_, v_attrKind_boxed_5252_, v___y_5249_, v___y_5250_);
lean_dec(v___y_5250_);
lean_dec_ref(v___y_5249_);
lean_dec(v_stx_5247_);
return v_res_5253_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5254_; lean_object* v___f_5255_; 
v___x_5254_ = l_Lean_Meta_instInhabitedInstances_default;
v___f_5255_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed), 5, 1);
lean_closure_set(v___f_5255_, 0, v___x_5254_);
return v___f_5255_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_5322_; lean_object* v___f_5323_; lean_object* v___x_5324_; lean_object* v___x_5325_; 
v___f_5322_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___f_5323_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_5324_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__27_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_5325_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5325_, 0, v___x_5324_);
lean_ctor_set(v___x_5325_, 1, v___f_5323_);
lean_ctor_set(v___x_5325_, 2, v___f_5322_);
return v___x_5325_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_5327_; lean_object* v___x_5328_; 
v___x_5327_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_5328_ = l_Lean_registerBuiltinAttribute(v___x_5327_);
return v___x_5328_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object* v_a_5329_){
_start:
{
lean_object* v_res_5330_; 
v_res_5330_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_();
return v_res_5330_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_00_u03b2_5331_, lean_object* v_x_5332_, lean_object* v_x_5333_){
_start:
{
uint8_t v___x_5334_; 
v___x_5334_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_5332_, v_x_5333_);
return v___x_5334_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_00_u03b2_5335_, lean_object* v_x_5336_, lean_object* v_x_5337_){
_start:
{
uint8_t v_res_5338_; lean_object* v_r_5339_; 
v_res_5338_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0(v_00_u03b2_5335_, v_x_5336_, v_x_5337_);
lean_dec(v_x_5337_);
lean_dec_ref(v_x_5336_);
v_r_5339_ = lean_box(v_res_5338_);
return v_r_5339_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1(lean_object* v_00_u03b1_5340_, lean_object* v_msg_5341_, lean_object* v___y_5342_, lean_object* v___y_5343_){
_start:
{
lean_object* v___x_5345_; 
v___x_5345_ = l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg(v_msg_5341_, v___y_5342_, v___y_5343_);
return v___x_5345_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object* v_00_u03b1_5346_, lean_object* v_msg_5347_, lean_object* v___y_5348_, lean_object* v___y_5349_, lean_object* v___y_5350_){
_start:
{
lean_object* v_res_5351_; 
v_res_5351_ = l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1(v_00_u03b1_5346_, v_msg_5347_, v___y_5348_, v___y_5349_);
lean_dec(v___y_5349_);
lean_dec_ref(v___y_5348_);
return v_res_5351_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object* v_00_u03b2_5352_, lean_object* v_x_5353_, size_t v_x_5354_, lean_object* v_x_5355_){
_start:
{
uint8_t v___x_5356_; 
v___x_5356_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_x_5353_, v_x_5354_, v_x_5355_);
return v___x_5356_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_5357_, lean_object* v_x_5358_, lean_object* v_x_5359_, lean_object* v_x_5360_){
_start:
{
size_t v_x_3128__boxed_5361_; uint8_t v_res_5362_; lean_object* v_r_5363_; 
v_x_3128__boxed_5361_ = lean_unbox_usize(v_x_5359_);
lean_dec(v_x_5359_);
v_res_5362_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1(v_00_u03b2_5357_, v_x_5358_, v_x_3128__boxed_5361_, v_x_5360_);
lean_dec(v_x_5360_);
lean_dec_ref(v_x_5358_);
v_r_5363_ = lean_box(v_res_5362_);
return v_r_5363_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_5364_, lean_object* v_keys_5365_, lean_object* v_vals_5366_, lean_object* v_heq_5367_, lean_object* v_i_5368_, lean_object* v_k_5369_){
_start:
{
uint8_t v___x_5370_; 
v___x_5370_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(v_keys_5365_, v_i_5368_, v_k_5369_);
return v___x_5370_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b2_5371_, lean_object* v_keys_5372_, lean_object* v_vals_5373_, lean_object* v_heq_5374_, lean_object* v_i_5375_, lean_object* v_k_5376_){
_start:
{
uint8_t v_res_5377_; lean_object* v_r_5378_; 
v_res_5377_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2(v_00_u03b2_5371_, v_keys_5372_, v_vals_5373_, v_heq_5374_, v_i_5375_, v_k_5376_);
lean_dec(v_k_5376_);
lean_dec_ref(v_vals_5373_);
lean_dec_ref(v_keys_5372_);
v_r_5378_ = lean_box(v_res_5377_);
return v_r_5378_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_5381_; lean_object* v___x_5382_; lean_object* v___x_5383_; 
v___x_5381_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_5382_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_5383_ = l_Lean_addBuiltinDocString(v___x_5381_, v___x_5382_);
return v___x_5383_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object* v_a_5384_){
_start:
{
lean_object* v_res_5385_; 
v_res_5385_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_();
return v_res_5385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getGlobalInstancesIndex___redArg(lean_object* v_a_5386_){
_start:
{
lean_object* v___x_5388_; lean_object* v___x_5389_; lean_object* v_env_5390_; lean_object* v___x_5391_; lean_object* v_ext_5392_; lean_object* v_toEnvExtension_5393_; lean_object* v_asyncMode_5394_; uint8_t v___x_5395_; lean_object* v___x_5396_; lean_object* v_discrTree_5397_; lean_object* v___x_5398_; 
v___x_5388_ = l_Lean_Meta_instInhabitedInstances_default;
v___x_5389_ = lean_st_ref_get(v_a_5386_);
v_env_5390_ = lean_ctor_get(v___x_5389_, 0);
lean_inc_ref(v_env_5390_);
lean_dec(v___x_5389_);
v___x_5391_ = l_Lean_Meta_instanceExtension;
v_ext_5392_ = lean_ctor_get(v___x_5391_, 1);
v_toEnvExtension_5393_ = lean_ctor_get(v_ext_5392_, 0);
v_asyncMode_5394_ = lean_ctor_get(v_toEnvExtension_5393_, 2);
v___x_5395_ = 1;
v___x_5396_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_5388_, v___x_5391_, v_env_5390_, v_asyncMode_5394_, v___x_5395_);
v_discrTree_5397_ = lean_ctor_get(v___x_5396_, 0);
lean_inc_ref(v_discrTree_5397_);
lean_dec(v___x_5396_);
v___x_5398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5398_, 0, v_discrTree_5397_);
return v___x_5398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getGlobalInstancesIndex___redArg___boxed(lean_object* v_a_5399_, lean_object* v_a_5400_){
_start:
{
lean_object* v_res_5401_; 
v_res_5401_ = l_Lean_Meta_getGlobalInstancesIndex___redArg(v_a_5399_);
lean_dec(v_a_5399_);
return v_res_5401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getGlobalInstancesIndex(lean_object* v_a_5402_, lean_object* v_a_5403_){
_start:
{
lean_object* v___x_5405_; 
v___x_5405_ = l_Lean_Meta_getGlobalInstancesIndex___redArg(v_a_5403_);
return v___x_5405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getGlobalInstancesIndex___boxed(lean_object* v_a_5406_, lean_object* v_a_5407_, lean_object* v_a_5408_){
_start:
{
lean_object* v_res_5409_; 
v_res_5409_ = l_Lean_Meta_getGlobalInstancesIndex(v_a_5406_, v_a_5407_);
lean_dec(v_a_5407_);
lean_dec_ref(v_a_5406_);
return v_res_5409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceClassChanges(lean_object* v_env_5410_, lean_object* v_className_5411_){
_start:
{
lean_object* v___x_5412_; lean_object* v_ext_5413_; lean_object* v_toEnvExtension_5414_; lean_object* v_asyncMode_5415_; lean_object* v___x_5416_; uint8_t v___x_5417_; lean_object* v___x_5418_; lean_object* v___x_5419_; 
v___x_5412_ = l_Lean_Meta_instanceExtension;
v_ext_5413_ = lean_ctor_get(v___x_5412_, 1);
v_toEnvExtension_5414_ = lean_ctor_get(v_ext_5413_, 0);
v_asyncMode_5415_ = lean_ctor_get(v_toEnvExtension_5414_, 2);
v___x_5416_ = l_Lean_Meta_instInhabitedInstances_default;
v___x_5417_ = 1;
v___x_5418_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_5416_, v___x_5412_, v_env_5410_, v_asyncMode_5415_, v___x_5417_);
v___x_5419_ = l_Lean_Meta_Instances_getClassChanges(v___x_5418_, v_className_5411_);
lean_dec(v___x_5418_);
return v___x_5419_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceClassChanges___boxed(lean_object* v_env_5420_, lean_object* v_className_5421_){
_start:
{
lean_object* v_res_5422_; 
v_res_5422_ = l_Lean_Meta_getInstanceClassChanges(v_env_5420_, v_className_5421_);
lean_dec(v_className_5421_);
return v_res_5422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getErasedInstances___redArg(lean_object* v_a_5423_){
_start:
{
lean_object* v___x_5425_; lean_object* v___x_5426_; lean_object* v_env_5427_; lean_object* v___x_5428_; lean_object* v_ext_5429_; lean_object* v_toEnvExtension_5430_; lean_object* v_asyncMode_5431_; uint8_t v___x_5432_; lean_object* v___x_5433_; lean_object* v_erased_5434_; lean_object* v___x_5435_; 
v___x_5425_ = l_Lean_Meta_instInhabitedInstances_default;
v___x_5426_ = lean_st_ref_get(v_a_5423_);
v_env_5427_ = lean_ctor_get(v___x_5426_, 0);
lean_inc_ref(v_env_5427_);
lean_dec(v___x_5426_);
v___x_5428_ = l_Lean_Meta_instanceExtension;
v_ext_5429_ = lean_ctor_get(v___x_5428_, 1);
v_toEnvExtension_5430_ = lean_ctor_get(v_ext_5429_, 0);
v_asyncMode_5431_ = lean_ctor_get(v_toEnvExtension_5430_, 2);
v___x_5432_ = 1;
v___x_5433_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_5425_, v___x_5428_, v_env_5427_, v_asyncMode_5431_, v___x_5432_);
v_erased_5434_ = lean_ctor_get(v___x_5433_, 2);
lean_inc_ref(v_erased_5434_);
lean_dec(v___x_5433_);
v___x_5435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5435_, 0, v_erased_5434_);
return v___x_5435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getErasedInstances___redArg___boxed(lean_object* v_a_5436_, lean_object* v_a_5437_){
_start:
{
lean_object* v_res_5438_; 
v_res_5438_ = l_Lean_Meta_getErasedInstances___redArg(v_a_5436_);
lean_dec(v_a_5436_);
return v_res_5438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getErasedInstances(lean_object* v_a_5439_, lean_object* v_a_5440_){
_start:
{
lean_object* v___x_5442_; 
v___x_5442_ = l_Lean_Meta_getErasedInstances___redArg(v_a_5440_);
return v___x_5442_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getErasedInstances___boxed(lean_object* v_a_5443_, lean_object* v_a_5444_, lean_object* v_a_5445_){
_start:
{
lean_object* v_res_5446_; 
v_res_5446_ = l_Lean_Meta_getErasedInstances(v_a_5443_, v_a_5444_);
lean_dec(v_a_5444_);
lean_dec_ref(v_a_5443_);
return v_res_5446_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_isInstanceCore(lean_object* v_env_5447_, lean_object* v_declName_5448_){
_start:
{
lean_object* v___x_5449_; lean_object* v_ext_5450_; lean_object* v_toEnvExtension_5451_; lean_object* v_asyncMode_5452_; lean_object* v___x_5453_; uint8_t v___x_5454_; lean_object* v___x_5455_; lean_object* v_instanceNames_5456_; uint8_t v___x_5457_; 
v___x_5449_ = l_Lean_Meta_instanceExtension;
v_ext_5450_ = lean_ctor_get(v___x_5449_, 1);
v_toEnvExtension_5451_ = lean_ctor_get(v_ext_5450_, 0);
v_asyncMode_5452_ = lean_ctor_get(v_toEnvExtension_5451_, 2);
v___x_5453_ = l_Lean_Meta_instInhabitedInstances_default;
v___x_5454_ = 1;
v___x_5455_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_5453_, v___x_5449_, v_env_5447_, v_asyncMode_5452_, v___x_5454_);
v_instanceNames_5456_ = lean_ctor_get(v___x_5455_, 1);
lean_inc_ref(v_instanceNames_5456_);
lean_dec(v___x_5455_);
v___x_5457_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___redArg(v_instanceNames_5456_, v_declName_5448_);
lean_dec_ref(v_instanceNames_5456_);
return v___x_5457_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isInstanceCore___boxed(lean_object* v_env_5458_, lean_object* v_declName_5459_){
_start:
{
uint8_t v_res_5460_; lean_object* v_r_5461_; 
v_res_5460_ = l_Lean_Meta_isInstanceCore(v_env_5458_, v_declName_5459_);
lean_dec(v_declName_5459_);
v_r_5461_ = lean_box(v_res_5460_);
return v_r_5461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isInstance___redArg(lean_object* v_declName_5462_, lean_object* v_a_5463_){
_start:
{
lean_object* v___x_5465_; lean_object* v_env_5466_; uint8_t v___x_5467_; lean_object* v___x_5468_; lean_object* v___x_5469_; 
v___x_5465_ = lean_st_ref_get(v_a_5463_);
v_env_5466_ = lean_ctor_get(v___x_5465_, 0);
lean_inc_ref(v_env_5466_);
lean_dec(v___x_5465_);
v___x_5467_ = l_Lean_Meta_isInstanceCore(v_env_5466_, v_declName_5462_);
v___x_5468_ = lean_box(v___x_5467_);
v___x_5469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5469_, 0, v___x_5468_);
return v___x_5469_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isInstance___redArg___boxed(lean_object* v_declName_5470_, lean_object* v_a_5471_, lean_object* v_a_5472_){
_start:
{
lean_object* v_res_5473_; 
v_res_5473_ = l_Lean_Meta_isInstance___redArg(v_declName_5470_, v_a_5471_);
lean_dec(v_a_5471_);
lean_dec(v_declName_5470_);
return v_res_5473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isInstance(lean_object* v_declName_5474_, lean_object* v_a_5475_, lean_object* v_a_5476_){
_start:
{
lean_object* v___x_5478_; 
v___x_5478_ = l_Lean_Meta_isInstance___redArg(v_declName_5474_, v_a_5476_);
return v___x_5478_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isInstance___boxed(lean_object* v_declName_5479_, lean_object* v_a_5480_, lean_object* v_a_5481_, lean_object* v_a_5482_){
_start:
{
lean_object* v_res_5483_; 
v_res_5483_ = l_Lean_Meta_isInstance(v_declName_5479_, v_a_5480_, v_a_5481_);
lean_dec(v_a_5481_);
lean_dec_ref(v_a_5480_);
lean_dec(v_declName_5479_);
return v_res_5483_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstancePriority_x3f___redArg(lean_object* v_declName_5484_, lean_object* v_a_5485_){
_start:
{
lean_object* v___x_5487_; lean_object* v___x_5488_; lean_object* v_env_5489_; lean_object* v___x_5490_; lean_object* v_ext_5491_; lean_object* v_toEnvExtension_5492_; lean_object* v_asyncMode_5493_; uint8_t v___x_5494_; lean_object* v___x_5495_; lean_object* v_instanceNames_5496_; lean_object* v___x_5497_; 
v___x_5487_ = l_Lean_Meta_instInhabitedInstances_default;
v___x_5488_ = lean_st_ref_get(v_a_5485_);
v_env_5489_ = lean_ctor_get(v___x_5488_, 0);
lean_inc_ref(v_env_5489_);
lean_dec(v___x_5488_);
v___x_5490_ = l_Lean_Meta_instanceExtension;
v_ext_5491_ = lean_ctor_get(v___x_5490_, 1);
v_toEnvExtension_5492_ = lean_ctor_get(v_ext_5491_, 0);
v_asyncMode_5493_ = lean_ctor_get(v_toEnvExtension_5492_, 2);
v___x_5494_ = 1;
v___x_5495_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_5487_, v___x_5490_, v_env_5489_, v_asyncMode_5493_, v___x_5494_);
v_instanceNames_5496_ = lean_ctor_get(v___x_5495_, 1);
lean_inc_ref(v_instanceNames_5496_);
lean_dec(v___x_5495_);
v___x_5497_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0___redArg(v_instanceNames_5496_, v_declName_5484_);
lean_dec_ref(v_instanceNames_5496_);
if (lean_obj_tag(v___x_5497_) == 1)
{
lean_object* v_val_5498_; lean_object* v___x_5500_; uint8_t v_isShared_5501_; uint8_t v_isSharedCheck_5507_; 
v_val_5498_ = lean_ctor_get(v___x_5497_, 0);
v_isSharedCheck_5507_ = !lean_is_exclusive(v___x_5497_);
if (v_isSharedCheck_5507_ == 0)
{
v___x_5500_ = v___x_5497_;
v_isShared_5501_ = v_isSharedCheck_5507_;
goto v_resetjp_5499_;
}
else
{
lean_inc(v_val_5498_);
lean_dec(v___x_5497_);
v___x_5500_ = lean_box(0);
v_isShared_5501_ = v_isSharedCheck_5507_;
goto v_resetjp_5499_;
}
v_resetjp_5499_:
{
lean_object* v_priority_5502_; lean_object* v___x_5504_; 
v_priority_5502_ = lean_ctor_get(v_val_5498_, 2);
lean_inc(v_priority_5502_);
lean_dec(v_val_5498_);
if (v_isShared_5501_ == 0)
{
lean_ctor_set(v___x_5500_, 0, v_priority_5502_);
v___x_5504_ = v___x_5500_;
goto v_reusejp_5503_;
}
else
{
lean_object* v_reuseFailAlloc_5506_; 
v_reuseFailAlloc_5506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5506_, 0, v_priority_5502_);
v___x_5504_ = v_reuseFailAlloc_5506_;
goto v_reusejp_5503_;
}
v_reusejp_5503_:
{
lean_object* v___x_5505_; 
v___x_5505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5505_, 0, v___x_5504_);
return v___x_5505_;
}
}
}
else
{
lean_object* v___x_5508_; lean_object* v___x_5509_; 
lean_dec(v___x_5497_);
v___x_5508_ = lean_box(0);
v___x_5509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5509_, 0, v___x_5508_);
return v___x_5509_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstancePriority_x3f___redArg___boxed(lean_object* v_declName_5510_, lean_object* v_a_5511_, lean_object* v_a_5512_){
_start:
{
lean_object* v_res_5513_; 
v_res_5513_ = l_Lean_Meta_getInstancePriority_x3f___redArg(v_declName_5510_, v_a_5511_);
lean_dec(v_a_5511_);
lean_dec(v_declName_5510_);
return v_res_5513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstancePriority_x3f(lean_object* v_declName_5514_, lean_object* v_a_5515_, lean_object* v_a_5516_){
_start:
{
lean_object* v___x_5518_; 
v___x_5518_ = l_Lean_Meta_getInstancePriority_x3f___redArg(v_declName_5514_, v_a_5516_);
return v___x_5518_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstancePriority_x3f___boxed(lean_object* v_declName_5519_, lean_object* v_a_5520_, lean_object* v_a_5521_, lean_object* v_a_5522_){
_start:
{
lean_object* v_res_5523_; 
v_res_5523_ = l_Lean_Meta_getInstancePriority_x3f(v_declName_5519_, v_a_5520_, v_a_5521_);
lean_dec(v_a_5521_);
lean_dec_ref(v_a_5520_);
lean_dec(v_declName_5519_);
return v_res_5523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceAttrKind_x3f___redArg(lean_object* v_declName_5524_, lean_object* v_a_5525_){
_start:
{
lean_object* v___x_5527_; lean_object* v___x_5528_; lean_object* v_env_5529_; lean_object* v___x_5530_; lean_object* v_ext_5531_; lean_object* v_toEnvExtension_5532_; lean_object* v_asyncMode_5533_; uint8_t v___x_5534_; lean_object* v___x_5535_; lean_object* v_instanceNames_5536_; lean_object* v___x_5537_; 
v___x_5527_ = l_Lean_Meta_instInhabitedInstances_default;
v___x_5528_ = lean_st_ref_get(v_a_5525_);
v_env_5529_ = lean_ctor_get(v___x_5528_, 0);
lean_inc_ref(v_env_5529_);
lean_dec(v___x_5528_);
v___x_5530_ = l_Lean_Meta_instanceExtension;
v_ext_5531_ = lean_ctor_get(v___x_5530_, 1);
v_toEnvExtension_5532_ = lean_ctor_get(v_ext_5531_, 0);
v_asyncMode_5533_ = lean_ctor_get(v_toEnvExtension_5532_, 2);
v___x_5534_ = 1;
v___x_5535_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_5527_, v___x_5530_, v_env_5529_, v_asyncMode_5533_, v___x_5534_);
v_instanceNames_5536_ = lean_ctor_get(v___x_5535_, 1);
lean_inc_ref(v_instanceNames_5536_);
lean_dec(v___x_5535_);
v___x_5537_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0___redArg(v_instanceNames_5536_, v_declName_5524_);
lean_dec_ref(v_instanceNames_5536_);
if (lean_obj_tag(v___x_5537_) == 1)
{
lean_object* v_val_5538_; lean_object* v___x_5540_; uint8_t v_isShared_5541_; uint8_t v_isSharedCheck_5548_; 
v_val_5538_ = lean_ctor_get(v___x_5537_, 0);
v_isSharedCheck_5548_ = !lean_is_exclusive(v___x_5537_);
if (v_isSharedCheck_5548_ == 0)
{
v___x_5540_ = v___x_5537_;
v_isShared_5541_ = v_isSharedCheck_5548_;
goto v_resetjp_5539_;
}
else
{
lean_inc(v_val_5538_);
lean_dec(v___x_5537_);
v___x_5540_ = lean_box(0);
v_isShared_5541_ = v_isSharedCheck_5548_;
goto v_resetjp_5539_;
}
v_resetjp_5539_:
{
uint8_t v_attrKind_5542_; lean_object* v___x_5543_; lean_object* v___x_5545_; 
v_attrKind_5542_ = lean_ctor_get_uint8(v_val_5538_, sizeof(void*)*5);
lean_dec(v_val_5538_);
v___x_5543_ = lean_box(v_attrKind_5542_);
if (v_isShared_5541_ == 0)
{
lean_ctor_set(v___x_5540_, 0, v___x_5543_);
v___x_5545_ = v___x_5540_;
goto v_reusejp_5544_;
}
else
{
lean_object* v_reuseFailAlloc_5547_; 
v_reuseFailAlloc_5547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5547_, 0, v___x_5543_);
v___x_5545_ = v_reuseFailAlloc_5547_;
goto v_reusejp_5544_;
}
v_reusejp_5544_:
{
lean_object* v___x_5546_; 
v___x_5546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5546_, 0, v___x_5545_);
return v___x_5546_;
}
}
}
else
{
lean_object* v___x_5549_; lean_object* v___x_5550_; 
lean_dec(v___x_5537_);
v___x_5549_ = lean_box(0);
v___x_5550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5550_, 0, v___x_5549_);
return v___x_5550_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceAttrKind_x3f___redArg___boxed(lean_object* v_declName_5551_, lean_object* v_a_5552_, lean_object* v_a_5553_){
_start:
{
lean_object* v_res_5554_; 
v_res_5554_ = l_Lean_Meta_getInstanceAttrKind_x3f___redArg(v_declName_5551_, v_a_5552_);
lean_dec(v_a_5552_);
lean_dec(v_declName_5551_);
return v_res_5554_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceAttrKind_x3f(lean_object* v_declName_5555_, lean_object* v_a_5556_, lean_object* v_a_5557_){
_start:
{
lean_object* v___x_5559_; 
v___x_5559_ = l_Lean_Meta_getInstanceAttrKind_x3f___redArg(v_declName_5555_, v_a_5557_);
return v___x_5559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceAttrKind_x3f___boxed(lean_object* v_declName_5560_, lean_object* v_a_5561_, lean_object* v_a_5562_, lean_object* v_a_5563_){
_start:
{
lean_object* v_res_5564_; 
v_res_5564_ = l_Lean_Meta_getInstanceAttrKind_x3f(v_declName_5560_, v_a_5561_, v_a_5562_);
lean_dec(v_a_5562_);
lean_dec_ref(v_a_5561_);
lean_dec(v_declName_5560_);
return v_res_5564_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_addDefaultInstanceEntry_spec__1___redArg(lean_object* v_k_5569_, lean_object* v_v_5570_, lean_object* v_t_5571_){
_start:
{
if (lean_obj_tag(v_t_5571_) == 0)
{
lean_object* v_size_5572_; lean_object* v_k_5573_; lean_object* v_v_5574_; lean_object* v_l_5575_; lean_object* v_r_5576_; lean_object* v___x_5578_; uint8_t v_isShared_5579_; uint8_t v_isSharedCheck_5857_; 
v_size_5572_ = lean_ctor_get(v_t_5571_, 0);
v_k_5573_ = lean_ctor_get(v_t_5571_, 1);
v_v_5574_ = lean_ctor_get(v_t_5571_, 2);
v_l_5575_ = lean_ctor_get(v_t_5571_, 3);
v_r_5576_ = lean_ctor_get(v_t_5571_, 4);
v_isSharedCheck_5857_ = !lean_is_exclusive(v_t_5571_);
if (v_isSharedCheck_5857_ == 0)
{
v___x_5578_ = v_t_5571_;
v_isShared_5579_ = v_isSharedCheck_5857_;
goto v_resetjp_5577_;
}
else
{
lean_inc(v_r_5576_);
lean_inc(v_l_5575_);
lean_inc(v_v_5574_);
lean_inc(v_k_5573_);
lean_inc(v_size_5572_);
lean_dec(v_t_5571_);
v___x_5578_ = lean_box(0);
v_isShared_5579_ = v_isSharedCheck_5857_;
goto v_resetjp_5577_;
}
v_resetjp_5577_:
{
uint8_t v___x_5580_; 
v___x_5580_ = lean_nat_dec_lt(v_k_5573_, v_k_5569_);
if (v___x_5580_ == 0)
{
uint8_t v___x_5581_; 
v___x_5581_ = lean_nat_dec_eq(v_k_5573_, v_k_5569_);
if (v___x_5581_ == 0)
{
lean_object* v_impl_5582_; lean_object* v___x_5583_; 
lean_dec(v_size_5572_);
v_impl_5582_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_addDefaultInstanceEntry_spec__1___redArg(v_k_5569_, v_v_5570_, v_r_5576_);
v___x_5583_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_5575_) == 0)
{
lean_object* v_size_5584_; lean_object* v_size_5585_; lean_object* v_k_5586_; lean_object* v_v_5587_; lean_object* v_l_5588_; lean_object* v_r_5589_; lean_object* v___x_5590_; lean_object* v___x_5591_; uint8_t v___x_5592_; 
v_size_5584_ = lean_ctor_get(v_l_5575_, 0);
v_size_5585_ = lean_ctor_get(v_impl_5582_, 0);
v_k_5586_ = lean_ctor_get(v_impl_5582_, 1);
v_v_5587_ = lean_ctor_get(v_impl_5582_, 2);
v_l_5588_ = lean_ctor_get(v_impl_5582_, 3);
lean_inc(v_l_5588_);
v_r_5589_ = lean_ctor_get(v_impl_5582_, 4);
v___x_5590_ = lean_unsigned_to_nat(3u);
v___x_5591_ = lean_nat_mul(v___x_5590_, v_size_5584_);
v___x_5592_ = lean_nat_dec_lt(v___x_5591_, v_size_5585_);
lean_dec(v___x_5591_);
if (v___x_5592_ == 0)
{
lean_object* v___x_5593_; lean_object* v___x_5594_; lean_object* v___x_5596_; 
lean_dec(v_l_5588_);
v___x_5593_ = lean_nat_add(v___x_5583_, v_size_5584_);
v___x_5594_ = lean_nat_add(v___x_5593_, v_size_5585_);
lean_dec(v___x_5593_);
if (v_isShared_5579_ == 0)
{
lean_ctor_set(v___x_5578_, 4, v_impl_5582_);
lean_ctor_set(v___x_5578_, 0, v___x_5594_);
v___x_5596_ = v___x_5578_;
goto v_reusejp_5595_;
}
else
{
lean_object* v_reuseFailAlloc_5597_; 
v_reuseFailAlloc_5597_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5597_, 0, v___x_5594_);
lean_ctor_set(v_reuseFailAlloc_5597_, 1, v_k_5573_);
lean_ctor_set(v_reuseFailAlloc_5597_, 2, v_v_5574_);
lean_ctor_set(v_reuseFailAlloc_5597_, 3, v_l_5575_);
lean_ctor_set(v_reuseFailAlloc_5597_, 4, v_impl_5582_);
v___x_5596_ = v_reuseFailAlloc_5597_;
goto v_reusejp_5595_;
}
v_reusejp_5595_:
{
return v___x_5596_;
}
}
else
{
lean_object* v___x_5599_; uint8_t v_isShared_5600_; uint8_t v_isSharedCheck_5661_; 
lean_inc(v_r_5589_);
lean_inc(v_v_5587_);
lean_inc(v_k_5586_);
lean_inc(v_size_5585_);
v_isSharedCheck_5661_ = !lean_is_exclusive(v_impl_5582_);
if (v_isSharedCheck_5661_ == 0)
{
lean_object* v_unused_5662_; lean_object* v_unused_5663_; lean_object* v_unused_5664_; lean_object* v_unused_5665_; lean_object* v_unused_5666_; 
v_unused_5662_ = lean_ctor_get(v_impl_5582_, 4);
lean_dec(v_unused_5662_);
v_unused_5663_ = lean_ctor_get(v_impl_5582_, 3);
lean_dec(v_unused_5663_);
v_unused_5664_ = lean_ctor_get(v_impl_5582_, 2);
lean_dec(v_unused_5664_);
v_unused_5665_ = lean_ctor_get(v_impl_5582_, 1);
lean_dec(v_unused_5665_);
v_unused_5666_ = lean_ctor_get(v_impl_5582_, 0);
lean_dec(v_unused_5666_);
v___x_5599_ = v_impl_5582_;
v_isShared_5600_ = v_isSharedCheck_5661_;
goto v_resetjp_5598_;
}
else
{
lean_dec(v_impl_5582_);
v___x_5599_ = lean_box(0);
v_isShared_5600_ = v_isSharedCheck_5661_;
goto v_resetjp_5598_;
}
v_resetjp_5598_:
{
lean_object* v_size_5601_; lean_object* v_k_5602_; lean_object* v_v_5603_; lean_object* v_l_5604_; lean_object* v_r_5605_; lean_object* v_size_5606_; lean_object* v___x_5607_; lean_object* v___x_5608_; uint8_t v___x_5609_; 
v_size_5601_ = lean_ctor_get(v_l_5588_, 0);
v_k_5602_ = lean_ctor_get(v_l_5588_, 1);
v_v_5603_ = lean_ctor_get(v_l_5588_, 2);
v_l_5604_ = lean_ctor_get(v_l_5588_, 3);
v_r_5605_ = lean_ctor_get(v_l_5588_, 4);
v_size_5606_ = lean_ctor_get(v_r_5589_, 0);
v___x_5607_ = lean_unsigned_to_nat(2u);
v___x_5608_ = lean_nat_mul(v___x_5607_, v_size_5606_);
v___x_5609_ = lean_nat_dec_lt(v_size_5601_, v___x_5608_);
lean_dec(v___x_5608_);
if (v___x_5609_ == 0)
{
lean_object* v___x_5611_; uint8_t v_isShared_5612_; uint8_t v_isSharedCheck_5637_; 
lean_inc(v_r_5605_);
lean_inc(v_l_5604_);
lean_inc(v_v_5603_);
lean_inc(v_k_5602_);
v_isSharedCheck_5637_ = !lean_is_exclusive(v_l_5588_);
if (v_isSharedCheck_5637_ == 0)
{
lean_object* v_unused_5638_; lean_object* v_unused_5639_; lean_object* v_unused_5640_; lean_object* v_unused_5641_; lean_object* v_unused_5642_; 
v_unused_5638_ = lean_ctor_get(v_l_5588_, 4);
lean_dec(v_unused_5638_);
v_unused_5639_ = lean_ctor_get(v_l_5588_, 3);
lean_dec(v_unused_5639_);
v_unused_5640_ = lean_ctor_get(v_l_5588_, 2);
lean_dec(v_unused_5640_);
v_unused_5641_ = lean_ctor_get(v_l_5588_, 1);
lean_dec(v_unused_5641_);
v_unused_5642_ = lean_ctor_get(v_l_5588_, 0);
lean_dec(v_unused_5642_);
v___x_5611_ = v_l_5588_;
v_isShared_5612_ = v_isSharedCheck_5637_;
goto v_resetjp_5610_;
}
else
{
lean_dec(v_l_5588_);
v___x_5611_ = lean_box(0);
v_isShared_5612_ = v_isSharedCheck_5637_;
goto v_resetjp_5610_;
}
v_resetjp_5610_:
{
lean_object* v___x_5613_; lean_object* v___x_5614_; lean_object* v___y_5616_; lean_object* v___y_5617_; lean_object* v___y_5618_; lean_object* v___y_5627_; 
v___x_5613_ = lean_nat_add(v___x_5583_, v_size_5584_);
v___x_5614_ = lean_nat_add(v___x_5613_, v_size_5585_);
lean_dec(v_size_5585_);
if (lean_obj_tag(v_l_5604_) == 0)
{
lean_object* v_size_5635_; 
v_size_5635_ = lean_ctor_get(v_l_5604_, 0);
lean_inc(v_size_5635_);
v___y_5627_ = v_size_5635_;
goto v___jp_5626_;
}
else
{
lean_object* v___x_5636_; 
v___x_5636_ = lean_unsigned_to_nat(0u);
v___y_5627_ = v___x_5636_;
goto v___jp_5626_;
}
v___jp_5615_:
{
lean_object* v___x_5619_; lean_object* v___x_5621_; 
v___x_5619_ = lean_nat_add(v___y_5616_, v___y_5618_);
lean_dec(v___y_5618_);
lean_dec(v___y_5616_);
if (v_isShared_5612_ == 0)
{
lean_ctor_set(v___x_5611_, 4, v_r_5589_);
lean_ctor_set(v___x_5611_, 3, v_r_5605_);
lean_ctor_set(v___x_5611_, 2, v_v_5587_);
lean_ctor_set(v___x_5611_, 1, v_k_5586_);
lean_ctor_set(v___x_5611_, 0, v___x_5619_);
v___x_5621_ = v___x_5611_;
goto v_reusejp_5620_;
}
else
{
lean_object* v_reuseFailAlloc_5625_; 
v_reuseFailAlloc_5625_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5625_, 0, v___x_5619_);
lean_ctor_set(v_reuseFailAlloc_5625_, 1, v_k_5586_);
lean_ctor_set(v_reuseFailAlloc_5625_, 2, v_v_5587_);
lean_ctor_set(v_reuseFailAlloc_5625_, 3, v_r_5605_);
lean_ctor_set(v_reuseFailAlloc_5625_, 4, v_r_5589_);
v___x_5621_ = v_reuseFailAlloc_5625_;
goto v_reusejp_5620_;
}
v_reusejp_5620_:
{
lean_object* v___x_5623_; 
if (v_isShared_5600_ == 0)
{
lean_ctor_set(v___x_5599_, 4, v___x_5621_);
lean_ctor_set(v___x_5599_, 3, v___y_5617_);
lean_ctor_set(v___x_5599_, 2, v_v_5603_);
lean_ctor_set(v___x_5599_, 1, v_k_5602_);
lean_ctor_set(v___x_5599_, 0, v___x_5614_);
v___x_5623_ = v___x_5599_;
goto v_reusejp_5622_;
}
else
{
lean_object* v_reuseFailAlloc_5624_; 
v_reuseFailAlloc_5624_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5624_, 0, v___x_5614_);
lean_ctor_set(v_reuseFailAlloc_5624_, 1, v_k_5602_);
lean_ctor_set(v_reuseFailAlloc_5624_, 2, v_v_5603_);
lean_ctor_set(v_reuseFailAlloc_5624_, 3, v___y_5617_);
lean_ctor_set(v_reuseFailAlloc_5624_, 4, v___x_5621_);
v___x_5623_ = v_reuseFailAlloc_5624_;
goto v_reusejp_5622_;
}
v_reusejp_5622_:
{
return v___x_5623_;
}
}
}
v___jp_5626_:
{
lean_object* v___x_5628_; lean_object* v___x_5630_; 
v___x_5628_ = lean_nat_add(v___x_5613_, v___y_5627_);
lean_dec(v___y_5627_);
lean_dec(v___x_5613_);
if (v_isShared_5579_ == 0)
{
lean_ctor_set(v___x_5578_, 4, v_l_5604_);
lean_ctor_set(v___x_5578_, 0, v___x_5628_);
v___x_5630_ = v___x_5578_;
goto v_reusejp_5629_;
}
else
{
lean_object* v_reuseFailAlloc_5634_; 
v_reuseFailAlloc_5634_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5634_, 0, v___x_5628_);
lean_ctor_set(v_reuseFailAlloc_5634_, 1, v_k_5573_);
lean_ctor_set(v_reuseFailAlloc_5634_, 2, v_v_5574_);
lean_ctor_set(v_reuseFailAlloc_5634_, 3, v_l_5575_);
lean_ctor_set(v_reuseFailAlloc_5634_, 4, v_l_5604_);
v___x_5630_ = v_reuseFailAlloc_5634_;
goto v_reusejp_5629_;
}
v_reusejp_5629_:
{
lean_object* v___x_5631_; 
v___x_5631_ = lean_nat_add(v___x_5583_, v_size_5606_);
if (lean_obj_tag(v_r_5605_) == 0)
{
lean_object* v_size_5632_; 
v_size_5632_ = lean_ctor_get(v_r_5605_, 0);
lean_inc(v_size_5632_);
v___y_5616_ = v___x_5631_;
v___y_5617_ = v___x_5630_;
v___y_5618_ = v_size_5632_;
goto v___jp_5615_;
}
else
{
lean_object* v___x_5633_; 
v___x_5633_ = lean_unsigned_to_nat(0u);
v___y_5616_ = v___x_5631_;
v___y_5617_ = v___x_5630_;
v___y_5618_ = v___x_5633_;
goto v___jp_5615_;
}
}
}
}
}
else
{
lean_object* v___x_5643_; lean_object* v___x_5644_; lean_object* v___x_5645_; lean_object* v___x_5647_; 
lean_del_object(v___x_5578_);
v___x_5643_ = lean_nat_add(v___x_5583_, v_size_5584_);
v___x_5644_ = lean_nat_add(v___x_5643_, v_size_5585_);
lean_dec(v_size_5585_);
v___x_5645_ = lean_nat_add(v___x_5643_, v_size_5601_);
lean_dec(v___x_5643_);
lean_inc_ref(v_l_5575_);
if (v_isShared_5600_ == 0)
{
lean_ctor_set(v___x_5599_, 4, v_l_5588_);
lean_ctor_set(v___x_5599_, 3, v_l_5575_);
lean_ctor_set(v___x_5599_, 2, v_v_5574_);
lean_ctor_set(v___x_5599_, 1, v_k_5573_);
lean_ctor_set(v___x_5599_, 0, v___x_5645_);
v___x_5647_ = v___x_5599_;
goto v_reusejp_5646_;
}
else
{
lean_object* v_reuseFailAlloc_5660_; 
v_reuseFailAlloc_5660_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5660_, 0, v___x_5645_);
lean_ctor_set(v_reuseFailAlloc_5660_, 1, v_k_5573_);
lean_ctor_set(v_reuseFailAlloc_5660_, 2, v_v_5574_);
lean_ctor_set(v_reuseFailAlloc_5660_, 3, v_l_5575_);
lean_ctor_set(v_reuseFailAlloc_5660_, 4, v_l_5588_);
v___x_5647_ = v_reuseFailAlloc_5660_;
goto v_reusejp_5646_;
}
v_reusejp_5646_:
{
lean_object* v___x_5649_; uint8_t v_isShared_5650_; uint8_t v_isSharedCheck_5654_; 
v_isSharedCheck_5654_ = !lean_is_exclusive(v_l_5575_);
if (v_isSharedCheck_5654_ == 0)
{
lean_object* v_unused_5655_; lean_object* v_unused_5656_; lean_object* v_unused_5657_; lean_object* v_unused_5658_; lean_object* v_unused_5659_; 
v_unused_5655_ = lean_ctor_get(v_l_5575_, 4);
lean_dec(v_unused_5655_);
v_unused_5656_ = lean_ctor_get(v_l_5575_, 3);
lean_dec(v_unused_5656_);
v_unused_5657_ = lean_ctor_get(v_l_5575_, 2);
lean_dec(v_unused_5657_);
v_unused_5658_ = lean_ctor_get(v_l_5575_, 1);
lean_dec(v_unused_5658_);
v_unused_5659_ = lean_ctor_get(v_l_5575_, 0);
lean_dec(v_unused_5659_);
v___x_5649_ = v_l_5575_;
v_isShared_5650_ = v_isSharedCheck_5654_;
goto v_resetjp_5648_;
}
else
{
lean_dec(v_l_5575_);
v___x_5649_ = lean_box(0);
v_isShared_5650_ = v_isSharedCheck_5654_;
goto v_resetjp_5648_;
}
v_resetjp_5648_:
{
lean_object* v___x_5652_; 
if (v_isShared_5650_ == 0)
{
lean_ctor_set(v___x_5649_, 4, v_r_5589_);
lean_ctor_set(v___x_5649_, 3, v___x_5647_);
lean_ctor_set(v___x_5649_, 2, v_v_5587_);
lean_ctor_set(v___x_5649_, 1, v_k_5586_);
lean_ctor_set(v___x_5649_, 0, v___x_5644_);
v___x_5652_ = v___x_5649_;
goto v_reusejp_5651_;
}
else
{
lean_object* v_reuseFailAlloc_5653_; 
v_reuseFailAlloc_5653_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5653_, 0, v___x_5644_);
lean_ctor_set(v_reuseFailAlloc_5653_, 1, v_k_5586_);
lean_ctor_set(v_reuseFailAlloc_5653_, 2, v_v_5587_);
lean_ctor_set(v_reuseFailAlloc_5653_, 3, v___x_5647_);
lean_ctor_set(v_reuseFailAlloc_5653_, 4, v_r_5589_);
v___x_5652_ = v_reuseFailAlloc_5653_;
goto v_reusejp_5651_;
}
v_reusejp_5651_:
{
return v___x_5652_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_5667_; 
v_l_5667_ = lean_ctor_get(v_impl_5582_, 3);
lean_inc(v_l_5667_);
if (lean_obj_tag(v_l_5667_) == 0)
{
lean_object* v_r_5668_; lean_object* v_k_5669_; lean_object* v_v_5670_; lean_object* v___x_5672_; uint8_t v_isShared_5673_; uint8_t v_isSharedCheck_5693_; 
v_r_5668_ = lean_ctor_get(v_impl_5582_, 4);
v_k_5669_ = lean_ctor_get(v_impl_5582_, 1);
v_v_5670_ = lean_ctor_get(v_impl_5582_, 2);
v_isSharedCheck_5693_ = !lean_is_exclusive(v_impl_5582_);
if (v_isSharedCheck_5693_ == 0)
{
lean_object* v_unused_5694_; lean_object* v_unused_5695_; 
v_unused_5694_ = lean_ctor_get(v_impl_5582_, 3);
lean_dec(v_unused_5694_);
v_unused_5695_ = lean_ctor_get(v_impl_5582_, 0);
lean_dec(v_unused_5695_);
v___x_5672_ = v_impl_5582_;
v_isShared_5673_ = v_isSharedCheck_5693_;
goto v_resetjp_5671_;
}
else
{
lean_inc(v_r_5668_);
lean_inc(v_v_5670_);
lean_inc(v_k_5669_);
lean_dec(v_impl_5582_);
v___x_5672_ = lean_box(0);
v_isShared_5673_ = v_isSharedCheck_5693_;
goto v_resetjp_5671_;
}
v_resetjp_5671_:
{
lean_object* v_k_5674_; lean_object* v_v_5675_; lean_object* v___x_5677_; uint8_t v_isShared_5678_; uint8_t v_isSharedCheck_5689_; 
v_k_5674_ = lean_ctor_get(v_l_5667_, 1);
v_v_5675_ = lean_ctor_get(v_l_5667_, 2);
v_isSharedCheck_5689_ = !lean_is_exclusive(v_l_5667_);
if (v_isSharedCheck_5689_ == 0)
{
lean_object* v_unused_5690_; lean_object* v_unused_5691_; lean_object* v_unused_5692_; 
v_unused_5690_ = lean_ctor_get(v_l_5667_, 4);
lean_dec(v_unused_5690_);
v_unused_5691_ = lean_ctor_get(v_l_5667_, 3);
lean_dec(v_unused_5691_);
v_unused_5692_ = lean_ctor_get(v_l_5667_, 0);
lean_dec(v_unused_5692_);
v___x_5677_ = v_l_5667_;
v_isShared_5678_ = v_isSharedCheck_5689_;
goto v_resetjp_5676_;
}
else
{
lean_inc(v_v_5675_);
lean_inc(v_k_5674_);
lean_dec(v_l_5667_);
v___x_5677_ = lean_box(0);
v_isShared_5678_ = v_isSharedCheck_5689_;
goto v_resetjp_5676_;
}
v_resetjp_5676_:
{
lean_object* v___x_5679_; lean_object* v___x_5681_; 
v___x_5679_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_5668_, 2);
if (v_isShared_5678_ == 0)
{
lean_ctor_set(v___x_5677_, 4, v_r_5668_);
lean_ctor_set(v___x_5677_, 3, v_r_5668_);
lean_ctor_set(v___x_5677_, 2, v_v_5574_);
lean_ctor_set(v___x_5677_, 1, v_k_5573_);
lean_ctor_set(v___x_5677_, 0, v___x_5583_);
v___x_5681_ = v___x_5677_;
goto v_reusejp_5680_;
}
else
{
lean_object* v_reuseFailAlloc_5688_; 
v_reuseFailAlloc_5688_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5688_, 0, v___x_5583_);
lean_ctor_set(v_reuseFailAlloc_5688_, 1, v_k_5573_);
lean_ctor_set(v_reuseFailAlloc_5688_, 2, v_v_5574_);
lean_ctor_set(v_reuseFailAlloc_5688_, 3, v_r_5668_);
lean_ctor_set(v_reuseFailAlloc_5688_, 4, v_r_5668_);
v___x_5681_ = v_reuseFailAlloc_5688_;
goto v_reusejp_5680_;
}
v_reusejp_5680_:
{
lean_object* v___x_5683_; 
lean_inc(v_r_5668_);
if (v_isShared_5673_ == 0)
{
lean_ctor_set(v___x_5672_, 3, v_r_5668_);
lean_ctor_set(v___x_5672_, 0, v___x_5583_);
v___x_5683_ = v___x_5672_;
goto v_reusejp_5682_;
}
else
{
lean_object* v_reuseFailAlloc_5687_; 
v_reuseFailAlloc_5687_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5687_, 0, v___x_5583_);
lean_ctor_set(v_reuseFailAlloc_5687_, 1, v_k_5669_);
lean_ctor_set(v_reuseFailAlloc_5687_, 2, v_v_5670_);
lean_ctor_set(v_reuseFailAlloc_5687_, 3, v_r_5668_);
lean_ctor_set(v_reuseFailAlloc_5687_, 4, v_r_5668_);
v___x_5683_ = v_reuseFailAlloc_5687_;
goto v_reusejp_5682_;
}
v_reusejp_5682_:
{
lean_object* v___x_5685_; 
if (v_isShared_5579_ == 0)
{
lean_ctor_set(v___x_5578_, 4, v___x_5683_);
lean_ctor_set(v___x_5578_, 3, v___x_5681_);
lean_ctor_set(v___x_5578_, 2, v_v_5675_);
lean_ctor_set(v___x_5578_, 1, v_k_5674_);
lean_ctor_set(v___x_5578_, 0, v___x_5679_);
v___x_5685_ = v___x_5578_;
goto v_reusejp_5684_;
}
else
{
lean_object* v_reuseFailAlloc_5686_; 
v_reuseFailAlloc_5686_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5686_, 0, v___x_5679_);
lean_ctor_set(v_reuseFailAlloc_5686_, 1, v_k_5674_);
lean_ctor_set(v_reuseFailAlloc_5686_, 2, v_v_5675_);
lean_ctor_set(v_reuseFailAlloc_5686_, 3, v___x_5681_);
lean_ctor_set(v_reuseFailAlloc_5686_, 4, v___x_5683_);
v___x_5685_ = v_reuseFailAlloc_5686_;
goto v_reusejp_5684_;
}
v_reusejp_5684_:
{
return v___x_5685_;
}
}
}
}
}
}
else
{
lean_object* v_r_5696_; 
v_r_5696_ = lean_ctor_get(v_impl_5582_, 4);
lean_inc(v_r_5696_);
if (lean_obj_tag(v_r_5696_) == 0)
{
lean_object* v_k_5697_; lean_object* v_v_5698_; lean_object* v___x_5700_; uint8_t v_isShared_5701_; uint8_t v_isSharedCheck_5709_; 
v_k_5697_ = lean_ctor_get(v_impl_5582_, 1);
v_v_5698_ = lean_ctor_get(v_impl_5582_, 2);
v_isSharedCheck_5709_ = !lean_is_exclusive(v_impl_5582_);
if (v_isSharedCheck_5709_ == 0)
{
lean_object* v_unused_5710_; lean_object* v_unused_5711_; lean_object* v_unused_5712_; 
v_unused_5710_ = lean_ctor_get(v_impl_5582_, 4);
lean_dec(v_unused_5710_);
v_unused_5711_ = lean_ctor_get(v_impl_5582_, 3);
lean_dec(v_unused_5711_);
v_unused_5712_ = lean_ctor_get(v_impl_5582_, 0);
lean_dec(v_unused_5712_);
v___x_5700_ = v_impl_5582_;
v_isShared_5701_ = v_isSharedCheck_5709_;
goto v_resetjp_5699_;
}
else
{
lean_inc(v_v_5698_);
lean_inc(v_k_5697_);
lean_dec(v_impl_5582_);
v___x_5700_ = lean_box(0);
v_isShared_5701_ = v_isSharedCheck_5709_;
goto v_resetjp_5699_;
}
v_resetjp_5699_:
{
lean_object* v___x_5702_; lean_object* v___x_5704_; 
v___x_5702_ = lean_unsigned_to_nat(3u);
if (v_isShared_5701_ == 0)
{
lean_ctor_set(v___x_5700_, 4, v_l_5667_);
lean_ctor_set(v___x_5700_, 2, v_v_5574_);
lean_ctor_set(v___x_5700_, 1, v_k_5573_);
lean_ctor_set(v___x_5700_, 0, v___x_5583_);
v___x_5704_ = v___x_5700_;
goto v_reusejp_5703_;
}
else
{
lean_object* v_reuseFailAlloc_5708_; 
v_reuseFailAlloc_5708_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5708_, 0, v___x_5583_);
lean_ctor_set(v_reuseFailAlloc_5708_, 1, v_k_5573_);
lean_ctor_set(v_reuseFailAlloc_5708_, 2, v_v_5574_);
lean_ctor_set(v_reuseFailAlloc_5708_, 3, v_l_5667_);
lean_ctor_set(v_reuseFailAlloc_5708_, 4, v_l_5667_);
v___x_5704_ = v_reuseFailAlloc_5708_;
goto v_reusejp_5703_;
}
v_reusejp_5703_:
{
lean_object* v___x_5706_; 
if (v_isShared_5579_ == 0)
{
lean_ctor_set(v___x_5578_, 4, v_r_5696_);
lean_ctor_set(v___x_5578_, 3, v___x_5704_);
lean_ctor_set(v___x_5578_, 2, v_v_5698_);
lean_ctor_set(v___x_5578_, 1, v_k_5697_);
lean_ctor_set(v___x_5578_, 0, v___x_5702_);
v___x_5706_ = v___x_5578_;
goto v_reusejp_5705_;
}
else
{
lean_object* v_reuseFailAlloc_5707_; 
v_reuseFailAlloc_5707_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5707_, 0, v___x_5702_);
lean_ctor_set(v_reuseFailAlloc_5707_, 1, v_k_5697_);
lean_ctor_set(v_reuseFailAlloc_5707_, 2, v_v_5698_);
lean_ctor_set(v_reuseFailAlloc_5707_, 3, v___x_5704_);
lean_ctor_set(v_reuseFailAlloc_5707_, 4, v_r_5696_);
v___x_5706_ = v_reuseFailAlloc_5707_;
goto v_reusejp_5705_;
}
v_reusejp_5705_:
{
return v___x_5706_;
}
}
}
}
else
{
lean_object* v___x_5713_; lean_object* v___x_5715_; 
v___x_5713_ = lean_unsigned_to_nat(2u);
if (v_isShared_5579_ == 0)
{
lean_ctor_set(v___x_5578_, 4, v_impl_5582_);
lean_ctor_set(v___x_5578_, 3, v_r_5696_);
lean_ctor_set(v___x_5578_, 0, v___x_5713_);
v___x_5715_ = v___x_5578_;
goto v_reusejp_5714_;
}
else
{
lean_object* v_reuseFailAlloc_5716_; 
v_reuseFailAlloc_5716_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5716_, 0, v___x_5713_);
lean_ctor_set(v_reuseFailAlloc_5716_, 1, v_k_5573_);
lean_ctor_set(v_reuseFailAlloc_5716_, 2, v_v_5574_);
lean_ctor_set(v_reuseFailAlloc_5716_, 3, v_r_5696_);
lean_ctor_set(v_reuseFailAlloc_5716_, 4, v_impl_5582_);
v___x_5715_ = v_reuseFailAlloc_5716_;
goto v_reusejp_5714_;
}
v_reusejp_5714_:
{
return v___x_5715_;
}
}
}
}
}
else
{
lean_object* v___x_5718_; 
lean_dec(v_v_5574_);
lean_dec(v_k_5573_);
if (v_isShared_5579_ == 0)
{
lean_ctor_set(v___x_5578_, 2, v_v_5570_);
lean_ctor_set(v___x_5578_, 1, v_k_5569_);
v___x_5718_ = v___x_5578_;
goto v_reusejp_5717_;
}
else
{
lean_object* v_reuseFailAlloc_5719_; 
v_reuseFailAlloc_5719_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5719_, 0, v_size_5572_);
lean_ctor_set(v_reuseFailAlloc_5719_, 1, v_k_5569_);
lean_ctor_set(v_reuseFailAlloc_5719_, 2, v_v_5570_);
lean_ctor_set(v_reuseFailAlloc_5719_, 3, v_l_5575_);
lean_ctor_set(v_reuseFailAlloc_5719_, 4, v_r_5576_);
v___x_5718_ = v_reuseFailAlloc_5719_;
goto v_reusejp_5717_;
}
v_reusejp_5717_:
{
return v___x_5718_;
}
}
}
else
{
lean_object* v_impl_5720_; lean_object* v___x_5721_; 
lean_dec(v_size_5572_);
v_impl_5720_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_addDefaultInstanceEntry_spec__1___redArg(v_k_5569_, v_v_5570_, v_l_5575_);
v___x_5721_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_5576_) == 0)
{
lean_object* v_size_5722_; lean_object* v_size_5723_; lean_object* v_k_5724_; lean_object* v_v_5725_; lean_object* v_l_5726_; lean_object* v_r_5727_; lean_object* v___x_5728_; lean_object* v___x_5729_; uint8_t v___x_5730_; 
v_size_5722_ = lean_ctor_get(v_r_5576_, 0);
v_size_5723_ = lean_ctor_get(v_impl_5720_, 0);
v_k_5724_ = lean_ctor_get(v_impl_5720_, 1);
v_v_5725_ = lean_ctor_get(v_impl_5720_, 2);
v_l_5726_ = lean_ctor_get(v_impl_5720_, 3);
v_r_5727_ = lean_ctor_get(v_impl_5720_, 4);
lean_inc(v_r_5727_);
v___x_5728_ = lean_unsigned_to_nat(3u);
v___x_5729_ = lean_nat_mul(v___x_5728_, v_size_5722_);
v___x_5730_ = lean_nat_dec_lt(v___x_5729_, v_size_5723_);
lean_dec(v___x_5729_);
if (v___x_5730_ == 0)
{
lean_object* v___x_5731_; lean_object* v___x_5732_; lean_object* v___x_5734_; 
lean_dec(v_r_5727_);
v___x_5731_ = lean_nat_add(v___x_5721_, v_size_5723_);
v___x_5732_ = lean_nat_add(v___x_5731_, v_size_5722_);
lean_dec(v___x_5731_);
if (v_isShared_5579_ == 0)
{
lean_ctor_set(v___x_5578_, 3, v_impl_5720_);
lean_ctor_set(v___x_5578_, 0, v___x_5732_);
v___x_5734_ = v___x_5578_;
goto v_reusejp_5733_;
}
else
{
lean_object* v_reuseFailAlloc_5735_; 
v_reuseFailAlloc_5735_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5735_, 0, v___x_5732_);
lean_ctor_set(v_reuseFailAlloc_5735_, 1, v_k_5573_);
lean_ctor_set(v_reuseFailAlloc_5735_, 2, v_v_5574_);
lean_ctor_set(v_reuseFailAlloc_5735_, 3, v_impl_5720_);
lean_ctor_set(v_reuseFailAlloc_5735_, 4, v_r_5576_);
v___x_5734_ = v_reuseFailAlloc_5735_;
goto v_reusejp_5733_;
}
v_reusejp_5733_:
{
return v___x_5734_;
}
}
else
{
lean_object* v___x_5737_; uint8_t v_isShared_5738_; uint8_t v_isSharedCheck_5801_; 
lean_inc(v_l_5726_);
lean_inc(v_v_5725_);
lean_inc(v_k_5724_);
lean_inc(v_size_5723_);
v_isSharedCheck_5801_ = !lean_is_exclusive(v_impl_5720_);
if (v_isSharedCheck_5801_ == 0)
{
lean_object* v_unused_5802_; lean_object* v_unused_5803_; lean_object* v_unused_5804_; lean_object* v_unused_5805_; lean_object* v_unused_5806_; 
v_unused_5802_ = lean_ctor_get(v_impl_5720_, 4);
lean_dec(v_unused_5802_);
v_unused_5803_ = lean_ctor_get(v_impl_5720_, 3);
lean_dec(v_unused_5803_);
v_unused_5804_ = lean_ctor_get(v_impl_5720_, 2);
lean_dec(v_unused_5804_);
v_unused_5805_ = lean_ctor_get(v_impl_5720_, 1);
lean_dec(v_unused_5805_);
v_unused_5806_ = lean_ctor_get(v_impl_5720_, 0);
lean_dec(v_unused_5806_);
v___x_5737_ = v_impl_5720_;
v_isShared_5738_ = v_isSharedCheck_5801_;
goto v_resetjp_5736_;
}
else
{
lean_dec(v_impl_5720_);
v___x_5737_ = lean_box(0);
v_isShared_5738_ = v_isSharedCheck_5801_;
goto v_resetjp_5736_;
}
v_resetjp_5736_:
{
lean_object* v_size_5739_; lean_object* v_size_5740_; lean_object* v_k_5741_; lean_object* v_v_5742_; lean_object* v_l_5743_; lean_object* v_r_5744_; lean_object* v___x_5745_; lean_object* v___x_5746_; uint8_t v___x_5747_; 
v_size_5739_ = lean_ctor_get(v_l_5726_, 0);
v_size_5740_ = lean_ctor_get(v_r_5727_, 0);
v_k_5741_ = lean_ctor_get(v_r_5727_, 1);
v_v_5742_ = lean_ctor_get(v_r_5727_, 2);
v_l_5743_ = lean_ctor_get(v_r_5727_, 3);
v_r_5744_ = lean_ctor_get(v_r_5727_, 4);
v___x_5745_ = lean_unsigned_to_nat(2u);
v___x_5746_ = lean_nat_mul(v___x_5745_, v_size_5739_);
v___x_5747_ = lean_nat_dec_lt(v_size_5740_, v___x_5746_);
lean_dec(v___x_5746_);
if (v___x_5747_ == 0)
{
lean_object* v___x_5749_; uint8_t v_isShared_5750_; uint8_t v_isSharedCheck_5776_; 
lean_inc(v_r_5744_);
lean_inc(v_l_5743_);
lean_inc(v_v_5742_);
lean_inc(v_k_5741_);
v_isSharedCheck_5776_ = !lean_is_exclusive(v_r_5727_);
if (v_isSharedCheck_5776_ == 0)
{
lean_object* v_unused_5777_; lean_object* v_unused_5778_; lean_object* v_unused_5779_; lean_object* v_unused_5780_; lean_object* v_unused_5781_; 
v_unused_5777_ = lean_ctor_get(v_r_5727_, 4);
lean_dec(v_unused_5777_);
v_unused_5778_ = lean_ctor_get(v_r_5727_, 3);
lean_dec(v_unused_5778_);
v_unused_5779_ = lean_ctor_get(v_r_5727_, 2);
lean_dec(v_unused_5779_);
v_unused_5780_ = lean_ctor_get(v_r_5727_, 1);
lean_dec(v_unused_5780_);
v_unused_5781_ = lean_ctor_get(v_r_5727_, 0);
lean_dec(v_unused_5781_);
v___x_5749_ = v_r_5727_;
v_isShared_5750_ = v_isSharedCheck_5776_;
goto v_resetjp_5748_;
}
else
{
lean_dec(v_r_5727_);
v___x_5749_ = lean_box(0);
v_isShared_5750_ = v_isSharedCheck_5776_;
goto v_resetjp_5748_;
}
v_resetjp_5748_:
{
lean_object* v___x_5751_; lean_object* v___x_5752_; lean_object* v___y_5754_; lean_object* v___y_5755_; lean_object* v___y_5756_; lean_object* v___x_5764_; lean_object* v___y_5766_; 
v___x_5751_ = lean_nat_add(v___x_5721_, v_size_5723_);
lean_dec(v_size_5723_);
v___x_5752_ = lean_nat_add(v___x_5751_, v_size_5722_);
lean_dec(v___x_5751_);
v___x_5764_ = lean_nat_add(v___x_5721_, v_size_5739_);
if (lean_obj_tag(v_l_5743_) == 0)
{
lean_object* v_size_5774_; 
v_size_5774_ = lean_ctor_get(v_l_5743_, 0);
lean_inc(v_size_5774_);
v___y_5766_ = v_size_5774_;
goto v___jp_5765_;
}
else
{
lean_object* v___x_5775_; 
v___x_5775_ = lean_unsigned_to_nat(0u);
v___y_5766_ = v___x_5775_;
goto v___jp_5765_;
}
v___jp_5753_:
{
lean_object* v___x_5757_; lean_object* v___x_5759_; 
v___x_5757_ = lean_nat_add(v___y_5755_, v___y_5756_);
lean_dec(v___y_5756_);
lean_dec(v___y_5755_);
if (v_isShared_5750_ == 0)
{
lean_ctor_set(v___x_5749_, 4, v_r_5576_);
lean_ctor_set(v___x_5749_, 3, v_r_5744_);
lean_ctor_set(v___x_5749_, 2, v_v_5574_);
lean_ctor_set(v___x_5749_, 1, v_k_5573_);
lean_ctor_set(v___x_5749_, 0, v___x_5757_);
v___x_5759_ = v___x_5749_;
goto v_reusejp_5758_;
}
else
{
lean_object* v_reuseFailAlloc_5763_; 
v_reuseFailAlloc_5763_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5763_, 0, v___x_5757_);
lean_ctor_set(v_reuseFailAlloc_5763_, 1, v_k_5573_);
lean_ctor_set(v_reuseFailAlloc_5763_, 2, v_v_5574_);
lean_ctor_set(v_reuseFailAlloc_5763_, 3, v_r_5744_);
lean_ctor_set(v_reuseFailAlloc_5763_, 4, v_r_5576_);
v___x_5759_ = v_reuseFailAlloc_5763_;
goto v_reusejp_5758_;
}
v_reusejp_5758_:
{
lean_object* v___x_5761_; 
if (v_isShared_5738_ == 0)
{
lean_ctor_set(v___x_5737_, 4, v___x_5759_);
lean_ctor_set(v___x_5737_, 3, v___y_5754_);
lean_ctor_set(v___x_5737_, 2, v_v_5742_);
lean_ctor_set(v___x_5737_, 1, v_k_5741_);
lean_ctor_set(v___x_5737_, 0, v___x_5752_);
v___x_5761_ = v___x_5737_;
goto v_reusejp_5760_;
}
else
{
lean_object* v_reuseFailAlloc_5762_; 
v_reuseFailAlloc_5762_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5762_, 0, v___x_5752_);
lean_ctor_set(v_reuseFailAlloc_5762_, 1, v_k_5741_);
lean_ctor_set(v_reuseFailAlloc_5762_, 2, v_v_5742_);
lean_ctor_set(v_reuseFailAlloc_5762_, 3, v___y_5754_);
lean_ctor_set(v_reuseFailAlloc_5762_, 4, v___x_5759_);
v___x_5761_ = v_reuseFailAlloc_5762_;
goto v_reusejp_5760_;
}
v_reusejp_5760_:
{
return v___x_5761_;
}
}
}
v___jp_5765_:
{
lean_object* v___x_5767_; lean_object* v___x_5769_; 
v___x_5767_ = lean_nat_add(v___x_5764_, v___y_5766_);
lean_dec(v___y_5766_);
lean_dec(v___x_5764_);
if (v_isShared_5579_ == 0)
{
lean_ctor_set(v___x_5578_, 4, v_l_5743_);
lean_ctor_set(v___x_5578_, 3, v_l_5726_);
lean_ctor_set(v___x_5578_, 2, v_v_5725_);
lean_ctor_set(v___x_5578_, 1, v_k_5724_);
lean_ctor_set(v___x_5578_, 0, v___x_5767_);
v___x_5769_ = v___x_5578_;
goto v_reusejp_5768_;
}
else
{
lean_object* v_reuseFailAlloc_5773_; 
v_reuseFailAlloc_5773_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5773_, 0, v___x_5767_);
lean_ctor_set(v_reuseFailAlloc_5773_, 1, v_k_5724_);
lean_ctor_set(v_reuseFailAlloc_5773_, 2, v_v_5725_);
lean_ctor_set(v_reuseFailAlloc_5773_, 3, v_l_5726_);
lean_ctor_set(v_reuseFailAlloc_5773_, 4, v_l_5743_);
v___x_5769_ = v_reuseFailAlloc_5773_;
goto v_reusejp_5768_;
}
v_reusejp_5768_:
{
lean_object* v___x_5770_; 
v___x_5770_ = lean_nat_add(v___x_5721_, v_size_5722_);
if (lean_obj_tag(v_r_5744_) == 0)
{
lean_object* v_size_5771_; 
v_size_5771_ = lean_ctor_get(v_r_5744_, 0);
lean_inc(v_size_5771_);
v___y_5754_ = v___x_5769_;
v___y_5755_ = v___x_5770_;
v___y_5756_ = v_size_5771_;
goto v___jp_5753_;
}
else
{
lean_object* v___x_5772_; 
v___x_5772_ = lean_unsigned_to_nat(0u);
v___y_5754_ = v___x_5769_;
v___y_5755_ = v___x_5770_;
v___y_5756_ = v___x_5772_;
goto v___jp_5753_;
}
}
}
}
}
else
{
lean_object* v___x_5782_; lean_object* v___x_5783_; lean_object* v___x_5784_; lean_object* v___x_5785_; lean_object* v___x_5787_; 
lean_del_object(v___x_5578_);
v___x_5782_ = lean_nat_add(v___x_5721_, v_size_5723_);
lean_dec(v_size_5723_);
v___x_5783_ = lean_nat_add(v___x_5782_, v_size_5722_);
lean_dec(v___x_5782_);
v___x_5784_ = lean_nat_add(v___x_5721_, v_size_5722_);
v___x_5785_ = lean_nat_add(v___x_5784_, v_size_5740_);
lean_dec(v___x_5784_);
lean_inc_ref(v_r_5576_);
if (v_isShared_5738_ == 0)
{
lean_ctor_set(v___x_5737_, 4, v_r_5576_);
lean_ctor_set(v___x_5737_, 3, v_r_5727_);
lean_ctor_set(v___x_5737_, 2, v_v_5574_);
lean_ctor_set(v___x_5737_, 1, v_k_5573_);
lean_ctor_set(v___x_5737_, 0, v___x_5785_);
v___x_5787_ = v___x_5737_;
goto v_reusejp_5786_;
}
else
{
lean_object* v_reuseFailAlloc_5800_; 
v_reuseFailAlloc_5800_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5800_, 0, v___x_5785_);
lean_ctor_set(v_reuseFailAlloc_5800_, 1, v_k_5573_);
lean_ctor_set(v_reuseFailAlloc_5800_, 2, v_v_5574_);
lean_ctor_set(v_reuseFailAlloc_5800_, 3, v_r_5727_);
lean_ctor_set(v_reuseFailAlloc_5800_, 4, v_r_5576_);
v___x_5787_ = v_reuseFailAlloc_5800_;
goto v_reusejp_5786_;
}
v_reusejp_5786_:
{
lean_object* v___x_5789_; uint8_t v_isShared_5790_; uint8_t v_isSharedCheck_5794_; 
v_isSharedCheck_5794_ = !lean_is_exclusive(v_r_5576_);
if (v_isSharedCheck_5794_ == 0)
{
lean_object* v_unused_5795_; lean_object* v_unused_5796_; lean_object* v_unused_5797_; lean_object* v_unused_5798_; lean_object* v_unused_5799_; 
v_unused_5795_ = lean_ctor_get(v_r_5576_, 4);
lean_dec(v_unused_5795_);
v_unused_5796_ = lean_ctor_get(v_r_5576_, 3);
lean_dec(v_unused_5796_);
v_unused_5797_ = lean_ctor_get(v_r_5576_, 2);
lean_dec(v_unused_5797_);
v_unused_5798_ = lean_ctor_get(v_r_5576_, 1);
lean_dec(v_unused_5798_);
v_unused_5799_ = lean_ctor_get(v_r_5576_, 0);
lean_dec(v_unused_5799_);
v___x_5789_ = v_r_5576_;
v_isShared_5790_ = v_isSharedCheck_5794_;
goto v_resetjp_5788_;
}
else
{
lean_dec(v_r_5576_);
v___x_5789_ = lean_box(0);
v_isShared_5790_ = v_isSharedCheck_5794_;
goto v_resetjp_5788_;
}
v_resetjp_5788_:
{
lean_object* v___x_5792_; 
if (v_isShared_5790_ == 0)
{
lean_ctor_set(v___x_5789_, 4, v___x_5787_);
lean_ctor_set(v___x_5789_, 3, v_l_5726_);
lean_ctor_set(v___x_5789_, 2, v_v_5725_);
lean_ctor_set(v___x_5789_, 1, v_k_5724_);
lean_ctor_set(v___x_5789_, 0, v___x_5783_);
v___x_5792_ = v___x_5789_;
goto v_reusejp_5791_;
}
else
{
lean_object* v_reuseFailAlloc_5793_; 
v_reuseFailAlloc_5793_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5793_, 0, v___x_5783_);
lean_ctor_set(v_reuseFailAlloc_5793_, 1, v_k_5724_);
lean_ctor_set(v_reuseFailAlloc_5793_, 2, v_v_5725_);
lean_ctor_set(v_reuseFailAlloc_5793_, 3, v_l_5726_);
lean_ctor_set(v_reuseFailAlloc_5793_, 4, v___x_5787_);
v___x_5792_ = v_reuseFailAlloc_5793_;
goto v_reusejp_5791_;
}
v_reusejp_5791_:
{
return v___x_5792_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_5807_; 
v_l_5807_ = lean_ctor_get(v_impl_5720_, 3);
if (lean_obj_tag(v_l_5807_) == 0)
{
lean_object* v_r_5808_; lean_object* v_k_5809_; lean_object* v_v_5810_; lean_object* v___x_5812_; uint8_t v_isShared_5813_; uint8_t v_isSharedCheck_5821_; 
lean_inc_ref(v_l_5807_);
v_r_5808_ = lean_ctor_get(v_impl_5720_, 4);
v_k_5809_ = lean_ctor_get(v_impl_5720_, 1);
v_v_5810_ = lean_ctor_get(v_impl_5720_, 2);
v_isSharedCheck_5821_ = !lean_is_exclusive(v_impl_5720_);
if (v_isSharedCheck_5821_ == 0)
{
lean_object* v_unused_5822_; lean_object* v_unused_5823_; 
v_unused_5822_ = lean_ctor_get(v_impl_5720_, 3);
lean_dec(v_unused_5822_);
v_unused_5823_ = lean_ctor_get(v_impl_5720_, 0);
lean_dec(v_unused_5823_);
v___x_5812_ = v_impl_5720_;
v_isShared_5813_ = v_isSharedCheck_5821_;
goto v_resetjp_5811_;
}
else
{
lean_inc(v_r_5808_);
lean_inc(v_v_5810_);
lean_inc(v_k_5809_);
lean_dec(v_impl_5720_);
v___x_5812_ = lean_box(0);
v_isShared_5813_ = v_isSharedCheck_5821_;
goto v_resetjp_5811_;
}
v_resetjp_5811_:
{
lean_object* v___x_5814_; lean_object* v___x_5816_; 
v___x_5814_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_5808_);
if (v_isShared_5813_ == 0)
{
lean_ctor_set(v___x_5812_, 3, v_r_5808_);
lean_ctor_set(v___x_5812_, 2, v_v_5574_);
lean_ctor_set(v___x_5812_, 1, v_k_5573_);
lean_ctor_set(v___x_5812_, 0, v___x_5721_);
v___x_5816_ = v___x_5812_;
goto v_reusejp_5815_;
}
else
{
lean_object* v_reuseFailAlloc_5820_; 
v_reuseFailAlloc_5820_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5820_, 0, v___x_5721_);
lean_ctor_set(v_reuseFailAlloc_5820_, 1, v_k_5573_);
lean_ctor_set(v_reuseFailAlloc_5820_, 2, v_v_5574_);
lean_ctor_set(v_reuseFailAlloc_5820_, 3, v_r_5808_);
lean_ctor_set(v_reuseFailAlloc_5820_, 4, v_r_5808_);
v___x_5816_ = v_reuseFailAlloc_5820_;
goto v_reusejp_5815_;
}
v_reusejp_5815_:
{
lean_object* v___x_5818_; 
if (v_isShared_5579_ == 0)
{
lean_ctor_set(v___x_5578_, 4, v___x_5816_);
lean_ctor_set(v___x_5578_, 3, v_l_5807_);
lean_ctor_set(v___x_5578_, 2, v_v_5810_);
lean_ctor_set(v___x_5578_, 1, v_k_5809_);
lean_ctor_set(v___x_5578_, 0, v___x_5814_);
v___x_5818_ = v___x_5578_;
goto v_reusejp_5817_;
}
else
{
lean_object* v_reuseFailAlloc_5819_; 
v_reuseFailAlloc_5819_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5819_, 0, v___x_5814_);
lean_ctor_set(v_reuseFailAlloc_5819_, 1, v_k_5809_);
lean_ctor_set(v_reuseFailAlloc_5819_, 2, v_v_5810_);
lean_ctor_set(v_reuseFailAlloc_5819_, 3, v_l_5807_);
lean_ctor_set(v_reuseFailAlloc_5819_, 4, v___x_5816_);
v___x_5818_ = v_reuseFailAlloc_5819_;
goto v_reusejp_5817_;
}
v_reusejp_5817_:
{
return v___x_5818_;
}
}
}
}
else
{
lean_object* v_r_5824_; 
v_r_5824_ = lean_ctor_get(v_impl_5720_, 4);
lean_inc(v_r_5824_);
if (lean_obj_tag(v_r_5824_) == 0)
{
lean_object* v_k_5825_; lean_object* v_v_5826_; lean_object* v___x_5828_; uint8_t v_isShared_5829_; uint8_t v_isSharedCheck_5849_; 
lean_inc(v_l_5807_);
v_k_5825_ = lean_ctor_get(v_impl_5720_, 1);
v_v_5826_ = lean_ctor_get(v_impl_5720_, 2);
v_isSharedCheck_5849_ = !lean_is_exclusive(v_impl_5720_);
if (v_isSharedCheck_5849_ == 0)
{
lean_object* v_unused_5850_; lean_object* v_unused_5851_; lean_object* v_unused_5852_; 
v_unused_5850_ = lean_ctor_get(v_impl_5720_, 4);
lean_dec(v_unused_5850_);
v_unused_5851_ = lean_ctor_get(v_impl_5720_, 3);
lean_dec(v_unused_5851_);
v_unused_5852_ = lean_ctor_get(v_impl_5720_, 0);
lean_dec(v_unused_5852_);
v___x_5828_ = v_impl_5720_;
v_isShared_5829_ = v_isSharedCheck_5849_;
goto v_resetjp_5827_;
}
else
{
lean_inc(v_v_5826_);
lean_inc(v_k_5825_);
lean_dec(v_impl_5720_);
v___x_5828_ = lean_box(0);
v_isShared_5829_ = v_isSharedCheck_5849_;
goto v_resetjp_5827_;
}
v_resetjp_5827_:
{
lean_object* v_k_5830_; lean_object* v_v_5831_; lean_object* v___x_5833_; uint8_t v_isShared_5834_; uint8_t v_isSharedCheck_5845_; 
v_k_5830_ = lean_ctor_get(v_r_5824_, 1);
v_v_5831_ = lean_ctor_get(v_r_5824_, 2);
v_isSharedCheck_5845_ = !lean_is_exclusive(v_r_5824_);
if (v_isSharedCheck_5845_ == 0)
{
lean_object* v_unused_5846_; lean_object* v_unused_5847_; lean_object* v_unused_5848_; 
v_unused_5846_ = lean_ctor_get(v_r_5824_, 4);
lean_dec(v_unused_5846_);
v_unused_5847_ = lean_ctor_get(v_r_5824_, 3);
lean_dec(v_unused_5847_);
v_unused_5848_ = lean_ctor_get(v_r_5824_, 0);
lean_dec(v_unused_5848_);
v___x_5833_ = v_r_5824_;
v_isShared_5834_ = v_isSharedCheck_5845_;
goto v_resetjp_5832_;
}
else
{
lean_inc(v_v_5831_);
lean_inc(v_k_5830_);
lean_dec(v_r_5824_);
v___x_5833_ = lean_box(0);
v_isShared_5834_ = v_isSharedCheck_5845_;
goto v_resetjp_5832_;
}
v_resetjp_5832_:
{
lean_object* v___x_5835_; lean_object* v___x_5837_; 
v___x_5835_ = lean_unsigned_to_nat(3u);
if (v_isShared_5834_ == 0)
{
lean_ctor_set(v___x_5833_, 4, v_l_5807_);
lean_ctor_set(v___x_5833_, 3, v_l_5807_);
lean_ctor_set(v___x_5833_, 2, v_v_5826_);
lean_ctor_set(v___x_5833_, 1, v_k_5825_);
lean_ctor_set(v___x_5833_, 0, v___x_5721_);
v___x_5837_ = v___x_5833_;
goto v_reusejp_5836_;
}
else
{
lean_object* v_reuseFailAlloc_5844_; 
v_reuseFailAlloc_5844_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5844_, 0, v___x_5721_);
lean_ctor_set(v_reuseFailAlloc_5844_, 1, v_k_5825_);
lean_ctor_set(v_reuseFailAlloc_5844_, 2, v_v_5826_);
lean_ctor_set(v_reuseFailAlloc_5844_, 3, v_l_5807_);
lean_ctor_set(v_reuseFailAlloc_5844_, 4, v_l_5807_);
v___x_5837_ = v_reuseFailAlloc_5844_;
goto v_reusejp_5836_;
}
v_reusejp_5836_:
{
lean_object* v___x_5839_; 
if (v_isShared_5829_ == 0)
{
lean_ctor_set(v___x_5828_, 4, v_l_5807_);
lean_ctor_set(v___x_5828_, 2, v_v_5574_);
lean_ctor_set(v___x_5828_, 1, v_k_5573_);
lean_ctor_set(v___x_5828_, 0, v___x_5721_);
v___x_5839_ = v___x_5828_;
goto v_reusejp_5838_;
}
else
{
lean_object* v_reuseFailAlloc_5843_; 
v_reuseFailAlloc_5843_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5843_, 0, v___x_5721_);
lean_ctor_set(v_reuseFailAlloc_5843_, 1, v_k_5573_);
lean_ctor_set(v_reuseFailAlloc_5843_, 2, v_v_5574_);
lean_ctor_set(v_reuseFailAlloc_5843_, 3, v_l_5807_);
lean_ctor_set(v_reuseFailAlloc_5843_, 4, v_l_5807_);
v___x_5839_ = v_reuseFailAlloc_5843_;
goto v_reusejp_5838_;
}
v_reusejp_5838_:
{
lean_object* v___x_5841_; 
if (v_isShared_5579_ == 0)
{
lean_ctor_set(v___x_5578_, 4, v___x_5839_);
lean_ctor_set(v___x_5578_, 3, v___x_5837_);
lean_ctor_set(v___x_5578_, 2, v_v_5831_);
lean_ctor_set(v___x_5578_, 1, v_k_5830_);
lean_ctor_set(v___x_5578_, 0, v___x_5835_);
v___x_5841_ = v___x_5578_;
goto v_reusejp_5840_;
}
else
{
lean_object* v_reuseFailAlloc_5842_; 
v_reuseFailAlloc_5842_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5842_, 0, v___x_5835_);
lean_ctor_set(v_reuseFailAlloc_5842_, 1, v_k_5830_);
lean_ctor_set(v_reuseFailAlloc_5842_, 2, v_v_5831_);
lean_ctor_set(v_reuseFailAlloc_5842_, 3, v___x_5837_);
lean_ctor_set(v_reuseFailAlloc_5842_, 4, v___x_5839_);
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
}
}
else
{
lean_object* v___x_5853_; lean_object* v___x_5855_; 
v___x_5853_ = lean_unsigned_to_nat(2u);
if (v_isShared_5579_ == 0)
{
lean_ctor_set(v___x_5578_, 4, v_r_5824_);
lean_ctor_set(v___x_5578_, 3, v_impl_5720_);
lean_ctor_set(v___x_5578_, 0, v___x_5853_);
v___x_5855_ = v___x_5578_;
goto v_reusejp_5854_;
}
else
{
lean_object* v_reuseFailAlloc_5856_; 
v_reuseFailAlloc_5856_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5856_, 0, v___x_5853_);
lean_ctor_set(v_reuseFailAlloc_5856_, 1, v_k_5573_);
lean_ctor_set(v_reuseFailAlloc_5856_, 2, v_v_5574_);
lean_ctor_set(v_reuseFailAlloc_5856_, 3, v_impl_5720_);
lean_ctor_set(v_reuseFailAlloc_5856_, 4, v_r_5824_);
v___x_5855_ = v_reuseFailAlloc_5856_;
goto v_reusejp_5854_;
}
v_reusejp_5854_:
{
return v___x_5855_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_5858_; lean_object* v___x_5859_; 
v___x_5858_ = lean_unsigned_to_nat(1u);
v___x_5859_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5859_, 0, v___x_5858_);
lean_ctor_set(v___x_5859_, 1, v_k_5569_);
lean_ctor_set(v___x_5859_, 2, v_v_5570_);
lean_ctor_set(v___x_5859_, 3, v_t_5571_);
lean_ctor_set(v___x_5859_, 4, v_t_5571_);
return v___x_5859_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___redArg(lean_object* v_k_5860_, lean_object* v_t_5861_){
_start:
{
if (lean_obj_tag(v_t_5861_) == 0)
{
lean_object* v_k_5862_; lean_object* v_l_5863_; lean_object* v_r_5864_; uint8_t v___x_5865_; 
v_k_5862_ = lean_ctor_get(v_t_5861_, 1);
v_l_5863_ = lean_ctor_get(v_t_5861_, 3);
v_r_5864_ = lean_ctor_get(v_t_5861_, 4);
v___x_5865_ = lean_nat_dec_lt(v_k_5862_, v_k_5860_);
if (v___x_5865_ == 0)
{
uint8_t v___x_5866_; 
v___x_5866_ = lean_nat_dec_eq(v_k_5862_, v_k_5860_);
if (v___x_5866_ == 0)
{
v_t_5861_ = v_r_5864_;
goto _start;
}
else
{
return v___x_5866_;
}
}
else
{
v_t_5861_ = v_l_5863_;
goto _start;
}
}
else
{
uint8_t v___x_5869_; 
v___x_5869_ = 0;
return v___x_5869_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___redArg___boxed(lean_object* v_k_5870_, lean_object* v_t_5871_){
_start:
{
uint8_t v_res_5872_; lean_object* v_r_5873_; 
v_res_5872_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___redArg(v_k_5870_, v_t_5871_);
lean_dec(v_t_5871_);
lean_dec(v_k_5870_);
v_r_5873_ = lean_box(v_res_5872_);
return v_r_5873_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstanceEntry(lean_object* v_d_5874_, lean_object* v_e_5875_){
_start:
{
lean_object* v_defaultInstances_5876_; lean_object* v_priorities_5877_; lean_object* v___x_5879_; uint8_t v_isShared_5880_; uint8_t v_isSharedCheck_5904_; 
v_defaultInstances_5876_ = lean_ctor_get(v_d_5874_, 0);
v_priorities_5877_ = lean_ctor_get(v_d_5874_, 1);
v_isSharedCheck_5904_ = !lean_is_exclusive(v_d_5874_);
if (v_isSharedCheck_5904_ == 0)
{
v___x_5879_ = v_d_5874_;
v_isShared_5880_ = v_isSharedCheck_5904_;
goto v_resetjp_5878_;
}
else
{
lean_inc(v_priorities_5877_);
lean_inc(v_defaultInstances_5876_);
lean_dec(v_d_5874_);
v___x_5879_ = lean_box(0);
v_isShared_5880_ = v_isSharedCheck_5904_;
goto v_resetjp_5878_;
}
v_resetjp_5878_:
{
lean_object* v_className_5881_; lean_object* v_instanceName_5882_; lean_object* v_priority_5883_; lean_object* v___y_5885_; uint8_t v___x_5901_; 
v_className_5881_ = lean_ctor_get(v_e_5875_, 0);
lean_inc(v_className_5881_);
v_instanceName_5882_ = lean_ctor_get(v_e_5875_, 1);
lean_inc(v_instanceName_5882_);
v_priority_5883_ = lean_ctor_get(v_e_5875_, 2);
lean_inc(v_priority_5883_);
lean_dec_ref(v_e_5875_);
v___x_5901_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___redArg(v_priority_5883_, v_priorities_5877_);
if (v___x_5901_ == 0)
{
lean_object* v___x_5902_; lean_object* v___x_5903_; 
v___x_5902_ = lean_box(0);
lean_inc(v_priority_5883_);
v___x_5903_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_addDefaultInstanceEntry_spec__1___redArg(v_priority_5883_, v___x_5902_, v_priorities_5877_);
v___y_5885_ = v___x_5903_;
goto v___jp_5884_;
}
else
{
v___y_5885_ = v_priorities_5877_;
goto v___jp_5884_;
}
v___jp_5884_:
{
lean_object* v___x_5886_; 
v___x_5886_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_defaultInstances_5876_, v_className_5881_);
if (lean_obj_tag(v___x_5886_) == 0)
{
lean_object* v___x_5887_; lean_object* v___x_5888_; lean_object* v___x_5889_; lean_object* v___x_5890_; lean_object* v___x_5892_; 
v___x_5887_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5887_, 0, v_instanceName_5882_);
lean_ctor_set(v___x_5887_, 1, v_priority_5883_);
v___x_5888_ = lean_box(0);
v___x_5889_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5889_, 0, v___x_5887_);
lean_ctor_set(v___x_5889_, 1, v___x_5888_);
v___x_5890_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_className_5881_, v___x_5889_, v_defaultInstances_5876_);
if (v_isShared_5880_ == 0)
{
lean_ctor_set(v___x_5879_, 1, v___y_5885_);
lean_ctor_set(v___x_5879_, 0, v___x_5890_);
v___x_5892_ = v___x_5879_;
goto v_reusejp_5891_;
}
else
{
lean_object* v_reuseFailAlloc_5893_; 
v_reuseFailAlloc_5893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5893_, 0, v___x_5890_);
lean_ctor_set(v_reuseFailAlloc_5893_, 1, v___y_5885_);
v___x_5892_ = v_reuseFailAlloc_5893_;
goto v_reusejp_5891_;
}
v_reusejp_5891_:
{
return v___x_5892_;
}
}
else
{
lean_object* v_val_5894_; lean_object* v___x_5895_; lean_object* v___x_5896_; lean_object* v___x_5897_; lean_object* v___x_5899_; 
v_val_5894_ = lean_ctor_get(v___x_5886_, 0);
lean_inc(v_val_5894_);
lean_dec_ref_known(v___x_5886_, 1);
v___x_5895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5895_, 0, v_instanceName_5882_);
lean_ctor_set(v___x_5895_, 1, v_priority_5883_);
v___x_5896_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5896_, 0, v___x_5895_);
lean_ctor_set(v___x_5896_, 1, v_val_5894_);
v___x_5897_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_className_5881_, v___x_5896_, v_defaultInstances_5876_);
if (v_isShared_5880_ == 0)
{
lean_ctor_set(v___x_5879_, 1, v___y_5885_);
lean_ctor_set(v___x_5879_, 0, v___x_5897_);
v___x_5899_ = v___x_5879_;
goto v_reusejp_5898_;
}
else
{
lean_object* v_reuseFailAlloc_5900_; 
v_reuseFailAlloc_5900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5900_, 0, v___x_5897_);
lean_ctor_set(v_reuseFailAlloc_5900_, 1, v___y_5885_);
v___x_5899_ = v_reuseFailAlloc_5900_;
goto v_reusejp_5898_;
}
v_reusejp_5898_:
{
return v___x_5899_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0(lean_object* v_00_u03b2_5905_, lean_object* v_k_5906_, lean_object* v_t_5907_){
_start:
{
uint8_t v___x_5908_; 
v___x_5908_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___redArg(v_k_5906_, v_t_5907_);
return v___x_5908_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___boxed(lean_object* v_00_u03b2_5909_, lean_object* v_k_5910_, lean_object* v_t_5911_){
_start:
{
uint8_t v_res_5912_; lean_object* v_r_5913_; 
v_res_5912_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0(v_00_u03b2_5909_, v_k_5910_, v_t_5911_);
lean_dec(v_t_5911_);
lean_dec(v_k_5910_);
v_r_5913_ = lean_box(v_res_5912_);
return v_r_5913_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_addDefaultInstanceEntry_spec__1(lean_object* v_00_u03b2_5914_, lean_object* v_k_5915_, lean_object* v_v_5916_, lean_object* v_t_5917_, lean_object* v_hl_5918_){
_start:
{
lean_object* v___x_5919_; 
v___x_5919_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_addDefaultInstanceEntry_spec__1___redArg(v_k_5915_, v_v_5916_, v_t_5917_);
return v___x_5919_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__0(lean_object* v_env_5920_, lean_object* v_as_5921_, size_t v_i_5922_, size_t v_stop_5923_, lean_object* v_b_5924_){
_start:
{
lean_object* v___y_5926_; uint8_t v___x_5930_; 
v___x_5930_ = lean_usize_dec_eq(v_i_5922_, v_stop_5923_);
if (v___x_5930_ == 0)
{
lean_object* v___x_5931_; lean_object* v_instanceName_5932_; uint8_t v___x_5933_; lean_object* v___x_5934_; uint8_t v___x_5935_; 
v___x_5931_ = lean_array_uget_borrowed(v_as_5921_, v_i_5922_);
v_instanceName_5932_ = lean_ctor_get(v___x_5931_, 1);
v___x_5933_ = 1;
lean_inc_ref(v_env_5920_);
v___x_5934_ = l_Lean_Environment_setExporting(v_env_5920_, v___x_5933_);
lean_inc(v_instanceName_5932_);
v___x_5935_ = l_Lean_Environment_contains(v___x_5934_, v_instanceName_5932_, v___x_5930_);
if (v___x_5935_ == 0)
{
v___y_5926_ = v_b_5924_;
goto v___jp_5925_;
}
else
{
lean_object* v___x_5936_; 
lean_inc(v___x_5931_);
v___x_5936_ = lean_array_push(v_b_5924_, v___x_5931_);
v___y_5926_ = v___x_5936_;
goto v___jp_5925_;
}
}
else
{
lean_dec_ref(v_env_5920_);
return v_b_5924_;
}
v___jp_5925_:
{
size_t v___x_5927_; size_t v___x_5928_; 
v___x_5927_ = ((size_t)1ULL);
v___x_5928_ = lean_usize_add(v_i_5922_, v___x_5927_);
v_i_5922_ = v___x_5928_;
v_b_5924_ = v___y_5926_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__0___boxed(lean_object* v_env_5937_, lean_object* v_as_5938_, lean_object* v_i_5939_, lean_object* v_stop_5940_, lean_object* v_b_5941_){
_start:
{
size_t v_i_boxed_5942_; size_t v_stop_boxed_5943_; lean_object* v_res_5944_; 
v_i_boxed_5942_ = lean_unbox_usize(v_i_5939_);
lean_dec(v_i_5939_);
v_stop_boxed_5943_ = lean_unbox_usize(v_stop_5940_);
lean_dec(v_stop_5940_);
v_res_5944_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__0(v_env_5937_, v_as_5938_, v_i_boxed_5942_, v_stop_boxed_5943_, v_b_5941_);
lean_dec_ref(v_as_5938_);
return v_res_5944_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(lean_object* v_env_5947_, lean_object* v_x_5948_, lean_object* v_entries_5949_){
_start:
{
lean_object* v_all_5950_; lean_object* v___x_5951_; lean_object* v___x_5952_; lean_object* v___x_5953_; uint8_t v___x_5954_; 
v_all_5950_ = lean_array_mk(v_entries_5949_);
v___x_5951_ = lean_unsigned_to_nat(0u);
v___x_5952_ = lean_array_get_size(v_all_5950_);
v___x_5953_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_));
v___x_5954_ = lean_nat_dec_lt(v___x_5951_, v___x_5952_);
if (v___x_5954_ == 0)
{
lean_object* v___x_5955_; 
lean_dec_ref(v_env_5947_);
v___x_5955_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5955_, 0, v___x_5953_);
lean_ctor_set(v___x_5955_, 1, v___x_5953_);
lean_ctor_set(v___x_5955_, 2, v_all_5950_);
return v___x_5955_;
}
else
{
size_t v___x_5956_; size_t v___x_5957_; lean_object* v___x_5958_; lean_object* v___x_5959_; 
v___x_5956_ = ((size_t)0ULL);
v___x_5957_ = lean_usize_of_nat(v___x_5952_);
v___x_5958_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__0(v_env_5947_, v_all_5950_, v___x_5956_, v___x_5957_, v___x_5953_);
lean_inc_ref(v___x_5958_);
v___x_5959_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5959_, 0, v___x_5958_);
lean_ctor_set(v___x_5959_, 1, v___x_5958_);
lean_ctor_set(v___x_5959_, 2, v_all_5950_);
return v___x_5959_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2____boxed(lean_object* v_env_5960_, lean_object* v_x_5961_, lean_object* v_entries_5962_){
_start:
{
lean_object* v_res_5963_; 
v_res_5963_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(v_env_5960_, v_x_5961_, v_entries_5962_);
lean_dec_ref(v_x_5961_);
return v_res_5963_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(lean_object* v_es_5964_){
_start:
{
lean_object* v___x_5965_; 
v___x_5965_ = lean_array_mk(v_es_5964_);
return v___x_5965_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__1(lean_object* v_as_5966_, size_t v_i_5967_, size_t v_stop_5968_, lean_object* v_b_5969_){
_start:
{
uint8_t v___x_5970_; 
v___x_5970_ = lean_usize_dec_eq(v_i_5967_, v_stop_5968_);
if (v___x_5970_ == 0)
{
lean_object* v___x_5971_; lean_object* v___x_5972_; size_t v___x_5973_; size_t v___x_5974_; 
v___x_5971_ = lean_array_uget_borrowed(v_as_5966_, v_i_5967_);
lean_inc(v___x_5971_);
v___x_5972_ = l_Lean_Meta_addDefaultInstanceEntry(v_b_5969_, v___x_5971_);
v___x_5973_ = ((size_t)1ULL);
v___x_5974_ = lean_usize_add(v_i_5967_, v___x_5973_);
v_i_5967_ = v___x_5974_;
v_b_5969_ = v___x_5972_;
goto _start;
}
else
{
return v_b_5969_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__1___boxed(lean_object* v_as_5976_, lean_object* v_i_5977_, lean_object* v_stop_5978_, lean_object* v_b_5979_){
_start:
{
size_t v_i_boxed_5980_; size_t v_stop_boxed_5981_; lean_object* v_res_5982_; 
v_i_boxed_5980_ = lean_unbox_usize(v_i_5977_);
lean_dec(v_i_5977_);
v_stop_boxed_5981_ = lean_unbox_usize(v_stop_5978_);
lean_dec(v_stop_5978_);
v_res_5982_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__1(v_as_5976_, v_i_boxed_5980_, v_stop_boxed_5981_, v_b_5979_);
lean_dec_ref(v_as_5976_);
return v_res_5982_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_as_5983_, size_t v_i_5984_, size_t v_stop_5985_, lean_object* v_b_5986_){
_start:
{
lean_object* v___y_5988_; uint8_t v___x_5992_; 
v___x_5992_ = lean_usize_dec_eq(v_i_5984_, v_stop_5985_);
if (v___x_5992_ == 0)
{
lean_object* v___x_5993_; lean_object* v___x_5994_; lean_object* v___x_5995_; uint8_t v___x_5996_; 
v___x_5993_ = lean_array_uget_borrowed(v_as_5983_, v_i_5984_);
v___x_5994_ = lean_unsigned_to_nat(0u);
v___x_5995_ = lean_array_get_size(v___x_5993_);
v___x_5996_ = lean_nat_dec_lt(v___x_5994_, v___x_5995_);
if (v___x_5996_ == 0)
{
v___y_5988_ = v_b_5986_;
goto v___jp_5987_;
}
else
{
size_t v___x_5997_; size_t v___x_5998_; lean_object* v___x_5999_; 
v___x_5997_ = ((size_t)0ULL);
v___x_5998_ = lean_usize_of_nat(v___x_5995_);
v___x_5999_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__1(v___x_5993_, v___x_5997_, v___x_5998_, v_b_5986_);
v___y_5988_ = v___x_5999_;
goto v___jp_5987_;
}
}
else
{
return v_b_5986_;
}
v___jp_5987_:
{
size_t v___x_5989_; size_t v___x_5990_; 
v___x_5989_ = ((size_t)1ULL);
v___x_5990_ = lean_usize_add(v_i_5984_, v___x_5989_);
v_i_5984_ = v___x_5990_;
v_b_5986_ = v___y_5988_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object* v_as_6000_, lean_object* v_i_6001_, lean_object* v_stop_6002_, lean_object* v_b_6003_){
_start:
{
size_t v_i_boxed_6004_; size_t v_stop_boxed_6005_; lean_object* v_res_6006_; 
v_i_boxed_6004_ = lean_unbox_usize(v_i_6001_);
lean_dec(v_i_6001_);
v_stop_boxed_6005_ = lean_unbox_usize(v_stop_6002_);
lean_dec(v_stop_6002_);
v_res_6006_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__2(v_as_6000_, v_i_boxed_6004_, v_stop_boxed_6005_, v_b_6003_);
lean_dec_ref(v_as_6000_);
return v_res_6006_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1(lean_object* v_initState_6007_, lean_object* v_as_6008_){
_start:
{
lean_object* v___x_6009_; lean_object* v___x_6010_; uint8_t v___x_6011_; 
v___x_6009_ = lean_unsigned_to_nat(0u);
v___x_6010_ = lean_array_get_size(v_as_6008_);
v___x_6011_ = lean_nat_dec_lt(v___x_6009_, v___x_6010_);
if (v___x_6011_ == 0)
{
return v_initState_6007_;
}
else
{
size_t v___x_6012_; size_t v___x_6013_; lean_object* v___x_6014_; 
v___x_6012_ = ((size_t)0ULL);
v___x_6013_ = lean_usize_of_nat(v___x_6010_);
v___x_6014_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__2(v_as_6008_, v___x_6012_, v___x_6013_, v_initState_6007_);
return v___x_6014_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1___boxed(lean_object* v_initState_6015_, lean_object* v_as_6016_){
_start:
{
lean_object* v_res_6017_; 
v_res_6017_ = l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1(v_initState_6015_, v_as_6016_);
lean_dec_ref(v_as_6016_);
return v_res_6017_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(lean_object* v_es_6018_){
_start:
{
lean_object* v___x_6019_; lean_object* v___x_6020_; 
v___x_6019_ = ((lean_object*)(l_Lean_Meta_instInhabitedDefaultInstances_default___closed__0));
v___x_6020_ = l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1(v___x_6019_, v_es_6018_);
return v___x_6020_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2____boxed(lean_object* v_es_6021_){
_start:
{
lean_object* v_res_6022_; 
v_res_6022_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(v_es_6021_);
lean_dec_ref(v_es_6021_);
return v_res_6022_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_6044_; lean_object* v___x_6045_; 
v___x_6044_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_));
v___x_6045_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_6044_);
return v___x_6045_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2____boxed(lean_object* v_a_6046_){
_start:
{
lean_object* v_res_6047_; 
v_res_6047_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_();
return v_res_6047_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance___lam__0(lean_object* v_addEntryFn_6048_, lean_object* v___x_6049_, lean_object* v_s_6050_){
_start:
{
lean_object* v_importedEntries_6051_; lean_object* v_state_6052_; lean_object* v___x_6054_; uint8_t v_isShared_6055_; uint8_t v_isSharedCheck_6060_; 
v_importedEntries_6051_ = lean_ctor_get(v_s_6050_, 0);
v_state_6052_ = lean_ctor_get(v_s_6050_, 1);
v_isSharedCheck_6060_ = !lean_is_exclusive(v_s_6050_);
if (v_isSharedCheck_6060_ == 0)
{
v___x_6054_ = v_s_6050_;
v_isShared_6055_ = v_isSharedCheck_6060_;
goto v_resetjp_6053_;
}
else
{
lean_inc(v_state_6052_);
lean_inc(v_importedEntries_6051_);
lean_dec(v_s_6050_);
v___x_6054_ = lean_box(0);
v_isShared_6055_ = v_isSharedCheck_6060_;
goto v_resetjp_6053_;
}
v_resetjp_6053_:
{
lean_object* v_state_6056_; lean_object* v___x_6058_; 
v_state_6056_ = lean_apply_2(v_addEntryFn_6048_, v_state_6052_, v___x_6049_);
if (v_isShared_6055_ == 0)
{
lean_ctor_set(v___x_6054_, 1, v_state_6056_);
v___x_6058_ = v___x_6054_;
goto v_reusejp_6057_;
}
else
{
lean_object* v_reuseFailAlloc_6059_; 
v_reuseFailAlloc_6059_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6059_, 0, v_importedEntries_6051_);
lean_ctor_set(v_reuseFailAlloc_6059_, 1, v_state_6056_);
v___x_6058_ = v_reuseFailAlloc_6059_;
goto v_reusejp_6057_;
}
v_reusejp_6057_:
{
return v___x_6058_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___redArg(lean_object* v_env_6061_, lean_object* v___y_6062_, lean_object* v___y_6063_){
_start:
{
lean_object* v___x_6065_; lean_object* v_nextMacroScope_6066_; lean_object* v_ngen_6067_; lean_object* v_auxDeclNGen_6068_; lean_object* v_traceState_6069_; lean_object* v_recordedDeps_6070_; lean_object* v_messages_6071_; lean_object* v_infoState_6072_; lean_object* v_snapshotTasks_6073_; lean_object* v___x_6075_; uint8_t v_isShared_6076_; uint8_t v_isSharedCheck_6099_; 
v___x_6065_ = lean_st_ref_take(v___y_6063_);
v_nextMacroScope_6066_ = lean_ctor_get(v___x_6065_, 1);
v_ngen_6067_ = lean_ctor_get(v___x_6065_, 2);
v_auxDeclNGen_6068_ = lean_ctor_get(v___x_6065_, 3);
v_traceState_6069_ = lean_ctor_get(v___x_6065_, 4);
v_recordedDeps_6070_ = lean_ctor_get(v___x_6065_, 6);
v_messages_6071_ = lean_ctor_get(v___x_6065_, 7);
v_infoState_6072_ = lean_ctor_get(v___x_6065_, 8);
v_snapshotTasks_6073_ = lean_ctor_get(v___x_6065_, 9);
v_isSharedCheck_6099_ = !lean_is_exclusive(v___x_6065_);
if (v_isSharedCheck_6099_ == 0)
{
lean_object* v_unused_6100_; lean_object* v_unused_6101_; 
v_unused_6100_ = lean_ctor_get(v___x_6065_, 5);
lean_dec(v_unused_6100_);
v_unused_6101_ = lean_ctor_get(v___x_6065_, 0);
lean_dec(v_unused_6101_);
v___x_6075_ = v___x_6065_;
v_isShared_6076_ = v_isSharedCheck_6099_;
goto v_resetjp_6074_;
}
else
{
lean_inc(v_snapshotTasks_6073_);
lean_inc(v_infoState_6072_);
lean_inc(v_messages_6071_);
lean_inc(v_recordedDeps_6070_);
lean_inc(v_traceState_6069_);
lean_inc(v_auxDeclNGen_6068_);
lean_inc(v_ngen_6067_);
lean_inc(v_nextMacroScope_6066_);
lean_dec(v___x_6065_);
v___x_6075_ = lean_box(0);
v_isShared_6076_ = v_isSharedCheck_6099_;
goto v_resetjp_6074_;
}
v_resetjp_6074_:
{
lean_object* v___x_6077_; lean_object* v___x_6079_; 
v___x_6077_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__1);
if (v_isShared_6076_ == 0)
{
lean_ctor_set(v___x_6075_, 5, v___x_6077_);
lean_ctor_set(v___x_6075_, 0, v_env_6061_);
v___x_6079_ = v___x_6075_;
goto v_reusejp_6078_;
}
else
{
lean_object* v_reuseFailAlloc_6098_; 
v_reuseFailAlloc_6098_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_6098_, 0, v_env_6061_);
lean_ctor_set(v_reuseFailAlloc_6098_, 1, v_nextMacroScope_6066_);
lean_ctor_set(v_reuseFailAlloc_6098_, 2, v_ngen_6067_);
lean_ctor_set(v_reuseFailAlloc_6098_, 3, v_auxDeclNGen_6068_);
lean_ctor_set(v_reuseFailAlloc_6098_, 4, v_traceState_6069_);
lean_ctor_set(v_reuseFailAlloc_6098_, 5, v___x_6077_);
lean_ctor_set(v_reuseFailAlloc_6098_, 6, v_recordedDeps_6070_);
lean_ctor_set(v_reuseFailAlloc_6098_, 7, v_messages_6071_);
lean_ctor_set(v_reuseFailAlloc_6098_, 8, v_infoState_6072_);
lean_ctor_set(v_reuseFailAlloc_6098_, 9, v_snapshotTasks_6073_);
v___x_6079_ = v_reuseFailAlloc_6098_;
goto v_reusejp_6078_;
}
v_reusejp_6078_:
{
lean_object* v___x_6080_; lean_object* v___x_6081_; lean_object* v_mctx_6082_; lean_object* v_zetaDeltaFVarIds_6083_; lean_object* v_postponed_6084_; lean_object* v_diag_6085_; lean_object* v___x_6087_; uint8_t v_isShared_6088_; uint8_t v_isSharedCheck_6096_; 
v___x_6080_ = lean_st_ref_put(v___y_6063_, v___x_6079_);
v___x_6081_ = lean_st_ref_take(v___y_6062_);
v_mctx_6082_ = lean_ctor_get(v___x_6081_, 0);
v_zetaDeltaFVarIds_6083_ = lean_ctor_get(v___x_6081_, 2);
v_postponed_6084_ = lean_ctor_get(v___x_6081_, 3);
v_diag_6085_ = lean_ctor_get(v___x_6081_, 4);
v_isSharedCheck_6096_ = !lean_is_exclusive(v___x_6081_);
if (v_isSharedCheck_6096_ == 0)
{
lean_object* v_unused_6097_; 
v_unused_6097_ = lean_ctor_get(v___x_6081_, 1);
lean_dec(v_unused_6097_);
v___x_6087_ = v___x_6081_;
v_isShared_6088_ = v_isSharedCheck_6096_;
goto v_resetjp_6086_;
}
else
{
lean_inc(v_diag_6085_);
lean_inc(v_postponed_6084_);
lean_inc(v_zetaDeltaFVarIds_6083_);
lean_inc(v_mctx_6082_);
lean_dec(v___x_6081_);
v___x_6087_ = lean_box(0);
v_isShared_6088_ = v_isSharedCheck_6096_;
goto v_resetjp_6086_;
}
v_resetjp_6086_:
{
lean_object* v___x_6089_; lean_object* v___x_6090_; lean_object* v___x_6092_; 
v___x_6089_ = lean_box(0);
v___x_6090_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__5, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__5_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__5);
if (v_isShared_6088_ == 0)
{
lean_ctor_set(v___x_6087_, 1, v___x_6090_);
v___x_6092_ = v___x_6087_;
goto v_reusejp_6091_;
}
else
{
lean_object* v_reuseFailAlloc_6095_; 
v_reuseFailAlloc_6095_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_6095_, 0, v_mctx_6082_);
lean_ctor_set(v_reuseFailAlloc_6095_, 1, v___x_6090_);
lean_ctor_set(v_reuseFailAlloc_6095_, 2, v_zetaDeltaFVarIds_6083_);
lean_ctor_set(v_reuseFailAlloc_6095_, 3, v_postponed_6084_);
lean_ctor_set(v_reuseFailAlloc_6095_, 4, v_diag_6085_);
v___x_6092_ = v_reuseFailAlloc_6095_;
goto v_reusejp_6091_;
}
v_reusejp_6091_:
{
lean_object* v___x_6093_; lean_object* v___x_6094_; 
v___x_6093_ = lean_st_ref_put(v___y_6062_, v___x_6092_);
v___x_6094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6094_, 0, v___x_6089_);
return v___x_6094_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___redArg___boxed(lean_object* v_env_6102_, lean_object* v___y_6103_, lean_object* v___y_6104_, lean_object* v___y_6105_){
_start:
{
lean_object* v_res_6106_; 
v_res_6106_ = l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___redArg(v_env_6102_, v___y_6103_, v___y_6104_);
lean_dec(v___y_6104_);
lean_dec(v___y_6103_);
return v_res_6106_;
}
}
static lean_object* _init_l_Lean_Meta_addDefaultInstance___lam__1___closed__1(void){
_start:
{
lean_object* v___x_6108_; lean_object* v___x_6109_; 
v___x_6108_ = ((lean_object*)(l_Lean_Meta_addDefaultInstance___lam__1___closed__0));
v___x_6109_ = l_Lean_stringToMessageData(v___x_6108_);
return v___x_6109_;
}
}
static lean_object* _init_l_Lean_Meta_addDefaultInstance___lam__1___closed__3(void){
_start:
{
lean_object* v___x_6111_; lean_object* v___x_6112_; 
v___x_6111_ = ((lean_object*)(l_Lean_Meta_addDefaultInstance___lam__1___closed__2));
v___x_6112_ = l_Lean_stringToMessageData(v___x_6111_);
return v___x_6112_;
}
}
static lean_object* _init_l_Lean_Meta_addDefaultInstance___lam__1___closed__5(void){
_start:
{
lean_object* v___x_6114_; lean_object* v___x_6115_; 
v___x_6114_ = ((lean_object*)(l_Lean_Meta_addDefaultInstance___lam__1___closed__4));
v___x_6115_ = l_Lean_stringToMessageData(v___x_6114_);
return v___x_6115_;
}
}
static lean_object* _init_l_Lean_Meta_addDefaultInstance___lam__1___closed__7(void){
_start:
{
lean_object* v___x_6117_; lean_object* v___x_6118_; 
v___x_6117_ = ((lean_object*)(l_Lean_Meta_addDefaultInstance___lam__1___closed__6));
v___x_6118_ = l_Lean_stringToMessageData(v___x_6117_);
return v___x_6118_;
}
}
static lean_object* _init_l_Lean_Meta_addDefaultInstance___lam__1___closed__9(void){
_start:
{
lean_object* v___x_6120_; lean_object* v___x_6121_; 
v___x_6120_ = ((lean_object*)(l_Lean_Meta_addDefaultInstance___lam__1___closed__8));
v___x_6121_ = l_Lean_stringToMessageData(v___x_6120_);
return v___x_6121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance___lam__1(lean_object* v_declName_6122_, lean_object* v_prio_6123_, lean_object* v_x_6124_, lean_object* v_type_6125_, lean_object* v___y_6126_, lean_object* v___y_6127_, lean_object* v___y_6128_, lean_object* v___y_6129_){
_start:
{
lean_object* v___x_6131_; 
v___x_6131_ = l_Lean_Expr_getAppFn(v_type_6125_);
if (lean_obj_tag(v___x_6131_) == 4)
{
lean_object* v_declName_6132_; lean_object* v___y_6134_; lean_object* v___y_6135_; lean_object* v___y_6136_; lean_object* v___y_6137_; lean_object* v___x_6154_; lean_object* v_env_6155_; uint8_t v___x_6156_; 
v_declName_6132_ = lean_ctor_get(v___x_6131_, 0);
lean_inc(v_declName_6132_);
lean_dec_ref_known(v___x_6131_, 2);
v___x_6154_ = lean_st_ref_get(v___y_6129_);
v_env_6155_ = lean_ctor_get(v___x_6154_, 0);
lean_inc_ref(v_env_6155_);
lean_dec(v___x_6154_);
v___x_6156_ = l_Lean_isClass(v_env_6155_, v_declName_6132_);
if (v___x_6156_ == 0)
{
lean_object* v___x_6157_; lean_object* v___x_6158_; lean_object* v___x_6159_; lean_object* v___x_6160_; lean_object* v___x_6161_; lean_object* v___x_6162_; lean_object* v___x_6163_; lean_object* v___x_6164_; lean_object* v___x_6165_; lean_object* v___x_6166_; lean_object* v___x_6167_; lean_object* v___x_6168_; lean_object* v___x_6169_; lean_object* v___x_6170_; 
lean_dec(v_prio_6123_);
v___x_6157_ = lean_obj_once(&l_Lean_Meta_addDefaultInstance___lam__1___closed__1, &l_Lean_Meta_addDefaultInstance___lam__1___closed__1_once, _init_l_Lean_Meta_addDefaultInstance___lam__1___closed__1);
v___x_6158_ = l_Lean_MessageData_ofConstName(v_declName_6122_, v___x_6156_);
v___x_6159_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6159_, 0, v___x_6157_);
lean_ctor_set(v___x_6159_, 1, v___x_6158_);
v___x_6160_ = lean_obj_once(&l_Lean_Meta_addDefaultInstance___lam__1___closed__3, &l_Lean_Meta_addDefaultInstance___lam__1___closed__3_once, _init_l_Lean_Meta_addDefaultInstance___lam__1___closed__3);
v___x_6161_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6161_, 0, v___x_6159_);
lean_ctor_set(v___x_6161_, 1, v___x_6160_);
lean_inc(v_declName_6132_);
v___x_6162_ = l_Lean_MessageData_ofName(v_declName_6132_);
v___x_6163_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6163_, 0, v___x_6161_);
lean_ctor_set(v___x_6163_, 1, v___x_6162_);
v___x_6164_ = lean_obj_once(&l_Lean_Meta_addDefaultInstance___lam__1___closed__5, &l_Lean_Meta_addDefaultInstance___lam__1___closed__5_once, _init_l_Lean_Meta_addDefaultInstance___lam__1___closed__5);
v___x_6165_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6165_, 0, v___x_6163_);
lean_ctor_set(v___x_6165_, 1, v___x_6164_);
v___x_6166_ = l_Lean_MessageData_ofConstName(v_declName_6132_, v___x_6156_);
v___x_6167_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6167_, 0, v___x_6165_);
lean_ctor_set(v___x_6167_, 1, v___x_6166_);
v___x_6168_ = lean_obj_once(&l_Lean_Meta_addDefaultInstance___lam__1___closed__7, &l_Lean_Meta_addDefaultInstance___lam__1___closed__7_once, _init_l_Lean_Meta_addDefaultInstance___lam__1___closed__7);
v___x_6169_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6169_, 0, v___x_6167_);
lean_ctor_set(v___x_6169_, 1, v___x_6168_);
v___x_6170_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4___redArg(v___x_6169_, v___y_6126_, v___y_6127_, v___y_6128_, v___y_6129_);
return v___x_6170_;
}
else
{
v___y_6134_ = v___y_6126_;
v___y_6135_ = v___y_6127_;
v___y_6136_ = v___y_6128_;
v___y_6137_ = v___y_6129_;
goto v___jp_6133_;
}
v___jp_6133_:
{
lean_object* v___x_6138_; lean_object* v_env_6139_; lean_object* v___x_6140_; lean_object* v_toEnvExtension_6141_; lean_object* v_addEntryFn_6142_; lean_object* v_asyncMode_6143_; uint8_t v_logWrites_6144_; lean_object* v___x_6145_; lean_object* v___f_6146_; lean_object* v___x_6147_; uint8_t v___x_6148_; 
v___x_6138_ = lean_st_ref_get(v___y_6137_);
v_env_6139_ = lean_ctor_get(v___x_6138_, 0);
lean_inc_ref(v_env_6139_);
lean_dec(v___x_6138_);
v___x_6140_ = l_Lean_Meta_defaultInstanceExtension;
v_toEnvExtension_6141_ = lean_ctor_get(v___x_6140_, 0);
v_addEntryFn_6142_ = lean_ctor_get(v___x_6140_, 3);
v_asyncMode_6143_ = lean_ctor_get(v_toEnvExtension_6141_, 2);
v_logWrites_6144_ = lean_ctor_get_uint8(v_toEnvExtension_6141_, sizeof(void*)*6);
v___x_6145_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6145_, 0, v_declName_6132_);
lean_ctor_set(v___x_6145_, 1, v_declName_6122_);
lean_ctor_set(v___x_6145_, 2, v_prio_6123_);
lean_inc(v_addEntryFn_6142_);
v___f_6146_ = lean_alloc_closure((void*)(l_Lean_Meta_addDefaultInstance___lam__0), 3, 2);
lean_closure_set(v___f_6146_, 0, v_addEntryFn_6142_);
lean_closure_set(v___f_6146_, 1, v___x_6145_);
v___x_6147_ = lean_box(0);
v___x_6148_ = 1;
if (v_logWrites_6144_ == 0)
{
lean_object* v___x_6149_; lean_object* v___x_6150_; 
lean_inc_ref(v_toEnvExtension_6141_);
v___x_6149_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_6141_, v_env_6139_, v___f_6146_, v_asyncMode_6143_, v___x_6147_, v___x_6148_);
v___x_6150_ = l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___redArg(v___x_6149_, v___y_6135_, v___y_6137_);
return v___x_6150_;
}
else
{
lean_object* v___x_6151_; lean_object* v___x_6152_; lean_object* v___x_6153_; 
lean_inc_ref_n(v_toEnvExtension_6141_, 2);
v___x_6151_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_6141_, v_env_6139_);
lean_dec_ref(v_env_6139_);
v___x_6152_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_6141_, v___x_6151_, v___f_6146_, v_asyncMode_6143_, v___x_6147_, v___x_6148_);
v___x_6153_ = l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___redArg(v___x_6152_, v___y_6135_, v___y_6137_);
return v___x_6153_;
}
}
}
else
{
lean_object* v___x_6171_; uint8_t v___x_6172_; lean_object* v___x_6173_; lean_object* v___x_6174_; lean_object* v___x_6175_; lean_object* v___x_6176_; lean_object* v___x_6177_; 
lean_dec_ref(v___x_6131_);
lean_dec(v_prio_6123_);
v___x_6171_ = lean_obj_once(&l_Lean_Meta_addDefaultInstance___lam__1___closed__1, &l_Lean_Meta_addDefaultInstance___lam__1___closed__1_once, _init_l_Lean_Meta_addDefaultInstance___lam__1___closed__1);
v___x_6172_ = 0;
v___x_6173_ = l_Lean_MessageData_ofConstName(v_declName_6122_, v___x_6172_);
v___x_6174_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6174_, 0, v___x_6171_);
lean_ctor_set(v___x_6174_, 1, v___x_6173_);
v___x_6175_ = lean_obj_once(&l_Lean_Meta_addDefaultInstance___lam__1___closed__9, &l_Lean_Meta_addDefaultInstance___lam__1___closed__9_once, _init_l_Lean_Meta_addDefaultInstance___lam__1___closed__9);
v___x_6176_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6176_, 0, v___x_6174_);
lean_ctor_set(v___x_6176_, 1, v___x_6175_);
v___x_6177_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4___redArg(v___x_6176_, v___y_6126_, v___y_6127_, v___y_6128_, v___y_6129_);
return v___x_6177_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance___lam__1___boxed(lean_object* v_declName_6178_, lean_object* v_prio_6179_, lean_object* v_x_6180_, lean_object* v_type_6181_, lean_object* v___y_6182_, lean_object* v___y_6183_, lean_object* v___y_6184_, lean_object* v___y_6185_, lean_object* v___y_6186_){
_start:
{
lean_object* v_res_6187_; 
v_res_6187_ = l_Lean_Meta_addDefaultInstance___lam__1(v_declName_6178_, v_prio_6179_, v_x_6180_, v_type_6181_, v___y_6182_, v___y_6183_, v___y_6184_, v___y_6185_);
lean_dec(v___y_6185_);
lean_dec_ref(v___y_6184_);
lean_dec(v___y_6183_);
lean_dec_ref(v___y_6182_);
lean_dec_ref(v_type_6181_);
lean_dec_ref(v_x_6180_);
return v_res_6187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance(lean_object* v_declName_6188_, lean_object* v_prio_6189_, lean_object* v_a_6190_, lean_object* v_a_6191_, lean_object* v_a_6192_, lean_object* v_a_6193_){
_start:
{
lean_object* v___f_6195_; lean_object* v___x_6196_; lean_object* v_env_6197_; uint8_t v___x_6198_; lean_object* v___x_6199_; 
lean_inc_n(v_declName_6188_, 2);
v___f_6195_ = lean_alloc_closure((void*)(l_Lean_Meta_addDefaultInstance___lam__1___boxed), 9, 2);
lean_closure_set(v___f_6195_, 0, v_declName_6188_);
lean_closure_set(v___f_6195_, 1, v_prio_6189_);
v___x_6196_ = lean_st_ref_get(v_a_6193_);
v_env_6197_ = lean_ctor_get(v___x_6196_, 0);
lean_inc_ref(v_env_6197_);
lean_dec(v___x_6196_);
v___x_6198_ = 0;
v___x_6199_ = l_Lean_Environment_find_x3f(v_env_6197_, v_declName_6188_, v___x_6198_);
if (lean_obj_tag(v___x_6199_) == 0)
{
lean_object* v___x_6200_; lean_object* v___x_6201_; lean_object* v___x_6202_; lean_object* v___x_6203_; lean_object* v___x_6204_; lean_object* v___x_6205_; 
lean_dec_ref(v___f_6195_);
v___x_6200_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg___closed__1);
v___x_6201_ = l_Lean_MessageData_ofConstName(v_declName_6188_, v___x_6198_);
v___x_6202_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6202_, 0, v___x_6200_);
lean_ctor_set(v___x_6202_, 1, v___x_6201_);
v___x_6203_ = lean_obj_once(&l_Lean_Meta_Instances_erase___redArg___closed__3, &l_Lean_Meta_Instances_erase___redArg___closed__3_once, _init_l_Lean_Meta_Instances_erase___redArg___closed__3);
v___x_6204_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6204_, 0, v___x_6202_);
lean_ctor_set(v___x_6204_, 1, v___x_6203_);
v___x_6205_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4___redArg(v___x_6204_, v_a_6190_, v_a_6191_, v_a_6192_, v_a_6193_);
return v___x_6205_;
}
else
{
lean_object* v_val_6206_; lean_object* v___x_6207_; lean_object* v___x_6208_; 
lean_dec(v_declName_6188_);
v_val_6206_ = lean_ctor_get(v___x_6199_, 0);
lean_inc(v_val_6206_);
lean_dec_ref_known(v___x_6199_, 1);
v___x_6207_ = l_Lean_ConstantInfo_type(v_val_6206_);
lean_dec(v_val_6206_);
v___x_6208_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(v___x_6207_, v___f_6195_, v___x_6198_, v___x_6198_, v_a_6190_, v_a_6191_, v_a_6192_, v_a_6193_);
return v___x_6208_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance___boxed(lean_object* v_declName_6209_, lean_object* v_prio_6210_, lean_object* v_a_6211_, lean_object* v_a_6212_, lean_object* v_a_6213_, lean_object* v_a_6214_, lean_object* v_a_6215_){
_start:
{
lean_object* v_res_6216_; 
v_res_6216_ = l_Lean_Meta_addDefaultInstance(v_declName_6209_, v_prio_6210_, v_a_6211_, v_a_6212_, v_a_6213_, v_a_6214_);
lean_dec(v_a_6214_);
lean_dec_ref(v_a_6213_);
lean_dec(v_a_6212_);
lean_dec_ref(v_a_6211_);
return v_res_6216_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0(lean_object* v_env_6217_, lean_object* v___y_6218_, lean_object* v___y_6219_, lean_object* v___y_6220_, lean_object* v___y_6221_){
_start:
{
lean_object* v___x_6223_; 
v___x_6223_ = l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___redArg(v_env_6217_, v___y_6219_, v___y_6221_);
return v___x_6223_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___boxed(lean_object* v_env_6224_, lean_object* v___y_6225_, lean_object* v___y_6226_, lean_object* v___y_6227_, lean_object* v___y_6228_, lean_object* v___y_6229_){
_start:
{
lean_object* v_res_6230_; 
v_res_6230_ = l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0(v_env_6224_, v___y_6225_, v___y_6226_, v___y_6227_, v___y_6228_);
lean_dec(v___y_6228_);
lean_dec_ref(v___y_6227_);
lean_dec(v___y_6226_);
lean_dec_ref(v___y_6225_);
return v_res_6230_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_6232_; lean_object* v___x_6233_; 
v___x_6232_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__0));
v___x_6233_ = l_Lean_stringToMessageData(v___x_6232_);
return v___x_6233_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_6235_; lean_object* v___x_6236_; 
v___x_6235_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__2));
v___x_6236_ = l_Lean_stringToMessageData(v___x_6235_);
return v___x_6236_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg(lean_object* v_name_6240_, uint8_t v_kind_6241_, lean_object* v___y_6242_, lean_object* v___y_6243_){
_start:
{
lean_object* v___x_6245_; lean_object* v___x_6246_; lean_object* v___x_6247_; lean_object* v___x_6248_; lean_object* v___x_6249_; lean_object* v___y_6251_; 
v___x_6245_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__1, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__1_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__1);
v___x_6246_ = l_Lean_MessageData_ofName(v_name_6240_);
v___x_6247_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6247_, 0, v___x_6245_);
lean_ctor_set(v___x_6247_, 1, v___x_6246_);
v___x_6248_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__3, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__3_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__3);
v___x_6249_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6249_, 0, v___x_6247_);
lean_ctor_set(v___x_6249_, 1, v___x_6248_);
switch(v_kind_6241_)
{
case 0:
{
lean_object* v___x_6258_; 
v___x_6258_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__4));
v___y_6251_ = v___x_6258_;
goto v___jp_6250_;
}
case 1:
{
lean_object* v___x_6259_; 
v___x_6259_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__5));
v___y_6251_ = v___x_6259_;
goto v___jp_6250_;
}
default: 
{
lean_object* v___x_6260_; 
v___x_6260_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__6));
v___y_6251_ = v___x_6260_;
goto v___jp_6250_;
}
}
v___jp_6250_:
{
lean_object* v___x_6252_; lean_object* v___x_6253_; lean_object* v___x_6254_; lean_object* v___x_6255_; lean_object* v___x_6256_; lean_object* v___x_6257_; 
lean_inc_ref(v___y_6251_);
v___x_6252_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_6252_, 0, v___y_6251_);
v___x_6253_ = l_Lean_MessageData_ofFormat(v___x_6252_);
v___x_6254_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6254_, 0, v___x_6249_);
lean_ctor_set(v___x_6254_, 1, v___x_6253_);
v___x_6255_ = lean_obj_once(&l_Lean_Meta_Instances_erase___redArg___closed__3, &l_Lean_Meta_Instances_erase___redArg___closed__3_once, _init_l_Lean_Meta_Instances_erase___redArg___closed__3);
v___x_6256_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6256_, 0, v___x_6254_);
lean_ctor_set(v___x_6256_, 1, v___x_6255_);
v___x_6257_ = l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg(v___x_6256_, v___y_6242_, v___y_6243_);
return v___x_6257_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_name_6261_, lean_object* v_kind_6262_, lean_object* v___y_6263_, lean_object* v___y_6264_, lean_object* v___y_6265_){
_start:
{
uint8_t v_kind_boxed_6266_; lean_object* v_res_6267_; 
v_kind_boxed_6266_ = lean_unbox(v_kind_6262_);
v_res_6267_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg(v_name_6261_, v_kind_boxed_6266_, v___y_6263_, v___y_6264_);
lean_dec(v___y_6264_);
lean_dec_ref(v___y_6263_);
return v_res_6267_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(lean_object* v___x_6268_, lean_object* v___x_6269_, lean_object* v___x_6270_, lean_object* v_declName_6271_, lean_object* v_stx_6272_, uint8_t v_kind_6273_, lean_object* v___y_6274_, lean_object* v___y_6275_){
_start:
{
lean_object* v___x_6277_; lean_object* v___x_6278_; lean_object* v___x_6279_; 
v___x_6277_ = lean_unsigned_to_nat(1u);
v___x_6278_ = l_Lean_Syntax_getArg(v_stx_6272_, v___x_6277_);
v___x_6279_ = l_Lean_getAttrParamOptPrio(v___x_6278_, v___y_6274_, v___y_6275_);
if (lean_obj_tag(v___x_6279_) == 0)
{
lean_object* v_a_6280_; lean_object* v___y_6282_; lean_object* v___y_6283_; uint8_t v___x_6317_; uint8_t v___x_6318_; 
v_a_6280_ = lean_ctor_get(v___x_6279_, 0);
lean_inc(v_a_6280_);
lean_dec_ref_known(v___x_6279_, 1);
v___x_6317_ = 0;
v___x_6318_ = l_Lean_instBEqAttributeKind_beq(v_kind_6273_, v___x_6317_);
if (v___x_6318_ == 0)
{
lean_object* v___x_6319_; 
lean_dec(v_a_6280_);
lean_dec(v_declName_6271_);
lean_dec(v___x_6269_);
lean_dec(v___x_6268_);
v___x_6319_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg(v___x_6270_, v_kind_6273_, v___y_6274_, v___y_6275_);
return v___x_6319_;
}
else
{
lean_dec(v___x_6270_);
v___y_6282_ = v___y_6274_;
v___y_6283_ = v___y_6275_;
goto v___jp_6281_;
}
v___jp_6281_:
{
uint8_t v___x_6284_; uint8_t v___x_6285_; lean_object* v___x_6286_; lean_object* v___x_6287_; lean_object* v___x_6288_; lean_object* v___x_6289_; lean_object* v___x_6290_; size_t v___x_6291_; lean_object* v___x_6292_; lean_object* v___x_6293_; lean_object* v___x_6294_; lean_object* v___x_6295_; lean_object* v___x_6296_; lean_object* v___x_6297_; lean_object* v___x_6298_; lean_object* v___x_6299_; lean_object* v___x_6300_; lean_object* v___x_6301_; lean_object* v___x_6302_; lean_object* v___x_6303_; lean_object* v___x_6304_; lean_object* v___x_6305_; lean_object* v___x_6306_; lean_object* v___x_6307_; 
v___x_6284_ = 0;
v___x_6285_ = 1;
v___x_6286_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_6287_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_6288_ = lean_unsigned_to_nat(32u);
v___x_6289_ = lean_mk_empty_array_with_capacity(v___x_6288_);
v___x_6290_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__2);
v___x_6291_ = ((size_t)5ULL);
lean_inc_n(v___x_6268_, 7);
v___x_6292_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_6292_, 0, v___x_6290_);
lean_ctor_set(v___x_6292_, 1, v___x_6289_);
lean_ctor_set(v___x_6292_, 2, v___x_6268_);
lean_ctor_set(v___x_6292_, 3, v___x_6268_);
lean_ctor_set_usize(v___x_6292_, 4, v___x_6291_);
v___x_6293_ = lean_box(1);
lean_inc_ref(v___x_6292_);
v___x_6294_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6294_, 0, v___x_6287_);
lean_ctor_set(v___x_6294_, 1, v___x_6292_);
lean_ctor_set(v___x_6294_, 2, v___x_6293_);
v___x_6295_ = lean_mk_empty_array_with_capacity(v___x_6268_);
v___x_6296_ = lean_box(0);
lean_inc(v___x_6269_);
v___x_6297_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_6297_, 0, v___x_6286_);
lean_ctor_set(v___x_6297_, 1, v___x_6269_);
lean_ctor_set(v___x_6297_, 2, v___x_6294_);
lean_ctor_set(v___x_6297_, 3, v___x_6295_);
lean_ctor_set(v___x_6297_, 4, v___x_6296_);
lean_ctor_set(v___x_6297_, 5, v___x_6268_);
lean_ctor_set(v___x_6297_, 6, v___x_6296_);
lean_ctor_set_uint8(v___x_6297_, sizeof(void*)*7, v___x_6284_);
lean_ctor_set_uint8(v___x_6297_, sizeof(void*)*7 + 1, v___x_6284_);
lean_ctor_set_uint8(v___x_6297_, sizeof(void*)*7 + 2, v___x_6284_);
lean_ctor_set_uint8(v___x_6297_, sizeof(void*)*7 + 3, v___x_6285_);
v___x_6298_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_6298_, 0, v___x_6268_);
lean_ctor_set(v___x_6298_, 1, v___x_6268_);
lean_ctor_set(v___x_6298_, 2, v___x_6268_);
lean_ctor_set(v___x_6298_, 3, v___x_6268_);
lean_ctor_set(v___x_6298_, 4, v___x_6287_);
lean_ctor_set(v___x_6298_, 5, v___x_6287_);
lean_ctor_set(v___x_6298_, 6, v___x_6287_);
lean_ctor_set(v___x_6298_, 7, v___x_6287_);
lean_ctor_set(v___x_6298_, 8, v___x_6287_);
lean_ctor_set(v___x_6298_, 9, v___x_6287_);
lean_ctor_set(v___x_6298_, 10, v___x_6287_);
v___x_6299_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2);
v___x_6300_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_6301_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6301_, 0, v___x_6287_);
lean_ctor_set(v___x_6301_, 1, v___x_6287_);
lean_ctor_set(v___x_6301_, 2, v___x_6268_);
v___x_6302_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_6302_, 0, v___x_6299_);
lean_ctor_set(v___x_6302_, 1, v___x_6287_);
lean_ctor_set(v___x_6302_, 2, v___x_6300_);
lean_ctor_set(v___x_6302_, 3, v___x_6287_);
lean_ctor_set(v___x_6302_, 4, v___x_6287_);
lean_ctor_set(v___x_6302_, 5, v___x_6287_);
lean_ctor_set(v___x_6302_, 6, v___x_6287_);
lean_ctor_set(v___x_6302_, 7, v___x_6301_);
v___x_6303_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_6304_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6304_, 0, v___x_6298_);
lean_ctor_set(v___x_6304_, 1, v___x_6302_);
lean_ctor_set(v___x_6304_, 2, v___x_6269_);
lean_ctor_set(v___x_6304_, 3, v___x_6292_);
lean_ctor_set(v___x_6304_, 4, v___x_6303_);
v___x_6305_ = lean_box(0);
v___x_6306_ = lean_st_mk_ref(v___x_6304_);
v___x_6307_ = l_Lean_Meta_addDefaultInstance(v_declName_6271_, v_a_6280_, v___x_6297_, v___x_6306_, v___y_6282_, v___y_6283_);
lean_dec_ref_known(v___x_6297_, 7);
if (lean_obj_tag(v___x_6307_) == 0)
{
lean_object* v___x_6309_; uint8_t v_isShared_6310_; uint8_t v_isSharedCheck_6315_; 
v_isSharedCheck_6315_ = !lean_is_exclusive(v___x_6307_);
if (v_isSharedCheck_6315_ == 0)
{
lean_object* v_unused_6316_; 
v_unused_6316_ = lean_ctor_get(v___x_6307_, 0);
lean_dec(v_unused_6316_);
v___x_6309_ = v___x_6307_;
v_isShared_6310_ = v_isSharedCheck_6315_;
goto v_resetjp_6308_;
}
else
{
lean_dec(v___x_6307_);
v___x_6309_ = lean_box(0);
v_isShared_6310_ = v_isSharedCheck_6315_;
goto v_resetjp_6308_;
}
v_resetjp_6308_:
{
lean_object* v___x_6311_; lean_object* v___x_6313_; 
v___x_6311_ = lean_st_ref_get(v___x_6306_);
lean_dec(v___x_6306_);
lean_dec(v___x_6311_);
if (v_isShared_6310_ == 0)
{
lean_ctor_set(v___x_6309_, 0, v___x_6305_);
v___x_6313_ = v___x_6309_;
goto v_reusejp_6312_;
}
else
{
lean_object* v_reuseFailAlloc_6314_; 
v_reuseFailAlloc_6314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6314_, 0, v___x_6305_);
v___x_6313_ = v_reuseFailAlloc_6314_;
goto v_reusejp_6312_;
}
v_reusejp_6312_:
{
return v___x_6313_;
}
}
}
else
{
lean_dec(v___x_6306_);
return v___x_6307_;
}
}
}
else
{
lean_object* v_a_6320_; lean_object* v___x_6322_; uint8_t v_isShared_6323_; uint8_t v_isSharedCheck_6327_; 
lean_dec(v_declName_6271_);
lean_dec(v___x_6270_);
lean_dec(v___x_6269_);
lean_dec(v___x_6268_);
v_a_6320_ = lean_ctor_get(v___x_6279_, 0);
v_isSharedCheck_6327_ = !lean_is_exclusive(v___x_6279_);
if (v_isSharedCheck_6327_ == 0)
{
v___x_6322_ = v___x_6279_;
v_isShared_6323_ = v_isSharedCheck_6327_;
goto v_resetjp_6321_;
}
else
{
lean_inc(v_a_6320_);
lean_dec(v___x_6279_);
v___x_6322_ = lean_box(0);
v_isShared_6323_ = v_isSharedCheck_6327_;
goto v_resetjp_6321_;
}
v_resetjp_6321_:
{
lean_object* v___x_6325_; 
if (v_isShared_6323_ == 0)
{
v___x_6325_ = v___x_6322_;
goto v_reusejp_6324_;
}
else
{
lean_object* v_reuseFailAlloc_6326_; 
v_reuseFailAlloc_6326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6326_, 0, v_a_6320_);
v___x_6325_ = v_reuseFailAlloc_6326_;
goto v_reusejp_6324_;
}
v_reusejp_6324_:
{
return v___x_6325_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2____boxed(lean_object* v___x_6328_, lean_object* v___x_6329_, lean_object* v___x_6330_, lean_object* v_declName_6331_, lean_object* v_stx_6332_, lean_object* v_kind_6333_, lean_object* v___y_6334_, lean_object* v___y_6335_, lean_object* v___y_6336_){
_start:
{
uint8_t v_kind_boxed_6337_; lean_object* v_res_6338_; 
v_kind_boxed_6337_ = lean_unbox(v_kind_6333_);
v_res_6338_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(v___x_6328_, v___x_6329_, v___x_6330_, v_declName_6331_, v_stx_6332_, v_kind_boxed_6337_, v___y_6334_, v___y_6335_);
lean_dec(v___y_6335_);
lean_dec_ref(v___y_6334_);
lean_dec(v_stx_6332_);
return v_res_6338_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6340_; lean_object* v___x_6341_; 
v___x_6340_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_));
v___x_6341_ = l_Lean_stringToMessageData(v___x_6340_);
return v___x_6341_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6343_; lean_object* v___x_6344_; 
v___x_6343_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_));
v___x_6344_ = l_Lean_stringToMessageData(v___x_6343_);
return v___x_6344_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(lean_object* v___x_6345_, lean_object* v_decl_6346_, lean_object* v___y_6347_, lean_object* v___y_6348_){
_start:
{
lean_object* v___x_6350_; lean_object* v___x_6351_; lean_object* v___x_6352_; lean_object* v___x_6353_; lean_object* v___x_6354_; lean_object* v___x_6355_; 
v___x_6350_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_);
v___x_6351_ = l_Lean_MessageData_ofName(v___x_6345_);
v___x_6352_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6352_, 0, v___x_6350_);
lean_ctor_set(v___x_6352_, 1, v___x_6351_);
v___x_6353_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_);
v___x_6354_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6354_, 0, v___x_6352_);
lean_ctor_set(v___x_6354_, 1, v___x_6353_);
v___x_6355_ = l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg(v___x_6354_, v___y_6347_, v___y_6348_);
return v___x_6355_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2____boxed(lean_object* v___x_6356_, lean_object* v_decl_6357_, lean_object* v___y_6358_, lean_object* v___y_6359_, lean_object* v___y_6360_){
_start:
{
lean_object* v_res_6361_; 
v_res_6361_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(v___x_6356_, v_decl_6357_, v___y_6358_, v___y_6359_);
lean_dec(v___y_6359_);
lean_dec_ref(v___y_6358_);
lean_dec(v_decl_6357_);
return v_res_6361_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_6394_; lean_object* v___x_6395_; lean_object* v___x_6396_; 
v___x_6394_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_));
v___x_6395_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_));
v___x_6396_ = l_Lean_registerBuiltinAttribute(v___x_6395_);
if (lean_obj_tag(v___x_6396_) == 0)
{
lean_object* v___x_6397_; uint8_t v___x_6398_; lean_object* v___x_6399_; 
lean_dec_ref_known(v___x_6396_, 1);
v___x_6397_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__1));
v___x_6398_ = 0;
v___x_6399_ = l_Lean_registerTraceClass(v___x_6397_, v___x_6398_, v___x_6394_);
return v___x_6399_;
}
else
{
return v___x_6396_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2____boxed(lean_object* v_a_6400_){
_start:
{
lean_object* v_res_6401_; 
v_res_6401_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_();
return v_res_6401_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b1_6402_, lean_object* v_name_6403_, uint8_t v_kind_6404_, lean_object* v___y_6405_, lean_object* v___y_6406_){
_start:
{
lean_object* v___x_6408_; 
v___x_6408_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg(v_name_6403_, v_kind_6404_, v___y_6405_, v___y_6406_);
return v___x_6408_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b1_6409_, lean_object* v_name_6410_, lean_object* v_kind_6411_, lean_object* v___y_6412_, lean_object* v___y_6413_, lean_object* v___y_6414_){
_start:
{
uint8_t v_kind_boxed_6415_; lean_object* v_res_6416_; 
v_kind_boxed_6415_ = lean_unbox(v_kind_6411_);
v_res_6416_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0(v_00_u03b1_6409_, v_name_6410_, v_kind_boxed_6415_, v___y_6412_, v___y_6413_);
lean_dec(v___y_6413_);
lean_dec_ref(v___y_6412_);
return v_res_6416_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstancesPriorities___redArg___lam__0(lean_object* v___x_6417_, lean_object* v_toPure_6418_, lean_object* v_____do__lift_6419_){
_start:
{
lean_object* v___x_6420_; lean_object* v_toEnvExtension_6421_; lean_object* v_asyncMode_6422_; lean_object* v___x_6423_; lean_object* v___x_6424_; lean_object* v_priorities_6425_; lean_object* v___x_6426_; 
v___x_6420_ = l_Lean_Meta_defaultInstanceExtension;
v_toEnvExtension_6421_ = lean_ctor_get(v___x_6420_, 0);
v_asyncMode_6422_ = lean_ctor_get(v_toEnvExtension_6421_, 2);
v___x_6423_ = lean_box(0);
v___x_6424_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_6417_, v___x_6420_, v_____do__lift_6419_, v_asyncMode_6422_, v___x_6423_);
v_priorities_6425_ = lean_ctor_get(v___x_6424_, 1);
lean_inc(v_priorities_6425_);
lean_dec(v___x_6424_);
v___x_6426_ = lean_apply_2(v_toPure_6418_, lean_box(0), v_priorities_6425_);
return v___x_6426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstancesPriorities___redArg(lean_object* v_inst_6427_, lean_object* v_inst_6428_){
_start:
{
lean_object* v_toApplicative_6429_; lean_object* v_toBind_6430_; lean_object* v_getEnv_6431_; lean_object* v_toPure_6432_; lean_object* v___x_6433_; lean_object* v___f_6434_; lean_object* v___x_6435_; 
v_toApplicative_6429_ = lean_ctor_get(v_inst_6427_, 0);
lean_inc_ref(v_toApplicative_6429_);
v_toBind_6430_ = lean_ctor_get(v_inst_6427_, 1);
lean_inc(v_toBind_6430_);
lean_dec_ref(v_inst_6427_);
v_getEnv_6431_ = lean_ctor_get(v_inst_6428_, 0);
lean_inc(v_getEnv_6431_);
lean_dec_ref(v_inst_6428_);
v_toPure_6432_ = lean_ctor_get(v_toApplicative_6429_, 1);
lean_inc(v_toPure_6432_);
lean_dec_ref(v_toApplicative_6429_);
v___x_6433_ = ((lean_object*)(l_Lean_Meta_instInhabitedDefaultInstances_default));
v___f_6434_ = lean_alloc_closure((void*)(l_Lean_Meta_getDefaultInstancesPriorities___redArg___lam__0), 3, 2);
lean_closure_set(v___f_6434_, 0, v___x_6433_);
lean_closure_set(v___f_6434_, 1, v_toPure_6432_);
v___x_6435_ = lean_apply_4(v_toBind_6430_, lean_box(0), lean_box(0), v_getEnv_6431_, v___f_6434_);
return v___x_6435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstancesPriorities(lean_object* v_m_6436_, lean_object* v_inst_6437_, lean_object* v_inst_6438_){
_start:
{
lean_object* v___x_6439_; 
v___x_6439_ = l_Lean_Meta_getDefaultInstancesPriorities___redArg(v_inst_6437_, v_inst_6438_);
return v___x_6439_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_getDefaultInstances___redArg___lam__0(lean_object* v_env_6440_, uint8_t v_isExporting_6441_, lean_object* v_x_6442_){
_start:
{
lean_object* v_fst_6443_; uint8_t v___x_6444_; 
v_fst_6443_ = lean_ctor_get(v_x_6442_, 0);
lean_inc(v_fst_6443_);
lean_dec_ref(v_x_6442_);
v___x_6444_ = l_Lean_Environment_contains(v_env_6440_, v_fst_6443_, v_isExporting_6441_);
return v___x_6444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___redArg___lam__0___boxed(lean_object* v_env_6445_, lean_object* v_isExporting_6446_, lean_object* v_x_6447_){
_start:
{
uint8_t v_isExporting_boxed_6448_; uint8_t v_res_6449_; lean_object* v_r_6450_; 
v_isExporting_boxed_6448_ = lean_unbox(v_isExporting_6446_);
v_res_6449_ = l_Lean_Meta_getDefaultInstances___redArg___lam__0(v_env_6445_, v_isExporting_boxed_6448_, v_x_6447_);
v_r_6450_ = lean_box(v_res_6449_);
return v_r_6450_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___redArg___lam__1(lean_object* v___x_6451_, lean_object* v_toPure_6452_, lean_object* v_className_6453_, lean_object* v_env_6454_){
_start:
{
lean_object* v___y_6456_; lean_object* v___x_6464_; lean_object* v_toEnvExtension_6465_; lean_object* v_asyncMode_6466_; lean_object* v___x_6467_; lean_object* v___x_6468_; lean_object* v_defaultInstances_6469_; lean_object* v___x_6470_; 
v___x_6464_ = l_Lean_Meta_defaultInstanceExtension;
v_toEnvExtension_6465_ = lean_ctor_get(v___x_6464_, 0);
v_asyncMode_6466_ = lean_ctor_get(v_toEnvExtension_6465_, 2);
v___x_6467_ = lean_box(0);
lean_inc_ref(v_env_6454_);
v___x_6468_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_6451_, v___x_6464_, v_env_6454_, v_asyncMode_6466_, v___x_6467_);
v_defaultInstances_6469_ = lean_ctor_get(v___x_6468_, 0);
lean_inc(v_defaultInstances_6469_);
lean_dec(v___x_6468_);
v___x_6470_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_defaultInstances_6469_, v_className_6453_);
lean_dec(v_defaultInstances_6469_);
if (lean_obj_tag(v___x_6470_) == 0)
{
lean_object* v___x_6471_; 
v___x_6471_ = lean_box(0);
v___y_6456_ = v___x_6471_;
goto v___jp_6455_;
}
else
{
lean_object* v_val_6472_; 
v_val_6472_ = lean_ctor_get(v___x_6470_, 0);
lean_inc(v_val_6472_);
lean_dec_ref_known(v___x_6470_, 1);
v___y_6456_ = v_val_6472_;
goto v___jp_6455_;
}
v___jp_6455_:
{
uint8_t v_isExporting_6457_; 
v_isExporting_6457_ = lean_ctor_get_uint8(v_env_6454_, sizeof(void*)*13);
if (v_isExporting_6457_ == 0)
{
lean_object* v___x_6458_; 
lean_dec_ref(v_env_6454_);
v___x_6458_ = lean_apply_2(v_toPure_6452_, lean_box(0), v___y_6456_);
return v___x_6458_;
}
else
{
lean_object* v___x_6459_; lean_object* v___f_6460_; lean_object* v___x_6461_; lean_object* v___x_6462_; lean_object* v___x_6463_; 
v___x_6459_ = lean_box(v_isExporting_6457_);
v___f_6460_ = lean_alloc_closure((void*)(l_Lean_Meta_getDefaultInstances___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_6460_, 0, v_env_6454_);
lean_closure_set(v___f_6460_, 1, v___x_6459_);
v___x_6461_ = lean_box(0);
v___x_6462_ = l_List_filterTR_loop___redArg(v___f_6460_, v___y_6456_, v___x_6461_);
v___x_6463_ = lean_apply_2(v_toPure_6452_, lean_box(0), v___x_6462_);
return v___x_6463_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___redArg___lam__1___boxed(lean_object* v___x_6473_, lean_object* v_toPure_6474_, lean_object* v_className_6475_, lean_object* v_env_6476_){
_start:
{
lean_object* v_res_6477_; 
v_res_6477_ = l_Lean_Meta_getDefaultInstances___redArg___lam__1(v___x_6473_, v_toPure_6474_, v_className_6475_, v_env_6476_);
lean_dec(v_className_6475_);
return v_res_6477_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___redArg(lean_object* v_inst_6478_, lean_object* v_inst_6479_, lean_object* v_className_6480_){
_start:
{
lean_object* v_toApplicative_6481_; lean_object* v_toBind_6482_; lean_object* v_getEnv_6483_; lean_object* v_toPure_6484_; lean_object* v___x_6485_; lean_object* v___f_6486_; lean_object* v___x_6487_; 
v_toApplicative_6481_ = lean_ctor_get(v_inst_6478_, 0);
lean_inc_ref(v_toApplicative_6481_);
v_toBind_6482_ = lean_ctor_get(v_inst_6478_, 1);
lean_inc(v_toBind_6482_);
lean_dec_ref(v_inst_6478_);
v_getEnv_6483_ = lean_ctor_get(v_inst_6479_, 0);
lean_inc(v_getEnv_6483_);
lean_dec_ref(v_inst_6479_);
v_toPure_6484_ = lean_ctor_get(v_toApplicative_6481_, 1);
lean_inc(v_toPure_6484_);
lean_dec_ref(v_toApplicative_6481_);
v___x_6485_ = ((lean_object*)(l_Lean_Meta_instInhabitedDefaultInstances_default));
v___f_6486_ = lean_alloc_closure((void*)(l_Lean_Meta_getDefaultInstances___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_6486_, 0, v___x_6485_);
lean_closure_set(v___f_6486_, 1, v_toPure_6484_);
lean_closure_set(v___f_6486_, 2, v_className_6480_);
v___x_6487_ = lean_apply_4(v_toBind_6482_, lean_box(0), lean_box(0), v_getEnv_6483_, v___f_6486_);
return v___x_6487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances(lean_object* v_m_6488_, lean_object* v_inst_6489_, lean_object* v_inst_6490_, lean_object* v_className_6491_){
_start:
{
lean_object* v___x_6492_; 
v___x_6492_ = l_Lean_Meta_getDefaultInstances___redArg(v_inst_6489_, v_inst_6490_, v_className_6491_);
return v___x_6492_;
}
}
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Stream(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_DiscrTree_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_CollectMVars(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_PPBinder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_UnusedBinders(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_CollectFVars(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
lean_object* runtime_initialize_Lean_OriginalConstKind(uint8_t builtin);
lean_object* runtime_initialize_Lean_ProjFns(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Instances(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Range_Polymorphic_Stream(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_DiscrTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_CollectMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_PPBinder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_UnusedBinders(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_OriginalConstKind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ProjFns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_synthInstance_checkSynthOrder = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_synthInstance_checkSynthOrder);
lean_dec_ref(res);
l_Lean_Meta_instInhabitedInstanceEntry_default = _init_l_Lean_Meta_instInhabitedInstanceEntry_default();
lean_mark_persistent(l_Lean_Meta_instInhabitedInstanceEntry_default);
l_Lean_Meta_instInhabitedInstanceEntry = _init_l_Lean_Meta_instInhabitedInstanceEntry();
lean_mark_persistent(l_Lean_Meta_instInhabitedInstanceEntry);
l_Lean_Meta_instInhabitedInstances_default = _init_l_Lean_Meta_instInhabitedInstances_default();
lean_mark_persistent(l_Lean_Meta_instInhabitedInstances_default);
l_Lean_Meta_instInhabitedInstances = _init_l_Lean_Meta_instInhabitedInstances();
lean_mark_persistent(l_Lean_Meta_instInhabitedInstances);
res = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_instanceExtension = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_instanceExtension);
lean_dec_ref(res);
res = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_defaultInstanceExtension = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_defaultInstanceExtension);
lean_dec_ref(res);
res = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Instances(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Range_Polymorphic_Stream(uint8_t builtin);
lean_object* initialize_Lean_Meta_DiscrTree_Main(uint8_t builtin);
lean_object* initialize_Lean_Meta_CollectMVars(uint8_t builtin);
lean_object* initialize_Lean_Meta_PPBinder(uint8_t builtin);
lean_object* initialize_Lean_Util_UnusedBinders(uint8_t builtin);
lean_object* initialize_Lean_Meta_CollectFVars(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
lean_object* initialize_Lean_OriginalConstKind(uint8_t builtin);
lean_object* initialize_Lean_ProjFns(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Instances(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Range_Polymorphic_Stream(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_DiscrTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_CollectMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_PPBinder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_UnusedBinders(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_OriginalConstKind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ProjFns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Instances(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Instances(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Instances(builtin);
}
#ifdef __cplusplus
}
#endif
