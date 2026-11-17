// Lean compiler output
// Module: Lean.Meta.Eqns
// Imports: public import Lean.Meta.Match.MatcherInfo public import Lean.DefEqAttrib public import Lean.Meta.RecExt public import Lean.Meta.LetToHave import Lean.Meta.AppBuilder
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerEnvExtension___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Meta_isMatcherCore(lean_object*, lean_object*);
lean_object* lean_task_get_own(lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_hasExposedBody(lean_object*, lean_object*);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t l_Lean_Environment_containsOnBranch(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_st_mk_ref(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
uint8_t l_String_Slice_isNat(lean_object*);
lean_object* l_Lean_privateToUserName(lean_object*);
uint8_t l_Lean_Environment_isSafeDefinition(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isRecursiveDefinition___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_letToHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_inferDefEqAttr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint16_t lean_uint16_land(uint16_t, uint16_t);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint16_t l_Lean_OptionFlags_ofOptions(lean_object*);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* l_Lean_mkMapDeclarationExtension___redArg(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
extern lean_object* l_Lean_backward_defeqAttrib_useBackward;
lean_object* l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(lean_object*);
lean_object* l_Lean_Meta_realizeConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
double lean_float_div(double, double);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_io_mono_nanos_now();
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_registerReservedNameAction(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_registerReservedNamePredicate(lean_object*);
uint8_t l_Lean_initializing();
lean_object* lean_mk_io_user_error(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "backward"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "eqns"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "nonrecursive"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(77, 196, 98, 49, 58, 220, 29, 220)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(235, 23, 21, 28, 3, 196, 180, 100)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(1, 23, 146, 109, 99, 186, 103, 88)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "Create fine-grained equational lemmas even for non-recursive definitions."};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "2026-03-30"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(32, 38, 242, 87, 165, 12, 140, 145)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(122, 217, 222, 73, 223, 67, 131, 25)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(156, 7, 83, 198, 209, 69, 31, 191)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_backward_eqns_nonrecursive;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "deepRecursiveSplit"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(77, 196, 98, 49, 58, 220, 29, 220)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(235, 23, 21, 28, 3, 196, 180, 100)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(167, 67, 13, 105, 163, 80, 199, 218)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 339, .m_capacity = 339, .m_length = 338, .m_data = "Create equational lemmas for recursive functions like for non-recursive functions. If disabled, match statements in recursive function definitions that do not contain recursive calls do not cause further splits in the equational lemmas. This was the behavior before Lean 4.12, and the purpose of this option is to help migrating old code."};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(32, 38, 242, 87, 165, 12, 140, 145)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(122, 217, 222, 73, 223, 67, 131, 25)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(226, 35, 35, 130, 249, 93, 79, 68)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_backward_eqns_deepRecursiveSplit;
static lean_once_cell_t l_Lean_Meta_eqnAffectingOptions___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_eqnAffectingOptions___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_eqnAffectingOptions;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value;
static const lean_array_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "eqnOptionsExt"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(22, 76, 144, 60, 245, 252, 84, 163)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_eqnOptionsExt;
static const lean_string_object l_Lean_Meta_eqnThmSuffixBase___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "eq"};
static const lean_object* l_Lean_Meta_eqnThmSuffixBase___closed__0 = (const lean_object*)&l_Lean_Meta_eqnThmSuffixBase___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_eqnThmSuffixBase = (const lean_object*)&l_Lean_Meta_eqnThmSuffixBase___closed__0_value;
static const lean_string_object l_Lean_Meta_eqnThmSuffixBasePrefix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "eq_"};
static const lean_object* l_Lean_Meta_eqnThmSuffixBasePrefix___closed__0 = (const lean_object*)&l_Lean_Meta_eqnThmSuffixBasePrefix___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_eqnThmSuffixBasePrefix = (const lean_object*)&l_Lean_Meta_eqnThmSuffixBasePrefix___closed__0_value;
static const lean_string_object l_Lean_Meta_eqn1ThmSuffix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "eq_1"};
static const lean_object* l_Lean_Meta_eqn1ThmSuffix___closed__0 = (const lean_object*)&l_Lean_Meta_eqn1ThmSuffix___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_eqn1ThmSuffix = (const lean_object*)&l_Lean_Meta_eqn1ThmSuffix___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Meta_isEqnReservedNameSuffix(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnReservedNameSuffix___boxed(lean_object*);
static const lean_string_object l_Lean_Meta_unfoldThmSuffix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "eq_def"};
static const lean_object* l_Lean_Meta_unfoldThmSuffix___closed__0 = (const lean_object*)&l_Lean_Meta_unfoldThmSuffix___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_unfoldThmSuffix = (const lean_object*)&l_Lean_Meta_unfoldThmSuffix___closed__0_value;
static const lean_string_object l_Lean_Meta_eqUnfoldThmSuffix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "eq_unfold"};
static const lean_object* l_Lean_Meta_eqUnfoldThmSuffix___closed__0 = (const lean_object*)&l_Lean_Meta_eqUnfoldThmSuffix___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_eqUnfoldThmSuffix = (const lean_object*)&l_Lean_Meta_eqUnfoldThmSuffix___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Meta_isEqnLikeSuffix(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnLikeSuffix___boxed(lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_declFromEqLikeName(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqLikeNameFor(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "failed to declare `"};
static const lean_object* l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__1;
static const lean_string_object l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "` because `"};
static const lean_object* l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__3;
static const lean_string_object l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "` has already been declared"};
static const lean_object* l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__4_value;
static lean_once_cell_t l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ensureEqnReservedNamesAvailable(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ensureEqnReservedNamesAvailable___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3508565914____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3508565914____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFnsRef;
static const lean_string_object l_Lean_Meta_registerGetEqnsFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 104, .m_capacity = 104, .m_length = 103, .m_data = "failed to register equation getter, this kind of extension can only be registered during initialization"};
static const lean_object* l_Lean_Meta_registerGetEqnsFn___closed__0 = (const lean_object*)&l_Lean_Meta_registerGetEqnsFn___closed__0_value;
static lean_once_cell_t l_Lean_Meta_registerGetEqnsFn___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_registerGetEqnsFn___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_registerGetEqnsFn(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_registerGetEqnsFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_shouldGenerateEqnThms(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_shouldGenerateEqnThms___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_instInhabitedEqnsExtState_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedEqnsExtState_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedEqnsExtState_default;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedEqnsExtState;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_222358314____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_222358314____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_222358314____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_222358314____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_222358314____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "eqnsExt"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_222358314____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_222358314____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_222358314____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_222358314____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_222358314____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_222358314____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_222358314____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_222358314____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(145, 82, 168, 170, 186, 217, 249, 198)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_222358314____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_222358314____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_222358314____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_222358314____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_eqnsExt;
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__2___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withEqnOptions_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withEqnOptions_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_withEqnOptions___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_withEqnOptions___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_withEqnOptions___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_withEqnOptions___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_withEqnOptions___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_withEqnOptions___redArg___closed__2;
static lean_once_cell_t l_Lean_Meta_withEqnOptions___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lean_Meta_withEqnOptions___redArg___closed__3;
static lean_once_cell_t l_Lean_Meta_withEqnOptions___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_Meta_withEqnOptions___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_withEqnOptions___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withEqnOptions___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withEqnOptions(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withEqnOptions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkSimpleEqThm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkSimpleEqThm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__3___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lean.Meta.Eqns"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__2___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "_private.Lean.Meta.Eqns.0.Lean.Meta.registerEqnThms"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__2___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "equation theorem `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__2___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "` is already registered for `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__2___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__2___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__2___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__2___closed__4_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__3(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_alreadyGenerated_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_alreadyGenerated_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_alreadyGenerated_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_alreadyGenerated_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1;
static const lean_array_object l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__2 = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getEqnsFor_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getEqnsFor_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_saveEqnAffectingOptions_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_saveEqnAffectingOptions_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_saveEqnAffectingOptions_spec__2_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_saveEqnAffectingOptions_spec__2_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_saveEqnAffectingOptions_spec__2_spec__2___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_saveEqnAffectingOptions_spec__2_spec__2___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__3___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__3___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__3___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__3___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__3___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_saveEqnAffectingOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_saveEqnAffectingOptions___closed__0 = (const lean_object*)&l_Lean_Meta_saveEqnAffectingOptions___closed__0_value;
static lean_once_cell_t l_Lean_Meta_saveEqnAffectingOptions___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_Meta_saveEqnAffectingOptions___closed__1;
static lean_once_cell_t l_Lean_Meta_saveEqnAffectingOptions___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_saveEqnAffectingOptions___closed__2;
static lean_once_cell_t l_Lean_Meta_saveEqnAffectingOptions___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_saveEqnAffectingOptions___closed__3;
static lean_once_cell_t l_Lean_Meta_saveEqnAffectingOptions___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_saveEqnAffectingOptions___closed__4;
static lean_once_cell_t l_Lean_Meta_saveEqnAffectingOptions___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_saveEqnAffectingOptions___closed__5;
static const lean_string_object l_Lean_Meta_saveEqnAffectingOptions___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Meta_saveEqnAffectingOptions___closed__6 = (const lean_object*)&l_Lean_Meta_saveEqnAffectingOptions___closed__6_value;
static const lean_string_object l_Lean_Meta_saveEqnAffectingOptions___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lean_Meta_saveEqnAffectingOptions___closed__7 = (const lean_object*)&l_Lean_Meta_saveEqnAffectingOptions___closed__7_value;
static const lean_ctor_object l_Lean_Meta_saveEqnAffectingOptions___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_saveEqnAffectingOptions___closed__6_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l_Lean_Meta_saveEqnAffectingOptions___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_saveEqnAffectingOptions___closed__8_value_aux_0),((lean_object*)&l_Lean_Meta_saveEqnAffectingOptions___closed__7_value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_ctor_object l_Lean_Meta_saveEqnAffectingOptions___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_saveEqnAffectingOptions___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(209, 70, 141, 178, 157, 107, 140, 91)}};
static const lean_object* l_Lean_Meta_saveEqnAffectingOptions___closed__8 = (const lean_object*)&l_Lean_Meta_saveEqnAffectingOptions___closed__8_value;
static lean_once_cell_t l_Lean_Meta_saveEqnAffectingOptions___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_saveEqnAffectingOptions___closed__9;
static const lean_string_object l_Lean_Meta_saveEqnAffectingOptions___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "saving equation-affecting options for "};
static const lean_object* l_Lean_Meta_saveEqnAffectingOptions___closed__10 = (const lean_object*)&l_Lean_Meta_saveEqnAffectingOptions___closed__10_value;
static lean_once_cell_t l_Lean_Meta_saveEqnAffectingOptions___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_saveEqnAffectingOptions___closed__11;
LEAN_EXPORT lean_object* l_Lean_Meta_saveEqnAffectingOptions(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_saveEqnAffectingOptions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_saveEqnAffectingOptions_spec__2_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_saveEqnAffectingOptions_spec__2___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_saveEqnAffectingOptions_spec__2___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_saveEqnAffectingOptions_spec__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_408789758____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_408789758____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getUnfoldEqnFnsRef;
LEAN_EXPORT lean_object* l_Lean_Meta_registerGetUnfoldEqnFn(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_registerGetUnfoldEqnFn___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "invalid unfold theorem name `"};
static const lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__1;
static const lean_string_object l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "` has been generated expected `"};
static const lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__3;
static lean_once_cell_t l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lean.Meta.Eqns reserved name action for "};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__1;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__6_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "ReservedNameAction"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__6_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__6_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__7_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__6_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(111, 245, 189, 90, 36, 141, 82, 229)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__7_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__7_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__8_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__8_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__9_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__9_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed, .m_arity = 6, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Eqns"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(122, 217, 145, 26, 133, 108, 104, 10)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(27, 2, 5, 79, 97, 142, 74, 217)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(38, 112, 146, 108, 241, 250, 100, 162)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(98, 0, 196, 176, 89, 93, 16, 10)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(87, 31, 160, 103, 40, 58, 110, 116)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(18, 147, 153, 14, 107, 3, 39, 172)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(19, 114, 185, 94, 205, 199, 191, 156)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(155, 255, 177, 29, 188, 255, 188, 249)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(227, 48, 196, 25, 136, 122, 168, 47)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
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
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_62_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_));
v___x_63_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_));
v___x_64_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_));
v___x_65_ = l_Lean_Option_register___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__spec__0(v___x_62_, v___x_63_, v___x_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4____boxed(lean_object* v_a_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_();
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_86_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_));
v___x_87_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_));
v___x_88_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_));
v___x_89_ = l_Lean_Option_register___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__spec__0(v___x_86_, v___x_87_, v___x_88_);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4____boxed(lean_object* v_a_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_();
return v_res_91_;
}
}
static lean_object* _init_l_Lean_Meta_eqnAffectingOptions___closed__0(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_92_ = l_Lean_backward_defeqAttrib_useBackward;
v___x_93_ = l_Lean_Meta_backward_eqns_deepRecursiveSplit;
v___x_94_ = l_Lean_Meta_backward_eqns_nonrecursive;
v___x_95_ = lean_unsigned_to_nat(3u);
v___x_96_ = lean_mk_empty_array_with_capacity(v___x_95_);
v___x_97_ = lean_array_push(v___x_96_, v___x_94_);
v___x_98_ = lean_array_push(v___x_97_, v___x_93_);
v___x_99_ = lean_array_push(v___x_98_, v___x_92_);
return v___x_99_;
}
}
static lean_object* _init_l_Lean_Meta_eqnAffectingOptions(void){
_start:
{
lean_object* v___x_100_; 
v___x_100_ = lean_obj_once(&l_Lean_Meta_eqnAffectingOptions___closed__0, &l_Lean_Meta_eqnAffectingOptions___closed__0_once, _init_l_Lean_Meta_eqnAffectingOptions___closed__0);
return v___x_100_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__1(lean_object* v_env_101_, lean_object* v_as_102_, size_t v_i_103_, size_t v_stop_104_, lean_object* v_b_105_){
_start:
{
lean_object* v___y_107_; uint8_t v___x_111_; 
v___x_111_ = lean_usize_dec_eq(v_i_103_, v_stop_104_);
if (v___x_111_ == 0)
{
lean_object* v___x_112_; lean_object* v_fst_113_; uint8_t v___x_114_; lean_object* v___x_115_; uint8_t v___x_116_; 
v___x_112_ = lean_array_uget_borrowed(v_as_102_, v_i_103_);
v_fst_113_ = lean_ctor_get(v___x_112_, 0);
v___x_114_ = 1;
lean_inc_ref(v_env_101_);
v___x_115_ = l_Lean_Environment_setExporting(v_env_101_, v___x_114_);
lean_inc(v_fst_113_);
v___x_116_ = l_Lean_Environment_contains(v___x_115_, v_fst_113_, v___x_111_);
if (v___x_116_ == 0)
{
v___y_107_ = v_b_105_;
goto v___jp_106_;
}
else
{
lean_object* v___x_117_; 
lean_inc(v___x_112_);
v___x_117_ = lean_array_push(v_b_105_, v___x_112_);
v___y_107_ = v___x_117_;
goto v___jp_106_;
}
}
else
{
lean_dec_ref(v_env_101_);
return v_b_105_;
}
v___jp_106_:
{
size_t v___x_108_; size_t v___x_109_; 
v___x_108_ = ((size_t)1ULL);
v___x_109_ = lean_usize_add(v_i_103_, v___x_108_);
v_i_103_ = v___x_109_;
v_b_105_ = v___y_107_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__1___boxed(lean_object* v_env_118_, lean_object* v_as_119_, lean_object* v_i_120_, lean_object* v_stop_121_, lean_object* v_b_122_){
_start:
{
size_t v_i_boxed_123_; size_t v_stop_boxed_124_; lean_object* v_res_125_; 
v_i_boxed_123_ = lean_unbox_usize(v_i_120_);
lean_dec(v_i_120_);
v_stop_boxed_124_ = lean_unbox_usize(v_stop_121_);
lean_dec(v_stop_121_);
v_res_125_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__1(v_env_118_, v_as_119_, v_i_boxed_123_, v_stop_boxed_124_, v_b_122_);
lean_dec_ref(v_as_119_);
return v_res_125_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_init_126_, lean_object* v_x_127_){
_start:
{
if (lean_obj_tag(v_x_127_) == 0)
{
lean_object* v_k_128_; lean_object* v_v_129_; lean_object* v_l_130_; lean_object* v_r_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
v_k_128_ = lean_ctor_get(v_x_127_, 1);
v_v_129_ = lean_ctor_get(v_x_127_, 2);
v_l_130_ = lean_ctor_get(v_x_127_, 3);
v_r_131_ = lean_ctor_get(v_x_127_, 4);
v___x_132_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0_spec__0(v_init_126_, v_l_130_);
lean_inc(v_v_129_);
lean_inc(v_k_128_);
v___x_133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_133_, 0, v_k_128_);
lean_ctor_set(v___x_133_, 1, v_v_129_);
v___x_134_ = lean_array_push(v___x_132_, v___x_133_);
v_init_126_ = v___x_134_;
v_x_127_ = v_r_131_;
goto _start;
}
else
{
return v_init_126_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_init_136_, lean_object* v_x_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0_spec__0(v_init_136_, v_x_137_);
lean_dec(v_x_137_);
return v_res_138_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__2(lean_object* v_env_139_, lean_object* v_as_140_, size_t v_i_141_, size_t v_stop_142_, lean_object* v_b_143_){
_start:
{
lean_object* v___y_145_; uint8_t v___x_149_; 
v___x_149_ = lean_usize_dec_eq(v_i_141_, v_stop_142_);
if (v___x_149_ == 0)
{
lean_object* v___x_150_; lean_object* v_fst_151_; uint8_t v___x_152_; 
v___x_150_ = lean_array_uget_borrowed(v_as_140_, v_i_141_);
v_fst_151_ = lean_ctor_get(v___x_150_, 0);
lean_inc(v_fst_151_);
lean_inc_ref(v_env_139_);
v___x_152_ = l_Lean_Environment_contains(v_env_139_, v_fst_151_, v___x_149_);
if (v___x_152_ == 0)
{
v___y_145_ = v_b_143_;
goto v___jp_144_;
}
else
{
lean_object* v___x_153_; 
lean_inc(v___x_150_);
v___x_153_ = lean_array_push(v_b_143_, v___x_150_);
v___y_145_ = v___x_153_;
goto v___jp_144_;
}
}
else
{
lean_dec_ref(v_env_139_);
return v_b_143_;
}
v___jp_144_:
{
size_t v___x_146_; size_t v___x_147_; 
v___x_146_ = ((size_t)1ULL);
v___x_147_ = lean_usize_add(v_i_141_, v___x_146_);
v_i_141_ = v___x_147_;
v_b_143_ = v___y_145_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__2___boxed(lean_object* v_env_154_, lean_object* v_as_155_, lean_object* v_i_156_, lean_object* v_stop_157_, lean_object* v_b_158_){
_start:
{
size_t v_i_boxed_159_; size_t v_stop_boxed_160_; lean_object* v_res_161_; 
v_i_boxed_159_ = lean_unbox_usize(v_i_156_);
lean_dec(v_i_156_);
v_stop_boxed_160_ = lean_unbox_usize(v_stop_157_);
lean_dec(v_stop_157_);
v_res_161_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__2(v_env_154_, v_as_155_, v_i_boxed_159_, v_stop_boxed_160_, v_b_158_);
lean_dec_ref(v_as_155_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_(lean_object* v_env_166_, lean_object* v_s_167_){
_start:
{
lean_object* v___x_168_; lean_object* v___y_170_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; uint8_t v___x_183_; 
v___x_168_ = lean_unsigned_to_nat(0u);
v___x_179_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_));
v___x_180_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0_spec__0(v___x_179_, v_s_167_);
v___x_181_ = lean_array_get_size(v___x_180_);
v___x_182_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_));
v___x_183_ = lean_nat_dec_lt(v___x_168_, v___x_181_);
if (v___x_183_ == 0)
{
lean_dec_ref(v___x_180_);
v___y_170_ = v___x_182_;
goto v___jp_169_;
}
else
{
size_t v___x_184_; size_t v___x_185_; lean_object* v___x_186_; 
v___x_184_ = ((size_t)0ULL);
v___x_185_ = lean_usize_of_nat(v___x_181_);
lean_inc_ref(v_env_166_);
v___x_186_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__2(v_env_166_, v___x_180_, v___x_184_, v___x_185_, v___x_182_);
lean_dec_ref(v___x_180_);
v___y_170_ = v___x_186_;
goto v___jp_169_;
}
v___jp_169_:
{
lean_object* v___x_171_; lean_object* v___x_172_; uint8_t v___x_173_; 
v___x_171_ = lean_array_get_size(v___y_170_);
v___x_172_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_));
v___x_173_ = lean_nat_dec_lt(v___x_168_, v___x_171_);
if (v___x_173_ == 0)
{
lean_object* v___x_174_; 
lean_dec_ref(v_env_166_);
v___x_174_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_174_, 0, v___x_172_);
lean_ctor_set(v___x_174_, 1, v___x_172_);
lean_ctor_set(v___x_174_, 2, v___y_170_);
return v___x_174_;
}
else
{
size_t v___x_175_; size_t v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_175_ = ((size_t)0ULL);
v___x_176_ = lean_usize_of_nat(v___x_171_);
v___x_177_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__1(v_env_166_, v___y_170_, v___x_175_, v___x_176_, v___x_172_);
lean_inc_ref(v___x_177_);
v___x_178_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_178_, 0, v___x_177_);
lean_ctor_set(v___x_178_, 1, v___x_177_);
lean_ctor_set(v___x_178_, 2, v___y_170_);
return v___x_178_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2____boxed(lean_object* v_env_187_, lean_object* v_s_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_(v_env_187_, v_s_188_);
lean_dec(v_s_188_);
return v_res_189_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_197_; lean_object* v___x_198_; lean_object* v___x_199_; uint8_t v___x_200_; lean_object* v___x_201_; 
v___f_197_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_));
v___x_198_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_));
v___x_199_ = lean_box(1);
v___x_200_ = 0;
v___x_201_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_198_, v___x_199_, v___x_200_, v___f_197_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2____boxed(lean_object* v_a_202_){
_start:
{
lean_object* v_res_203_; 
v_res_203_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_();
return v_res_203_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0(lean_object* v_init_204_, lean_object* v_t_205_){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0_spec__0(v_init_204_, v_t_205_);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0___boxed(lean_object* v_init_207_, lean_object* v_t_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0(v_init_207_, v_t_208_);
lean_dec(v_t_208_);
return v_res_209_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_isEqnReservedNameSuffix(lean_object* v_s_216_){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; uint8_t v___x_219_; 
v___x_217_ = lean_string_utf8_byte_size(v_s_216_);
v___x_218_ = lean_unsigned_to_nat(3u);
v___x_219_ = lean_nat_dec_le(v___x_218_, v___x_217_);
if (v___x_219_ == 0)
{
lean_dec_ref(v_s_216_);
return v___x_219_;
}
else
{
lean_object* v___x_220_; lean_object* v___x_221_; uint8_t v___x_222_; 
v___x_220_ = ((lean_object*)(l_Lean_Meta_eqnThmSuffixBasePrefix___closed__0));
v___x_221_ = lean_unsigned_to_nat(0u);
v___x_222_ = lean_string_memcmp(v_s_216_, v___x_220_, v___x_221_, v___x_221_, v___x_218_);
if (v___x_222_ == 0)
{
lean_dec_ref(v_s_216_);
return v___x_222_;
}
else
{
lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; uint8_t v___x_226_; 
lean_inc_ref(v_s_216_);
v___x_223_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_223_, 0, v_s_216_);
lean_ctor_set(v___x_223_, 1, v___x_221_);
lean_ctor_set(v___x_223_, 2, v___x_217_);
v___x_224_ = l_String_Slice_Pos_nextn(v___x_223_, v___x_221_, v___x_218_);
lean_dec_ref_known(v___x_223_, 3);
v___x_225_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_225_, 0, v_s_216_);
lean_ctor_set(v___x_225_, 1, v___x_224_);
lean_ctor_set(v___x_225_, 2, v___x_217_);
v___x_226_ = l_String_Slice_isNat(v___x_225_);
lean_dec_ref_known(v___x_225_, 3);
return v___x_226_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnReservedNameSuffix___boxed(lean_object* v_s_227_){
_start:
{
uint8_t v_res_228_; lean_object* v_r_229_; 
v_res_228_ = l_Lean_Meta_isEqnReservedNameSuffix(v_s_227_);
v_r_229_ = lean_box(v_res_228_);
return v_r_229_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_isEqnLikeSuffix(lean_object* v_s_234_){
_start:
{
lean_object* v___x_235_; uint8_t v___x_236_; 
v___x_235_ = ((lean_object*)(l_Lean_Meta_unfoldThmSuffix___closed__0));
v___x_236_ = lean_string_dec_eq(v_s_234_, v___x_235_);
if (v___x_236_ == 0)
{
lean_object* v___x_237_; uint8_t v___x_238_; 
v___x_237_ = ((lean_object*)(l_Lean_Meta_eqUnfoldThmSuffix___closed__0));
v___x_238_ = lean_string_dec_eq(v_s_234_, v___x_237_);
if (v___x_238_ == 0)
{
uint8_t v___x_239_; 
v___x_239_ = l_Lean_Meta_isEqnReservedNameSuffix(v_s_234_);
return v___x_239_;
}
else
{
lean_dec_ref(v_s_234_);
return v___x_238_;
}
}
else
{
lean_dec_ref(v_s_234_);
return v___x_236_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnLikeSuffix___boxed(lean_object* v_s_240_){
_start:
{
uint8_t v_res_241_; lean_object* v_r_242_; 
v_res_241_ = l_Lean_Meta_isEqnLikeSuffix(v_s_240_);
v_r_242_ = lean_box(v_res_241_);
return v_r_242_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg(lean_object* v_env_246_, lean_object* v_str_247_, lean_object* v_as_x27_248_, lean_object* v_b_249_){
_start:
{
if (lean_obj_tag(v_as_x27_248_) == 0)
{
lean_dec_ref(v_str_247_);
lean_dec_ref(v_env_246_);
lean_inc_ref(v_b_249_);
return v_b_249_;
}
else
{
lean_object* v_head_250_; lean_object* v_tail_251_; lean_object* v___x_252_; lean_object* v___x_253_; uint8_t v___x_254_; lean_object* v___x_255_; uint8_t v___x_256_; 
v_head_250_ = lean_ctor_get(v_as_x27_248_, 0);
v_tail_251_ = lean_ctor_get(v_as_x27_248_, 1);
v___x_252_ = lean_box(0);
v___x_253_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg___closed__0));
v___x_254_ = 0;
lean_inc_ref(v_env_246_);
v___x_255_ = l_Lean_Environment_setExporting(v_env_246_, v___x_254_);
lean_inc(v_head_250_);
v___x_256_ = l_Lean_Environment_isSafeDefinition(v___x_255_, v_head_250_);
if (v___x_256_ == 0)
{
v_as_x27_248_ = v_tail_251_;
v_b_249_ = v___x_253_;
goto _start;
}
else
{
uint8_t v___x_258_; 
lean_inc(v_head_250_);
lean_inc_ref(v_env_246_);
v___x_258_ = l_Lean_Meta_isMatcherCore(v_env_246_, v_head_250_);
if (v___x_258_ == 0)
{
lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; 
lean_dec_ref(v_env_246_);
lean_inc(v_head_250_);
v___x_259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_259_, 0, v_head_250_);
lean_ctor_set(v___x_259_, 1, v_str_247_);
v___x_260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_260_, 0, v___x_259_);
v___x_261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_261_, 0, v___x_260_);
v___x_262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_262_, 0, v___x_261_);
lean_ctor_set(v___x_262_, 1, v___x_252_);
return v___x_262_;
}
else
{
v_as_x27_248_ = v_tail_251_;
v_b_249_ = v___x_253_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg___boxed(lean_object* v_env_264_, lean_object* v_str_265_, lean_object* v_as_x27_266_, lean_object* v_b_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg(v_env_264_, v_str_265_, v_as_x27_266_, v_b_267_);
lean_dec_ref(v_b_267_);
lean_dec(v_as_x27_266_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_declFromEqLikeName(lean_object* v_env_269_, lean_object* v_name_270_){
_start:
{
if (lean_obj_tag(v_name_270_) == 1)
{
lean_object* v_pre_271_; lean_object* v_str_272_; uint8_t v___x_273_; 
v_pre_271_ = lean_ctor_get(v_name_270_, 0);
lean_inc(v_pre_271_);
v_str_272_ = lean_ctor_get(v_name_270_, 1);
lean_inc_ref_n(v_str_272_, 2);
lean_dec_ref_known(v_name_270_, 2);
v___x_273_ = l_Lean_Meta_isEqnLikeSuffix(v_str_272_);
if (v___x_273_ == 0)
{
lean_object* v___x_274_; 
lean_dec_ref(v_str_272_);
lean_dec(v_pre_271_);
lean_dec_ref(v_env_269_);
v___x_274_ = lean_box(0);
return v___x_274_;
}
else
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v_fst_282_; 
lean_inc(v_pre_271_);
v___x_275_ = l_Lean_privateToUserName(v_pre_271_);
v___x_276_ = lean_box(0);
v___x_277_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_277_, 0, v___x_275_);
lean_ctor_set(v___x_277_, 1, v___x_276_);
v___x_278_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_278_, 0, v_pre_271_);
lean_ctor_set(v___x_278_, 1, v___x_277_);
v___x_279_ = lean_box(0);
v___x_280_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg___closed__0));
v___x_281_ = l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg(v_env_269_, v_str_272_, v___x_278_, v___x_280_);
lean_dec_ref_known(v___x_278_, 2);
v_fst_282_ = lean_ctor_get(v___x_281_, 0);
lean_inc(v_fst_282_);
lean_dec_ref(v___x_281_);
if (lean_obj_tag(v_fst_282_) == 0)
{
return v___x_279_;
}
else
{
lean_object* v_val_283_; 
v_val_283_ = lean_ctor_get(v_fst_282_, 0);
lean_inc(v_val_283_);
lean_dec_ref_known(v_fst_282_, 1);
return v_val_283_;
}
}
}
else
{
lean_object* v___x_284_; 
lean_dec(v_name_270_);
lean_dec_ref(v_env_269_);
v___x_284_ = lean_box(0);
return v___x_284_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0(lean_object* v_env_285_, lean_object* v_str_286_, lean_object* v_as_287_, lean_object* v_as_x27_288_, lean_object* v_b_289_, lean_object* v_a_290_){
_start:
{
lean_object* v___x_291_; 
v___x_291_ = l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg(v_env_285_, v_str_286_, v_as_x27_288_, v_b_289_);
return v___x_291_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___boxed(lean_object* v_env_292_, lean_object* v_str_293_, lean_object* v_as_294_, lean_object* v_as_x27_295_, lean_object* v_b_296_, lean_object* v_a_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0(v_env_292_, v_str_293_, v_as_294_, v_as_x27_295_, v_b_296_, v_a_297_);
lean_dec_ref(v_b_296_);
lean_dec(v_as_x27_295_);
lean_dec(v_as_294_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqLikeNameFor(lean_object* v_env_299_, lean_object* v_declName_300_, lean_object* v_suffix_301_){
_start:
{
uint8_t v_isExposed_302_; lean_object* v_name_303_; 
lean_inc(v_declName_300_);
lean_inc_ref(v_env_299_);
v_isExposed_302_ = l_Lean_Environment_hasExposedBody(v_env_299_, v_declName_300_);
v_name_303_ = l_Lean_Name_str___override(v_declName_300_, v_suffix_301_);
if (v_isExposed_302_ == 0)
{
lean_object* v___x_304_; 
v___x_304_ = l_Lean_mkPrivateName(v_env_299_, v_name_303_);
lean_dec_ref(v_env_299_);
return v___x_304_;
}
else
{
lean_dec_ref(v_env_299_);
return v_name_303_;
}
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0(void){
_start:
{
lean_object* v___x_305_; 
v___x_305_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_305_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__1(void){
_start:
{
lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_306_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0);
v___x_307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_307_, 0, v___x_306_);
return v___x_307_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__2(void){
_start:
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_308_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__1);
v___x_309_ = lean_unsigned_to_nat(0u);
v___x_310_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_310_, 0, v___x_309_);
lean_ctor_set(v___x_310_, 1, v___x_309_);
lean_ctor_set(v___x_310_, 2, v___x_309_);
lean_ctor_set(v___x_310_, 3, v___x_309_);
lean_ctor_set(v___x_310_, 4, v___x_308_);
lean_ctor_set(v___x_310_, 5, v___x_308_);
lean_ctor_set(v___x_310_, 6, v___x_308_);
lean_ctor_set(v___x_310_, 7, v___x_308_);
lean_ctor_set(v___x_310_, 8, v___x_308_);
lean_ctor_set(v___x_310_, 9, v___x_308_);
lean_ctor_set(v___x_310_, 10, v___x_308_);
return v___x_310_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__3(void){
_start:
{
lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_311_ = lean_unsigned_to_nat(32u);
v___x_312_ = lean_mk_empty_array_with_capacity(v___x_311_);
v___x_313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_313_, 0, v___x_312_);
return v___x_313_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4(void){
_start:
{
size_t v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_314_ = ((size_t)5ULL);
v___x_315_ = lean_unsigned_to_nat(0u);
v___x_316_ = lean_unsigned_to_nat(32u);
v___x_317_ = lean_mk_empty_array_with_capacity(v___x_316_);
v___x_318_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__3);
v___x_319_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_319_, 0, v___x_318_);
lean_ctor_set(v___x_319_, 1, v___x_317_);
lean_ctor_set(v___x_319_, 2, v___x_315_);
lean_ctor_set(v___x_319_, 3, v___x_315_);
lean_ctor_set_usize(v___x_319_, 4, v___x_314_);
return v___x_319_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__5(void){
_start:
{
lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_320_ = lean_box(1);
v___x_321_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4);
v___x_322_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__1);
v___x_323_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_323_, 0, v___x_322_);
lean_ctor_set(v___x_323_, 1, v___x_321_);
lean_ctor_set(v___x_323_, 2, v___x_320_);
return v___x_323_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2(lean_object* v_msgData_324_, lean_object* v___y_325_, lean_object* v___y_326_){
_start:
{
lean_object* v___x_328_; lean_object* v_toCold_329_; lean_object* v_env_330_; lean_object* v_options_331_; uint8_t v___x_332_; lean_object* v_env_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_328_ = lean_st_ref_get(v___y_326_);
v_toCold_329_ = lean_ctor_get(v___y_325_, 0);
v_env_330_ = lean_ctor_get(v___x_328_, 0);
lean_inc_ref(v_env_330_);
lean_dec(v___x_328_);
v_options_331_ = lean_ctor_get(v_toCold_329_, 2);
v___x_332_ = 0;
v_env_333_ = l_Lean_Environment_setRecordingDeps(v_env_330_, v___x_332_);
v___x_334_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__2);
v___x_335_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__5);
lean_inc_ref(v_options_331_);
v___x_336_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_336_, 0, v_env_333_);
lean_ctor_set(v___x_336_, 1, v___x_334_);
lean_ctor_set(v___x_336_, 2, v___x_335_);
lean_ctor_set(v___x_336_, 3, v_options_331_);
v___x_337_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_337_, 0, v___x_336_);
lean_ctor_set(v___x_337_, 1, v_msgData_324_);
v___x_338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_338_, 0, v___x_337_);
return v___x_338_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_msgData_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_){
_start:
{
lean_object* v_res_343_; 
v_res_343_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2(v_msgData_339_, v___y_340_, v___y_341_);
lean_dec(v___y_341_);
lean_dec_ref(v___y_340_);
return v_res_343_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1___redArg(lean_object* v_msg_344_, lean_object* v___y_345_, lean_object* v___y_346_){
_start:
{
lean_object* v_ref_348_; lean_object* v___x_349_; lean_object* v_a_350_; lean_object* v___x_352_; uint8_t v_isShared_353_; uint8_t v_isSharedCheck_358_; 
v_ref_348_ = lean_ctor_get(v___y_345_, 2);
v___x_349_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2(v_msg_344_, v___y_345_, v___y_346_);
v_a_350_ = lean_ctor_get(v___x_349_, 0);
v_isSharedCheck_358_ = !lean_is_exclusive(v___x_349_);
if (v_isSharedCheck_358_ == 0)
{
v___x_352_ = v___x_349_;
v_isShared_353_ = v_isSharedCheck_358_;
goto v_resetjp_351_;
}
else
{
lean_inc(v_a_350_);
lean_dec(v___x_349_);
v___x_352_ = lean_box(0);
v_isShared_353_ = v_isSharedCheck_358_;
goto v_resetjp_351_;
}
v_resetjp_351_:
{
lean_object* v___x_354_; lean_object* v___x_356_; 
lean_inc(v_ref_348_);
v___x_354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_354_, 0, v_ref_348_);
lean_ctor_set(v___x_354_, 1, v_a_350_);
if (v_isShared_353_ == 0)
{
lean_ctor_set_tag(v___x_352_, 1);
lean_ctor_set(v___x_352_, 0, v___x_354_);
v___x_356_ = v___x_352_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v___x_354_);
v___x_356_ = v_reuseFailAlloc_357_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
return v___x_356_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_msg_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_){
_start:
{
lean_object* v_res_363_; 
v_res_363_ = l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1___redArg(v_msg_359_, v___y_360_, v___y_361_);
lean_dec(v___y_361_);
lean_dec_ref(v___y_360_);
return v_res_363_;
}
}
static lean_object* _init_l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_365_; lean_object* v___x_366_; 
v___x_365_ = ((lean_object*)(l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__0));
v___x_366_ = l_Lean_stringToMessageData(v___x_365_);
return v___x_366_;
}
}
static lean_object* _init_l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_368_; lean_object* v___x_369_; 
v___x_368_ = ((lean_object*)(l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__2));
v___x_369_ = l_Lean_stringToMessageData(v___x_368_);
return v___x_369_;
}
}
static lean_object* _init_l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_371_ = ((lean_object*)(l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__4));
v___x_372_ = l_Lean_stringToMessageData(v___x_371_);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0(lean_object* v_declName_373_, lean_object* v_reservedName_374_, lean_object* v___y_375_, lean_object* v___y_376_){
_start:
{
lean_object* v___x_378_; uint8_t v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; uint8_t v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_378_ = lean_obj_once(&l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__1, &l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__1_once, _init_l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__1);
v___x_379_ = 0;
v___x_380_ = l_Lean_MessageData_ofConstName(v_declName_373_, v___x_379_);
v___x_381_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_381_, 0, v___x_378_);
lean_ctor_set(v___x_381_, 1, v___x_380_);
v___x_382_ = lean_obj_once(&l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__3, &l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__3_once, _init_l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__3);
v___x_383_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_383_, 0, v___x_381_);
lean_ctor_set(v___x_383_, 1, v___x_382_);
v___x_384_ = 1;
v___x_385_ = l_Lean_MessageData_ofConstName(v_reservedName_374_, v___x_384_);
v___x_386_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_386_, 0, v___x_383_);
lean_ctor_set(v___x_386_, 1, v___x_385_);
v___x_387_ = lean_obj_once(&l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__5, &l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__5_once, _init_l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__5);
v___x_388_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_388_, 0, v___x_386_);
lean_ctor_set(v___x_388_, 1, v___x_387_);
v___x_389_ = l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1___redArg(v___x_388_, v___y_375_, v___y_376_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___boxed(lean_object* v_declName_390_, lean_object* v_reservedName_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_){
_start:
{
lean_object* v_res_395_; 
v_res_395_ = l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0(v_declName_390_, v_reservedName_391_, v___y_392_, v___y_393_);
lean_dec(v___y_393_);
lean_dec_ref(v___y_392_);
return v_res_395_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0(lean_object* v_declName_396_, lean_object* v_suffix_397_, lean_object* v___y_398_, lean_object* v___y_399_){
_start:
{
lean_object* v_reservedName_401_; lean_object* v___x_402_; lean_object* v_env_403_; uint8_t v___x_404_; uint8_t v___x_405_; 
lean_inc(v_declName_396_);
v_reservedName_401_ = l_Lean_Name_str___override(v_declName_396_, v_suffix_397_);
v___x_402_ = lean_st_ref_get(v___y_399_);
v_env_403_ = lean_ctor_get(v___x_402_, 0);
lean_inc_ref(v_env_403_);
lean_dec(v___x_402_);
v___x_404_ = 1;
lean_inc(v_reservedName_401_);
v___x_405_ = l_Lean_Environment_contains(v_env_403_, v_reservedName_401_, v___x_404_);
if (v___x_405_ == 0)
{
lean_object* v___x_406_; lean_object* v___x_407_; 
lean_dec(v_reservedName_401_);
lean_dec(v_declName_396_);
v___x_406_ = lean_box(0);
v___x_407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_407_, 0, v___x_406_);
return v___x_407_;
}
else
{
lean_object* v___x_408_; 
v___x_408_ = l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0(v_declName_396_, v_reservedName_401_, v___y_398_, v___y_399_);
return v___x_408_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0___boxed(lean_object* v_declName_409_, lean_object* v_suffix_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_){
_start:
{
lean_object* v_res_414_; 
v_res_414_ = l_Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0(v_declName_409_, v_suffix_410_, v___y_411_, v___y_412_);
lean_dec(v___y_412_);
lean_dec_ref(v___y_411_);
return v_res_414_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ensureEqnReservedNamesAvailable(lean_object* v_declName_415_, lean_object* v_a_416_, lean_object* v_a_417_){
_start:
{
lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_419_ = ((lean_object*)(l_Lean_Meta_eqUnfoldThmSuffix___closed__0));
lean_inc(v_declName_415_);
v___x_420_ = l_Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0(v_declName_415_, v___x_419_, v_a_416_, v_a_417_);
if (lean_obj_tag(v___x_420_) == 0)
{
lean_object* v___x_421_; lean_object* v___x_422_; 
lean_dec_ref_known(v___x_420_, 1);
v___x_421_ = ((lean_object*)(l_Lean_Meta_unfoldThmSuffix___closed__0));
lean_inc(v_declName_415_);
v___x_422_ = l_Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0(v_declName_415_, v___x_421_, v_a_416_, v_a_417_);
if (lean_obj_tag(v___x_422_) == 0)
{
lean_object* v___x_423_; lean_object* v___x_424_; 
lean_dec_ref_known(v___x_422_, 1);
v___x_423_ = ((lean_object*)(l_Lean_Meta_eqn1ThmSuffix___closed__0));
v___x_424_ = l_Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0(v_declName_415_, v___x_423_, v_a_416_, v_a_417_);
return v___x_424_;
}
else
{
lean_dec(v_declName_415_);
return v___x_422_;
}
}
else
{
lean_dec(v_declName_415_);
return v___x_420_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ensureEqnReservedNamesAvailable___boxed(lean_object* v_declName_425_, lean_object* v_a_426_, lean_object* v_a_427_, lean_object* v_a_428_){
_start:
{
lean_object* v_res_429_; 
v_res_429_ = l_Lean_Meta_ensureEqnReservedNamesAvailable(v_declName_425_, v_a_426_, v_a_427_);
lean_dec(v_a_427_);
lean_dec_ref(v_a_426_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_430_, lean_object* v_msg_431_, lean_object* v___y_432_, lean_object* v___y_433_){
_start:
{
lean_object* v___x_435_; 
v___x_435_ = l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1___redArg(v_msg_431_, v___y_432_, v___y_433_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_436_, lean_object* v_msg_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_){
_start:
{
lean_object* v_res_441_; 
v_res_441_ = l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1(v_00_u03b1_436_, v_msg_437_, v___y_438_, v___y_439_);
lean_dec(v___y_439_);
lean_dec_ref(v___y_438_);
return v_res_441_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2_(lean_object* v_env_442_, lean_object* v_n_443_){
_start:
{
lean_object* v___x_444_; 
lean_inc(v_n_443_);
lean_inc_ref(v_env_442_);
v___x_444_ = l_Lean_Meta_declFromEqLikeName(v_env_442_, v_n_443_);
if (lean_obj_tag(v___x_444_) == 1)
{
lean_object* v_val_445_; lean_object* v_fst_446_; lean_object* v_snd_447_; lean_object* v___x_448_; uint8_t v___x_449_; 
v_val_445_ = lean_ctor_get(v___x_444_, 0);
lean_inc(v_val_445_);
lean_dec_ref_known(v___x_444_, 1);
v_fst_446_ = lean_ctor_get(v_val_445_, 0);
lean_inc(v_fst_446_);
v_snd_447_ = lean_ctor_get(v_val_445_, 1);
lean_inc(v_snd_447_);
lean_dec(v_val_445_);
v___x_448_ = l_Lean_Meta_mkEqLikeNameFor(v_env_442_, v_fst_446_, v_snd_447_);
v___x_449_ = lean_name_eq(v_n_443_, v___x_448_);
lean_dec(v___x_448_);
lean_dec(v_n_443_);
return v___x_449_;
}
else
{
uint8_t v___x_450_; 
lean_dec(v___x_444_);
lean_dec(v_n_443_);
lean_dec_ref(v_env_442_);
v___x_450_ = 0;
return v___x_450_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2____boxed(lean_object* v_env_451_, lean_object* v_n_452_){
_start:
{
uint8_t v_res_453_; lean_object* v_r_454_; 
v_res_453_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2_(v_env_451_, v_n_452_);
v_r_454_ = lean_box(v_res_453_);
return v_r_454_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_457_; lean_object* v___x_458_; 
v___f_457_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2_));
v___x_458_ = l_Lean_registerReservedNamePredicate(v___f_457_);
return v___x_458_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2____boxed(lean_object* v_a_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2_();
return v_res_460_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3508565914____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_462_ = lean_box(0);
v___x_463_ = lean_st_mk_ref(v___x_462_);
v___x_464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_464_, 0, v___x_463_);
return v___x_464_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3508565914____hygCtx___hyg_2____boxed(lean_object* v_a_465_){
_start:
{
lean_object* v_res_466_; 
v_res_466_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3508565914____hygCtx___hyg_2_();
return v_res_466_;
}
}
static lean_object* _init_l_Lean_Meta_registerGetEqnsFn___closed__1(void){
_start:
{
lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_468_ = ((lean_object*)(l_Lean_Meta_registerGetEqnsFn___closed__0));
v___x_469_ = lean_mk_io_user_error(v___x_468_);
return v___x_469_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_registerGetEqnsFn(lean_object* v_f_470_){
_start:
{
uint8_t v___x_472_; 
v___x_472_ = l_Lean_initializing();
if (v___x_472_ == 0)
{
lean_object* v___x_473_; lean_object* v___x_474_; 
lean_dec_ref(v_f_470_);
v___x_473_ = lean_obj_once(&l_Lean_Meta_registerGetEqnsFn___closed__1, &l_Lean_Meta_registerGetEqnsFn___closed__1_once, _init_l_Lean_Meta_registerGetEqnsFn___closed__1);
v___x_474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_474_, 0, v___x_473_);
return v___x_474_;
}
else
{
lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; 
v___x_475_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFnsRef;
v___x_476_ = lean_st_ref_take(v___x_475_);
v___x_477_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_477_, 0, v_f_470_);
lean_ctor_set(v___x_477_, 1, v___x_476_);
v___x_478_ = lean_st_ref_put(v___x_475_, v___x_477_);
v___x_479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_479_, 0, v___x_478_);
return v___x_479_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_registerGetEqnsFn___boxed(lean_object* v_f_480_, lean_object* v_a_481_){
_start:
{
lean_object* v_res_482_; 
v_res_482_ = l_Lean_Meta_registerGetEqnsFn(v_f_480_);
return v_res_482_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_shouldGenerateEqnThms(lean_object* v_declName_483_, lean_object* v_a_484_, lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_){
_start:
{
lean_object* v___x_493_; lean_object* v_env_494_; uint8_t v___x_495_; lean_object* v___x_496_; 
v___x_493_ = lean_st_ref_get(v_a_487_);
v_env_494_ = lean_ctor_get(v___x_493_, 0);
lean_inc_ref(v_env_494_);
lean_dec(v___x_493_);
v___x_495_ = 0;
lean_inc(v_declName_483_);
v___x_496_ = l_Lean_Environment_findAsync_x3f(v_env_494_, v_declName_483_, v___x_495_);
if (lean_obj_tag(v___x_496_) == 1)
{
lean_object* v_val_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_528_; 
v_val_497_ = lean_ctor_get(v___x_496_, 0);
v_isSharedCheck_528_ = !lean_is_exclusive(v___x_496_);
if (v_isSharedCheck_528_ == 0)
{
v___x_499_ = v___x_496_;
v_isShared_500_ = v_isSharedCheck_528_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_val_497_);
lean_dec(v___x_496_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_528_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
uint8_t v_kind_501_; 
v_kind_501_ = lean_ctor_get_uint8(v_val_497_, sizeof(void*)*3);
if (v_kind_501_ == 0)
{
lean_object* v_sig_502_; lean_object* v___x_503_; lean_object* v_env_504_; uint8_t v___x_505_; 
v_sig_502_ = lean_ctor_get(v_val_497_, 1);
lean_inc_ref(v_sig_502_);
lean_dec(v_val_497_);
v___x_503_ = lean_st_ref_get(v_a_487_);
v_env_504_ = lean_ctor_get(v___x_503_, 0);
lean_inc_ref(v_env_504_);
lean_dec(v___x_503_);
v___x_505_ = l_Lean_Meta_isMatcherCore(v_env_504_, v_declName_483_);
if (v___x_505_ == 0)
{
lean_object* v___x_506_; lean_object* v_type_507_; lean_object* v___x_508_; 
lean_del_object(v___x_499_);
v___x_506_ = lean_task_get_own(v_sig_502_);
v_type_507_ = lean_ctor_get(v___x_506_, 2);
lean_inc_ref(v_type_507_);
lean_dec(v___x_506_);
v___x_508_ = l_Lean_Meta_isProp(v_type_507_, v_a_484_, v_a_485_, v_a_486_, v_a_487_);
if (lean_obj_tag(v___x_508_) == 0)
{
lean_object* v_a_509_; lean_object* v___x_511_; uint8_t v_isShared_512_; uint8_t v_isSharedCheck_523_; 
v_a_509_ = lean_ctor_get(v___x_508_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v___x_508_);
if (v_isSharedCheck_523_ == 0)
{
v___x_511_ = v___x_508_;
v_isShared_512_ = v_isSharedCheck_523_;
goto v_resetjp_510_;
}
else
{
lean_inc(v_a_509_);
lean_dec(v___x_508_);
v___x_511_ = lean_box(0);
v_isShared_512_ = v_isSharedCheck_523_;
goto v_resetjp_510_;
}
v_resetjp_510_:
{
uint8_t v___x_513_; 
v___x_513_ = lean_unbox(v_a_509_);
lean_dec(v_a_509_);
if (v___x_513_ == 0)
{
uint8_t v___x_514_; lean_object* v___x_515_; lean_object* v___x_517_; 
v___x_514_ = 1;
v___x_515_ = lean_box(v___x_514_);
if (v_isShared_512_ == 0)
{
lean_ctor_set(v___x_511_, 0, v___x_515_);
v___x_517_ = v___x_511_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v___x_515_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
return v___x_517_;
}
}
else
{
lean_object* v___x_519_; lean_object* v___x_521_; 
v___x_519_ = lean_box(v___x_505_);
if (v_isShared_512_ == 0)
{
lean_ctor_set(v___x_511_, 0, v___x_519_);
v___x_521_ = v___x_511_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v___x_519_);
v___x_521_ = v_reuseFailAlloc_522_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
return v___x_521_;
}
}
}
}
else
{
return v___x_508_;
}
}
else
{
lean_object* v___x_524_; lean_object* v___x_526_; 
lean_dec_ref(v_sig_502_);
v___x_524_ = lean_box(v___x_495_);
if (v_isShared_500_ == 0)
{
lean_ctor_set_tag(v___x_499_, 0);
lean_ctor_set(v___x_499_, 0, v___x_524_);
v___x_526_ = v___x_499_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v___x_524_);
v___x_526_ = v_reuseFailAlloc_527_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
return v___x_526_;
}
}
}
else
{
lean_del_object(v___x_499_);
lean_dec(v_val_497_);
lean_dec(v_declName_483_);
goto v___jp_489_;
}
}
}
else
{
lean_dec(v___x_496_);
lean_dec(v_declName_483_);
goto v___jp_489_;
}
v___jp_489_:
{
uint8_t v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; 
v___x_490_ = 0;
v___x_491_ = lean_box(v___x_490_);
v___x_492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_492_, 0, v___x_491_);
return v___x_492_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_shouldGenerateEqnThms___boxed(lean_object* v_declName_529_, lean_object* v_a_530_, lean_object* v_a_531_, lean_object* v_a_532_, lean_object* v_a_533_, lean_object* v_a_534_){
_start:
{
lean_object* v_res_535_; 
v_res_535_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_shouldGenerateEqnThms(v_declName_529_, v_a_530_, v_a_531_, v_a_532_, v_a_533_);
lean_dec(v_a_533_);
lean_dec_ref(v_a_532_);
lean_dec(v_a_531_);
lean_dec_ref(v_a_530_);
return v_res_535_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedEqnsExtState_default___closed__0(void){
_start:
{
lean_object* v___x_536_; lean_object* v___x_537_; 
v___x_536_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0);
v___x_537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_537_, 0, v___x_536_);
return v___x_537_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedEqnsExtState_default(void){
_start:
{
lean_object* v___x_538_; 
v___x_538_ = lean_obj_once(&l_Lean_Meta_instInhabitedEqnsExtState_default___closed__0, &l_Lean_Meta_instInhabitedEqnsExtState_default___closed__0_once, _init_l_Lean_Meta_instInhabitedEqnsExtState_default___closed__0);
return v___x_538_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedEqnsExtState(void){
_start:
{
lean_object* v___x_539_; 
v___x_539_ = l_Lean_Meta_instInhabitedEqnsExtState_default;
return v___x_539_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_222358314____hygCtx___hyg_2_(lean_object* v___x_540_){
_start:
{
lean_object* v___x_542_; 
v___x_542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_542_, 0, v___x_540_);
return v___x_542_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_222358314____hygCtx___hyg_2____boxed(lean_object* v___x_543_, lean_object* v___y_544_){
_start:
{
lean_object* v_res_545_; 
v_res_545_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_222358314____hygCtx___hyg_2_(v___x_543_);
return v_res_545_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_222358314____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_546_; lean_object* v___f_547_; 
v___x_546_ = lean_obj_once(&l_Lean_Meta_instInhabitedEqnsExtState_default___closed__0, &l_Lean_Meta_instInhabitedEqnsExtState_default___closed__0_once, _init_l_Lean_Meta_instInhabitedEqnsExtState_default___closed__0);
v___f_547_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_222358314____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_547_, 0, v___x_546_);
return v___f_547_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_222358314____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; uint8_t v___x_558_; uint8_t v___x_559_; lean_object* v___x_560_; 
v___f_554_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_222358314____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_222358314____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_222358314____hygCtx___hyg_2_);
v___x_555_ = lean_box(0);
v___x_556_ = lean_box(1);
v___x_557_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_222358314____hygCtx___hyg_2_));
v___x_558_ = 0;
v___x_559_ = 1;
v___x_560_ = l_Lean_registerEnvExtension___redArg(v___f_554_, v___x_555_, v___x_556_, v___x_557_, v___x_558_, v___x_559_);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_222358314____hygCtx___hyg_2____boxed(lean_object* v_a_561_){
_start:
{
lean_object* v_res_562_; 
v_res_562_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_222358314____hygCtx___hyg_2_();
return v_res_562_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__1(lean_object* v_opts_563_, lean_object* v_opt_564_){
_start:
{
lean_object* v_name_565_; lean_object* v_defValue_566_; lean_object* v_map_567_; lean_object* v___x_568_; 
v_name_565_ = lean_ctor_get(v_opt_564_, 0);
v_defValue_566_ = lean_ctor_get(v_opt_564_, 1);
v_map_567_ = lean_ctor_get(v_opts_563_, 0);
v___x_568_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_567_, v_name_565_);
if (lean_obj_tag(v___x_568_) == 0)
{
lean_inc(v_defValue_566_);
return v_defValue_566_;
}
else
{
lean_object* v_val_569_; 
v_val_569_ = lean_ctor_get(v___x_568_, 0);
lean_inc(v_val_569_);
lean_dec_ref_known(v___x_568_, 1);
if (lean_obj_tag(v_val_569_) == 3)
{
lean_object* v_v_570_; 
v_v_570_ = lean_ctor_get(v_val_569_, 0);
lean_inc(v_v_570_);
lean_dec_ref_known(v_val_569_, 1);
return v_v_570_;
}
else
{
lean_dec(v_val_569_);
lean_inc(v_defValue_566_);
return v_defValue_566_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__1___boxed(lean_object* v_opts_571_, lean_object* v_opt_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__1(v_opts_571_, v_opt_572_);
lean_dec_ref(v_opt_572_);
lean_dec_ref(v_opts_571_);
return v_res_573_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__2(lean_object* v_as_577_, size_t v_sz_578_, size_t v_i_579_, lean_object* v_b_580_){
_start:
{
lean_object* v_a_582_; uint8_t v___x_586_; 
v___x_586_ = lean_usize_dec_lt(v_i_579_, v_sz_578_);
if (v___x_586_ == 0)
{
return v_b_580_;
}
else
{
lean_object* v_a_587_; lean_object* v_fst_588_; lean_object* v_snd_589_; lean_object* v_map_590_; uint8_t v_hasTrace_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_604_; 
v_a_587_ = lean_array_uget_borrowed(v_as_577_, v_i_579_);
v_fst_588_ = lean_ctor_get(v_a_587_, 0);
v_snd_589_ = lean_ctor_get(v_a_587_, 1);
v_map_590_ = lean_ctor_get(v_b_580_, 0);
v_hasTrace_591_ = lean_ctor_get_uint8(v_b_580_, sizeof(void*)*1);
v_isSharedCheck_604_ = !lean_is_exclusive(v_b_580_);
if (v_isSharedCheck_604_ == 0)
{
v___x_593_ = v_b_580_;
v_isShared_594_ = v_isSharedCheck_604_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_map_590_);
lean_dec(v_b_580_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_604_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_595_; 
lean_inc(v_snd_589_);
lean_inc(v_fst_588_);
v___x_595_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_588_, v_snd_589_, v_map_590_);
if (v_hasTrace_591_ == 0)
{
lean_object* v___x_596_; uint8_t v___x_597_; lean_object* v___x_599_; 
v___x_596_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__2___closed__1));
v___x_597_ = l_Lean_Name_isPrefixOf(v___x_596_, v_fst_588_);
if (v_isShared_594_ == 0)
{
lean_ctor_set(v___x_593_, 0, v___x_595_);
v___x_599_ = v___x_593_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v___x_595_);
v___x_599_ = v_reuseFailAlloc_600_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
lean_ctor_set_uint8(v___x_599_, sizeof(void*)*1, v___x_597_);
v_a_582_ = v___x_599_;
goto v___jp_581_;
}
}
else
{
lean_object* v___x_602_; 
if (v_isShared_594_ == 0)
{
lean_ctor_set(v___x_593_, 0, v___x_595_);
v___x_602_ = v___x_593_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v___x_595_);
lean_ctor_set_uint8(v_reuseFailAlloc_603_, sizeof(void*)*1, v_hasTrace_591_);
v___x_602_ = v_reuseFailAlloc_603_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
v_a_582_ = v___x_602_;
goto v___jp_581_;
}
}
}
}
v___jp_581_:
{
size_t v___x_583_; size_t v___x_584_; 
v___x_583_ = ((size_t)1ULL);
v___x_584_ = lean_usize_add(v_i_579_, v___x_583_);
v_i_579_ = v___x_584_;
v_b_580_ = v_a_582_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__2___boxed(lean_object* v_as_605_, lean_object* v_sz_606_, lean_object* v_i_607_, lean_object* v_b_608_){
_start:
{
size_t v_sz_boxed_609_; size_t v_i_boxed_610_; lean_object* v_res_611_; 
v_sz_boxed_609_ = lean_unbox_usize(v_sz_606_);
lean_dec(v_sz_606_);
v_i_boxed_610_ = lean_unbox_usize(v_i_607_);
lean_dec(v_i_607_);
v_res_611_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__2(v_as_605_, v_sz_boxed_609_, v_i_boxed_610_, v_b_608_);
lean_dec_ref(v_as_605_);
return v_res_611_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0_spec__0(lean_object* v_o_612_, lean_object* v_k_613_, uint8_t v_v_614_){
_start:
{
lean_object* v_map_615_; uint8_t v_hasTrace_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_630_; 
v_map_615_ = lean_ctor_get(v_o_612_, 0);
v_hasTrace_616_ = lean_ctor_get_uint8(v_o_612_, sizeof(void*)*1);
v_isSharedCheck_630_ = !lean_is_exclusive(v_o_612_);
if (v_isSharedCheck_630_ == 0)
{
v___x_618_ = v_o_612_;
v_isShared_619_ = v_isSharedCheck_630_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_map_615_);
lean_dec(v_o_612_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_630_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_620_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_620_, 0, v_v_614_);
lean_inc(v_k_613_);
v___x_621_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_613_, v___x_620_, v_map_615_);
if (v_hasTrace_616_ == 0)
{
lean_object* v___x_622_; uint8_t v___x_623_; lean_object* v___x_625_; 
v___x_622_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__2___closed__1));
v___x_623_ = l_Lean_Name_isPrefixOf(v___x_622_, v_k_613_);
lean_dec(v_k_613_);
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 0, v___x_621_);
v___x_625_ = v___x_618_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v___x_621_);
v___x_625_ = v_reuseFailAlloc_626_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
lean_ctor_set_uint8(v___x_625_, sizeof(void*)*1, v___x_623_);
return v___x_625_;
}
}
else
{
lean_object* v___x_628_; 
lean_dec(v_k_613_);
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 0, v___x_621_);
v___x_628_ = v___x_618_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v___x_621_);
lean_ctor_set_uint8(v_reuseFailAlloc_629_, sizeof(void*)*1, v_hasTrace_616_);
v___x_628_ = v_reuseFailAlloc_629_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
return v___x_628_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0_spec__0___boxed(lean_object* v_o_631_, lean_object* v_k_632_, lean_object* v_v_633_){
_start:
{
uint8_t v_v_boxed_634_; lean_object* v_res_635_; 
v_v_boxed_634_ = lean_unbox(v_v_633_);
v_res_635_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0_spec__0(v_o_631_, v_k_632_, v_v_boxed_634_);
return v_res_635_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0(lean_object* v_opts_636_, lean_object* v_opt_637_, uint8_t v_val_638_){
_start:
{
lean_object* v_name_639_; lean_object* v___x_640_; 
v_name_639_ = lean_ctor_get(v_opt_637_, 0);
lean_inc(v_name_639_);
lean_dec_ref(v_opt_637_);
v___x_640_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0_spec__0(v_opts_636_, v_name_639_, v_val_638_);
return v___x_640_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0___boxed(lean_object* v_opts_641_, lean_object* v_opt_642_, lean_object* v_val_643_){
_start:
{
uint8_t v_val_boxed_644_; lean_object* v_res_645_; 
v_val_boxed_644_ = lean_unbox(v_val_643_);
v_res_645_ = l_Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0(v_opts_641_, v_opt_642_, v_val_boxed_644_);
return v_res_645_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withEqnOptions_spec__3(lean_object* v_as_646_, size_t v_i_647_, size_t v_stop_648_, lean_object* v_b_649_){
_start:
{
uint8_t v___x_650_; 
v___x_650_ = lean_usize_dec_eq(v_i_647_, v_stop_648_);
if (v___x_650_ == 0)
{
lean_object* v___x_651_; lean_object* v_defValue_652_; uint8_t v___x_653_; lean_object* v___x_654_; size_t v___x_655_; size_t v___x_656_; 
v___x_651_ = lean_array_uget_borrowed(v_as_646_, v_i_647_);
v_defValue_652_ = lean_ctor_get(v___x_651_, 1);
v___x_653_ = lean_unbox(v_defValue_652_);
lean_inc(v___x_651_);
v___x_654_ = l_Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0(v_b_649_, v___x_651_, v___x_653_);
v___x_655_ = ((size_t)1ULL);
v___x_656_ = lean_usize_add(v_i_647_, v___x_655_);
v_i_647_ = v___x_656_;
v_b_649_ = v___x_654_;
goto _start;
}
else
{
return v_b_649_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withEqnOptions_spec__3___boxed(lean_object* v_as_658_, lean_object* v_i_659_, lean_object* v_stop_660_, lean_object* v_b_661_){
_start:
{
size_t v_i_boxed_662_; size_t v_stop_boxed_663_; lean_object* v_res_664_; 
v_i_boxed_662_ = lean_unbox_usize(v_i_659_);
lean_dec(v_i_659_);
v_stop_boxed_663_ = lean_unbox_usize(v_stop_660_);
lean_dec(v_stop_660_);
v_res_664_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withEqnOptions_spec__3(v_as_658_, v_i_boxed_662_, v_stop_boxed_663_, v_b_661_);
lean_dec_ref(v_as_658_);
return v_res_664_;
}
}
static lean_object* _init_l_Lean_Meta_withEqnOptions___redArg___closed__0(void){
_start:
{
lean_object* v___x_665_; lean_object* v___x_666_; 
v___x_665_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0);
v___x_666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_666_, 0, v___x_665_);
return v___x_666_;
}
}
static lean_object* _init_l_Lean_Meta_withEqnOptions___redArg___closed__1(void){
_start:
{
lean_object* v___x_667_; lean_object* v___x_668_; 
v___x_667_ = lean_obj_once(&l_Lean_Meta_withEqnOptions___redArg___closed__0, &l_Lean_Meta_withEqnOptions___redArg___closed__0_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__0);
v___x_668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_668_, 0, v___x_667_);
lean_ctor_set(v___x_668_, 1, v___x_667_);
return v___x_668_;
}
}
static lean_object* _init_l_Lean_Meta_withEqnOptions___redArg___closed__2(void){
_start:
{
lean_object* v___x_669_; lean_object* v___x_670_; 
v___x_669_ = l_Lean_Meta_eqnAffectingOptions;
v___x_670_ = lean_array_get_size(v___x_669_);
return v___x_670_;
}
}
static uint8_t _init_l_Lean_Meta_withEqnOptions___redArg___closed__3(void){
_start:
{
lean_object* v___x_671_; lean_object* v___x_672_; uint8_t v___x_673_; 
v___x_671_ = lean_obj_once(&l_Lean_Meta_withEqnOptions___redArg___closed__2, &l_Lean_Meta_withEqnOptions___redArg___closed__2_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__2);
v___x_672_ = lean_unsigned_to_nat(0u);
v___x_673_ = lean_nat_dec_lt(v___x_672_, v___x_671_);
return v___x_673_;
}
}
static size_t _init_l_Lean_Meta_withEqnOptions___redArg___closed__4(void){
_start:
{
lean_object* v___x_674_; size_t v___x_675_; 
v___x_674_ = lean_obj_once(&l_Lean_Meta_withEqnOptions___redArg___closed__2, &l_Lean_Meta_withEqnOptions___redArg___closed__2_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__2);
v___x_675_ = lean_usize_of_nat(v___x_674_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withEqnOptions___redArg(lean_object* v_declName_676_, lean_object* v_act_677_, lean_object* v_a_678_, lean_object* v_a_679_, lean_object* v_a_680_, lean_object* v_a_681_){
_start:
{
uint16_t v___y_684_; lean_object* v___y_685_; lean_object* v_fileName_686_; lean_object* v_fileMap_687_; lean_object* v_currNamespace_688_; lean_object* v_openDecls_689_; lean_object* v_initHeartbeats_690_; lean_object* v_maxHeartbeats_691_; lean_object* v_quotContext_692_; lean_object* v_currMacroScope_693_; lean_object* v_cancelTk_x3f_694_; lean_object* v_inheritedTraceOptions_695_; lean_object* v_currRecDepth_696_; lean_object* v_ref_697_; uint8_t v_suppressElabErrors_698_; uint8_t v_checkDeprecated_699_; uint8_t v_isRecordingDeps_700_; lean_object* v___y_701_; uint16_t v___y_708_; lean_object* v_nextMacroScope_709_; lean_object* v_ngen_710_; lean_object* v_auxDeclNGen_711_; lean_object* v_traceState_712_; lean_object* v_recordedDeps_713_; lean_object* v_messages_714_; lean_object* v_infoState_715_; lean_object* v_snapshotTasks_716_; lean_object* v___y_717_; lean_object* v___y_718_; uint16_t v___y_739_; lean_object* v___y_740_; uint8_t v___y_741_; lean_object* v___x_759_; lean_object* v_toCold_760_; lean_object* v_currRecDepth_761_; lean_object* v_ref_762_; uint8_t v_suppressElabErrors_763_; uint8_t v_checkDeprecated_764_; uint8_t v_isRecordingDeps_765_; lean_object* v_fileName_766_; lean_object* v_fileMap_767_; lean_object* v_options_768_; lean_object* v_currNamespace_769_; lean_object* v_openDecls_770_; lean_object* v_initHeartbeats_771_; lean_object* v_maxHeartbeats_772_; lean_object* v_quotContext_773_; lean_object* v_currMacroScope_774_; lean_object* v_cancelTk_x3f_775_; lean_object* v_inheritedTraceOptions_776_; lean_object* v___y_778_; 
v___x_759_ = lean_st_ref_get(v_a_681_);
v_toCold_760_ = lean_ctor_get(v_a_680_, 0);
v_currRecDepth_761_ = lean_ctor_get(v_a_680_, 1);
v_ref_762_ = lean_ctor_get(v_a_680_, 2);
v_suppressElabErrors_763_ = lean_ctor_get_uint8(v_a_680_, sizeof(void*)*3 + 2);
v_checkDeprecated_764_ = lean_ctor_get_uint8(v_a_680_, sizeof(void*)*3 + 3);
v_isRecordingDeps_765_ = lean_ctor_get_uint8(v_a_680_, sizeof(void*)*3 + 4);
v_fileName_766_ = lean_ctor_get(v_toCold_760_, 0);
v_fileMap_767_ = lean_ctor_get(v_toCold_760_, 1);
v_options_768_ = lean_ctor_get(v_toCold_760_, 2);
v_currNamespace_769_ = lean_ctor_get(v_toCold_760_, 4);
v_openDecls_770_ = lean_ctor_get(v_toCold_760_, 5);
v_initHeartbeats_771_ = lean_ctor_get(v_toCold_760_, 6);
v_maxHeartbeats_772_ = lean_ctor_get(v_toCold_760_, 7);
v_quotContext_773_ = lean_ctor_get(v_toCold_760_, 8);
v_currMacroScope_774_ = lean_ctor_get(v_toCold_760_, 9);
v_cancelTk_x3f_775_ = lean_ctor_get(v_toCold_760_, 10);
v_inheritedTraceOptions_776_ = lean_ctor_get(v_toCold_760_, 11);
if (v_isRecordingDeps_765_ == 0)
{
lean_object* v_env_788_; lean_object* v___x_789_; lean_object* v_toEnvExtension_790_; lean_object* v_asyncMode_791_; uint8_t v___x_792_; lean_object* v___x_793_; 
v_env_788_ = lean_ctor_get(v___x_759_, 0);
lean_inc_ref(v_env_788_);
lean_dec(v___x_759_);
v___x_789_ = l_Lean_Meta_eqnOptionsExt;
v_toEnvExtension_790_ = lean_ctor_get(v___x_789_, 0);
v_asyncMode_791_ = lean_ctor_get(v_toEnvExtension_790_, 2);
v___x_792_ = 0;
v___x_793_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_789_, v_env_788_, v_declName_676_, v_asyncMode_791_, v___x_792_);
if (lean_obj_tag(v___x_793_) == 1)
{
lean_object* v_val_794_; lean_object* v___y_796_; lean_object* v___x_800_; uint8_t v___x_801_; 
v_val_794_ = lean_ctor_get(v___x_793_, 0);
lean_inc(v_val_794_);
lean_dec_ref_known(v___x_793_, 1);
v___x_800_ = l_Lean_Meta_eqnAffectingOptions;
v___x_801_ = lean_uint8_once(&l_Lean_Meta_withEqnOptions___redArg___closed__3, &l_Lean_Meta_withEqnOptions___redArg___closed__3_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__3);
if (v___x_801_ == 0)
{
lean_inc_ref(v_options_768_);
v___y_796_ = v_options_768_;
goto v___jp_795_;
}
else
{
size_t v___x_802_; size_t v___x_803_; lean_object* v___x_804_; 
v___x_802_ = ((size_t)0ULL);
v___x_803_ = lean_usize_once(&l_Lean_Meta_withEqnOptions___redArg___closed__4, &l_Lean_Meta_withEqnOptions___redArg___closed__4_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__4);
lean_inc_ref(v_options_768_);
v___x_804_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withEqnOptions_spec__3(v___x_800_, v___x_802_, v___x_803_, v_options_768_);
v___y_796_ = v___x_804_;
goto v___jp_795_;
}
v___jp_795_:
{
size_t v_sz_797_; size_t v___x_798_; lean_object* v___x_799_; 
v_sz_797_ = lean_array_size(v_val_794_);
v___x_798_ = ((size_t)0ULL);
v___x_799_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__2(v_val_794_, v_sz_797_, v___x_798_, v___y_796_);
lean_dec(v_val_794_);
v___y_778_ = v___x_799_;
goto v___jp_777_;
}
}
else
{
lean_object* v___x_805_; uint8_t v___x_806_; 
lean_dec(v___x_793_);
v___x_805_ = l_Lean_Meta_eqnAffectingOptions;
v___x_806_ = lean_uint8_once(&l_Lean_Meta_withEqnOptions___redArg___closed__3, &l_Lean_Meta_withEqnOptions___redArg___closed__3_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__3);
if (v___x_806_ == 0)
{
lean_inc_ref(v_options_768_);
v___y_778_ = v_options_768_;
goto v___jp_777_;
}
else
{
size_t v___x_807_; size_t v___x_808_; lean_object* v___x_809_; 
v___x_807_ = ((size_t)0ULL);
v___x_808_ = lean_usize_once(&l_Lean_Meta_withEqnOptions___redArg___closed__4, &l_Lean_Meta_withEqnOptions___redArg___closed__4_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__4);
lean_inc_ref(v_options_768_);
v___x_809_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withEqnOptions_spec__3(v___x_805_, v___x_807_, v___x_808_, v_options_768_);
v___y_778_ = v___x_809_;
goto v___jp_777_;
}
}
}
else
{
lean_object* v___x_810_; 
lean_dec(v___x_759_);
lean_dec(v_declName_676_);
lean_inc_ref(v_options_768_);
v___x_810_ = l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(v_options_768_);
v___y_778_ = v___x_810_;
goto v___jp_777_;
}
v___jp_683_:
{
lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
v___x_702_ = l_Lean_maxRecDepth;
v___x_703_ = l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__1(v___y_685_, v___x_702_);
v___x_704_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_704_, 0, v_fileName_686_);
lean_ctor_set(v___x_704_, 1, v_fileMap_687_);
lean_ctor_set(v___x_704_, 2, v___y_685_);
lean_ctor_set(v___x_704_, 3, v___x_703_);
lean_ctor_set(v___x_704_, 4, v_currNamespace_688_);
lean_ctor_set(v___x_704_, 5, v_openDecls_689_);
lean_ctor_set(v___x_704_, 6, v_initHeartbeats_690_);
lean_ctor_set(v___x_704_, 7, v_maxHeartbeats_691_);
lean_ctor_set(v___x_704_, 8, v_quotContext_692_);
lean_ctor_set(v___x_704_, 9, v_currMacroScope_693_);
lean_ctor_set(v___x_704_, 10, v_cancelTk_x3f_694_);
lean_ctor_set(v___x_704_, 11, v_inheritedTraceOptions_695_);
lean_inc(v_ref_697_);
lean_inc(v_currRecDepth_696_);
v___x_705_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_705_, 0, v___x_704_);
lean_ctor_set(v___x_705_, 1, v_currRecDepth_696_);
lean_ctor_set(v___x_705_, 2, v_ref_697_);
lean_ctor_set_uint16(v___x_705_, sizeof(void*)*3, v___y_684_);
lean_ctor_set_uint8(v___x_705_, sizeof(void*)*3 + 2, v_suppressElabErrors_698_);
lean_ctor_set_uint8(v___x_705_, sizeof(void*)*3 + 3, v_checkDeprecated_699_);
lean_ctor_set_uint8(v___x_705_, sizeof(void*)*3 + 4, v_isRecordingDeps_700_);
lean_inc(v___y_701_);
lean_inc(v_a_679_);
lean_inc_ref(v_a_678_);
v___x_706_ = lean_apply_5(v_act_677_, v_a_678_, v_a_679_, v___x_705_, v___y_701_, lean_box(0));
return v___x_706_;
}
v___jp_707_:
{
lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v_toCold_722_; lean_object* v_currRecDepth_723_; lean_object* v_ref_724_; uint8_t v_suppressElabErrors_725_; uint8_t v_checkDeprecated_726_; uint8_t v_isRecordingDeps_727_; lean_object* v_fileName_728_; lean_object* v_fileMap_729_; lean_object* v_currNamespace_730_; lean_object* v_openDecls_731_; lean_object* v_initHeartbeats_732_; lean_object* v_maxHeartbeats_733_; lean_object* v_quotContext_734_; lean_object* v_currMacroScope_735_; lean_object* v_cancelTk_x3f_736_; lean_object* v_inheritedTraceOptions_737_; 
v___x_719_ = lean_obj_once(&l_Lean_Meta_withEqnOptions___redArg___closed__1, &l_Lean_Meta_withEqnOptions___redArg___closed__1_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__1);
v___x_720_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_720_, 0, v___y_718_);
lean_ctor_set(v___x_720_, 1, v_nextMacroScope_709_);
lean_ctor_set(v___x_720_, 2, v_ngen_710_);
lean_ctor_set(v___x_720_, 3, v_auxDeclNGen_711_);
lean_ctor_set(v___x_720_, 4, v_traceState_712_);
lean_ctor_set(v___x_720_, 5, v___x_719_);
lean_ctor_set(v___x_720_, 6, v_recordedDeps_713_);
lean_ctor_set(v___x_720_, 7, v_messages_714_);
lean_ctor_set(v___x_720_, 8, v_infoState_715_);
lean_ctor_set(v___x_720_, 9, v_snapshotTasks_716_);
v___x_721_ = lean_st_ref_put(v_a_681_, v___x_720_);
v_toCold_722_ = lean_ctor_get(v_a_680_, 0);
v_currRecDepth_723_ = lean_ctor_get(v_a_680_, 1);
v_ref_724_ = lean_ctor_get(v_a_680_, 2);
v_suppressElabErrors_725_ = lean_ctor_get_uint8(v_a_680_, sizeof(void*)*3 + 2);
v_checkDeprecated_726_ = lean_ctor_get_uint8(v_a_680_, sizeof(void*)*3 + 3);
v_isRecordingDeps_727_ = lean_ctor_get_uint8(v_a_680_, sizeof(void*)*3 + 4);
v_fileName_728_ = lean_ctor_get(v_toCold_722_, 0);
v_fileMap_729_ = lean_ctor_get(v_toCold_722_, 1);
v_currNamespace_730_ = lean_ctor_get(v_toCold_722_, 4);
v_openDecls_731_ = lean_ctor_get(v_toCold_722_, 5);
v_initHeartbeats_732_ = lean_ctor_get(v_toCold_722_, 6);
v_maxHeartbeats_733_ = lean_ctor_get(v_toCold_722_, 7);
v_quotContext_734_ = lean_ctor_get(v_toCold_722_, 8);
v_currMacroScope_735_ = lean_ctor_get(v_toCold_722_, 9);
v_cancelTk_x3f_736_ = lean_ctor_get(v_toCold_722_, 10);
v_inheritedTraceOptions_737_ = lean_ctor_get(v_toCold_722_, 11);
lean_inc_ref(v_inheritedTraceOptions_737_);
lean_inc(v_cancelTk_x3f_736_);
lean_inc(v_currMacroScope_735_);
lean_inc(v_quotContext_734_);
lean_inc(v_maxHeartbeats_733_);
lean_inc(v_initHeartbeats_732_);
lean_inc(v_openDecls_731_);
lean_inc(v_currNamespace_730_);
lean_inc_ref(v_fileMap_729_);
lean_inc_ref(v_fileName_728_);
v___y_684_ = v___y_708_;
v___y_685_ = v___y_717_;
v_fileName_686_ = v_fileName_728_;
v_fileMap_687_ = v_fileMap_729_;
v_currNamespace_688_ = v_currNamespace_730_;
v_openDecls_689_ = v_openDecls_731_;
v_initHeartbeats_690_ = v_initHeartbeats_732_;
v_maxHeartbeats_691_ = v_maxHeartbeats_733_;
v_quotContext_692_ = v_quotContext_734_;
v_currMacroScope_693_ = v_currMacroScope_735_;
v_cancelTk_x3f_694_ = v_cancelTk_x3f_736_;
v_inheritedTraceOptions_695_ = v_inheritedTraceOptions_737_;
v_currRecDepth_696_ = v_currRecDepth_723_;
v_ref_697_ = v_ref_724_;
v_suppressElabErrors_698_ = v_suppressElabErrors_725_;
v_checkDeprecated_699_ = v_checkDeprecated_726_;
v_isRecordingDeps_700_ = v_isRecordingDeps_727_;
v___y_701_ = v_a_681_;
goto v___jp_683_;
}
v___jp_738_:
{
uint8_t v___x_742_; lean_object* v___x_743_; lean_object* v_env_744_; lean_object* v_nextMacroScope_745_; lean_object* v_ngen_746_; lean_object* v_auxDeclNGen_747_; lean_object* v_traceState_748_; lean_object* v_recordedDeps_749_; lean_object* v_messages_750_; lean_object* v_infoState_751_; lean_object* v_snapshotTasks_752_; uint16_t v___x_753_; uint16_t v___x_754_; uint16_t v___x_755_; uint8_t v___x_756_; 
v___x_742_ = 1;
v___x_743_ = lean_st_ref_take(v_a_681_);
v_env_744_ = lean_ctor_get(v___x_743_, 0);
lean_inc_ref(v_env_744_);
v_nextMacroScope_745_ = lean_ctor_get(v___x_743_, 1);
lean_inc(v_nextMacroScope_745_);
v_ngen_746_ = lean_ctor_get(v___x_743_, 2);
lean_inc_ref(v_ngen_746_);
v_auxDeclNGen_747_ = lean_ctor_get(v___x_743_, 3);
lean_inc_ref(v_auxDeclNGen_747_);
v_traceState_748_ = lean_ctor_get(v___x_743_, 4);
lean_inc_ref(v_traceState_748_);
v_recordedDeps_749_ = lean_ctor_get(v___x_743_, 6);
lean_inc_ref(v_recordedDeps_749_);
v_messages_750_ = lean_ctor_get(v___x_743_, 7);
lean_inc_ref(v_messages_750_);
v_infoState_751_ = lean_ctor_get(v___x_743_, 8);
lean_inc_ref(v_infoState_751_);
v_snapshotTasks_752_ = lean_ctor_get(v___x_743_, 9);
lean_inc_ref(v_snapshotTasks_752_);
lean_dec(v___x_743_);
v___x_753_ = 512;
v___x_754_ = lean_uint16_land(v___y_739_, v___x_753_);
v___x_755_ = 0;
v___x_756_ = lean_uint16_dec_eq(v___x_754_, v___x_755_);
if (v___x_756_ == 0)
{
lean_object* v___x_757_; 
v___x_757_ = l_Lean_Kernel_enableDiag(v_env_744_, v___x_742_);
v___y_708_ = v___y_739_;
v_nextMacroScope_709_ = v_nextMacroScope_745_;
v_ngen_710_ = v_ngen_746_;
v_auxDeclNGen_711_ = v_auxDeclNGen_747_;
v_traceState_712_ = v_traceState_748_;
v_recordedDeps_713_ = v_recordedDeps_749_;
v_messages_714_ = v_messages_750_;
v_infoState_715_ = v_infoState_751_;
v_snapshotTasks_716_ = v_snapshotTasks_752_;
v___y_717_ = v___y_740_;
v___y_718_ = v___x_757_;
goto v___jp_707_;
}
else
{
lean_object* v___x_758_; 
v___x_758_ = l_Lean_Kernel_enableDiag(v_env_744_, v___y_741_);
v___y_708_ = v___y_739_;
v_nextMacroScope_709_ = v_nextMacroScope_745_;
v_ngen_710_ = v_ngen_746_;
v_auxDeclNGen_711_ = v_auxDeclNGen_747_;
v_traceState_712_ = v_traceState_748_;
v_recordedDeps_713_ = v_recordedDeps_749_;
v_messages_714_ = v_messages_750_;
v_infoState_715_ = v_infoState_751_;
v_snapshotTasks_716_ = v_snapshotTasks_752_;
v___y_717_ = v___y_740_;
v___y_718_ = v___x_758_;
goto v___jp_707_;
}
}
v___jp_777_:
{
uint16_t v___x_779_; lean_object* v___x_780_; lean_object* v_env_781_; uint8_t v___x_782_; uint16_t v___x_783_; uint16_t v___x_784_; uint16_t v___x_785_; uint8_t v___x_786_; 
v___x_779_ = l_Lean_OptionFlags_ofOptions(v___y_778_);
v___x_780_ = lean_st_ref_get(v_a_681_);
v_env_781_ = lean_ctor_get(v___x_780_, 0);
lean_inc_ref(v_env_781_);
lean_dec(v___x_780_);
v___x_782_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_781_);
lean_dec_ref(v_env_781_);
v___x_783_ = 512;
v___x_784_ = lean_uint16_land(v___x_779_, v___x_783_);
v___x_785_ = 0;
v___x_786_ = lean_uint16_dec_eq(v___x_784_, v___x_785_);
if (v___x_786_ == 0)
{
if (v___x_782_ == 0)
{
v___y_739_ = v___x_779_;
v___y_740_ = v___y_778_;
v___y_741_ = v___x_782_;
goto v___jp_738_;
}
else
{
lean_inc_ref(v_inheritedTraceOptions_776_);
lean_inc(v_cancelTk_x3f_775_);
lean_inc(v_currMacroScope_774_);
lean_inc(v_quotContext_773_);
lean_inc(v_maxHeartbeats_772_);
lean_inc(v_initHeartbeats_771_);
lean_inc(v_openDecls_770_);
lean_inc(v_currNamespace_769_);
lean_inc_ref(v_fileMap_767_);
lean_inc_ref(v_fileName_766_);
v___y_684_ = v___x_779_;
v___y_685_ = v___y_778_;
v_fileName_686_ = v_fileName_766_;
v_fileMap_687_ = v_fileMap_767_;
v_currNamespace_688_ = v_currNamespace_769_;
v_openDecls_689_ = v_openDecls_770_;
v_initHeartbeats_690_ = v_initHeartbeats_771_;
v_maxHeartbeats_691_ = v_maxHeartbeats_772_;
v_quotContext_692_ = v_quotContext_773_;
v_currMacroScope_693_ = v_currMacroScope_774_;
v_cancelTk_x3f_694_ = v_cancelTk_x3f_775_;
v_inheritedTraceOptions_695_ = v_inheritedTraceOptions_776_;
v_currRecDepth_696_ = v_currRecDepth_761_;
v_ref_697_ = v_ref_762_;
v_suppressElabErrors_698_ = v_suppressElabErrors_763_;
v_checkDeprecated_699_ = v_checkDeprecated_764_;
v_isRecordingDeps_700_ = v_isRecordingDeps_765_;
v___y_701_ = v_a_681_;
goto v___jp_683_;
}
}
else
{
if (v___x_782_ == 0)
{
lean_inc_ref(v_inheritedTraceOptions_776_);
lean_inc(v_cancelTk_x3f_775_);
lean_inc(v_currMacroScope_774_);
lean_inc(v_quotContext_773_);
lean_inc(v_maxHeartbeats_772_);
lean_inc(v_initHeartbeats_771_);
lean_inc(v_openDecls_770_);
lean_inc(v_currNamespace_769_);
lean_inc_ref(v_fileMap_767_);
lean_inc_ref(v_fileName_766_);
v___y_684_ = v___x_779_;
v___y_685_ = v___y_778_;
v_fileName_686_ = v_fileName_766_;
v_fileMap_687_ = v_fileMap_767_;
v_currNamespace_688_ = v_currNamespace_769_;
v_openDecls_689_ = v_openDecls_770_;
v_initHeartbeats_690_ = v_initHeartbeats_771_;
v_maxHeartbeats_691_ = v_maxHeartbeats_772_;
v_quotContext_692_ = v_quotContext_773_;
v_currMacroScope_693_ = v_currMacroScope_774_;
v_cancelTk_x3f_694_ = v_cancelTk_x3f_775_;
v_inheritedTraceOptions_695_ = v_inheritedTraceOptions_776_;
v_currRecDepth_696_ = v_currRecDepth_761_;
v_ref_697_ = v_ref_762_;
v_suppressElabErrors_698_ = v_suppressElabErrors_763_;
v_checkDeprecated_699_ = v_checkDeprecated_764_;
v_isRecordingDeps_700_ = v_isRecordingDeps_765_;
v___y_701_ = v_a_681_;
goto v___jp_683_;
}
else
{
uint8_t v___x_787_; 
v___x_787_ = 0;
v___y_739_ = v___x_779_;
v___y_740_ = v___y_778_;
v___y_741_ = v___x_787_;
goto v___jp_738_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withEqnOptions___redArg___boxed(lean_object* v_declName_811_, lean_object* v_act_812_, lean_object* v_a_813_, lean_object* v_a_814_, lean_object* v_a_815_, lean_object* v_a_816_, lean_object* v_a_817_){
_start:
{
lean_object* v_res_818_; 
v_res_818_ = l_Lean_Meta_withEqnOptions___redArg(v_declName_811_, v_act_812_, v_a_813_, v_a_814_, v_a_815_, v_a_816_);
lean_dec(v_a_816_);
lean_dec_ref(v_a_815_);
lean_dec(v_a_814_);
lean_dec_ref(v_a_813_);
return v_res_818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withEqnOptions(lean_object* v_00_u03b1_819_, lean_object* v_declName_820_, lean_object* v_act_821_, lean_object* v_a_822_, lean_object* v_a_823_, lean_object* v_a_824_, lean_object* v_a_825_){
_start:
{
lean_object* v___x_827_; 
v___x_827_ = l_Lean_Meta_withEqnOptions___redArg(v_declName_820_, v_act_821_, v_a_822_, v_a_823_, v_a_824_, v_a_825_);
return v___x_827_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withEqnOptions___boxed(lean_object* v_00_u03b1_828_, lean_object* v_declName_829_, lean_object* v_act_830_, lean_object* v_a_831_, lean_object* v_a_832_, lean_object* v_a_833_, lean_object* v_a_834_, lean_object* v_a_835_){
_start:
{
lean_object* v_res_836_; 
v_res_836_ = l_Lean_Meta_withEqnOptions(v_00_u03b1_828_, v_declName_829_, v_act_830_, v_a_831_, v_a_832_, v_a_833_, v_a_834_);
lean_dec(v_a_834_);
lean_dec_ref(v_a_833_);
lean_dec(v_a_832_);
lean_dec_ref(v_a_831_);
return v_res_836_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1___redArg(lean_object* v_thm_837_, lean_object* v___y_838_){
_start:
{
lean_object* v___x_840_; lean_object* v_env_841_; lean_object* v_toConstantVal_842_; lean_object* v_value_843_; lean_object* v_all_844_; lean_object* v_type_851_; uint8_t v___x_852_; 
v___x_840_ = lean_st_ref_get(v___y_838_);
v_env_841_ = lean_ctor_get(v___x_840_, 0);
lean_inc_ref_n(v_env_841_, 2);
lean_dec(v___x_840_);
v_toConstantVal_842_ = lean_ctor_get(v_thm_837_, 0);
v_value_843_ = lean_ctor_get(v_thm_837_, 1);
v_all_844_ = lean_ctor_get(v_thm_837_, 2);
v_type_851_ = lean_ctor_get(v_toConstantVal_842_, 2);
v___x_852_ = l_Lean_Environment_hasUnsafe(v_env_841_, v_type_851_);
if (v___x_852_ == 0)
{
uint8_t v___x_853_; 
v___x_853_ = l_Lean_Environment_hasUnsafe(v_env_841_, v_value_843_);
if (v___x_853_ == 0)
{
lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_854_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_854_, 0, v_thm_837_);
v___x_855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_855_, 0, v___x_854_);
return v___x_855_;
}
else
{
lean_inc(v_all_844_);
lean_inc_ref(v_value_843_);
lean_inc_ref(v_toConstantVal_842_);
lean_dec_ref(v_thm_837_);
goto v___jp_845_;
}
}
else
{
lean_inc(v_all_844_);
lean_inc_ref(v_value_843_);
lean_inc_ref(v_toConstantVal_842_);
lean_dec_ref(v_env_841_);
lean_dec_ref(v_thm_837_);
goto v___jp_845_;
}
v___jp_845_:
{
lean_object* v___x_846_; uint8_t v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; 
v___x_846_ = lean_box(0);
v___x_847_ = 0;
v___x_848_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_848_, 0, v_toConstantVal_842_);
lean_ctor_set(v___x_848_, 1, v_value_843_);
lean_ctor_set(v___x_848_, 2, v___x_846_);
lean_ctor_set(v___x_848_, 3, v_all_844_);
lean_ctor_set_uint8(v___x_848_, sizeof(void*)*4, v___x_847_);
v___x_849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_849_, 0, v___x_848_);
v___x_850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_850_, 0, v___x_849_);
return v___x_850_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1___redArg___boxed(lean_object* v_thm_856_, lean_object* v___y_857_, lean_object* v___y_858_){
_start:
{
lean_object* v_res_859_; 
v_res_859_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1___redArg(v_thm_856_, v___y_857_);
lean_dec(v___y_857_);
return v_res_859_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1(lean_object* v_thm_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_){
_start:
{
lean_object* v___x_866_; 
v___x_866_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1___redArg(v_thm_860_, v___y_864_);
return v___x_866_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1___boxed(lean_object* v_thm_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_){
_start:
{
lean_object* v_res_873_; 
v_res_873_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1(v_thm_867_, v___y_868_, v___y_869_, v___y_870_, v___y_871_);
lean_dec(v___y_871_);
lean_dec_ref(v___y_870_);
lean_dec(v___y_869_);
lean_dec_ref(v___y_868_);
return v_res_873_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg___lam__0(lean_object* v_k_874_, lean_object* v_b_875_, lean_object* v_c_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_){
_start:
{
lean_object* v___x_882_; 
lean_inc(v___y_880_);
lean_inc_ref(v___y_879_);
lean_inc(v___y_878_);
lean_inc_ref(v___y_877_);
v___x_882_ = lean_apply_7(v_k_874_, v_b_875_, v_c_876_, v___y_877_, v___y_878_, v___y_879_, v___y_880_, lean_box(0));
return v___x_882_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg___lam__0___boxed(lean_object* v_k_883_, lean_object* v_b_884_, lean_object* v_c_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_){
_start:
{
lean_object* v_res_891_; 
v_res_891_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg___lam__0(v_k_883_, v_b_884_, v_c_885_, v___y_886_, v___y_887_, v___y_888_, v___y_889_);
lean_dec(v___y_889_);
lean_dec_ref(v___y_888_);
lean_dec(v___y_887_);
lean_dec_ref(v___y_886_);
return v_res_891_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg(lean_object* v_e_892_, lean_object* v_k_893_, uint8_t v_cleanupAnnotations_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_){
_start:
{
lean_object* v___f_900_; uint8_t v___x_901_; uint8_t v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; 
v___f_900_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_900_, 0, v_k_893_);
v___x_901_ = 1;
v___x_902_ = 0;
v___x_903_ = lean_box(0);
v___x_904_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_892_, v___x_901_, v___x_902_, v___x_901_, v___x_902_, v___x_903_, v___f_900_, v_cleanupAnnotations_894_, v___y_895_, v___y_896_, v___y_897_, v___y_898_);
if (lean_obj_tag(v___x_904_) == 0)
{
lean_object* v_a_905_; lean_object* v___x_907_; uint8_t v_isShared_908_; uint8_t v_isSharedCheck_912_; 
v_a_905_ = lean_ctor_get(v___x_904_, 0);
v_isSharedCheck_912_ = !lean_is_exclusive(v___x_904_);
if (v_isSharedCheck_912_ == 0)
{
v___x_907_ = v___x_904_;
v_isShared_908_ = v_isSharedCheck_912_;
goto v_resetjp_906_;
}
else
{
lean_inc(v_a_905_);
lean_dec(v___x_904_);
v___x_907_ = lean_box(0);
v_isShared_908_ = v_isSharedCheck_912_;
goto v_resetjp_906_;
}
v_resetjp_906_:
{
lean_object* v___x_910_; 
if (v_isShared_908_ == 0)
{
v___x_910_ = v___x_907_;
goto v_reusejp_909_;
}
else
{
lean_object* v_reuseFailAlloc_911_; 
v_reuseFailAlloc_911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_911_, 0, v_a_905_);
v___x_910_ = v_reuseFailAlloc_911_;
goto v_reusejp_909_;
}
v_reusejp_909_:
{
return v___x_910_;
}
}
}
else
{
lean_object* v_a_913_; lean_object* v___x_915_; uint8_t v_isShared_916_; uint8_t v_isSharedCheck_920_; 
v_a_913_ = lean_ctor_get(v___x_904_, 0);
v_isSharedCheck_920_ = !lean_is_exclusive(v___x_904_);
if (v_isSharedCheck_920_ == 0)
{
v___x_915_ = v___x_904_;
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
else
{
lean_inc(v_a_913_);
lean_dec(v___x_904_);
v___x_915_ = lean_box(0);
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
v_resetjp_914_:
{
lean_object* v___x_918_; 
if (v_isShared_916_ == 0)
{
v___x_918_ = v___x_915_;
goto v_reusejp_917_;
}
else
{
lean_object* v_reuseFailAlloc_919_; 
v_reuseFailAlloc_919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_919_, 0, v_a_913_);
v___x_918_ = v_reuseFailAlloc_919_;
goto v_reusejp_917_;
}
v_reusejp_917_:
{
return v___x_918_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg___boxed(lean_object* v_e_921_, lean_object* v_k_922_, lean_object* v_cleanupAnnotations_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_929_; lean_object* v_res_930_; 
v_cleanupAnnotations_boxed_929_ = lean_unbox(v_cleanupAnnotations_923_);
v_res_930_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg(v_e_921_, v_k_922_, v_cleanupAnnotations_boxed_929_, v___y_924_, v___y_925_, v___y_926_, v___y_927_);
lean_dec(v___y_927_);
lean_dec_ref(v___y_926_);
lean_dec(v___y_925_);
lean_dec_ref(v___y_924_);
return v_res_930_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2(lean_object* v_00_u03b1_931_, lean_object* v_e_932_, lean_object* v_k_933_, uint8_t v_cleanupAnnotations_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_){
_start:
{
lean_object* v___x_940_; 
v___x_940_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg(v_e_932_, v_k_933_, v_cleanupAnnotations_934_, v___y_935_, v___y_936_, v___y_937_, v___y_938_);
return v___x_940_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___boxed(lean_object* v_00_u03b1_941_, lean_object* v_e_942_, lean_object* v_k_943_, lean_object* v_cleanupAnnotations_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_950_; lean_object* v_res_951_; 
v_cleanupAnnotations_boxed_950_ = lean_unbox(v_cleanupAnnotations_944_);
v_res_951_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2(v_00_u03b1_941_, v_e_942_, v_k_943_, v_cleanupAnnotations_boxed_950_, v___y_945_, v___y_946_, v___y_947_, v___y_948_);
lean_dec(v___y_948_);
lean_dec_ref(v___y_947_);
lean_dec(v___y_946_);
lean_dec_ref(v___y_945_);
return v_res_951_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__0(lean_object* v_a_952_, lean_object* v_a_953_){
_start:
{
if (lean_obj_tag(v_a_952_) == 0)
{
lean_object* v___x_954_; 
v___x_954_ = l_List_reverse___redArg(v_a_953_);
return v___x_954_;
}
else
{
lean_object* v_head_955_; lean_object* v_tail_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_965_; 
v_head_955_ = lean_ctor_get(v_a_952_, 0);
v_tail_956_ = lean_ctor_get(v_a_952_, 1);
v_isSharedCheck_965_ = !lean_is_exclusive(v_a_952_);
if (v_isSharedCheck_965_ == 0)
{
v___x_958_ = v_a_952_;
v_isShared_959_ = v_isSharedCheck_965_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_tail_956_);
lean_inc(v_head_955_);
lean_dec(v_a_952_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_965_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_960_; lean_object* v___x_962_; 
v___x_960_ = l_Lean_mkLevelParam(v_head_955_);
if (v_isShared_959_ == 0)
{
lean_ctor_set(v___x_958_, 1, v_a_953_);
lean_ctor_set(v___x_958_, 0, v___x_960_);
v___x_962_ = v___x_958_;
goto v_reusejp_961_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v___x_960_);
lean_ctor_set(v_reuseFailAlloc_964_, 1, v_a_953_);
v___x_962_ = v_reuseFailAlloc_964_;
goto v_reusejp_961_;
}
v_reusejp_961_:
{
v_a_952_ = v_tail_956_;
v_a_953_ = v___x_962_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize___lam__0(lean_object* v_toConstantVal_966_, lean_object* v_name_967_, lean_object* v_xs_968_, lean_object* v_body_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_){
_start:
{
lean_object* v_name_975_; lean_object* v_levelParams_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_1046_; 
v_name_975_ = lean_ctor_get(v_toConstantVal_966_, 0);
v_levelParams_976_ = lean_ctor_get(v_toConstantVal_966_, 1);
v_isSharedCheck_1046_ = !lean_is_exclusive(v_toConstantVal_966_);
if (v_isSharedCheck_1046_ == 0)
{
lean_object* v_unused_1047_; 
v_unused_1047_ = lean_ctor_get(v_toConstantVal_966_, 2);
lean_dec(v_unused_1047_);
v___x_978_ = v_toConstantVal_966_;
v_isShared_979_ = v_isSharedCheck_1046_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_levelParams_976_);
lean_inc(v_name_975_);
lean_dec(v_toConstantVal_966_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_1046_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v_lhs_983_; lean_object* v___x_984_; 
v___x_980_ = lean_box(0);
lean_inc(v_levelParams_976_);
v___x_981_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__0(v_levelParams_976_, v___x_980_);
v___x_982_ = l_Lean_mkConst(v_name_975_, v___x_981_);
v_lhs_983_ = l_Lean_mkAppN(v___x_982_, v_xs_968_);
lean_inc_ref(v_lhs_983_);
v___x_984_ = l_Lean_Meta_mkEq(v_lhs_983_, v_body_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_);
if (lean_obj_tag(v___x_984_) == 0)
{
lean_object* v_a_985_; uint8_t v___x_986_; uint8_t v___x_987_; uint8_t v___x_988_; lean_object* v___x_989_; 
v_a_985_ = lean_ctor_get(v___x_984_, 0);
lean_inc(v_a_985_);
lean_dec_ref_known(v___x_984_, 1);
v___x_986_ = 0;
v___x_987_ = 1;
v___x_988_ = 1;
v___x_989_ = l_Lean_Meta_mkForallFVars(v_xs_968_, v_a_985_, v___x_986_, v___x_987_, v___x_987_, v___x_988_, v___y_970_, v___y_971_, v___y_972_, v___y_973_);
if (lean_obj_tag(v___x_989_) == 0)
{
lean_object* v_a_990_; lean_object* v___x_991_; 
v_a_990_ = lean_ctor_get(v___x_989_, 0);
lean_inc(v_a_990_);
lean_dec_ref_known(v___x_989_, 1);
v___x_991_ = l_Lean_Meta_letToHave(v_a_990_, v___y_970_, v___y_971_, v___y_972_, v___y_973_);
if (lean_obj_tag(v___x_991_) == 0)
{
lean_object* v_a_992_; lean_object* v___x_993_; 
v_a_992_ = lean_ctor_get(v___x_991_, 0);
lean_inc(v_a_992_);
lean_dec_ref_known(v___x_991_, 1);
v___x_993_ = l_Lean_Meta_mkEqRefl(v_lhs_983_, v___y_970_, v___y_971_, v___y_972_, v___y_973_);
if (lean_obj_tag(v___x_993_) == 0)
{
lean_object* v_a_994_; lean_object* v___x_995_; 
v_a_994_ = lean_ctor_get(v___x_993_, 0);
lean_inc(v_a_994_);
lean_dec_ref_known(v___x_993_, 1);
v___x_995_ = l_Lean_Meta_mkLambdaFVars(v_xs_968_, v_a_994_, v___x_986_, v___x_987_, v___x_986_, v___x_987_, v___x_988_, v___y_970_, v___y_971_, v___y_972_, v___y_973_);
if (lean_obj_tag(v___x_995_) == 0)
{
lean_object* v_a_996_; lean_object* v___x_998_; 
v_a_996_ = lean_ctor_get(v___x_995_, 0);
lean_inc(v_a_996_);
lean_dec_ref_known(v___x_995_, 1);
lean_inc(v_name_967_);
if (v_isShared_979_ == 0)
{
lean_ctor_set(v___x_978_, 2, v_a_992_);
lean_ctor_set(v___x_978_, 0, v_name_967_);
v___x_998_ = v___x_978_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v_name_967_);
lean_ctor_set(v_reuseFailAlloc_1005_, 1, v_levelParams_976_);
lean_ctor_set(v_reuseFailAlloc_1005_, 2, v_a_992_);
v___x_998_ = v_reuseFailAlloc_1005_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v_a_1002_; lean_object* v___x_1003_; 
lean_inc(v_name_967_);
v___x_999_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_999_, 0, v_name_967_);
lean_ctor_set(v___x_999_, 1, v___x_980_);
v___x_1000_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1000_, 0, v___x_998_);
lean_ctor_set(v___x_1000_, 1, v_a_996_);
lean_ctor_set(v___x_1000_, 2, v___x_999_);
v___x_1001_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1___redArg(v___x_1000_, v___y_973_);
v_a_1002_ = lean_ctor_get(v___x_1001_, 0);
lean_inc(v_a_1002_);
lean_dec_ref(v___x_1001_);
v___x_1003_ = l_Lean_addDecl(v_a_1002_, v___x_986_, v___y_972_, v___y_973_);
if (lean_obj_tag(v___x_1003_) == 0)
{
lean_object* v___x_1004_; 
lean_dec_ref_known(v___x_1003_, 1);
v___x_1004_ = l_Lean_inferDefEqAttr(v_name_967_, v___y_970_, v___y_971_, v___y_972_, v___y_973_);
return v___x_1004_;
}
else
{
lean_dec(v_name_967_);
return v___x_1003_;
}
}
}
else
{
lean_object* v_a_1006_; lean_object* v___x_1008_; uint8_t v_isShared_1009_; uint8_t v_isSharedCheck_1013_; 
lean_dec(v_a_992_);
lean_del_object(v___x_978_);
lean_dec(v_levelParams_976_);
lean_dec(v_name_967_);
v_a_1006_ = lean_ctor_get(v___x_995_, 0);
v_isSharedCheck_1013_ = !lean_is_exclusive(v___x_995_);
if (v_isSharedCheck_1013_ == 0)
{
v___x_1008_ = v___x_995_;
v_isShared_1009_ = v_isSharedCheck_1013_;
goto v_resetjp_1007_;
}
else
{
lean_inc(v_a_1006_);
lean_dec(v___x_995_);
v___x_1008_ = lean_box(0);
v_isShared_1009_ = v_isSharedCheck_1013_;
goto v_resetjp_1007_;
}
v_resetjp_1007_:
{
lean_object* v___x_1011_; 
if (v_isShared_1009_ == 0)
{
v___x_1011_ = v___x_1008_;
goto v_reusejp_1010_;
}
else
{
lean_object* v_reuseFailAlloc_1012_; 
v_reuseFailAlloc_1012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1012_, 0, v_a_1006_);
v___x_1011_ = v_reuseFailAlloc_1012_;
goto v_reusejp_1010_;
}
v_reusejp_1010_:
{
return v___x_1011_;
}
}
}
}
else
{
lean_object* v_a_1014_; lean_object* v___x_1016_; uint8_t v_isShared_1017_; uint8_t v_isSharedCheck_1021_; 
lean_dec(v_a_992_);
lean_del_object(v___x_978_);
lean_dec(v_levelParams_976_);
lean_dec(v_name_967_);
v_a_1014_ = lean_ctor_get(v___x_993_, 0);
v_isSharedCheck_1021_ = !lean_is_exclusive(v___x_993_);
if (v_isSharedCheck_1021_ == 0)
{
v___x_1016_ = v___x_993_;
v_isShared_1017_ = v_isSharedCheck_1021_;
goto v_resetjp_1015_;
}
else
{
lean_inc(v_a_1014_);
lean_dec(v___x_993_);
v___x_1016_ = lean_box(0);
v_isShared_1017_ = v_isSharedCheck_1021_;
goto v_resetjp_1015_;
}
v_resetjp_1015_:
{
lean_object* v___x_1019_; 
if (v_isShared_1017_ == 0)
{
v___x_1019_ = v___x_1016_;
goto v_reusejp_1018_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v_a_1014_);
v___x_1019_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1018_;
}
v_reusejp_1018_:
{
return v___x_1019_;
}
}
}
}
else
{
lean_object* v_a_1022_; lean_object* v___x_1024_; uint8_t v_isShared_1025_; uint8_t v_isSharedCheck_1029_; 
lean_dec_ref(v_lhs_983_);
lean_del_object(v___x_978_);
lean_dec(v_levelParams_976_);
lean_dec(v_name_967_);
v_a_1022_ = lean_ctor_get(v___x_991_, 0);
v_isSharedCheck_1029_ = !lean_is_exclusive(v___x_991_);
if (v_isSharedCheck_1029_ == 0)
{
v___x_1024_ = v___x_991_;
v_isShared_1025_ = v_isSharedCheck_1029_;
goto v_resetjp_1023_;
}
else
{
lean_inc(v_a_1022_);
lean_dec(v___x_991_);
v___x_1024_ = lean_box(0);
v_isShared_1025_ = v_isSharedCheck_1029_;
goto v_resetjp_1023_;
}
v_resetjp_1023_:
{
lean_object* v___x_1027_; 
if (v_isShared_1025_ == 0)
{
v___x_1027_ = v___x_1024_;
goto v_reusejp_1026_;
}
else
{
lean_object* v_reuseFailAlloc_1028_; 
v_reuseFailAlloc_1028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1028_, 0, v_a_1022_);
v___x_1027_ = v_reuseFailAlloc_1028_;
goto v_reusejp_1026_;
}
v_reusejp_1026_:
{
return v___x_1027_;
}
}
}
}
else
{
lean_object* v_a_1030_; lean_object* v___x_1032_; uint8_t v_isShared_1033_; uint8_t v_isSharedCheck_1037_; 
lean_dec_ref(v_lhs_983_);
lean_del_object(v___x_978_);
lean_dec(v_levelParams_976_);
lean_dec(v_name_967_);
v_a_1030_ = lean_ctor_get(v___x_989_, 0);
v_isSharedCheck_1037_ = !lean_is_exclusive(v___x_989_);
if (v_isSharedCheck_1037_ == 0)
{
v___x_1032_ = v___x_989_;
v_isShared_1033_ = v_isSharedCheck_1037_;
goto v_resetjp_1031_;
}
else
{
lean_inc(v_a_1030_);
lean_dec(v___x_989_);
v___x_1032_ = lean_box(0);
v_isShared_1033_ = v_isSharedCheck_1037_;
goto v_resetjp_1031_;
}
v_resetjp_1031_:
{
lean_object* v___x_1035_; 
if (v_isShared_1033_ == 0)
{
v___x_1035_ = v___x_1032_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v_a_1030_);
v___x_1035_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
return v___x_1035_;
}
}
}
}
else
{
lean_object* v_a_1038_; lean_object* v___x_1040_; uint8_t v_isShared_1041_; uint8_t v_isSharedCheck_1045_; 
lean_dec_ref(v_lhs_983_);
lean_del_object(v___x_978_);
lean_dec(v_levelParams_976_);
lean_dec(v_name_967_);
v_a_1038_ = lean_ctor_get(v___x_984_, 0);
v_isSharedCheck_1045_ = !lean_is_exclusive(v___x_984_);
if (v_isSharedCheck_1045_ == 0)
{
v___x_1040_ = v___x_984_;
v_isShared_1041_ = v_isSharedCheck_1045_;
goto v_resetjp_1039_;
}
else
{
lean_inc(v_a_1038_);
lean_dec(v___x_984_);
v___x_1040_ = lean_box(0);
v_isShared_1041_ = v_isSharedCheck_1045_;
goto v_resetjp_1039_;
}
v_resetjp_1039_:
{
lean_object* v___x_1043_; 
if (v_isShared_1041_ == 0)
{
v___x_1043_ = v___x_1040_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v_a_1038_);
v___x_1043_ = v_reuseFailAlloc_1044_;
goto v_reusejp_1042_;
}
v_reusejp_1042_:
{
return v___x_1043_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize___lam__0___boxed(lean_object* v_toConstantVal_1048_, lean_object* v_name_1049_, lean_object* v_xs_1050_, lean_object* v_body_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_){
_start:
{
lean_object* v_res_1057_; 
v_res_1057_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize___lam__0(v_toConstantVal_1048_, v_name_1049_, v_xs_1050_, v_body_1051_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_);
lean_dec(v___y_1055_);
lean_dec_ref(v___y_1054_);
lean_dec(v___y_1053_);
lean_dec_ref(v___y_1052_);
lean_dec_ref(v_xs_1050_);
return v_res_1057_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize(lean_object* v_name_1058_, lean_object* v_info_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_, lean_object* v_a_1063_){
_start:
{
lean_object* v_toConstantVal_1065_; lean_object* v_value_1066_; lean_object* v___f_1067_; uint8_t v___x_1068_; lean_object* v___x_1069_; 
v_toConstantVal_1065_ = lean_ctor_get(v_info_1059_, 0);
lean_inc_ref(v_toConstantVal_1065_);
v_value_1066_ = lean_ctor_get(v_info_1059_, 1);
lean_inc_ref(v_value_1066_);
lean_dec_ref(v_info_1059_);
v___f_1067_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize___lam__0___boxed), 9, 2);
lean_closure_set(v___f_1067_, 0, v_toConstantVal_1065_);
lean_closure_set(v___f_1067_, 1, v_name_1058_);
v___x_1068_ = 1;
v___x_1069_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg(v_value_1066_, v___f_1067_, v___x_1068_, v_a_1060_, v_a_1061_, v_a_1062_, v_a_1063_);
return v___x_1069_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize___boxed(lean_object* v_name_1070_, lean_object* v_info_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_){
_start:
{
lean_object* v_res_1077_; 
v_res_1077_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize(v_name_1070_, v_info_1071_, v_a_1072_, v_a_1073_, v_a_1074_, v_a_1075_);
lean_dec(v_a_1075_);
lean_dec_ref(v_a_1074_);
lean_dec(v_a_1073_);
lean_dec_ref(v_a_1072_);
return v_res_1077_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkSimpleEqThm(lean_object* v_declName_1078_, lean_object* v_name_1079_, lean_object* v_a_1080_, lean_object* v_a_1081_, lean_object* v_a_1082_, lean_object* v_a_1083_){
_start:
{
lean_object* v___x_1088_; lean_object* v_env_1089_; uint8_t v___x_1090_; lean_object* v___x_1091_; 
v___x_1088_ = lean_st_ref_get(v_a_1083_);
v_env_1089_ = lean_ctor_get(v___x_1088_, 0);
lean_inc_ref(v_env_1089_);
lean_dec(v___x_1088_);
v___x_1090_ = 0;
lean_inc(v_declName_1078_);
v___x_1091_ = l_Lean_Environment_find_x3f(v_env_1089_, v_declName_1078_, v___x_1090_);
if (lean_obj_tag(v___x_1091_) == 1)
{
lean_object* v_val_1092_; lean_object* v___x_1094_; uint8_t v_isShared_1095_; uint8_t v_isSharedCheck_1119_; 
v_val_1092_ = lean_ctor_get(v___x_1091_, 0);
v_isSharedCheck_1119_ = !lean_is_exclusive(v___x_1091_);
if (v_isSharedCheck_1119_ == 0)
{
v___x_1094_ = v___x_1091_;
v_isShared_1095_ = v_isSharedCheck_1119_;
goto v_resetjp_1093_;
}
else
{
lean_inc(v_val_1092_);
lean_dec(v___x_1091_);
v___x_1094_ = lean_box(0);
v_isShared_1095_ = v_isSharedCheck_1119_;
goto v_resetjp_1093_;
}
v_resetjp_1093_:
{
if (lean_obj_tag(v_val_1092_) == 1)
{
lean_object* v_val_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; 
v_val_1096_ = lean_ctor_get(v_val_1092_, 0);
lean_inc_ref(v_val_1096_);
lean_dec_ref_known(v_val_1092_, 1);
lean_inc_n(v_name_1079_, 2);
v___x_1097_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize___boxed), 7, 2);
lean_closure_set(v___x_1097_, 0, v_name_1079_);
lean_closure_set(v___x_1097_, 1, v_val_1096_);
lean_inc(v_declName_1078_);
v___x_1098_ = lean_alloc_closure((void*)(l_Lean_Meta_withEqnOptions___boxed), 8, 3);
lean_closure_set(v___x_1098_, 0, lean_box(0));
lean_closure_set(v___x_1098_, 1, v_declName_1078_);
lean_closure_set(v___x_1098_, 2, v___x_1097_);
v___x_1099_ = l_Lean_Meta_realizeConst(v_declName_1078_, v_name_1079_, v___x_1098_, v_a_1080_, v_a_1081_, v_a_1082_, v_a_1083_);
if (lean_obj_tag(v___x_1099_) == 0)
{
lean_object* v___x_1101_; uint8_t v_isShared_1102_; uint8_t v_isSharedCheck_1109_; 
v_isSharedCheck_1109_ = !lean_is_exclusive(v___x_1099_);
if (v_isSharedCheck_1109_ == 0)
{
lean_object* v_unused_1110_; 
v_unused_1110_ = lean_ctor_get(v___x_1099_, 0);
lean_dec(v_unused_1110_);
v___x_1101_ = v___x_1099_;
v_isShared_1102_ = v_isSharedCheck_1109_;
goto v_resetjp_1100_;
}
else
{
lean_dec(v___x_1099_);
v___x_1101_ = lean_box(0);
v_isShared_1102_ = v_isSharedCheck_1109_;
goto v_resetjp_1100_;
}
v_resetjp_1100_:
{
lean_object* v___x_1104_; 
if (v_isShared_1095_ == 0)
{
lean_ctor_set(v___x_1094_, 0, v_name_1079_);
v___x_1104_ = v___x_1094_;
goto v_reusejp_1103_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v_name_1079_);
v___x_1104_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1103_;
}
v_reusejp_1103_:
{
lean_object* v___x_1106_; 
if (v_isShared_1102_ == 0)
{
lean_ctor_set(v___x_1101_, 0, v___x_1104_);
v___x_1106_ = v___x_1101_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v___x_1104_);
v___x_1106_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
return v___x_1106_;
}
}
}
}
else
{
lean_object* v_a_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1118_; 
lean_del_object(v___x_1094_);
lean_dec(v_name_1079_);
v_a_1111_ = lean_ctor_get(v___x_1099_, 0);
v_isSharedCheck_1118_ = !lean_is_exclusive(v___x_1099_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1113_ = v___x_1099_;
v_isShared_1114_ = v_isSharedCheck_1118_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_a_1111_);
lean_dec(v___x_1099_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1118_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v___x_1116_; 
if (v_isShared_1114_ == 0)
{
v___x_1116_ = v___x_1113_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v_a_1111_);
v___x_1116_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
return v___x_1116_;
}
}
}
}
else
{
lean_del_object(v___x_1094_);
lean_dec(v_val_1092_);
lean_dec(v_name_1079_);
lean_dec(v_declName_1078_);
goto v___jp_1085_;
}
}
}
else
{
lean_dec(v___x_1091_);
lean_dec(v_name_1079_);
lean_dec(v_declName_1078_);
goto v___jp_1085_;
}
v___jp_1085_:
{
lean_object* v___x_1086_; lean_object* v___x_1087_; 
v___x_1086_ = lean_box(0);
v___x_1087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1086_);
return v___x_1087_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkSimpleEqThm___boxed(lean_object* v_declName_1120_, lean_object* v_name_1121_, lean_object* v_a_1122_, lean_object* v_a_1123_, lean_object* v_a_1124_, lean_object* v_a_1125_, lean_object* v_a_1126_){
_start:
{
lean_object* v_res_1127_; 
v_res_1127_ = l_Lean_Meta_mkSimpleEqThm(v_declName_1120_, v_name_1121_, v_a_1122_, v_a_1123_, v_a_1124_, v_a_1125_);
lean_dec(v_a_1125_);
lean_dec_ref(v_a_1124_);
lean_dec(v_a_1123_);
lean_dec_ref(v_a_1122_);
return v_res_1127_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1128_, lean_object* v_vals_1129_, lean_object* v_i_1130_, lean_object* v_k_1131_){
_start:
{
lean_object* v___x_1132_; uint8_t v___x_1133_; 
v___x_1132_ = lean_array_get_size(v_keys_1128_);
v___x_1133_ = lean_nat_dec_lt(v_i_1130_, v___x_1132_);
if (v___x_1133_ == 0)
{
lean_object* v___x_1134_; 
lean_dec(v_i_1130_);
v___x_1134_ = lean_box(0);
return v___x_1134_;
}
else
{
lean_object* v_k_x27_1135_; uint8_t v___x_1136_; 
v_k_x27_1135_ = lean_array_fget_borrowed(v_keys_1128_, v_i_1130_);
v___x_1136_ = lean_name_eq(v_k_1131_, v_k_x27_1135_);
if (v___x_1136_ == 0)
{
lean_object* v___x_1137_; lean_object* v___x_1138_; 
v___x_1137_ = lean_unsigned_to_nat(1u);
v___x_1138_ = lean_nat_add(v_i_1130_, v___x_1137_);
lean_dec(v_i_1130_);
v_i_1130_ = v___x_1138_;
goto _start;
}
else
{
lean_object* v___x_1140_; lean_object* v___x_1141_; 
v___x_1140_ = lean_array_fget_borrowed(v_vals_1129_, v_i_1130_);
lean_dec(v_i_1130_);
lean_inc(v___x_1140_);
v___x_1141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1141_, 0, v___x_1140_);
return v___x_1141_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1142_, lean_object* v_vals_1143_, lean_object* v_i_1144_, lean_object* v_k_1145_){
_start:
{
lean_object* v_res_1146_; 
v_res_1146_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1___redArg(v_keys_1142_, v_vals_1143_, v_i_1144_, v_k_1145_);
lean_dec(v_k_1145_);
lean_dec_ref(v_vals_1143_);
lean_dec_ref(v_keys_1142_);
return v_res_1146_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0___redArg(lean_object* v_x_1147_, size_t v_x_1148_, lean_object* v_x_1149_){
_start:
{
if (lean_obj_tag(v_x_1147_) == 0)
{
lean_object* v_es_1150_; lean_object* v___x_1151_; size_t v___x_1152_; size_t v___x_1153_; lean_object* v_j_1154_; lean_object* v___x_1155_; 
v_es_1150_ = lean_ctor_get(v_x_1147_, 0);
v___x_1151_ = lean_box(2);
v___x_1152_ = ((size_t)31ULL);
v___x_1153_ = lean_usize_land(v_x_1148_, v___x_1152_);
v_j_1154_ = lean_usize_to_nat(v___x_1153_);
v___x_1155_ = lean_array_get_borrowed(v___x_1151_, v_es_1150_, v_j_1154_);
lean_dec(v_j_1154_);
switch(lean_obj_tag(v___x_1155_))
{
case 0:
{
lean_object* v_key_1156_; lean_object* v_val_1157_; uint8_t v___x_1158_; 
v_key_1156_ = lean_ctor_get(v___x_1155_, 0);
v_val_1157_ = lean_ctor_get(v___x_1155_, 1);
v___x_1158_ = lean_name_eq(v_x_1149_, v_key_1156_);
if (v___x_1158_ == 0)
{
lean_object* v___x_1159_; 
v___x_1159_ = lean_box(0);
return v___x_1159_;
}
else
{
lean_object* v___x_1160_; 
lean_inc(v_val_1157_);
v___x_1160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1160_, 0, v_val_1157_);
return v___x_1160_;
}
}
case 1:
{
lean_object* v_node_1161_; size_t v___x_1162_; size_t v___x_1163_; 
v_node_1161_ = lean_ctor_get(v___x_1155_, 0);
v___x_1162_ = ((size_t)5ULL);
v___x_1163_ = lean_usize_shift_right(v_x_1148_, v___x_1162_);
v_x_1147_ = v_node_1161_;
v_x_1148_ = v___x_1163_;
goto _start;
}
default: 
{
lean_object* v___x_1165_; 
v___x_1165_ = lean_box(0);
return v___x_1165_;
}
}
}
else
{
lean_object* v_ks_1166_; lean_object* v_vs_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; 
v_ks_1166_ = lean_ctor_get(v_x_1147_, 0);
v_vs_1167_ = lean_ctor_get(v_x_1147_, 1);
v___x_1168_ = lean_unsigned_to_nat(0u);
v___x_1169_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1___redArg(v_ks_1166_, v_vs_1167_, v___x_1168_, v_x_1149_);
return v___x_1169_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_1170_, lean_object* v_x_1171_, lean_object* v_x_1172_){
_start:
{
size_t v_x_344__boxed_1173_; lean_object* v_res_1174_; 
v_x_344__boxed_1173_ = lean_unbox_usize(v_x_1171_);
lean_dec(v_x_1171_);
v_res_1174_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0___redArg(v_x_1170_, v_x_344__boxed_1173_, v_x_1172_);
lean_dec(v_x_1172_);
lean_dec_ref(v_x_1170_);
return v_res_1174_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0___redArg(lean_object* v_x_1175_, lean_object* v_x_1176_){
_start:
{
uint64_t v___y_1178_; 
if (lean_obj_tag(v_x_1176_) == 0)
{
uint64_t v___x_1181_; 
v___x_1181_ = 1723ULL;
v___y_1178_ = v___x_1181_;
goto v___jp_1177_;
}
else
{
uint64_t v_hash_1182_; 
v_hash_1182_ = lean_ctor_get_uint64(v_x_1176_, sizeof(void*)*2);
v___y_1178_ = v_hash_1182_;
goto v___jp_1177_;
}
v___jp_1177_:
{
size_t v___x_1179_; lean_object* v___x_1180_; 
v___x_1179_ = lean_uint64_to_usize(v___y_1178_);
v___x_1180_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0___redArg(v_x_1175_, v___x_1179_, v_x_1176_);
return v___x_1180_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0___redArg___boxed(lean_object* v_x_1183_, lean_object* v_x_1184_){
_start:
{
lean_object* v_res_1185_; 
v_res_1185_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0___redArg(v_x_1183_, v_x_1184_);
lean_dec(v_x_1184_);
lean_dec_ref(v_x_1183_);
return v_res_1185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm_x3f___redArg(lean_object* v_thmName_1186_, lean_object* v_a_1187_){
_start:
{
lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v_env_1191_; lean_object* v___x_1192_; lean_object* v_asyncMode_1193_; lean_object* v___x_1194_; uint8_t v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___x_1189_ = l_Lean_Meta_instInhabitedEqnsExtState_default;
v___x_1190_ = lean_st_ref_get(v_a_1187_);
v_env_1191_ = lean_ctor_get(v___x_1190_, 0);
lean_inc_ref(v_env_1191_);
lean_dec(v___x_1190_);
v___x_1192_ = l_Lean_Meta_eqnsExt;
v_asyncMode_1193_ = lean_ctor_get(v___x_1192_, 2);
v___x_1194_ = lean_box(0);
v___x_1195_ = 0;
v___x_1196_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_1189_, v___x_1192_, v_env_1191_, v_asyncMode_1193_, v___x_1194_, v___x_1195_);
v___x_1197_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0___redArg(v___x_1196_, v_thmName_1186_);
lean_dec(v___x_1196_);
v___x_1198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1198_, 0, v___x_1197_);
return v___x_1198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm_x3f___redArg___boxed(lean_object* v_thmName_1199_, lean_object* v_a_1200_, lean_object* v_a_1201_){
_start:
{
lean_object* v_res_1202_; 
v_res_1202_ = l_Lean_Meta_isEqnThm_x3f___redArg(v_thmName_1199_, v_a_1200_);
lean_dec(v_a_1200_);
lean_dec(v_thmName_1199_);
return v_res_1202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm_x3f(lean_object* v_thmName_1203_, lean_object* v_a_1204_, lean_object* v_a_1205_){
_start:
{
lean_object* v___x_1207_; 
v___x_1207_ = l_Lean_Meta_isEqnThm_x3f___redArg(v_thmName_1203_, v_a_1205_);
return v___x_1207_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm_x3f___boxed(lean_object* v_thmName_1208_, lean_object* v_a_1209_, lean_object* v_a_1210_, lean_object* v_a_1211_){
_start:
{
lean_object* v_res_1212_; 
v_res_1212_ = l_Lean_Meta_isEqnThm_x3f(v_thmName_1208_, v_a_1209_, v_a_1210_);
lean_dec(v_a_1210_);
lean_dec_ref(v_a_1209_);
lean_dec(v_thmName_1208_);
return v_res_1212_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0(lean_object* v_00_u03b2_1213_, lean_object* v_x_1214_, lean_object* v_x_1215_){
_start:
{
lean_object* v___x_1216_; 
v___x_1216_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0___redArg(v_x_1214_, v_x_1215_);
return v___x_1216_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0___boxed(lean_object* v_00_u03b2_1217_, lean_object* v_x_1218_, lean_object* v_x_1219_){
_start:
{
lean_object* v_res_1220_; 
v_res_1220_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0(v_00_u03b2_1217_, v_x_1218_, v_x_1219_);
lean_dec(v_x_1219_);
lean_dec_ref(v_x_1218_);
return v_res_1220_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0(lean_object* v_00_u03b2_1221_, lean_object* v_x_1222_, size_t v_x_1223_, lean_object* v_x_1224_){
_start:
{
lean_object* v___x_1225_; 
v___x_1225_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0___redArg(v_x_1222_, v_x_1223_, v_x_1224_);
return v___x_1225_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1226_, lean_object* v_x_1227_, lean_object* v_x_1228_, lean_object* v_x_1229_){
_start:
{
size_t v_x_439__boxed_1230_; lean_object* v_res_1231_; 
v_x_439__boxed_1230_ = lean_unbox_usize(v_x_1228_);
lean_dec(v_x_1228_);
v_res_1231_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0(v_00_u03b2_1226_, v_x_1227_, v_x_439__boxed_1230_, v_x_1229_);
lean_dec(v_x_1229_);
lean_dec_ref(v_x_1227_);
return v_res_1231_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1232_, lean_object* v_keys_1233_, lean_object* v_vals_1234_, lean_object* v_heq_1235_, lean_object* v_i_1236_, lean_object* v_k_1237_){
_start:
{
lean_object* v___x_1238_; 
v___x_1238_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1___redArg(v_keys_1233_, v_vals_1234_, v_i_1236_, v_k_1237_);
return v___x_1238_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1239_, lean_object* v_keys_1240_, lean_object* v_vals_1241_, lean_object* v_heq_1242_, lean_object* v_i_1243_, lean_object* v_k_1244_){
_start:
{
lean_object* v_res_1245_; 
v_res_1245_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1(v_00_u03b2_1239_, v_keys_1240_, v_vals_1241_, v_heq_1242_, v_i_1243_, v_k_1244_);
lean_dec(v_k_1244_);
lean_dec_ref(v_vals_1241_);
lean_dec_ref(v_keys_1240_);
return v_res_1245_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1246_, lean_object* v_i_1247_, lean_object* v_k_1248_){
_start:
{
lean_object* v___x_1249_; uint8_t v___x_1250_; 
v___x_1249_ = lean_array_get_size(v_keys_1246_);
v___x_1250_ = lean_nat_dec_lt(v_i_1247_, v___x_1249_);
if (v___x_1250_ == 0)
{
lean_dec(v_i_1247_);
return v___x_1250_;
}
else
{
lean_object* v_k_x27_1251_; uint8_t v___x_1252_; 
v_k_x27_1251_ = lean_array_fget_borrowed(v_keys_1246_, v_i_1247_);
v___x_1252_ = lean_name_eq(v_k_1248_, v_k_x27_1251_);
if (v___x_1252_ == 0)
{
lean_object* v___x_1253_; lean_object* v___x_1254_; 
v___x_1253_ = lean_unsigned_to_nat(1u);
v___x_1254_ = lean_nat_add(v_i_1247_, v___x_1253_);
lean_dec(v_i_1247_);
v_i_1247_ = v___x_1254_;
goto _start;
}
else
{
lean_dec(v_i_1247_);
return v___x_1250_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1256_, lean_object* v_i_1257_, lean_object* v_k_1258_){
_start:
{
uint8_t v_res_1259_; lean_object* v_r_1260_; 
v_res_1259_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1___redArg(v_keys_1256_, v_i_1257_, v_k_1258_);
lean_dec(v_k_1258_);
lean_dec_ref(v_keys_1256_);
v_r_1260_ = lean_box(v_res_1259_);
return v_r_1260_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0___redArg(lean_object* v_x_1261_, size_t v_x_1262_, lean_object* v_x_1263_){
_start:
{
if (lean_obj_tag(v_x_1261_) == 0)
{
lean_object* v_es_1264_; lean_object* v___x_1265_; size_t v___x_1266_; size_t v___x_1267_; lean_object* v_j_1268_; lean_object* v___x_1269_; 
v_es_1264_ = lean_ctor_get(v_x_1261_, 0);
v___x_1265_ = lean_box(2);
v___x_1266_ = ((size_t)31ULL);
v___x_1267_ = lean_usize_land(v_x_1262_, v___x_1266_);
v_j_1268_ = lean_usize_to_nat(v___x_1267_);
v___x_1269_ = lean_array_get_borrowed(v___x_1265_, v_es_1264_, v_j_1268_);
lean_dec(v_j_1268_);
switch(lean_obj_tag(v___x_1269_))
{
case 0:
{
lean_object* v_key_1270_; uint8_t v___x_1271_; 
v_key_1270_ = lean_ctor_get(v___x_1269_, 0);
v___x_1271_ = lean_name_eq(v_x_1263_, v_key_1270_);
return v___x_1271_;
}
case 1:
{
lean_object* v_node_1272_; size_t v___x_1273_; size_t v___x_1274_; 
v_node_1272_ = lean_ctor_get(v___x_1269_, 0);
v___x_1273_ = ((size_t)5ULL);
v___x_1274_ = lean_usize_shift_right(v_x_1262_, v___x_1273_);
v_x_1261_ = v_node_1272_;
v_x_1262_ = v___x_1274_;
goto _start;
}
default: 
{
uint8_t v___x_1276_; 
v___x_1276_ = 0;
return v___x_1276_;
}
}
}
else
{
lean_object* v_ks_1277_; lean_object* v___x_1278_; uint8_t v___x_1279_; 
v_ks_1277_ = lean_ctor_get(v_x_1261_, 0);
v___x_1278_ = lean_unsigned_to_nat(0u);
v___x_1279_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1___redArg(v_ks_1277_, v___x_1278_, v_x_1263_);
return v___x_1279_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0___redArg___boxed(lean_object* v_x_1280_, lean_object* v_x_1281_, lean_object* v_x_1282_){
_start:
{
size_t v_x_328__boxed_1283_; uint8_t v_res_1284_; lean_object* v_r_1285_; 
v_x_328__boxed_1283_ = lean_unbox_usize(v_x_1281_);
lean_dec(v_x_1281_);
v_res_1284_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0___redArg(v_x_1280_, v_x_328__boxed_1283_, v_x_1282_);
lean_dec(v_x_1282_);
lean_dec_ref(v_x_1280_);
v_r_1285_ = lean_box(v_res_1284_);
return v_r_1285_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0___redArg(lean_object* v_x_1286_, lean_object* v_x_1287_){
_start:
{
uint64_t v___y_1289_; 
if (lean_obj_tag(v_x_1287_) == 0)
{
uint64_t v___x_1292_; 
v___x_1292_ = 1723ULL;
v___y_1289_ = v___x_1292_;
goto v___jp_1288_;
}
else
{
uint64_t v_hash_1293_; 
v_hash_1293_ = lean_ctor_get_uint64(v_x_1287_, sizeof(void*)*2);
v___y_1289_ = v_hash_1293_;
goto v___jp_1288_;
}
v___jp_1288_:
{
size_t v___x_1290_; uint8_t v___x_1291_; 
v___x_1290_ = lean_uint64_to_usize(v___y_1289_);
v___x_1291_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0___redArg(v_x_1286_, v___x_1290_, v_x_1287_);
return v___x_1291_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0___redArg___boxed(lean_object* v_x_1294_, lean_object* v_x_1295_){
_start:
{
uint8_t v_res_1296_; lean_object* v_r_1297_; 
v_res_1296_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0___redArg(v_x_1294_, v_x_1295_);
lean_dec(v_x_1295_);
lean_dec_ref(v_x_1294_);
v_r_1297_ = lean_box(v_res_1296_);
return v_r_1297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm___redArg(lean_object* v_thmName_1298_, lean_object* v_a_1299_){
_start:
{
lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v_env_1303_; lean_object* v___x_1304_; lean_object* v_asyncMode_1305_; lean_object* v___x_1306_; uint8_t v___x_1307_; lean_object* v___x_1308_; uint8_t v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
v___x_1301_ = l_Lean_Meta_instInhabitedEqnsExtState_default;
v___x_1302_ = lean_st_ref_get(v_a_1299_);
v_env_1303_ = lean_ctor_get(v___x_1302_, 0);
lean_inc_ref(v_env_1303_);
lean_dec(v___x_1302_);
v___x_1304_ = l_Lean_Meta_eqnsExt;
v_asyncMode_1305_ = lean_ctor_get(v___x_1304_, 2);
v___x_1306_ = lean_box(0);
v___x_1307_ = 0;
v___x_1308_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_1301_, v___x_1304_, v_env_1303_, v_asyncMode_1305_, v___x_1306_, v___x_1307_);
v___x_1309_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0___redArg(v___x_1308_, v_thmName_1298_);
lean_dec(v___x_1308_);
v___x_1310_ = lean_box(v___x_1309_);
v___x_1311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1310_);
return v___x_1311_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm___redArg___boxed(lean_object* v_thmName_1312_, lean_object* v_a_1313_, lean_object* v_a_1314_){
_start:
{
lean_object* v_res_1315_; 
v_res_1315_ = l_Lean_Meta_isEqnThm___redArg(v_thmName_1312_, v_a_1313_);
lean_dec(v_a_1313_);
lean_dec(v_thmName_1312_);
return v_res_1315_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm(lean_object* v_thmName_1316_, lean_object* v_a_1317_, lean_object* v_a_1318_){
_start:
{
lean_object* v___x_1320_; 
v___x_1320_ = l_Lean_Meta_isEqnThm___redArg(v_thmName_1316_, v_a_1318_);
return v___x_1320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm___boxed(lean_object* v_thmName_1321_, lean_object* v_a_1322_, lean_object* v_a_1323_, lean_object* v_a_1324_){
_start:
{
lean_object* v_res_1325_; 
v_res_1325_ = l_Lean_Meta_isEqnThm(v_thmName_1321_, v_a_1322_, v_a_1323_);
lean_dec(v_a_1323_);
lean_dec_ref(v_a_1322_);
lean_dec(v_thmName_1321_);
return v_res_1325_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0(lean_object* v_00_u03b2_1326_, lean_object* v_x_1327_, lean_object* v_x_1328_){
_start:
{
uint8_t v___x_1329_; 
v___x_1329_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0___redArg(v_x_1327_, v_x_1328_);
return v___x_1329_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0___boxed(lean_object* v_00_u03b2_1330_, lean_object* v_x_1331_, lean_object* v_x_1332_){
_start:
{
uint8_t v_res_1333_; lean_object* v_r_1334_; 
v_res_1333_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0(v_00_u03b2_1330_, v_x_1331_, v_x_1332_);
lean_dec(v_x_1332_);
lean_dec_ref(v_x_1331_);
v_r_1334_ = lean_box(v_res_1333_);
return v_r_1334_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0(lean_object* v_00_u03b2_1335_, lean_object* v_x_1336_, size_t v_x_1337_, lean_object* v_x_1338_){
_start:
{
uint8_t v___x_1339_; 
v___x_1339_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0___redArg(v_x_1336_, v_x_1337_, v_x_1338_);
return v___x_1339_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1340_, lean_object* v_x_1341_, lean_object* v_x_1342_, lean_object* v_x_1343_){
_start:
{
size_t v_x_419__boxed_1344_; uint8_t v_res_1345_; lean_object* v_r_1346_; 
v_x_419__boxed_1344_ = lean_unbox_usize(v_x_1342_);
lean_dec(v_x_1342_);
v_res_1345_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0(v_00_u03b2_1340_, v_x_1341_, v_x_419__boxed_1344_, v_x_1343_);
lean_dec(v_x_1343_);
lean_dec_ref(v_x_1341_);
v_r_1346_ = lean_box(v_res_1345_);
return v_r_1346_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1347_, lean_object* v_keys_1348_, lean_object* v_vals_1349_, lean_object* v_heq_1350_, lean_object* v_i_1351_, lean_object* v_k_1352_){
_start:
{
uint8_t v___x_1353_; 
v___x_1353_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1___redArg(v_keys_1348_, v_i_1351_, v_k_1352_);
return v___x_1353_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1354_, lean_object* v_keys_1355_, lean_object* v_vals_1356_, lean_object* v_heq_1357_, lean_object* v_i_1358_, lean_object* v_k_1359_){
_start:
{
uint8_t v_res_1360_; lean_object* v_r_1361_; 
v_res_1360_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1(v_00_u03b2_1354_, v_keys_1355_, v_vals_1356_, v_heq_1357_, v_i_1358_, v_k_1359_);
lean_dec(v_k_1359_);
lean_dec_ref(v_vals_1356_);
lean_dec_ref(v_keys_1355_);
v_r_1361_ = lean_box(v_res_1360_);
return v_r_1361_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__1(lean_object* v_x1_1362_, lean_object* v_msg_1363_){
_start:
{
lean_object* v___x_1364_; 
v___x_1364_ = lean_panic_fn_borrowed(v_x1_1362_, v_msg_1363_);
return v___x_1364_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__1___boxed(lean_object* v_x1_1365_, lean_object* v_msg_1366_){
_start:
{
lean_object* v_res_1367_; 
v_res_1367_ = l_panic___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__1(v_x1_1365_, v_msg_1366_);
lean_dec_ref(v_x1_1365_);
return v_res_1367_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2_spec__4___redArg(lean_object* v_x_1368_, lean_object* v_x_1369_, lean_object* v_x_1370_, lean_object* v_x_1371_){
_start:
{
lean_object* v_ks_1372_; lean_object* v_vs_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1397_; 
v_ks_1372_ = lean_ctor_get(v_x_1368_, 0);
v_vs_1373_ = lean_ctor_get(v_x_1368_, 1);
v_isSharedCheck_1397_ = !lean_is_exclusive(v_x_1368_);
if (v_isSharedCheck_1397_ == 0)
{
v___x_1375_ = v_x_1368_;
v_isShared_1376_ = v_isSharedCheck_1397_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_vs_1373_);
lean_inc(v_ks_1372_);
lean_dec(v_x_1368_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1397_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___x_1377_; uint8_t v___x_1378_; 
v___x_1377_ = lean_array_get_size(v_ks_1372_);
v___x_1378_ = lean_nat_dec_lt(v_x_1369_, v___x_1377_);
if (v___x_1378_ == 0)
{
lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1382_; 
lean_dec(v_x_1369_);
v___x_1379_ = lean_array_push(v_ks_1372_, v_x_1370_);
v___x_1380_ = lean_array_push(v_vs_1373_, v_x_1371_);
if (v_isShared_1376_ == 0)
{
lean_ctor_set(v___x_1375_, 1, v___x_1380_);
lean_ctor_set(v___x_1375_, 0, v___x_1379_);
v___x_1382_ = v___x_1375_;
goto v_reusejp_1381_;
}
else
{
lean_object* v_reuseFailAlloc_1383_; 
v_reuseFailAlloc_1383_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1383_, 0, v___x_1379_);
lean_ctor_set(v_reuseFailAlloc_1383_, 1, v___x_1380_);
v___x_1382_ = v_reuseFailAlloc_1383_;
goto v_reusejp_1381_;
}
v_reusejp_1381_:
{
return v___x_1382_;
}
}
else
{
lean_object* v_k_x27_1384_; uint8_t v___x_1385_; 
v_k_x27_1384_ = lean_array_fget_borrowed(v_ks_1372_, v_x_1369_);
v___x_1385_ = lean_name_eq(v_x_1370_, v_k_x27_1384_);
if (v___x_1385_ == 0)
{
lean_object* v___x_1387_; 
if (v_isShared_1376_ == 0)
{
v___x_1387_ = v___x_1375_;
goto v_reusejp_1386_;
}
else
{
lean_object* v_reuseFailAlloc_1391_; 
v_reuseFailAlloc_1391_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1391_, 0, v_ks_1372_);
lean_ctor_set(v_reuseFailAlloc_1391_, 1, v_vs_1373_);
v___x_1387_ = v_reuseFailAlloc_1391_;
goto v_reusejp_1386_;
}
v_reusejp_1386_:
{
lean_object* v___x_1388_; lean_object* v___x_1389_; 
v___x_1388_ = lean_unsigned_to_nat(1u);
v___x_1389_ = lean_nat_add(v_x_1369_, v___x_1388_);
lean_dec(v_x_1369_);
v_x_1368_ = v___x_1387_;
v_x_1369_ = v___x_1389_;
goto _start;
}
}
else
{
lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1395_; 
v___x_1392_ = lean_array_fset(v_ks_1372_, v_x_1369_, v_x_1370_);
v___x_1393_ = lean_array_fset(v_vs_1373_, v_x_1369_, v_x_1371_);
lean_dec(v_x_1369_);
if (v_isShared_1376_ == 0)
{
lean_ctor_set(v___x_1375_, 1, v___x_1393_);
lean_ctor_set(v___x_1375_, 0, v___x_1392_);
v___x_1395_ = v___x_1375_;
goto v_reusejp_1394_;
}
else
{
lean_object* v_reuseFailAlloc_1396_; 
v_reuseFailAlloc_1396_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1396_, 0, v___x_1392_);
lean_ctor_set(v_reuseFailAlloc_1396_, 1, v___x_1393_);
v___x_1395_ = v_reuseFailAlloc_1396_;
goto v_reusejp_1394_;
}
v_reusejp_1394_:
{
return v___x_1395_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2___redArg(lean_object* v_n_1398_, lean_object* v_k_1399_, lean_object* v_v_1400_){
_start:
{
lean_object* v___x_1401_; lean_object* v___x_1402_; 
v___x_1401_ = lean_unsigned_to_nat(0u);
v___x_1402_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2_spec__4___redArg(v_n_1398_, v___x_1401_, v_k_1399_, v_v_1400_);
return v___x_1402_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1403_; 
v___x_1403_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1403_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg(lean_object* v_x_1404_, size_t v_x_1405_, size_t v_x_1406_, lean_object* v_x_1407_, lean_object* v_x_1408_){
_start:
{
if (lean_obj_tag(v_x_1404_) == 0)
{
lean_object* v_es_1409_; size_t v___x_1410_; size_t v___x_1411_; lean_object* v_j_1412_; lean_object* v___x_1413_; uint8_t v___x_1414_; 
v_es_1409_ = lean_ctor_get(v_x_1404_, 0);
v___x_1410_ = ((size_t)31ULL);
v___x_1411_ = lean_usize_land(v_x_1405_, v___x_1410_);
v_j_1412_ = lean_usize_to_nat(v___x_1411_);
v___x_1413_ = lean_array_get_size(v_es_1409_);
v___x_1414_ = lean_nat_dec_lt(v_j_1412_, v___x_1413_);
if (v___x_1414_ == 0)
{
lean_dec(v_j_1412_);
lean_dec(v_x_1408_);
lean_dec(v_x_1407_);
return v_x_1404_;
}
else
{
lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1453_; 
lean_inc_ref(v_es_1409_);
v_isSharedCheck_1453_ = !lean_is_exclusive(v_x_1404_);
if (v_isSharedCheck_1453_ == 0)
{
lean_object* v_unused_1454_; 
v_unused_1454_ = lean_ctor_get(v_x_1404_, 0);
lean_dec(v_unused_1454_);
v___x_1416_ = v_x_1404_;
v_isShared_1417_ = v_isSharedCheck_1453_;
goto v_resetjp_1415_;
}
else
{
lean_dec(v_x_1404_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1453_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v_v_1418_; lean_object* v___x_1419_; lean_object* v_xs_x27_1420_; lean_object* v___y_1422_; 
v_v_1418_ = lean_array_fget(v_es_1409_, v_j_1412_);
v___x_1419_ = lean_box(0);
v_xs_x27_1420_ = lean_array_fset(v_es_1409_, v_j_1412_, v___x_1419_);
switch(lean_obj_tag(v_v_1418_))
{
case 0:
{
lean_object* v_key_1427_; lean_object* v_val_1428_; lean_object* v___x_1430_; uint8_t v_isShared_1431_; uint8_t v_isSharedCheck_1438_; 
v_key_1427_ = lean_ctor_get(v_v_1418_, 0);
v_val_1428_ = lean_ctor_get(v_v_1418_, 1);
v_isSharedCheck_1438_ = !lean_is_exclusive(v_v_1418_);
if (v_isSharedCheck_1438_ == 0)
{
v___x_1430_ = v_v_1418_;
v_isShared_1431_ = v_isSharedCheck_1438_;
goto v_resetjp_1429_;
}
else
{
lean_inc(v_val_1428_);
lean_inc(v_key_1427_);
lean_dec(v_v_1418_);
v___x_1430_ = lean_box(0);
v_isShared_1431_ = v_isSharedCheck_1438_;
goto v_resetjp_1429_;
}
v_resetjp_1429_:
{
uint8_t v___x_1432_; 
v___x_1432_ = lean_name_eq(v_x_1407_, v_key_1427_);
if (v___x_1432_ == 0)
{
lean_object* v___x_1433_; lean_object* v___x_1434_; 
lean_del_object(v___x_1430_);
v___x_1433_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1427_, v_val_1428_, v_x_1407_, v_x_1408_);
v___x_1434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1434_, 0, v___x_1433_);
v___y_1422_ = v___x_1434_;
goto v___jp_1421_;
}
else
{
lean_object* v___x_1436_; 
lean_dec(v_val_1428_);
lean_dec(v_key_1427_);
if (v_isShared_1431_ == 0)
{
lean_ctor_set(v___x_1430_, 1, v_x_1408_);
lean_ctor_set(v___x_1430_, 0, v_x_1407_);
v___x_1436_ = v___x_1430_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1437_; 
v_reuseFailAlloc_1437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1437_, 0, v_x_1407_);
lean_ctor_set(v_reuseFailAlloc_1437_, 1, v_x_1408_);
v___x_1436_ = v_reuseFailAlloc_1437_;
goto v_reusejp_1435_;
}
v_reusejp_1435_:
{
v___y_1422_ = v___x_1436_;
goto v___jp_1421_;
}
}
}
}
case 1:
{
lean_object* v_node_1439_; lean_object* v___x_1441_; uint8_t v_isShared_1442_; uint8_t v_isSharedCheck_1451_; 
v_node_1439_ = lean_ctor_get(v_v_1418_, 0);
v_isSharedCheck_1451_ = !lean_is_exclusive(v_v_1418_);
if (v_isSharedCheck_1451_ == 0)
{
v___x_1441_ = v_v_1418_;
v_isShared_1442_ = v_isSharedCheck_1451_;
goto v_resetjp_1440_;
}
else
{
lean_inc(v_node_1439_);
lean_dec(v_v_1418_);
v___x_1441_ = lean_box(0);
v_isShared_1442_ = v_isSharedCheck_1451_;
goto v_resetjp_1440_;
}
v_resetjp_1440_:
{
size_t v___x_1443_; size_t v___x_1444_; size_t v___x_1445_; size_t v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1449_; 
v___x_1443_ = ((size_t)5ULL);
v___x_1444_ = lean_usize_shift_right(v_x_1405_, v___x_1443_);
v___x_1445_ = ((size_t)1ULL);
v___x_1446_ = lean_usize_add(v_x_1406_, v___x_1445_);
v___x_1447_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg(v_node_1439_, v___x_1444_, v___x_1446_, v_x_1407_, v_x_1408_);
if (v_isShared_1442_ == 0)
{
lean_ctor_set(v___x_1441_, 0, v___x_1447_);
v___x_1449_ = v___x_1441_;
goto v_reusejp_1448_;
}
else
{
lean_object* v_reuseFailAlloc_1450_; 
v_reuseFailAlloc_1450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1450_, 0, v___x_1447_);
v___x_1449_ = v_reuseFailAlloc_1450_;
goto v_reusejp_1448_;
}
v_reusejp_1448_:
{
v___y_1422_ = v___x_1449_;
goto v___jp_1421_;
}
}
}
default: 
{
lean_object* v___x_1452_; 
v___x_1452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1452_, 0, v_x_1407_);
lean_ctor_set(v___x_1452_, 1, v_x_1408_);
v___y_1422_ = v___x_1452_;
goto v___jp_1421_;
}
}
v___jp_1421_:
{
lean_object* v___x_1423_; lean_object* v___x_1425_; 
v___x_1423_ = lean_array_fset(v_xs_x27_1420_, v_j_1412_, v___y_1422_);
lean_dec(v_j_1412_);
if (v_isShared_1417_ == 0)
{
lean_ctor_set(v___x_1416_, 0, v___x_1423_);
v___x_1425_ = v___x_1416_;
goto v_reusejp_1424_;
}
else
{
lean_object* v_reuseFailAlloc_1426_; 
v_reuseFailAlloc_1426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1426_, 0, v___x_1423_);
v___x_1425_ = v_reuseFailAlloc_1426_;
goto v_reusejp_1424_;
}
v_reusejp_1424_:
{
return v___x_1425_;
}
}
}
}
}
else
{
lean_object* v_ks_1455_; lean_object* v_vs_1456_; lean_object* v___x_1458_; uint8_t v_isShared_1459_; uint8_t v_isSharedCheck_1474_; 
v_ks_1455_ = lean_ctor_get(v_x_1404_, 0);
v_vs_1456_ = lean_ctor_get(v_x_1404_, 1);
v_isSharedCheck_1474_ = !lean_is_exclusive(v_x_1404_);
if (v_isSharedCheck_1474_ == 0)
{
v___x_1458_ = v_x_1404_;
v_isShared_1459_ = v_isSharedCheck_1474_;
goto v_resetjp_1457_;
}
else
{
lean_inc(v_vs_1456_);
lean_inc(v_ks_1455_);
lean_dec(v_x_1404_);
v___x_1458_ = lean_box(0);
v_isShared_1459_ = v_isSharedCheck_1474_;
goto v_resetjp_1457_;
}
v_resetjp_1457_:
{
lean_object* v___x_1461_; 
if (v_isShared_1459_ == 0)
{
v___x_1461_ = v___x_1458_;
goto v_reusejp_1460_;
}
else
{
lean_object* v_reuseFailAlloc_1473_; 
v_reuseFailAlloc_1473_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1473_, 0, v_ks_1455_);
lean_ctor_set(v_reuseFailAlloc_1473_, 1, v_vs_1456_);
v___x_1461_ = v_reuseFailAlloc_1473_;
goto v_reusejp_1460_;
}
v_reusejp_1460_:
{
lean_object* v_newNode_1462_; size_t v___x_1463_; uint8_t v___x_1464_; 
v_newNode_1462_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2___redArg(v___x_1461_, v_x_1407_, v_x_1408_);
v___x_1463_ = ((size_t)7ULL);
v___x_1464_ = lean_usize_dec_le(v___x_1463_, v_x_1406_);
if (v___x_1464_ == 0)
{
lean_object* v___x_1465_; lean_object* v___x_1466_; uint8_t v___x_1467_; 
v___x_1465_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1462_);
v___x_1466_ = lean_unsigned_to_nat(4u);
v___x_1467_ = lean_nat_dec_lt(v___x_1465_, v___x_1466_);
lean_dec(v___x_1465_);
if (v___x_1467_ == 0)
{
lean_object* v_ks_1468_; lean_object* v_vs_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; 
v_ks_1468_ = lean_ctor_get(v_newNode_1462_, 0);
lean_inc_ref(v_ks_1468_);
v_vs_1469_ = lean_ctor_get(v_newNode_1462_, 1);
lean_inc_ref(v_vs_1469_);
lean_dec_ref(v_newNode_1462_);
v___x_1470_ = lean_unsigned_to_nat(0u);
v___x_1471_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg___closed__0);
v___x_1472_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__3___redArg(v_x_1406_, v_ks_1468_, v_vs_1469_, v___x_1470_, v___x_1471_);
lean_dec_ref(v_vs_1469_);
lean_dec_ref(v_ks_1468_);
return v___x_1472_;
}
else
{
return v_newNode_1462_;
}
}
else
{
return v_newNode_1462_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__3___redArg(size_t v_depth_1475_, lean_object* v_keys_1476_, lean_object* v_vals_1477_, lean_object* v_i_1478_, lean_object* v_entries_1479_){
_start:
{
lean_object* v___x_1480_; uint8_t v___x_1481_; 
v___x_1480_ = lean_array_get_size(v_keys_1476_);
v___x_1481_ = lean_nat_dec_lt(v_i_1478_, v___x_1480_);
if (v___x_1481_ == 0)
{
lean_dec(v_i_1478_);
return v_entries_1479_;
}
else
{
lean_object* v_k_1482_; lean_object* v_v_1483_; uint64_t v___y_1485_; 
v_k_1482_ = lean_array_fget_borrowed(v_keys_1476_, v_i_1478_);
v_v_1483_ = lean_array_fget_borrowed(v_vals_1477_, v_i_1478_);
if (lean_obj_tag(v_k_1482_) == 0)
{
uint64_t v___x_1496_; 
v___x_1496_ = 1723ULL;
v___y_1485_ = v___x_1496_;
goto v___jp_1484_;
}
else
{
uint64_t v_hash_1497_; 
v_hash_1497_ = lean_ctor_get_uint64(v_k_1482_, sizeof(void*)*2);
v___y_1485_ = v_hash_1497_;
goto v___jp_1484_;
}
v___jp_1484_:
{
size_t v_h_1486_; size_t v___x_1487_; lean_object* v___x_1488_; size_t v___x_1489_; size_t v___x_1490_; size_t v___x_1491_; size_t v_h_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; 
v_h_1486_ = lean_uint64_to_usize(v___y_1485_);
v___x_1487_ = ((size_t)5ULL);
v___x_1488_ = lean_unsigned_to_nat(1u);
v___x_1489_ = ((size_t)1ULL);
v___x_1490_ = lean_usize_sub(v_depth_1475_, v___x_1489_);
v___x_1491_ = lean_usize_mul(v___x_1487_, v___x_1490_);
v_h_1492_ = lean_usize_shift_right(v_h_1486_, v___x_1491_);
v___x_1493_ = lean_nat_add(v_i_1478_, v___x_1488_);
lean_dec(v_i_1478_);
lean_inc(v_v_1483_);
lean_inc(v_k_1482_);
v___x_1494_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg(v_entries_1479_, v_h_1492_, v_depth_1475_, v_k_1482_, v_v_1483_);
v_i_1478_ = v___x_1493_;
v_entries_1479_ = v___x_1494_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_depth_1498_, lean_object* v_keys_1499_, lean_object* v_vals_1500_, lean_object* v_i_1501_, lean_object* v_entries_1502_){
_start:
{
size_t v_depth_boxed_1503_; lean_object* v_res_1504_; 
v_depth_boxed_1503_ = lean_unbox_usize(v_depth_1498_);
lean_dec(v_depth_1498_);
v_res_1504_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__3___redArg(v_depth_boxed_1503_, v_keys_1499_, v_vals_1500_, v_i_1501_, v_entries_1502_);
lean_dec_ref(v_vals_1500_);
lean_dec_ref(v_keys_1499_);
return v_res_1504_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg___boxed(lean_object* v_x_1505_, lean_object* v_x_1506_, lean_object* v_x_1507_, lean_object* v_x_1508_, lean_object* v_x_1509_){
_start:
{
size_t v_x_940__boxed_1510_; size_t v_x_941__boxed_1511_; lean_object* v_res_1512_; 
v_x_940__boxed_1510_ = lean_unbox_usize(v_x_1506_);
lean_dec(v_x_1506_);
v_x_941__boxed_1511_ = lean_unbox_usize(v_x_1507_);
lean_dec(v_x_1507_);
v_res_1512_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg(v_x_1505_, v_x_940__boxed_1510_, v_x_941__boxed_1511_, v_x_1508_, v_x_1509_);
return v_res_1512_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0___redArg(lean_object* v_x_1513_, lean_object* v_x_1514_, lean_object* v_x_1515_){
_start:
{
uint64_t v___y_1517_; 
if (lean_obj_tag(v_x_1514_) == 0)
{
uint64_t v___x_1521_; 
v___x_1521_ = 1723ULL;
v___y_1517_ = v___x_1521_;
goto v___jp_1516_;
}
else
{
uint64_t v_hash_1522_; 
v_hash_1522_ = lean_ctor_get_uint64(v_x_1514_, sizeof(void*)*2);
v___y_1517_ = v_hash_1522_;
goto v___jp_1516_;
}
v___jp_1516_:
{
size_t v___x_1518_; size_t v___x_1519_; lean_object* v___x_1520_; 
v___x_1518_ = lean_uint64_to_usize(v___y_1517_);
v___x_1519_ = ((size_t)1ULL);
v___x_1520_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg(v_x_1513_, v___x_1518_, v___x_1519_, v_x_1514_, v_x_1515_);
return v___x_1520_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__2(lean_object* v_declName_1528_, lean_object* v_as_1529_, size_t v_i_1530_, size_t v_stop_1531_, lean_object* v_b_1532_){
_start:
{
lean_object* v___y_1534_; uint8_t v___x_1538_; 
v___x_1538_ = lean_usize_dec_eq(v_i_1530_, v_stop_1531_);
if (v___x_1538_ == 0)
{
lean_object* v___x_1539_; lean_object* v___x_1540_; 
v___x_1539_ = lean_array_uget_borrowed(v_as_1529_, v_i_1530_);
v___x_1540_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0___redArg(v_b_1532_, v___x_1539_);
if (lean_obj_tag(v___x_1540_) == 0)
{
lean_object* v___x_1541_; 
lean_inc(v_declName_1528_);
lean_inc(v___x_1539_);
v___x_1541_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0___redArg(v_b_1532_, v___x_1539_, v_declName_1528_);
v___y_1534_ = v___x_1541_;
goto v___jp_1533_;
}
else
{
lean_object* v_val_1542_; uint8_t v___x_1543_; 
v_val_1542_ = lean_ctor_get(v___x_1540_, 0);
lean_inc(v_val_1542_);
lean_dec_ref_known(v___x_1540_, 1);
v___x_1543_ = lean_name_eq(v_val_1542_, v_declName_1528_);
if (v___x_1543_ == 0)
{
uint8_t v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; 
v___x_1544_ = 1;
v___x_1545_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__2___closed__0));
v___x_1546_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__2___closed__1));
v___x_1547_ = lean_unsigned_to_nat(227u);
v___x_1548_ = lean_unsigned_to_nat(10u);
v___x_1549_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__2___closed__2));
lean_inc(v___x_1539_);
v___x_1550_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1539_, v___x_1544_);
v___x_1551_ = lean_string_append(v___x_1549_, v___x_1550_);
lean_dec_ref(v___x_1550_);
v___x_1552_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__2___closed__3));
v___x_1553_ = lean_string_append(v___x_1551_, v___x_1552_);
v___x_1554_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_val_1542_, v___x_1544_);
v___x_1555_ = lean_string_append(v___x_1553_, v___x_1554_);
lean_dec_ref(v___x_1554_);
v___x_1556_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__2___closed__4));
v___x_1557_ = lean_string_append(v___x_1555_, v___x_1556_);
v___x_1558_ = l_mkPanicMessageWithDecl(v___x_1545_, v___x_1546_, v___x_1547_, v___x_1548_, v___x_1557_);
lean_dec_ref(v___x_1557_);
v___x_1559_ = lean_panic_fn_borrowed(v_b_1532_, v___x_1558_);
lean_dec_ref(v_b_1532_);
v___y_1534_ = v___x_1559_;
goto v___jp_1533_;
}
else
{
lean_dec(v_val_1542_);
v___y_1534_ = v_b_1532_;
goto v___jp_1533_;
}
}
}
else
{
lean_dec(v_declName_1528_);
return v_b_1532_;
}
v___jp_1533_:
{
size_t v___x_1535_; size_t v___x_1536_; 
v___x_1535_ = ((size_t)1ULL);
v___x_1536_ = lean_usize_add(v_i_1530_, v___x_1535_);
v_i_1530_ = v___x_1536_;
v_b_1532_ = v___y_1534_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__2___boxed(lean_object* v_declName_1560_, lean_object* v_as_1561_, lean_object* v_i_1562_, lean_object* v_stop_1563_, lean_object* v_b_1564_){
_start:
{
size_t v_i_boxed_1565_; size_t v_stop_boxed_1566_; lean_object* v_res_1567_; 
v_i_boxed_1565_ = lean_unbox_usize(v_i_1562_);
lean_dec(v_i_1562_);
v_stop_boxed_1566_ = lean_unbox_usize(v_stop_1563_);
lean_dec(v_stop_1563_);
v_res_1567_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__2(v_declName_1560_, v_as_1561_, v_i_boxed_1565_, v_stop_boxed_1566_, v_b_1564_);
lean_dec_ref(v_as_1561_);
return v_res_1567_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg___lam__0(lean_object* v_eqThms_1568_, lean_object* v_declName_1569_, lean_object* v_s_1570_){
_start:
{
lean_object* v___x_1571_; lean_object* v___x_1572_; uint8_t v___x_1573_; 
v___x_1571_ = lean_unsigned_to_nat(0u);
v___x_1572_ = lean_array_get_size(v_eqThms_1568_);
v___x_1573_ = lean_nat_dec_lt(v___x_1571_, v___x_1572_);
if (v___x_1573_ == 0)
{
lean_dec(v_declName_1569_);
return v_s_1570_;
}
else
{
size_t v___x_1574_; size_t v___x_1575_; lean_object* v___x_1576_; 
v___x_1574_ = ((size_t)0ULL);
v___x_1575_ = lean_usize_of_nat(v___x_1572_);
v___x_1576_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__2(v_declName_1569_, v_eqThms_1568_, v___x_1574_, v___x_1575_, v_s_1570_);
return v___x_1576_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg___lam__0___boxed(lean_object* v_eqThms_1577_, lean_object* v_declName_1578_, lean_object* v_s_1579_){
_start:
{
lean_object* v_res_1580_; 
v_res_1580_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg___lam__0(v_eqThms_1577_, v_declName_1578_, v_s_1579_);
lean_dec_ref(v_eqThms_1577_);
return v_res_1580_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg(lean_object* v_declName_1581_, lean_object* v_eqThms_1582_, lean_object* v_a_1583_){
_start:
{
lean_object* v___f_1585_; lean_object* v___x_1586_; lean_object* v_env_1587_; lean_object* v_nextMacroScope_1588_; lean_object* v_ngen_1589_; lean_object* v_auxDeclNGen_1590_; lean_object* v_traceState_1591_; lean_object* v_recordedDeps_1592_; lean_object* v_messages_1593_; lean_object* v_infoState_1594_; lean_object* v_snapshotTasks_1595_; lean_object* v___x_1597_; uint8_t v_isShared_1598_; uint8_t v_isSharedCheck_1611_; 
v___f_1585_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1585_, 0, v_eqThms_1582_);
lean_closure_set(v___f_1585_, 1, v_declName_1581_);
v___x_1586_ = lean_st_ref_take(v_a_1583_);
v_env_1587_ = lean_ctor_get(v___x_1586_, 0);
v_nextMacroScope_1588_ = lean_ctor_get(v___x_1586_, 1);
v_ngen_1589_ = lean_ctor_get(v___x_1586_, 2);
v_auxDeclNGen_1590_ = lean_ctor_get(v___x_1586_, 3);
v_traceState_1591_ = lean_ctor_get(v___x_1586_, 4);
v_recordedDeps_1592_ = lean_ctor_get(v___x_1586_, 6);
v_messages_1593_ = lean_ctor_get(v___x_1586_, 7);
v_infoState_1594_ = lean_ctor_get(v___x_1586_, 8);
v_snapshotTasks_1595_ = lean_ctor_get(v___x_1586_, 9);
v_isSharedCheck_1611_ = !lean_is_exclusive(v___x_1586_);
if (v_isSharedCheck_1611_ == 0)
{
lean_object* v_unused_1612_; 
v_unused_1612_ = lean_ctor_get(v___x_1586_, 5);
lean_dec(v_unused_1612_);
v___x_1597_ = v___x_1586_;
v_isShared_1598_ = v_isSharedCheck_1611_;
goto v_resetjp_1596_;
}
else
{
lean_inc(v_snapshotTasks_1595_);
lean_inc(v_infoState_1594_);
lean_inc(v_messages_1593_);
lean_inc(v_recordedDeps_1592_);
lean_inc(v_traceState_1591_);
lean_inc(v_auxDeclNGen_1590_);
lean_inc(v_ngen_1589_);
lean_inc(v_nextMacroScope_1588_);
lean_inc(v_env_1587_);
lean_dec(v___x_1586_);
v___x_1597_ = lean_box(0);
v_isShared_1598_ = v_isSharedCheck_1611_;
goto v_resetjp_1596_;
}
v_resetjp_1596_:
{
lean_object* v___x_1599_; lean_object* v_asyncMode_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; uint8_t v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1607_; 
v___x_1599_ = l_Lean_Meta_eqnsExt;
v_asyncMode_1600_ = lean_ctor_get(v___x_1599_, 2);
v___x_1601_ = lean_box(0);
v___x_1602_ = lean_box(0);
v___x_1603_ = 1;
v___x_1604_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v___x_1599_, v_env_1587_, v___f_1585_, v_asyncMode_1600_, v___x_1602_, v___x_1603_);
v___x_1605_ = lean_obj_once(&l_Lean_Meta_withEqnOptions___redArg___closed__1, &l_Lean_Meta_withEqnOptions___redArg___closed__1_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__1);
if (v_isShared_1598_ == 0)
{
lean_ctor_set(v___x_1597_, 5, v___x_1605_);
lean_ctor_set(v___x_1597_, 0, v___x_1604_);
v___x_1607_ = v___x_1597_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1610_; 
v_reuseFailAlloc_1610_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1610_, 0, v___x_1604_);
lean_ctor_set(v_reuseFailAlloc_1610_, 1, v_nextMacroScope_1588_);
lean_ctor_set(v_reuseFailAlloc_1610_, 2, v_ngen_1589_);
lean_ctor_set(v_reuseFailAlloc_1610_, 3, v_auxDeclNGen_1590_);
lean_ctor_set(v_reuseFailAlloc_1610_, 4, v_traceState_1591_);
lean_ctor_set(v_reuseFailAlloc_1610_, 5, v___x_1605_);
lean_ctor_set(v_reuseFailAlloc_1610_, 6, v_recordedDeps_1592_);
lean_ctor_set(v_reuseFailAlloc_1610_, 7, v_messages_1593_);
lean_ctor_set(v_reuseFailAlloc_1610_, 8, v_infoState_1594_);
lean_ctor_set(v_reuseFailAlloc_1610_, 9, v_snapshotTasks_1595_);
v___x_1607_ = v_reuseFailAlloc_1610_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
lean_object* v___x_1608_; lean_object* v___x_1609_; 
v___x_1608_ = lean_st_ref_put(v_a_1583_, v___x_1607_);
v___x_1609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1609_, 0, v___x_1601_);
return v___x_1609_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg___boxed(lean_object* v_declName_1613_, lean_object* v_eqThms_1614_, lean_object* v_a_1615_, lean_object* v_a_1616_){
_start:
{
lean_object* v_res_1617_; 
v_res_1617_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg(v_declName_1613_, v_eqThms_1614_, v_a_1615_);
lean_dec(v_a_1615_);
return v_res_1617_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms(lean_object* v_declName_1618_, lean_object* v_eqThms_1619_, lean_object* v_a_1620_, lean_object* v_a_1621_){
_start:
{
lean_object* v___x_1623_; 
v___x_1623_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg(v_declName_1618_, v_eqThms_1619_, v_a_1621_);
return v___x_1623_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___boxed(lean_object* v_declName_1624_, lean_object* v_eqThms_1625_, lean_object* v_a_1626_, lean_object* v_a_1627_, lean_object* v_a_1628_){
_start:
{
lean_object* v_res_1629_; 
v_res_1629_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms(v_declName_1624_, v_eqThms_1625_, v_a_1626_, v_a_1627_);
lean_dec(v_a_1627_);
lean_dec_ref(v_a_1626_);
return v_res_1629_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0(lean_object* v_00_u03b2_1630_, lean_object* v_x_1631_, lean_object* v_x_1632_, lean_object* v_x_1633_){
_start:
{
lean_object* v___x_1634_; 
v___x_1634_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0___redArg(v_x_1631_, v_x_1632_, v_x_1633_);
return v___x_1634_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0(lean_object* v_00_u03b2_1635_, lean_object* v_x_1636_, size_t v_x_1637_, size_t v_x_1638_, lean_object* v_x_1639_, lean_object* v_x_1640_){
_start:
{
lean_object* v___x_1641_; 
v___x_1641_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg(v_x_1636_, v_x_1637_, v_x_1638_, v_x_1639_, v_x_1640_);
return v___x_1641_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1642_, lean_object* v_x_1643_, lean_object* v_x_1644_, lean_object* v_x_1645_, lean_object* v_x_1646_, lean_object* v_x_1647_){
_start:
{
size_t v_x_1254__boxed_1648_; size_t v_x_1255__boxed_1649_; lean_object* v_res_1650_; 
v_x_1254__boxed_1648_ = lean_unbox_usize(v_x_1644_);
lean_dec(v_x_1644_);
v_x_1255__boxed_1649_ = lean_unbox_usize(v_x_1645_);
lean_dec(v_x_1645_);
v_res_1650_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0(v_00_u03b2_1642_, v_x_1643_, v_x_1254__boxed_1648_, v_x_1255__boxed_1649_, v_x_1646_, v_x_1647_);
return v_res_1650_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1651_, lean_object* v_n_1652_, lean_object* v_k_1653_, lean_object* v_v_1654_){
_start:
{
lean_object* v___x_1655_; 
v___x_1655_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2___redArg(v_n_1652_, v_k_1653_, v_v_1654_);
return v___x_1655_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_1656_, size_t v_depth_1657_, lean_object* v_keys_1658_, lean_object* v_vals_1659_, lean_object* v_heq_1660_, lean_object* v_i_1661_, lean_object* v_entries_1662_){
_start:
{
lean_object* v___x_1663_; 
v___x_1663_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__3___redArg(v_depth_1657_, v_keys_1658_, v_vals_1659_, v_i_1661_, v_entries_1662_);
return v___x_1663_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_1664_, lean_object* v_depth_1665_, lean_object* v_keys_1666_, lean_object* v_vals_1667_, lean_object* v_heq_1668_, lean_object* v_i_1669_, lean_object* v_entries_1670_){
_start:
{
size_t v_depth_boxed_1671_; lean_object* v_res_1672_; 
v_depth_boxed_1671_ = lean_unbox_usize(v_depth_1665_);
lean_dec(v_depth_1665_);
v_res_1672_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__3(v_00_u03b2_1664_, v_depth_boxed_1671_, v_keys_1666_, v_vals_1667_, v_heq_1668_, v_i_1669_, v_entries_1670_);
lean_dec_ref(v_vals_1667_);
lean_dec_ref(v_keys_1666_);
return v_res_1672_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2_spec__4(lean_object* v_00_u03b2_1673_, lean_object* v_x_1674_, lean_object* v_x_1675_, lean_object* v_x_1676_, lean_object* v_x_1677_){
_start:
{
lean_object* v___x_1678_; 
v___x_1678_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2_spec__4___redArg(v_x_1674_, v_x_1675_, v_x_1676_, v_x_1677_);
return v___x_1678_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop___redArg(lean_object* v_declName_1679_, lean_object* v_env_1680_, lean_object* v_idx_1681_, lean_object* v_eqs_1682_){
_start:
{
lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v_nextEq_1689_; uint8_t v___x_1690_; 
v___x_1684_ = ((lean_object*)(l_Lean_Meta_eqnThmSuffixBasePrefix___closed__0));
v___x_1685_ = lean_unsigned_to_nat(1u);
v___x_1686_ = lean_nat_add(v_idx_1681_, v___x_1685_);
lean_dec(v_idx_1681_);
lean_inc(v___x_1686_);
v___x_1687_ = l_Nat_reprFast(v___x_1686_);
v___x_1688_ = lean_string_append(v___x_1684_, v___x_1687_);
lean_dec_ref(v___x_1687_);
lean_inc(v_declName_1679_);
lean_inc_ref(v_env_1680_);
v_nextEq_1689_ = l_Lean_Meta_mkEqLikeNameFor(v_env_1680_, v_declName_1679_, v___x_1688_);
v___x_1690_ = l_Lean_Environment_containsOnBranch(v_env_1680_, v_nextEq_1689_);
if (v___x_1690_ == 0)
{
lean_object* v___x_1691_; 
lean_dec(v_nextEq_1689_);
lean_dec(v___x_1686_);
lean_dec_ref(v_env_1680_);
lean_dec(v_declName_1679_);
v___x_1691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1691_, 0, v_eqs_1682_);
return v___x_1691_;
}
else
{
lean_object* v___x_1692_; 
v___x_1692_ = lean_array_push(v_eqs_1682_, v_nextEq_1689_);
v_idx_1681_ = v___x_1686_;
v_eqs_1682_ = v___x_1692_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop___redArg___boxed(lean_object* v_declName_1694_, lean_object* v_env_1695_, lean_object* v_idx_1696_, lean_object* v_eqs_1697_, lean_object* v_a_1698_){
_start:
{
lean_object* v_res_1699_; 
v_res_1699_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop___redArg(v_declName_1694_, v_env_1695_, v_idx_1696_, v_eqs_1697_);
return v_res_1699_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop(lean_object* v_declName_1700_, lean_object* v_env_1701_, lean_object* v_idx_1702_, lean_object* v_eqs_1703_, lean_object* v_a_1704_, lean_object* v_a_1705_, lean_object* v_a_1706_, lean_object* v_a_1707_){
_start:
{
lean_object* v___x_1709_; 
v___x_1709_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop___redArg(v_declName_1700_, v_env_1701_, v_idx_1702_, v_eqs_1703_);
return v___x_1709_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop___boxed(lean_object* v_declName_1710_, lean_object* v_env_1711_, lean_object* v_idx_1712_, lean_object* v_eqs_1713_, lean_object* v_a_1714_, lean_object* v_a_1715_, lean_object* v_a_1716_, lean_object* v_a_1717_, lean_object* v_a_1718_){
_start:
{
lean_object* v_res_1719_; 
v_res_1719_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop(v_declName_1710_, v_env_1711_, v_idx_1712_, v_eqs_1713_, v_a_1714_, v_a_1715_, v_a_1716_, v_a_1717_);
lean_dec(v_a_1717_);
lean_dec_ref(v_a_1716_);
lean_dec(v_a_1715_);
lean_dec_ref(v_a_1714_);
return v_res_1719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_alreadyGenerated_x3f___redArg(lean_object* v_declName_1720_, lean_object* v_a_1721_){
_start:
{
lean_object* v___x_1723_; lean_object* v_env_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; uint8_t v___x_1727_; uint8_t v___x_1728_; 
v___x_1723_ = lean_st_ref_get(v_a_1721_);
v_env_1724_ = lean_ctor_get(v___x_1723_, 0);
lean_inc_ref_n(v_env_1724_, 3);
lean_dec(v___x_1723_);
v___x_1725_ = ((lean_object*)(l_Lean_Meta_eqn1ThmSuffix___closed__0));
lean_inc(v_declName_1720_);
v___x_1726_ = l_Lean_Meta_mkEqLikeNameFor(v_env_1724_, v_declName_1720_, v___x_1725_);
v___x_1727_ = 1;
lean_inc(v___x_1726_);
v___x_1728_ = l_Lean_Environment_contains(v_env_1724_, v___x_1726_, v___x_1727_);
if (v___x_1728_ == 0)
{
lean_object* v___x_1729_; lean_object* v___x_1730_; 
lean_dec(v___x_1726_);
lean_dec_ref(v_env_1724_);
lean_dec(v_declName_1720_);
v___x_1729_ = lean_box(0);
v___x_1730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1730_, 0, v___x_1729_);
return v___x_1730_;
}
else
{
lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; 
v___x_1731_ = lean_unsigned_to_nat(1u);
v___x_1732_ = lean_mk_empty_array_with_capacity(v___x_1731_);
v___x_1733_ = lean_array_push(v___x_1732_, v___x_1726_);
lean_inc(v_declName_1720_);
v___x_1734_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop___redArg(v_declName_1720_, v_env_1724_, v___x_1731_, v___x_1733_);
if (lean_obj_tag(v___x_1734_) == 0)
{
lean_object* v_a_1735_; lean_object* v___x_1736_; lean_object* v___x_1738_; uint8_t v_isShared_1739_; uint8_t v_isSharedCheck_1744_; 
v_a_1735_ = lean_ctor_get(v___x_1734_, 0);
lean_inc_n(v_a_1735_, 2);
lean_dec_ref_known(v___x_1734_, 1);
v___x_1736_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg(v_declName_1720_, v_a_1735_, v_a_1721_);
v_isSharedCheck_1744_ = !lean_is_exclusive(v___x_1736_);
if (v_isSharedCheck_1744_ == 0)
{
lean_object* v_unused_1745_; 
v_unused_1745_ = lean_ctor_get(v___x_1736_, 0);
lean_dec(v_unused_1745_);
v___x_1738_ = v___x_1736_;
v_isShared_1739_ = v_isSharedCheck_1744_;
goto v_resetjp_1737_;
}
else
{
lean_dec(v___x_1736_);
v___x_1738_ = lean_box(0);
v_isShared_1739_ = v_isSharedCheck_1744_;
goto v_resetjp_1737_;
}
v_resetjp_1737_:
{
lean_object* v___x_1740_; lean_object* v___x_1742_; 
v___x_1740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1740_, 0, v_a_1735_);
if (v_isShared_1739_ == 0)
{
lean_ctor_set(v___x_1738_, 0, v___x_1740_);
v___x_1742_ = v___x_1738_;
goto v_reusejp_1741_;
}
else
{
lean_object* v_reuseFailAlloc_1743_; 
v_reuseFailAlloc_1743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1743_, 0, v___x_1740_);
v___x_1742_ = v_reuseFailAlloc_1743_;
goto v_reusejp_1741_;
}
v_reusejp_1741_:
{
return v___x_1742_;
}
}
}
else
{
lean_object* v_a_1746_; lean_object* v___x_1748_; uint8_t v_isShared_1749_; uint8_t v_isSharedCheck_1753_; 
lean_dec(v_declName_1720_);
v_a_1746_ = lean_ctor_get(v___x_1734_, 0);
v_isSharedCheck_1753_ = !lean_is_exclusive(v___x_1734_);
if (v_isSharedCheck_1753_ == 0)
{
v___x_1748_ = v___x_1734_;
v_isShared_1749_ = v_isSharedCheck_1753_;
goto v_resetjp_1747_;
}
else
{
lean_inc(v_a_1746_);
lean_dec(v___x_1734_);
v___x_1748_ = lean_box(0);
v_isShared_1749_ = v_isSharedCheck_1753_;
goto v_resetjp_1747_;
}
v_resetjp_1747_:
{
lean_object* v___x_1751_; 
if (v_isShared_1749_ == 0)
{
v___x_1751_ = v___x_1748_;
goto v_reusejp_1750_;
}
else
{
lean_object* v_reuseFailAlloc_1752_; 
v_reuseFailAlloc_1752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1752_, 0, v_a_1746_);
v___x_1751_ = v_reuseFailAlloc_1752_;
goto v_reusejp_1750_;
}
v_reusejp_1750_:
{
return v___x_1751_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_alreadyGenerated_x3f___redArg___boxed(lean_object* v_declName_1754_, lean_object* v_a_1755_, lean_object* v_a_1756_){
_start:
{
lean_object* v_res_1757_; 
v_res_1757_ = l_Lean_Meta_alreadyGenerated_x3f___redArg(v_declName_1754_, v_a_1755_);
lean_dec(v_a_1755_);
return v_res_1757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_alreadyGenerated_x3f(lean_object* v_declName_1758_, lean_object* v_a_1759_, lean_object* v_a_1760_, lean_object* v_a_1761_, lean_object* v_a_1762_){
_start:
{
lean_object* v___x_1764_; 
v___x_1764_ = l_Lean_Meta_alreadyGenerated_x3f___redArg(v_declName_1758_, v_a_1762_);
return v___x_1764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_alreadyGenerated_x3f___boxed(lean_object* v_declName_1765_, lean_object* v_a_1766_, lean_object* v_a_1767_, lean_object* v_a_1768_, lean_object* v_a_1769_, lean_object* v_a_1770_){
_start:
{
lean_object* v_res_1771_; 
v_res_1771_ = l_Lean_Meta_alreadyGenerated_x3f(v_declName_1765_, v_a_1766_, v_a_1767_, v_a_1768_, v_a_1769_);
lean_dec(v_a_1769_);
lean_dec_ref(v_a_1768_);
lean_dec(v_a_1767_);
lean_dec_ref(v_a_1766_);
return v_res_1771_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___redArg(lean_object* v_lctx_1772_, lean_object* v_localInsts_1773_, lean_object* v_x_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_){
_start:
{
lean_object* v___x_1780_; 
v___x_1780_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_1772_, v_localInsts_1773_, v_x_1774_, v___y_1775_, v___y_1776_, v___y_1777_, v___y_1778_);
if (lean_obj_tag(v___x_1780_) == 0)
{
lean_object* v_a_1781_; lean_object* v___x_1783_; uint8_t v_isShared_1784_; uint8_t v_isSharedCheck_1788_; 
v_a_1781_ = lean_ctor_get(v___x_1780_, 0);
v_isSharedCheck_1788_ = !lean_is_exclusive(v___x_1780_);
if (v_isSharedCheck_1788_ == 0)
{
v___x_1783_ = v___x_1780_;
v_isShared_1784_ = v_isSharedCheck_1788_;
goto v_resetjp_1782_;
}
else
{
lean_inc(v_a_1781_);
lean_dec(v___x_1780_);
v___x_1783_ = lean_box(0);
v_isShared_1784_ = v_isSharedCheck_1788_;
goto v_resetjp_1782_;
}
v_resetjp_1782_:
{
lean_object* v___x_1786_; 
if (v_isShared_1784_ == 0)
{
v___x_1786_ = v___x_1783_;
goto v_reusejp_1785_;
}
else
{
lean_object* v_reuseFailAlloc_1787_; 
v_reuseFailAlloc_1787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1787_, 0, v_a_1781_);
v___x_1786_ = v_reuseFailAlloc_1787_;
goto v_reusejp_1785_;
}
v_reusejp_1785_:
{
return v___x_1786_;
}
}
}
else
{
lean_object* v_a_1789_; lean_object* v___x_1791_; uint8_t v_isShared_1792_; uint8_t v_isSharedCheck_1796_; 
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
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___redArg___boxed(lean_object* v_lctx_1797_, lean_object* v_localInsts_1798_, lean_object* v_x_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_){
_start:
{
lean_object* v_res_1805_; 
v_res_1805_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___redArg(v_lctx_1797_, v_localInsts_1798_, v_x_1799_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_);
lean_dec(v___y_1803_);
lean_dec_ref(v___y_1802_);
lean_dec(v___y_1801_);
lean_dec_ref(v___y_1800_);
return v_res_1805_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1(lean_object* v_00_u03b1_1806_, lean_object* v_lctx_1807_, lean_object* v_localInsts_1808_, lean_object* v_x_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_){
_start:
{
lean_object* v___x_1815_; 
v___x_1815_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___redArg(v_lctx_1807_, v_localInsts_1808_, v_x_1809_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_);
return v___x_1815_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___boxed(lean_object* v_00_u03b1_1816_, lean_object* v_lctx_1817_, lean_object* v_localInsts_1818_, lean_object* v_x_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_){
_start:
{
lean_object* v_res_1825_; 
v_res_1825_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1(v_00_u03b1_1816_, v_lctx_1817_, v_localInsts_1818_, v_x_1819_, v___y_1820_, v___y_1821_, v___y_1822_, v___y_1823_);
lean_dec(v___y_1823_);
lean_dec_ref(v___y_1822_);
lean_dec(v___y_1821_);
lean_dec_ref(v___y_1820_);
return v_res_1825_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg(lean_object* v_declName_1829_, lean_object* v_as_x27_1830_, lean_object* v_b_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_){
_start:
{
if (lean_obj_tag(v_as_x27_1830_) == 0)
{
lean_object* v___x_1837_; 
lean_dec(v_declName_1829_);
v___x_1837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1837_, 0, v_b_1831_);
return v___x_1837_;
}
else
{
lean_object* v_head_1838_; lean_object* v_tail_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; 
lean_dec_ref(v_b_1831_);
v_head_1838_ = lean_ctor_get(v_as_x27_1830_, 0);
v_tail_1839_ = lean_ctor_get(v_as_x27_1830_, 1);
v___x_1840_ = lean_box(0);
v___x_1841_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg___closed__0));
lean_inc(v_head_1838_);
lean_inc(v___y_1835_);
lean_inc_ref(v___y_1834_);
lean_inc(v___y_1833_);
lean_inc_ref(v___y_1832_);
lean_inc(v_declName_1829_);
v___x_1842_ = lean_apply_6(v_head_1838_, v_declName_1829_, v___y_1832_, v___y_1833_, v___y_1834_, v___y_1835_, lean_box(0));
if (lean_obj_tag(v___x_1842_) == 0)
{
lean_object* v_a_1843_; 
v_a_1843_ = lean_ctor_get(v___x_1842_, 0);
lean_inc(v_a_1843_);
lean_dec_ref_known(v___x_1842_, 1);
if (lean_obj_tag(v_a_1843_) == 1)
{
lean_object* v_val_1844_; lean_object* v___x_1845_; lean_object* v___x_1847_; uint8_t v_isShared_1848_; uint8_t v_isSharedCheck_1854_; 
v_val_1844_ = lean_ctor_get(v_a_1843_, 0);
lean_inc(v_val_1844_);
v___x_1845_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg(v_declName_1829_, v_val_1844_, v___y_1835_);
v_isSharedCheck_1854_ = !lean_is_exclusive(v___x_1845_);
if (v_isSharedCheck_1854_ == 0)
{
lean_object* v_unused_1855_; 
v_unused_1855_ = lean_ctor_get(v___x_1845_, 0);
lean_dec(v_unused_1855_);
v___x_1847_ = v___x_1845_;
v_isShared_1848_ = v_isSharedCheck_1854_;
goto v_resetjp_1846_;
}
else
{
lean_dec(v___x_1845_);
v___x_1847_ = lean_box(0);
v_isShared_1848_ = v_isSharedCheck_1854_;
goto v_resetjp_1846_;
}
v_resetjp_1846_:
{
lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1852_; 
v___x_1849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1849_, 0, v_a_1843_);
v___x_1850_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1850_, 0, v___x_1849_);
lean_ctor_set(v___x_1850_, 1, v___x_1840_);
if (v_isShared_1848_ == 0)
{
lean_ctor_set(v___x_1847_, 0, v___x_1850_);
v___x_1852_ = v___x_1847_;
goto v_reusejp_1851_;
}
else
{
lean_object* v_reuseFailAlloc_1853_; 
v_reuseFailAlloc_1853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1853_, 0, v___x_1850_);
v___x_1852_ = v_reuseFailAlloc_1853_;
goto v_reusejp_1851_;
}
v_reusejp_1851_:
{
return v___x_1852_;
}
}
}
else
{
lean_dec(v_a_1843_);
v_as_x27_1830_ = v_tail_1839_;
v_b_1831_ = v___x_1841_;
goto _start;
}
}
else
{
lean_object* v_a_1857_; lean_object* v___x_1859_; uint8_t v_isShared_1860_; uint8_t v_isSharedCheck_1864_; 
lean_dec(v_declName_1829_);
v_a_1857_ = lean_ctor_get(v___x_1842_, 0);
v_isSharedCheck_1864_ = !lean_is_exclusive(v___x_1842_);
if (v_isSharedCheck_1864_ == 0)
{
v___x_1859_ = v___x_1842_;
v_isShared_1860_ = v_isSharedCheck_1864_;
goto v_resetjp_1858_;
}
else
{
lean_inc(v_a_1857_);
lean_dec(v___x_1842_);
v___x_1859_ = lean_box(0);
v_isShared_1860_ = v_isSharedCheck_1864_;
goto v_resetjp_1858_;
}
v_resetjp_1858_:
{
lean_object* v___x_1862_; 
if (v_isShared_1860_ == 0)
{
v___x_1862_ = v___x_1859_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v_a_1857_);
v___x_1862_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
return v___x_1862_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg___boxed(lean_object* v_declName_1865_, lean_object* v_as_x27_1866_, lean_object* v_b_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_){
_start:
{
lean_object* v_res_1873_; 
v_res_1873_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg(v_declName_1865_, v_as_x27_1866_, v_b_1867_, v___y_1868_, v___y_1869_, v___y_1870_, v___y_1871_);
lean_dec(v___y_1871_);
lean_dec_ref(v___y_1870_);
lean_dec(v___y_1869_);
lean_dec_ref(v___y_1868_);
lean_dec(v_as_x27_1866_);
return v_res_1873_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___lam__0(lean_object* v_declName_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_){
_start:
{
lean_object* v___x_1883_; 
lean_inc(v_declName_1874_);
v___x_1883_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_shouldGenerateEqnThms(v_declName_1874_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_);
if (lean_obj_tag(v___x_1883_) == 0)
{
lean_object* v_a_1884_; uint8_t v___x_1885_; 
v_a_1884_ = lean_ctor_get(v___x_1883_, 0);
lean_inc(v_a_1884_);
lean_dec_ref_known(v___x_1883_, 1);
v___x_1885_ = lean_unbox(v_a_1884_);
lean_dec(v_a_1884_);
if (v___x_1885_ == 0)
{
lean_dec(v_declName_1874_);
goto v___jp_1880_;
}
else
{
lean_object* v___x_1886_; 
lean_inc(v_declName_1874_);
v___x_1886_ = l_Lean_Meta_alreadyGenerated_x3f___redArg(v_declName_1874_, v___y_1878_);
if (lean_obj_tag(v___x_1886_) == 0)
{
lean_object* v_a_1887_; 
v_a_1887_ = lean_ctor_get(v___x_1886_, 0);
if (lean_obj_tag(v_a_1887_) == 1)
{
lean_dec(v_declName_1874_);
return v___x_1886_;
}
else
{
lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; 
lean_dec_ref_known(v___x_1886_, 1);
v___x_1888_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFnsRef;
v___x_1889_ = lean_st_ref_get(v___x_1888_);
v___x_1890_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg___closed__0));
v___x_1891_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg(v_declName_1874_, v___x_1889_, v___x_1890_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_);
lean_dec(v___x_1889_);
if (lean_obj_tag(v___x_1891_) == 0)
{
lean_object* v_a_1892_; lean_object* v___x_1894_; uint8_t v_isShared_1895_; uint8_t v_isSharedCheck_1901_; 
v_a_1892_ = lean_ctor_get(v___x_1891_, 0);
v_isSharedCheck_1901_ = !lean_is_exclusive(v___x_1891_);
if (v_isSharedCheck_1901_ == 0)
{
v___x_1894_ = v___x_1891_;
v_isShared_1895_ = v_isSharedCheck_1901_;
goto v_resetjp_1893_;
}
else
{
lean_inc(v_a_1892_);
lean_dec(v___x_1891_);
v___x_1894_ = lean_box(0);
v_isShared_1895_ = v_isSharedCheck_1901_;
goto v_resetjp_1893_;
}
v_resetjp_1893_:
{
lean_object* v_fst_1896_; 
v_fst_1896_ = lean_ctor_get(v_a_1892_, 0);
lean_inc(v_fst_1896_);
lean_dec(v_a_1892_);
if (lean_obj_tag(v_fst_1896_) == 0)
{
lean_del_object(v___x_1894_);
goto v___jp_1880_;
}
else
{
lean_object* v_val_1897_; lean_object* v___x_1899_; 
v_val_1897_ = lean_ctor_get(v_fst_1896_, 0);
lean_inc(v_val_1897_);
lean_dec_ref_known(v_fst_1896_, 1);
if (v_isShared_1895_ == 0)
{
lean_ctor_set(v___x_1894_, 0, v_val_1897_);
v___x_1899_ = v___x_1894_;
goto v_reusejp_1898_;
}
else
{
lean_object* v_reuseFailAlloc_1900_; 
v_reuseFailAlloc_1900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1900_, 0, v_val_1897_);
v___x_1899_ = v_reuseFailAlloc_1900_;
goto v_reusejp_1898_;
}
v_reusejp_1898_:
{
return v___x_1899_;
}
}
}
}
else
{
lean_object* v_a_1902_; lean_object* v___x_1904_; uint8_t v_isShared_1905_; uint8_t v_isSharedCheck_1909_; 
v_a_1902_ = lean_ctor_get(v___x_1891_, 0);
v_isSharedCheck_1909_ = !lean_is_exclusive(v___x_1891_);
if (v_isSharedCheck_1909_ == 0)
{
v___x_1904_ = v___x_1891_;
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
else
{
lean_inc(v_a_1902_);
lean_dec(v___x_1891_);
v___x_1904_ = lean_box(0);
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
v_resetjp_1903_:
{
lean_object* v___x_1907_; 
if (v_isShared_1905_ == 0)
{
v___x_1907_ = v___x_1904_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1908_; 
v_reuseFailAlloc_1908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1908_, 0, v_a_1902_);
v___x_1907_ = v_reuseFailAlloc_1908_;
goto v_reusejp_1906_;
}
v_reusejp_1906_:
{
return v___x_1907_;
}
}
}
}
}
else
{
lean_dec(v_declName_1874_);
return v___x_1886_;
}
}
}
else
{
lean_object* v_a_1910_; lean_object* v___x_1912_; uint8_t v_isShared_1913_; uint8_t v_isSharedCheck_1917_; 
lean_dec(v_declName_1874_);
v_a_1910_ = lean_ctor_get(v___x_1883_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1883_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1912_ = v___x_1883_;
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
else
{
lean_inc(v_a_1910_);
lean_dec(v___x_1883_);
v___x_1912_ = lean_box(0);
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
v_resetjp_1911_:
{
lean_object* v___x_1915_; 
if (v_isShared_1913_ == 0)
{
v___x_1915_ = v___x_1912_;
goto v_reusejp_1914_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1916_, 0, v_a_1910_);
v___x_1915_ = v_reuseFailAlloc_1916_;
goto v_reusejp_1914_;
}
v_reusejp_1914_:
{
return v___x_1915_;
}
}
}
v___jp_1880_:
{
lean_object* v___x_1881_; lean_object* v___x_1882_; 
v___x_1881_ = lean_box(0);
v___x_1882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1882_, 0, v___x_1881_);
return v___x_1882_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___lam__0___boxed(lean_object* v_declName_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_){
_start:
{
lean_object* v_res_1924_; 
v_res_1924_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___lam__0(v_declName_1918_, v___y_1919_, v___y_1920_, v___y_1921_, v___y_1922_);
lean_dec(v___y_1922_);
lean_dec_ref(v___y_1921_);
lean_dec(v___y_1920_);
lean_dec_ref(v___y_1919_);
return v_res_1924_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0(void){
_start:
{
lean_object* v___x_1925_; lean_object* v___x_1926_; 
v___x_1925_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0);
v___x_1926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1926_, 0, v___x_1925_);
return v___x_1926_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1(void){
_start:
{
lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; 
v___x_1927_ = lean_box(1);
v___x_1928_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4);
v___x_1929_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0);
v___x_1930_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1930_, 0, v___x_1929_);
lean_ctor_set(v___x_1930_, 1, v___x_1928_);
lean_ctor_set(v___x_1930_, 2, v___x_1927_);
return v___x_1930_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore(lean_object* v_declName_1933_, lean_object* v_a_1934_, lean_object* v_a_1935_, lean_object* v_a_1936_, lean_object* v_a_1937_){
_start:
{
lean_object* v___f_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; 
v___f_1939_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1939_, 0, v_declName_1933_);
v___x_1940_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_1941_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__2));
v___x_1942_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___redArg(v___x_1940_, v___x_1941_, v___f_1939_, v_a_1934_, v_a_1935_, v_a_1936_, v_a_1937_);
return v___x_1942_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___boxed(lean_object* v_declName_1943_, lean_object* v_a_1944_, lean_object* v_a_1945_, lean_object* v_a_1946_, lean_object* v_a_1947_, lean_object* v_a_1948_){
_start:
{
lean_object* v_res_1949_; 
v_res_1949_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore(v_declName_1943_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_);
lean_dec(v_a_1947_);
lean_dec_ref(v_a_1946_);
lean_dec(v_a_1945_);
lean_dec_ref(v_a_1944_);
return v_res_1949_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0(lean_object* v_declName_1950_, lean_object* v_as_1951_, lean_object* v_as_x27_1952_, lean_object* v_b_1953_, lean_object* v_a_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_){
_start:
{
lean_object* v___x_1960_; 
v___x_1960_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg(v_declName_1950_, v_as_x27_1952_, v_b_1953_, v___y_1955_, v___y_1956_, v___y_1957_, v___y_1958_);
return v___x_1960_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___boxed(lean_object* v_declName_1961_, lean_object* v_as_1962_, lean_object* v_as_x27_1963_, lean_object* v_b_1964_, lean_object* v_a_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_){
_start:
{
lean_object* v_res_1971_; 
v_res_1971_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0(v_declName_1961_, v_as_1962_, v_as_x27_1963_, v_b_1964_, v_a_1965_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_);
lean_dec(v___y_1969_);
lean_dec_ref(v___y_1968_);
lean_dec(v___y_1967_);
lean_dec_ref(v___y_1966_);
lean_dec(v_as_x27_1963_);
lean_dec(v_as_1962_);
return v_res_1971_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getEqnsFor_x3f(lean_object* v_declName_1972_, lean_object* v_a_1973_, lean_object* v_a_1974_, lean_object* v_a_1975_, lean_object* v_a_1976_){
_start:
{
lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; 
v___x_1978_ = lean_unsigned_to_nat(32u);
v___x_1979_ = lean_mk_empty_array_with_capacity(v___x_1978_);
lean_dec_ref(v___x_1979_);
v___x_1980_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_1981_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__2));
lean_inc(v_declName_1972_);
v___x_1982_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___boxed), 6, 1);
lean_closure_set(v___x_1982_, 0, v_declName_1972_);
v___x_1983_ = lean_alloc_closure((void*)(l_Lean_Meta_withEqnOptions___boxed), 8, 3);
lean_closure_set(v___x_1983_, 0, lean_box(0));
lean_closure_set(v___x_1983_, 1, v_declName_1972_);
lean_closure_set(v___x_1983_, 2, v___x_1982_);
v___x_1984_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___redArg(v___x_1980_, v___x_1981_, v___x_1983_, v_a_1973_, v_a_1974_, v_a_1975_, v_a_1976_);
return v___x_1984_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getEqnsFor_x3f___boxed(lean_object* v_declName_1985_, lean_object* v_a_1986_, lean_object* v_a_1987_, lean_object* v_a_1988_, lean_object* v_a_1989_, lean_object* v_a_1990_){
_start:
{
lean_object* v_res_1991_; 
v_res_1991_ = l_Lean_Meta_getEqnsFor_x3f(v_declName_1985_, v_a_1986_, v_a_1987_, v_a_1988_, v_a_1989_);
lean_dec(v_a_1989_);
lean_dec_ref(v_a_1988_);
lean_dec(v_a_1987_);
lean_dec_ref(v_a_1986_);
return v_res_1991_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_saveEqnAffectingOptions_spec__0(lean_object* v_opts_1992_, lean_object* v_opt_1993_){
_start:
{
lean_object* v_name_1994_; lean_object* v_defValue_1995_; lean_object* v_map_1996_; lean_object* v___x_1997_; 
v_name_1994_ = lean_ctor_get(v_opt_1993_, 0);
v_defValue_1995_ = lean_ctor_get(v_opt_1993_, 1);
v_map_1996_ = lean_ctor_get(v_opts_1992_, 0);
v___x_1997_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1996_, v_name_1994_);
if (lean_obj_tag(v___x_1997_) == 0)
{
uint8_t v___x_1998_; 
v___x_1998_ = lean_unbox(v_defValue_1995_);
return v___x_1998_;
}
else
{
lean_object* v_val_1999_; 
v_val_1999_ = lean_ctor_get(v___x_1997_, 0);
lean_inc(v_val_1999_);
lean_dec_ref_known(v___x_1997_, 1);
if (lean_obj_tag(v_val_1999_) == 1)
{
uint8_t v_v_2000_; 
v_v_2000_ = lean_ctor_get_uint8(v_val_1999_, 0);
lean_dec_ref_known(v_val_1999_, 0);
return v_v_2000_;
}
else
{
uint8_t v___x_2001_; 
lean_dec(v_val_1999_);
v___x_2001_ = lean_unbox(v_defValue_1995_);
return v___x_2001_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_saveEqnAffectingOptions_spec__0___boxed(lean_object* v_opts_2002_, lean_object* v_opt_2003_){
_start:
{
uint8_t v_res_2004_; lean_object* v_r_2005_; 
v_res_2004_ = l_Lean_Option_get___at___00Lean_Meta_saveEqnAffectingOptions_spec__0(v_opts_2002_, v_opt_2003_);
lean_dec_ref(v_opt_2003_);
lean_dec_ref(v_opts_2002_);
v_r_2005_ = lean_box(v_res_2004_);
return v_r_2005_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___redArg(lean_object* v___x_2006_, lean_object* v_as_2007_, size_t v_sz_2008_, size_t v_i_2009_, lean_object* v_b_2010_){
_start:
{
lean_object* v_a_2013_; uint8_t v___x_2017_; 
v___x_2017_ = lean_usize_dec_lt(v_i_2009_, v_sz_2008_);
if (v___x_2017_ == 0)
{
lean_object* v___x_2018_; 
v___x_2018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2018_, 0, v_b_2010_);
return v___x_2018_;
}
else
{
lean_object* v_a_2019_; lean_object* v_name_2020_; lean_object* v_defValue_2021_; uint8_t v___x_2035_; uint8_t v___x_2036_; 
v_a_2019_ = lean_array_uget(v_as_2007_, v_i_2009_);
v_name_2020_ = lean_ctor_get(v_a_2019_, 0);
lean_inc(v_name_2020_);
v_defValue_2021_ = lean_ctor_get(v_a_2019_, 1);
v___x_2035_ = l_Lean_Option_get___at___00Lean_Meta_saveEqnAffectingOptions_spec__0(v___x_2006_, v_a_2019_);
v___x_2036_ = lean_unbox(v_defValue_2021_);
if (v___x_2036_ == 0)
{
if (v___x_2035_ == 0)
{
lean_dec(v_name_2020_);
lean_dec(v_a_2019_);
v_a_2013_ = v_b_2010_;
goto v___jp_2012_;
}
else
{
goto v___jp_2022_;
}
}
else
{
if (v___x_2035_ == 0)
{
goto v___jp_2022_;
}
else
{
lean_dec(v_name_2020_);
lean_dec(v_a_2019_);
v_a_2013_ = v_b_2010_;
goto v___jp_2012_;
}
}
v___jp_2022_:
{
uint8_t v___x_2023_; lean_object* v___x_2025_; uint8_t v_isShared_2026_; uint8_t v_isSharedCheck_2032_; 
v___x_2023_ = l_Lean_Option_get___at___00Lean_Meta_saveEqnAffectingOptions_spec__0(v___x_2006_, v_a_2019_);
v_isSharedCheck_2032_ = !lean_is_exclusive(v_a_2019_);
if (v_isSharedCheck_2032_ == 0)
{
lean_object* v_unused_2033_; lean_object* v_unused_2034_; 
v_unused_2033_ = lean_ctor_get(v_a_2019_, 1);
lean_dec(v_unused_2033_);
v_unused_2034_ = lean_ctor_get(v_a_2019_, 0);
lean_dec(v_unused_2034_);
v___x_2025_ = v_a_2019_;
v_isShared_2026_ = v_isSharedCheck_2032_;
goto v_resetjp_2024_;
}
else
{
lean_dec(v_a_2019_);
v___x_2025_ = lean_box(0);
v_isShared_2026_ = v_isSharedCheck_2032_;
goto v_resetjp_2024_;
}
v_resetjp_2024_:
{
lean_object* v___x_2027_; lean_object* v___x_2029_; 
v___x_2027_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2027_, 0, v___x_2023_);
if (v_isShared_2026_ == 0)
{
lean_ctor_set(v___x_2025_, 1, v___x_2027_);
v___x_2029_ = v___x_2025_;
goto v_reusejp_2028_;
}
else
{
lean_object* v_reuseFailAlloc_2031_; 
v_reuseFailAlloc_2031_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2031_, 0, v_name_2020_);
lean_ctor_set(v_reuseFailAlloc_2031_, 1, v___x_2027_);
v___x_2029_ = v_reuseFailAlloc_2031_;
goto v_reusejp_2028_;
}
v_reusejp_2028_:
{
lean_object* v___x_2030_; 
v___x_2030_ = lean_array_push(v_b_2010_, v___x_2029_);
v_a_2013_ = v___x_2030_;
goto v___jp_2012_;
}
}
}
}
v___jp_2012_:
{
size_t v___x_2014_; size_t v___x_2015_; 
v___x_2014_ = ((size_t)1ULL);
v___x_2015_ = lean_usize_add(v_i_2009_, v___x_2014_);
v_i_2009_ = v___x_2015_;
v_b_2010_ = v_a_2013_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___redArg___boxed(lean_object* v___x_2037_, lean_object* v_as_2038_, lean_object* v_sz_2039_, lean_object* v_i_2040_, lean_object* v_b_2041_, lean_object* v___y_2042_){
_start:
{
size_t v_sz_boxed_2043_; size_t v_i_boxed_2044_; lean_object* v_res_2045_; 
v_sz_boxed_2043_ = lean_unbox_usize(v_sz_2039_);
lean_dec(v_sz_2039_);
v_i_boxed_2044_ = lean_unbox_usize(v_i_2040_);
lean_dec(v_i_2040_);
v_res_2045_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___redArg(v___x_2037_, v_as_2038_, v_sz_boxed_2043_, v_i_boxed_2044_, v_b_2041_);
lean_dec_ref(v_as_2038_);
lean_dec_ref(v___x_2037_);
return v_res_2045_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_saveEqnAffectingOptions_spec__2_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_2046_; lean_object* v___x_2047_; 
v___x_2046_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0);
v___x_2047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2047_, 0, v___x_2046_);
return v___x_2047_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_saveEqnAffectingOptions_spec__2_spec__2___redArg(){
_start:
{
lean_object* v___x_2049_; 
v___x_2049_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_saveEqnAffectingOptions_spec__2_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_saveEqnAffectingOptions_spec__2_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_saveEqnAffectingOptions_spec__2_spec__2___redArg___closed__0);
return v___x_2049_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_saveEqnAffectingOptions_spec__2_spec__2___redArg___boxed(lean_object* v___dummy_2050_){
_start:
{
lean_object* v_res_2051_; 
v_res_2051_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_saveEqnAffectingOptions_spec__2_spec__2___redArg();
return v_res_2051_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__3_spec__4(lean_object* v_msgData_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_){
_start:
{
lean_object* v___x_2058_; lean_object* v_env_2059_; uint8_t v___x_2060_; lean_object* v_env_2061_; lean_object* v___x_2062_; lean_object* v_toCold_2063_; lean_object* v_mctx_2064_; lean_object* v_lctx_2065_; lean_object* v_options_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; 
v___x_2058_ = lean_st_ref_get(v___y_2056_);
v_env_2059_ = lean_ctor_get(v___x_2058_, 0);
lean_inc_ref(v_env_2059_);
lean_dec(v___x_2058_);
v___x_2060_ = 0;
v_env_2061_ = l_Lean_Environment_setRecordingDeps(v_env_2059_, v___x_2060_);
v___x_2062_ = lean_st_ref_get(v___y_2054_);
v_toCold_2063_ = lean_ctor_get(v___y_2055_, 0);
v_mctx_2064_ = lean_ctor_get(v___x_2062_, 0);
lean_inc_ref(v_mctx_2064_);
lean_dec(v___x_2062_);
v_lctx_2065_ = lean_ctor_get(v___y_2053_, 2);
v_options_2066_ = lean_ctor_get(v_toCold_2063_, 2);
lean_inc_ref(v_options_2066_);
lean_inc_ref(v_lctx_2065_);
v___x_2067_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2067_, 0, v_env_2061_);
lean_ctor_set(v___x_2067_, 1, v_mctx_2064_);
lean_ctor_set(v___x_2067_, 2, v_lctx_2065_);
lean_ctor_set(v___x_2067_, 3, v_options_2066_);
v___x_2068_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2068_, 0, v___x_2067_);
lean_ctor_set(v___x_2068_, 1, v_msgData_2052_);
v___x_2069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2069_, 0, v___x_2068_);
return v___x_2069_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__3_spec__4___boxed(lean_object* v_msgData_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_){
_start:
{
lean_object* v_res_2076_; 
v_res_2076_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__3_spec__4(v_msgData_2070_, v___y_2071_, v___y_2072_, v___y_2073_, v___y_2074_);
lean_dec(v___y_2074_);
lean_dec_ref(v___y_2073_);
lean_dec(v___y_2072_);
lean_dec_ref(v___y_2071_);
return v_res_2076_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__3___closed__0(void){
_start:
{
lean_object* v___x_2077_; double v___x_2078_; 
v___x_2077_ = lean_unsigned_to_nat(0u);
v___x_2078_ = lean_float_of_nat(v___x_2077_);
return v___x_2078_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__3(lean_object* v_cls_2082_, lean_object* v_msg_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_){
_start:
{
lean_object* v_ref_2089_; lean_object* v___x_2090_; lean_object* v_a_2091_; lean_object* v___x_2093_; uint8_t v_isShared_2094_; uint8_t v_isSharedCheck_2136_; 
v_ref_2089_ = lean_ctor_get(v___y_2086_, 2);
v___x_2090_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__3_spec__4(v_msg_2083_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_);
v_a_2091_ = lean_ctor_get(v___x_2090_, 0);
v_isSharedCheck_2136_ = !lean_is_exclusive(v___x_2090_);
if (v_isSharedCheck_2136_ == 0)
{
v___x_2093_ = v___x_2090_;
v_isShared_2094_ = v_isSharedCheck_2136_;
goto v_resetjp_2092_;
}
else
{
lean_inc(v_a_2091_);
lean_dec(v___x_2090_);
v___x_2093_ = lean_box(0);
v_isShared_2094_ = v_isSharedCheck_2136_;
goto v_resetjp_2092_;
}
v_resetjp_2092_:
{
lean_object* v___x_2095_; lean_object* v_traceState_2096_; lean_object* v_env_2097_; lean_object* v_nextMacroScope_2098_; lean_object* v_ngen_2099_; lean_object* v_auxDeclNGen_2100_; lean_object* v_cache_2101_; lean_object* v_recordedDeps_2102_; lean_object* v_messages_2103_; lean_object* v_infoState_2104_; lean_object* v_snapshotTasks_2105_; lean_object* v___x_2107_; uint8_t v_isShared_2108_; uint8_t v_isSharedCheck_2135_; 
v___x_2095_ = lean_st_ref_take(v___y_2087_);
v_traceState_2096_ = lean_ctor_get(v___x_2095_, 4);
v_env_2097_ = lean_ctor_get(v___x_2095_, 0);
v_nextMacroScope_2098_ = lean_ctor_get(v___x_2095_, 1);
v_ngen_2099_ = lean_ctor_get(v___x_2095_, 2);
v_auxDeclNGen_2100_ = lean_ctor_get(v___x_2095_, 3);
v_cache_2101_ = lean_ctor_get(v___x_2095_, 5);
v_recordedDeps_2102_ = lean_ctor_get(v___x_2095_, 6);
v_messages_2103_ = lean_ctor_get(v___x_2095_, 7);
v_infoState_2104_ = lean_ctor_get(v___x_2095_, 8);
v_snapshotTasks_2105_ = lean_ctor_get(v___x_2095_, 9);
v_isSharedCheck_2135_ = !lean_is_exclusive(v___x_2095_);
if (v_isSharedCheck_2135_ == 0)
{
v___x_2107_ = v___x_2095_;
v_isShared_2108_ = v_isSharedCheck_2135_;
goto v_resetjp_2106_;
}
else
{
lean_inc(v_snapshotTasks_2105_);
lean_inc(v_infoState_2104_);
lean_inc(v_messages_2103_);
lean_inc(v_recordedDeps_2102_);
lean_inc(v_cache_2101_);
lean_inc(v_traceState_2096_);
lean_inc(v_auxDeclNGen_2100_);
lean_inc(v_ngen_2099_);
lean_inc(v_nextMacroScope_2098_);
lean_inc(v_env_2097_);
lean_dec(v___x_2095_);
v___x_2107_ = lean_box(0);
v_isShared_2108_ = v_isSharedCheck_2135_;
goto v_resetjp_2106_;
}
v_resetjp_2106_:
{
uint64_t v_tid_2109_; lean_object* v_traces_2110_; lean_object* v___x_2112_; uint8_t v_isShared_2113_; uint8_t v_isSharedCheck_2134_; 
v_tid_2109_ = lean_ctor_get_uint64(v_traceState_2096_, sizeof(void*)*1);
v_traces_2110_ = lean_ctor_get(v_traceState_2096_, 0);
v_isSharedCheck_2134_ = !lean_is_exclusive(v_traceState_2096_);
if (v_isSharedCheck_2134_ == 0)
{
v___x_2112_ = v_traceState_2096_;
v_isShared_2113_ = v_isSharedCheck_2134_;
goto v_resetjp_2111_;
}
else
{
lean_inc(v_traces_2110_);
lean_dec(v_traceState_2096_);
v___x_2112_ = lean_box(0);
v_isShared_2113_ = v_isSharedCheck_2134_;
goto v_resetjp_2111_;
}
v_resetjp_2111_:
{
lean_object* v___x_2114_; lean_object* v___x_2115_; double v___x_2116_; uint8_t v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2125_; 
v___x_2114_ = lean_box(0);
v___x_2115_ = lean_box(0);
v___x_2116_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__3___closed__0, &l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__3___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__3___closed__0);
v___x_2117_ = 0;
v___x_2118_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__3___closed__1));
v___x_2119_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2119_, 0, v_cls_2082_);
lean_ctor_set(v___x_2119_, 1, v___x_2115_);
lean_ctor_set(v___x_2119_, 2, v___x_2118_);
lean_ctor_set_float(v___x_2119_, sizeof(void*)*3, v___x_2116_);
lean_ctor_set_float(v___x_2119_, sizeof(void*)*3 + 8, v___x_2116_);
lean_ctor_set_uint8(v___x_2119_, sizeof(void*)*3 + 16, v___x_2117_);
v___x_2120_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__3___closed__2));
v___x_2121_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2121_, 0, v___x_2119_);
lean_ctor_set(v___x_2121_, 1, v_a_2091_);
lean_ctor_set(v___x_2121_, 2, v___x_2120_);
lean_inc(v_ref_2089_);
v___x_2122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2122_, 0, v_ref_2089_);
lean_ctor_set(v___x_2122_, 1, v___x_2121_);
v___x_2123_ = l_Lean_PersistentArray_push___redArg(v_traces_2110_, v___x_2122_);
if (v_isShared_2113_ == 0)
{
lean_ctor_set(v___x_2112_, 0, v___x_2123_);
v___x_2125_ = v___x_2112_;
goto v_reusejp_2124_;
}
else
{
lean_object* v_reuseFailAlloc_2133_; 
v_reuseFailAlloc_2133_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2133_, 0, v___x_2123_);
lean_ctor_set_uint64(v_reuseFailAlloc_2133_, sizeof(void*)*1, v_tid_2109_);
v___x_2125_ = v_reuseFailAlloc_2133_;
goto v_reusejp_2124_;
}
v_reusejp_2124_:
{
lean_object* v___x_2127_; 
if (v_isShared_2108_ == 0)
{
lean_ctor_set(v___x_2107_, 4, v___x_2125_);
v___x_2127_ = v___x_2107_;
goto v_reusejp_2126_;
}
else
{
lean_object* v_reuseFailAlloc_2132_; 
v_reuseFailAlloc_2132_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2132_, 0, v_env_2097_);
lean_ctor_set(v_reuseFailAlloc_2132_, 1, v_nextMacroScope_2098_);
lean_ctor_set(v_reuseFailAlloc_2132_, 2, v_ngen_2099_);
lean_ctor_set(v_reuseFailAlloc_2132_, 3, v_auxDeclNGen_2100_);
lean_ctor_set(v_reuseFailAlloc_2132_, 4, v___x_2125_);
lean_ctor_set(v_reuseFailAlloc_2132_, 5, v_cache_2101_);
lean_ctor_set(v_reuseFailAlloc_2132_, 6, v_recordedDeps_2102_);
lean_ctor_set(v_reuseFailAlloc_2132_, 7, v_messages_2103_);
lean_ctor_set(v_reuseFailAlloc_2132_, 8, v_infoState_2104_);
lean_ctor_set(v_reuseFailAlloc_2132_, 9, v_snapshotTasks_2105_);
v___x_2127_ = v_reuseFailAlloc_2132_;
goto v_reusejp_2126_;
}
v_reusejp_2126_:
{
lean_object* v___x_2128_; lean_object* v___x_2130_; 
v___x_2128_ = lean_st_ref_put(v___y_2087_, v___x_2127_);
if (v_isShared_2094_ == 0)
{
lean_ctor_set(v___x_2093_, 0, v___x_2114_);
v___x_2130_ = v___x_2093_;
goto v_reusejp_2129_;
}
else
{
lean_object* v_reuseFailAlloc_2131_; 
v_reuseFailAlloc_2131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2131_, 0, v___x_2114_);
v___x_2130_ = v_reuseFailAlloc_2131_;
goto v_reusejp_2129_;
}
v_reusejp_2129_:
{
return v___x_2130_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__3___boxed(lean_object* v_cls_2137_, lean_object* v_msg_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_){
_start:
{
lean_object* v_res_2144_; 
v_res_2144_ = l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__3(v_cls_2137_, v_msg_2138_, v___y_2139_, v___y_2140_, v___y_2141_, v___y_2142_);
lean_dec(v___y_2142_);
lean_dec_ref(v___y_2141_);
lean_dec(v___y_2140_);
lean_dec_ref(v___y_2139_);
return v_res_2144_;
}
}
static size_t _init_l_Lean_Meta_saveEqnAffectingOptions___closed__1(void){
_start:
{
lean_object* v___x_2147_; size_t v_sz_2148_; 
v___x_2147_ = l_Lean_Meta_eqnAffectingOptions;
v_sz_2148_ = lean_array_size(v___x_2147_);
return v_sz_2148_;
}
}
static lean_object* _init_l_Lean_Meta_saveEqnAffectingOptions___closed__2(void){
_start:
{
lean_object* v___x_2149_; 
v___x_2149_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_saveEqnAffectingOptions_spec__2_spec__2___redArg();
return v___x_2149_;
}
}
static lean_object* _init_l_Lean_Meta_saveEqnAffectingOptions___closed__3(void){
_start:
{
lean_object* v___x_2150_; lean_object* v___x_2151_; 
v___x_2150_ = lean_obj_once(&l_Lean_Meta_withEqnOptions___redArg___closed__0, &l_Lean_Meta_withEqnOptions___redArg___closed__0_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__0);
v___x_2151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2151_, 0, v___x_2150_);
lean_ctor_set(v___x_2151_, 1, v___x_2150_);
return v___x_2151_;
}
}
static lean_object* _init_l_Lean_Meta_saveEqnAffectingOptions___closed__4(void){
_start:
{
lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; 
v___x_2152_ = lean_unsigned_to_nat(0u);
v___x_2153_ = lean_obj_once(&l_Lean_Meta_withEqnOptions___redArg___closed__0, &l_Lean_Meta_withEqnOptions___redArg___closed__0_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__0);
v___x_2154_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2154_, 0, v___x_2153_);
lean_ctor_set(v___x_2154_, 1, v___x_2153_);
lean_ctor_set(v___x_2154_, 2, v___x_2152_);
return v___x_2154_;
}
}
static lean_object* _init_l_Lean_Meta_saveEqnAffectingOptions___closed__5(void){
_start:
{
lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; 
v___x_2155_ = lean_obj_once(&l_Lean_Meta_saveEqnAffectingOptions___closed__4, &l_Lean_Meta_saveEqnAffectingOptions___closed__4_once, _init_l_Lean_Meta_saveEqnAffectingOptions___closed__4);
v___x_2156_ = lean_obj_once(&l_Lean_Meta_saveEqnAffectingOptions___closed__3, &l_Lean_Meta_saveEqnAffectingOptions___closed__3_once, _init_l_Lean_Meta_saveEqnAffectingOptions___closed__3);
v___x_2157_ = lean_obj_once(&l_Lean_Meta_withEqnOptions___redArg___closed__0, &l_Lean_Meta_withEqnOptions___redArg___closed__0_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__0);
v___x_2158_ = lean_obj_once(&l_Lean_Meta_saveEqnAffectingOptions___closed__2, &l_Lean_Meta_saveEqnAffectingOptions___closed__2_once, _init_l_Lean_Meta_saveEqnAffectingOptions___closed__2);
v___x_2159_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2159_, 0, v___x_2158_);
lean_ctor_set(v___x_2159_, 1, v___x_2157_);
lean_ctor_set(v___x_2159_, 2, v___x_2156_);
lean_ctor_set(v___x_2159_, 3, v___x_2157_);
lean_ctor_set(v___x_2159_, 4, v___x_2157_);
lean_ctor_set(v___x_2159_, 5, v___x_2157_);
lean_ctor_set(v___x_2159_, 6, v___x_2157_);
lean_ctor_set(v___x_2159_, 7, v___x_2155_);
return v___x_2159_;
}
}
static lean_object* _init_l_Lean_Meta_saveEqnAffectingOptions___closed__9(void){
_start:
{
lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; 
v___x_2166_ = ((lean_object*)(l_Lean_Meta_saveEqnAffectingOptions___closed__8));
v___x_2167_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__2___closed__1));
v___x_2168_ = l_Lean_Name_append(v___x_2167_, v___x_2166_);
return v___x_2168_;
}
}
static lean_object* _init_l_Lean_Meta_saveEqnAffectingOptions___closed__11(void){
_start:
{
lean_object* v___x_2170_; lean_object* v___x_2171_; 
v___x_2170_ = ((lean_object*)(l_Lean_Meta_saveEqnAffectingOptions___closed__10));
v___x_2171_ = l_Lean_stringToMessageData(v___x_2170_);
return v___x_2171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_saveEqnAffectingOptions(lean_object* v_declName_2172_, lean_object* v_a_2173_, lean_object* v_a_2174_, lean_object* v_a_2175_, lean_object* v_a_2176_){
_start:
{
lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; size_t v_sz_2182_; size_t v___x_2183_; lean_object* v___x_2184_; 
v___x_2178_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_2175_);
v___x_2179_ = lean_unsigned_to_nat(0u);
v___x_2180_ = ((lean_object*)(l_Lean_Meta_saveEqnAffectingOptions___closed__0));
v___x_2181_ = l_Lean_Meta_eqnAffectingOptions;
v_sz_2182_ = lean_usize_once(&l_Lean_Meta_saveEqnAffectingOptions___closed__1, &l_Lean_Meta_saveEqnAffectingOptions___closed__1_once, _init_l_Lean_Meta_saveEqnAffectingOptions___closed__1);
v___x_2183_ = ((size_t)0ULL);
v___x_2184_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___redArg(v___x_2178_, v___x_2181_, v_sz_2182_, v___x_2183_, v___x_2180_);
lean_dec_ref(v___x_2178_);
if (lean_obj_tag(v___x_2184_) == 0)
{
lean_object* v_a_2185_; lean_object* v___x_2187_; uint8_t v_isShared_2188_; uint8_t v_isSharedCheck_2248_; 
v_a_2185_ = lean_ctor_get(v___x_2184_, 0);
v_isSharedCheck_2248_ = !lean_is_exclusive(v___x_2184_);
if (v_isSharedCheck_2248_ == 0)
{
v___x_2187_ = v___x_2184_;
v_isShared_2188_ = v_isSharedCheck_2248_;
goto v_resetjp_2186_;
}
else
{
lean_inc(v_a_2185_);
lean_dec(v___x_2184_);
v___x_2187_ = lean_box(0);
v_isShared_2188_ = v_isSharedCheck_2248_;
goto v_resetjp_2186_;
}
v_resetjp_2186_:
{
lean_object* v___x_2189_; uint8_t v___x_2190_; lean_object* v___y_2192_; lean_object* v___y_2193_; 
v___x_2189_ = lean_array_get_size(v_a_2185_);
v___x_2190_ = lean_nat_dec_eq(v___x_2189_, v___x_2179_);
if (v___x_2190_ == 0)
{
lean_object* v_toCold_2235_; lean_object* v_options_2236_; uint8_t v_hasTrace_2237_; 
v_toCold_2235_ = lean_ctor_get(v_a_2175_, 0);
v_options_2236_ = lean_ctor_get(v_toCold_2235_, 2);
v_hasTrace_2237_ = lean_ctor_get_uint8(v_options_2236_, sizeof(void*)*1);
if (v_hasTrace_2237_ == 0)
{
v___y_2192_ = v_a_2174_;
v___y_2193_ = v_a_2176_;
goto v___jp_2191_;
}
else
{
lean_object* v_inheritedTraceOptions_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; uint8_t v___x_2241_; 
v_inheritedTraceOptions_2238_ = lean_ctor_get(v_toCold_2235_, 11);
v___x_2239_ = ((lean_object*)(l_Lean_Meta_saveEqnAffectingOptions___closed__8));
v___x_2240_ = lean_obj_once(&l_Lean_Meta_saveEqnAffectingOptions___closed__9, &l_Lean_Meta_saveEqnAffectingOptions___closed__9_once, _init_l_Lean_Meta_saveEqnAffectingOptions___closed__9);
v___x_2241_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2238_, v_options_2236_, v___x_2240_);
if (v___x_2241_ == 0)
{
v___y_2192_ = v_a_2174_;
v___y_2193_ = v_a_2176_;
goto v___jp_2191_;
}
else
{
lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; 
v___x_2242_ = lean_obj_once(&l_Lean_Meta_saveEqnAffectingOptions___closed__11, &l_Lean_Meta_saveEqnAffectingOptions___closed__11_once, _init_l_Lean_Meta_saveEqnAffectingOptions___closed__11);
lean_inc(v_declName_2172_);
v___x_2243_ = l_Lean_MessageData_ofName(v_declName_2172_);
v___x_2244_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2244_, 0, v___x_2242_);
lean_ctor_set(v___x_2244_, 1, v___x_2243_);
v___x_2245_ = l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__3(v___x_2239_, v___x_2244_, v_a_2173_, v_a_2174_, v_a_2175_, v_a_2176_);
if (lean_obj_tag(v___x_2245_) == 0)
{
lean_dec_ref_known(v___x_2245_, 1);
v___y_2192_ = v_a_2174_;
v___y_2193_ = v_a_2176_;
goto v___jp_2191_;
}
else
{
lean_del_object(v___x_2187_);
lean_dec(v_a_2185_);
lean_dec(v_declName_2172_);
return v___x_2245_;
}
}
}
}
else
{
lean_object* v___x_2246_; lean_object* v___x_2247_; 
lean_del_object(v___x_2187_);
lean_dec(v_a_2185_);
lean_dec(v_declName_2172_);
v___x_2246_ = lean_box(0);
v___x_2247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2247_, 0, v___x_2246_);
return v___x_2247_;
}
v___jp_2191_:
{
lean_object* v___x_2194_; lean_object* v_env_2195_; lean_object* v_nextMacroScope_2196_; lean_object* v_ngen_2197_; lean_object* v_auxDeclNGen_2198_; lean_object* v_traceState_2199_; lean_object* v_recordedDeps_2200_; lean_object* v_messages_2201_; lean_object* v_infoState_2202_; lean_object* v_snapshotTasks_2203_; lean_object* v___x_2205_; uint8_t v_isShared_2206_; uint8_t v_isSharedCheck_2233_; 
v___x_2194_ = lean_st_ref_take(v___y_2193_);
v_env_2195_ = lean_ctor_get(v___x_2194_, 0);
v_nextMacroScope_2196_ = lean_ctor_get(v___x_2194_, 1);
v_ngen_2197_ = lean_ctor_get(v___x_2194_, 2);
v_auxDeclNGen_2198_ = lean_ctor_get(v___x_2194_, 3);
v_traceState_2199_ = lean_ctor_get(v___x_2194_, 4);
v_recordedDeps_2200_ = lean_ctor_get(v___x_2194_, 6);
v_messages_2201_ = lean_ctor_get(v___x_2194_, 7);
v_infoState_2202_ = lean_ctor_get(v___x_2194_, 8);
v_snapshotTasks_2203_ = lean_ctor_get(v___x_2194_, 9);
v_isSharedCheck_2233_ = !lean_is_exclusive(v___x_2194_);
if (v_isSharedCheck_2233_ == 0)
{
lean_object* v_unused_2234_; 
v_unused_2234_ = lean_ctor_get(v___x_2194_, 5);
lean_dec(v_unused_2234_);
v___x_2205_ = v___x_2194_;
v_isShared_2206_ = v_isSharedCheck_2233_;
goto v_resetjp_2204_;
}
else
{
lean_inc(v_snapshotTasks_2203_);
lean_inc(v_infoState_2202_);
lean_inc(v_messages_2201_);
lean_inc(v_recordedDeps_2200_);
lean_inc(v_traceState_2199_);
lean_inc(v_auxDeclNGen_2198_);
lean_inc(v_ngen_2197_);
lean_inc(v_nextMacroScope_2196_);
lean_inc(v_env_2195_);
lean_dec(v___x_2194_);
v___x_2205_ = lean_box(0);
v_isShared_2206_ = v_isSharedCheck_2233_;
goto v_resetjp_2204_;
}
v_resetjp_2204_:
{
lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2211_; 
v___x_2207_ = l_Lean_Meta_eqnOptionsExt;
v___x_2208_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_2207_, v_env_2195_, v_declName_2172_, v_a_2185_, v___x_2190_);
v___x_2209_ = lean_obj_once(&l_Lean_Meta_withEqnOptions___redArg___closed__1, &l_Lean_Meta_withEqnOptions___redArg___closed__1_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__1);
if (v_isShared_2206_ == 0)
{
lean_ctor_set(v___x_2205_, 5, v___x_2209_);
lean_ctor_set(v___x_2205_, 0, v___x_2208_);
v___x_2211_ = v___x_2205_;
goto v_reusejp_2210_;
}
else
{
lean_object* v_reuseFailAlloc_2232_; 
v_reuseFailAlloc_2232_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2232_, 0, v___x_2208_);
lean_ctor_set(v_reuseFailAlloc_2232_, 1, v_nextMacroScope_2196_);
lean_ctor_set(v_reuseFailAlloc_2232_, 2, v_ngen_2197_);
lean_ctor_set(v_reuseFailAlloc_2232_, 3, v_auxDeclNGen_2198_);
lean_ctor_set(v_reuseFailAlloc_2232_, 4, v_traceState_2199_);
lean_ctor_set(v_reuseFailAlloc_2232_, 5, v___x_2209_);
lean_ctor_set(v_reuseFailAlloc_2232_, 6, v_recordedDeps_2200_);
lean_ctor_set(v_reuseFailAlloc_2232_, 7, v_messages_2201_);
lean_ctor_set(v_reuseFailAlloc_2232_, 8, v_infoState_2202_);
lean_ctor_set(v_reuseFailAlloc_2232_, 9, v_snapshotTasks_2203_);
v___x_2211_ = v_reuseFailAlloc_2232_;
goto v_reusejp_2210_;
}
v_reusejp_2210_:
{
lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v_mctx_2214_; lean_object* v_zetaDeltaFVarIds_2215_; lean_object* v_postponed_2216_; lean_object* v_diag_2217_; lean_object* v___x_2219_; uint8_t v_isShared_2220_; uint8_t v_isSharedCheck_2230_; 
v___x_2212_ = lean_st_ref_put(v___y_2193_, v___x_2211_);
v___x_2213_ = lean_st_ref_take(v___y_2192_);
v_mctx_2214_ = lean_ctor_get(v___x_2213_, 0);
v_zetaDeltaFVarIds_2215_ = lean_ctor_get(v___x_2213_, 2);
v_postponed_2216_ = lean_ctor_get(v___x_2213_, 3);
v_diag_2217_ = lean_ctor_get(v___x_2213_, 4);
v_isSharedCheck_2230_ = !lean_is_exclusive(v___x_2213_);
if (v_isSharedCheck_2230_ == 0)
{
lean_object* v_unused_2231_; 
v_unused_2231_ = lean_ctor_get(v___x_2213_, 1);
lean_dec(v_unused_2231_);
v___x_2219_ = v___x_2213_;
v_isShared_2220_ = v_isSharedCheck_2230_;
goto v_resetjp_2218_;
}
else
{
lean_inc(v_diag_2217_);
lean_inc(v_postponed_2216_);
lean_inc(v_zetaDeltaFVarIds_2215_);
lean_inc(v_mctx_2214_);
lean_dec(v___x_2213_);
v___x_2219_ = lean_box(0);
v_isShared_2220_ = v_isSharedCheck_2230_;
goto v_resetjp_2218_;
}
v_resetjp_2218_:
{
lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2224_; 
v___x_2221_ = lean_box(0);
v___x_2222_ = lean_obj_once(&l_Lean_Meta_saveEqnAffectingOptions___closed__5, &l_Lean_Meta_saveEqnAffectingOptions___closed__5_once, _init_l_Lean_Meta_saveEqnAffectingOptions___closed__5);
if (v_isShared_2220_ == 0)
{
lean_ctor_set(v___x_2219_, 1, v___x_2222_);
v___x_2224_ = v___x_2219_;
goto v_reusejp_2223_;
}
else
{
lean_object* v_reuseFailAlloc_2229_; 
v_reuseFailAlloc_2229_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2229_, 0, v_mctx_2214_);
lean_ctor_set(v_reuseFailAlloc_2229_, 1, v___x_2222_);
lean_ctor_set(v_reuseFailAlloc_2229_, 2, v_zetaDeltaFVarIds_2215_);
lean_ctor_set(v_reuseFailAlloc_2229_, 3, v_postponed_2216_);
lean_ctor_set(v_reuseFailAlloc_2229_, 4, v_diag_2217_);
v___x_2224_ = v_reuseFailAlloc_2229_;
goto v_reusejp_2223_;
}
v_reusejp_2223_:
{
lean_object* v___x_2225_; lean_object* v___x_2227_; 
v___x_2225_ = lean_st_ref_put(v___y_2192_, v___x_2224_);
if (v_isShared_2188_ == 0)
{
lean_ctor_set(v___x_2187_, 0, v___x_2221_);
v___x_2227_ = v___x_2187_;
goto v_reusejp_2226_;
}
else
{
lean_object* v_reuseFailAlloc_2228_; 
v_reuseFailAlloc_2228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2228_, 0, v___x_2221_);
v___x_2227_ = v_reuseFailAlloc_2228_;
goto v_reusejp_2226_;
}
v_reusejp_2226_:
{
return v___x_2227_;
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
lean_object* v_a_2249_; lean_object* v___x_2251_; uint8_t v_isShared_2252_; uint8_t v_isSharedCheck_2256_; 
lean_dec(v_declName_2172_);
v_a_2249_ = lean_ctor_get(v___x_2184_, 0);
v_isSharedCheck_2256_ = !lean_is_exclusive(v___x_2184_);
if (v_isSharedCheck_2256_ == 0)
{
v___x_2251_ = v___x_2184_;
v_isShared_2252_ = v_isSharedCheck_2256_;
goto v_resetjp_2250_;
}
else
{
lean_inc(v_a_2249_);
lean_dec(v___x_2184_);
v___x_2251_ = lean_box(0);
v_isShared_2252_ = v_isSharedCheck_2256_;
goto v_resetjp_2250_;
}
v_resetjp_2250_:
{
lean_object* v___x_2254_; 
if (v_isShared_2252_ == 0)
{
v___x_2254_ = v___x_2251_;
goto v_reusejp_2253_;
}
else
{
lean_object* v_reuseFailAlloc_2255_; 
v_reuseFailAlloc_2255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2255_, 0, v_a_2249_);
v___x_2254_ = v_reuseFailAlloc_2255_;
goto v_reusejp_2253_;
}
v_reusejp_2253_:
{
return v___x_2254_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_saveEqnAffectingOptions___boxed(lean_object* v_declName_2257_, lean_object* v_a_2258_, lean_object* v_a_2259_, lean_object* v_a_2260_, lean_object* v_a_2261_, lean_object* v_a_2262_){
_start:
{
lean_object* v_res_2263_; 
v_res_2263_ = l_Lean_Meta_saveEqnAffectingOptions(v_declName_2257_, v_a_2258_, v_a_2259_, v_a_2260_, v_a_2261_);
lean_dec(v_a_2261_);
lean_dec_ref(v_a_2260_);
lean_dec(v_a_2259_);
lean_dec_ref(v_a_2258_);
return v_res_2263_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__1(lean_object* v___x_2264_, lean_object* v_as_2265_, size_t v_sz_2266_, size_t v_i_2267_, lean_object* v_b_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_){
_start:
{
lean_object* v___x_2274_; 
v___x_2274_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___redArg(v___x_2264_, v_as_2265_, v_sz_2266_, v_i_2267_, v_b_2268_);
return v___x_2274_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___boxed(lean_object* v___x_2275_, lean_object* v_as_2276_, lean_object* v_sz_2277_, lean_object* v_i_2278_, lean_object* v_b_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_){
_start:
{
size_t v_sz_boxed_2285_; size_t v_i_boxed_2286_; lean_object* v_res_2287_; 
v_sz_boxed_2285_ = lean_unbox_usize(v_sz_2277_);
lean_dec(v_sz_2277_);
v_i_boxed_2286_ = lean_unbox_usize(v_i_2278_);
lean_dec(v_i_2278_);
v_res_2287_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__1(v___x_2275_, v_as_2276_, v_sz_boxed_2285_, v_i_boxed_2286_, v_b_2279_, v___y_2280_, v___y_2281_, v___y_2282_, v___y_2283_);
lean_dec(v___y_2283_);
lean_dec_ref(v___y_2282_);
lean_dec(v___y_2281_);
lean_dec_ref(v___y_2280_);
lean_dec_ref(v_as_2276_);
lean_dec_ref(v___x_2275_);
return v_res_2287_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_saveEqnAffectingOptions_spec__2_spec__2(lean_object* v_00_u03b2_2288_){
_start:
{
lean_object* v___x_2289_; 
v___x_2289_ = lean_obj_once(&l_Lean_Meta_saveEqnAffectingOptions___closed__2, &l_Lean_Meta_saveEqnAffectingOptions___closed__2_once, _init_l_Lean_Meta_saveEqnAffectingOptions___closed__2);
return v___x_2289_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_saveEqnAffectingOptions_spec__2___redArg(){
_start:
{
lean_object* v___x_2291_; 
v___x_2291_ = lean_obj_once(&l_Lean_Meta_saveEqnAffectingOptions___closed__2, &l_Lean_Meta_saveEqnAffectingOptions___closed__2_once, _init_l_Lean_Meta_saveEqnAffectingOptions___closed__2);
return v___x_2291_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_saveEqnAffectingOptions_spec__2___redArg___boxed(lean_object* v___dummy_2292_){
_start:
{
lean_object* v_res_2293_; 
v_res_2293_ = l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_saveEqnAffectingOptions_spec__2___redArg();
return v_res_2293_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_saveEqnAffectingOptions_spec__2(lean_object* v_00_u03b2_2294_){
_start:
{
lean_object* v___x_2295_; 
v___x_2295_ = lean_obj_once(&l_Lean_Meta_saveEqnAffectingOptions___closed__2, &l_Lean_Meta_saveEqnAffectingOptions___closed__2_once, _init_l_Lean_Meta_saveEqnAffectingOptions___closed__2);
return v___x_2295_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_408789758____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; 
v___x_2297_ = lean_box(0);
v___x_2298_ = lean_st_mk_ref(v___x_2297_);
v___x_2299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2299_, 0, v___x_2298_);
return v___x_2299_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_408789758____hygCtx___hyg_2____boxed(lean_object* v_a_2300_){
_start:
{
lean_object* v_res_2301_; 
v_res_2301_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_408789758____hygCtx___hyg_2_();
return v_res_2301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_registerGetUnfoldEqnFn(lean_object* v_f_2302_){
_start:
{
uint8_t v___x_2304_; 
v___x_2304_ = l_Lean_initializing();
if (v___x_2304_ == 0)
{
lean_object* v___x_2305_; lean_object* v___x_2306_; 
lean_dec_ref(v_f_2302_);
v___x_2305_ = lean_obj_once(&l_Lean_Meta_registerGetEqnsFn___closed__1, &l_Lean_Meta_registerGetEqnsFn___closed__1_once, _init_l_Lean_Meta_registerGetEqnsFn___closed__1);
v___x_2306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2306_, 0, v___x_2305_);
return v___x_2306_;
}
else
{
lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; 
v___x_2307_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_getUnfoldEqnFnsRef;
v___x_2308_ = lean_st_ref_take(v___x_2307_);
v___x_2309_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2309_, 0, v_f_2302_);
lean_ctor_set(v___x_2309_, 1, v___x_2308_);
v___x_2310_ = lean_st_ref_put(v___x_2307_, v___x_2309_);
v___x_2311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2311_, 0, v___x_2310_);
return v___x_2311_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_registerGetUnfoldEqnFn___boxed(lean_object* v_f_2312_, lean_object* v_a_2313_){
_start:
{
lean_object* v_res_2314_; 
v_res_2314_ = l_Lean_Meta_registerGetUnfoldEqnFn(v_f_2312_);
return v_res_2314_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg(lean_object* v_declName_2318_, lean_object* v_as_x27_2319_, lean_object* v_b_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_){
_start:
{
if (lean_obj_tag(v_as_x27_2319_) == 0)
{
lean_object* v___x_2326_; 
lean_dec(v_declName_2318_);
v___x_2326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2326_, 0, v_b_2320_);
return v___x_2326_;
}
else
{
lean_object* v_head_2327_; lean_object* v_tail_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; 
lean_dec_ref(v_b_2320_);
v_head_2327_ = lean_ctor_get(v_as_x27_2319_, 0);
v_tail_2328_ = lean_ctor_get(v_as_x27_2319_, 1);
v___x_2329_ = lean_box(0);
v___x_2330_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg___closed__0));
lean_inc(v_head_2327_);
lean_inc(v___y_2324_);
lean_inc_ref(v___y_2323_);
lean_inc(v___y_2322_);
lean_inc_ref(v___y_2321_);
lean_inc(v_declName_2318_);
v___x_2331_ = lean_apply_6(v_head_2327_, v_declName_2318_, v___y_2321_, v___y_2322_, v___y_2323_, v___y_2324_, lean_box(0));
if (lean_obj_tag(v___x_2331_) == 0)
{
lean_object* v_a_2332_; lean_object* v___x_2334_; uint8_t v_isShared_2335_; uint8_t v_isSharedCheck_2342_; 
v_a_2332_ = lean_ctor_get(v___x_2331_, 0);
v_isSharedCheck_2342_ = !lean_is_exclusive(v___x_2331_);
if (v_isSharedCheck_2342_ == 0)
{
v___x_2334_ = v___x_2331_;
v_isShared_2335_ = v_isSharedCheck_2342_;
goto v_resetjp_2333_;
}
else
{
lean_inc(v_a_2332_);
lean_dec(v___x_2331_);
v___x_2334_ = lean_box(0);
v_isShared_2335_ = v_isSharedCheck_2342_;
goto v_resetjp_2333_;
}
v_resetjp_2333_:
{
if (lean_obj_tag(v_a_2332_) == 1)
{
lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2339_; 
lean_dec(v_declName_2318_);
v___x_2336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2336_, 0, v_a_2332_);
v___x_2337_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2337_, 0, v___x_2336_);
lean_ctor_set(v___x_2337_, 1, v___x_2329_);
if (v_isShared_2335_ == 0)
{
lean_ctor_set(v___x_2334_, 0, v___x_2337_);
v___x_2339_ = v___x_2334_;
goto v_reusejp_2338_;
}
else
{
lean_object* v_reuseFailAlloc_2340_; 
v_reuseFailAlloc_2340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2340_, 0, v___x_2337_);
v___x_2339_ = v_reuseFailAlloc_2340_;
goto v_reusejp_2338_;
}
v_reusejp_2338_:
{
return v___x_2339_;
}
}
else
{
lean_del_object(v___x_2334_);
lean_dec(v_a_2332_);
v_as_x27_2319_ = v_tail_2328_;
v_b_2320_ = v___x_2330_;
goto _start;
}
}
}
else
{
lean_object* v_a_2343_; lean_object* v___x_2345_; uint8_t v_isShared_2346_; uint8_t v_isSharedCheck_2350_; 
lean_dec(v_declName_2318_);
v_a_2343_ = lean_ctor_get(v___x_2331_, 0);
v_isSharedCheck_2350_ = !lean_is_exclusive(v___x_2331_);
if (v_isSharedCheck_2350_ == 0)
{
v___x_2345_ = v___x_2331_;
v_isShared_2346_ = v_isSharedCheck_2350_;
goto v_resetjp_2344_;
}
else
{
lean_inc(v_a_2343_);
lean_dec(v___x_2331_);
v___x_2345_ = lean_box(0);
v_isShared_2346_ = v_isSharedCheck_2350_;
goto v_resetjp_2344_;
}
v_resetjp_2344_:
{
lean_object* v___x_2348_; 
if (v_isShared_2346_ == 0)
{
v___x_2348_ = v___x_2345_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2349_; 
v_reuseFailAlloc_2349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2349_, 0, v_a_2343_);
v___x_2348_ = v_reuseFailAlloc_2349_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
return v___x_2348_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg___boxed(lean_object* v_declName_2351_, lean_object* v_as_x27_2352_, lean_object* v_b_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_){
_start:
{
lean_object* v_res_2359_; 
v_res_2359_ = l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg(v_declName_2351_, v_as_x27_2352_, v_b_2353_, v___y_2354_, v___y_2355_, v___y_2356_, v___y_2357_);
lean_dec(v___y_2357_);
lean_dec_ref(v___y_2356_);
lean_dec(v___y_2355_);
lean_dec_ref(v___y_2354_);
lean_dec(v_as_x27_2352_);
return v_res_2359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__0(lean_object* v___x_2360_, lean_object* v_declName_2361_, uint8_t v_nonRec_2362_, lean_object* v___x_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_){
_start:
{
lean_object* v___x_2372_; lean_object* v_env_2373_; uint8_t v___x_2374_; uint8_t v___x_2375_; 
v___x_2372_ = lean_st_ref_get(v___y_2367_);
v_env_2373_ = lean_ctor_get(v___x_2372_, 0);
lean_inc_ref(v_env_2373_);
lean_dec(v___x_2372_);
v___x_2374_ = 1;
lean_inc(v___x_2360_);
v___x_2375_ = l_Lean_Environment_contains(v_env_2373_, v___x_2360_, v___x_2374_);
if (v___x_2375_ == 0)
{
lean_object* v___x_2376_; 
lean_dec(v___x_2360_);
lean_inc(v_declName_2361_);
v___x_2376_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_shouldGenerateEqnThms(v_declName_2361_, v___y_2364_, v___y_2365_, v___y_2366_, v___y_2367_);
if (lean_obj_tag(v___x_2376_) == 0)
{
lean_object* v_a_2377_; uint8_t v___x_2378_; 
v_a_2377_ = lean_ctor_get(v___x_2376_, 0);
lean_inc(v_a_2377_);
lean_dec_ref_known(v___x_2376_, 1);
v___x_2378_ = lean_unbox(v_a_2377_);
lean_dec(v_a_2377_);
if (v___x_2378_ == 0)
{
lean_dec_ref(v___x_2363_);
lean_dec(v_declName_2361_);
goto v___jp_2369_;
}
else
{
lean_object* v___x_2379_; 
lean_inc(v_declName_2361_);
v___x_2379_ = l_Lean_Meta_isRecursiveDefinition___redArg(v_declName_2361_, v___y_2367_);
if (lean_obj_tag(v___x_2379_) == 0)
{
lean_object* v_a_2380_; uint8_t v___x_2381_; 
v_a_2380_ = lean_ctor_get(v___x_2379_, 0);
lean_inc(v_a_2380_);
lean_dec_ref_known(v___x_2379_, 1);
v___x_2381_ = lean_unbox(v_a_2380_);
lean_dec(v_a_2380_);
if (v___x_2381_ == 0)
{
if (v_nonRec_2362_ == 0)
{
lean_dec_ref(v___x_2363_);
lean_dec(v_declName_2361_);
goto v___jp_2369_;
}
else
{
lean_object* v___x_2382_; lean_object* v_env_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; 
v___x_2382_ = lean_st_ref_get(v___y_2367_);
v_env_2383_ = lean_ctor_get(v___x_2382_, 0);
lean_inc_ref(v_env_2383_);
lean_dec(v___x_2382_);
lean_inc(v_declName_2361_);
v___x_2384_ = l_Lean_Meta_mkEqLikeNameFor(v_env_2383_, v_declName_2361_, v___x_2363_);
v___x_2385_ = l_Lean_Meta_mkSimpleEqThm(v_declName_2361_, v___x_2384_, v___y_2364_, v___y_2365_, v___y_2366_, v___y_2367_);
return v___x_2385_;
}
}
else
{
lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; 
lean_dec_ref(v___x_2363_);
v___x_2386_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_getUnfoldEqnFnsRef;
v___x_2387_ = lean_st_ref_get(v___x_2386_);
v___x_2388_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg___closed__0));
v___x_2389_ = l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg(v_declName_2361_, v___x_2387_, v___x_2388_, v___y_2364_, v___y_2365_, v___y_2366_, v___y_2367_);
lean_dec(v___x_2387_);
if (lean_obj_tag(v___x_2389_) == 0)
{
lean_object* v_a_2390_; lean_object* v___x_2392_; uint8_t v_isShared_2393_; uint8_t v_isSharedCheck_2399_; 
v_a_2390_ = lean_ctor_get(v___x_2389_, 0);
v_isSharedCheck_2399_ = !lean_is_exclusive(v___x_2389_);
if (v_isSharedCheck_2399_ == 0)
{
v___x_2392_ = v___x_2389_;
v_isShared_2393_ = v_isSharedCheck_2399_;
goto v_resetjp_2391_;
}
else
{
lean_inc(v_a_2390_);
lean_dec(v___x_2389_);
v___x_2392_ = lean_box(0);
v_isShared_2393_ = v_isSharedCheck_2399_;
goto v_resetjp_2391_;
}
v_resetjp_2391_:
{
lean_object* v_fst_2394_; 
v_fst_2394_ = lean_ctor_get(v_a_2390_, 0);
lean_inc(v_fst_2394_);
lean_dec(v_a_2390_);
if (lean_obj_tag(v_fst_2394_) == 0)
{
lean_del_object(v___x_2392_);
goto v___jp_2369_;
}
else
{
lean_object* v_val_2395_; lean_object* v___x_2397_; 
v_val_2395_ = lean_ctor_get(v_fst_2394_, 0);
lean_inc(v_val_2395_);
lean_dec_ref_known(v_fst_2394_, 1);
if (v_isShared_2393_ == 0)
{
lean_ctor_set(v___x_2392_, 0, v_val_2395_);
v___x_2397_ = v___x_2392_;
goto v_reusejp_2396_;
}
else
{
lean_object* v_reuseFailAlloc_2398_; 
v_reuseFailAlloc_2398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2398_, 0, v_val_2395_);
v___x_2397_ = v_reuseFailAlloc_2398_;
goto v_reusejp_2396_;
}
v_reusejp_2396_:
{
return v___x_2397_;
}
}
}
}
else
{
lean_object* v_a_2400_; lean_object* v___x_2402_; uint8_t v_isShared_2403_; uint8_t v_isSharedCheck_2407_; 
v_a_2400_ = lean_ctor_get(v___x_2389_, 0);
v_isSharedCheck_2407_ = !lean_is_exclusive(v___x_2389_);
if (v_isSharedCheck_2407_ == 0)
{
v___x_2402_ = v___x_2389_;
v_isShared_2403_ = v_isSharedCheck_2407_;
goto v_resetjp_2401_;
}
else
{
lean_inc(v_a_2400_);
lean_dec(v___x_2389_);
v___x_2402_ = lean_box(0);
v_isShared_2403_ = v_isSharedCheck_2407_;
goto v_resetjp_2401_;
}
v_resetjp_2401_:
{
lean_object* v___x_2405_; 
if (v_isShared_2403_ == 0)
{
v___x_2405_ = v___x_2402_;
goto v_reusejp_2404_;
}
else
{
lean_object* v_reuseFailAlloc_2406_; 
v_reuseFailAlloc_2406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2406_, 0, v_a_2400_);
v___x_2405_ = v_reuseFailAlloc_2406_;
goto v_reusejp_2404_;
}
v_reusejp_2404_:
{
return v___x_2405_;
}
}
}
}
}
else
{
lean_object* v_a_2408_; lean_object* v___x_2410_; uint8_t v_isShared_2411_; uint8_t v_isSharedCheck_2415_; 
lean_dec_ref(v___x_2363_);
lean_dec(v_declName_2361_);
v_a_2408_ = lean_ctor_get(v___x_2379_, 0);
v_isSharedCheck_2415_ = !lean_is_exclusive(v___x_2379_);
if (v_isSharedCheck_2415_ == 0)
{
v___x_2410_ = v___x_2379_;
v_isShared_2411_ = v_isSharedCheck_2415_;
goto v_resetjp_2409_;
}
else
{
lean_inc(v_a_2408_);
lean_dec(v___x_2379_);
v___x_2410_ = lean_box(0);
v_isShared_2411_ = v_isSharedCheck_2415_;
goto v_resetjp_2409_;
}
v_resetjp_2409_:
{
lean_object* v___x_2413_; 
if (v_isShared_2411_ == 0)
{
v___x_2413_ = v___x_2410_;
goto v_reusejp_2412_;
}
else
{
lean_object* v_reuseFailAlloc_2414_; 
v_reuseFailAlloc_2414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2414_, 0, v_a_2408_);
v___x_2413_ = v_reuseFailAlloc_2414_;
goto v_reusejp_2412_;
}
v_reusejp_2412_:
{
return v___x_2413_;
}
}
}
}
}
else
{
lean_object* v_a_2416_; lean_object* v___x_2418_; uint8_t v_isShared_2419_; uint8_t v_isSharedCheck_2423_; 
lean_dec_ref(v___x_2363_);
lean_dec(v_declName_2361_);
v_a_2416_ = lean_ctor_get(v___x_2376_, 0);
v_isSharedCheck_2423_ = !lean_is_exclusive(v___x_2376_);
if (v_isSharedCheck_2423_ == 0)
{
v___x_2418_ = v___x_2376_;
v_isShared_2419_ = v_isSharedCheck_2423_;
goto v_resetjp_2417_;
}
else
{
lean_inc(v_a_2416_);
lean_dec(v___x_2376_);
v___x_2418_ = lean_box(0);
v_isShared_2419_ = v_isSharedCheck_2423_;
goto v_resetjp_2417_;
}
v_resetjp_2417_:
{
lean_object* v___x_2421_; 
if (v_isShared_2419_ == 0)
{
v___x_2421_ = v___x_2418_;
goto v_reusejp_2420_;
}
else
{
lean_object* v_reuseFailAlloc_2422_; 
v_reuseFailAlloc_2422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2422_, 0, v_a_2416_);
v___x_2421_ = v_reuseFailAlloc_2422_;
goto v_reusejp_2420_;
}
v_reusejp_2420_:
{
return v___x_2421_;
}
}
}
}
else
{
lean_object* v___x_2424_; lean_object* v___x_2425_; 
lean_dec_ref(v___x_2363_);
lean_dec(v_declName_2361_);
v___x_2424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2424_, 0, v___x_2360_);
v___x_2425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2425_, 0, v___x_2424_);
return v___x_2425_;
}
v___jp_2369_:
{
lean_object* v___x_2370_; lean_object* v___x_2371_; 
v___x_2370_ = lean_box(0);
v___x_2371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2371_, 0, v___x_2370_);
return v___x_2371_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__0___boxed(lean_object* v___x_2426_, lean_object* v_declName_2427_, lean_object* v_nonRec_2428_, lean_object* v___x_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_){
_start:
{
uint8_t v_nonRec_boxed_2435_; lean_object* v_res_2436_; 
v_nonRec_boxed_2435_ = lean_unbox(v_nonRec_2428_);
v_res_2436_ = l_Lean_Meta_getUnfoldEqnFor_x3f___lam__0(v___x_2426_, v_declName_2427_, v_nonRec_boxed_2435_, v___x_2429_, v___y_2430_, v___y_2431_, v___y_2432_, v___y_2433_);
lean_dec(v___y_2433_);
lean_dec_ref(v___y_2432_);
lean_dec(v___y_2431_);
lean_dec_ref(v___y_2430_);
return v_res_2436_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2___redArg(lean_object* v_msg_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_){
_start:
{
lean_object* v_ref_2443_; lean_object* v___x_2444_; lean_object* v_a_2445_; lean_object* v___x_2447_; uint8_t v_isShared_2448_; uint8_t v_isSharedCheck_2453_; 
v_ref_2443_ = lean_ctor_get(v___y_2440_, 2);
v___x_2444_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__3_spec__4(v_msg_2437_, v___y_2438_, v___y_2439_, v___y_2440_, v___y_2441_);
v_a_2445_ = lean_ctor_get(v___x_2444_, 0);
v_isSharedCheck_2453_ = !lean_is_exclusive(v___x_2444_);
if (v_isSharedCheck_2453_ == 0)
{
v___x_2447_ = v___x_2444_;
v_isShared_2448_ = v_isSharedCheck_2453_;
goto v_resetjp_2446_;
}
else
{
lean_inc(v_a_2445_);
lean_dec(v___x_2444_);
v___x_2447_ = lean_box(0);
v_isShared_2448_ = v_isSharedCheck_2453_;
goto v_resetjp_2446_;
}
v_resetjp_2446_:
{
lean_object* v___x_2449_; lean_object* v___x_2451_; 
lean_inc(v_ref_2443_);
v___x_2449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2449_, 0, v_ref_2443_);
lean_ctor_set(v___x_2449_, 1, v_a_2445_);
if (v_isShared_2448_ == 0)
{
lean_ctor_set_tag(v___x_2447_, 1);
lean_ctor_set(v___x_2447_, 0, v___x_2449_);
v___x_2451_ = v___x_2447_;
goto v_reusejp_2450_;
}
else
{
lean_object* v_reuseFailAlloc_2452_; 
v_reuseFailAlloc_2452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2452_, 0, v___x_2449_);
v___x_2451_ = v_reuseFailAlloc_2452_;
goto v_reusejp_2450_;
}
v_reusejp_2450_:
{
return v___x_2451_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2___redArg___boxed(lean_object* v_msg_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_){
_start:
{
lean_object* v_res_2460_; 
v_res_2460_ = l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2___redArg(v_msg_2454_, v___y_2455_, v___y_2456_, v___y_2457_, v___y_2458_);
lean_dec(v___y_2458_);
lean_dec_ref(v___y_2457_);
lean_dec(v___y_2456_);
lean_dec_ref(v___y_2455_);
return v_res_2460_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg___lam__0(lean_object* v___y_2461_, uint8_t v_isExporting_2462_, lean_object* v___x_2463_, lean_object* v___y_2464_, lean_object* v___x_2465_, lean_object* v_a_x3f_2466_){
_start:
{
lean_object* v___x_2468_; lean_object* v_env_2469_; lean_object* v_nextMacroScope_2470_; lean_object* v_ngen_2471_; lean_object* v_auxDeclNGen_2472_; lean_object* v_traceState_2473_; lean_object* v_recordedDeps_2474_; lean_object* v_messages_2475_; lean_object* v_infoState_2476_; lean_object* v_snapshotTasks_2477_; lean_object* v___x_2479_; uint8_t v_isShared_2480_; uint8_t v_isSharedCheck_2502_; 
v___x_2468_ = lean_st_ref_take(v___y_2461_);
v_env_2469_ = lean_ctor_get(v___x_2468_, 0);
v_nextMacroScope_2470_ = lean_ctor_get(v___x_2468_, 1);
v_ngen_2471_ = lean_ctor_get(v___x_2468_, 2);
v_auxDeclNGen_2472_ = lean_ctor_get(v___x_2468_, 3);
v_traceState_2473_ = lean_ctor_get(v___x_2468_, 4);
v_recordedDeps_2474_ = lean_ctor_get(v___x_2468_, 6);
v_messages_2475_ = lean_ctor_get(v___x_2468_, 7);
v_infoState_2476_ = lean_ctor_get(v___x_2468_, 8);
v_snapshotTasks_2477_ = lean_ctor_get(v___x_2468_, 9);
v_isSharedCheck_2502_ = !lean_is_exclusive(v___x_2468_);
if (v_isSharedCheck_2502_ == 0)
{
lean_object* v_unused_2503_; 
v_unused_2503_ = lean_ctor_get(v___x_2468_, 5);
lean_dec(v_unused_2503_);
v___x_2479_ = v___x_2468_;
v_isShared_2480_ = v_isSharedCheck_2502_;
goto v_resetjp_2478_;
}
else
{
lean_inc(v_snapshotTasks_2477_);
lean_inc(v_infoState_2476_);
lean_inc(v_messages_2475_);
lean_inc(v_recordedDeps_2474_);
lean_inc(v_traceState_2473_);
lean_inc(v_auxDeclNGen_2472_);
lean_inc(v_ngen_2471_);
lean_inc(v_nextMacroScope_2470_);
lean_inc(v_env_2469_);
lean_dec(v___x_2468_);
v___x_2479_ = lean_box(0);
v_isShared_2480_ = v_isSharedCheck_2502_;
goto v_resetjp_2478_;
}
v_resetjp_2478_:
{
lean_object* v___x_2481_; lean_object* v___x_2483_; 
v___x_2481_ = l_Lean_Environment_setExporting(v_env_2469_, v_isExporting_2462_);
if (v_isShared_2480_ == 0)
{
lean_ctor_set(v___x_2479_, 5, v___x_2463_);
lean_ctor_set(v___x_2479_, 0, v___x_2481_);
v___x_2483_ = v___x_2479_;
goto v_reusejp_2482_;
}
else
{
lean_object* v_reuseFailAlloc_2501_; 
v_reuseFailAlloc_2501_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2501_, 0, v___x_2481_);
lean_ctor_set(v_reuseFailAlloc_2501_, 1, v_nextMacroScope_2470_);
lean_ctor_set(v_reuseFailAlloc_2501_, 2, v_ngen_2471_);
lean_ctor_set(v_reuseFailAlloc_2501_, 3, v_auxDeclNGen_2472_);
lean_ctor_set(v_reuseFailAlloc_2501_, 4, v_traceState_2473_);
lean_ctor_set(v_reuseFailAlloc_2501_, 5, v___x_2463_);
lean_ctor_set(v_reuseFailAlloc_2501_, 6, v_recordedDeps_2474_);
lean_ctor_set(v_reuseFailAlloc_2501_, 7, v_messages_2475_);
lean_ctor_set(v_reuseFailAlloc_2501_, 8, v_infoState_2476_);
lean_ctor_set(v_reuseFailAlloc_2501_, 9, v_snapshotTasks_2477_);
v___x_2483_ = v_reuseFailAlloc_2501_;
goto v_reusejp_2482_;
}
v_reusejp_2482_:
{
lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v_mctx_2486_; lean_object* v_zetaDeltaFVarIds_2487_; lean_object* v_postponed_2488_; lean_object* v_diag_2489_; lean_object* v___x_2491_; uint8_t v_isShared_2492_; uint8_t v_isSharedCheck_2499_; 
v___x_2484_ = lean_st_ref_put(v___y_2461_, v___x_2483_);
v___x_2485_ = lean_st_ref_take(v___y_2464_);
v_mctx_2486_ = lean_ctor_get(v___x_2485_, 0);
v_zetaDeltaFVarIds_2487_ = lean_ctor_get(v___x_2485_, 2);
v_postponed_2488_ = lean_ctor_get(v___x_2485_, 3);
v_diag_2489_ = lean_ctor_get(v___x_2485_, 4);
v_isSharedCheck_2499_ = !lean_is_exclusive(v___x_2485_);
if (v_isSharedCheck_2499_ == 0)
{
lean_object* v_unused_2500_; 
v_unused_2500_ = lean_ctor_get(v___x_2485_, 1);
lean_dec(v_unused_2500_);
v___x_2491_ = v___x_2485_;
v_isShared_2492_ = v_isSharedCheck_2499_;
goto v_resetjp_2490_;
}
else
{
lean_inc(v_diag_2489_);
lean_inc(v_postponed_2488_);
lean_inc(v_zetaDeltaFVarIds_2487_);
lean_inc(v_mctx_2486_);
lean_dec(v___x_2485_);
v___x_2491_ = lean_box(0);
v_isShared_2492_ = v_isSharedCheck_2499_;
goto v_resetjp_2490_;
}
v_resetjp_2490_:
{
lean_object* v___x_2493_; lean_object* v___x_2495_; 
v___x_2493_ = lean_box(0);
if (v_isShared_2492_ == 0)
{
lean_ctor_set(v___x_2491_, 1, v___x_2465_);
v___x_2495_ = v___x_2491_;
goto v_reusejp_2494_;
}
else
{
lean_object* v_reuseFailAlloc_2498_; 
v_reuseFailAlloc_2498_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2498_, 0, v_mctx_2486_);
lean_ctor_set(v_reuseFailAlloc_2498_, 1, v___x_2465_);
lean_ctor_set(v_reuseFailAlloc_2498_, 2, v_zetaDeltaFVarIds_2487_);
lean_ctor_set(v_reuseFailAlloc_2498_, 3, v_postponed_2488_);
lean_ctor_set(v_reuseFailAlloc_2498_, 4, v_diag_2489_);
v___x_2495_ = v_reuseFailAlloc_2498_;
goto v_reusejp_2494_;
}
v_reusejp_2494_:
{
lean_object* v___x_2496_; lean_object* v___x_2497_; 
v___x_2496_ = lean_st_ref_put(v___y_2464_, v___x_2495_);
v___x_2497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2497_, 0, v___x_2493_);
return v___x_2497_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg___lam__0___boxed(lean_object* v___y_2504_, lean_object* v_isExporting_2505_, lean_object* v___x_2506_, lean_object* v___y_2507_, lean_object* v___x_2508_, lean_object* v_a_x3f_2509_, lean_object* v___y_2510_){
_start:
{
uint8_t v_isExporting_boxed_2511_; lean_object* v_res_2512_; 
v_isExporting_boxed_2511_ = lean_unbox(v_isExporting_2505_);
v_res_2512_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg___lam__0(v___y_2504_, v_isExporting_boxed_2511_, v___x_2506_, v___y_2507_, v___x_2508_, v_a_x3f_2509_);
lean_dec(v_a_x3f_2509_);
lean_dec(v___y_2507_);
lean_dec(v___y_2504_);
return v_res_2512_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg(lean_object* v_x_2513_, uint8_t v_isExporting_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_, lean_object* v___y_2518_){
_start:
{
lean_object* v___x_2520_; lean_object* v_env_2521_; lean_object* v___x_2522_; uint8_t v_isModule_2523_; 
v___x_2520_ = lean_st_ref_get(v___y_2518_);
v_env_2521_ = lean_ctor_get(v___x_2520_, 0);
lean_inc_ref(v_env_2521_);
lean_dec(v___x_2520_);
v___x_2522_ = l_Lean_Environment_header(v_env_2521_);
v_isModule_2523_ = lean_ctor_get_uint8(v___x_2522_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_2522_);
if (v_isModule_2523_ == 0)
{
lean_object* v___x_2524_; 
lean_dec_ref(v_env_2521_);
lean_inc(v___y_2518_);
lean_inc_ref(v___y_2517_);
lean_inc(v___y_2516_);
lean_inc_ref(v___y_2515_);
v___x_2524_ = lean_apply_5(v_x_2513_, v___y_2515_, v___y_2516_, v___y_2517_, v___y_2518_, lean_box(0));
return v___x_2524_;
}
else
{
uint8_t v_isExporting_2525_; 
v_isExporting_2525_ = lean_ctor_get_uint8(v_env_2521_, sizeof(void*)*13);
lean_dec_ref(v_env_2521_);
if (v_isExporting_2514_ == 0)
{
if (v_isExporting_2525_ == 0)
{
lean_object* v___x_2592_; 
lean_inc(v___y_2518_);
lean_inc_ref(v___y_2517_);
lean_inc(v___y_2516_);
lean_inc_ref(v___y_2515_);
v___x_2592_ = lean_apply_5(v_x_2513_, v___y_2515_, v___y_2516_, v___y_2517_, v___y_2518_, lean_box(0));
return v___x_2592_;
}
else
{
goto v___jp_2526_;
}
}
else
{
if (v_isExporting_2525_ == 0)
{
goto v___jp_2526_;
}
else
{
lean_object* v___x_2593_; 
lean_inc(v___y_2518_);
lean_inc_ref(v___y_2517_);
lean_inc(v___y_2516_);
lean_inc_ref(v___y_2515_);
v___x_2593_ = lean_apply_5(v_x_2513_, v___y_2515_, v___y_2516_, v___y_2517_, v___y_2518_, lean_box(0));
return v___x_2593_;
}
}
v___jp_2526_:
{
lean_object* v___x_2527_; lean_object* v_env_2528_; lean_object* v_nextMacroScope_2529_; lean_object* v_ngen_2530_; lean_object* v_auxDeclNGen_2531_; lean_object* v_traceState_2532_; lean_object* v_recordedDeps_2533_; lean_object* v_messages_2534_; lean_object* v_infoState_2535_; lean_object* v_snapshotTasks_2536_; lean_object* v___x_2538_; uint8_t v_isShared_2539_; uint8_t v_isSharedCheck_2590_; 
v___x_2527_ = lean_st_ref_take(v___y_2518_);
v_env_2528_ = lean_ctor_get(v___x_2527_, 0);
v_nextMacroScope_2529_ = lean_ctor_get(v___x_2527_, 1);
v_ngen_2530_ = lean_ctor_get(v___x_2527_, 2);
v_auxDeclNGen_2531_ = lean_ctor_get(v___x_2527_, 3);
v_traceState_2532_ = lean_ctor_get(v___x_2527_, 4);
v_recordedDeps_2533_ = lean_ctor_get(v___x_2527_, 6);
v_messages_2534_ = lean_ctor_get(v___x_2527_, 7);
v_infoState_2535_ = lean_ctor_get(v___x_2527_, 8);
v_snapshotTasks_2536_ = lean_ctor_get(v___x_2527_, 9);
v_isSharedCheck_2590_ = !lean_is_exclusive(v___x_2527_);
if (v_isSharedCheck_2590_ == 0)
{
lean_object* v_unused_2591_; 
v_unused_2591_ = lean_ctor_get(v___x_2527_, 5);
lean_dec(v_unused_2591_);
v___x_2538_ = v___x_2527_;
v_isShared_2539_ = v_isSharedCheck_2590_;
goto v_resetjp_2537_;
}
else
{
lean_inc(v_snapshotTasks_2536_);
lean_inc(v_infoState_2535_);
lean_inc(v_messages_2534_);
lean_inc(v_recordedDeps_2533_);
lean_inc(v_traceState_2532_);
lean_inc(v_auxDeclNGen_2531_);
lean_inc(v_ngen_2530_);
lean_inc(v_nextMacroScope_2529_);
lean_inc(v_env_2528_);
lean_dec(v___x_2527_);
v___x_2538_ = lean_box(0);
v_isShared_2539_ = v_isSharedCheck_2590_;
goto v_resetjp_2537_;
}
v_resetjp_2537_:
{
lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2543_; 
v___x_2540_ = l_Lean_Environment_setExporting(v_env_2528_, v_isExporting_2514_);
v___x_2541_ = lean_obj_once(&l_Lean_Meta_withEqnOptions___redArg___closed__1, &l_Lean_Meta_withEqnOptions___redArg___closed__1_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__1);
if (v_isShared_2539_ == 0)
{
lean_ctor_set(v___x_2538_, 5, v___x_2541_);
lean_ctor_set(v___x_2538_, 0, v___x_2540_);
v___x_2543_ = v___x_2538_;
goto v_reusejp_2542_;
}
else
{
lean_object* v_reuseFailAlloc_2589_; 
v_reuseFailAlloc_2589_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2589_, 0, v___x_2540_);
lean_ctor_set(v_reuseFailAlloc_2589_, 1, v_nextMacroScope_2529_);
lean_ctor_set(v_reuseFailAlloc_2589_, 2, v_ngen_2530_);
lean_ctor_set(v_reuseFailAlloc_2589_, 3, v_auxDeclNGen_2531_);
lean_ctor_set(v_reuseFailAlloc_2589_, 4, v_traceState_2532_);
lean_ctor_set(v_reuseFailAlloc_2589_, 5, v___x_2541_);
lean_ctor_set(v_reuseFailAlloc_2589_, 6, v_recordedDeps_2533_);
lean_ctor_set(v_reuseFailAlloc_2589_, 7, v_messages_2534_);
lean_ctor_set(v_reuseFailAlloc_2589_, 8, v_infoState_2535_);
lean_ctor_set(v_reuseFailAlloc_2589_, 9, v_snapshotTasks_2536_);
v___x_2543_ = v_reuseFailAlloc_2589_;
goto v_reusejp_2542_;
}
v_reusejp_2542_:
{
lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v_mctx_2546_; lean_object* v_zetaDeltaFVarIds_2547_; lean_object* v_postponed_2548_; lean_object* v_diag_2549_; lean_object* v___x_2551_; uint8_t v_isShared_2552_; uint8_t v_isSharedCheck_2587_; 
v___x_2544_ = lean_st_ref_put(v___y_2518_, v___x_2543_);
v___x_2545_ = lean_st_ref_take(v___y_2516_);
v_mctx_2546_ = lean_ctor_get(v___x_2545_, 0);
v_zetaDeltaFVarIds_2547_ = lean_ctor_get(v___x_2545_, 2);
v_postponed_2548_ = lean_ctor_get(v___x_2545_, 3);
v_diag_2549_ = lean_ctor_get(v___x_2545_, 4);
v_isSharedCheck_2587_ = !lean_is_exclusive(v___x_2545_);
if (v_isSharedCheck_2587_ == 0)
{
lean_object* v_unused_2588_; 
v_unused_2588_ = lean_ctor_get(v___x_2545_, 1);
lean_dec(v_unused_2588_);
v___x_2551_ = v___x_2545_;
v_isShared_2552_ = v_isSharedCheck_2587_;
goto v_resetjp_2550_;
}
else
{
lean_inc(v_diag_2549_);
lean_inc(v_postponed_2548_);
lean_inc(v_zetaDeltaFVarIds_2547_);
lean_inc(v_mctx_2546_);
lean_dec(v___x_2545_);
v___x_2551_ = lean_box(0);
v_isShared_2552_ = v_isSharedCheck_2587_;
goto v_resetjp_2550_;
}
v_resetjp_2550_:
{
lean_object* v___x_2553_; lean_object* v___x_2555_; 
v___x_2553_ = lean_obj_once(&l_Lean_Meta_saveEqnAffectingOptions___closed__5, &l_Lean_Meta_saveEqnAffectingOptions___closed__5_once, _init_l_Lean_Meta_saveEqnAffectingOptions___closed__5);
if (v_isShared_2552_ == 0)
{
lean_ctor_set(v___x_2551_, 1, v___x_2553_);
v___x_2555_ = v___x_2551_;
goto v_reusejp_2554_;
}
else
{
lean_object* v_reuseFailAlloc_2586_; 
v_reuseFailAlloc_2586_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2586_, 0, v_mctx_2546_);
lean_ctor_set(v_reuseFailAlloc_2586_, 1, v___x_2553_);
lean_ctor_set(v_reuseFailAlloc_2586_, 2, v_zetaDeltaFVarIds_2547_);
lean_ctor_set(v_reuseFailAlloc_2586_, 3, v_postponed_2548_);
lean_ctor_set(v_reuseFailAlloc_2586_, 4, v_diag_2549_);
v___x_2555_ = v_reuseFailAlloc_2586_;
goto v_reusejp_2554_;
}
v_reusejp_2554_:
{
lean_object* v___x_2556_; lean_object* v_r_2557_; 
v___x_2556_ = lean_st_ref_put(v___y_2516_, v___x_2555_);
lean_inc(v___y_2518_);
lean_inc_ref(v___y_2517_);
lean_inc(v___y_2516_);
lean_inc_ref(v___y_2515_);
v_r_2557_ = lean_apply_5(v_x_2513_, v___y_2515_, v___y_2516_, v___y_2517_, v___y_2518_, lean_box(0));
if (lean_obj_tag(v_r_2557_) == 0)
{
lean_object* v_a_2558_; lean_object* v___x_2560_; uint8_t v_isShared_2561_; uint8_t v_isSharedCheck_2574_; 
v_a_2558_ = lean_ctor_get(v_r_2557_, 0);
v_isSharedCheck_2574_ = !lean_is_exclusive(v_r_2557_);
if (v_isSharedCheck_2574_ == 0)
{
v___x_2560_ = v_r_2557_;
v_isShared_2561_ = v_isSharedCheck_2574_;
goto v_resetjp_2559_;
}
else
{
lean_inc(v_a_2558_);
lean_dec(v_r_2557_);
v___x_2560_ = lean_box(0);
v_isShared_2561_ = v_isSharedCheck_2574_;
goto v_resetjp_2559_;
}
v_resetjp_2559_:
{
lean_object* v___x_2563_; 
lean_inc(v_a_2558_);
if (v_isShared_2561_ == 0)
{
lean_ctor_set_tag(v___x_2560_, 1);
v___x_2563_ = v___x_2560_;
goto v_reusejp_2562_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v_a_2558_);
v___x_2563_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2562_;
}
v_reusejp_2562_:
{
lean_object* v___x_2564_; lean_object* v___x_2566_; uint8_t v_isShared_2567_; uint8_t v_isSharedCheck_2571_; 
v___x_2564_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg___lam__0(v___y_2518_, v_isExporting_2525_, v___x_2541_, v___y_2516_, v___x_2553_, v___x_2563_);
lean_dec_ref(v___x_2563_);
v_isSharedCheck_2571_ = !lean_is_exclusive(v___x_2564_);
if (v_isSharedCheck_2571_ == 0)
{
lean_object* v_unused_2572_; 
v_unused_2572_ = lean_ctor_get(v___x_2564_, 0);
lean_dec(v_unused_2572_);
v___x_2566_ = v___x_2564_;
v_isShared_2567_ = v_isSharedCheck_2571_;
goto v_resetjp_2565_;
}
else
{
lean_dec(v___x_2564_);
v___x_2566_ = lean_box(0);
v_isShared_2567_ = v_isSharedCheck_2571_;
goto v_resetjp_2565_;
}
v_resetjp_2565_:
{
lean_object* v___x_2569_; 
if (v_isShared_2567_ == 0)
{
lean_ctor_set(v___x_2566_, 0, v_a_2558_);
v___x_2569_ = v___x_2566_;
goto v_reusejp_2568_;
}
else
{
lean_object* v_reuseFailAlloc_2570_; 
v_reuseFailAlloc_2570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2570_, 0, v_a_2558_);
v___x_2569_ = v_reuseFailAlloc_2570_;
goto v_reusejp_2568_;
}
v_reusejp_2568_:
{
return v___x_2569_;
}
}
}
}
}
else
{
lean_object* v_a_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2579_; uint8_t v_isShared_2580_; uint8_t v_isSharedCheck_2584_; 
v_a_2575_ = lean_ctor_get(v_r_2557_, 0);
lean_inc(v_a_2575_);
lean_dec_ref_known(v_r_2557_, 1);
v___x_2576_ = lean_box(0);
v___x_2577_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg___lam__0(v___y_2518_, v_isExporting_2525_, v___x_2541_, v___y_2516_, v___x_2553_, v___x_2576_);
v_isSharedCheck_2584_ = !lean_is_exclusive(v___x_2577_);
if (v_isSharedCheck_2584_ == 0)
{
lean_object* v_unused_2585_; 
v_unused_2585_ = lean_ctor_get(v___x_2577_, 0);
lean_dec(v_unused_2585_);
v___x_2579_ = v___x_2577_;
v_isShared_2580_ = v_isSharedCheck_2584_;
goto v_resetjp_2578_;
}
else
{
lean_dec(v___x_2577_);
v___x_2579_ = lean_box(0);
v_isShared_2580_ = v_isSharedCheck_2584_;
goto v_resetjp_2578_;
}
v_resetjp_2578_:
{
lean_object* v___x_2582_; 
if (v_isShared_2580_ == 0)
{
lean_ctor_set_tag(v___x_2579_, 1);
lean_ctor_set(v___x_2579_, 0, v_a_2575_);
v___x_2582_ = v___x_2579_;
goto v_reusejp_2581_;
}
else
{
lean_object* v_reuseFailAlloc_2583_; 
v_reuseFailAlloc_2583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2583_, 0, v_a_2575_);
v___x_2582_ = v_reuseFailAlloc_2583_;
goto v_reusejp_2581_;
}
v_reusejp_2581_:
{
return v___x_2582_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg___boxed(lean_object* v_x_2594_, lean_object* v_isExporting_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_, lean_object* v___y_2600_){
_start:
{
uint8_t v_isExporting_boxed_2601_; lean_object* v_res_2602_; 
v_isExporting_boxed_2601_ = lean_unbox(v_isExporting_2595_);
v_res_2602_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg(v_x_2594_, v_isExporting_boxed_2601_, v___y_2596_, v___y_2597_, v___y_2598_, v___y_2599_);
lean_dec(v___y_2599_);
lean_dec_ref(v___y_2598_);
lean_dec(v___y_2597_);
lean_dec_ref(v___y_2596_);
return v_res_2602_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1___redArg(lean_object* v_x_2603_, uint8_t v_when_2604_, lean_object* v___y_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_){
_start:
{
if (v_when_2604_ == 0)
{
lean_object* v___x_2610_; 
lean_inc(v___y_2608_);
lean_inc_ref(v___y_2607_);
lean_inc(v___y_2606_);
lean_inc_ref(v___y_2605_);
v___x_2610_ = lean_apply_5(v_x_2603_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, lean_box(0));
return v___x_2610_;
}
else
{
uint8_t v___x_2611_; lean_object* v___x_2612_; 
v___x_2611_ = 0;
v___x_2612_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg(v_x_2603_, v___x_2611_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_);
return v___x_2612_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1___redArg___boxed(lean_object* v_x_2613_, lean_object* v_when_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_){
_start:
{
uint8_t v_when_boxed_2620_; lean_object* v_res_2621_; 
v_when_boxed_2620_ = lean_unbox(v_when_2614_);
v_res_2621_ = l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1___redArg(v_x_2613_, v_when_boxed_2620_, v___y_2615_, v___y_2616_, v___y_2617_, v___y_2618_);
lean_dec(v___y_2618_);
lean_dec_ref(v___y_2617_);
lean_dec(v___y_2616_);
lean_dec_ref(v___y_2615_);
return v_res_2621_;
}
}
static lean_object* _init_l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2623_; lean_object* v___x_2624_; 
v___x_2623_ = ((lean_object*)(l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__0));
v___x_2624_ = l_Lean_stringToMessageData(v___x_2623_);
return v___x_2624_;
}
}
static lean_object* _init_l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__3(void){
_start:
{
lean_object* v___x_2626_; lean_object* v___x_2627_; 
v___x_2626_ = ((lean_object*)(l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__2));
v___x_2627_ = l_Lean_stringToMessageData(v___x_2626_);
return v___x_2627_;
}
}
static lean_object* _init_l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__4(void){
_start:
{
lean_object* v___x_2628_; lean_object* v___x_2629_; 
v___x_2628_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__2___closed__4));
v___x_2629_ = l_Lean_stringToMessageData(v___x_2628_);
return v___x_2629_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1(lean_object* v_declName_2630_, uint8_t v_nonRec_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_){
_start:
{
lean_object* v___x_2637_; lean_object* v_env_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___f_2642_; uint8_t v___x_2643_; lean_object* v___x_2644_; 
v___x_2637_ = lean_st_ref_get(v___y_2635_);
v_env_2638_ = lean_ctor_get(v___x_2637_, 0);
lean_inc_ref(v_env_2638_);
lean_dec(v___x_2637_);
v___x_2639_ = ((lean_object*)(l_Lean_Meta_unfoldThmSuffix___closed__0));
lean_inc(v_declName_2630_);
v___x_2640_ = l_Lean_Meta_mkEqLikeNameFor(v_env_2638_, v_declName_2630_, v___x_2639_);
v___x_2641_ = lean_box(v_nonRec_2631_);
lean_inc(v___x_2640_);
v___f_2642_ = lean_alloc_closure((void*)(l_Lean_Meta_getUnfoldEqnFor_x3f___lam__0___boxed), 9, 4);
lean_closure_set(v___f_2642_, 0, v___x_2640_);
lean_closure_set(v___f_2642_, 1, v_declName_2630_);
lean_closure_set(v___f_2642_, 2, v___x_2641_);
lean_closure_set(v___f_2642_, 3, v___x_2639_);
v___x_2643_ = 1;
v___x_2644_ = l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1___redArg(v___f_2642_, v___x_2643_, v___y_2632_, v___y_2633_, v___y_2634_, v___y_2635_);
if (lean_obj_tag(v___x_2644_) == 0)
{
lean_object* v_a_2645_; 
v_a_2645_ = lean_ctor_get(v___x_2644_, 0);
if (lean_obj_tag(v_a_2645_) == 1)
{
lean_object* v_val_2646_; uint8_t v___x_2647_; 
v_val_2646_ = lean_ctor_get(v_a_2645_, 0);
v___x_2647_ = lean_name_eq(v_val_2646_, v___x_2640_);
if (v___x_2647_ == 0)
{
lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v_a_2658_; lean_object* v___x_2660_; uint8_t v_isShared_2661_; uint8_t v_isSharedCheck_2665_; 
lean_inc(v_val_2646_);
lean_dec_ref_known(v___x_2644_, 1);
v___x_2648_ = lean_obj_once(&l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__1, &l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__1_once, _init_l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__1);
v___x_2649_ = l_Lean_MessageData_ofName(v_val_2646_);
v___x_2650_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2650_, 0, v___x_2648_);
lean_ctor_set(v___x_2650_, 1, v___x_2649_);
v___x_2651_ = lean_obj_once(&l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__3, &l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__3_once, _init_l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__3);
v___x_2652_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2652_, 0, v___x_2650_);
lean_ctor_set(v___x_2652_, 1, v___x_2651_);
v___x_2653_ = l_Lean_MessageData_ofName(v___x_2640_);
v___x_2654_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2654_, 0, v___x_2652_);
lean_ctor_set(v___x_2654_, 1, v___x_2653_);
v___x_2655_ = lean_obj_once(&l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__4, &l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__4_once, _init_l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__4);
v___x_2656_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2656_, 0, v___x_2654_);
lean_ctor_set(v___x_2656_, 1, v___x_2655_);
v___x_2657_ = l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2___redArg(v___x_2656_, v___y_2632_, v___y_2633_, v___y_2634_, v___y_2635_);
v_a_2658_ = lean_ctor_get(v___x_2657_, 0);
v_isSharedCheck_2665_ = !lean_is_exclusive(v___x_2657_);
if (v_isSharedCheck_2665_ == 0)
{
v___x_2660_ = v___x_2657_;
v_isShared_2661_ = v_isSharedCheck_2665_;
goto v_resetjp_2659_;
}
else
{
lean_inc(v_a_2658_);
lean_dec(v___x_2657_);
v___x_2660_ = lean_box(0);
v_isShared_2661_ = v_isSharedCheck_2665_;
goto v_resetjp_2659_;
}
v_resetjp_2659_:
{
lean_object* v___x_2663_; 
if (v_isShared_2661_ == 0)
{
v___x_2663_ = v___x_2660_;
goto v_reusejp_2662_;
}
else
{
lean_object* v_reuseFailAlloc_2664_; 
v_reuseFailAlloc_2664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2664_, 0, v_a_2658_);
v___x_2663_ = v_reuseFailAlloc_2664_;
goto v_reusejp_2662_;
}
v_reusejp_2662_:
{
return v___x_2663_;
}
}
}
else
{
lean_dec(v___x_2640_);
return v___x_2644_;
}
}
else
{
lean_dec(v___x_2640_);
return v___x_2644_;
}
}
else
{
lean_dec(v___x_2640_);
return v___x_2644_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___boxed(lean_object* v_declName_2666_, lean_object* v_nonRec_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_){
_start:
{
uint8_t v_nonRec_boxed_2673_; lean_object* v_res_2674_; 
v_nonRec_boxed_2673_ = lean_unbox(v_nonRec_2667_);
v_res_2674_ = l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1(v_declName_2666_, v_nonRec_boxed_2673_, v___y_2668_, v___y_2669_, v___y_2670_, v___y_2671_);
lean_dec(v___y_2671_);
lean_dec_ref(v___y_2670_);
lean_dec(v___y_2669_);
lean_dec_ref(v___y_2668_);
return v_res_2674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f(lean_object* v_declName_2675_, uint8_t v_nonRec_2676_, lean_object* v_a_2677_, lean_object* v_a_2678_, lean_object* v_a_2679_, lean_object* v_a_2680_){
_start:
{
lean_object* v___x_2682_; lean_object* v___f_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; 
v___x_2682_ = lean_box(v_nonRec_2676_);
v___f_2683_ = lean_alloc_closure((void*)(l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___boxed), 7, 2);
lean_closure_set(v___f_2683_, 0, v_declName_2675_);
lean_closure_set(v___f_2683_, 1, v___x_2682_);
v___x_2684_ = lean_unsigned_to_nat(32u);
v___x_2685_ = lean_mk_empty_array_with_capacity(v___x_2684_);
lean_dec_ref(v___x_2685_);
v___x_2686_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_2687_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__2));
v___x_2688_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___redArg(v___x_2686_, v___x_2687_, v___f_2683_, v_a_2677_, v_a_2678_, v_a_2679_, v_a_2680_);
return v___x_2688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___boxed(lean_object* v_declName_2689_, lean_object* v_nonRec_2690_, lean_object* v_a_2691_, lean_object* v_a_2692_, lean_object* v_a_2693_, lean_object* v_a_2694_, lean_object* v_a_2695_){
_start:
{
uint8_t v_nonRec_boxed_2696_; lean_object* v_res_2697_; 
v_nonRec_boxed_2696_ = lean_unbox(v_nonRec_2690_);
v_res_2697_ = l_Lean_Meta_getUnfoldEqnFor_x3f(v_declName_2689_, v_nonRec_boxed_2696_, v_a_2691_, v_a_2692_, v_a_2693_, v_a_2694_);
lean_dec(v_a_2694_);
lean_dec_ref(v_a_2693_);
lean_dec(v_a_2692_);
lean_dec_ref(v_a_2691_);
return v_res_2697_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0(lean_object* v_declName_2698_, lean_object* v_as_2699_, lean_object* v_as_x27_2700_, lean_object* v_b_2701_, lean_object* v_a_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_){
_start:
{
lean_object* v___x_2708_; 
v___x_2708_ = l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg(v_declName_2698_, v_as_x27_2700_, v_b_2701_, v___y_2703_, v___y_2704_, v___y_2705_, v___y_2706_);
return v___x_2708_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___boxed(lean_object* v_declName_2709_, lean_object* v_as_2710_, lean_object* v_as_x27_2711_, lean_object* v_b_2712_, lean_object* v_a_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_){
_start:
{
lean_object* v_res_2719_; 
v_res_2719_ = l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0(v_declName_2709_, v_as_2710_, v_as_x27_2711_, v_b_2712_, v_a_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_);
lean_dec(v___y_2717_);
lean_dec_ref(v___y_2716_);
lean_dec(v___y_2715_);
lean_dec_ref(v___y_2714_);
lean_dec(v_as_x27_2711_);
lean_dec(v_as_2710_);
return v_res_2719_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1(lean_object* v_00_u03b1_2720_, lean_object* v_x_2721_, uint8_t v_when_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_){
_start:
{
lean_object* v___x_2728_; 
v___x_2728_ = l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1___redArg(v_x_2721_, v_when_2722_, v___y_2723_, v___y_2724_, v___y_2725_, v___y_2726_);
return v___x_2728_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1___boxed(lean_object* v_00_u03b1_2729_, lean_object* v_x_2730_, lean_object* v_when_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_){
_start:
{
uint8_t v_when_boxed_2737_; lean_object* v_res_2738_; 
v_when_boxed_2737_ = lean_unbox(v_when_2731_);
v_res_2738_ = l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1(v_00_u03b1_2729_, v_x_2730_, v_when_boxed_2737_, v___y_2732_, v___y_2733_, v___y_2734_, v___y_2735_);
lean_dec(v___y_2735_);
lean_dec_ref(v___y_2734_);
lean_dec(v___y_2733_);
lean_dec_ref(v___y_2732_);
return v_res_2738_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2(lean_object* v_00_u03b1_2739_, lean_object* v_msg_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_){
_start:
{
lean_object* v___x_2746_; 
v___x_2746_ = l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2___redArg(v_msg_2740_, v___y_2741_, v___y_2742_, v___y_2743_, v___y_2744_);
return v___x_2746_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2___boxed(lean_object* v_00_u03b1_2747_, lean_object* v_msg_2748_, lean_object* v___y_2749_, lean_object* v___y_2750_, lean_object* v___y_2751_, lean_object* v___y_2752_, lean_object* v___y_2753_){
_start:
{
lean_object* v_res_2754_; 
v_res_2754_ = l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2(v_00_u03b1_2747_, v_msg_2748_, v___y_2749_, v___y_2750_, v___y_2751_, v___y_2752_);
lean_dec(v___y_2752_);
lean_dec_ref(v___y_2751_);
lean_dec(v___y_2750_);
lean_dec_ref(v___y_2749_);
return v_res_2754_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1(lean_object* v_00_u03b1_2755_, lean_object* v_x_2756_, uint8_t v_isExporting_2757_, lean_object* v___y_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_){
_start:
{
lean_object* v___x_2763_; 
v___x_2763_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg(v_x_2756_, v_isExporting_2757_, v___y_2758_, v___y_2759_, v___y_2760_, v___y_2761_);
return v___x_2763_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___boxed(lean_object* v_00_u03b1_2764_, lean_object* v_x_2765_, lean_object* v_isExporting_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_){
_start:
{
uint8_t v_isExporting_boxed_2772_; lean_object* v_res_2773_; 
v_isExporting_boxed_2772_ = lean_unbox(v_isExporting_2766_);
v_res_2773_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1(v_00_u03b1_2764_, v_x_2765_, v_isExporting_boxed_2772_, v___y_2767_, v___y_2768_, v___y_2769_, v___y_2770_);
lean_dec(v___y_2770_);
lean_dec_ref(v___y_2769_);
lean_dec(v___y_2768_);
lean_dec_ref(v___y_2767_);
return v_res_2773_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; 
v___x_2774_ = lean_unsigned_to_nat(32u);
v___x_2775_ = lean_mk_empty_array_with_capacity(v___x_2774_);
v___x_2776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2776_, 0, v___x_2775_);
return v___x_2776_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; 
v___x_2777_ = ((size_t)5ULL);
v___x_2778_ = lean_unsigned_to_nat(0u);
v___x_2779_ = lean_unsigned_to_nat(32u);
v___x_2780_ = lean_mk_empty_array_with_capacity(v___x_2779_);
v___x_2781_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__0);
v___x_2782_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2782_, 0, v___x_2781_);
lean_ctor_set(v___x_2782_, 1, v___x_2780_);
lean_ctor_set(v___x_2782_, 2, v___x_2778_);
lean_ctor_set(v___x_2782_, 3, v___x_2778_);
lean_ctor_set_usize(v___x_2782_, 4, v___x_2777_);
return v___x_2782_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg(lean_object* v___y_2783_){
_start:
{
lean_object* v___x_2785_; lean_object* v_traceState_2786_; lean_object* v_traces_2787_; lean_object* v___x_2788_; lean_object* v_traceState_2789_; lean_object* v_env_2790_; lean_object* v_nextMacroScope_2791_; lean_object* v_ngen_2792_; lean_object* v_auxDeclNGen_2793_; lean_object* v_cache_2794_; lean_object* v_recordedDeps_2795_; lean_object* v_messages_2796_; lean_object* v_infoState_2797_; lean_object* v_snapshotTasks_2798_; lean_object* v___x_2800_; uint8_t v_isShared_2801_; uint8_t v_isSharedCheck_2817_; 
v___x_2785_ = lean_st_ref_get(v___y_2783_);
v_traceState_2786_ = lean_ctor_get(v___x_2785_, 4);
lean_inc_ref(v_traceState_2786_);
lean_dec(v___x_2785_);
v_traces_2787_ = lean_ctor_get(v_traceState_2786_, 0);
lean_inc_ref(v_traces_2787_);
lean_dec_ref(v_traceState_2786_);
v___x_2788_ = lean_st_ref_take(v___y_2783_);
v_traceState_2789_ = lean_ctor_get(v___x_2788_, 4);
v_env_2790_ = lean_ctor_get(v___x_2788_, 0);
v_nextMacroScope_2791_ = lean_ctor_get(v___x_2788_, 1);
v_ngen_2792_ = lean_ctor_get(v___x_2788_, 2);
v_auxDeclNGen_2793_ = lean_ctor_get(v___x_2788_, 3);
v_cache_2794_ = lean_ctor_get(v___x_2788_, 5);
v_recordedDeps_2795_ = lean_ctor_get(v___x_2788_, 6);
v_messages_2796_ = lean_ctor_get(v___x_2788_, 7);
v_infoState_2797_ = lean_ctor_get(v___x_2788_, 8);
v_snapshotTasks_2798_ = lean_ctor_get(v___x_2788_, 9);
v_isSharedCheck_2817_ = !lean_is_exclusive(v___x_2788_);
if (v_isSharedCheck_2817_ == 0)
{
v___x_2800_ = v___x_2788_;
v_isShared_2801_ = v_isSharedCheck_2817_;
goto v_resetjp_2799_;
}
else
{
lean_inc(v_snapshotTasks_2798_);
lean_inc(v_infoState_2797_);
lean_inc(v_messages_2796_);
lean_inc(v_recordedDeps_2795_);
lean_inc(v_cache_2794_);
lean_inc(v_traceState_2789_);
lean_inc(v_auxDeclNGen_2793_);
lean_inc(v_ngen_2792_);
lean_inc(v_nextMacroScope_2791_);
lean_inc(v_env_2790_);
lean_dec(v___x_2788_);
v___x_2800_ = lean_box(0);
v_isShared_2801_ = v_isSharedCheck_2817_;
goto v_resetjp_2799_;
}
v_resetjp_2799_:
{
uint64_t v_tid_2802_; lean_object* v___x_2804_; uint8_t v_isShared_2805_; uint8_t v_isSharedCheck_2815_; 
v_tid_2802_ = lean_ctor_get_uint64(v_traceState_2789_, sizeof(void*)*1);
v_isSharedCheck_2815_ = !lean_is_exclusive(v_traceState_2789_);
if (v_isSharedCheck_2815_ == 0)
{
lean_object* v_unused_2816_; 
v_unused_2816_ = lean_ctor_get(v_traceState_2789_, 0);
lean_dec(v_unused_2816_);
v___x_2804_ = v_traceState_2789_;
v_isShared_2805_ = v_isSharedCheck_2815_;
goto v_resetjp_2803_;
}
else
{
lean_dec(v_traceState_2789_);
v___x_2804_ = lean_box(0);
v_isShared_2805_ = v_isSharedCheck_2815_;
goto v_resetjp_2803_;
}
v_resetjp_2803_:
{
lean_object* v___x_2806_; lean_object* v___x_2808_; 
v___x_2806_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__1);
if (v_isShared_2805_ == 0)
{
lean_ctor_set(v___x_2804_, 0, v___x_2806_);
v___x_2808_ = v___x_2804_;
goto v_reusejp_2807_;
}
else
{
lean_object* v_reuseFailAlloc_2814_; 
v_reuseFailAlloc_2814_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2814_, 0, v___x_2806_);
lean_ctor_set_uint64(v_reuseFailAlloc_2814_, sizeof(void*)*1, v_tid_2802_);
v___x_2808_ = v_reuseFailAlloc_2814_;
goto v_reusejp_2807_;
}
v_reusejp_2807_:
{
lean_object* v___x_2810_; 
if (v_isShared_2801_ == 0)
{
lean_ctor_set(v___x_2800_, 4, v___x_2808_);
v___x_2810_ = v___x_2800_;
goto v_reusejp_2809_;
}
else
{
lean_object* v_reuseFailAlloc_2813_; 
v_reuseFailAlloc_2813_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2813_, 0, v_env_2790_);
lean_ctor_set(v_reuseFailAlloc_2813_, 1, v_nextMacroScope_2791_);
lean_ctor_set(v_reuseFailAlloc_2813_, 2, v_ngen_2792_);
lean_ctor_set(v_reuseFailAlloc_2813_, 3, v_auxDeclNGen_2793_);
lean_ctor_set(v_reuseFailAlloc_2813_, 4, v___x_2808_);
lean_ctor_set(v_reuseFailAlloc_2813_, 5, v_cache_2794_);
lean_ctor_set(v_reuseFailAlloc_2813_, 6, v_recordedDeps_2795_);
lean_ctor_set(v_reuseFailAlloc_2813_, 7, v_messages_2796_);
lean_ctor_set(v_reuseFailAlloc_2813_, 8, v_infoState_2797_);
lean_ctor_set(v_reuseFailAlloc_2813_, 9, v_snapshotTasks_2798_);
v___x_2810_ = v_reuseFailAlloc_2813_;
goto v_reusejp_2809_;
}
v_reusejp_2809_:
{
lean_object* v___x_2811_; lean_object* v___x_2812_; 
v___x_2811_ = lean_st_ref_put(v___y_2783_, v___x_2810_);
v___x_2812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2812_, 0, v_traces_2787_);
return v___x_2812_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v___y_2818_, lean_object* v___y_2819_){
_start:
{
lean_object* v_res_2820_; 
v_res_2820_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg(v___y_2818_);
lean_dec(v___y_2818_);
return v_res_2820_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0(lean_object* v___y_2821_, lean_object* v___y_2822_){
_start:
{
lean_object* v___x_2824_; 
v___x_2824_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg(v___y_2822_);
return v___x_2824_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___boxed(lean_object* v___y_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_){
_start:
{
lean_object* v_res_2828_; 
v_res_2828_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0(v___y_2825_, v___y_2826_);
lean_dec(v___y_2826_);
lean_dec_ref(v___y_2825_);
return v_res_2828_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(lean_object* v_____r_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_){
_start:
{
uint8_t v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; 
v___x_2833_ = 0;
v___x_2834_ = lean_box(v___x_2833_);
v___x_2835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2835_, 0, v___x_2834_);
return v___x_2835_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed(lean_object* v_____r_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_, lean_object* v___y_2839_){
_start:
{
lean_object* v_res_2840_; 
v_res_2840_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(v_____r_2836_, v___y_2837_, v___y_2838_);
lean_dec(v___y_2838_);
lean_dec_ref(v___y_2837_);
return v_res_2840_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2842_; lean_object* v___x_2843_; 
v___x_2842_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_2843_ = l_Lean_stringToMessageData(v___x_2842_);
return v___x_2843_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(lean_object* v_name_2844_, lean_object* v_x_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_){
_start:
{
lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; 
v___x_2849_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_2850_ = l_Lean_MessageData_ofName(v_name_2844_);
v___x_2851_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2851_, 0, v___x_2849_);
lean_ctor_set(v___x_2851_, 1, v___x_2850_);
v___x_2852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2852_, 0, v___x_2851_);
return v___x_2852_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed(lean_object* v_name_2853_, lean_object* v_x_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_){
_start:
{
lean_object* v_res_2858_; 
v_res_2858_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(v_name_2853_, v_x_2854_, v___y_2855_, v___y_2856_);
lean_dec(v___y_2856_);
lean_dec_ref(v___y_2855_);
lean_dec_ref(v_x_2854_);
return v_res_2858_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object* v_x_2859_){
_start:
{
if (lean_obj_tag(v_x_2859_) == 0)
{
lean_object* v_a_2861_; lean_object* v___x_2863_; uint8_t v_isShared_2864_; uint8_t v_isSharedCheck_2868_; 
v_a_2861_ = lean_ctor_get(v_x_2859_, 0);
v_isSharedCheck_2868_ = !lean_is_exclusive(v_x_2859_);
if (v_isSharedCheck_2868_ == 0)
{
v___x_2863_ = v_x_2859_;
v_isShared_2864_ = v_isSharedCheck_2868_;
goto v_resetjp_2862_;
}
else
{
lean_inc(v_a_2861_);
lean_dec(v_x_2859_);
v___x_2863_ = lean_box(0);
v_isShared_2864_ = v_isSharedCheck_2868_;
goto v_resetjp_2862_;
}
v_resetjp_2862_:
{
lean_object* v___x_2866_; 
if (v_isShared_2864_ == 0)
{
lean_ctor_set_tag(v___x_2863_, 1);
v___x_2866_ = v___x_2863_;
goto v_reusejp_2865_;
}
else
{
lean_object* v_reuseFailAlloc_2867_; 
v_reuseFailAlloc_2867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2867_, 0, v_a_2861_);
v___x_2866_ = v_reuseFailAlloc_2867_;
goto v_reusejp_2865_;
}
v_reusejp_2865_:
{
return v___x_2866_;
}
}
}
else
{
lean_object* v_a_2869_; lean_object* v___x_2871_; uint8_t v_isShared_2872_; uint8_t v_isSharedCheck_2876_; 
v_a_2869_ = lean_ctor_get(v_x_2859_, 0);
v_isSharedCheck_2876_ = !lean_is_exclusive(v_x_2859_);
if (v_isSharedCheck_2876_ == 0)
{
v___x_2871_ = v_x_2859_;
v_isShared_2872_ = v_isSharedCheck_2876_;
goto v_resetjp_2870_;
}
else
{
lean_inc(v_a_2869_);
lean_dec(v_x_2859_);
v___x_2871_ = lean_box(0);
v_isShared_2872_ = v_isSharedCheck_2876_;
goto v_resetjp_2870_;
}
v_resetjp_2870_:
{
lean_object* v___x_2874_; 
if (v_isShared_2872_ == 0)
{
lean_ctor_set_tag(v___x_2871_, 0);
v___x_2874_ = v___x_2871_;
goto v_reusejp_2873_;
}
else
{
lean_object* v_reuseFailAlloc_2875_; 
v_reuseFailAlloc_2875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2875_, 0, v_a_2869_);
v___x_2874_ = v_reuseFailAlloc_2875_;
goto v_reusejp_2873_;
}
v_reusejp_2873_:
{
return v___x_2874_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object* v_x_2877_, lean_object* v___y_2878_){
_start:
{
lean_object* v_res_2879_; 
v_res_2879_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2___redArg(v_x_2877_);
return v_res_2879_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__3(lean_object* v_e_2880_){
_start:
{
if (lean_obj_tag(v_e_2880_) == 0)
{
uint8_t v___x_2881_; 
v___x_2881_ = 2;
return v___x_2881_;
}
else
{
lean_object* v_a_2882_; uint8_t v___x_2883_; 
v_a_2882_ = lean_ctor_get(v_e_2880_, 0);
v___x_2883_ = lean_unbox(v_a_2882_);
if (v___x_2883_ == 0)
{
uint8_t v___x_2884_; 
v___x_2884_ = 1;
return v___x_2884_;
}
else
{
uint8_t v___x_2885_; 
v___x_2885_ = 0;
return v___x_2885_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__3___boxed(lean_object* v_e_2886_){
_start:
{
uint8_t v_res_2887_; lean_object* v_r_2888_; 
v_res_2887_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__3(v_e_2886_);
lean_dec_ref(v_e_2886_);
v_r_2888_ = lean_box(v_res_2887_);
return v_r_2888_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1_spec__2(size_t v_sz_2889_, size_t v_i_2890_, lean_object* v_bs_2891_){
_start:
{
uint8_t v___x_2892_; 
v___x_2892_ = lean_usize_dec_lt(v_i_2890_, v_sz_2889_);
if (v___x_2892_ == 0)
{
return v_bs_2891_;
}
else
{
lean_object* v_v_2893_; lean_object* v_msg_2894_; lean_object* v___x_2895_; lean_object* v_bs_x27_2896_; size_t v___x_2897_; size_t v___x_2898_; lean_object* v___x_2899_; 
v_v_2893_ = lean_array_uget_borrowed(v_bs_2891_, v_i_2890_);
v_msg_2894_ = lean_ctor_get(v_v_2893_, 1);
lean_inc_ref(v_msg_2894_);
v___x_2895_ = lean_unsigned_to_nat(0u);
v_bs_x27_2896_ = lean_array_uset(v_bs_2891_, v_i_2890_, v___x_2895_);
v___x_2897_ = ((size_t)1ULL);
v___x_2898_ = lean_usize_add(v_i_2890_, v___x_2897_);
v___x_2899_ = lean_array_uset(v_bs_x27_2896_, v_i_2890_, v_msg_2894_);
v_i_2890_ = v___x_2898_;
v_bs_2891_ = v___x_2899_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1_spec__2___boxed(lean_object* v_sz_2901_, lean_object* v_i_2902_, lean_object* v_bs_2903_){
_start:
{
size_t v_sz_boxed_2904_; size_t v_i_boxed_2905_; lean_object* v_res_2906_; 
v_sz_boxed_2904_ = lean_unbox_usize(v_sz_2901_);
lean_dec(v_sz_2901_);
v_i_boxed_2905_ = lean_unbox_usize(v_i_2902_);
lean_dec(v_i_2902_);
v_res_2906_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1_spec__2(v_sz_boxed_2904_, v_i_boxed_2905_, v_bs_2903_);
return v_res_2906_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1(lean_object* v_oldTraces_2907_, lean_object* v_data_2908_, lean_object* v_ref_2909_, lean_object* v_msg_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_){
_start:
{
lean_object* v_toCold_2914_; lean_object* v_currRecDepth_2915_; lean_object* v_ref_2916_; uint16_t v_optionFlags_2917_; uint8_t v_suppressElabErrors_2918_; uint8_t v_checkDeprecated_2919_; uint8_t v_isRecordingDeps_2920_; lean_object* v_ref_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v_traceState_2924_; lean_object* v_traces_2925_; lean_object* v___x_2926_; size_t v_sz_2927_; size_t v___x_2928_; lean_object* v___x_2929_; lean_object* v_msg_2930_; lean_object* v___x_2931_; lean_object* v_a_2932_; lean_object* v___x_2934_; uint8_t v_isShared_2935_; uint8_t v_isSharedCheck_2970_; 
v_toCold_2914_ = lean_ctor_get(v___y_2911_, 0);
v_currRecDepth_2915_ = lean_ctor_get(v___y_2911_, 1);
v_ref_2916_ = lean_ctor_get(v___y_2911_, 2);
v_optionFlags_2917_ = lean_ctor_get_uint16(v___y_2911_, sizeof(void*)*3);
v_suppressElabErrors_2918_ = lean_ctor_get_uint8(v___y_2911_, sizeof(void*)*3 + 2);
v_checkDeprecated_2919_ = lean_ctor_get_uint8(v___y_2911_, sizeof(void*)*3 + 3);
v_isRecordingDeps_2920_ = lean_ctor_get_uint8(v___y_2911_, sizeof(void*)*3 + 4);
v_ref_2921_ = l_Lean_replaceRef(v_ref_2909_, v_ref_2916_);
lean_inc(v_currRecDepth_2915_);
lean_inc_ref(v_toCold_2914_);
v___x_2922_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_2922_, 0, v_toCold_2914_);
lean_ctor_set(v___x_2922_, 1, v_currRecDepth_2915_);
lean_ctor_set(v___x_2922_, 2, v_ref_2921_);
lean_ctor_set_uint16(v___x_2922_, sizeof(void*)*3, v_optionFlags_2917_);
lean_ctor_set_uint8(v___x_2922_, sizeof(void*)*3 + 2, v_suppressElabErrors_2918_);
lean_ctor_set_uint8(v___x_2922_, sizeof(void*)*3 + 3, v_checkDeprecated_2919_);
lean_ctor_set_uint8(v___x_2922_, sizeof(void*)*3 + 4, v_isRecordingDeps_2920_);
v___x_2923_ = lean_st_ref_get(v___y_2912_);
v_traceState_2924_ = lean_ctor_get(v___x_2923_, 4);
lean_inc_ref(v_traceState_2924_);
lean_dec(v___x_2923_);
v_traces_2925_ = lean_ctor_get(v_traceState_2924_, 0);
lean_inc_ref(v_traces_2925_);
lean_dec_ref(v_traceState_2924_);
v___x_2926_ = l_Lean_PersistentArray_toArray___redArg(v_traces_2925_);
lean_dec_ref(v_traces_2925_);
v_sz_2927_ = lean_array_size(v___x_2926_);
v___x_2928_ = ((size_t)0ULL);
v___x_2929_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1_spec__2(v_sz_2927_, v___x_2928_, v___x_2926_);
v_msg_2930_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_2930_, 0, v_data_2908_);
lean_ctor_set(v_msg_2930_, 1, v_msg_2910_);
lean_ctor_set(v_msg_2930_, 2, v___x_2929_);
v___x_2931_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2(v_msg_2930_, v___x_2922_, v___y_2912_);
lean_dec_ref_known(v___x_2922_, 3);
v_a_2932_ = lean_ctor_get(v___x_2931_, 0);
v_isSharedCheck_2970_ = !lean_is_exclusive(v___x_2931_);
if (v_isSharedCheck_2970_ == 0)
{
v___x_2934_ = v___x_2931_;
v_isShared_2935_ = v_isSharedCheck_2970_;
goto v_resetjp_2933_;
}
else
{
lean_inc(v_a_2932_);
lean_dec(v___x_2931_);
v___x_2934_ = lean_box(0);
v_isShared_2935_ = v_isSharedCheck_2970_;
goto v_resetjp_2933_;
}
v_resetjp_2933_:
{
lean_object* v___x_2936_; lean_object* v_traceState_2937_; lean_object* v_env_2938_; lean_object* v_nextMacroScope_2939_; lean_object* v_ngen_2940_; lean_object* v_auxDeclNGen_2941_; lean_object* v_cache_2942_; lean_object* v_recordedDeps_2943_; lean_object* v_messages_2944_; lean_object* v_infoState_2945_; lean_object* v_snapshotTasks_2946_; lean_object* v___x_2948_; uint8_t v_isShared_2949_; uint8_t v_isSharedCheck_2969_; 
v___x_2936_ = lean_st_ref_take(v___y_2912_);
v_traceState_2937_ = lean_ctor_get(v___x_2936_, 4);
v_env_2938_ = lean_ctor_get(v___x_2936_, 0);
v_nextMacroScope_2939_ = lean_ctor_get(v___x_2936_, 1);
v_ngen_2940_ = lean_ctor_get(v___x_2936_, 2);
v_auxDeclNGen_2941_ = lean_ctor_get(v___x_2936_, 3);
v_cache_2942_ = lean_ctor_get(v___x_2936_, 5);
v_recordedDeps_2943_ = lean_ctor_get(v___x_2936_, 6);
v_messages_2944_ = lean_ctor_get(v___x_2936_, 7);
v_infoState_2945_ = lean_ctor_get(v___x_2936_, 8);
v_snapshotTasks_2946_ = lean_ctor_get(v___x_2936_, 9);
v_isSharedCheck_2969_ = !lean_is_exclusive(v___x_2936_);
if (v_isSharedCheck_2969_ == 0)
{
v___x_2948_ = v___x_2936_;
v_isShared_2949_ = v_isSharedCheck_2969_;
goto v_resetjp_2947_;
}
else
{
lean_inc(v_snapshotTasks_2946_);
lean_inc(v_infoState_2945_);
lean_inc(v_messages_2944_);
lean_inc(v_recordedDeps_2943_);
lean_inc(v_cache_2942_);
lean_inc(v_traceState_2937_);
lean_inc(v_auxDeclNGen_2941_);
lean_inc(v_ngen_2940_);
lean_inc(v_nextMacroScope_2939_);
lean_inc(v_env_2938_);
lean_dec(v___x_2936_);
v___x_2948_ = lean_box(0);
v_isShared_2949_ = v_isSharedCheck_2969_;
goto v_resetjp_2947_;
}
v_resetjp_2947_:
{
uint64_t v_tid_2950_; lean_object* v___x_2952_; uint8_t v_isShared_2953_; uint8_t v_isSharedCheck_2967_; 
v_tid_2950_ = lean_ctor_get_uint64(v_traceState_2937_, sizeof(void*)*1);
v_isSharedCheck_2967_ = !lean_is_exclusive(v_traceState_2937_);
if (v_isSharedCheck_2967_ == 0)
{
lean_object* v_unused_2968_; 
v_unused_2968_ = lean_ctor_get(v_traceState_2937_, 0);
lean_dec(v_unused_2968_);
v___x_2952_ = v_traceState_2937_;
v_isShared_2953_ = v_isSharedCheck_2967_;
goto v_resetjp_2951_;
}
else
{
lean_dec(v_traceState_2937_);
v___x_2952_ = lean_box(0);
v_isShared_2953_ = v_isSharedCheck_2967_;
goto v_resetjp_2951_;
}
v_resetjp_2951_:
{
lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2958_; 
v___x_2954_ = lean_box(0);
v___x_2955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2955_, 0, v_ref_2909_);
lean_ctor_set(v___x_2955_, 1, v_a_2932_);
v___x_2956_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_2907_, v___x_2955_);
if (v_isShared_2953_ == 0)
{
lean_ctor_set(v___x_2952_, 0, v___x_2956_);
v___x_2958_ = v___x_2952_;
goto v_reusejp_2957_;
}
else
{
lean_object* v_reuseFailAlloc_2966_; 
v_reuseFailAlloc_2966_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2966_, 0, v___x_2956_);
lean_ctor_set_uint64(v_reuseFailAlloc_2966_, sizeof(void*)*1, v_tid_2950_);
v___x_2958_ = v_reuseFailAlloc_2966_;
goto v_reusejp_2957_;
}
v_reusejp_2957_:
{
lean_object* v___x_2960_; 
if (v_isShared_2949_ == 0)
{
lean_ctor_set(v___x_2948_, 4, v___x_2958_);
v___x_2960_ = v___x_2948_;
goto v_reusejp_2959_;
}
else
{
lean_object* v_reuseFailAlloc_2965_; 
v_reuseFailAlloc_2965_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2965_, 0, v_env_2938_);
lean_ctor_set(v_reuseFailAlloc_2965_, 1, v_nextMacroScope_2939_);
lean_ctor_set(v_reuseFailAlloc_2965_, 2, v_ngen_2940_);
lean_ctor_set(v_reuseFailAlloc_2965_, 3, v_auxDeclNGen_2941_);
lean_ctor_set(v_reuseFailAlloc_2965_, 4, v___x_2958_);
lean_ctor_set(v_reuseFailAlloc_2965_, 5, v_cache_2942_);
lean_ctor_set(v_reuseFailAlloc_2965_, 6, v_recordedDeps_2943_);
lean_ctor_set(v_reuseFailAlloc_2965_, 7, v_messages_2944_);
lean_ctor_set(v_reuseFailAlloc_2965_, 8, v_infoState_2945_);
lean_ctor_set(v_reuseFailAlloc_2965_, 9, v_snapshotTasks_2946_);
v___x_2960_ = v_reuseFailAlloc_2965_;
goto v_reusejp_2959_;
}
v_reusejp_2959_:
{
lean_object* v___x_2961_; lean_object* v___x_2963_; 
v___x_2961_ = lean_st_ref_put(v___y_2912_, v___x_2960_);
if (v_isShared_2935_ == 0)
{
lean_ctor_set(v___x_2934_, 0, v___x_2954_);
v___x_2963_ = v___x_2934_;
goto v_reusejp_2962_;
}
else
{
lean_object* v_reuseFailAlloc_2964_; 
v_reuseFailAlloc_2964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2964_, 0, v___x_2954_);
v___x_2963_ = v_reuseFailAlloc_2964_;
goto v_reusejp_2962_;
}
v_reusejp_2962_:
{
return v___x_2963_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1___boxed(lean_object* v_oldTraces_2971_, lean_object* v_data_2972_, lean_object* v_ref_2973_, lean_object* v_msg_2974_, lean_object* v___y_2975_, lean_object* v___y_2976_, lean_object* v___y_2977_){
_start:
{
lean_object* v_res_2978_; 
v_res_2978_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1(v_oldTraces_2971_, v_data_2972_, v_ref_2973_, v_msg_2974_, v___y_2975_, v___y_2976_);
lean_dec(v___y_2976_);
lean_dec_ref(v___y_2975_);
return v_res_2978_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__1(void){
_start:
{
lean_object* v___x_2980_; lean_object* v___x_2981_; 
v___x_2980_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__0));
v___x_2981_ = l_Lean_stringToMessageData(v___x_2980_);
return v___x_2981_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__2(void){
_start:
{
lean_object* v___x_2982_; double v___x_2983_; 
v___x_2982_ = lean_unsigned_to_nat(1000u);
v___x_2983_ = lean_float_of_nat(v___x_2982_);
return v___x_2983_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1(lean_object* v_cls_2984_, uint8_t v_collapsed_2985_, lean_object* v_tag_2986_, lean_object* v_opts_2987_, uint8_t v_clsEnabled_2988_, lean_object* v_oldTraces_2989_, lean_object* v_msg_2990_, lean_object* v_resStartStop_2991_, lean_object* v___y_2992_, lean_object* v___y_2993_){
_start:
{
lean_object* v_fst_2995_; lean_object* v_snd_2996_; lean_object* v___y_2998_; lean_object* v___y_2999_; lean_object* v_data_3000_; lean_object* v_fst_3011_; lean_object* v_snd_3012_; lean_object* v___x_3013_; uint8_t v___x_3014_; lean_object* v___y_3016_; lean_object* v_a_3017_; uint8_t v___y_3032_; double v___y_3064_; 
v_fst_2995_ = lean_ctor_get(v_resStartStop_2991_, 0);
lean_inc(v_fst_2995_);
v_snd_2996_ = lean_ctor_get(v_resStartStop_2991_, 1);
lean_inc(v_snd_2996_);
lean_dec_ref(v_resStartStop_2991_);
v_fst_3011_ = lean_ctor_get(v_snd_2996_, 0);
lean_inc(v_fst_3011_);
v_snd_3012_ = lean_ctor_get(v_snd_2996_, 1);
lean_inc(v_snd_3012_);
lean_dec(v_snd_2996_);
v___x_3013_ = l_Lean_trace_profiler;
v___x_3014_ = l_Lean_Option_get___at___00Lean_Meta_saveEqnAffectingOptions_spec__0(v_opts_2987_, v___x_3013_);
if (v___x_3014_ == 0)
{
v___y_3032_ = v___x_3014_;
goto v___jp_3031_;
}
else
{
lean_object* v___x_3069_; uint8_t v___x_3070_; 
v___x_3069_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3070_ = l_Lean_Option_get___at___00Lean_Meta_saveEqnAffectingOptions_spec__0(v_opts_2987_, v___x_3069_);
if (v___x_3070_ == 0)
{
lean_object* v___x_3071_; lean_object* v___x_3072_; double v___x_3073_; double v___x_3074_; double v___x_3075_; 
v___x_3071_ = l_Lean_trace_profiler_threshold;
v___x_3072_ = l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__1(v_opts_2987_, v___x_3071_);
v___x_3073_ = lean_float_of_nat(v___x_3072_);
v___x_3074_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__2);
v___x_3075_ = lean_float_div(v___x_3073_, v___x_3074_);
v___y_3064_ = v___x_3075_;
goto v___jp_3063_;
}
else
{
lean_object* v___x_3076_; lean_object* v___x_3077_; double v___x_3078_; 
v___x_3076_ = l_Lean_trace_profiler_threshold;
v___x_3077_ = l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__1(v_opts_2987_, v___x_3076_);
v___x_3078_ = lean_float_of_nat(v___x_3077_);
v___y_3064_ = v___x_3078_;
goto v___jp_3063_;
}
}
v___jp_2997_:
{
lean_object* v___x_3001_; 
lean_inc(v___y_2998_);
v___x_3001_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1(v_oldTraces_2989_, v_data_3000_, v___y_2998_, v___y_2999_, v___y_2992_, v___y_2993_);
if (lean_obj_tag(v___x_3001_) == 0)
{
lean_object* v___x_3002_; 
lean_dec_ref_known(v___x_3001_, 1);
v___x_3002_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2___redArg(v_fst_2995_);
return v___x_3002_;
}
else
{
lean_object* v_a_3003_; lean_object* v___x_3005_; uint8_t v_isShared_3006_; uint8_t v_isSharedCheck_3010_; 
lean_dec(v_fst_2995_);
v_a_3003_ = lean_ctor_get(v___x_3001_, 0);
v_isSharedCheck_3010_ = !lean_is_exclusive(v___x_3001_);
if (v_isSharedCheck_3010_ == 0)
{
v___x_3005_ = v___x_3001_;
v_isShared_3006_ = v_isSharedCheck_3010_;
goto v_resetjp_3004_;
}
else
{
lean_inc(v_a_3003_);
lean_dec(v___x_3001_);
v___x_3005_ = lean_box(0);
v_isShared_3006_ = v_isSharedCheck_3010_;
goto v_resetjp_3004_;
}
v_resetjp_3004_:
{
lean_object* v___x_3008_; 
if (v_isShared_3006_ == 0)
{
v___x_3008_ = v___x_3005_;
goto v_reusejp_3007_;
}
else
{
lean_object* v_reuseFailAlloc_3009_; 
v_reuseFailAlloc_3009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3009_, 0, v_a_3003_);
v___x_3008_ = v_reuseFailAlloc_3009_;
goto v_reusejp_3007_;
}
v_reusejp_3007_:
{
return v___x_3008_;
}
}
}
}
v___jp_3015_:
{
uint8_t v_result_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; double v___x_3021_; lean_object* v_data_3022_; 
v_result_3018_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__3(v_fst_2995_);
v___x_3019_ = lean_box(v_result_3018_);
v___x_3020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3020_, 0, v___x_3019_);
v___x_3021_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__3___closed__0, &l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__3___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__3___closed__0);
lean_inc_ref(v_tag_2986_);
lean_inc_ref(v___x_3020_);
lean_inc(v_cls_2984_);
v_data_3022_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_3022_, 0, v_cls_2984_);
lean_ctor_set(v_data_3022_, 1, v___x_3020_);
lean_ctor_set(v_data_3022_, 2, v_tag_2986_);
lean_ctor_set_float(v_data_3022_, sizeof(void*)*3, v___x_3021_);
lean_ctor_set_float(v_data_3022_, sizeof(void*)*3 + 8, v___x_3021_);
lean_ctor_set_uint8(v_data_3022_, sizeof(void*)*3 + 16, v_collapsed_2985_);
if (v___x_3014_ == 0)
{
lean_dec_ref_known(v___x_3020_, 1);
lean_dec(v_snd_3012_);
lean_dec(v_fst_3011_);
lean_dec_ref(v_tag_2986_);
lean_dec(v_cls_2984_);
v___y_2998_ = v___y_3016_;
v___y_2999_ = v_a_3017_;
v_data_3000_ = v_data_3022_;
goto v___jp_2997_;
}
else
{
lean_object* v_data_3023_; double v___x_3024_; double v___x_3025_; 
lean_dec_ref_known(v_data_3022_, 3);
v_data_3023_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_3023_, 0, v_cls_2984_);
lean_ctor_set(v_data_3023_, 1, v___x_3020_);
lean_ctor_set(v_data_3023_, 2, v_tag_2986_);
v___x_3024_ = lean_unbox_float(v_fst_3011_);
lean_dec(v_fst_3011_);
lean_ctor_set_float(v_data_3023_, sizeof(void*)*3, v___x_3024_);
v___x_3025_ = lean_unbox_float(v_snd_3012_);
lean_dec(v_snd_3012_);
lean_ctor_set_float(v_data_3023_, sizeof(void*)*3 + 8, v___x_3025_);
lean_ctor_set_uint8(v_data_3023_, sizeof(void*)*3 + 16, v_collapsed_2985_);
v___y_2998_ = v___y_3016_;
v___y_2999_ = v_a_3017_;
v_data_3000_ = v_data_3023_;
goto v___jp_2997_;
}
}
v___jp_3026_:
{
lean_object* v_ref_3027_; lean_object* v___x_3028_; 
v_ref_3027_ = lean_ctor_get(v___y_2992_, 2);
lean_inc(v___y_2993_);
lean_inc_ref(v___y_2992_);
lean_inc(v_fst_2995_);
v___x_3028_ = lean_apply_4(v_msg_2990_, v_fst_2995_, v___y_2992_, v___y_2993_, lean_box(0));
if (lean_obj_tag(v___x_3028_) == 0)
{
lean_object* v_a_3029_; 
v_a_3029_ = lean_ctor_get(v___x_3028_, 0);
lean_inc(v_a_3029_);
lean_dec_ref_known(v___x_3028_, 1);
v___y_3016_ = v_ref_3027_;
v_a_3017_ = v_a_3029_;
goto v___jp_3015_;
}
else
{
lean_object* v___x_3030_; 
lean_dec_ref_known(v___x_3028_, 1);
v___x_3030_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__1);
v___y_3016_ = v_ref_3027_;
v_a_3017_ = v___x_3030_;
goto v___jp_3015_;
}
}
v___jp_3031_:
{
if (v_clsEnabled_2988_ == 0)
{
if (v___y_3032_ == 0)
{
lean_object* v___x_3033_; lean_object* v_traceState_3034_; lean_object* v_env_3035_; lean_object* v_nextMacroScope_3036_; lean_object* v_ngen_3037_; lean_object* v_auxDeclNGen_3038_; lean_object* v_cache_3039_; lean_object* v_recordedDeps_3040_; lean_object* v_messages_3041_; lean_object* v_infoState_3042_; lean_object* v_snapshotTasks_3043_; lean_object* v___x_3045_; uint8_t v_isShared_3046_; uint8_t v_isSharedCheck_3062_; 
lean_dec(v_snd_3012_);
lean_dec(v_fst_3011_);
lean_dec_ref(v_msg_2990_);
lean_dec_ref(v_tag_2986_);
lean_dec(v_cls_2984_);
v___x_3033_ = lean_st_ref_take(v___y_2993_);
v_traceState_3034_ = lean_ctor_get(v___x_3033_, 4);
v_env_3035_ = lean_ctor_get(v___x_3033_, 0);
v_nextMacroScope_3036_ = lean_ctor_get(v___x_3033_, 1);
v_ngen_3037_ = lean_ctor_get(v___x_3033_, 2);
v_auxDeclNGen_3038_ = lean_ctor_get(v___x_3033_, 3);
v_cache_3039_ = lean_ctor_get(v___x_3033_, 5);
v_recordedDeps_3040_ = lean_ctor_get(v___x_3033_, 6);
v_messages_3041_ = lean_ctor_get(v___x_3033_, 7);
v_infoState_3042_ = lean_ctor_get(v___x_3033_, 8);
v_snapshotTasks_3043_ = lean_ctor_get(v___x_3033_, 9);
v_isSharedCheck_3062_ = !lean_is_exclusive(v___x_3033_);
if (v_isSharedCheck_3062_ == 0)
{
v___x_3045_ = v___x_3033_;
v_isShared_3046_ = v_isSharedCheck_3062_;
goto v_resetjp_3044_;
}
else
{
lean_inc(v_snapshotTasks_3043_);
lean_inc(v_infoState_3042_);
lean_inc(v_messages_3041_);
lean_inc(v_recordedDeps_3040_);
lean_inc(v_cache_3039_);
lean_inc(v_traceState_3034_);
lean_inc(v_auxDeclNGen_3038_);
lean_inc(v_ngen_3037_);
lean_inc(v_nextMacroScope_3036_);
lean_inc(v_env_3035_);
lean_dec(v___x_3033_);
v___x_3045_ = lean_box(0);
v_isShared_3046_ = v_isSharedCheck_3062_;
goto v_resetjp_3044_;
}
v_resetjp_3044_:
{
uint64_t v_tid_3047_; lean_object* v_traces_3048_; lean_object* v___x_3050_; uint8_t v_isShared_3051_; uint8_t v_isSharedCheck_3061_; 
v_tid_3047_ = lean_ctor_get_uint64(v_traceState_3034_, sizeof(void*)*1);
v_traces_3048_ = lean_ctor_get(v_traceState_3034_, 0);
v_isSharedCheck_3061_ = !lean_is_exclusive(v_traceState_3034_);
if (v_isSharedCheck_3061_ == 0)
{
v___x_3050_ = v_traceState_3034_;
v_isShared_3051_ = v_isSharedCheck_3061_;
goto v_resetjp_3049_;
}
else
{
lean_inc(v_traces_3048_);
lean_dec(v_traceState_3034_);
v___x_3050_ = lean_box(0);
v_isShared_3051_ = v_isSharedCheck_3061_;
goto v_resetjp_3049_;
}
v_resetjp_3049_:
{
lean_object* v___x_3052_; lean_object* v___x_3054_; 
v___x_3052_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_2989_, v_traces_3048_);
lean_dec_ref(v_traces_3048_);
if (v_isShared_3051_ == 0)
{
lean_ctor_set(v___x_3050_, 0, v___x_3052_);
v___x_3054_ = v___x_3050_;
goto v_reusejp_3053_;
}
else
{
lean_object* v_reuseFailAlloc_3060_; 
v_reuseFailAlloc_3060_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3060_, 0, v___x_3052_);
lean_ctor_set_uint64(v_reuseFailAlloc_3060_, sizeof(void*)*1, v_tid_3047_);
v___x_3054_ = v_reuseFailAlloc_3060_;
goto v_reusejp_3053_;
}
v_reusejp_3053_:
{
lean_object* v___x_3056_; 
if (v_isShared_3046_ == 0)
{
lean_ctor_set(v___x_3045_, 4, v___x_3054_);
v___x_3056_ = v___x_3045_;
goto v_reusejp_3055_;
}
else
{
lean_object* v_reuseFailAlloc_3059_; 
v_reuseFailAlloc_3059_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3059_, 0, v_env_3035_);
lean_ctor_set(v_reuseFailAlloc_3059_, 1, v_nextMacroScope_3036_);
lean_ctor_set(v_reuseFailAlloc_3059_, 2, v_ngen_3037_);
lean_ctor_set(v_reuseFailAlloc_3059_, 3, v_auxDeclNGen_3038_);
lean_ctor_set(v_reuseFailAlloc_3059_, 4, v___x_3054_);
lean_ctor_set(v_reuseFailAlloc_3059_, 5, v_cache_3039_);
lean_ctor_set(v_reuseFailAlloc_3059_, 6, v_recordedDeps_3040_);
lean_ctor_set(v_reuseFailAlloc_3059_, 7, v_messages_3041_);
lean_ctor_set(v_reuseFailAlloc_3059_, 8, v_infoState_3042_);
lean_ctor_set(v_reuseFailAlloc_3059_, 9, v_snapshotTasks_3043_);
v___x_3056_ = v_reuseFailAlloc_3059_;
goto v_reusejp_3055_;
}
v_reusejp_3055_:
{
lean_object* v___x_3057_; lean_object* v___x_3058_; 
v___x_3057_ = lean_st_ref_put(v___y_2993_, v___x_3056_);
v___x_3058_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2___redArg(v_fst_2995_);
return v___x_3058_;
}
}
}
}
}
else
{
goto v___jp_3026_;
}
}
else
{
goto v___jp_3026_;
}
}
v___jp_3063_:
{
double v___x_3065_; double v___x_3066_; double v___x_3067_; uint8_t v___x_3068_; 
v___x_3065_ = lean_unbox_float(v_snd_3012_);
v___x_3066_ = lean_unbox_float(v_fst_3011_);
v___x_3067_ = lean_float_sub(v___x_3065_, v___x_3066_);
v___x_3068_ = lean_float_decLt(v___y_3064_, v___x_3067_);
v___y_3032_ = v___x_3068_;
goto v___jp_3031_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___boxed(lean_object* v_cls_3079_, lean_object* v_collapsed_3080_, lean_object* v_tag_3081_, lean_object* v_opts_3082_, lean_object* v_clsEnabled_3083_, lean_object* v_oldTraces_3084_, lean_object* v_msg_3085_, lean_object* v_resStartStop_3086_, lean_object* v___y_3087_, lean_object* v___y_3088_, lean_object* v___y_3089_){
_start:
{
uint8_t v_collapsed_boxed_3090_; uint8_t v_clsEnabled_boxed_3091_; lean_object* v_res_3092_; 
v_collapsed_boxed_3090_ = lean_unbox(v_collapsed_3080_);
v_clsEnabled_boxed_3091_ = lean_unbox(v_clsEnabled_3083_);
v_res_3092_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1(v_cls_3079_, v_collapsed_boxed_3090_, v_tag_3081_, v_opts_3082_, v_clsEnabled_boxed_3091_, v_oldTraces_3084_, v_msg_3085_, v_resStartStop_3086_, v___y_3087_, v___y_3088_);
lean_dec(v___y_3088_);
lean_dec_ref(v___y_3087_);
lean_dec_ref(v_opts_3082_);
return v_res_3092_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; 
v___x_3095_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0);
v___x_3096_ = lean_unsigned_to_nat(0u);
v___x_3097_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_3097_, 0, v___x_3096_);
lean_ctor_set(v___x_3097_, 1, v___x_3096_);
lean_ctor_set(v___x_3097_, 2, v___x_3096_);
lean_ctor_set(v___x_3097_, 3, v___x_3096_);
lean_ctor_set(v___x_3097_, 4, v___x_3095_);
lean_ctor_set(v___x_3097_, 5, v___x_3095_);
lean_ctor_set(v___x_3097_, 6, v___x_3095_);
lean_ctor_set(v___x_3097_, 7, v___x_3095_);
lean_ctor_set(v___x_3097_, 8, v___x_3095_);
lean_ctor_set(v___x_3097_, 9, v___x_3095_);
lean_ctor_set(v___x_3097_, 10, v___x_3095_);
return v___x_3097_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3098_; lean_object* v___x_3099_; 
v___x_3098_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0);
v___x_3099_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3099_, 0, v___x_3098_);
lean_ctor_set(v___x_3099_, 1, v___x_3098_);
return v___x_3099_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; 
v___x_3100_ = lean_unsigned_to_nat(0u);
v___x_3101_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0);
v___x_3102_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3102_, 0, v___x_3101_);
lean_ctor_set(v___x_3102_, 1, v___x_3101_);
lean_ctor_set(v___x_3102_, 2, v___x_3100_);
return v___x_3102_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; 
v___x_3103_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3104_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3105_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0);
v___x_3106_ = lean_obj_once(&l_Lean_Meta_saveEqnAffectingOptions___closed__2, &l_Lean_Meta_saveEqnAffectingOptions___closed__2_once, _init_l_Lean_Meta_saveEqnAffectingOptions___closed__2);
v___x_3107_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_3107_, 0, v___x_3106_);
lean_ctor_set(v___x_3107_, 1, v___x_3105_);
lean_ctor_set(v___x_3107_, 2, v___x_3104_);
lean_ctor_set(v___x_3107_, 3, v___x_3105_);
lean_ctor_set(v___x_3107_, 4, v___x_3105_);
lean_ctor_set(v___x_3107_, 5, v___x_3105_);
lean_ctor_set(v___x_3107_, 6, v___x_3105_);
lean_ctor_set(v___x_3107_, 7, v___x_3103_);
return v___x_3107_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3108_; lean_object* v___x_3109_; 
v___x_3108_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0);
v___x_3109_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3109_, 0, v___x_3108_);
lean_ctor_set(v___x_3109_, 1, v___x_3108_);
lean_ctor_set(v___x_3109_, 2, v___x_3108_);
lean_ctor_set(v___x_3109_, 3, v___x_3108_);
lean_ctor_set(v___x_3109_, 4, v___x_3108_);
return v___x_3109_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__8_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; 
v___x_3113_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__7_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3114_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__2___closed__1));
v___x_3115_ = l_Lean_Name_append(v___x_3114_, v___x_3113_);
return v___x_3115_;
}
}
static double _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__9_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3116_; double v___x_3117_; 
v___x_3116_ = lean_unsigned_to_nat(1000000000u);
v___x_3117_ = lean_float_of_nat(v___x_3116_);
return v___x_3117_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(lean_object* v___x_3118_, lean_object* v___f_3119_, lean_object* v_name_3120_, lean_object* v___y_3121_, lean_object* v___y_3122_){
_start:
{
lean_object* v_toCold_3124_; lean_object* v_options_3125_; uint8_t v_hasTrace_3126_; 
v_toCold_3124_ = lean_ctor_get(v___y_3121_, 0);
v_options_3125_ = lean_ctor_get(v_toCold_3124_, 2);
v_hasTrace_3126_ = lean_ctor_get_uint8(v_options_3125_, sizeof(void*)*1);
if (v_hasTrace_3126_ == 0)
{
lean_object* v___x_3127_; lean_object* v_env_3128_; lean_object* v___x_3129_; 
lean_dec_ref(v___f_3119_);
v___x_3127_ = lean_st_ref_get(v___y_3122_);
v_env_3128_ = lean_ctor_get(v___x_3127_, 0);
lean_inc_ref(v_env_3128_);
lean_dec(v___x_3127_);
lean_inc(v_name_3120_);
v___x_3129_ = l_Lean_Meta_declFromEqLikeName(v_env_3128_, v_name_3120_);
if (lean_obj_tag(v___x_3129_) == 1)
{
lean_object* v_val_3130_; lean_object* v___x_3132_; uint8_t v_isShared_3133_; uint8_t v_isSharedCheck_3231_; 
v_val_3130_ = lean_ctor_get(v___x_3129_, 0);
v_isSharedCheck_3231_ = !lean_is_exclusive(v___x_3129_);
if (v_isSharedCheck_3231_ == 0)
{
v___x_3132_ = v___x_3129_;
v_isShared_3133_ = v_isSharedCheck_3231_;
goto v_resetjp_3131_;
}
else
{
lean_inc(v_val_3130_);
lean_dec(v___x_3129_);
v___x_3132_ = lean_box(0);
v_isShared_3133_ = v_isSharedCheck_3231_;
goto v_resetjp_3131_;
}
v_resetjp_3131_:
{
lean_object* v_fst_3134_; lean_object* v_snd_3135_; lean_object* v___x_3136_; lean_object* v_env_3137_; lean_object* v___x_3138_; uint8_t v___x_3139_; 
v_fst_3134_ = lean_ctor_get(v_val_3130_, 0);
lean_inc_n(v_fst_3134_, 2);
v_snd_3135_ = lean_ctor_get(v_val_3130_, 1);
lean_inc_n(v_snd_3135_, 2);
lean_dec(v_val_3130_);
v___x_3136_ = lean_st_ref_get(v___y_3122_);
v_env_3137_ = lean_ctor_get(v___x_3136_, 0);
lean_inc_ref(v_env_3137_);
lean_dec(v___x_3136_);
v___x_3138_ = l_Lean_Meta_mkEqLikeNameFor(v_env_3137_, v_fst_3134_, v_snd_3135_);
v___x_3139_ = lean_name_eq(v_name_3120_, v___x_3138_);
lean_dec(v___x_3138_);
lean_dec(v_name_3120_);
if (v___x_3139_ == 0)
{
lean_object* v___x_3140_; lean_object* v___x_3142_; 
lean_dec(v_snd_3135_);
lean_dec(v_fst_3134_);
lean_dec(v___x_3118_);
v___x_3140_ = lean_box(v_hasTrace_3126_);
if (v_isShared_3133_ == 0)
{
lean_ctor_set_tag(v___x_3132_, 0);
lean_ctor_set(v___x_3132_, 0, v___x_3140_);
v___x_3142_ = v___x_3132_;
goto v_reusejp_3141_;
}
else
{
lean_object* v_reuseFailAlloc_3143_; 
v_reuseFailAlloc_3143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3143_, 0, v___x_3140_);
v___x_3142_ = v_reuseFailAlloc_3143_;
goto v_reusejp_3141_;
}
v_reusejp_3141_:
{
return v___x_3142_;
}
}
else
{
uint8_t v___x_3144_; 
lean_inc(v_snd_3135_);
v___x_3144_ = l_Lean_Meta_isEqnReservedNameSuffix(v_snd_3135_);
if (v___x_3144_ == 0)
{
lean_object* v___x_3145_; uint8_t v___x_3146_; 
v___x_3145_ = ((lean_object*)(l_Lean_Meta_unfoldThmSuffix___closed__0));
v___x_3146_ = lean_string_dec_eq(v_snd_3135_, v___x_3145_);
lean_dec(v_snd_3135_);
if (v___x_3146_ == 0)
{
lean_object* v___x_3147_; lean_object* v___x_3149_; 
lean_dec(v_fst_3134_);
lean_dec(v___x_3118_);
v___x_3147_ = lean_box(v_hasTrace_3126_);
if (v_isShared_3133_ == 0)
{
lean_ctor_set_tag(v___x_3132_, 0);
lean_ctor_set(v___x_3132_, 0, v___x_3147_);
v___x_3149_ = v___x_3132_;
goto v_reusejp_3148_;
}
else
{
lean_object* v_reuseFailAlloc_3150_; 
v_reuseFailAlloc_3150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3150_, 0, v___x_3147_);
v___x_3149_ = v_reuseFailAlloc_3150_;
goto v_reusejp_3148_;
}
v_reusejp_3148_:
{
return v___x_3149_;
}
}
else
{
uint8_t v___x_3151_; uint8_t v___x_3152_; uint8_t v___x_3153_; lean_object* v___x_3154_; uint64_t v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; 
lean_del_object(v___x_3132_);
v___x_3151_ = 1;
v___x_3152_ = 0;
v___x_3153_ = 2;
v___x_3154_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_3154_, 0, v___x_3144_);
lean_ctor_set_uint8(v___x_3154_, 1, v___x_3144_);
lean_ctor_set_uint8(v___x_3154_, 2, v___x_3144_);
lean_ctor_set_uint8(v___x_3154_, 3, v___x_3144_);
lean_ctor_set_uint8(v___x_3154_, 4, v___x_3144_);
lean_ctor_set_uint8(v___x_3154_, 5, v___x_3146_);
lean_ctor_set_uint8(v___x_3154_, 6, v___x_3146_);
lean_ctor_set_uint8(v___x_3154_, 7, v___x_3144_);
lean_ctor_set_uint8(v___x_3154_, 8, v___x_3146_);
lean_ctor_set_uint8(v___x_3154_, 9, v___x_3151_);
lean_ctor_set_uint8(v___x_3154_, 10, v___x_3152_);
lean_ctor_set_uint8(v___x_3154_, 11, v___x_3146_);
lean_ctor_set_uint8(v___x_3154_, 12, v___x_3146_);
lean_ctor_set_uint8(v___x_3154_, 13, v___x_3146_);
lean_ctor_set_uint8(v___x_3154_, 14, v___x_3153_);
lean_ctor_set_uint8(v___x_3154_, 15, v___x_3146_);
lean_ctor_set_uint8(v___x_3154_, 16, v___x_3146_);
lean_ctor_set_uint8(v___x_3154_, 17, v___x_3146_);
lean_ctor_set_uint8(v___x_3154_, 18, v___x_3146_);
lean_ctor_set_uint8(v___x_3154_, 19, v___x_3144_);
v___x_3155_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_3154_);
v___x_3156_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3156_, 0, v___x_3154_);
lean_ctor_set_uint64(v___x_3156_, sizeof(void*)*1, v___x_3155_);
v___x_3157_ = lean_unsigned_to_nat(0u);
v___x_3158_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4);
v___x_3159_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_3160_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3161_ = lean_box(0);
lean_inc(v___x_3118_);
v___x_3162_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3162_, 0, v___x_3156_);
lean_ctor_set(v___x_3162_, 1, v___x_3118_);
lean_ctor_set(v___x_3162_, 2, v___x_3159_);
lean_ctor_set(v___x_3162_, 3, v___x_3160_);
lean_ctor_set(v___x_3162_, 4, v___x_3161_);
lean_ctor_set(v___x_3162_, 5, v___x_3157_);
lean_ctor_set(v___x_3162_, 6, v___x_3161_);
lean_ctor_set_uint8(v___x_3162_, sizeof(void*)*7, v___x_3144_);
lean_ctor_set_uint8(v___x_3162_, sizeof(void*)*7 + 1, v___x_3144_);
lean_ctor_set_uint8(v___x_3162_, sizeof(void*)*7 + 2, v___x_3144_);
lean_ctor_set_uint8(v___x_3162_, sizeof(void*)*7 + 3, v___x_3146_);
v___x_3163_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3164_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3165_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3166_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3166_, 0, v___x_3163_);
lean_ctor_set(v___x_3166_, 1, v___x_3164_);
lean_ctor_set(v___x_3166_, 2, v___x_3118_);
lean_ctor_set(v___x_3166_, 3, v___x_3158_);
lean_ctor_set(v___x_3166_, 4, v___x_3165_);
v___x_3167_ = lean_st_mk_ref(v___x_3166_);
v___x_3168_ = l_Lean_Meta_getUnfoldEqnFor_x3f(v_fst_3134_, v___x_3146_, v___x_3162_, v___x_3167_, v___y_3121_, v___y_3122_);
lean_dec_ref_known(v___x_3162_, 7);
if (lean_obj_tag(v___x_3168_) == 0)
{
lean_object* v_a_3169_; lean_object* v___x_3171_; uint8_t v_isShared_3172_; uint8_t v_isSharedCheck_3182_; 
v_a_3169_ = lean_ctor_get(v___x_3168_, 0);
v_isSharedCheck_3182_ = !lean_is_exclusive(v___x_3168_);
if (v_isSharedCheck_3182_ == 0)
{
v___x_3171_ = v___x_3168_;
v_isShared_3172_ = v_isSharedCheck_3182_;
goto v_resetjp_3170_;
}
else
{
lean_inc(v_a_3169_);
lean_dec(v___x_3168_);
v___x_3171_ = lean_box(0);
v_isShared_3172_ = v_isSharedCheck_3182_;
goto v_resetjp_3170_;
}
v_resetjp_3170_:
{
lean_object* v___x_3173_; 
v___x_3173_ = lean_st_ref_get(v___x_3167_);
lean_dec(v___x_3167_);
lean_dec(v___x_3173_);
if (lean_obj_tag(v_a_3169_) == 0)
{
lean_object* v___x_3174_; lean_object* v___x_3176_; 
v___x_3174_ = lean_box(v___x_3144_);
if (v_isShared_3172_ == 0)
{
lean_ctor_set(v___x_3171_, 0, v___x_3174_);
v___x_3176_ = v___x_3171_;
goto v_reusejp_3175_;
}
else
{
lean_object* v_reuseFailAlloc_3177_; 
v_reuseFailAlloc_3177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3177_, 0, v___x_3174_);
v___x_3176_ = v_reuseFailAlloc_3177_;
goto v_reusejp_3175_;
}
v_reusejp_3175_:
{
return v___x_3176_;
}
}
else
{
lean_object* v___x_3178_; lean_object* v___x_3180_; 
lean_dec_ref_known(v_a_3169_, 1);
v___x_3178_ = lean_box(v___x_3146_);
if (v_isShared_3172_ == 0)
{
lean_ctor_set(v___x_3171_, 0, v___x_3178_);
v___x_3180_ = v___x_3171_;
goto v_reusejp_3179_;
}
else
{
lean_object* v_reuseFailAlloc_3181_; 
v_reuseFailAlloc_3181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3181_, 0, v___x_3178_);
v___x_3180_ = v_reuseFailAlloc_3181_;
goto v_reusejp_3179_;
}
v_reusejp_3179_:
{
return v___x_3180_;
}
}
}
}
else
{
lean_object* v_a_3183_; lean_object* v___x_3185_; uint8_t v_isShared_3186_; uint8_t v_isSharedCheck_3190_; 
lean_dec(v___x_3167_);
v_a_3183_ = lean_ctor_get(v___x_3168_, 0);
v_isSharedCheck_3190_ = !lean_is_exclusive(v___x_3168_);
if (v_isSharedCheck_3190_ == 0)
{
v___x_3185_ = v___x_3168_;
v_isShared_3186_ = v_isSharedCheck_3190_;
goto v_resetjp_3184_;
}
else
{
lean_inc(v_a_3183_);
lean_dec(v___x_3168_);
v___x_3185_ = lean_box(0);
v_isShared_3186_ = v_isSharedCheck_3190_;
goto v_resetjp_3184_;
}
v_resetjp_3184_:
{
lean_object* v___x_3188_; 
if (v_isShared_3186_ == 0)
{
v___x_3188_ = v___x_3185_;
goto v_reusejp_3187_;
}
else
{
lean_object* v_reuseFailAlloc_3189_; 
v_reuseFailAlloc_3189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3189_, 0, v_a_3183_);
v___x_3188_ = v_reuseFailAlloc_3189_;
goto v_reusejp_3187_;
}
v_reusejp_3187_:
{
return v___x_3188_;
}
}
}
}
}
else
{
uint8_t v___x_3191_; uint8_t v___x_3192_; uint8_t v___x_3193_; lean_object* v___x_3194_; uint64_t v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; 
lean_dec(v_snd_3135_);
lean_del_object(v___x_3132_);
v___x_3191_ = 1;
v___x_3192_ = 0;
v___x_3193_ = 2;
v___x_3194_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_3194_, 0, v_hasTrace_3126_);
lean_ctor_set_uint8(v___x_3194_, 1, v_hasTrace_3126_);
lean_ctor_set_uint8(v___x_3194_, 2, v_hasTrace_3126_);
lean_ctor_set_uint8(v___x_3194_, 3, v_hasTrace_3126_);
lean_ctor_set_uint8(v___x_3194_, 4, v_hasTrace_3126_);
lean_ctor_set_uint8(v___x_3194_, 5, v___x_3144_);
lean_ctor_set_uint8(v___x_3194_, 6, v___x_3144_);
lean_ctor_set_uint8(v___x_3194_, 7, v_hasTrace_3126_);
lean_ctor_set_uint8(v___x_3194_, 8, v___x_3144_);
lean_ctor_set_uint8(v___x_3194_, 9, v___x_3191_);
lean_ctor_set_uint8(v___x_3194_, 10, v___x_3192_);
lean_ctor_set_uint8(v___x_3194_, 11, v___x_3144_);
lean_ctor_set_uint8(v___x_3194_, 12, v___x_3144_);
lean_ctor_set_uint8(v___x_3194_, 13, v___x_3144_);
lean_ctor_set_uint8(v___x_3194_, 14, v___x_3193_);
lean_ctor_set_uint8(v___x_3194_, 15, v___x_3144_);
lean_ctor_set_uint8(v___x_3194_, 16, v___x_3144_);
lean_ctor_set_uint8(v___x_3194_, 17, v___x_3144_);
lean_ctor_set_uint8(v___x_3194_, 18, v___x_3144_);
lean_ctor_set_uint8(v___x_3194_, 19, v_hasTrace_3126_);
v___x_3195_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_3194_);
v___x_3196_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3196_, 0, v___x_3194_);
lean_ctor_set_uint64(v___x_3196_, sizeof(void*)*1, v___x_3195_);
v___x_3197_ = lean_unsigned_to_nat(0u);
v___x_3198_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4);
v___x_3199_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_3200_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3201_ = lean_box(0);
lean_inc(v___x_3118_);
v___x_3202_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3202_, 0, v___x_3196_);
lean_ctor_set(v___x_3202_, 1, v___x_3118_);
lean_ctor_set(v___x_3202_, 2, v___x_3199_);
lean_ctor_set(v___x_3202_, 3, v___x_3200_);
lean_ctor_set(v___x_3202_, 4, v___x_3201_);
lean_ctor_set(v___x_3202_, 5, v___x_3197_);
lean_ctor_set(v___x_3202_, 6, v___x_3201_);
lean_ctor_set_uint8(v___x_3202_, sizeof(void*)*7, v_hasTrace_3126_);
lean_ctor_set_uint8(v___x_3202_, sizeof(void*)*7 + 1, v_hasTrace_3126_);
lean_ctor_set_uint8(v___x_3202_, sizeof(void*)*7 + 2, v_hasTrace_3126_);
lean_ctor_set_uint8(v___x_3202_, sizeof(void*)*7 + 3, v___x_3144_);
v___x_3203_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3204_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3205_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3206_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3206_, 0, v___x_3203_);
lean_ctor_set(v___x_3206_, 1, v___x_3204_);
lean_ctor_set(v___x_3206_, 2, v___x_3118_);
lean_ctor_set(v___x_3206_, 3, v___x_3198_);
lean_ctor_set(v___x_3206_, 4, v___x_3205_);
v___x_3207_ = lean_st_mk_ref(v___x_3206_);
v___x_3208_ = l_Lean_Meta_getEqnsFor_x3f(v_fst_3134_, v___x_3202_, v___x_3207_, v___y_3121_, v___y_3122_);
lean_dec_ref_known(v___x_3202_, 7);
if (lean_obj_tag(v___x_3208_) == 0)
{
lean_object* v_a_3209_; lean_object* v___x_3211_; uint8_t v_isShared_3212_; uint8_t v_isSharedCheck_3222_; 
v_a_3209_ = lean_ctor_get(v___x_3208_, 0);
v_isSharedCheck_3222_ = !lean_is_exclusive(v___x_3208_);
if (v_isSharedCheck_3222_ == 0)
{
v___x_3211_ = v___x_3208_;
v_isShared_3212_ = v_isSharedCheck_3222_;
goto v_resetjp_3210_;
}
else
{
lean_inc(v_a_3209_);
lean_dec(v___x_3208_);
v___x_3211_ = lean_box(0);
v_isShared_3212_ = v_isSharedCheck_3222_;
goto v_resetjp_3210_;
}
v_resetjp_3210_:
{
lean_object* v___x_3213_; 
v___x_3213_ = lean_st_ref_get(v___x_3207_);
lean_dec(v___x_3207_);
lean_dec(v___x_3213_);
if (lean_obj_tag(v_a_3209_) == 0)
{
lean_object* v___x_3214_; lean_object* v___x_3216_; 
v___x_3214_ = lean_box(v_hasTrace_3126_);
if (v_isShared_3212_ == 0)
{
lean_ctor_set(v___x_3211_, 0, v___x_3214_);
v___x_3216_ = v___x_3211_;
goto v_reusejp_3215_;
}
else
{
lean_object* v_reuseFailAlloc_3217_; 
v_reuseFailAlloc_3217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3217_, 0, v___x_3214_);
v___x_3216_ = v_reuseFailAlloc_3217_;
goto v_reusejp_3215_;
}
v_reusejp_3215_:
{
return v___x_3216_;
}
}
else
{
lean_object* v___x_3218_; lean_object* v___x_3220_; 
lean_dec_ref_known(v_a_3209_, 1);
v___x_3218_ = lean_box(v___x_3144_);
if (v_isShared_3212_ == 0)
{
lean_ctor_set(v___x_3211_, 0, v___x_3218_);
v___x_3220_ = v___x_3211_;
goto v_reusejp_3219_;
}
else
{
lean_object* v_reuseFailAlloc_3221_; 
v_reuseFailAlloc_3221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3221_, 0, v___x_3218_);
v___x_3220_ = v_reuseFailAlloc_3221_;
goto v_reusejp_3219_;
}
v_reusejp_3219_:
{
return v___x_3220_;
}
}
}
}
else
{
lean_object* v_a_3223_; lean_object* v___x_3225_; uint8_t v_isShared_3226_; uint8_t v_isSharedCheck_3230_; 
lean_dec(v___x_3207_);
v_a_3223_ = lean_ctor_get(v___x_3208_, 0);
v_isSharedCheck_3230_ = !lean_is_exclusive(v___x_3208_);
if (v_isSharedCheck_3230_ == 0)
{
v___x_3225_ = v___x_3208_;
v_isShared_3226_ = v_isSharedCheck_3230_;
goto v_resetjp_3224_;
}
else
{
lean_inc(v_a_3223_);
lean_dec(v___x_3208_);
v___x_3225_ = lean_box(0);
v_isShared_3226_ = v_isSharedCheck_3230_;
goto v_resetjp_3224_;
}
v_resetjp_3224_:
{
lean_object* v___x_3228_; 
if (v_isShared_3226_ == 0)
{
v___x_3228_ = v___x_3225_;
goto v_reusejp_3227_;
}
else
{
lean_object* v_reuseFailAlloc_3229_; 
v_reuseFailAlloc_3229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3229_, 0, v_a_3223_);
v___x_3228_ = v_reuseFailAlloc_3229_;
goto v_reusejp_3227_;
}
v_reusejp_3227_:
{
return v___x_3228_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3232_; lean_object* v___x_3233_; 
lean_dec(v___x_3129_);
lean_dec(v_name_3120_);
lean_dec(v___x_3118_);
v___x_3232_ = lean_box(v_hasTrace_3126_);
v___x_3233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3233_, 0, v___x_3232_);
return v___x_3233_;
}
}
else
{
lean_object* v_inheritedTraceOptions_3234_; lean_object* v___f_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; uint8_t v___x_3239_; lean_object* v___y_3241_; lean_object* v___y_3242_; lean_object* v_a_3243_; lean_object* v___y_3256_; lean_object* v___y_3257_; lean_object* v_a_3258_; lean_object* v___y_3261_; lean_object* v___y_3262_; uint8_t v_a_3263_; lean_object* v___y_3267_; lean_object* v___y_3268_; lean_object* v_a_3269_; lean_object* v___y_3279_; lean_object* v___y_3280_; lean_object* v_a_3281_; lean_object* v___y_3284_; lean_object* v___y_3285_; uint8_t v_a_3286_; lean_object* v___y_3290_; lean_object* v___y_3291_; lean_object* v___y_3292_; 
v_inheritedTraceOptions_3234_ = lean_ctor_get(v_toCold_3124_, 11);
lean_inc(v_name_3120_);
v___f_3235_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed), 5, 1);
lean_closure_set(v___f_3235_, 0, v_name_3120_);
v___x_3236_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__7_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3237_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__3___closed__1));
v___x_3238_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__8_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__8_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__8_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3239_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3234_, v_options_3125_, v___x_3238_);
if (v___x_3239_ == 0)
{
lean_object* v___x_3420_; uint8_t v___x_3421_; 
v___x_3420_ = l_Lean_trace_profiler;
v___x_3421_ = l_Lean_Option_get___at___00Lean_Meta_saveEqnAffectingOptions_spec__0(v_options_3125_, v___x_3420_);
if (v___x_3421_ == 0)
{
lean_object* v___x_3422_; lean_object* v_env_3423_; lean_object* v___x_3424_; 
lean_dec_ref(v___f_3235_);
lean_dec_ref(v___f_3119_);
v___x_3422_ = lean_st_ref_get(v___y_3122_);
v_env_3423_ = lean_ctor_get(v___x_3422_, 0);
lean_inc_ref(v_env_3423_);
lean_dec(v___x_3422_);
lean_inc(v_name_3120_);
v___x_3424_ = l_Lean_Meta_declFromEqLikeName(v_env_3423_, v_name_3120_);
if (lean_obj_tag(v___x_3424_) == 1)
{
lean_object* v_val_3425_; lean_object* v___x_3427_; uint8_t v_isShared_3428_; uint8_t v_isSharedCheck_3526_; 
v_val_3425_ = lean_ctor_get(v___x_3424_, 0);
v_isSharedCheck_3526_ = !lean_is_exclusive(v___x_3424_);
if (v_isSharedCheck_3526_ == 0)
{
v___x_3427_ = v___x_3424_;
v_isShared_3428_ = v_isSharedCheck_3526_;
goto v_resetjp_3426_;
}
else
{
lean_inc(v_val_3425_);
lean_dec(v___x_3424_);
v___x_3427_ = lean_box(0);
v_isShared_3428_ = v_isSharedCheck_3526_;
goto v_resetjp_3426_;
}
v_resetjp_3426_:
{
lean_object* v_fst_3429_; lean_object* v_snd_3430_; lean_object* v___x_3431_; lean_object* v_env_3432_; lean_object* v___x_3433_; uint8_t v___x_3434_; 
v_fst_3429_ = lean_ctor_get(v_val_3425_, 0);
lean_inc_n(v_fst_3429_, 2);
v_snd_3430_ = lean_ctor_get(v_val_3425_, 1);
lean_inc_n(v_snd_3430_, 2);
lean_dec(v_val_3425_);
v___x_3431_ = lean_st_ref_get(v___y_3122_);
v_env_3432_ = lean_ctor_get(v___x_3431_, 0);
lean_inc_ref(v_env_3432_);
lean_dec(v___x_3431_);
v___x_3433_ = l_Lean_Meta_mkEqLikeNameFor(v_env_3432_, v_fst_3429_, v_snd_3430_);
v___x_3434_ = lean_name_eq(v_name_3120_, v___x_3433_);
lean_dec(v___x_3433_);
lean_dec(v_name_3120_);
if (v___x_3434_ == 0)
{
lean_object* v___x_3435_; lean_object* v___x_3437_; 
lean_dec(v_snd_3430_);
lean_dec(v_fst_3429_);
lean_dec(v___x_3118_);
v___x_3435_ = lean_box(v___x_3421_);
if (v_isShared_3428_ == 0)
{
lean_ctor_set_tag(v___x_3427_, 0);
lean_ctor_set(v___x_3427_, 0, v___x_3435_);
v___x_3437_ = v___x_3427_;
goto v_reusejp_3436_;
}
else
{
lean_object* v_reuseFailAlloc_3438_; 
v_reuseFailAlloc_3438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3438_, 0, v___x_3435_);
v___x_3437_ = v_reuseFailAlloc_3438_;
goto v_reusejp_3436_;
}
v_reusejp_3436_:
{
return v___x_3437_;
}
}
else
{
uint8_t v___x_3439_; 
lean_inc(v_snd_3430_);
v___x_3439_ = l_Lean_Meta_isEqnReservedNameSuffix(v_snd_3430_);
if (v___x_3439_ == 0)
{
lean_object* v___x_3440_; uint8_t v___x_3441_; 
v___x_3440_ = ((lean_object*)(l_Lean_Meta_unfoldThmSuffix___closed__0));
v___x_3441_ = lean_string_dec_eq(v_snd_3430_, v___x_3440_);
lean_dec(v_snd_3430_);
if (v___x_3441_ == 0)
{
lean_object* v___x_3442_; lean_object* v___x_3444_; 
lean_dec(v_fst_3429_);
lean_dec(v___x_3118_);
v___x_3442_ = lean_box(v___x_3421_);
if (v_isShared_3428_ == 0)
{
lean_ctor_set_tag(v___x_3427_, 0);
lean_ctor_set(v___x_3427_, 0, v___x_3442_);
v___x_3444_ = v___x_3427_;
goto v_reusejp_3443_;
}
else
{
lean_object* v_reuseFailAlloc_3445_; 
v_reuseFailAlloc_3445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3445_, 0, v___x_3442_);
v___x_3444_ = v_reuseFailAlloc_3445_;
goto v_reusejp_3443_;
}
v_reusejp_3443_:
{
return v___x_3444_;
}
}
else
{
uint8_t v___x_3446_; uint8_t v___x_3447_; uint8_t v___x_3448_; lean_object* v___x_3449_; uint64_t v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; 
lean_del_object(v___x_3427_);
v___x_3446_ = 1;
v___x_3447_ = 0;
v___x_3448_ = 2;
v___x_3449_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_3449_, 0, v___x_3439_);
lean_ctor_set_uint8(v___x_3449_, 1, v___x_3439_);
lean_ctor_set_uint8(v___x_3449_, 2, v___x_3439_);
lean_ctor_set_uint8(v___x_3449_, 3, v___x_3439_);
lean_ctor_set_uint8(v___x_3449_, 4, v___x_3439_);
lean_ctor_set_uint8(v___x_3449_, 5, v___x_3441_);
lean_ctor_set_uint8(v___x_3449_, 6, v___x_3441_);
lean_ctor_set_uint8(v___x_3449_, 7, v___x_3439_);
lean_ctor_set_uint8(v___x_3449_, 8, v___x_3441_);
lean_ctor_set_uint8(v___x_3449_, 9, v___x_3446_);
lean_ctor_set_uint8(v___x_3449_, 10, v___x_3447_);
lean_ctor_set_uint8(v___x_3449_, 11, v___x_3441_);
lean_ctor_set_uint8(v___x_3449_, 12, v___x_3441_);
lean_ctor_set_uint8(v___x_3449_, 13, v___x_3441_);
lean_ctor_set_uint8(v___x_3449_, 14, v___x_3448_);
lean_ctor_set_uint8(v___x_3449_, 15, v___x_3441_);
lean_ctor_set_uint8(v___x_3449_, 16, v___x_3441_);
lean_ctor_set_uint8(v___x_3449_, 17, v___x_3441_);
lean_ctor_set_uint8(v___x_3449_, 18, v___x_3441_);
lean_ctor_set_uint8(v___x_3449_, 19, v___x_3439_);
v___x_3450_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_3449_);
v___x_3451_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3451_, 0, v___x_3449_);
lean_ctor_set_uint64(v___x_3451_, sizeof(void*)*1, v___x_3450_);
v___x_3452_ = lean_unsigned_to_nat(0u);
v___x_3453_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4);
v___x_3454_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_3455_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3456_ = lean_box(0);
lean_inc(v___x_3118_);
v___x_3457_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3457_, 0, v___x_3451_);
lean_ctor_set(v___x_3457_, 1, v___x_3118_);
lean_ctor_set(v___x_3457_, 2, v___x_3454_);
lean_ctor_set(v___x_3457_, 3, v___x_3455_);
lean_ctor_set(v___x_3457_, 4, v___x_3456_);
lean_ctor_set(v___x_3457_, 5, v___x_3452_);
lean_ctor_set(v___x_3457_, 6, v___x_3456_);
lean_ctor_set_uint8(v___x_3457_, sizeof(void*)*7, v___x_3439_);
lean_ctor_set_uint8(v___x_3457_, sizeof(void*)*7 + 1, v___x_3439_);
lean_ctor_set_uint8(v___x_3457_, sizeof(void*)*7 + 2, v___x_3439_);
lean_ctor_set_uint8(v___x_3457_, sizeof(void*)*7 + 3, v___x_3441_);
v___x_3458_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3459_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3460_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3461_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3461_, 0, v___x_3458_);
lean_ctor_set(v___x_3461_, 1, v___x_3459_);
lean_ctor_set(v___x_3461_, 2, v___x_3118_);
lean_ctor_set(v___x_3461_, 3, v___x_3453_);
lean_ctor_set(v___x_3461_, 4, v___x_3460_);
v___x_3462_ = lean_st_mk_ref(v___x_3461_);
v___x_3463_ = l_Lean_Meta_getUnfoldEqnFor_x3f(v_fst_3429_, v___x_3441_, v___x_3457_, v___x_3462_, v___y_3121_, v___y_3122_);
lean_dec_ref_known(v___x_3457_, 7);
if (lean_obj_tag(v___x_3463_) == 0)
{
lean_object* v_a_3464_; lean_object* v___x_3466_; uint8_t v_isShared_3467_; uint8_t v_isSharedCheck_3477_; 
v_a_3464_ = lean_ctor_get(v___x_3463_, 0);
v_isSharedCheck_3477_ = !lean_is_exclusive(v___x_3463_);
if (v_isSharedCheck_3477_ == 0)
{
v___x_3466_ = v___x_3463_;
v_isShared_3467_ = v_isSharedCheck_3477_;
goto v_resetjp_3465_;
}
else
{
lean_inc(v_a_3464_);
lean_dec(v___x_3463_);
v___x_3466_ = lean_box(0);
v_isShared_3467_ = v_isSharedCheck_3477_;
goto v_resetjp_3465_;
}
v_resetjp_3465_:
{
lean_object* v___x_3468_; 
v___x_3468_ = lean_st_ref_get(v___x_3462_);
lean_dec(v___x_3462_);
lean_dec(v___x_3468_);
if (lean_obj_tag(v_a_3464_) == 0)
{
lean_object* v___x_3469_; lean_object* v___x_3471_; 
v___x_3469_ = lean_box(v___x_3439_);
if (v_isShared_3467_ == 0)
{
lean_ctor_set(v___x_3466_, 0, v___x_3469_);
v___x_3471_ = v___x_3466_;
goto v_reusejp_3470_;
}
else
{
lean_object* v_reuseFailAlloc_3472_; 
v_reuseFailAlloc_3472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3472_, 0, v___x_3469_);
v___x_3471_ = v_reuseFailAlloc_3472_;
goto v_reusejp_3470_;
}
v_reusejp_3470_:
{
return v___x_3471_;
}
}
else
{
lean_object* v___x_3473_; lean_object* v___x_3475_; 
lean_dec_ref_known(v_a_3464_, 1);
v___x_3473_ = lean_box(v___x_3441_);
if (v_isShared_3467_ == 0)
{
lean_ctor_set(v___x_3466_, 0, v___x_3473_);
v___x_3475_ = v___x_3466_;
goto v_reusejp_3474_;
}
else
{
lean_object* v_reuseFailAlloc_3476_; 
v_reuseFailAlloc_3476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3476_, 0, v___x_3473_);
v___x_3475_ = v_reuseFailAlloc_3476_;
goto v_reusejp_3474_;
}
v_reusejp_3474_:
{
return v___x_3475_;
}
}
}
}
else
{
lean_object* v_a_3478_; lean_object* v___x_3480_; uint8_t v_isShared_3481_; uint8_t v_isSharedCheck_3485_; 
lean_dec(v___x_3462_);
v_a_3478_ = lean_ctor_get(v___x_3463_, 0);
v_isSharedCheck_3485_ = !lean_is_exclusive(v___x_3463_);
if (v_isSharedCheck_3485_ == 0)
{
v___x_3480_ = v___x_3463_;
v_isShared_3481_ = v_isSharedCheck_3485_;
goto v_resetjp_3479_;
}
else
{
lean_inc(v_a_3478_);
lean_dec(v___x_3463_);
v___x_3480_ = lean_box(0);
v_isShared_3481_ = v_isSharedCheck_3485_;
goto v_resetjp_3479_;
}
v_resetjp_3479_:
{
lean_object* v___x_3483_; 
if (v_isShared_3481_ == 0)
{
v___x_3483_ = v___x_3480_;
goto v_reusejp_3482_;
}
else
{
lean_object* v_reuseFailAlloc_3484_; 
v_reuseFailAlloc_3484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3484_, 0, v_a_3478_);
v___x_3483_ = v_reuseFailAlloc_3484_;
goto v_reusejp_3482_;
}
v_reusejp_3482_:
{
return v___x_3483_;
}
}
}
}
}
else
{
uint8_t v___x_3486_; uint8_t v___x_3487_; uint8_t v___x_3488_; lean_object* v___x_3489_; uint64_t v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; 
lean_dec(v_snd_3430_);
lean_del_object(v___x_3427_);
v___x_3486_ = 1;
v___x_3487_ = 0;
v___x_3488_ = 2;
v___x_3489_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_3489_, 0, v___x_3421_);
lean_ctor_set_uint8(v___x_3489_, 1, v___x_3421_);
lean_ctor_set_uint8(v___x_3489_, 2, v___x_3421_);
lean_ctor_set_uint8(v___x_3489_, 3, v___x_3421_);
lean_ctor_set_uint8(v___x_3489_, 4, v___x_3421_);
lean_ctor_set_uint8(v___x_3489_, 5, v___x_3439_);
lean_ctor_set_uint8(v___x_3489_, 6, v___x_3439_);
lean_ctor_set_uint8(v___x_3489_, 7, v___x_3421_);
lean_ctor_set_uint8(v___x_3489_, 8, v___x_3439_);
lean_ctor_set_uint8(v___x_3489_, 9, v___x_3486_);
lean_ctor_set_uint8(v___x_3489_, 10, v___x_3487_);
lean_ctor_set_uint8(v___x_3489_, 11, v___x_3439_);
lean_ctor_set_uint8(v___x_3489_, 12, v___x_3439_);
lean_ctor_set_uint8(v___x_3489_, 13, v___x_3439_);
lean_ctor_set_uint8(v___x_3489_, 14, v___x_3488_);
lean_ctor_set_uint8(v___x_3489_, 15, v___x_3439_);
lean_ctor_set_uint8(v___x_3489_, 16, v___x_3439_);
lean_ctor_set_uint8(v___x_3489_, 17, v___x_3439_);
lean_ctor_set_uint8(v___x_3489_, 18, v___x_3439_);
lean_ctor_set_uint8(v___x_3489_, 19, v___x_3421_);
v___x_3490_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_3489_);
v___x_3491_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3491_, 0, v___x_3489_);
lean_ctor_set_uint64(v___x_3491_, sizeof(void*)*1, v___x_3490_);
v___x_3492_ = lean_unsigned_to_nat(0u);
v___x_3493_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4);
v___x_3494_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_3495_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3496_ = lean_box(0);
lean_inc(v___x_3118_);
v___x_3497_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3497_, 0, v___x_3491_);
lean_ctor_set(v___x_3497_, 1, v___x_3118_);
lean_ctor_set(v___x_3497_, 2, v___x_3494_);
lean_ctor_set(v___x_3497_, 3, v___x_3495_);
lean_ctor_set(v___x_3497_, 4, v___x_3496_);
lean_ctor_set(v___x_3497_, 5, v___x_3492_);
lean_ctor_set(v___x_3497_, 6, v___x_3496_);
lean_ctor_set_uint8(v___x_3497_, sizeof(void*)*7, v___x_3421_);
lean_ctor_set_uint8(v___x_3497_, sizeof(void*)*7 + 1, v___x_3421_);
lean_ctor_set_uint8(v___x_3497_, sizeof(void*)*7 + 2, v___x_3421_);
lean_ctor_set_uint8(v___x_3497_, sizeof(void*)*7 + 3, v___x_3439_);
v___x_3498_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3499_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3500_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3501_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3501_, 0, v___x_3498_);
lean_ctor_set(v___x_3501_, 1, v___x_3499_);
lean_ctor_set(v___x_3501_, 2, v___x_3118_);
lean_ctor_set(v___x_3501_, 3, v___x_3493_);
lean_ctor_set(v___x_3501_, 4, v___x_3500_);
v___x_3502_ = lean_st_mk_ref(v___x_3501_);
v___x_3503_ = l_Lean_Meta_getEqnsFor_x3f(v_fst_3429_, v___x_3497_, v___x_3502_, v___y_3121_, v___y_3122_);
lean_dec_ref_known(v___x_3497_, 7);
if (lean_obj_tag(v___x_3503_) == 0)
{
lean_object* v_a_3504_; lean_object* v___x_3506_; uint8_t v_isShared_3507_; uint8_t v_isSharedCheck_3517_; 
v_a_3504_ = lean_ctor_get(v___x_3503_, 0);
v_isSharedCheck_3517_ = !lean_is_exclusive(v___x_3503_);
if (v_isSharedCheck_3517_ == 0)
{
v___x_3506_ = v___x_3503_;
v_isShared_3507_ = v_isSharedCheck_3517_;
goto v_resetjp_3505_;
}
else
{
lean_inc(v_a_3504_);
lean_dec(v___x_3503_);
v___x_3506_ = lean_box(0);
v_isShared_3507_ = v_isSharedCheck_3517_;
goto v_resetjp_3505_;
}
v_resetjp_3505_:
{
lean_object* v___x_3508_; 
v___x_3508_ = lean_st_ref_get(v___x_3502_);
lean_dec(v___x_3502_);
lean_dec(v___x_3508_);
if (lean_obj_tag(v_a_3504_) == 0)
{
lean_object* v___x_3509_; lean_object* v___x_3511_; 
v___x_3509_ = lean_box(v___x_3421_);
if (v_isShared_3507_ == 0)
{
lean_ctor_set(v___x_3506_, 0, v___x_3509_);
v___x_3511_ = v___x_3506_;
goto v_reusejp_3510_;
}
else
{
lean_object* v_reuseFailAlloc_3512_; 
v_reuseFailAlloc_3512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3512_, 0, v___x_3509_);
v___x_3511_ = v_reuseFailAlloc_3512_;
goto v_reusejp_3510_;
}
v_reusejp_3510_:
{
return v___x_3511_;
}
}
else
{
lean_object* v___x_3513_; lean_object* v___x_3515_; 
lean_dec_ref_known(v_a_3504_, 1);
v___x_3513_ = lean_box(v___x_3439_);
if (v_isShared_3507_ == 0)
{
lean_ctor_set(v___x_3506_, 0, v___x_3513_);
v___x_3515_ = v___x_3506_;
goto v_reusejp_3514_;
}
else
{
lean_object* v_reuseFailAlloc_3516_; 
v_reuseFailAlloc_3516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3516_, 0, v___x_3513_);
v___x_3515_ = v_reuseFailAlloc_3516_;
goto v_reusejp_3514_;
}
v_reusejp_3514_:
{
return v___x_3515_;
}
}
}
}
else
{
lean_object* v_a_3518_; lean_object* v___x_3520_; uint8_t v_isShared_3521_; uint8_t v_isSharedCheck_3525_; 
lean_dec(v___x_3502_);
v_a_3518_ = lean_ctor_get(v___x_3503_, 0);
v_isSharedCheck_3525_ = !lean_is_exclusive(v___x_3503_);
if (v_isSharedCheck_3525_ == 0)
{
v___x_3520_ = v___x_3503_;
v_isShared_3521_ = v_isSharedCheck_3525_;
goto v_resetjp_3519_;
}
else
{
lean_inc(v_a_3518_);
lean_dec(v___x_3503_);
v___x_3520_ = lean_box(0);
v_isShared_3521_ = v_isSharedCheck_3525_;
goto v_resetjp_3519_;
}
v_resetjp_3519_:
{
lean_object* v___x_3523_; 
if (v_isShared_3521_ == 0)
{
v___x_3523_ = v___x_3520_;
goto v_reusejp_3522_;
}
else
{
lean_object* v_reuseFailAlloc_3524_; 
v_reuseFailAlloc_3524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3524_, 0, v_a_3518_);
v___x_3523_ = v_reuseFailAlloc_3524_;
goto v_reusejp_3522_;
}
v_reusejp_3522_:
{
return v___x_3523_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3527_; lean_object* v___x_3528_; 
lean_dec(v___x_3424_);
lean_dec(v_name_3120_);
lean_dec(v___x_3118_);
v___x_3527_ = lean_box(v___x_3421_);
v___x_3528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3528_, 0, v___x_3527_);
return v___x_3528_;
}
}
else
{
goto v___jp_3296_;
}
}
else
{
goto v___jp_3296_;
}
v___jp_3240_:
{
lean_object* v___x_3244_; double v___x_3245_; double v___x_3246_; double v___x_3247_; double v___x_3248_; double v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; 
v___x_3244_ = lean_io_mono_nanos_now();
v___x_3245_ = lean_float_of_nat(v___y_3242_);
v___x_3246_ = lean_float_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__9_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__9_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__9_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3247_ = lean_float_div(v___x_3245_, v___x_3246_);
v___x_3248_ = lean_float_of_nat(v___x_3244_);
v___x_3249_ = lean_float_div(v___x_3248_, v___x_3246_);
v___x_3250_ = lean_box_float(v___x_3247_);
v___x_3251_ = lean_box_float(v___x_3249_);
v___x_3252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3252_, 0, v___x_3250_);
lean_ctor_set(v___x_3252_, 1, v___x_3251_);
v___x_3253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3253_, 0, v_a_3243_);
lean_ctor_set(v___x_3253_, 1, v___x_3252_);
v___x_3254_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1(v___x_3236_, v_hasTrace_3126_, v___x_3237_, v_options_3125_, v___x_3239_, v___y_3241_, v___f_3235_, v___x_3253_, v___y_3121_, v___y_3122_);
return v___x_3254_;
}
v___jp_3255_:
{
lean_object* v___x_3259_; 
v___x_3259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3259_, 0, v_a_3258_);
v___y_3241_ = v___y_3256_;
v___y_3242_ = v___y_3257_;
v_a_3243_ = v___x_3259_;
goto v___jp_3240_;
}
v___jp_3260_:
{
lean_object* v___x_3264_; lean_object* v___x_3265_; 
v___x_3264_ = lean_box(v_a_3263_);
v___x_3265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3265_, 0, v___x_3264_);
v___y_3241_ = v___y_3261_;
v___y_3242_ = v___y_3262_;
v_a_3243_ = v___x_3265_;
goto v___jp_3240_;
}
v___jp_3266_:
{
lean_object* v___x_3270_; double v___x_3271_; double v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; 
v___x_3270_ = lean_io_get_num_heartbeats();
v___x_3271_ = lean_float_of_nat(v___y_3268_);
v___x_3272_ = lean_float_of_nat(v___x_3270_);
v___x_3273_ = lean_box_float(v___x_3271_);
v___x_3274_ = lean_box_float(v___x_3272_);
v___x_3275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3275_, 0, v___x_3273_);
lean_ctor_set(v___x_3275_, 1, v___x_3274_);
v___x_3276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3276_, 0, v_a_3269_);
lean_ctor_set(v___x_3276_, 1, v___x_3275_);
v___x_3277_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1(v___x_3236_, v_hasTrace_3126_, v___x_3237_, v_options_3125_, v___x_3239_, v___y_3267_, v___f_3235_, v___x_3276_, v___y_3121_, v___y_3122_);
return v___x_3277_;
}
v___jp_3278_:
{
lean_object* v___x_3282_; 
v___x_3282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3282_, 0, v_a_3281_);
v___y_3267_ = v___y_3279_;
v___y_3268_ = v___y_3280_;
v_a_3269_ = v___x_3282_;
goto v___jp_3266_;
}
v___jp_3283_:
{
lean_object* v___x_3287_; lean_object* v___x_3288_; 
v___x_3287_ = lean_box(v_a_3286_);
v___x_3288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3288_, 0, v___x_3287_);
v___y_3267_ = v___y_3284_;
v___y_3268_ = v___y_3285_;
v_a_3269_ = v___x_3288_;
goto v___jp_3266_;
}
v___jp_3289_:
{
if (lean_obj_tag(v___y_3292_) == 0)
{
lean_object* v_a_3293_; uint8_t v___x_3294_; 
v_a_3293_ = lean_ctor_get(v___y_3292_, 0);
lean_inc(v_a_3293_);
lean_dec_ref_known(v___y_3292_, 1);
v___x_3294_ = lean_unbox(v_a_3293_);
lean_dec(v_a_3293_);
v___y_3284_ = v___y_3290_;
v___y_3285_ = v___y_3291_;
v_a_3286_ = v___x_3294_;
goto v___jp_3283_;
}
else
{
lean_object* v_a_3295_; 
v_a_3295_ = lean_ctor_get(v___y_3292_, 0);
lean_inc(v_a_3295_);
lean_dec_ref_known(v___y_3292_, 1);
v___y_3279_ = v___y_3290_;
v___y_3280_ = v___y_3291_;
v_a_3281_ = v_a_3295_;
goto v___jp_3278_;
}
}
v___jp_3296_:
{
lean_object* v___x_3297_; lean_object* v_a_3298_; lean_object* v___x_3299_; uint8_t v___x_3300_; 
v___x_3297_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg(v___y_3122_);
v_a_3298_ = lean_ctor_get(v___x_3297_, 0);
lean_inc(v_a_3298_);
lean_dec_ref(v___x_3297_);
v___x_3299_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3300_ = l_Lean_Option_get___at___00Lean_Meta_saveEqnAffectingOptions_spec__0(v_options_3125_, v___x_3299_);
if (v___x_3300_ == 0)
{
lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v_env_3303_; lean_object* v___x_3304_; 
lean_dec_ref(v___f_3119_);
v___x_3301_ = lean_io_mono_nanos_now();
v___x_3302_ = lean_st_ref_get(v___y_3122_);
v_env_3303_ = lean_ctor_get(v___x_3302_, 0);
lean_inc_ref(v_env_3303_);
lean_dec(v___x_3302_);
lean_inc(v_name_3120_);
v___x_3304_ = l_Lean_Meta_declFromEqLikeName(v_env_3303_, v_name_3120_);
if (lean_obj_tag(v___x_3304_) == 1)
{
lean_object* v_val_3305_; lean_object* v_fst_3306_; lean_object* v_snd_3307_; lean_object* v___x_3308_; lean_object* v_env_3309_; lean_object* v___x_3310_; uint8_t v___x_3311_; 
v_val_3305_ = lean_ctor_get(v___x_3304_, 0);
lean_inc(v_val_3305_);
lean_dec_ref_known(v___x_3304_, 1);
v_fst_3306_ = lean_ctor_get(v_val_3305_, 0);
lean_inc_n(v_fst_3306_, 2);
v_snd_3307_ = lean_ctor_get(v_val_3305_, 1);
lean_inc_n(v_snd_3307_, 2);
lean_dec(v_val_3305_);
v___x_3308_ = lean_st_ref_get(v___y_3122_);
v_env_3309_ = lean_ctor_get(v___x_3308_, 0);
lean_inc_ref(v_env_3309_);
lean_dec(v___x_3308_);
v___x_3310_ = l_Lean_Meta_mkEqLikeNameFor(v_env_3309_, v_fst_3306_, v_snd_3307_);
v___x_3311_ = lean_name_eq(v_name_3120_, v___x_3310_);
lean_dec(v___x_3310_);
lean_dec(v_name_3120_);
if (v___x_3311_ == 0)
{
lean_dec(v_snd_3307_);
lean_dec(v_fst_3306_);
lean_dec(v___x_3118_);
v___y_3261_ = v_a_3298_;
v___y_3262_ = v___x_3301_;
v_a_3263_ = v___x_3300_;
goto v___jp_3260_;
}
else
{
uint8_t v___x_3312_; 
lean_inc(v_snd_3307_);
v___x_3312_ = l_Lean_Meta_isEqnReservedNameSuffix(v_snd_3307_);
if (v___x_3312_ == 0)
{
lean_object* v___x_3313_; uint8_t v___x_3314_; 
v___x_3313_ = ((lean_object*)(l_Lean_Meta_unfoldThmSuffix___closed__0));
v___x_3314_ = lean_string_dec_eq(v_snd_3307_, v___x_3313_);
lean_dec(v_snd_3307_);
if (v___x_3314_ == 0)
{
lean_dec(v_fst_3306_);
lean_dec(v___x_3118_);
v___y_3261_ = v_a_3298_;
v___y_3262_ = v___x_3301_;
v_a_3263_ = v___x_3300_;
goto v___jp_3260_;
}
else
{
uint8_t v___x_3315_; uint8_t v___x_3316_; uint8_t v___x_3317_; lean_object* v___x_3318_; uint64_t v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; 
v___x_3315_ = 1;
v___x_3316_ = 0;
v___x_3317_ = 2;
v___x_3318_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_3318_, 0, v___x_3312_);
lean_ctor_set_uint8(v___x_3318_, 1, v___x_3312_);
lean_ctor_set_uint8(v___x_3318_, 2, v___x_3312_);
lean_ctor_set_uint8(v___x_3318_, 3, v___x_3312_);
lean_ctor_set_uint8(v___x_3318_, 4, v___x_3312_);
lean_ctor_set_uint8(v___x_3318_, 5, v___x_3314_);
lean_ctor_set_uint8(v___x_3318_, 6, v___x_3314_);
lean_ctor_set_uint8(v___x_3318_, 7, v___x_3312_);
lean_ctor_set_uint8(v___x_3318_, 8, v___x_3314_);
lean_ctor_set_uint8(v___x_3318_, 9, v___x_3315_);
lean_ctor_set_uint8(v___x_3318_, 10, v___x_3316_);
lean_ctor_set_uint8(v___x_3318_, 11, v___x_3314_);
lean_ctor_set_uint8(v___x_3318_, 12, v___x_3314_);
lean_ctor_set_uint8(v___x_3318_, 13, v___x_3314_);
lean_ctor_set_uint8(v___x_3318_, 14, v___x_3317_);
lean_ctor_set_uint8(v___x_3318_, 15, v___x_3314_);
lean_ctor_set_uint8(v___x_3318_, 16, v___x_3314_);
lean_ctor_set_uint8(v___x_3318_, 17, v___x_3314_);
lean_ctor_set_uint8(v___x_3318_, 18, v___x_3314_);
lean_ctor_set_uint8(v___x_3318_, 19, v___x_3312_);
v___x_3319_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_3318_);
v___x_3320_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3320_, 0, v___x_3318_);
lean_ctor_set_uint64(v___x_3320_, sizeof(void*)*1, v___x_3319_);
v___x_3321_ = lean_unsigned_to_nat(0u);
v___x_3322_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4);
v___x_3323_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_3324_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3325_ = lean_box(0);
lean_inc(v___x_3118_);
v___x_3326_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3326_, 0, v___x_3320_);
lean_ctor_set(v___x_3326_, 1, v___x_3118_);
lean_ctor_set(v___x_3326_, 2, v___x_3323_);
lean_ctor_set(v___x_3326_, 3, v___x_3324_);
lean_ctor_set(v___x_3326_, 4, v___x_3325_);
lean_ctor_set(v___x_3326_, 5, v___x_3321_);
lean_ctor_set(v___x_3326_, 6, v___x_3325_);
lean_ctor_set_uint8(v___x_3326_, sizeof(void*)*7, v___x_3312_);
lean_ctor_set_uint8(v___x_3326_, sizeof(void*)*7 + 1, v___x_3312_);
lean_ctor_set_uint8(v___x_3326_, sizeof(void*)*7 + 2, v___x_3312_);
lean_ctor_set_uint8(v___x_3326_, sizeof(void*)*7 + 3, v___x_3314_);
v___x_3327_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3328_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3329_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3330_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3330_, 0, v___x_3327_);
lean_ctor_set(v___x_3330_, 1, v___x_3328_);
lean_ctor_set(v___x_3330_, 2, v___x_3118_);
lean_ctor_set(v___x_3330_, 3, v___x_3322_);
lean_ctor_set(v___x_3330_, 4, v___x_3329_);
v___x_3331_ = lean_st_mk_ref(v___x_3330_);
v___x_3332_ = l_Lean_Meta_getUnfoldEqnFor_x3f(v_fst_3306_, v___x_3314_, v___x_3326_, v___x_3331_, v___y_3121_, v___y_3122_);
lean_dec_ref_known(v___x_3326_, 7);
if (lean_obj_tag(v___x_3332_) == 0)
{
lean_object* v_a_3333_; lean_object* v___x_3334_; 
v_a_3333_ = lean_ctor_get(v___x_3332_, 0);
lean_inc(v_a_3333_);
lean_dec_ref_known(v___x_3332_, 1);
v___x_3334_ = lean_st_ref_get(v___x_3331_);
lean_dec(v___x_3331_);
lean_dec(v___x_3334_);
if (lean_obj_tag(v_a_3333_) == 0)
{
v___y_3261_ = v_a_3298_;
v___y_3262_ = v___x_3301_;
v_a_3263_ = v___x_3312_;
goto v___jp_3260_;
}
else
{
lean_dec_ref_known(v_a_3333_, 1);
v___y_3261_ = v_a_3298_;
v___y_3262_ = v___x_3301_;
v_a_3263_ = v___x_3314_;
goto v___jp_3260_;
}
}
else
{
lean_object* v_a_3335_; 
lean_dec(v___x_3331_);
v_a_3335_ = lean_ctor_get(v___x_3332_, 0);
lean_inc(v_a_3335_);
lean_dec_ref_known(v___x_3332_, 1);
v___y_3256_ = v_a_3298_;
v___y_3257_ = v___x_3301_;
v_a_3258_ = v_a_3335_;
goto v___jp_3255_;
}
}
}
else
{
uint8_t v___x_3336_; uint8_t v___x_3337_; uint8_t v___x_3338_; lean_object* v___x_3339_; uint64_t v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; 
lean_dec(v_snd_3307_);
v___x_3336_ = 1;
v___x_3337_ = 0;
v___x_3338_ = 2;
v___x_3339_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_3339_, 0, v___x_3300_);
lean_ctor_set_uint8(v___x_3339_, 1, v___x_3300_);
lean_ctor_set_uint8(v___x_3339_, 2, v___x_3300_);
lean_ctor_set_uint8(v___x_3339_, 3, v___x_3300_);
lean_ctor_set_uint8(v___x_3339_, 4, v___x_3300_);
lean_ctor_set_uint8(v___x_3339_, 5, v___x_3312_);
lean_ctor_set_uint8(v___x_3339_, 6, v___x_3312_);
lean_ctor_set_uint8(v___x_3339_, 7, v___x_3300_);
lean_ctor_set_uint8(v___x_3339_, 8, v___x_3312_);
lean_ctor_set_uint8(v___x_3339_, 9, v___x_3336_);
lean_ctor_set_uint8(v___x_3339_, 10, v___x_3337_);
lean_ctor_set_uint8(v___x_3339_, 11, v___x_3312_);
lean_ctor_set_uint8(v___x_3339_, 12, v___x_3312_);
lean_ctor_set_uint8(v___x_3339_, 13, v___x_3312_);
lean_ctor_set_uint8(v___x_3339_, 14, v___x_3338_);
lean_ctor_set_uint8(v___x_3339_, 15, v___x_3312_);
lean_ctor_set_uint8(v___x_3339_, 16, v___x_3312_);
lean_ctor_set_uint8(v___x_3339_, 17, v___x_3312_);
lean_ctor_set_uint8(v___x_3339_, 18, v___x_3312_);
lean_ctor_set_uint8(v___x_3339_, 19, v___x_3300_);
v___x_3340_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_3339_);
v___x_3341_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3341_, 0, v___x_3339_);
lean_ctor_set_uint64(v___x_3341_, sizeof(void*)*1, v___x_3340_);
v___x_3342_ = lean_unsigned_to_nat(0u);
v___x_3343_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4);
v___x_3344_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_3345_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3346_ = lean_box(0);
lean_inc(v___x_3118_);
v___x_3347_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3347_, 0, v___x_3341_);
lean_ctor_set(v___x_3347_, 1, v___x_3118_);
lean_ctor_set(v___x_3347_, 2, v___x_3344_);
lean_ctor_set(v___x_3347_, 3, v___x_3345_);
lean_ctor_set(v___x_3347_, 4, v___x_3346_);
lean_ctor_set(v___x_3347_, 5, v___x_3342_);
lean_ctor_set(v___x_3347_, 6, v___x_3346_);
lean_ctor_set_uint8(v___x_3347_, sizeof(void*)*7, v___x_3300_);
lean_ctor_set_uint8(v___x_3347_, sizeof(void*)*7 + 1, v___x_3300_);
lean_ctor_set_uint8(v___x_3347_, sizeof(void*)*7 + 2, v___x_3300_);
lean_ctor_set_uint8(v___x_3347_, sizeof(void*)*7 + 3, v___x_3312_);
v___x_3348_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3349_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3350_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3351_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3351_, 0, v___x_3348_);
lean_ctor_set(v___x_3351_, 1, v___x_3349_);
lean_ctor_set(v___x_3351_, 2, v___x_3118_);
lean_ctor_set(v___x_3351_, 3, v___x_3343_);
lean_ctor_set(v___x_3351_, 4, v___x_3350_);
v___x_3352_ = lean_st_mk_ref(v___x_3351_);
v___x_3353_ = l_Lean_Meta_getEqnsFor_x3f(v_fst_3306_, v___x_3347_, v___x_3352_, v___y_3121_, v___y_3122_);
lean_dec_ref_known(v___x_3347_, 7);
if (lean_obj_tag(v___x_3353_) == 0)
{
lean_object* v_a_3354_; lean_object* v___x_3355_; 
v_a_3354_ = lean_ctor_get(v___x_3353_, 0);
lean_inc(v_a_3354_);
lean_dec_ref_known(v___x_3353_, 1);
v___x_3355_ = lean_st_ref_get(v___x_3352_);
lean_dec(v___x_3352_);
lean_dec(v___x_3355_);
if (lean_obj_tag(v_a_3354_) == 0)
{
v___y_3261_ = v_a_3298_;
v___y_3262_ = v___x_3301_;
v_a_3263_ = v___x_3300_;
goto v___jp_3260_;
}
else
{
lean_dec_ref_known(v_a_3354_, 1);
v___y_3261_ = v_a_3298_;
v___y_3262_ = v___x_3301_;
v_a_3263_ = v___x_3312_;
goto v___jp_3260_;
}
}
else
{
lean_object* v_a_3356_; 
lean_dec(v___x_3352_);
v_a_3356_ = lean_ctor_get(v___x_3353_, 0);
lean_inc(v_a_3356_);
lean_dec_ref_known(v___x_3353_, 1);
v___y_3256_ = v_a_3298_;
v___y_3257_ = v___x_3301_;
v_a_3258_ = v_a_3356_;
goto v___jp_3255_;
}
}
}
}
else
{
lean_dec(v___x_3304_);
lean_dec(v_name_3120_);
lean_dec(v___x_3118_);
v___y_3261_ = v_a_3298_;
v___y_3262_ = v___x_3301_;
v_a_3263_ = v___x_3300_;
goto v___jp_3260_;
}
}
else
{
lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v_env_3359_; lean_object* v___x_3360_; 
v___x_3357_ = lean_io_get_num_heartbeats();
v___x_3358_ = lean_st_ref_get(v___y_3122_);
v_env_3359_ = lean_ctor_get(v___x_3358_, 0);
lean_inc_ref(v_env_3359_);
lean_dec(v___x_3358_);
lean_inc(v_name_3120_);
v___x_3360_ = l_Lean_Meta_declFromEqLikeName(v_env_3359_, v_name_3120_);
if (lean_obj_tag(v___x_3360_) == 1)
{
lean_object* v_val_3361_; lean_object* v_fst_3362_; lean_object* v_snd_3363_; lean_object* v___x_3364_; lean_object* v_env_3365_; lean_object* v___x_3366_; uint8_t v___x_3367_; 
v_val_3361_ = lean_ctor_get(v___x_3360_, 0);
lean_inc(v_val_3361_);
lean_dec_ref_known(v___x_3360_, 1);
v_fst_3362_ = lean_ctor_get(v_val_3361_, 0);
lean_inc_n(v_fst_3362_, 2);
v_snd_3363_ = lean_ctor_get(v_val_3361_, 1);
lean_inc_n(v_snd_3363_, 2);
lean_dec(v_val_3361_);
v___x_3364_ = lean_st_ref_get(v___y_3122_);
v_env_3365_ = lean_ctor_get(v___x_3364_, 0);
lean_inc_ref(v_env_3365_);
lean_dec(v___x_3364_);
v___x_3366_ = l_Lean_Meta_mkEqLikeNameFor(v_env_3365_, v_fst_3362_, v_snd_3363_);
v___x_3367_ = lean_name_eq(v_name_3120_, v___x_3366_);
lean_dec(v___x_3366_);
lean_dec(v_name_3120_);
if (v___x_3367_ == 0)
{
lean_object* v___x_3368_; lean_object* v___x_3369_; 
lean_dec(v_snd_3363_);
lean_dec(v_fst_3362_);
lean_dec(v___x_3118_);
v___x_3368_ = lean_box(0);
lean_inc(v___y_3122_);
lean_inc_ref(v___y_3121_);
v___x_3369_ = lean_apply_4(v___f_3119_, v___x_3368_, v___y_3121_, v___y_3122_, lean_box(0));
v___y_3290_ = v_a_3298_;
v___y_3291_ = v___x_3357_;
v___y_3292_ = v___x_3369_;
goto v___jp_3289_;
}
else
{
uint8_t v___x_3370_; 
lean_inc(v_snd_3363_);
v___x_3370_ = l_Lean_Meta_isEqnReservedNameSuffix(v_snd_3363_);
if (v___x_3370_ == 0)
{
lean_object* v___x_3371_; uint8_t v___x_3372_; 
v___x_3371_ = ((lean_object*)(l_Lean_Meta_unfoldThmSuffix___closed__0));
v___x_3372_ = lean_string_dec_eq(v_snd_3363_, v___x_3371_);
lean_dec(v_snd_3363_);
if (v___x_3372_ == 0)
{
lean_object* v___x_3373_; lean_object* v___x_3374_; 
lean_dec(v_fst_3362_);
lean_dec(v___x_3118_);
v___x_3373_ = lean_box(0);
lean_inc(v___y_3122_);
lean_inc_ref(v___y_3121_);
v___x_3374_ = lean_apply_4(v___f_3119_, v___x_3373_, v___y_3121_, v___y_3122_, lean_box(0));
v___y_3290_ = v_a_3298_;
v___y_3291_ = v___x_3357_;
v___y_3292_ = v___x_3374_;
goto v___jp_3289_;
}
else
{
uint8_t v___x_3375_; uint8_t v___x_3376_; uint8_t v___x_3377_; lean_object* v___x_3378_; uint64_t v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; 
lean_dec_ref(v___f_3119_);
v___x_3375_ = 1;
v___x_3376_ = 0;
v___x_3377_ = 2;
v___x_3378_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_3378_, 0, v___x_3370_);
lean_ctor_set_uint8(v___x_3378_, 1, v___x_3370_);
lean_ctor_set_uint8(v___x_3378_, 2, v___x_3370_);
lean_ctor_set_uint8(v___x_3378_, 3, v___x_3370_);
lean_ctor_set_uint8(v___x_3378_, 4, v___x_3370_);
lean_ctor_set_uint8(v___x_3378_, 5, v___x_3372_);
lean_ctor_set_uint8(v___x_3378_, 6, v___x_3372_);
lean_ctor_set_uint8(v___x_3378_, 7, v___x_3370_);
lean_ctor_set_uint8(v___x_3378_, 8, v___x_3372_);
lean_ctor_set_uint8(v___x_3378_, 9, v___x_3375_);
lean_ctor_set_uint8(v___x_3378_, 10, v___x_3376_);
lean_ctor_set_uint8(v___x_3378_, 11, v___x_3372_);
lean_ctor_set_uint8(v___x_3378_, 12, v___x_3372_);
lean_ctor_set_uint8(v___x_3378_, 13, v___x_3372_);
lean_ctor_set_uint8(v___x_3378_, 14, v___x_3377_);
lean_ctor_set_uint8(v___x_3378_, 15, v___x_3372_);
lean_ctor_set_uint8(v___x_3378_, 16, v___x_3372_);
lean_ctor_set_uint8(v___x_3378_, 17, v___x_3372_);
lean_ctor_set_uint8(v___x_3378_, 18, v___x_3372_);
lean_ctor_set_uint8(v___x_3378_, 19, v___x_3370_);
v___x_3379_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_3378_);
v___x_3380_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3380_, 0, v___x_3378_);
lean_ctor_set_uint64(v___x_3380_, sizeof(void*)*1, v___x_3379_);
v___x_3381_ = lean_unsigned_to_nat(0u);
v___x_3382_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4);
v___x_3383_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_3384_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3385_ = lean_box(0);
lean_inc(v___x_3118_);
v___x_3386_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3386_, 0, v___x_3380_);
lean_ctor_set(v___x_3386_, 1, v___x_3118_);
lean_ctor_set(v___x_3386_, 2, v___x_3383_);
lean_ctor_set(v___x_3386_, 3, v___x_3384_);
lean_ctor_set(v___x_3386_, 4, v___x_3385_);
lean_ctor_set(v___x_3386_, 5, v___x_3381_);
lean_ctor_set(v___x_3386_, 6, v___x_3385_);
lean_ctor_set_uint8(v___x_3386_, sizeof(void*)*7, v___x_3370_);
lean_ctor_set_uint8(v___x_3386_, sizeof(void*)*7 + 1, v___x_3370_);
lean_ctor_set_uint8(v___x_3386_, sizeof(void*)*7 + 2, v___x_3370_);
lean_ctor_set_uint8(v___x_3386_, sizeof(void*)*7 + 3, v___x_3372_);
v___x_3387_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3388_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3389_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3390_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3390_, 0, v___x_3387_);
lean_ctor_set(v___x_3390_, 1, v___x_3388_);
lean_ctor_set(v___x_3390_, 2, v___x_3118_);
lean_ctor_set(v___x_3390_, 3, v___x_3382_);
lean_ctor_set(v___x_3390_, 4, v___x_3389_);
v___x_3391_ = lean_st_mk_ref(v___x_3390_);
v___x_3392_ = l_Lean_Meta_getUnfoldEqnFor_x3f(v_fst_3362_, v___x_3372_, v___x_3386_, v___x_3391_, v___y_3121_, v___y_3122_);
lean_dec_ref_known(v___x_3386_, 7);
if (lean_obj_tag(v___x_3392_) == 0)
{
lean_object* v_a_3393_; lean_object* v___x_3394_; 
v_a_3393_ = lean_ctor_get(v___x_3392_, 0);
lean_inc(v_a_3393_);
lean_dec_ref_known(v___x_3392_, 1);
v___x_3394_ = lean_st_ref_get(v___x_3391_);
lean_dec(v___x_3391_);
lean_dec(v___x_3394_);
if (lean_obj_tag(v_a_3393_) == 0)
{
v___y_3284_ = v_a_3298_;
v___y_3285_ = v___x_3357_;
v_a_3286_ = v___x_3370_;
goto v___jp_3283_;
}
else
{
lean_dec_ref_known(v_a_3393_, 1);
v___y_3284_ = v_a_3298_;
v___y_3285_ = v___x_3357_;
v_a_3286_ = v___x_3372_;
goto v___jp_3283_;
}
}
else
{
lean_object* v_a_3395_; 
lean_dec(v___x_3391_);
v_a_3395_ = lean_ctor_get(v___x_3392_, 0);
lean_inc(v_a_3395_);
lean_dec_ref_known(v___x_3392_, 1);
v___y_3279_ = v_a_3298_;
v___y_3280_ = v___x_3357_;
v_a_3281_ = v_a_3395_;
goto v___jp_3278_;
}
}
}
else
{
uint8_t v___x_3396_; uint8_t v___x_3397_; uint8_t v___x_3398_; uint8_t v___x_3399_; lean_object* v___x_3400_; uint64_t v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; 
lean_dec(v_snd_3363_);
lean_dec_ref(v___f_3119_);
v___x_3396_ = 0;
v___x_3397_ = 1;
v___x_3398_ = 0;
v___x_3399_ = 2;
v___x_3400_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_3400_, 0, v___x_3396_);
lean_ctor_set_uint8(v___x_3400_, 1, v___x_3396_);
lean_ctor_set_uint8(v___x_3400_, 2, v___x_3396_);
lean_ctor_set_uint8(v___x_3400_, 3, v___x_3396_);
lean_ctor_set_uint8(v___x_3400_, 4, v___x_3396_);
lean_ctor_set_uint8(v___x_3400_, 5, v___x_3370_);
lean_ctor_set_uint8(v___x_3400_, 6, v___x_3370_);
lean_ctor_set_uint8(v___x_3400_, 7, v___x_3396_);
lean_ctor_set_uint8(v___x_3400_, 8, v___x_3370_);
lean_ctor_set_uint8(v___x_3400_, 9, v___x_3397_);
lean_ctor_set_uint8(v___x_3400_, 10, v___x_3398_);
lean_ctor_set_uint8(v___x_3400_, 11, v___x_3370_);
lean_ctor_set_uint8(v___x_3400_, 12, v___x_3370_);
lean_ctor_set_uint8(v___x_3400_, 13, v___x_3370_);
lean_ctor_set_uint8(v___x_3400_, 14, v___x_3399_);
lean_ctor_set_uint8(v___x_3400_, 15, v___x_3370_);
lean_ctor_set_uint8(v___x_3400_, 16, v___x_3370_);
lean_ctor_set_uint8(v___x_3400_, 17, v___x_3370_);
lean_ctor_set_uint8(v___x_3400_, 18, v___x_3370_);
lean_ctor_set_uint8(v___x_3400_, 19, v___x_3396_);
v___x_3401_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_3400_);
v___x_3402_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3402_, 0, v___x_3400_);
lean_ctor_set_uint64(v___x_3402_, sizeof(void*)*1, v___x_3401_);
v___x_3403_ = lean_unsigned_to_nat(0u);
v___x_3404_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4);
v___x_3405_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_3406_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3407_ = lean_box(0);
lean_inc(v___x_3118_);
v___x_3408_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3408_, 0, v___x_3402_);
lean_ctor_set(v___x_3408_, 1, v___x_3118_);
lean_ctor_set(v___x_3408_, 2, v___x_3405_);
lean_ctor_set(v___x_3408_, 3, v___x_3406_);
lean_ctor_set(v___x_3408_, 4, v___x_3407_);
lean_ctor_set(v___x_3408_, 5, v___x_3403_);
lean_ctor_set(v___x_3408_, 6, v___x_3407_);
lean_ctor_set_uint8(v___x_3408_, sizeof(void*)*7, v___x_3396_);
lean_ctor_set_uint8(v___x_3408_, sizeof(void*)*7 + 1, v___x_3396_);
lean_ctor_set_uint8(v___x_3408_, sizeof(void*)*7 + 2, v___x_3396_);
lean_ctor_set_uint8(v___x_3408_, sizeof(void*)*7 + 3, v___x_3370_);
v___x_3409_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3410_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3411_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3412_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3412_, 0, v___x_3409_);
lean_ctor_set(v___x_3412_, 1, v___x_3410_);
lean_ctor_set(v___x_3412_, 2, v___x_3118_);
lean_ctor_set(v___x_3412_, 3, v___x_3404_);
lean_ctor_set(v___x_3412_, 4, v___x_3411_);
v___x_3413_ = lean_st_mk_ref(v___x_3412_);
v___x_3414_ = l_Lean_Meta_getEqnsFor_x3f(v_fst_3362_, v___x_3408_, v___x_3413_, v___y_3121_, v___y_3122_);
lean_dec_ref_known(v___x_3408_, 7);
if (lean_obj_tag(v___x_3414_) == 0)
{
lean_object* v_a_3415_; lean_object* v___x_3416_; 
v_a_3415_ = lean_ctor_get(v___x_3414_, 0);
lean_inc(v_a_3415_);
lean_dec_ref_known(v___x_3414_, 1);
v___x_3416_ = lean_st_ref_get(v___x_3413_);
lean_dec(v___x_3413_);
lean_dec(v___x_3416_);
if (lean_obj_tag(v_a_3415_) == 0)
{
v___y_3284_ = v_a_3298_;
v___y_3285_ = v___x_3357_;
v_a_3286_ = v___x_3396_;
goto v___jp_3283_;
}
else
{
lean_dec_ref_known(v_a_3415_, 1);
v___y_3284_ = v_a_3298_;
v___y_3285_ = v___x_3357_;
v_a_3286_ = v___x_3370_;
goto v___jp_3283_;
}
}
else
{
lean_object* v_a_3417_; 
lean_dec(v___x_3413_);
v_a_3417_ = lean_ctor_get(v___x_3414_, 0);
lean_inc(v_a_3417_);
lean_dec_ref_known(v___x_3414_, 1);
v___y_3279_ = v_a_3298_;
v___y_3280_ = v___x_3357_;
v_a_3281_ = v_a_3417_;
goto v___jp_3278_;
}
}
}
}
else
{
lean_object* v___x_3418_; lean_object* v___x_3419_; 
lean_dec(v___x_3360_);
lean_dec(v_name_3120_);
lean_dec(v___x_3118_);
v___x_3418_ = lean_box(0);
lean_inc(v___y_3122_);
lean_inc_ref(v___y_3121_);
v___x_3419_ = lean_apply_4(v___f_3119_, v___x_3418_, v___y_3121_, v___y_3122_, lean_box(0));
v___y_3290_ = v_a_3298_;
v___y_3291_ = v___x_3357_;
v___y_3292_ = v___x_3419_;
goto v___jp_3289_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed(lean_object* v___x_3529_, lean_object* v___f_3530_, lean_object* v_name_3531_, lean_object* v___y_3532_, lean_object* v___y_3533_, lean_object* v___y_3534_){
_start:
{
lean_object* v_res_3535_; 
v_res_3535_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(v___x_3529_, v___f_3530_, v_name_3531_, v___y_3532_, v___y_3533_);
lean_dec(v___y_3533_);
lean_dec_ref(v___y_3532_);
return v_res_3535_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; 
v___x_3580_ = lean_unsigned_to_nat(3137104340u);
v___x_3581_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3582_ = l_Lean_Name_num___override(v___x_3581_, v___x_3580_);
return v___x_3582_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; 
v___x_3584_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3585_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3586_ = l_Lean_Name_str___override(v___x_3585_, v___x_3584_);
return v___x_3586_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; 
v___x_3588_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3589_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3590_ = l_Lean_Name_str___override(v___x_3589_, v___x_3588_);
return v___x_3590_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; 
v___x_3591_ = lean_unsigned_to_nat(2u);
v___x_3592_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3593_ = l_Lean_Name_num___override(v___x_3592_, v___x_3591_);
return v___x_3593_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_3595_; lean_object* v___x_3596_; 
v___f_3595_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3596_ = l_Lean_registerReservedNameAction(v___f_3595_);
if (lean_obj_tag(v___x_3596_) == 0)
{
lean_object* v___x_3597_; uint8_t v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; 
lean_dec_ref_known(v___x_3596_, 1);
v___x_3597_ = ((lean_object*)(l_Lean_Meta_saveEqnAffectingOptions___closed__8));
v___x_3598_ = 0;
v___x_3599_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3600_ = l_Lean_registerTraceClass(v___x_3597_, v___x_3598_, v___x_3599_);
return v___x_3600_;
}
else
{
return v___x_3596_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed(lean_object* v_a_3601_){
_start:
{
lean_object* v_res_3602_; 
v_res_3602_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_();
return v_res_3602_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_00_u03b1_3603_, lean_object* v_x_3604_, lean_object* v___y_3605_, lean_object* v___y_3606_){
_start:
{
lean_object* v___x_3608_; 
v___x_3608_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2___redArg(v_x_3604_);
return v___x_3608_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object* v_00_u03b1_3609_, lean_object* v_x_3610_, lean_object* v___y_3611_, lean_object* v___y_3612_, lean_object* v___y_3613_){
_start:
{
lean_object* v_res_3614_; 
v_res_3614_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2(v_00_u03b1_3609_, v_x_3610_, v___y_3611_, v___y_3612_);
lean_dec(v___y_3612_);
lean_dec_ref(v___y_3611_);
return v_res_3614_;
}
}
lean_object* runtime_initialize_Lean_Meta_Match_MatcherInfo(uint8_t builtin);
lean_object* runtime_initialize_Lean_DefEqAttrib(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_RecExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_LetToHave(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Eqns(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Match_MatcherInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DefEqAttrib(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_RecExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_LetToHave(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_backward_eqns_nonrecursive = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_backward_eqns_nonrecursive);
lean_dec_ref(res);
res = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_backward_eqns_deepRecursiveSplit = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_backward_eqns_deepRecursiveSplit);
lean_dec_ref(res);
l_Lean_Meta_eqnAffectingOptions = _init_l_Lean_Meta_eqnAffectingOptions();
lean_mark_persistent(l_Lean_Meta_eqnAffectingOptions);
res = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_eqnOptionsExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_eqnOptionsExt);
lean_dec_ref(res);
res = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3508565914____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFnsRef = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFnsRef);
lean_dec_ref(res);
l_Lean_Meta_instInhabitedEqnsExtState_default = _init_l_Lean_Meta_instInhabitedEqnsExtState_default();
lean_mark_persistent(l_Lean_Meta_instInhabitedEqnsExtState_default);
l_Lean_Meta_instInhabitedEqnsExtState = _init_l_Lean_Meta_instInhabitedEqnsExtState();
lean_mark_persistent(l_Lean_Meta_instInhabitedEqnsExtState);
res = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_222358314____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_eqnsExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_eqnsExt);
lean_dec_ref(res);
res = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_408789758____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Meta_Eqns_0__Lean_Meta_getUnfoldEqnFnsRef = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Meta_Eqns_0__Lean_Meta_getUnfoldEqnFnsRef);
lean_dec_ref(res);
res = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Eqns(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Match_MatcherInfo(uint8_t builtin);
lean_object* initialize_Lean_DefEqAttrib(uint8_t builtin);
lean_object* initialize_Lean_Meta_RecExt(uint8_t builtin);
lean_object* initialize_Lean_Meta_LetToHave(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Eqns(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Match_MatcherInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DefEqAttrib(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_RecExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_LetToHave(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Eqns(builtin);
}
#ifdef __cplusplus
}
#endif
