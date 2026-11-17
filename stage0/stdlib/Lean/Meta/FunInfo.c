// Lean compiler output
// Module: Lean.Meta.FunInfo
// Imports: public import Lean.Meta.InferType import Init.Data.Range.Polymorphic.Iterators
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Meta_instBEqInfoCacheKey_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
uint64_t lean_uint64_of_nat(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_level_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Level_hasMVar(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_instImpl_00___x40_Lean_Meta_Basic_373817412____hygCtx___hyg_13_;
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Environment_areRealizationsEnabledForConst(lean_object*, lean_object*);
lean_object* lean_io_get_num_heartbeats();
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* lean_mk_array(lean_object*, lean_object*);
uint16_t l_Lean_OptionFlags_ofOptions(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_realizeValue_realizeAndReport___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_set_heartbeats(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint64_t l_Lean_Level_hash(lean_object*);
lean_object* lean_task_get_own(lean_object*);
lean_object* lean_io_promise_new();
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_promise_resolve(lean_object*, lean_object*);
lean_object* l_IO_Promise_result_x21___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
uint8_t l_Lean_Environment_isImportedConst(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Language_SnapshotTask_finished___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Core_logSnapshotTask___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_setAllDiagRanges(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_TransparencyMode_lt(uint8_t, uint8_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFVarLocalDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
lean_object* l_Lean_getOutParamPositions_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isClass_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isExplicit(uint8_t);
lean_object* lean_find_expr(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instImpl_00___x40_Lean_Meta_Basic_383016249____hygCtx___hyg_24_;
lean_object* l_Lean_Meta_mkInfoCacheKey___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_hasMVar___boxed(lean_object*);
lean_object* l_Lean_Meta_instBEqInfoCacheKey_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instHashableInfoCacheKey___private__1___boxed(lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_any___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_realizeValue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey___closed__0 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey___closed__0_value;
LEAN_EXPORT uint64_t l_List_foldl___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash_spec__0(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey___closed__0 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey___closed__0_value;
static const lean_string_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__0_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__0_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__0_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value;
static const lean_ctor_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__1_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__0_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__1_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__1_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value;
static const lean_string_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__2_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__2_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__2_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value;
static const lean_ctor_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__3_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__1_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value),((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__2_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__3_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__3_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value;
static const lean_string_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__4_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__4_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__4_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value;
static const lean_ctor_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__5_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__3_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value),((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__4_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__5_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__5_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value;
static const lean_string_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__6_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "FunInfo"};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__6_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__6_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value;
static const lean_ctor_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__7_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__5_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value),((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__6_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value),LEAN_SCALAR_PTR_LITERAL(112, 52, 23, 53, 37, 12, 118, 217)}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__7_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__7_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value;
static const lean_ctor_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__8_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__7_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(73, 147, 169, 8, 188, 234, 221, 232)}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__8_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__8_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value;
static const lean_ctor_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__9_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__8_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value),((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__2_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value),LEAN_SCALAR_PTR_LITERAL(140, 0, 92, 209, 70, 2, 10, 135)}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__9_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__9_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value;
static const lean_ctor_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__10_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__9_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value),((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__4_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value),LEAN_SCALAR_PTR_LITERAL(176, 237, 136, 34, 252, 176, 16, 86)}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__10_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__10_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value;
static const lean_string_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__11_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "FunInfoEnvCacheKey"};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__11_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__11_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value;
static const lean_ctor_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__12_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__10_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value),((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__11_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value),LEAN_SCALAR_PTR_LITERAL(77, 18, 248, 164, 207, 212, 124, 226)}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__12_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__12_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__12_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instTypeNameFunInfoEnvCacheKey = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__12_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71__value;
static const lean_closure_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Level_hasMVar___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__0 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instBEqInfoCacheKey_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__1 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__1_value;
static const lean_closure_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instHashableInfoCacheKey___private__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__2 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___closed__0 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__1;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.Meta.FunInfo"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__2_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "_private.Lean.Meta.FunInfo.0.Lean.Meta.getFunInfoAux"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__3_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__4_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__5;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22_spec__23___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__0;
static lean_once_cell_t l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "trying to realize `"};
static const lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__0 = (const lean_object*)&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__0_value;
static const lean_string_object l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "` value but `enableRealizationsForConst` must be called for `"};
static const lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__1 = (const lean_object*)&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__1_value;
static const lean_string_object l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "` first"};
static const lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__2 = (const lean_object*)&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__2_value;
static const lean_string_object l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "Environment.realizeConst: `realizedImportedConsts` is empty"};
static const lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__3 = (const lean_object*)&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__3_value;
static const lean_ctor_object l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__3_value)}};
static const lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__4 = (const lean_object*)&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__2;
static lean_once_cell_t l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static uint16_t l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__3;
static const lean_string_object l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Lean.Meta.Basic"};
static const lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__4_value;
static const lean_string_object l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.Meta.realizeValue"};
static const lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__5_value;
static lean_once_cell_t l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__6;
static lean_once_cell_t l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__7;
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___boxed, .m_arity = 8, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___closed__0 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfoNArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FunInfo_getArity(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FunInfo_getArity___boxed(lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__1(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_3_; 
v___x_3_ = 1;
return v___x_3_;
}
else
{
uint8_t v___x_4_; 
v___x_4_ = 0;
return v___x_4_;
}
}
else
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_5_; 
v___x_5_ = 0;
return v___x_5_;
}
else
{
lean_object* v_val_6_; lean_object* v_val_7_; uint8_t v___x_8_; 
v_val_6_ = lean_ctor_get(v_x_1_, 0);
v_val_7_ = lean_ctor_get(v_x_2_, 0);
v___x_8_ = lean_nat_dec_eq(v_val_6_, v_val_7_);
return v___x_8_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__1___boxed(lean_object* v_x_9_, lean_object* v_x_10_){
_start:
{
uint8_t v_res_11_; lean_object* v_r_12_; 
v_res_11_ = l_instBEqOption_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__1(v_x_9_, v_x_10_);
lean_dec(v_x_10_);
lean_dec(v_x_9_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__0(lean_object* v_x_13_, lean_object* v_x_14_){
_start:
{
if (lean_obj_tag(v_x_13_) == 0)
{
if (lean_obj_tag(v_x_14_) == 0)
{
uint8_t v___x_15_; 
v___x_15_ = 1;
return v___x_15_;
}
else
{
uint8_t v___x_16_; 
v___x_16_ = 0;
return v___x_16_;
}
}
else
{
if (lean_obj_tag(v_x_14_) == 0)
{
uint8_t v___x_17_; 
v___x_17_ = 0;
return v___x_17_;
}
else
{
lean_object* v_head_18_; lean_object* v_tail_19_; lean_object* v_head_20_; lean_object* v_tail_21_; uint8_t v___x_22_; 
v_head_18_ = lean_ctor_get(v_x_13_, 0);
v_tail_19_ = lean_ctor_get(v_x_13_, 1);
v_head_20_ = lean_ctor_get(v_x_14_, 0);
v_tail_21_ = lean_ctor_get(v_x_14_, 1);
v___x_22_ = lean_level_eq(v_head_18_, v_head_20_);
if (v___x_22_ == 0)
{
return v___x_22_;
}
else
{
v_x_13_ = v_tail_19_;
v_x_14_ = v_tail_21_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__0___boxed(lean_object* v_x_24_, lean_object* v_x_25_){
_start:
{
uint8_t v_res_26_; lean_object* v_r_27_; 
v_res_26_ = l_List_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__0(v_x_24_, v_x_25_);
lean_dec(v_x_25_);
lean_dec(v_x_24_);
v_r_27_ = lean_box(v_res_26_);
return v_r_27_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq(lean_object* v_x_28_, lean_object* v_x_29_){
_start:
{
lean_object* v_c_30_; lean_object* v_ls_31_; lean_object* v_maxArgs_x3f_32_; lean_object* v_c_33_; lean_object* v_ls_34_; lean_object* v_maxArgs_x3f_35_; uint8_t v___x_36_; 
v_c_30_ = lean_ctor_get(v_x_28_, 0);
v_ls_31_ = lean_ctor_get(v_x_28_, 1);
v_maxArgs_x3f_32_ = lean_ctor_get(v_x_28_, 2);
v_c_33_ = lean_ctor_get(v_x_29_, 0);
v_ls_34_ = lean_ctor_get(v_x_29_, 1);
v_maxArgs_x3f_35_ = lean_ctor_get(v_x_29_, 2);
v___x_36_ = lean_name_eq(v_c_30_, v_c_33_);
if (v___x_36_ == 0)
{
return v___x_36_;
}
else
{
uint8_t v___x_37_; 
v___x_37_ = l_List_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__0(v_ls_31_, v_ls_34_);
if (v___x_37_ == 0)
{
return v___x_37_;
}
else
{
uint8_t v___x_38_; 
v___x_38_ = l_instBEqOption_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__1(v_maxArgs_x3f_32_, v_maxArgs_x3f_35_);
return v___x_38_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq___boxed(lean_object* v_x_39_, lean_object* v_x_40_){
_start:
{
uint8_t v_res_41_; lean_object* v_r_42_; 
v_res_41_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq(v_x_39_, v_x_40_);
lean_dec_ref(v_x_40_);
lean_dec_ref(v_x_39_);
v_r_42_ = lean_box(v_res_41_);
return v_r_42_;
}
}
LEAN_EXPORT uint64_t l_List_foldl___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash_spec__0(uint64_t v_x_45_, lean_object* v_x_46_){
_start:
{
if (lean_obj_tag(v_x_46_) == 0)
{
return v_x_45_;
}
else
{
lean_object* v_head_47_; lean_object* v_tail_48_; uint64_t v___x_49_; uint64_t v___x_50_; 
v_head_47_ = lean_ctor_get(v_x_46_, 0);
v_tail_48_ = lean_ctor_get(v_x_46_, 1);
v___x_49_ = l_Lean_Level_hash(v_head_47_);
v___x_50_ = lean_uint64_mix_hash(v_x_45_, v___x_49_);
v_x_45_ = v___x_50_;
v_x_46_ = v_tail_48_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash_spec__0___boxed(lean_object* v_x_52_, lean_object* v_x_53_){
_start:
{
uint64_t v_x_108__boxed_54_; uint64_t v_res_55_; lean_object* v_r_56_; 
v_x_108__boxed_54_ = lean_unbox_uint64(v_x_52_);
lean_dec_ref(v_x_52_);
v_res_55_ = l_List_foldl___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash_spec__0(v_x_108__boxed_54_, v_x_53_);
lean_dec(v_x_53_);
v_r_56_ = lean_box_uint64(v_res_55_);
return v_r_56_;
}
}
LEAN_EXPORT uint64_t l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash(lean_object* v_x_57_){
_start:
{
lean_object* v_c_58_; lean_object* v_ls_59_; lean_object* v_maxArgs_x3f_60_; uint64_t v___x_61_; uint64_t v___y_63_; 
v_c_58_ = lean_ctor_get(v_x_57_, 0);
v_ls_59_ = lean_ctor_get(v_x_57_, 1);
v_maxArgs_x3f_60_ = lean_ctor_get(v_x_57_, 2);
v___x_61_ = 0ULL;
if (lean_obj_tag(v_c_58_) == 0)
{
uint64_t v___x_75_; 
v___x_75_ = 1723ULL;
v___y_63_ = v___x_75_;
goto v___jp_62_;
}
else
{
uint64_t v_hash_76_; 
v_hash_76_ = lean_ctor_get_uint64(v_c_58_, sizeof(void*)*2);
v___y_63_ = v_hash_76_;
goto v___jp_62_;
}
v___jp_62_:
{
uint64_t v___x_64_; uint64_t v___x_65_; uint64_t v___x_66_; uint64_t v___x_67_; 
v___x_64_ = lean_uint64_mix_hash(v___x_61_, v___y_63_);
v___x_65_ = 7ULL;
v___x_66_ = l_List_foldl___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash_spec__0(v___x_65_, v_ls_59_);
v___x_67_ = lean_uint64_mix_hash(v___x_64_, v___x_66_);
if (lean_obj_tag(v_maxArgs_x3f_60_) == 0)
{
uint64_t v___x_68_; uint64_t v___x_69_; 
v___x_68_ = 11ULL;
v___x_69_ = lean_uint64_mix_hash(v___x_67_, v___x_68_);
return v___x_69_;
}
else
{
lean_object* v_val_70_; uint64_t v___x_71_; uint64_t v___x_72_; uint64_t v___x_73_; uint64_t v___x_74_; 
v_val_70_ = lean_ctor_get(v_maxArgs_x3f_60_, 0);
v___x_71_ = lean_uint64_of_nat(v_val_70_);
v___x_72_ = 13ULL;
v___x_73_ = lean_uint64_mix_hash(v___x_71_, v___x_72_);
v___x_74_ = lean_uint64_mix_hash(v___x_67_, v___x_73_);
return v___x_74_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash___boxed(lean_object* v_x_77_){
_start:
{
uint64_t v_res_78_; lean_object* v_r_79_; 
v_res_78_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash(v_x_77_);
lean_dec_ref(v_x_77_);
v_r_79_ = lean_box_uint64(v_res_78_);
return v_r_79_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache(lean_object* v_fn_116_, lean_object* v_maxArgs_x3f_117_, lean_object* v_k_118_, lean_object* v_a_119_, lean_object* v_a_120_, lean_object* v_a_121_, lean_object* v_a_122_){
_start:
{
lean_object* v___f_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v___f_124_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__0));
v___x_125_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__1));
v___x_126_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__2));
v___x_127_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey___closed__0));
v___x_128_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey___closed__0));
v___x_129_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71_));
v___x_130_ = l_Lean_Meta_instImpl_00___x40_Lean_Meta_Basic_383016249____hygCtx___hyg_24_;
lean_inc(v_maxArgs_x3f_117_);
lean_inc_ref(v_fn_116_);
v___x_131_ = l_Lean_Meta_mkInfoCacheKey___redArg(v_fn_116_, v_maxArgs_x3f_117_, v_a_119_);
if (lean_obj_tag(v___x_131_) == 0)
{
lean_object* v_a_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_194_; 
v_a_132_ = lean_ctor_get(v___x_131_, 0);
v_isSharedCheck_194_ = !lean_is_exclusive(v___x_131_);
if (v_isSharedCheck_194_ == 0)
{
v___x_134_ = v___x_131_;
v_isShared_135_ = v_isSharedCheck_194_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_a_132_);
lean_dec(v___x_131_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_194_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
lean_object* v_finfo_137_; lean_object* v___y_138_; lean_object* v___x_172_; lean_object* v_cache_173_; lean_object* v_funInfo_174_; lean_object* v___x_175_; 
v___x_172_ = lean_st_ref_get(v_a_120_);
v_cache_173_ = lean_ctor_get(v___x_172_, 1);
lean_inc_ref(v_cache_173_);
lean_dec(v___x_172_);
v_funInfo_174_ = lean_ctor_get(v_cache_173_, 1);
lean_inc_ref(v_funInfo_174_);
lean_dec_ref(v_cache_173_);
lean_inc(v_a_132_);
v___x_175_ = l_Lean_PersistentHashMap_find_x3f___redArg(v___x_125_, v___x_126_, v_funInfo_174_, v_a_132_);
lean_dec_ref(v_funInfo_174_);
if (lean_obj_tag(v___x_175_) == 0)
{
if (lean_obj_tag(v_fn_116_) == 4)
{
lean_object* v_declName_176_; lean_object* v_us_177_; uint8_t v___x_178_; 
v_declName_176_ = lean_ctor_get(v_fn_116_, 0);
lean_inc(v_declName_176_);
v_us_177_ = lean_ctor_get(v_fn_116_, 1);
lean_inc_n(v_us_177_, 2);
lean_dec_ref_known(v_fn_116_, 2);
v___x_178_ = l_List_any___redArg(v_us_177_, v___f_124_);
if (v___x_178_ == 0)
{
lean_object* v___x_179_; lean_object* v___x_180_; 
lean_inc(v_declName_176_);
v___x_179_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_179_, 0, v_declName_176_);
lean_ctor_set(v___x_179_, 1, v_us_177_);
lean_ctor_set(v___x_179_, 2, v_maxArgs_x3f_117_);
v___x_180_ = l_Lean_Meta_realizeValue___redArg(v___x_127_, v___x_128_, v___x_129_, v___x_130_, v_declName_176_, v___x_179_, v_k_118_, v_a_119_, v_a_120_, v_a_121_, v_a_122_);
if (lean_obj_tag(v___x_180_) == 0)
{
lean_object* v_a_181_; 
v_a_181_ = lean_ctor_get(v___x_180_, 0);
lean_inc(v_a_181_);
lean_dec_ref_known(v___x_180_, 1);
v_finfo_137_ = v_a_181_;
v___y_138_ = v_a_120_;
goto v___jp_136_;
}
else
{
lean_del_object(v___x_134_);
lean_dec(v_a_132_);
return v___x_180_;
}
}
else
{
lean_object* v___x_182_; 
lean_dec(v_us_177_);
lean_dec(v_declName_176_);
lean_dec(v_maxArgs_x3f_117_);
lean_inc(v_a_122_);
lean_inc_ref(v_a_121_);
lean_inc(v_a_120_);
lean_inc_ref(v_a_119_);
v___x_182_ = lean_apply_5(v_k_118_, v_a_119_, v_a_120_, v_a_121_, v_a_122_, lean_box(0));
if (lean_obj_tag(v___x_182_) == 0)
{
lean_object* v_a_183_; 
v_a_183_ = lean_ctor_get(v___x_182_, 0);
lean_inc(v_a_183_);
lean_dec_ref_known(v___x_182_, 1);
v_finfo_137_ = v_a_183_;
v___y_138_ = v_a_120_;
goto v___jp_136_;
}
else
{
lean_del_object(v___x_134_);
lean_dec(v_a_132_);
return v___x_182_;
}
}
}
else
{
lean_object* v___x_184_; 
lean_dec(v_maxArgs_x3f_117_);
lean_dec_ref(v_fn_116_);
lean_inc(v_a_122_);
lean_inc_ref(v_a_121_);
lean_inc(v_a_120_);
lean_inc_ref(v_a_119_);
v___x_184_ = lean_apply_5(v_k_118_, v_a_119_, v_a_120_, v_a_121_, v_a_122_, lean_box(0));
if (lean_obj_tag(v___x_184_) == 0)
{
lean_object* v_a_185_; 
v_a_185_ = lean_ctor_get(v___x_184_, 0);
lean_inc(v_a_185_);
lean_dec_ref_known(v___x_184_, 1);
v_finfo_137_ = v_a_185_;
v___y_138_ = v_a_120_;
goto v___jp_136_;
}
else
{
lean_del_object(v___x_134_);
lean_dec(v_a_132_);
return v___x_184_;
}
}
}
else
{
lean_object* v_val_186_; lean_object* v___x_188_; uint8_t v_isShared_189_; uint8_t v_isSharedCheck_193_; 
lean_del_object(v___x_134_);
lean_dec(v_a_132_);
lean_dec_ref(v_k_118_);
lean_dec(v_maxArgs_x3f_117_);
lean_dec_ref(v_fn_116_);
v_val_186_ = lean_ctor_get(v___x_175_, 0);
v_isSharedCheck_193_ = !lean_is_exclusive(v___x_175_);
if (v_isSharedCheck_193_ == 0)
{
v___x_188_ = v___x_175_;
v_isShared_189_ = v_isSharedCheck_193_;
goto v_resetjp_187_;
}
else
{
lean_inc(v_val_186_);
lean_dec(v___x_175_);
v___x_188_ = lean_box(0);
v_isShared_189_ = v_isSharedCheck_193_;
goto v_resetjp_187_;
}
v_resetjp_187_:
{
lean_object* v___x_191_; 
if (v_isShared_189_ == 0)
{
lean_ctor_set_tag(v___x_188_, 0);
v___x_191_ = v___x_188_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v_val_186_);
v___x_191_ = v_reuseFailAlloc_192_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
return v___x_191_;
}
}
}
v___jp_136_:
{
lean_object* v___x_139_; lean_object* v_cache_140_; lean_object* v_mctx_141_; lean_object* v_zetaDeltaFVarIds_142_; lean_object* v_postponed_143_; lean_object* v_diag_144_; lean_object* v___x_146_; uint8_t v_isShared_147_; uint8_t v_isSharedCheck_171_; 
v___x_139_ = lean_st_ref_take(v___y_138_);
v_cache_140_ = lean_ctor_get(v___x_139_, 1);
v_mctx_141_ = lean_ctor_get(v___x_139_, 0);
v_zetaDeltaFVarIds_142_ = lean_ctor_get(v___x_139_, 2);
v_postponed_143_ = lean_ctor_get(v___x_139_, 3);
v_diag_144_ = lean_ctor_get(v___x_139_, 4);
v_isSharedCheck_171_ = !lean_is_exclusive(v___x_139_);
if (v_isSharedCheck_171_ == 0)
{
v___x_146_ = v___x_139_;
v_isShared_147_ = v_isSharedCheck_171_;
goto v_resetjp_145_;
}
else
{
lean_inc(v_diag_144_);
lean_inc(v_postponed_143_);
lean_inc(v_zetaDeltaFVarIds_142_);
lean_inc(v_cache_140_);
lean_inc(v_mctx_141_);
lean_dec(v___x_139_);
v___x_146_ = lean_box(0);
v_isShared_147_ = v_isSharedCheck_171_;
goto v_resetjp_145_;
}
v_resetjp_145_:
{
lean_object* v_inferType_148_; lean_object* v_funInfo_149_; lean_object* v_synthInstance_150_; lean_object* v_whnf_151_; lean_object* v_defEqTrans_152_; lean_object* v_defEqPerm_153_; lean_object* v_isUnitLike_154_; lean_object* v_unfold_155_; lean_object* v___x_157_; uint8_t v_isShared_158_; uint8_t v_isSharedCheck_170_; 
v_inferType_148_ = lean_ctor_get(v_cache_140_, 0);
v_funInfo_149_ = lean_ctor_get(v_cache_140_, 1);
v_synthInstance_150_ = lean_ctor_get(v_cache_140_, 2);
v_whnf_151_ = lean_ctor_get(v_cache_140_, 3);
v_defEqTrans_152_ = lean_ctor_get(v_cache_140_, 4);
v_defEqPerm_153_ = lean_ctor_get(v_cache_140_, 5);
v_isUnitLike_154_ = lean_ctor_get(v_cache_140_, 6);
v_unfold_155_ = lean_ctor_get(v_cache_140_, 7);
v_isSharedCheck_170_ = !lean_is_exclusive(v_cache_140_);
if (v_isSharedCheck_170_ == 0)
{
v___x_157_ = v_cache_140_;
v_isShared_158_ = v_isSharedCheck_170_;
goto v_resetjp_156_;
}
else
{
lean_inc(v_unfold_155_);
lean_inc(v_isUnitLike_154_);
lean_inc(v_defEqPerm_153_);
lean_inc(v_defEqTrans_152_);
lean_inc(v_whnf_151_);
lean_inc(v_synthInstance_150_);
lean_inc(v_funInfo_149_);
lean_inc(v_inferType_148_);
lean_dec(v_cache_140_);
v___x_157_ = lean_box(0);
v_isShared_158_ = v_isSharedCheck_170_;
goto v_resetjp_156_;
}
v_resetjp_156_:
{
lean_object* v___x_159_; lean_object* v___x_161_; 
lean_inc_ref(v_finfo_137_);
v___x_159_ = l_Lean_PersistentHashMap_insert___redArg(v___x_125_, v___x_126_, v_funInfo_149_, v_a_132_, v_finfo_137_);
if (v_isShared_158_ == 0)
{
lean_ctor_set(v___x_157_, 1, v___x_159_);
v___x_161_ = v___x_157_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_169_; 
v_reuseFailAlloc_169_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_169_, 0, v_inferType_148_);
lean_ctor_set(v_reuseFailAlloc_169_, 1, v___x_159_);
lean_ctor_set(v_reuseFailAlloc_169_, 2, v_synthInstance_150_);
lean_ctor_set(v_reuseFailAlloc_169_, 3, v_whnf_151_);
lean_ctor_set(v_reuseFailAlloc_169_, 4, v_defEqTrans_152_);
lean_ctor_set(v_reuseFailAlloc_169_, 5, v_defEqPerm_153_);
lean_ctor_set(v_reuseFailAlloc_169_, 6, v_isUnitLike_154_);
lean_ctor_set(v_reuseFailAlloc_169_, 7, v_unfold_155_);
v___x_161_ = v_reuseFailAlloc_169_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
lean_object* v___x_163_; 
if (v_isShared_147_ == 0)
{
lean_ctor_set(v___x_146_, 1, v___x_161_);
v___x_163_ = v___x_146_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v_mctx_141_);
lean_ctor_set(v_reuseFailAlloc_168_, 1, v___x_161_);
lean_ctor_set(v_reuseFailAlloc_168_, 2, v_zetaDeltaFVarIds_142_);
lean_ctor_set(v_reuseFailAlloc_168_, 3, v_postponed_143_);
lean_ctor_set(v_reuseFailAlloc_168_, 4, v_diag_144_);
v___x_163_ = v_reuseFailAlloc_168_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
lean_object* v___x_164_; lean_object* v___x_166_; 
v___x_164_ = lean_st_ref_put(v___y_138_, v___x_163_);
if (v_isShared_135_ == 0)
{
lean_ctor_set(v___x_134_, 0, v_finfo_137_);
v___x_166_ = v___x_134_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_167_; 
v_reuseFailAlloc_167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_167_, 0, v_finfo_137_);
v___x_166_ = v_reuseFailAlloc_167_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
return v___x_166_;
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
lean_object* v_a_195_; lean_object* v___x_197_; uint8_t v_isShared_198_; uint8_t v_isSharedCheck_202_; 
lean_dec_ref(v_k_118_);
lean_dec(v_maxArgs_x3f_117_);
lean_dec_ref(v_fn_116_);
v_a_195_ = lean_ctor_get(v___x_131_, 0);
v_isSharedCheck_202_ = !lean_is_exclusive(v___x_131_);
if (v_isSharedCheck_202_ == 0)
{
v___x_197_ = v___x_131_;
v_isShared_198_ = v_isSharedCheck_202_;
goto v_resetjp_196_;
}
else
{
lean_inc(v_a_195_);
lean_dec(v___x_131_);
v___x_197_ = lean_box(0);
v_isShared_198_ = v_isSharedCheck_202_;
goto v_resetjp_196_;
}
v_resetjp_196_:
{
lean_object* v___x_200_; 
if (v_isShared_198_ == 0)
{
v___x_200_ = v___x_197_;
goto v_reusejp_199_;
}
else
{
lean_object* v_reuseFailAlloc_201_; 
v_reuseFailAlloc_201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_201_, 0, v_a_195_);
v___x_200_ = v_reuseFailAlloc_201_;
goto v_reusejp_199_;
}
v_reusejp_199_:
{
return v___x_200_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___boxed(lean_object* v_fn_203_, lean_object* v_maxArgs_x3f_204_, lean_object* v_k_205_, lean_object* v_a_206_, lean_object* v_a_207_, lean_object* v_a_208_, lean_object* v_a_209_, lean_object* v_a_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache(v_fn_203_, v_maxArgs_x3f_204_, v_k_205_, v_a_206_, v_a_207_, v_a_208_, v_a_209_);
lean_dec(v_a_209_);
lean_dec_ref(v_a_208_);
lean_dec(v_a_207_);
lean_dec_ref(v_a_206_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___redArg(lean_object* v_e_212_, lean_object* v_deps_213_, lean_object* v_k_214_){
_start:
{
uint8_t v___x_215_; 
v___x_215_ = l_Lean_Expr_hasFVar(v_e_212_);
if (v___x_215_ == 0)
{
lean_dec(v_k_214_);
return v_deps_213_;
}
else
{
lean_object* v___x_216_; 
v___x_216_ = lean_apply_1(v_k_214_, v_deps_213_);
return v___x_216_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___redArg___boxed(lean_object* v_e_217_, lean_object* v_deps_218_, lean_object* v_k_219_){
_start:
{
lean_object* v_res_220_; 
v_res_220_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___redArg(v_e_217_, v_deps_218_, v_k_219_);
lean_dec_ref(v_e_217_);
return v_res_220_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar(lean_object* v_00_u03b1_221_, lean_object* v_e_222_, lean_object* v_deps_223_, lean_object* v_k_224_){
_start:
{
uint8_t v___x_225_; 
v___x_225_ = l_Lean_Expr_hasFVar(v_e_222_);
if (v___x_225_ == 0)
{
lean_dec(v_k_224_);
return v_deps_223_;
}
else
{
lean_object* v___x_226_; 
v___x_226_ = lean_apply_1(v_k_224_, v_deps_223_);
return v___x_226_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___boxed(lean_object* v_00_u03b1_227_, lean_object* v_e_228_, lean_object* v_deps_229_, lean_object* v_k_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar(v_00_u03b1_227_, v_e_228_, v_deps_229_, v_k_230_);
lean_dec_ref(v_e_228_);
return v_res_231_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0_spec__1(lean_object* v_xs_232_, lean_object* v_v_233_, lean_object* v_i_234_){
_start:
{
lean_object* v___x_235_; uint8_t v___x_236_; 
v___x_235_ = lean_array_get_size(v_xs_232_);
v___x_236_ = lean_nat_dec_lt(v_i_234_, v___x_235_);
if (v___x_236_ == 0)
{
lean_object* v___x_237_; 
lean_dec(v_i_234_);
v___x_237_ = lean_box(0);
return v___x_237_;
}
else
{
lean_object* v___x_238_; uint8_t v___x_239_; 
v___x_238_ = lean_array_fget_borrowed(v_xs_232_, v_i_234_);
v___x_239_ = lean_expr_eqv(v___x_238_, v_v_233_);
if (v___x_239_ == 0)
{
lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_240_ = lean_unsigned_to_nat(1u);
v___x_241_ = lean_nat_add(v_i_234_, v___x_240_);
lean_dec(v_i_234_);
v_i_234_ = v___x_241_;
goto _start;
}
else
{
lean_object* v___x_243_; 
v___x_243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_243_, 0, v_i_234_);
return v___x_243_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0_spec__1___boxed(lean_object* v_xs_244_, lean_object* v_v_245_, lean_object* v_i_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0_spec__1(v_xs_244_, v_v_245_, v_i_246_);
lean_dec_ref(v_v_245_);
lean_dec_ref(v_xs_244_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0(lean_object* v_xs_248_, lean_object* v_v_249_){
_start:
{
lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_250_ = lean_unsigned_to_nat(0u);
v___x_251_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0_spec__1(v_xs_248_, v_v_249_, v___x_250_);
return v___x_251_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0___boxed(lean_object* v_xs_252_, lean_object* v_v_253_){
_start:
{
lean_object* v_res_254_; 
v_res_254_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0(v_xs_252_, v_v_253_);
lean_dec_ref(v_v_253_);
lean_dec_ref(v_xs_252_);
return v_res_254_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0(lean_object* v_xs_255_, lean_object* v_v_256_){
_start:
{
lean_object* v___x_257_; 
v___x_257_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0(v_xs_255_, v_v_256_);
if (lean_obj_tag(v___x_257_) == 0)
{
lean_object* v___x_258_; 
v___x_258_ = lean_box(0);
return v___x_258_;
}
else
{
lean_object* v_val_259_; lean_object* v___x_261_; uint8_t v_isShared_262_; uint8_t v_isSharedCheck_266_; 
v_val_259_ = lean_ctor_get(v___x_257_, 0);
v_isSharedCheck_266_ = !lean_is_exclusive(v___x_257_);
if (v_isSharedCheck_266_ == 0)
{
v___x_261_ = v___x_257_;
v_isShared_262_ = v_isSharedCheck_266_;
goto v_resetjp_260_;
}
else
{
lean_inc(v_val_259_);
lean_dec(v___x_257_);
v___x_261_ = lean_box(0);
v_isShared_262_ = v_isSharedCheck_266_;
goto v_resetjp_260_;
}
v_resetjp_260_:
{
lean_object* v___x_264_; 
if (v_isShared_262_ == 0)
{
v___x_264_ = v___x_261_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v_val_259_);
v___x_264_ = v_reuseFailAlloc_265_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
return v___x_264_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0___boxed(lean_object* v_xs_267_, lean_object* v_v_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0(v_xs_267_, v_v_268_);
lean_dec_ref(v_v_268_);
lean_dec_ref(v_xs_267_);
return v_res_269_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1_spec__2(lean_object* v_a_270_, lean_object* v_as_271_, size_t v_i_272_, size_t v_stop_273_){
_start:
{
uint8_t v___x_274_; 
v___x_274_ = lean_usize_dec_eq(v_i_272_, v_stop_273_);
if (v___x_274_ == 0)
{
lean_object* v___x_275_; uint8_t v___x_276_; 
v___x_275_ = lean_array_uget_borrowed(v_as_271_, v_i_272_);
v___x_276_ = lean_nat_dec_eq(v_a_270_, v___x_275_);
if (v___x_276_ == 0)
{
size_t v___x_277_; size_t v___x_278_; 
v___x_277_ = ((size_t)1ULL);
v___x_278_ = lean_usize_add(v_i_272_, v___x_277_);
v_i_272_ = v___x_278_;
goto _start;
}
else
{
return v___x_276_;
}
}
else
{
uint8_t v___x_280_; 
v___x_280_ = 0;
return v___x_280_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1_spec__2___boxed(lean_object* v_a_281_, lean_object* v_as_282_, lean_object* v_i_283_, lean_object* v_stop_284_){
_start:
{
size_t v_i_boxed_285_; size_t v_stop_boxed_286_; uint8_t v_res_287_; lean_object* v_r_288_; 
v_i_boxed_285_ = lean_unbox_usize(v_i_283_);
lean_dec(v_i_283_);
v_stop_boxed_286_ = lean_unbox_usize(v_stop_284_);
lean_dec(v_stop_284_);
v_res_287_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1_spec__2(v_a_281_, v_as_282_, v_i_boxed_285_, v_stop_boxed_286_);
lean_dec_ref(v_as_282_);
lean_dec(v_a_281_);
v_r_288_ = lean_box(v_res_287_);
return v_r_288_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1(lean_object* v_as_289_, lean_object* v_a_290_){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; uint8_t v___x_293_; 
v___x_291_ = lean_unsigned_to_nat(0u);
v___x_292_ = lean_array_get_size(v_as_289_);
v___x_293_ = lean_nat_dec_lt(v___x_291_, v___x_292_);
if (v___x_293_ == 0)
{
return v___x_293_;
}
else
{
size_t v___x_294_; size_t v___x_295_; uint8_t v___x_296_; 
v___x_294_ = ((size_t)0ULL);
v___x_295_ = lean_usize_of_nat(v___x_292_);
v___x_296_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1_spec__2(v_a_290_, v_as_289_, v___x_294_, v___x_295_);
return v___x_296_;
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1___boxed(lean_object* v_as_297_, lean_object* v_a_298_){
_start:
{
uint8_t v_res_299_; lean_object* v_r_300_; 
v_res_299_ = l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1(v_as_297_, v_a_298_);
lean_dec(v_a_298_);
lean_dec_ref(v_as_297_);
v_r_300_ = lean_box(v_res_299_);
return v_r_300_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(lean_object* v_fvars_301_, lean_object* v_e_302_, lean_object* v_deps_303_){
_start:
{
lean_object* v_d_305_; lean_object* v_b_306_; 
switch(lean_obj_tag(v_e_302_))
{
case 5:
{
lean_object* v_fn_310_; lean_object* v_arg_311_; uint8_t v___x_312_; 
v_fn_310_ = lean_ctor_get(v_e_302_, 0);
v_arg_311_ = lean_ctor_get(v_e_302_, 1);
v___x_312_ = l_Lean_Expr_hasFVar(v_e_302_);
if (v___x_312_ == 0)
{
return v_deps_303_;
}
else
{
lean_object* v___x_313_; 
v___x_313_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(v_fvars_301_, v_fn_310_, v_deps_303_);
v_e_302_ = v_arg_311_;
v_deps_303_ = v___x_313_;
goto _start;
}
}
case 7:
{
lean_object* v_binderType_315_; lean_object* v_body_316_; 
v_binderType_315_ = lean_ctor_get(v_e_302_, 1);
v_body_316_ = lean_ctor_get(v_e_302_, 2);
v_d_305_ = v_binderType_315_;
v_b_306_ = v_body_316_;
goto v___jp_304_;
}
case 6:
{
lean_object* v_binderType_317_; lean_object* v_body_318_; 
v_binderType_317_ = lean_ctor_get(v_e_302_, 1);
v_body_318_ = lean_ctor_get(v_e_302_, 2);
v_d_305_ = v_binderType_317_;
v_b_306_ = v_body_318_;
goto v___jp_304_;
}
case 8:
{
lean_object* v_type_319_; lean_object* v_value_320_; lean_object* v_body_321_; uint8_t v___x_322_; 
v_type_319_ = lean_ctor_get(v_e_302_, 1);
v_value_320_ = lean_ctor_get(v_e_302_, 2);
v_body_321_ = lean_ctor_get(v_e_302_, 3);
v___x_322_ = l_Lean_Expr_hasFVar(v_e_302_);
if (v___x_322_ == 0)
{
return v_deps_303_;
}
else
{
lean_object* v___x_323_; lean_object* v___x_324_; 
v___x_323_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(v_fvars_301_, v_type_319_, v_deps_303_);
v___x_324_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(v_fvars_301_, v_value_320_, v___x_323_);
v_e_302_ = v_body_321_;
v_deps_303_ = v___x_324_;
goto _start;
}
}
case 11:
{
lean_object* v_struct_326_; 
v_struct_326_ = lean_ctor_get(v_e_302_, 2);
v_e_302_ = v_struct_326_;
goto _start;
}
case 10:
{
lean_object* v_expr_328_; 
v_expr_328_ = lean_ctor_get(v_e_302_, 1);
v_e_302_ = v_expr_328_;
goto _start;
}
case 1:
{
lean_object* v___x_330_; 
v___x_330_ = l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0(v_fvars_301_, v_e_302_);
if (lean_obj_tag(v___x_330_) == 0)
{
return v_deps_303_;
}
else
{
lean_object* v_val_331_; uint8_t v___x_332_; 
v_val_331_ = lean_ctor_get(v___x_330_, 0);
lean_inc(v_val_331_);
lean_dec_ref_known(v___x_330_, 1);
v___x_332_ = l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1(v_deps_303_, v_val_331_);
if (v___x_332_ == 0)
{
lean_object* v___x_333_; 
v___x_333_ = lean_array_push(v_deps_303_, v_val_331_);
return v___x_333_;
}
else
{
lean_dec(v_val_331_);
return v_deps_303_;
}
}
}
default: 
{
return v_deps_303_;
}
}
v___jp_304_:
{
uint8_t v___x_307_; 
v___x_307_ = l_Lean_Expr_hasFVar(v_e_302_);
if (v___x_307_ == 0)
{
return v_deps_303_;
}
else
{
lean_object* v___x_308_; 
v___x_308_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(v_fvars_301_, v_d_305_, v_deps_303_);
v_e_302_ = v_b_306_;
v_deps_303_ = v___x_308_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit___boxed(lean_object* v_fvars_334_, lean_object* v_e_335_, lean_object* v_deps_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(v_fvars_334_, v_e_335_, v_deps_336_);
lean_dec_ref(v_e_335_);
lean_dec_ref(v_fvars_334_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg(lean_object* v_hi_338_, lean_object* v_pivot_339_, lean_object* v_as_340_, lean_object* v_i_341_, lean_object* v_k_342_){
_start:
{
uint8_t v___x_343_; 
v___x_343_ = lean_nat_dec_lt(v_k_342_, v_hi_338_);
if (v___x_343_ == 0)
{
lean_object* v___x_344_; lean_object* v___x_345_; 
lean_dec(v_k_342_);
v___x_344_ = lean_array_fswap(v_as_340_, v_i_341_, v_hi_338_);
v___x_345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_345_, 0, v_i_341_);
lean_ctor_set(v___x_345_, 1, v___x_344_);
return v___x_345_;
}
else
{
lean_object* v___x_346_; uint8_t v___x_347_; 
v___x_346_ = lean_array_fget_borrowed(v_as_340_, v_k_342_);
v___x_347_ = lean_nat_dec_lt(v___x_346_, v_pivot_339_);
if (v___x_347_ == 0)
{
lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_348_ = lean_unsigned_to_nat(1u);
v___x_349_ = lean_nat_add(v_k_342_, v___x_348_);
lean_dec(v_k_342_);
v_k_342_ = v___x_349_;
goto _start;
}
else
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_351_ = lean_array_fswap(v_as_340_, v_i_341_, v_k_342_);
v___x_352_ = lean_unsigned_to_nat(1u);
v___x_353_ = lean_nat_add(v_i_341_, v___x_352_);
lean_dec(v_i_341_);
v___x_354_ = lean_nat_add(v_k_342_, v___x_352_);
lean_dec(v_k_342_);
v_as_340_ = v___x_351_;
v_i_341_ = v___x_353_;
v_k_342_ = v___x_354_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg___boxed(lean_object* v_hi_356_, lean_object* v_pivot_357_, lean_object* v_as_358_, lean_object* v_i_359_, lean_object* v_k_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg(v_hi_356_, v_pivot_357_, v_as_358_, v_i_359_, v_k_360_);
lean_dec(v_pivot_357_);
lean_dec(v_hi_356_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(lean_object* v_n_362_, lean_object* v_as_363_, lean_object* v_lo_364_, lean_object* v_hi_365_){
_start:
{
lean_object* v___y_367_; uint8_t v___x_377_; 
v___x_377_ = lean_nat_dec_lt(v_lo_364_, v_hi_365_);
if (v___x_377_ == 0)
{
lean_dec(v_lo_364_);
return v_as_363_;
}
else
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v_mid_380_; lean_object* v___y_382_; lean_object* v___y_388_; lean_object* v___x_393_; lean_object* v___x_394_; uint8_t v___x_395_; 
v___x_378_ = lean_nat_add(v_lo_364_, v_hi_365_);
v___x_379_ = lean_unsigned_to_nat(1u);
v_mid_380_ = lean_nat_shiftr(v___x_378_, v___x_379_);
lean_dec(v___x_378_);
v___x_393_ = lean_array_fget_borrowed(v_as_363_, v_mid_380_);
v___x_394_ = lean_array_fget_borrowed(v_as_363_, v_lo_364_);
v___x_395_ = lean_nat_dec_lt(v___x_393_, v___x_394_);
if (v___x_395_ == 0)
{
v___y_388_ = v_as_363_;
goto v___jp_387_;
}
else
{
lean_object* v___x_396_; 
v___x_396_ = lean_array_fswap(v_as_363_, v_lo_364_, v_mid_380_);
v___y_388_ = v___x_396_;
goto v___jp_387_;
}
v___jp_381_:
{
lean_object* v___x_383_; lean_object* v___x_384_; uint8_t v___x_385_; 
v___x_383_ = lean_array_fget_borrowed(v___y_382_, v_mid_380_);
v___x_384_ = lean_array_fget_borrowed(v___y_382_, v_hi_365_);
v___x_385_ = lean_nat_dec_lt(v___x_383_, v___x_384_);
if (v___x_385_ == 0)
{
lean_dec(v_mid_380_);
v___y_367_ = v___y_382_;
goto v___jp_366_;
}
else
{
lean_object* v___x_386_; 
v___x_386_ = lean_array_fswap(v___y_382_, v_mid_380_, v_hi_365_);
lean_dec(v_mid_380_);
v___y_367_ = v___x_386_;
goto v___jp_366_;
}
}
v___jp_387_:
{
lean_object* v___x_389_; lean_object* v___x_390_; uint8_t v___x_391_; 
v___x_389_ = lean_array_fget_borrowed(v___y_388_, v_hi_365_);
v___x_390_ = lean_array_fget_borrowed(v___y_388_, v_lo_364_);
v___x_391_ = lean_nat_dec_lt(v___x_389_, v___x_390_);
if (v___x_391_ == 0)
{
v___y_382_ = v___y_388_;
goto v___jp_381_;
}
else
{
lean_object* v___x_392_; 
v___x_392_ = lean_array_fswap(v___y_388_, v_lo_364_, v_hi_365_);
v___y_382_ = v___x_392_;
goto v___jp_381_;
}
}
}
v___jp_366_:
{
lean_object* v_pivot_368_; lean_object* v___x_369_; lean_object* v_fst_370_; lean_object* v_snd_371_; uint8_t v___x_372_; 
v_pivot_368_ = lean_array_fget(v___y_367_, v_hi_365_);
lean_inc_n(v_lo_364_, 2);
v___x_369_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg(v_hi_365_, v_pivot_368_, v___y_367_, v_lo_364_, v_lo_364_);
lean_dec(v_pivot_368_);
v_fst_370_ = lean_ctor_get(v___x_369_, 0);
lean_inc(v_fst_370_);
v_snd_371_ = lean_ctor_get(v___x_369_, 1);
lean_inc(v_snd_371_);
lean_dec_ref(v___x_369_);
v___x_372_ = lean_nat_dec_le(v_hi_365_, v_fst_370_);
if (v___x_372_ == 0)
{
lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_373_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(v_n_362_, v_snd_371_, v_lo_364_, v_fst_370_);
v___x_374_ = lean_unsigned_to_nat(1u);
v___x_375_ = lean_nat_add(v_fst_370_, v___x_374_);
lean_dec(v_fst_370_);
v_as_363_ = v___x_373_;
v_lo_364_ = v___x_375_;
goto _start;
}
else
{
lean_dec(v_fst_370_);
lean_dec(v_lo_364_);
return v_snd_371_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg___boxed(lean_object* v_n_397_, lean_object* v_as_398_, lean_object* v_lo_399_, lean_object* v_hi_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(v_n_397_, v_as_398_, v_lo_399_, v_hi_400_);
lean_dec(v_hi_400_);
lean_dec(v_n_397_);
return v_res_401_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps(lean_object* v_fvars_404_, lean_object* v_e_405_){
_start:
{
lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v_deps_408_; lean_object* v___x_409_; uint8_t v___x_410_; 
v___x_406_ = lean_unsigned_to_nat(0u);
v___x_407_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___closed__0));
v_deps_408_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(v_fvars_404_, v_e_405_, v___x_407_);
v___x_409_ = lean_array_get_size(v_deps_408_);
v___x_410_ = lean_nat_dec_eq(v___x_409_, v___x_406_);
if (v___x_410_ == 0)
{
lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___y_414_; uint8_t v___x_418_; 
v___x_411_ = lean_unsigned_to_nat(1u);
v___x_412_ = lean_nat_sub(v___x_409_, v___x_411_);
v___x_418_ = lean_nat_dec_le(v___x_406_, v___x_412_);
if (v___x_418_ == 0)
{
lean_inc(v___x_412_);
v___y_414_ = v___x_412_;
goto v___jp_413_;
}
else
{
v___y_414_ = v___x_406_;
goto v___jp_413_;
}
v___jp_413_:
{
uint8_t v___x_415_; 
v___x_415_ = lean_nat_dec_le(v___y_414_, v___x_412_);
if (v___x_415_ == 0)
{
lean_object* v___x_416_; 
lean_dec(v___x_412_);
lean_inc(v___y_414_);
v___x_416_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(v___x_409_, v_deps_408_, v___y_414_, v___y_414_);
lean_dec(v___y_414_);
return v___x_416_;
}
else
{
lean_object* v___x_417_; 
v___x_417_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(v___x_409_, v_deps_408_, v___y_414_, v___x_412_);
lean_dec(v___x_412_);
return v___x_417_;
}
}
}
else
{
return v_deps_408_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___boxed(lean_object* v_fvars_419_, lean_object* v_e_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps(v_fvars_419_, v_e_420_);
lean_dec_ref(v_e_420_);
lean_dec_ref(v_fvars_419_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0(lean_object* v_n_422_, lean_object* v_as_423_, lean_object* v_lo_424_, lean_object* v_hi_425_, lean_object* v_w_426_, lean_object* v_hlo_427_, lean_object* v_hhi_428_){
_start:
{
lean_object* v___x_429_; 
v___x_429_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(v_n_422_, v_as_423_, v_lo_424_, v_hi_425_);
return v___x_429_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___boxed(lean_object* v_n_430_, lean_object* v_as_431_, lean_object* v_lo_432_, lean_object* v_hi_433_, lean_object* v_w_434_, lean_object* v_hlo_435_, lean_object* v_hhi_436_){
_start:
{
lean_object* v_res_437_; 
v_res_437_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0(v_n_430_, v_as_431_, v_lo_432_, v_hi_433_, v_w_434_, v_hlo_435_, v_hhi_436_);
lean_dec(v_hi_433_);
lean_dec(v_n_430_);
return v_res_437_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0(lean_object* v_n_438_, lean_object* v_lo_439_, lean_object* v_hi_440_, lean_object* v_hhi_441_, lean_object* v_pivot_442_, lean_object* v_as_443_, lean_object* v_i_444_, lean_object* v_k_445_, lean_object* v_ilo_446_, lean_object* v_ik_447_, lean_object* v_w_448_){
_start:
{
lean_object* v___x_449_; 
v___x_449_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg(v_hi_440_, v_pivot_442_, v_as_443_, v_i_444_, v_k_445_);
return v___x_449_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___boxed(lean_object* v_n_450_, lean_object* v_lo_451_, lean_object* v_hi_452_, lean_object* v_hhi_453_, lean_object* v_pivot_454_, lean_object* v_as_455_, lean_object* v_i_456_, lean_object* v_k_457_, lean_object* v_ilo_458_, lean_object* v_ik_459_, lean_object* v_w_460_){
_start:
{
lean_object* v_res_461_; 
v_res_461_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0(v_n_450_, v_lo_451_, v_hi_452_, v_hhi_453_, v_pivot_454_, v_as_455_, v_i_456_, v_k_457_, v_ilo_458_, v_ik_459_, v_w_460_);
lean_dec(v_pivot_454_);
lean_dec(v_hi_452_);
lean_dec(v_lo_451_);
lean_dec(v_n_450_);
return v_res_461_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg(lean_object* v_backDeps_462_, size_t v_sz_463_, size_t v_i_464_, lean_object* v_bs_465_){
_start:
{
uint8_t v___x_466_; 
v___x_466_ = lean_usize_dec_lt(v_i_464_, v_sz_463_);
if (v___x_466_ == 0)
{
return v_bs_465_;
}
else
{
lean_object* v_v_467_; uint8_t v_binderInfo_468_; uint8_t v_hasFwdDeps_469_; lean_object* v_backDeps_470_; uint8_t v_isProp_471_; uint8_t v_isDecInst_472_; uint8_t v_isInstance_473_; uint8_t v_higherOrderOutParam_474_; uint8_t v_dependsOnHigherOrderOutParam_475_; lean_object* v___x_476_; lean_object* v_bs_x27_477_; lean_object* v___y_479_; 
v_v_467_ = lean_array_uget(v_bs_465_, v_i_464_);
v_binderInfo_468_ = lean_ctor_get_uint8(v_v_467_, sizeof(void*)*1);
v_hasFwdDeps_469_ = lean_ctor_get_uint8(v_v_467_, sizeof(void*)*1 + 1);
v_backDeps_470_ = lean_ctor_get(v_v_467_, 0);
v_isProp_471_ = lean_ctor_get_uint8(v_v_467_, sizeof(void*)*1 + 2);
v_isDecInst_472_ = lean_ctor_get_uint8(v_v_467_, sizeof(void*)*1 + 3);
v_isInstance_473_ = lean_ctor_get_uint8(v_v_467_, sizeof(void*)*1 + 4);
v_higherOrderOutParam_474_ = lean_ctor_get_uint8(v_v_467_, sizeof(void*)*1 + 5);
v_dependsOnHigherOrderOutParam_475_ = lean_ctor_get_uint8(v_v_467_, sizeof(void*)*1 + 6);
v___x_476_ = lean_unsigned_to_nat(0u);
v_bs_x27_477_ = lean_array_uset(v_bs_465_, v_i_464_, v___x_476_);
if (v_hasFwdDeps_469_ == 0)
{
lean_object* v___x_484_; uint8_t v___x_485_; 
v___x_484_ = lean_usize_to_nat(v_i_464_);
v___x_485_ = l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1(v_backDeps_462_, v___x_484_);
lean_dec(v___x_484_);
if (v___x_485_ == 0)
{
v___y_479_ = v_v_467_;
goto v___jp_478_;
}
else
{
lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_492_; 
lean_inc_ref(v_backDeps_470_);
v_isSharedCheck_492_ = !lean_is_exclusive(v_v_467_);
if (v_isSharedCheck_492_ == 0)
{
lean_object* v_unused_493_; 
v_unused_493_ = lean_ctor_get(v_v_467_, 0);
lean_dec(v_unused_493_);
v___x_487_ = v_v_467_;
v_isShared_488_ = v_isSharedCheck_492_;
goto v_resetjp_486_;
}
else
{
lean_dec(v_v_467_);
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
v_reuseFailAlloc_491_ = lean_alloc_ctor(0, 1, 7);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v_backDeps_470_);
lean_ctor_set_uint8(v_reuseFailAlloc_491_, sizeof(void*)*1, v_binderInfo_468_);
lean_ctor_set_uint8(v_reuseFailAlloc_491_, sizeof(void*)*1 + 2, v_isProp_471_);
lean_ctor_set_uint8(v_reuseFailAlloc_491_, sizeof(void*)*1 + 3, v_isDecInst_472_);
lean_ctor_set_uint8(v_reuseFailAlloc_491_, sizeof(void*)*1 + 4, v_isInstance_473_);
lean_ctor_set_uint8(v_reuseFailAlloc_491_, sizeof(void*)*1 + 5, v_higherOrderOutParam_474_);
lean_ctor_set_uint8(v_reuseFailAlloc_491_, sizeof(void*)*1 + 6, v_dependsOnHigherOrderOutParam_475_);
v___x_490_ = v_reuseFailAlloc_491_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
lean_ctor_set_uint8(v___x_490_, sizeof(void*)*1 + 1, v___x_485_);
v___y_479_ = v___x_490_;
goto v___jp_478_;
}
}
}
}
else
{
v___y_479_ = v_v_467_;
goto v___jp_478_;
}
v___jp_478_:
{
size_t v___x_480_; size_t v___x_481_; lean_object* v___x_482_; 
v___x_480_ = ((size_t)1ULL);
v___x_481_ = lean_usize_add(v_i_464_, v___x_480_);
v___x_482_ = lean_array_uset(v_bs_x27_477_, v_i_464_, v___y_479_);
v_i_464_ = v___x_481_;
v_bs_465_ = v___x_482_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg___boxed(lean_object* v_backDeps_494_, lean_object* v_sz_495_, lean_object* v_i_496_, lean_object* v_bs_497_){
_start:
{
size_t v_sz_boxed_498_; size_t v_i_boxed_499_; lean_object* v_res_500_; 
v_sz_boxed_498_ = lean_unbox_usize(v_sz_495_);
lean_dec(v_sz_495_);
v_i_boxed_499_ = lean_unbox_usize(v_i_496_);
lean_dec(v_i_496_);
v_res_500_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg(v_backDeps_494_, v_sz_boxed_498_, v_i_boxed_499_, v_bs_497_);
lean_dec_ref(v_backDeps_494_);
return v_res_500_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps(lean_object* v_pinfo_501_, lean_object* v_backDeps_502_){
_start:
{
lean_object* v___x_503_; lean_object* v___x_504_; uint8_t v___x_505_; 
v___x_503_ = lean_array_get_size(v_backDeps_502_);
v___x_504_ = lean_unsigned_to_nat(0u);
v___x_505_ = lean_nat_dec_eq(v___x_503_, v___x_504_);
if (v___x_505_ == 0)
{
size_t v_sz_506_; size_t v___x_507_; lean_object* v___x_508_; 
v_sz_506_ = lean_array_size(v_pinfo_501_);
v___x_507_ = ((size_t)0ULL);
v___x_508_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg(v_backDeps_502_, v_sz_506_, v___x_507_, v_pinfo_501_);
return v___x_508_;
}
else
{
return v_pinfo_501_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps___boxed(lean_object* v_pinfo_509_, lean_object* v_backDeps_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps(v_pinfo_509_, v_backDeps_510_);
lean_dec_ref(v_backDeps_510_);
return v_res_511_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0(lean_object* v_backDeps_512_, lean_object* v_as_513_, size_t v_sz_514_, size_t v_i_515_, lean_object* v_bs_516_){
_start:
{
lean_object* v___x_517_; 
v___x_517_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg(v_backDeps_512_, v_sz_514_, v_i_515_, v_bs_516_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___boxed(lean_object* v_backDeps_518_, lean_object* v_as_519_, lean_object* v_sz_520_, lean_object* v_i_521_, lean_object* v_bs_522_){
_start:
{
size_t v_sz_boxed_523_; size_t v_i_boxed_524_; lean_object* v_res_525_; 
v_sz_boxed_523_ = lean_unbox_usize(v_sz_520_);
lean_dec(v_sz_520_);
v_i_boxed_524_ = lean_unbox_usize(v_i_521_);
lean_dec(v_i_521_);
v_res_525_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0(v_backDeps_518_, v_as_519_, v_sz_boxed_523_, v_i_boxed_524_, v_bs_522_);
lean_dec_ref(v_as_519_);
lean_dec_ref(v_backDeps_518_);
return v_res_525_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___lam__0(lean_object* v_k_526_, lean_object* v_b_527_, lean_object* v_c_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_){
_start:
{
lean_object* v___x_534_; 
lean_inc(v___y_532_);
lean_inc_ref(v___y_531_);
lean_inc(v___y_530_);
lean_inc_ref(v___y_529_);
v___x_534_ = lean_apply_7(v_k_526_, v_b_527_, v_c_528_, v___y_529_, v___y_530_, v___y_531_, v___y_532_, lean_box(0));
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___lam__0___boxed(lean_object* v_k_535_, lean_object* v_b_536_, lean_object* v_c_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_){
_start:
{
lean_object* v_res_543_; 
v_res_543_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___lam__0(v_k_535_, v_b_536_, v_c_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_);
lean_dec(v___y_541_);
lean_dec_ref(v___y_540_);
lean_dec(v___y_539_);
lean_dec_ref(v___y_538_);
return v_res_543_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg(lean_object* v_type_544_, lean_object* v_k_545_, uint8_t v_cleanupAnnotations_546_, uint8_t v_whnfType_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_){
_start:
{
lean_object* v___f_553_; lean_object* v___x_554_; 
v___f_553_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_553_, 0, v_k_545_);
v___x_554_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_544_, v___f_553_, v_cleanupAnnotations_546_, v_whnfType_547_, v___y_548_, v___y_549_, v___y_550_, v___y_551_);
if (lean_obj_tag(v___x_554_) == 0)
{
lean_object* v_a_555_; lean_object* v___x_557_; uint8_t v_isShared_558_; uint8_t v_isSharedCheck_562_; 
v_a_555_ = lean_ctor_get(v___x_554_, 0);
v_isSharedCheck_562_ = !lean_is_exclusive(v___x_554_);
if (v_isSharedCheck_562_ == 0)
{
v___x_557_ = v___x_554_;
v_isShared_558_ = v_isSharedCheck_562_;
goto v_resetjp_556_;
}
else
{
lean_inc(v_a_555_);
lean_dec(v___x_554_);
v___x_557_ = lean_box(0);
v_isShared_558_ = v_isSharedCheck_562_;
goto v_resetjp_556_;
}
v_resetjp_556_:
{
lean_object* v___x_560_; 
if (v_isShared_558_ == 0)
{
v___x_560_ = v___x_557_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_561_; 
v_reuseFailAlloc_561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_561_, 0, v_a_555_);
v___x_560_ = v_reuseFailAlloc_561_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
return v___x_560_;
}
}
}
else
{
lean_object* v_a_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_570_; 
v_a_563_ = lean_ctor_get(v___x_554_, 0);
v_isSharedCheck_570_ = !lean_is_exclusive(v___x_554_);
if (v_isSharedCheck_570_ == 0)
{
v___x_565_ = v___x_554_;
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_a_563_);
lean_dec(v___x_554_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v___x_568_; 
if (v_isShared_566_ == 0)
{
v___x_568_ = v___x_565_;
goto v_reusejp_567_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v_a_563_);
v___x_568_ = v_reuseFailAlloc_569_;
goto v_reusejp_567_;
}
v_reusejp_567_:
{
return v___x_568_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___boxed(lean_object* v_type_571_, lean_object* v_k_572_, lean_object* v_cleanupAnnotations_573_, lean_object* v_whnfType_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_580_; uint8_t v_whnfType_boxed_581_; lean_object* v_res_582_; 
v_cleanupAnnotations_boxed_580_ = lean_unbox(v_cleanupAnnotations_573_);
v_whnfType_boxed_581_ = lean_unbox(v_whnfType_574_);
v_res_582_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg(v_type_571_, v_k_572_, v_cleanupAnnotations_boxed_580_, v_whnfType_boxed_581_, v___y_575_, v___y_576_, v___y_577_, v___y_578_);
lean_dec(v___y_578_);
lean_dec_ref(v___y_577_);
lean_dec(v___y_576_);
lean_dec_ref(v___y_575_);
return v_res_582_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1(lean_object* v_00_u03b1_583_, lean_object* v_type_584_, lean_object* v_k_585_, uint8_t v_cleanupAnnotations_586_, uint8_t v_whnfType_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_){
_start:
{
lean_object* v___x_593_; 
v___x_593_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg(v_type_584_, v_k_585_, v_cleanupAnnotations_586_, v_whnfType_587_, v___y_588_, v___y_589_, v___y_590_, v___y_591_);
return v___x_593_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___boxed(lean_object* v_00_u03b1_594_, lean_object* v_type_595_, lean_object* v_k_596_, lean_object* v_cleanupAnnotations_597_, lean_object* v_whnfType_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_604_; uint8_t v_whnfType_boxed_605_; lean_object* v_res_606_; 
v_cleanupAnnotations_boxed_604_ = lean_unbox(v_cleanupAnnotations_597_);
v_whnfType_boxed_605_ = lean_unbox(v_whnfType_598_);
v_res_606_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1(v_00_u03b1_594_, v_type_595_, v_k_596_, v_cleanupAnnotations_boxed_604_, v_whnfType_boxed_605_, v___y_599_, v___y_600_, v___y_601_, v___y_602_);
lean_dec(v___y_602_);
lean_dec_ref(v___y_601_);
lean_dec(v___y_600_);
lean_dec_ref(v___y_599_);
return v_res_606_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3(lean_object* v_msg_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_){
_start:
{
lean_object* v___f_614_; lean_object* v___x_9105__overap_615_; lean_object* v___x_616_; 
v___f_614_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___closed__0));
v___x_9105__overap_615_ = lean_panic_fn_borrowed(v___f_614_, v_msg_608_);
lean_inc(v___y_612_);
lean_inc_ref(v___y_611_);
lean_inc(v___y_610_);
lean_inc_ref(v___y_609_);
v___x_616_ = lean_apply_5(v___x_9105__overap_615_, v___y_609_, v___y_610_, v___y_611_, v___y_612_, lean_box(0));
return v___x_616_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___boxed(lean_object* v_msg_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_){
_start:
{
lean_object* v_res_623_; 
v_res_623_ = l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3(v_msg_617_, v___y_618_, v___y_619_, v___y_620_, v___y_621_);
lean_dec(v___y_621_);
lean_dec_ref(v___y_620_);
lean_dec(v___y_619_);
lean_dec_ref(v___y_618_);
return v_res_623_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg(lean_object* v_type_624_, lean_object* v_maxFVars_x3f_625_, lean_object* v_k_626_, uint8_t v_cleanupAnnotations_627_, uint8_t v_whnfType_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_){
_start:
{
lean_object* v___f_634_; lean_object* v___x_635_; 
v___f_634_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_634_, 0, v_k_626_);
v___x_635_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_624_, v_maxFVars_x3f_625_, v___f_634_, v_cleanupAnnotations_627_, v_whnfType_628_, v___y_629_, v___y_630_, v___y_631_, v___y_632_);
if (lean_obj_tag(v___x_635_) == 0)
{
lean_object* v_a_636_; lean_object* v___x_638_; uint8_t v_isShared_639_; uint8_t v_isSharedCheck_643_; 
v_a_636_ = lean_ctor_get(v___x_635_, 0);
v_isSharedCheck_643_ = !lean_is_exclusive(v___x_635_);
if (v_isSharedCheck_643_ == 0)
{
v___x_638_ = v___x_635_;
v_isShared_639_ = v_isSharedCheck_643_;
goto v_resetjp_637_;
}
else
{
lean_inc(v_a_636_);
lean_dec(v___x_635_);
v___x_638_ = lean_box(0);
v_isShared_639_ = v_isSharedCheck_643_;
goto v_resetjp_637_;
}
v_resetjp_637_:
{
lean_object* v___x_641_; 
if (v_isShared_639_ == 0)
{
v___x_641_ = v___x_638_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v_a_636_);
v___x_641_ = v_reuseFailAlloc_642_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
return v___x_641_;
}
}
}
else
{
lean_object* v_a_644_; lean_object* v___x_646_; uint8_t v_isShared_647_; uint8_t v_isSharedCheck_651_; 
v_a_644_ = lean_ctor_get(v___x_635_, 0);
v_isSharedCheck_651_ = !lean_is_exclusive(v___x_635_);
if (v_isSharedCheck_651_ == 0)
{
v___x_646_ = v___x_635_;
v_isShared_647_ = v_isSharedCheck_651_;
goto v_resetjp_645_;
}
else
{
lean_inc(v_a_644_);
lean_dec(v___x_635_);
v___x_646_ = lean_box(0);
v_isShared_647_ = v_isSharedCheck_651_;
goto v_resetjp_645_;
}
v_resetjp_645_:
{
lean_object* v___x_649_; 
if (v_isShared_647_ == 0)
{
v___x_649_ = v___x_646_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v_a_644_);
v___x_649_ = v_reuseFailAlloc_650_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
return v___x_649_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg___boxed(lean_object* v_type_652_, lean_object* v_maxFVars_x3f_653_, lean_object* v_k_654_, lean_object* v_cleanupAnnotations_655_, lean_object* v_whnfType_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_662_; uint8_t v_whnfType_boxed_663_; lean_object* v_res_664_; 
v_cleanupAnnotations_boxed_662_ = lean_unbox(v_cleanupAnnotations_655_);
v_whnfType_boxed_663_ = lean_unbox(v_whnfType_656_);
v_res_664_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg(v_type_652_, v_maxFVars_x3f_653_, v_k_654_, v_cleanupAnnotations_boxed_662_, v_whnfType_boxed_663_, v___y_657_, v___y_658_, v___y_659_, v___y_660_);
lean_dec(v___y_660_);
lean_dec_ref(v___y_659_);
lean_dec(v___y_658_);
lean_dec_ref(v___y_657_);
return v_res_664_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5(lean_object* v_00_u03b1_665_, lean_object* v_type_666_, lean_object* v_maxFVars_x3f_667_, lean_object* v_k_668_, uint8_t v_cleanupAnnotations_669_, uint8_t v_whnfType_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_){
_start:
{
lean_object* v___x_676_; 
v___x_676_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg(v_type_666_, v_maxFVars_x3f_667_, v_k_668_, v_cleanupAnnotations_669_, v_whnfType_670_, v___y_671_, v___y_672_, v___y_673_, v___y_674_);
return v___x_676_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___boxed(lean_object* v_00_u03b1_677_, lean_object* v_type_678_, lean_object* v_maxFVars_x3f_679_, lean_object* v_k_680_, lean_object* v_cleanupAnnotations_681_, lean_object* v_whnfType_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_688_; uint8_t v_whnfType_boxed_689_; lean_object* v_res_690_; 
v_cleanupAnnotations_boxed_688_ = lean_unbox(v_cleanupAnnotations_681_);
v_whnfType_boxed_689_ = lean_unbox(v_whnfType_682_);
v_res_690_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5(v_00_u03b1_677_, v_type_678_, v_maxFVars_x3f_679_, v_k_680_, v_cleanupAnnotations_boxed_688_, v_whnfType_boxed_689_, v___y_683_, v___y_684_, v___y_685_, v___y_686_);
lean_dec(v___y_686_);
lean_dec_ref(v___y_685_);
lean_dec(v___y_684_);
lean_dec_ref(v___y_683_);
return v_res_690_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg(lean_object* v_upperBound_691_, lean_object* v_val_692_, lean_object* v___x_693_, lean_object* v_fvars_694_, lean_object* v_a_695_, lean_object* v_b_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_){
_start:
{
lean_object* v_a_703_; uint8_t v___x_707_; 
v___x_707_ = lean_nat_dec_lt(v_a_695_, v_upperBound_691_);
if (v___x_707_ == 0)
{
lean_object* v___x_708_; 
lean_dec(v_a_695_);
v___x_708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_708_, 0, v_b_696_);
return v___x_708_;
}
else
{
lean_object* v_fst_709_; lean_object* v_snd_710_; lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_773_; 
v_fst_709_ = lean_ctor_get(v_b_696_, 0);
v_snd_710_ = lean_ctor_get(v_b_696_, 1);
v_isSharedCheck_773_ = !lean_is_exclusive(v_b_696_);
if (v_isSharedCheck_773_ == 0)
{
v___x_712_ = v_b_696_;
v_isShared_713_ = v_isSharedCheck_773_;
goto v_resetjp_711_;
}
else
{
lean_inc(v_snd_710_);
lean_inc(v_fst_709_);
lean_dec(v_b_696_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_773_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
uint8_t v___x_714_; 
v___x_714_ = l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1(v_val_692_, v_a_695_);
if (v___x_714_ == 0)
{
lean_object* v___x_716_; 
if (v_isShared_713_ == 0)
{
v___x_716_ = v___x_712_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v_fst_709_);
lean_ctor_set(v_reuseFailAlloc_717_, 1, v_snd_710_);
v___x_716_ = v_reuseFailAlloc_717_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
v_a_703_ = v___x_716_;
goto v___jp_702_;
}
}
else
{
lean_object* v___x_718_; lean_object* v___x_719_; 
v___x_718_ = lean_array_fget_borrowed(v___x_693_, v_a_695_);
v___x_719_ = l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0(v_fvars_694_, v___x_718_);
if (lean_obj_tag(v___x_719_) == 1)
{
lean_object* v_val_720_; lean_object* v___x_721_; 
v_val_720_ = lean_ctor_get(v___x_719_, 0);
lean_inc(v_val_720_);
lean_dec_ref_known(v___x_719_, 1);
lean_inc(v___y_700_);
lean_inc_ref(v___y_699_);
lean_inc(v___y_698_);
lean_inc_ref(v___y_697_);
lean_inc(v___x_718_);
v___x_721_ = lean_infer_type(v___x_718_, v___y_697_, v___y_698_, v___y_699_, v___y_700_);
if (lean_obj_tag(v___x_721_) == 0)
{
lean_object* v_a_722_; lean_object* v___x_723_; 
v_a_722_ = lean_ctor_get(v___x_721_, 0);
lean_inc(v_a_722_);
lean_dec_ref_known(v___x_721_, 1);
lean_inc(v___y_700_);
lean_inc_ref(v___y_699_);
lean_inc(v___y_698_);
lean_inc_ref(v___y_697_);
v___x_723_ = lean_whnf(v_a_722_, v___y_697_, v___y_698_, v___y_699_, v___y_700_);
if (lean_obj_tag(v___x_723_) == 0)
{
lean_object* v_a_724_; lean_object* v___y_726_; uint8_t v___x_732_; 
v_a_724_ = lean_ctor_get(v___x_723_, 0);
lean_inc(v_a_724_);
lean_dec_ref_known(v___x_723_, 1);
v___x_732_ = l_Lean_Expr_isForall(v_a_724_);
lean_dec(v_a_724_);
if (v___x_732_ == 0)
{
lean_object* v___x_733_; 
lean_dec(v_val_720_);
lean_del_object(v___x_712_);
v___x_733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_733_, 0, v_fst_709_);
lean_ctor_set(v___x_733_, 1, v_snd_710_);
v_a_703_ = v___x_733_;
goto v___jp_702_;
}
else
{
lean_object* v___x_734_; uint8_t v___x_735_; 
v___x_734_ = lean_array_get_size(v_fst_709_);
v___x_735_ = lean_nat_dec_lt(v_val_720_, v___x_734_);
if (v___x_735_ == 0)
{
lean_dec(v_val_720_);
v___y_726_ = v_fst_709_;
goto v___jp_725_;
}
else
{
lean_object* v_v_736_; uint8_t v_binderInfo_737_; uint8_t v_hasFwdDeps_738_; lean_object* v_backDeps_739_; uint8_t v_isProp_740_; uint8_t v_isDecInst_741_; uint8_t v_isInstance_742_; uint8_t v_dependsOnHigherOrderOutParam_743_; lean_object* v___x_745_; uint8_t v_isShared_746_; uint8_t v_isSharedCheck_753_; 
v_v_736_ = lean_array_fget(v_fst_709_, v_val_720_);
v_binderInfo_737_ = lean_ctor_get_uint8(v_v_736_, sizeof(void*)*1);
v_hasFwdDeps_738_ = lean_ctor_get_uint8(v_v_736_, sizeof(void*)*1 + 1);
v_backDeps_739_ = lean_ctor_get(v_v_736_, 0);
v_isProp_740_ = lean_ctor_get_uint8(v_v_736_, sizeof(void*)*1 + 2);
v_isDecInst_741_ = lean_ctor_get_uint8(v_v_736_, sizeof(void*)*1 + 3);
v_isInstance_742_ = lean_ctor_get_uint8(v_v_736_, sizeof(void*)*1 + 4);
v_dependsOnHigherOrderOutParam_743_ = lean_ctor_get_uint8(v_v_736_, sizeof(void*)*1 + 6);
v_isSharedCheck_753_ = !lean_is_exclusive(v_v_736_);
if (v_isSharedCheck_753_ == 0)
{
v___x_745_ = v_v_736_;
v_isShared_746_ = v_isSharedCheck_753_;
goto v_resetjp_744_;
}
else
{
lean_inc(v_backDeps_739_);
lean_dec(v_v_736_);
v___x_745_ = lean_box(0);
v_isShared_746_ = v_isSharedCheck_753_;
goto v_resetjp_744_;
}
v_resetjp_744_:
{
lean_object* v___x_747_; lean_object* v_xs_x27_748_; lean_object* v___x_750_; 
v___x_747_ = lean_box(0);
v_xs_x27_748_ = lean_array_fset(v_fst_709_, v_val_720_, v___x_747_);
if (v_isShared_746_ == 0)
{
v___x_750_ = v___x_745_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_752_; 
v_reuseFailAlloc_752_ = lean_alloc_ctor(0, 1, 7);
lean_ctor_set(v_reuseFailAlloc_752_, 0, v_backDeps_739_);
lean_ctor_set_uint8(v_reuseFailAlloc_752_, sizeof(void*)*1, v_binderInfo_737_);
lean_ctor_set_uint8(v_reuseFailAlloc_752_, sizeof(void*)*1 + 1, v_hasFwdDeps_738_);
lean_ctor_set_uint8(v_reuseFailAlloc_752_, sizeof(void*)*1 + 2, v_isProp_740_);
lean_ctor_set_uint8(v_reuseFailAlloc_752_, sizeof(void*)*1 + 3, v_isDecInst_741_);
lean_ctor_set_uint8(v_reuseFailAlloc_752_, sizeof(void*)*1 + 4, v_isInstance_742_);
lean_ctor_set_uint8(v_reuseFailAlloc_752_, sizeof(void*)*1 + 6, v_dependsOnHigherOrderOutParam_743_);
v___x_750_ = v_reuseFailAlloc_752_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
lean_object* v___x_751_; 
lean_ctor_set_uint8(v___x_750_, sizeof(void*)*1 + 5, v___x_735_);
v___x_751_ = lean_array_fset(v_xs_x27_748_, v_val_720_, v___x_750_);
lean_dec(v_val_720_);
v___y_726_ = v___x_751_;
goto v___jp_725_;
}
}
}
}
v___jp_725_:
{
lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_730_; 
v___x_727_ = l_Lean_Expr_fvarId_x21(v___x_718_);
v___x_728_ = l_Lean_FVarIdSet_insert(v_snd_710_, v___x_727_);
if (v_isShared_713_ == 0)
{
lean_ctor_set(v___x_712_, 1, v___x_728_);
lean_ctor_set(v___x_712_, 0, v___y_726_);
v___x_730_ = v___x_712_;
goto v_reusejp_729_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v___y_726_);
lean_ctor_set(v_reuseFailAlloc_731_, 1, v___x_728_);
v___x_730_ = v_reuseFailAlloc_731_;
goto v_reusejp_729_;
}
v_reusejp_729_:
{
v_a_703_ = v___x_730_;
goto v___jp_702_;
}
}
}
else
{
lean_object* v_a_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_761_; 
lean_dec(v_val_720_);
lean_del_object(v___x_712_);
lean_dec(v_snd_710_);
lean_dec(v_fst_709_);
lean_dec(v_a_695_);
v_a_754_ = lean_ctor_get(v___x_723_, 0);
v_isSharedCheck_761_ = !lean_is_exclusive(v___x_723_);
if (v_isSharedCheck_761_ == 0)
{
v___x_756_ = v___x_723_;
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_a_754_);
lean_dec(v___x_723_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
lean_object* v___x_759_; 
if (v_isShared_757_ == 0)
{
v___x_759_ = v___x_756_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v_a_754_);
v___x_759_ = v_reuseFailAlloc_760_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
return v___x_759_;
}
}
}
}
else
{
lean_object* v_a_762_; lean_object* v___x_764_; uint8_t v_isShared_765_; uint8_t v_isSharedCheck_769_; 
lean_dec(v_val_720_);
lean_del_object(v___x_712_);
lean_dec(v_snd_710_);
lean_dec(v_fst_709_);
lean_dec(v_a_695_);
v_a_762_ = lean_ctor_get(v___x_721_, 0);
v_isSharedCheck_769_ = !lean_is_exclusive(v___x_721_);
if (v_isSharedCheck_769_ == 0)
{
v___x_764_ = v___x_721_;
v_isShared_765_ = v_isSharedCheck_769_;
goto v_resetjp_763_;
}
else
{
lean_inc(v_a_762_);
lean_dec(v___x_721_);
v___x_764_ = lean_box(0);
v_isShared_765_ = v_isSharedCheck_769_;
goto v_resetjp_763_;
}
v_resetjp_763_:
{
lean_object* v___x_767_; 
if (v_isShared_765_ == 0)
{
v___x_767_ = v___x_764_;
goto v_reusejp_766_;
}
else
{
lean_object* v_reuseFailAlloc_768_; 
v_reuseFailAlloc_768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_768_, 0, v_a_762_);
v___x_767_ = v_reuseFailAlloc_768_;
goto v_reusejp_766_;
}
v_reusejp_766_:
{
return v___x_767_;
}
}
}
}
else
{
lean_object* v___x_771_; 
lean_dec(v___x_719_);
if (v_isShared_713_ == 0)
{
v___x_771_ = v___x_712_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v_fst_709_);
lean_ctor_set(v_reuseFailAlloc_772_, 1, v_snd_710_);
v___x_771_ = v_reuseFailAlloc_772_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
v_a_703_ = v___x_771_;
goto v___jp_702_;
}
}
}
}
}
v___jp_702_:
{
lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_704_ = lean_unsigned_to_nat(1u);
v___x_705_ = lean_nat_add(v_a_695_, v___x_704_);
lean_dec(v_a_695_);
v_a_695_ = v___x_705_;
v_b_696_ = v_a_703_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg___boxed(lean_object* v_upperBound_774_, lean_object* v_val_775_, lean_object* v___x_776_, lean_object* v_fvars_777_, lean_object* v_a_778_, lean_object* v_b_779_, lean_object* v___y_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_){
_start:
{
lean_object* v_res_785_; 
v_res_785_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg(v_upperBound_774_, v_val_775_, v___x_776_, v_fvars_777_, v_a_778_, v_b_779_, v___y_780_, v___y_781_, v___y_782_, v___y_783_);
lean_dec(v___y_783_);
lean_dec_ref(v___y_782_);
lean_dec(v___y_781_);
lean_dec_ref(v___y_780_);
lean_dec_ref(v_fvars_777_);
lean_dec_ref(v___x_776_);
lean_dec_ref(v_val_775_);
lean_dec(v_upperBound_774_);
return v_res_785_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0(lean_object* v_x_789_, lean_object* v_type_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_){
_start:
{
lean_object* v___x_796_; uint8_t v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; 
v___x_796_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___closed__1));
v___x_797_ = l_Lean_Expr_isAppOf(v_type_790_, v___x_796_);
v___x_798_ = lean_box(v___x_797_);
v___x_799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_799_, 0, v___x_798_);
return v___x_799_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___boxed(lean_object* v_x_800_, lean_object* v_type_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_){
_start:
{
lean_object* v_res_807_; 
v_res_807_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0(v_x_800_, v_type_801_, v___y_802_, v___y_803_, v___y_804_, v___y_805_);
lean_dec(v___y_805_);
lean_dec_ref(v___y_804_);
lean_dec(v___y_803_);
lean_dec_ref(v___y_802_);
lean_dec_ref(v_type_801_);
lean_dec_ref(v_x_800_);
return v_res_807_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg(lean_object* v_k_808_, lean_object* v_t_809_){
_start:
{
if (lean_obj_tag(v_t_809_) == 0)
{
lean_object* v_k_810_; lean_object* v_l_811_; lean_object* v_r_812_; uint8_t v___x_813_; 
v_k_810_ = lean_ctor_get(v_t_809_, 1);
v_l_811_ = lean_ctor_get(v_t_809_, 3);
v_r_812_ = lean_ctor_get(v_t_809_, 4);
v___x_813_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_808_, v_k_810_);
switch(v___x_813_)
{
case 0:
{
v_t_809_ = v_l_811_;
goto _start;
}
case 1:
{
uint8_t v___x_815_; 
v___x_815_ = 1;
return v___x_815_;
}
default: 
{
v_t_809_ = v_r_812_;
goto _start;
}
}
}
else
{
uint8_t v___x_817_; 
v___x_817_ = 0;
return v___x_817_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg___boxed(lean_object* v_k_818_, lean_object* v_t_819_){
_start:
{
uint8_t v_res_820_; lean_object* v_r_821_; 
v_res_820_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg(v_k_818_, v_t_819_);
lean_dec(v_t_819_);
lean_dec(v_k_818_);
v_r_821_ = lean_box(v_res_820_);
return v_r_821_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__1(lean_object* v_snd_822_, lean_object* v_e_823_){
_start:
{
uint8_t v___x_824_; 
v___x_824_ = l_Lean_Expr_isFVar(v_e_823_);
if (v___x_824_ == 0)
{
return v___x_824_;
}
else
{
lean_object* v___x_825_; uint8_t v___x_826_; 
v___x_825_ = l_Lean_Expr_fvarId_x21(v_e_823_);
v___x_826_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg(v___x_825_, v_snd_822_);
lean_dec(v___x_825_);
return v___x_826_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__1___boxed(lean_object* v_snd_827_, lean_object* v_e_828_){
_start:
{
uint8_t v_res_829_; lean_object* v_r_830_; 
v_res_829_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__1(v_snd_827_, v_e_828_);
lean_dec_ref(v_e_828_);
lean_dec(v_snd_827_);
v_r_830_ = lean_box(v_res_829_);
return v_r_830_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_832_; lean_object* v_dummy_833_; 
v___x_832_ = lean_box(0);
v_dummy_833_ = l_Lean_Expr_sort___override(v___x_832_);
return v_dummy_833_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__5(void){
_start:
{
lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_837_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__4));
v___x_838_ = lean_unsigned_to_nat(47u);
v___x_839_ = lean_unsigned_to_nat(121u);
v___x_840_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__3));
v___x_841_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__2));
v___x_842_ = l_mkPanicMessageWithDecl(v___x_841_, v___x_840_, v___x_839_, v___x_838_, v___x_837_);
return v___x_842_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg(lean_object* v_upperBound_843_, lean_object* v_fvars_844_, lean_object* v_a_845_, lean_object* v_b_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_){
_start:
{
lean_object* v_a_853_; uint8_t v___x_857_; 
v___x_857_ = lean_nat_dec_lt(v_a_845_, v_upperBound_843_);
if (v___x_857_ == 0)
{
lean_object* v___x_858_; 
lean_dec(v_a_845_);
v___x_858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_858_, 0, v_b_846_);
return v___x_858_;
}
else
{
lean_object* v_fst_859_; lean_object* v_snd_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_980_; 
v_fst_859_ = lean_ctor_get(v_b_846_, 0);
v_snd_860_ = lean_ctor_get(v_b_846_, 1);
v_isSharedCheck_980_ = !lean_is_exclusive(v_b_846_);
if (v_isSharedCheck_980_ == 0)
{
v___x_862_ = v_b_846_;
v_isShared_863_ = v_isSharedCheck_980_;
goto v_resetjp_861_;
}
else
{
lean_inc(v_snd_860_);
lean_inc(v_fst_859_);
lean_dec(v_b_846_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_980_;
goto v_resetjp_861_;
}
v_resetjp_861_:
{
lean_object* v___f_864_; lean_object* v___f_865_; lean_object* v___x_866_; lean_object* v___x_867_; 
v___f_864_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__0));
lean_inc(v_snd_860_);
v___f_865_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_865_, 0, v_snd_860_);
v___x_866_ = lean_array_fget_borrowed(v_fvars_844_, v_a_845_);
v___x_867_ = l_Lean_Meta_getFVarLocalDecl___redArg(v___x_866_, v___y_847_, v___y_849_, v___y_850_);
if (lean_obj_tag(v___x_867_) == 0)
{
lean_object* v_a_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___y_872_; uint8_t v___y_873_; uint8_t v___y_874_; uint8_t v___y_954_; 
v_a_868_ = lean_ctor_get(v___x_867_, 0);
lean_inc(v_a_868_);
lean_dec_ref_known(v___x_867_, 1);
v___x_869_ = l_Lean_LocalDecl_type(v_a_868_);
v___x_870_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps(v_fvars_844_, v___x_869_);
if (lean_obj_tag(v_snd_860_) == 0)
{
lean_object* v___x_969_; 
v___x_969_ = lean_find_expr(v___f_865_, v___x_869_);
lean_dec_ref(v___f_865_);
if (lean_obj_tag(v___x_969_) == 0)
{
uint8_t v___x_970_; 
v___x_970_ = 0;
v___y_954_ = v___x_970_;
goto v___jp_953_;
}
else
{
lean_dec_ref_known(v___x_969_, 1);
v___y_954_ = v___x_857_;
goto v___jp_953_;
}
}
else
{
uint8_t v___x_971_; 
lean_dec_ref(v___f_865_);
v___x_971_ = 0;
v___y_954_ = v___x_971_;
goto v___jp_953_;
}
v___jp_871_:
{
lean_object* v___x_875_; lean_object* v___x_876_; 
v___x_875_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps(v_fst_859_, v___x_870_);
lean_inc_ref(v___x_869_);
v___x_876_ = l_Lean_Meta_isProp(v___x_869_, v___y_847_, v___y_848_, v___y_849_, v___y_850_);
if (lean_obj_tag(v___x_876_) == 0)
{
lean_object* v_a_877_; uint8_t v___x_878_; lean_object* v___x_879_; 
v_a_877_ = lean_ctor_get(v___x_876_, 0);
lean_inc(v_a_877_);
lean_dec_ref_known(v___x_876_, 1);
v___x_878_ = 0;
lean_inc_ref(v___x_869_);
v___x_879_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg(v___x_869_, v___f_864_, v___x_878_, v___x_878_, v___y_847_, v___y_848_, v___y_849_, v___y_850_);
if (lean_obj_tag(v___x_879_) == 0)
{
lean_object* v_a_880_; uint8_t v___x_881_; lean_object* v___x_882_; uint8_t v___x_883_; uint8_t v___x_884_; lean_object* v___x_885_; 
v_a_880_ = lean_ctor_get(v___x_879_, 0);
lean_inc(v_a_880_);
lean_dec_ref_known(v___x_879_, 1);
v___x_881_ = l_Lean_LocalDecl_binderInfo(v_a_868_);
lean_dec(v_a_868_);
v___x_882_ = lean_alloc_ctor(0, 1, 7);
lean_ctor_set(v___x_882_, 0, v___x_870_);
lean_ctor_set_uint8(v___x_882_, sizeof(void*)*1, v___x_881_);
lean_ctor_set_uint8(v___x_882_, sizeof(void*)*1 + 1, v___x_878_);
v___x_883_ = lean_unbox(v_a_877_);
lean_dec(v_a_877_);
lean_ctor_set_uint8(v___x_882_, sizeof(void*)*1 + 2, v___x_883_);
v___x_884_ = lean_unbox(v_a_880_);
lean_dec(v_a_880_);
lean_ctor_set_uint8(v___x_882_, sizeof(void*)*1 + 3, v___x_884_);
lean_ctor_set_uint8(v___x_882_, sizeof(void*)*1 + 4, v___y_874_);
lean_ctor_set_uint8(v___x_882_, sizeof(void*)*1 + 5, v___x_878_);
lean_ctor_set_uint8(v___x_882_, sizeof(void*)*1 + 6, v___y_873_);
v___x_885_ = lean_array_push(v___x_875_, v___x_882_);
if (v___y_874_ == 0)
{
lean_object* v___x_887_; 
lean_dec(v___y_872_);
lean_dec_ref(v___x_869_);
if (v_isShared_863_ == 0)
{
lean_ctor_set(v___x_862_, 0, v___x_885_);
v___x_887_ = v___x_862_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v___x_885_);
lean_ctor_set(v_reuseFailAlloc_888_, 1, v_snd_860_);
v___x_887_ = v_reuseFailAlloc_888_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
v_a_853_ = v___x_887_;
goto v___jp_852_;
}
}
else
{
if (lean_obj_tag(v___y_872_) == 1)
{
lean_object* v_val_889_; lean_object* v___x_890_; lean_object* v_env_891_; lean_object* v___x_892_; 
v_val_889_ = lean_ctor_get(v___y_872_, 0);
lean_inc(v_val_889_);
lean_dec_ref_known(v___y_872_, 1);
v___x_890_ = lean_st_ref_get(v___y_850_);
v_env_891_ = lean_ctor_get(v___x_890_, 0);
lean_inc_ref(v_env_891_);
lean_dec(v___x_890_);
v___x_892_ = l_Lean_getOutParamPositions_x3f(v_env_891_, v_val_889_);
lean_dec(v_val_889_);
if (lean_obj_tag(v___x_892_) == 1)
{
lean_object* v_val_893_; lean_object* v___x_894_; lean_object* v___x_895_; uint8_t v___x_896_; 
v_val_893_ = lean_ctor_get(v___x_892_, 0);
lean_inc(v_val_893_);
lean_dec_ref_known(v___x_892_, 1);
v___x_894_ = lean_array_get_size(v_val_893_);
v___x_895_ = lean_unsigned_to_nat(0u);
v___x_896_ = lean_nat_dec_eq(v___x_894_, v___x_895_);
if (v___x_896_ == 0)
{
lean_object* v_dummy_897_; lean_object* v_nargs_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_905_; 
v_dummy_897_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__1);
v_nargs_898_ = l_Lean_Expr_getAppNumArgs(v___x_869_);
lean_inc(v_nargs_898_);
v___x_899_ = lean_mk_array(v_nargs_898_, v_dummy_897_);
v___x_900_ = lean_unsigned_to_nat(1u);
v___x_901_ = lean_nat_sub(v_nargs_898_, v___x_900_);
lean_dec(v_nargs_898_);
v___x_902_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___x_869_, v___x_899_, v___x_901_);
v___x_903_ = lean_array_get_size(v___x_902_);
if (v_isShared_863_ == 0)
{
lean_ctor_set(v___x_862_, 0, v___x_885_);
v___x_905_ = v___x_862_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_917_; 
v_reuseFailAlloc_917_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_917_, 0, v___x_885_);
lean_ctor_set(v_reuseFailAlloc_917_, 1, v_snd_860_);
v___x_905_ = v_reuseFailAlloc_917_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
lean_object* v___x_906_; 
v___x_906_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg(v___x_903_, v_val_893_, v___x_902_, v_fvars_844_, v___x_895_, v___x_905_, v___y_847_, v___y_848_, v___y_849_, v___y_850_);
lean_dec_ref(v___x_902_);
lean_dec(v_val_893_);
if (lean_obj_tag(v___x_906_) == 0)
{
lean_object* v_a_907_; lean_object* v_fst_908_; lean_object* v_snd_909_; lean_object* v___x_911_; uint8_t v_isShared_912_; uint8_t v_isSharedCheck_916_; 
v_a_907_ = lean_ctor_get(v___x_906_, 0);
lean_inc(v_a_907_);
lean_dec_ref_known(v___x_906_, 1);
v_fst_908_ = lean_ctor_get(v_a_907_, 0);
v_snd_909_ = lean_ctor_get(v_a_907_, 1);
v_isSharedCheck_916_ = !lean_is_exclusive(v_a_907_);
if (v_isSharedCheck_916_ == 0)
{
v___x_911_ = v_a_907_;
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
else
{
lean_inc(v_snd_909_);
lean_inc(v_fst_908_);
lean_dec(v_a_907_);
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
v_reuseFailAlloc_915_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v_fst_908_);
lean_ctor_set(v_reuseFailAlloc_915_, 1, v_snd_909_);
v___x_914_ = v_reuseFailAlloc_915_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
v_a_853_ = v___x_914_;
goto v___jp_852_;
}
}
}
else
{
lean_dec(v_a_845_);
return v___x_906_;
}
}
}
else
{
lean_object* v___x_919_; 
lean_dec(v_val_893_);
lean_dec_ref(v___x_869_);
if (v_isShared_863_ == 0)
{
lean_ctor_set(v___x_862_, 0, v___x_885_);
v___x_919_ = v___x_862_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_920_; 
v_reuseFailAlloc_920_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_920_, 0, v___x_885_);
lean_ctor_set(v_reuseFailAlloc_920_, 1, v_snd_860_);
v___x_919_ = v_reuseFailAlloc_920_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
v_a_853_ = v___x_919_;
goto v___jp_852_;
}
}
}
else
{
lean_object* v___x_922_; 
lean_dec(v___x_892_);
lean_dec_ref(v___x_869_);
if (v_isShared_863_ == 0)
{
lean_ctor_set(v___x_862_, 0, v___x_885_);
v___x_922_ = v___x_862_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_923_; 
v_reuseFailAlloc_923_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_923_, 0, v___x_885_);
lean_ctor_set(v_reuseFailAlloc_923_, 1, v_snd_860_);
v___x_922_ = v_reuseFailAlloc_923_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
v_a_853_ = v___x_922_;
goto v___jp_852_;
}
}
}
else
{
lean_object* v___x_924_; lean_object* v___x_925_; 
lean_dec(v___y_872_);
lean_dec_ref(v___x_869_);
v___x_924_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__5, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__5);
v___x_925_ = l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3(v___x_924_, v___y_847_, v___y_848_, v___y_849_, v___y_850_);
if (lean_obj_tag(v___x_925_) == 0)
{
lean_object* v___x_927_; 
lean_dec_ref_known(v___x_925_, 1);
if (v_isShared_863_ == 0)
{
lean_ctor_set(v___x_862_, 0, v___x_885_);
v___x_927_ = v___x_862_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v___x_885_);
lean_ctor_set(v_reuseFailAlloc_928_, 1, v_snd_860_);
v___x_927_ = v_reuseFailAlloc_928_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
v_a_853_ = v___x_927_;
goto v___jp_852_;
}
}
else
{
lean_object* v_a_929_; lean_object* v___x_931_; uint8_t v_isShared_932_; uint8_t v_isSharedCheck_936_; 
lean_dec_ref(v___x_885_);
lean_del_object(v___x_862_);
lean_dec(v_snd_860_);
lean_dec(v_a_845_);
v_a_929_ = lean_ctor_get(v___x_925_, 0);
v_isSharedCheck_936_ = !lean_is_exclusive(v___x_925_);
if (v_isSharedCheck_936_ == 0)
{
v___x_931_ = v___x_925_;
v_isShared_932_ = v_isSharedCheck_936_;
goto v_resetjp_930_;
}
else
{
lean_inc(v_a_929_);
lean_dec(v___x_925_);
v___x_931_ = lean_box(0);
v_isShared_932_ = v_isSharedCheck_936_;
goto v_resetjp_930_;
}
v_resetjp_930_:
{
lean_object* v___x_934_; 
if (v_isShared_932_ == 0)
{
v___x_934_ = v___x_931_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_935_; 
v_reuseFailAlloc_935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_935_, 0, v_a_929_);
v___x_934_ = v_reuseFailAlloc_935_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
return v___x_934_;
}
}
}
}
}
}
else
{
lean_object* v_a_937_; lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_944_; 
lean_dec(v_a_877_);
lean_dec_ref(v___x_875_);
lean_dec(v___y_872_);
lean_dec_ref(v___x_870_);
lean_dec_ref(v___x_869_);
lean_dec(v_a_868_);
lean_del_object(v___x_862_);
lean_dec(v_snd_860_);
lean_dec(v_a_845_);
v_a_937_ = lean_ctor_get(v___x_879_, 0);
v_isSharedCheck_944_ = !lean_is_exclusive(v___x_879_);
if (v_isSharedCheck_944_ == 0)
{
v___x_939_ = v___x_879_;
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
else
{
lean_inc(v_a_937_);
lean_dec(v___x_879_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
lean_object* v___x_942_; 
if (v_isShared_940_ == 0)
{
v___x_942_ = v___x_939_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v_a_937_);
v___x_942_ = v_reuseFailAlloc_943_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
return v___x_942_;
}
}
}
}
else
{
lean_object* v_a_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_952_; 
lean_dec_ref(v___x_875_);
lean_dec(v___y_872_);
lean_dec_ref(v___x_870_);
lean_dec_ref(v___x_869_);
lean_dec(v_a_868_);
lean_del_object(v___x_862_);
lean_dec(v_snd_860_);
lean_dec(v_a_845_);
v_a_945_ = lean_ctor_get(v___x_876_, 0);
v_isSharedCheck_952_ = !lean_is_exclusive(v___x_876_);
if (v_isSharedCheck_952_ == 0)
{
v___x_947_ = v___x_876_;
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
else
{
lean_inc(v_a_945_);
lean_dec(v___x_876_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
lean_object* v___x_950_; 
if (v_isShared_948_ == 0)
{
v___x_950_ = v___x_947_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_a_945_);
v___x_950_ = v_reuseFailAlloc_951_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
return v___x_950_;
}
}
}
}
v___jp_953_:
{
lean_object* v___x_955_; 
lean_inc_ref(v___x_869_);
v___x_955_ = l_Lean_Meta_isClass_x3f(v___x_869_, v___y_847_, v___y_848_, v___y_849_, v___y_850_);
if (lean_obj_tag(v___x_955_) == 0)
{
lean_object* v_a_956_; 
v_a_956_ = lean_ctor_get(v___x_955_, 0);
lean_inc(v_a_956_);
lean_dec_ref_known(v___x_955_, 1);
if (lean_obj_tag(v_a_956_) == 0)
{
uint8_t v___x_957_; 
v___x_957_ = 0;
v___y_872_ = v_a_956_;
v___y_873_ = v___y_954_;
v___y_874_ = v___x_957_;
goto v___jp_871_;
}
else
{
uint8_t v___x_958_; uint8_t v___x_959_; 
v___x_958_ = l_Lean_LocalDecl_binderInfo(v_a_868_);
v___x_959_ = l_Lean_BinderInfo_isExplicit(v___x_958_);
if (v___x_959_ == 0)
{
v___y_872_ = v_a_956_;
v___y_873_ = v___y_954_;
v___y_874_ = v___x_857_;
goto v___jp_871_;
}
else
{
uint8_t v___x_960_; 
v___x_960_ = 0;
v___y_872_ = v_a_956_;
v___y_873_ = v___y_954_;
v___y_874_ = v___x_960_;
goto v___jp_871_;
}
}
}
else
{
lean_object* v_a_961_; lean_object* v___x_963_; uint8_t v_isShared_964_; uint8_t v_isSharedCheck_968_; 
lean_dec_ref(v___x_870_);
lean_dec_ref(v___x_869_);
lean_dec(v_a_868_);
lean_del_object(v___x_862_);
lean_dec(v_snd_860_);
lean_dec(v_fst_859_);
lean_dec(v_a_845_);
v_a_961_ = lean_ctor_get(v___x_955_, 0);
v_isSharedCheck_968_ = !lean_is_exclusive(v___x_955_);
if (v_isSharedCheck_968_ == 0)
{
v___x_963_ = v___x_955_;
v_isShared_964_ = v_isSharedCheck_968_;
goto v_resetjp_962_;
}
else
{
lean_inc(v_a_961_);
lean_dec(v___x_955_);
v___x_963_ = lean_box(0);
v_isShared_964_ = v_isSharedCheck_968_;
goto v_resetjp_962_;
}
v_resetjp_962_:
{
lean_object* v___x_966_; 
if (v_isShared_964_ == 0)
{
v___x_966_ = v___x_963_;
goto v_reusejp_965_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v_a_961_);
v___x_966_ = v_reuseFailAlloc_967_;
goto v_reusejp_965_;
}
v_reusejp_965_:
{
return v___x_966_;
}
}
}
}
}
else
{
lean_object* v_a_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_979_; 
lean_dec_ref(v___f_865_);
lean_del_object(v___x_862_);
lean_dec(v_snd_860_);
lean_dec(v_fst_859_);
lean_dec(v_a_845_);
v_a_972_ = lean_ctor_get(v___x_867_, 0);
v_isSharedCheck_979_ = !lean_is_exclusive(v___x_867_);
if (v_isSharedCheck_979_ == 0)
{
v___x_974_ = v___x_867_;
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_a_972_);
lean_dec(v___x_867_);
v___x_974_ = lean_box(0);
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
v_resetjp_973_:
{
lean_object* v___x_977_; 
if (v_isShared_975_ == 0)
{
v___x_977_ = v___x_974_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v_a_972_);
v___x_977_ = v_reuseFailAlloc_978_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
return v___x_977_;
}
}
}
}
}
v___jp_852_:
{
lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_854_ = lean_unsigned_to_nat(1u);
v___x_855_ = lean_nat_add(v_a_845_, v___x_854_);
lean_dec(v_a_845_);
v_a_845_ = v___x_855_;
v_b_846_ = v_a_853_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___boxed(lean_object* v_upperBound_981_, lean_object* v_fvars_982_, lean_object* v_a_983_, lean_object* v_b_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_){
_start:
{
lean_object* v_res_990_; 
v_res_990_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg(v_upperBound_981_, v_fvars_982_, v_a_983_, v_b_984_, v___y_985_, v___y_986_, v___y_987_, v___y_988_);
lean_dec(v___y_988_);
lean_dec_ref(v___y_987_);
lean_dec(v___y_986_);
lean_dec_ref(v___y_985_);
lean_dec_ref(v_fvars_982_);
lean_dec(v_upperBound_981_);
return v_res_990_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0(lean_object* v___x_993_, lean_object* v_fvars_994_, lean_object* v_type_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_){
_start:
{
lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1001_ = lean_array_get_size(v_fvars_994_);
v___x_1002_ = lean_unsigned_to_nat(0u);
v___x_1003_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___closed__0));
v___x_1004_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1004_, 0, v___x_1003_);
lean_ctor_set(v___x_1004_, 1, v___x_993_);
v___x_1005_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg(v___x_1001_, v_fvars_994_, v___x_1002_, v___x_1004_, v___y_996_, v___y_997_, v___y_998_, v___y_999_);
if (lean_obj_tag(v___x_1005_) == 0)
{
lean_object* v_a_1006_; lean_object* v___x_1008_; uint8_t v_isShared_1009_; uint8_t v_isSharedCheck_1024_; 
v_a_1006_ = lean_ctor_get(v___x_1005_, 0);
v_isSharedCheck_1024_ = !lean_is_exclusive(v___x_1005_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_1008_ = v___x_1005_;
v_isShared_1009_ = v_isSharedCheck_1024_;
goto v_resetjp_1007_;
}
else
{
lean_inc(v_a_1006_);
lean_dec(v___x_1005_);
v___x_1008_ = lean_box(0);
v_isShared_1009_ = v_isSharedCheck_1024_;
goto v_resetjp_1007_;
}
v_resetjp_1007_:
{
lean_object* v_fst_1010_; lean_object* v___x_1012_; uint8_t v_isShared_1013_; uint8_t v_isSharedCheck_1022_; 
v_fst_1010_ = lean_ctor_get(v_a_1006_, 0);
v_isSharedCheck_1022_ = !lean_is_exclusive(v_a_1006_);
if (v_isSharedCheck_1022_ == 0)
{
lean_object* v_unused_1023_; 
v_unused_1023_ = lean_ctor_get(v_a_1006_, 1);
lean_dec(v_unused_1023_);
v___x_1012_ = v_a_1006_;
v_isShared_1013_ = v_isSharedCheck_1022_;
goto v_resetjp_1011_;
}
else
{
lean_inc(v_fst_1010_);
lean_dec(v_a_1006_);
v___x_1012_ = lean_box(0);
v_isShared_1013_ = v_isSharedCheck_1022_;
goto v_resetjp_1011_;
}
v_resetjp_1011_:
{
lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1017_; 
v___x_1014_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps(v_fvars_994_, v_type_995_);
v___x_1015_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps(v_fst_1010_, v___x_1014_);
if (v_isShared_1013_ == 0)
{
lean_ctor_set(v___x_1012_, 1, v___x_1014_);
lean_ctor_set(v___x_1012_, 0, v___x_1015_);
v___x_1017_ = v___x_1012_;
goto v_reusejp_1016_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v___x_1015_);
lean_ctor_set(v_reuseFailAlloc_1021_, 1, v___x_1014_);
v___x_1017_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1016_;
}
v_reusejp_1016_:
{
lean_object* v___x_1019_; 
if (v_isShared_1009_ == 0)
{
lean_ctor_set(v___x_1008_, 0, v___x_1017_);
v___x_1019_ = v___x_1008_;
goto v_reusejp_1018_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v___x_1017_);
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
}
else
{
lean_object* v_a_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1032_; 
v_a_1025_ = lean_ctor_get(v___x_1005_, 0);
v_isSharedCheck_1032_ = !lean_is_exclusive(v___x_1005_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1027_ = v___x_1005_;
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_a_1025_);
lean_dec(v___x_1005_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___boxed(lean_object* v___x_1033_, lean_object* v_fvars_1034_, lean_object* v_type_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_){
_start:
{
lean_object* v_res_1041_; 
v_res_1041_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0(v___x_1033_, v_fvars_1034_, v_type_1035_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
lean_dec(v___y_1037_);
lean_dec_ref(v___y_1036_);
lean_dec_ref(v_type_1035_);
lean_dec_ref(v_fvars_1034_);
return v_res_1041_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1(lean_object* v_fn_1042_, lean_object* v_maxArgs_x3f_1043_, lean_object* v___f_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_){
_start:
{
lean_object* v___y_1051_; lean_object* v___x_1068_; 
lean_inc(v___y_1048_);
lean_inc_ref(v___y_1047_);
lean_inc(v___y_1046_);
lean_inc_ref(v___y_1045_);
v___x_1068_ = lean_infer_type(v_fn_1042_, v___y_1045_, v___y_1046_, v___y_1047_, v___y_1048_);
if (lean_obj_tag(v___x_1068_) == 0)
{
lean_object* v_a_1069_; lean_object* v___x_1070_; uint8_t v_transparency_1071_; uint8_t v___x_1072_; uint8_t v___x_1073_; uint8_t v___x_1074_; 
v_a_1069_ = lean_ctor_get(v___x_1068_, 0);
lean_inc(v_a_1069_);
lean_dec_ref_known(v___x_1068_, 1);
v___x_1070_ = l_Lean_Meta_Context_config(v___y_1045_);
v_transparency_1071_ = lean_ctor_get_uint8(v___x_1070_, 9);
lean_dec_ref(v___x_1070_);
v___x_1072_ = 1;
v___x_1073_ = 0;
v___x_1074_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_1071_, v___x_1072_);
if (v___x_1074_ == 0)
{
lean_object* v___x_1075_; 
v___x_1075_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg(v_a_1069_, v_maxArgs_x3f_1043_, v___f_1044_, v___x_1073_, v___x_1073_, v___y_1045_, v___y_1046_, v___y_1047_, v___y_1048_);
lean_dec(v___y_1048_);
lean_dec_ref(v___y_1047_);
lean_dec(v___y_1046_);
lean_dec_ref(v___y_1045_);
v___y_1051_ = v___x_1075_;
goto v___jp_1050_;
}
else
{
lean_object* v_keyedConfig_1076_; uint8_t v_trackZetaDelta_1077_; lean_object* v_zetaDeltaSet_1078_; lean_object* v_lctx_1079_; lean_object* v_localInstances_1080_; lean_object* v_defEqCtx_x3f_1081_; lean_object* v_synthPendingDepth_1082_; lean_object* v_customCanUnfoldPredicate_x3f_1083_; uint8_t v_univApprox_1084_; uint8_t v_inTypeClassResolution_1085_; uint8_t v_cacheInferType_1086_; lean_object* v___x_1088_; uint8_t v_isShared_1089_; uint8_t v_isSharedCheck_1095_; 
v_keyedConfig_1076_ = lean_ctor_get(v___y_1045_, 0);
v_trackZetaDelta_1077_ = lean_ctor_get_uint8(v___y_1045_, sizeof(void*)*7);
v_zetaDeltaSet_1078_ = lean_ctor_get(v___y_1045_, 1);
v_lctx_1079_ = lean_ctor_get(v___y_1045_, 2);
v_localInstances_1080_ = lean_ctor_get(v___y_1045_, 3);
v_defEqCtx_x3f_1081_ = lean_ctor_get(v___y_1045_, 4);
v_synthPendingDepth_1082_ = lean_ctor_get(v___y_1045_, 5);
v_customCanUnfoldPredicate_x3f_1083_ = lean_ctor_get(v___y_1045_, 6);
v_univApprox_1084_ = lean_ctor_get_uint8(v___y_1045_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1085_ = lean_ctor_get_uint8(v___y_1045_, sizeof(void*)*7 + 2);
v_cacheInferType_1086_ = lean_ctor_get_uint8(v___y_1045_, sizeof(void*)*7 + 3);
v_isSharedCheck_1095_ = !lean_is_exclusive(v___y_1045_);
if (v_isSharedCheck_1095_ == 0)
{
v___x_1088_ = v___y_1045_;
v_isShared_1089_ = v_isSharedCheck_1095_;
goto v_resetjp_1087_;
}
else
{
lean_inc(v_customCanUnfoldPredicate_x3f_1083_);
lean_inc(v_synthPendingDepth_1082_);
lean_inc(v_defEqCtx_x3f_1081_);
lean_inc(v_localInstances_1080_);
lean_inc(v_lctx_1079_);
lean_inc(v_zetaDeltaSet_1078_);
lean_inc(v_keyedConfig_1076_);
lean_dec(v___y_1045_);
v___x_1088_ = lean_box(0);
v_isShared_1089_ = v_isSharedCheck_1095_;
goto v_resetjp_1087_;
}
v_resetjp_1087_:
{
lean_object* v___x_1090_; lean_object* v___x_1092_; 
v___x_1090_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1072_, v_keyedConfig_1076_);
if (v_isShared_1089_ == 0)
{
lean_ctor_set(v___x_1088_, 0, v___x_1090_);
v___x_1092_ = v___x_1088_;
goto v_reusejp_1091_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v___x_1090_);
lean_ctor_set(v_reuseFailAlloc_1094_, 1, v_zetaDeltaSet_1078_);
lean_ctor_set(v_reuseFailAlloc_1094_, 2, v_lctx_1079_);
lean_ctor_set(v_reuseFailAlloc_1094_, 3, v_localInstances_1080_);
lean_ctor_set(v_reuseFailAlloc_1094_, 4, v_defEqCtx_x3f_1081_);
lean_ctor_set(v_reuseFailAlloc_1094_, 5, v_synthPendingDepth_1082_);
lean_ctor_set(v_reuseFailAlloc_1094_, 6, v_customCanUnfoldPredicate_x3f_1083_);
lean_ctor_set_uint8(v_reuseFailAlloc_1094_, sizeof(void*)*7, v_trackZetaDelta_1077_);
lean_ctor_set_uint8(v_reuseFailAlloc_1094_, sizeof(void*)*7 + 1, v_univApprox_1084_);
lean_ctor_set_uint8(v_reuseFailAlloc_1094_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1085_);
lean_ctor_set_uint8(v_reuseFailAlloc_1094_, sizeof(void*)*7 + 3, v_cacheInferType_1086_);
v___x_1092_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1091_;
}
v_reusejp_1091_:
{
lean_object* v___x_1093_; 
v___x_1093_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg(v_a_1069_, v_maxArgs_x3f_1043_, v___f_1044_, v___x_1073_, v___x_1073_, v___x_1092_, v___y_1046_, v___y_1047_, v___y_1048_);
lean_dec(v___y_1048_);
lean_dec_ref(v___y_1047_);
lean_dec(v___y_1046_);
lean_dec_ref(v___x_1092_);
v___y_1051_ = v___x_1093_;
goto v___jp_1050_;
}
}
}
}
else
{
lean_object* v_a_1096_; lean_object* v___x_1098_; uint8_t v_isShared_1099_; uint8_t v_isSharedCheck_1103_; 
lean_dec(v___y_1048_);
lean_dec_ref(v___y_1047_);
lean_dec(v___y_1046_);
lean_dec_ref(v___y_1045_);
lean_dec_ref(v___f_1044_);
lean_dec(v_maxArgs_x3f_1043_);
v_a_1096_ = lean_ctor_get(v___x_1068_, 0);
v_isSharedCheck_1103_ = !lean_is_exclusive(v___x_1068_);
if (v_isSharedCheck_1103_ == 0)
{
v___x_1098_ = v___x_1068_;
v_isShared_1099_ = v_isSharedCheck_1103_;
goto v_resetjp_1097_;
}
else
{
lean_inc(v_a_1096_);
lean_dec(v___x_1068_);
v___x_1098_ = lean_box(0);
v_isShared_1099_ = v_isSharedCheck_1103_;
goto v_resetjp_1097_;
}
v_resetjp_1097_:
{
lean_object* v___x_1101_; 
if (v_isShared_1099_ == 0)
{
v___x_1101_ = v___x_1098_;
goto v_reusejp_1100_;
}
else
{
lean_object* v_reuseFailAlloc_1102_; 
v_reuseFailAlloc_1102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1102_, 0, v_a_1096_);
v___x_1101_ = v_reuseFailAlloc_1102_;
goto v_reusejp_1100_;
}
v_reusejp_1100_:
{
return v___x_1101_;
}
}
}
v___jp_1050_:
{
if (lean_obj_tag(v___y_1051_) == 0)
{
lean_object* v_a_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1059_; 
v_a_1052_ = lean_ctor_get(v___y_1051_, 0);
v_isSharedCheck_1059_ = !lean_is_exclusive(v___y_1051_);
if (v_isSharedCheck_1059_ == 0)
{
v___x_1054_ = v___y_1051_;
v_isShared_1055_ = v_isSharedCheck_1059_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_a_1052_);
lean_dec(v___y_1051_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1059_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
lean_object* v___x_1057_; 
if (v_isShared_1055_ == 0)
{
v___x_1057_ = v___x_1054_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v_a_1052_);
v___x_1057_ = v_reuseFailAlloc_1058_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
return v___x_1057_;
}
}
}
else
{
lean_object* v_a_1060_; lean_object* v___x_1062_; uint8_t v_isShared_1063_; uint8_t v_isSharedCheck_1067_; 
v_a_1060_ = lean_ctor_get(v___y_1051_, 0);
v_isSharedCheck_1067_ = !lean_is_exclusive(v___y_1051_);
if (v_isSharedCheck_1067_ == 0)
{
v___x_1062_ = v___y_1051_;
v_isShared_1063_ = v_isSharedCheck_1067_;
goto v_resetjp_1061_;
}
else
{
lean_inc(v_a_1060_);
lean_dec(v___y_1051_);
v___x_1062_ = lean_box(0);
v_isShared_1063_ = v_isSharedCheck_1067_;
goto v_resetjp_1061_;
}
v_resetjp_1061_:
{
lean_object* v___x_1065_; 
if (v_isShared_1063_ == 0)
{
v___x_1065_ = v___x_1062_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v_a_1060_);
v___x_1065_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1064_;
}
v_reusejp_1064_:
{
return v___x_1065_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1___boxed(lean_object* v_fn_1104_, lean_object* v_maxArgs_x3f_1105_, lean_object* v___f_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_){
_start:
{
lean_object* v_res_1112_; 
v_res_1112_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1(v_fn_1104_, v_maxArgs_x3f_1105_, v___f_1106_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_);
return v_res_1112_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___redArg(lean_object* v_keys_1113_, lean_object* v_vals_1114_, lean_object* v_i_1115_, lean_object* v_k_1116_){
_start:
{
lean_object* v___x_1117_; uint8_t v___x_1118_; 
v___x_1117_ = lean_array_get_size(v_keys_1113_);
v___x_1118_ = lean_nat_dec_lt(v_i_1115_, v___x_1117_);
if (v___x_1118_ == 0)
{
lean_object* v___x_1119_; 
lean_dec(v_i_1115_);
v___x_1119_ = lean_box(0);
return v___x_1119_;
}
else
{
lean_object* v_k_x27_1120_; uint8_t v___x_1121_; 
v_k_x27_1120_ = lean_array_fget_borrowed(v_keys_1113_, v_i_1115_);
v___x_1121_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq(v_k_1116_, v_k_x27_1120_);
if (v___x_1121_ == 0)
{
lean_object* v___x_1122_; lean_object* v___x_1123_; 
v___x_1122_ = lean_unsigned_to_nat(1u);
v___x_1123_ = lean_nat_add(v_i_1115_, v___x_1122_);
lean_dec(v_i_1115_);
v_i_1115_ = v___x_1123_;
goto _start;
}
else
{
lean_object* v___x_1125_; lean_object* v___x_1126_; 
v___x_1125_ = lean_array_fget_borrowed(v_vals_1114_, v_i_1115_);
lean_dec(v_i_1115_);
lean_inc(v___x_1125_);
v___x_1126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1126_, 0, v___x_1125_);
return v___x_1126_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___redArg___boxed(lean_object* v_keys_1127_, lean_object* v_vals_1128_, lean_object* v_i_1129_, lean_object* v_k_1130_){
_start:
{
lean_object* v_res_1131_; 
v_res_1131_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___redArg(v_keys_1127_, v_vals_1128_, v_i_1129_, v_k_1130_);
lean_dec_ref(v_k_1130_);
lean_dec_ref(v_vals_1128_);
lean_dec_ref(v_keys_1127_);
return v_res_1131_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___redArg(lean_object* v_x_1132_, size_t v_x_1133_, lean_object* v_x_1134_){
_start:
{
if (lean_obj_tag(v_x_1132_) == 0)
{
lean_object* v_es_1135_; lean_object* v___x_1136_; size_t v___x_1137_; size_t v___x_1138_; lean_object* v_j_1139_; lean_object* v___x_1140_; 
v_es_1135_ = lean_ctor_get(v_x_1132_, 0);
v___x_1136_ = lean_box(2);
v___x_1137_ = ((size_t)31ULL);
v___x_1138_ = lean_usize_land(v_x_1133_, v___x_1137_);
v_j_1139_ = lean_usize_to_nat(v___x_1138_);
v___x_1140_ = lean_array_get_borrowed(v___x_1136_, v_es_1135_, v_j_1139_);
lean_dec(v_j_1139_);
switch(lean_obj_tag(v___x_1140_))
{
case 0:
{
lean_object* v_key_1141_; lean_object* v_val_1142_; uint8_t v___x_1143_; 
v_key_1141_ = lean_ctor_get(v___x_1140_, 0);
v_val_1142_ = lean_ctor_get(v___x_1140_, 1);
v___x_1143_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq(v_x_1134_, v_key_1141_);
if (v___x_1143_ == 0)
{
lean_object* v___x_1144_; 
v___x_1144_ = lean_box(0);
return v___x_1144_;
}
else
{
lean_object* v___x_1145_; 
lean_inc(v_val_1142_);
v___x_1145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1145_, 0, v_val_1142_);
return v___x_1145_;
}
}
case 1:
{
lean_object* v_node_1146_; size_t v___x_1147_; size_t v___x_1148_; 
v_node_1146_ = lean_ctor_get(v___x_1140_, 0);
v___x_1147_ = ((size_t)5ULL);
v___x_1148_ = lean_usize_shift_right(v_x_1133_, v___x_1147_);
v_x_1132_ = v_node_1146_;
v_x_1133_ = v___x_1148_;
goto _start;
}
default: 
{
lean_object* v___x_1150_; 
v___x_1150_ = lean_box(0);
return v___x_1150_;
}
}
}
else
{
lean_object* v_ks_1151_; lean_object* v_vs_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; 
v_ks_1151_ = lean_ctor_get(v_x_1132_, 0);
v_vs_1152_ = lean_ctor_get(v_x_1132_, 1);
v___x_1153_ = lean_unsigned_to_nat(0u);
v___x_1154_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___redArg(v_ks_1151_, v_vs_1152_, v___x_1153_, v_x_1134_);
return v___x_1154_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___redArg___boxed(lean_object* v_x_1155_, lean_object* v_x_1156_, lean_object* v_x_1157_){
_start:
{
size_t v_x_12228__boxed_1158_; lean_object* v_res_1159_; 
v_x_12228__boxed_1158_ = lean_unbox_usize(v_x_1156_);
lean_dec(v_x_1156_);
v_res_1159_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___redArg(v_x_1155_, v_x_12228__boxed_1158_, v_x_1157_);
lean_dec_ref(v_x_1157_);
lean_dec_ref(v_x_1155_);
return v_res_1159_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___redArg(lean_object* v_x_1160_, lean_object* v_x_1161_){
_start:
{
uint64_t v___x_1162_; size_t v___x_1163_; lean_object* v___x_1164_; 
v___x_1162_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash(v_x_1161_);
v___x_1163_ = lean_uint64_to_usize(v___x_1162_);
v___x_1164_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___redArg(v_x_1160_, v___x_1163_, v_x_1161_);
return v___x_1164_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___redArg___boxed(lean_object* v_x_1165_, lean_object* v_x_1166_){
_start:
{
lean_object* v_res_1167_; 
v_res_1167_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___redArg(v_x_1165_, v_x_1166_);
lean_dec_ref(v_x_1166_);
lean_dec_ref(v_x_1165_);
return v_res_1167_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22_spec__23___redArg(lean_object* v_x_1168_, lean_object* v_x_1169_, lean_object* v_x_1170_, lean_object* v_x_1171_){
_start:
{
lean_object* v_ks_1172_; lean_object* v_vs_1173_; lean_object* v___x_1175_; uint8_t v_isShared_1176_; uint8_t v_isSharedCheck_1197_; 
v_ks_1172_ = lean_ctor_get(v_x_1168_, 0);
v_vs_1173_ = lean_ctor_get(v_x_1168_, 1);
v_isSharedCheck_1197_ = !lean_is_exclusive(v_x_1168_);
if (v_isSharedCheck_1197_ == 0)
{
v___x_1175_ = v_x_1168_;
v_isShared_1176_ = v_isSharedCheck_1197_;
goto v_resetjp_1174_;
}
else
{
lean_inc(v_vs_1173_);
lean_inc(v_ks_1172_);
lean_dec(v_x_1168_);
v___x_1175_ = lean_box(0);
v_isShared_1176_ = v_isSharedCheck_1197_;
goto v_resetjp_1174_;
}
v_resetjp_1174_:
{
lean_object* v___x_1177_; uint8_t v___x_1178_; 
v___x_1177_ = lean_array_get_size(v_ks_1172_);
v___x_1178_ = lean_nat_dec_lt(v_x_1169_, v___x_1177_);
if (v___x_1178_ == 0)
{
lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1182_; 
lean_dec(v_x_1169_);
v___x_1179_ = lean_array_push(v_ks_1172_, v_x_1170_);
v___x_1180_ = lean_array_push(v_vs_1173_, v_x_1171_);
if (v_isShared_1176_ == 0)
{
lean_ctor_set(v___x_1175_, 1, v___x_1180_);
lean_ctor_set(v___x_1175_, 0, v___x_1179_);
v___x_1182_ = v___x_1175_;
goto v_reusejp_1181_;
}
else
{
lean_object* v_reuseFailAlloc_1183_; 
v_reuseFailAlloc_1183_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1183_, 0, v___x_1179_);
lean_ctor_set(v_reuseFailAlloc_1183_, 1, v___x_1180_);
v___x_1182_ = v_reuseFailAlloc_1183_;
goto v_reusejp_1181_;
}
v_reusejp_1181_:
{
return v___x_1182_;
}
}
else
{
lean_object* v_k_x27_1184_; uint8_t v___x_1185_; 
v_k_x27_1184_ = lean_array_fget_borrowed(v_ks_1172_, v_x_1169_);
v___x_1185_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq(v_x_1170_, v_k_x27_1184_);
if (v___x_1185_ == 0)
{
lean_object* v___x_1187_; 
if (v_isShared_1176_ == 0)
{
v___x_1187_ = v___x_1175_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v_ks_1172_);
lean_ctor_set(v_reuseFailAlloc_1191_, 1, v_vs_1173_);
v___x_1187_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
lean_object* v___x_1188_; lean_object* v___x_1189_; 
v___x_1188_ = lean_unsigned_to_nat(1u);
v___x_1189_ = lean_nat_add(v_x_1169_, v___x_1188_);
lean_dec(v_x_1169_);
v_x_1168_ = v___x_1187_;
v_x_1169_ = v___x_1189_;
goto _start;
}
}
else
{
lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1195_; 
v___x_1192_ = lean_array_fset(v_ks_1172_, v_x_1169_, v_x_1170_);
v___x_1193_ = lean_array_fset(v_vs_1173_, v_x_1169_, v_x_1171_);
lean_dec(v_x_1169_);
if (v_isShared_1176_ == 0)
{
lean_ctor_set(v___x_1175_, 1, v___x_1193_);
lean_ctor_set(v___x_1175_, 0, v___x_1192_);
v___x_1195_ = v___x_1175_;
goto v_reusejp_1194_;
}
else
{
lean_object* v_reuseFailAlloc_1196_; 
v_reuseFailAlloc_1196_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1196_, 0, v___x_1192_);
lean_ctor_set(v_reuseFailAlloc_1196_, 1, v___x_1193_);
v___x_1195_ = v_reuseFailAlloc_1196_;
goto v_reusejp_1194_;
}
v_reusejp_1194_:
{
return v___x_1195_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22___redArg(lean_object* v_n_1198_, lean_object* v_k_1199_, lean_object* v_v_1200_){
_start:
{
lean_object* v___x_1201_; lean_object* v___x_1202_; 
v___x_1201_ = lean_unsigned_to_nat(0u);
v___x_1202_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22_spec__23___redArg(v_n_1198_, v___x_1201_, v_k_1199_, v_v_1200_);
return v___x_1202_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0(void){
_start:
{
lean_object* v___x_1203_; 
v___x_1203_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1203_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg(lean_object* v_x_1204_, size_t v_x_1205_, size_t v_x_1206_, lean_object* v_x_1207_, lean_object* v_x_1208_){
_start:
{
if (lean_obj_tag(v_x_1204_) == 0)
{
lean_object* v_es_1209_; size_t v___x_1210_; size_t v___x_1211_; lean_object* v_j_1212_; lean_object* v___x_1213_; uint8_t v___x_1214_; 
v_es_1209_ = lean_ctor_get(v_x_1204_, 0);
v___x_1210_ = ((size_t)31ULL);
v___x_1211_ = lean_usize_land(v_x_1205_, v___x_1210_);
v_j_1212_ = lean_usize_to_nat(v___x_1211_);
v___x_1213_ = lean_array_get_size(v_es_1209_);
v___x_1214_ = lean_nat_dec_lt(v_j_1212_, v___x_1213_);
if (v___x_1214_ == 0)
{
lean_dec(v_j_1212_);
lean_dec(v_x_1208_);
lean_dec_ref(v_x_1207_);
return v_x_1204_;
}
else
{
lean_object* v___x_1216_; uint8_t v_isShared_1217_; uint8_t v_isSharedCheck_1253_; 
lean_inc_ref(v_es_1209_);
v_isSharedCheck_1253_ = !lean_is_exclusive(v_x_1204_);
if (v_isSharedCheck_1253_ == 0)
{
lean_object* v_unused_1254_; 
v_unused_1254_ = lean_ctor_get(v_x_1204_, 0);
lean_dec(v_unused_1254_);
v___x_1216_ = v_x_1204_;
v_isShared_1217_ = v_isSharedCheck_1253_;
goto v_resetjp_1215_;
}
else
{
lean_dec(v_x_1204_);
v___x_1216_ = lean_box(0);
v_isShared_1217_ = v_isSharedCheck_1253_;
goto v_resetjp_1215_;
}
v_resetjp_1215_:
{
lean_object* v_v_1218_; lean_object* v___x_1219_; lean_object* v_xs_x27_1220_; lean_object* v___y_1222_; 
v_v_1218_ = lean_array_fget(v_es_1209_, v_j_1212_);
v___x_1219_ = lean_box(0);
v_xs_x27_1220_ = lean_array_fset(v_es_1209_, v_j_1212_, v___x_1219_);
switch(lean_obj_tag(v_v_1218_))
{
case 0:
{
lean_object* v_key_1227_; lean_object* v_val_1228_; lean_object* v___x_1230_; uint8_t v_isShared_1231_; uint8_t v_isSharedCheck_1238_; 
v_key_1227_ = lean_ctor_get(v_v_1218_, 0);
v_val_1228_ = lean_ctor_get(v_v_1218_, 1);
v_isSharedCheck_1238_ = !lean_is_exclusive(v_v_1218_);
if (v_isSharedCheck_1238_ == 0)
{
v___x_1230_ = v_v_1218_;
v_isShared_1231_ = v_isSharedCheck_1238_;
goto v_resetjp_1229_;
}
else
{
lean_inc(v_val_1228_);
lean_inc(v_key_1227_);
lean_dec(v_v_1218_);
v___x_1230_ = lean_box(0);
v_isShared_1231_ = v_isSharedCheck_1238_;
goto v_resetjp_1229_;
}
v_resetjp_1229_:
{
uint8_t v___x_1232_; 
v___x_1232_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq(v_x_1207_, v_key_1227_);
if (v___x_1232_ == 0)
{
lean_object* v___x_1233_; lean_object* v___x_1234_; 
lean_del_object(v___x_1230_);
v___x_1233_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1227_, v_val_1228_, v_x_1207_, v_x_1208_);
v___x_1234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1234_, 0, v___x_1233_);
v___y_1222_ = v___x_1234_;
goto v___jp_1221_;
}
else
{
lean_object* v___x_1236_; 
lean_dec(v_val_1228_);
lean_dec(v_key_1227_);
if (v_isShared_1231_ == 0)
{
lean_ctor_set(v___x_1230_, 1, v_x_1208_);
lean_ctor_set(v___x_1230_, 0, v_x_1207_);
v___x_1236_ = v___x_1230_;
goto v_reusejp_1235_;
}
else
{
lean_object* v_reuseFailAlloc_1237_; 
v_reuseFailAlloc_1237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1237_, 0, v_x_1207_);
lean_ctor_set(v_reuseFailAlloc_1237_, 1, v_x_1208_);
v___x_1236_ = v_reuseFailAlloc_1237_;
goto v_reusejp_1235_;
}
v_reusejp_1235_:
{
v___y_1222_ = v___x_1236_;
goto v___jp_1221_;
}
}
}
}
case 1:
{
lean_object* v_node_1239_; lean_object* v___x_1241_; uint8_t v_isShared_1242_; uint8_t v_isSharedCheck_1251_; 
v_node_1239_ = lean_ctor_get(v_v_1218_, 0);
v_isSharedCheck_1251_ = !lean_is_exclusive(v_v_1218_);
if (v_isSharedCheck_1251_ == 0)
{
v___x_1241_ = v_v_1218_;
v_isShared_1242_ = v_isSharedCheck_1251_;
goto v_resetjp_1240_;
}
else
{
lean_inc(v_node_1239_);
lean_dec(v_v_1218_);
v___x_1241_ = lean_box(0);
v_isShared_1242_ = v_isSharedCheck_1251_;
goto v_resetjp_1240_;
}
v_resetjp_1240_:
{
size_t v___x_1243_; size_t v___x_1244_; size_t v___x_1245_; size_t v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1249_; 
v___x_1243_ = ((size_t)5ULL);
v___x_1244_ = lean_usize_shift_right(v_x_1205_, v___x_1243_);
v___x_1245_ = ((size_t)1ULL);
v___x_1246_ = lean_usize_add(v_x_1206_, v___x_1245_);
v___x_1247_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg(v_node_1239_, v___x_1244_, v___x_1246_, v_x_1207_, v_x_1208_);
if (v_isShared_1242_ == 0)
{
lean_ctor_set(v___x_1241_, 0, v___x_1247_);
v___x_1249_ = v___x_1241_;
goto v_reusejp_1248_;
}
else
{
lean_object* v_reuseFailAlloc_1250_; 
v_reuseFailAlloc_1250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1250_, 0, v___x_1247_);
v___x_1249_ = v_reuseFailAlloc_1250_;
goto v_reusejp_1248_;
}
v_reusejp_1248_:
{
v___y_1222_ = v___x_1249_;
goto v___jp_1221_;
}
}
}
default: 
{
lean_object* v___x_1252_; 
v___x_1252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1252_, 0, v_x_1207_);
lean_ctor_set(v___x_1252_, 1, v_x_1208_);
v___y_1222_ = v___x_1252_;
goto v___jp_1221_;
}
}
v___jp_1221_:
{
lean_object* v___x_1223_; lean_object* v___x_1225_; 
v___x_1223_ = lean_array_fset(v_xs_x27_1220_, v_j_1212_, v___y_1222_);
lean_dec(v_j_1212_);
if (v_isShared_1217_ == 0)
{
lean_ctor_set(v___x_1216_, 0, v___x_1223_);
v___x_1225_ = v___x_1216_;
goto v_reusejp_1224_;
}
else
{
lean_object* v_reuseFailAlloc_1226_; 
v_reuseFailAlloc_1226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1226_, 0, v___x_1223_);
v___x_1225_ = v_reuseFailAlloc_1226_;
goto v_reusejp_1224_;
}
v_reusejp_1224_:
{
return v___x_1225_;
}
}
}
}
}
else
{
lean_object* v_ks_1255_; lean_object* v_vs_1256_; lean_object* v___x_1258_; uint8_t v_isShared_1259_; uint8_t v_isSharedCheck_1274_; 
v_ks_1255_ = lean_ctor_get(v_x_1204_, 0);
v_vs_1256_ = lean_ctor_get(v_x_1204_, 1);
v_isSharedCheck_1274_ = !lean_is_exclusive(v_x_1204_);
if (v_isSharedCheck_1274_ == 0)
{
v___x_1258_ = v_x_1204_;
v_isShared_1259_ = v_isSharedCheck_1274_;
goto v_resetjp_1257_;
}
else
{
lean_inc(v_vs_1256_);
lean_inc(v_ks_1255_);
lean_dec(v_x_1204_);
v___x_1258_ = lean_box(0);
v_isShared_1259_ = v_isSharedCheck_1274_;
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
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v_ks_1255_);
lean_ctor_set(v_reuseFailAlloc_1273_, 1, v_vs_1256_);
v___x_1261_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1260_;
}
v_reusejp_1260_:
{
lean_object* v_newNode_1262_; size_t v___x_1263_; uint8_t v___x_1264_; 
v_newNode_1262_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22___redArg(v___x_1261_, v_x_1207_, v_x_1208_);
v___x_1263_ = ((size_t)7ULL);
v___x_1264_ = lean_usize_dec_le(v___x_1263_, v_x_1206_);
if (v___x_1264_ == 0)
{
lean_object* v___x_1265_; lean_object* v___x_1266_; uint8_t v___x_1267_; 
v___x_1265_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1262_);
v___x_1266_ = lean_unsigned_to_nat(4u);
v___x_1267_ = lean_nat_dec_lt(v___x_1265_, v___x_1266_);
lean_dec(v___x_1265_);
if (v___x_1267_ == 0)
{
lean_object* v_ks_1268_; lean_object* v_vs_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; 
v_ks_1268_ = lean_ctor_get(v_newNode_1262_, 0);
lean_inc_ref(v_ks_1268_);
v_vs_1269_ = lean_ctor_get(v_newNode_1262_, 1);
lean_inc_ref(v_vs_1269_);
lean_dec_ref(v_newNode_1262_);
v___x_1270_ = lean_unsigned_to_nat(0u);
v___x_1271_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0);
v___x_1272_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___redArg(v_x_1206_, v_ks_1268_, v_vs_1269_, v___x_1270_, v___x_1271_);
lean_dec_ref(v_vs_1269_);
lean_dec_ref(v_ks_1268_);
return v___x_1272_;
}
else
{
return v_newNode_1262_;
}
}
else
{
return v_newNode_1262_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___redArg(size_t v_depth_1275_, lean_object* v_keys_1276_, lean_object* v_vals_1277_, lean_object* v_i_1278_, lean_object* v_entries_1279_){
_start:
{
lean_object* v___x_1280_; uint8_t v___x_1281_; 
v___x_1280_ = lean_array_get_size(v_keys_1276_);
v___x_1281_ = lean_nat_dec_lt(v_i_1278_, v___x_1280_);
if (v___x_1281_ == 0)
{
lean_dec(v_i_1278_);
return v_entries_1279_;
}
else
{
lean_object* v_k_1282_; lean_object* v_v_1283_; uint64_t v___x_1284_; size_t v_h_1285_; size_t v___x_1286_; lean_object* v___x_1287_; size_t v___x_1288_; size_t v___x_1289_; size_t v___x_1290_; size_t v_h_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; 
v_k_1282_ = lean_array_fget_borrowed(v_keys_1276_, v_i_1278_);
v_v_1283_ = lean_array_fget_borrowed(v_vals_1277_, v_i_1278_);
v___x_1284_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash(v_k_1282_);
v_h_1285_ = lean_uint64_to_usize(v___x_1284_);
v___x_1286_ = ((size_t)5ULL);
v___x_1287_ = lean_unsigned_to_nat(1u);
v___x_1288_ = ((size_t)1ULL);
v___x_1289_ = lean_usize_sub(v_depth_1275_, v___x_1288_);
v___x_1290_ = lean_usize_mul(v___x_1286_, v___x_1289_);
v_h_1291_ = lean_usize_shift_right(v_h_1285_, v___x_1290_);
v___x_1292_ = lean_nat_add(v_i_1278_, v___x_1287_);
lean_dec(v_i_1278_);
lean_inc(v_v_1283_);
lean_inc(v_k_1282_);
v___x_1293_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg(v_entries_1279_, v_h_1291_, v_depth_1275_, v_k_1282_, v_v_1283_);
v_i_1278_ = v___x_1292_;
v_entries_1279_ = v___x_1293_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___redArg___boxed(lean_object* v_depth_1295_, lean_object* v_keys_1296_, lean_object* v_vals_1297_, lean_object* v_i_1298_, lean_object* v_entries_1299_){
_start:
{
size_t v_depth_boxed_1300_; lean_object* v_res_1301_; 
v_depth_boxed_1300_ = lean_unbox_usize(v_depth_1295_);
lean_dec(v_depth_1295_);
v_res_1301_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___redArg(v_depth_boxed_1300_, v_keys_1296_, v_vals_1297_, v_i_1298_, v_entries_1299_);
lean_dec_ref(v_vals_1297_);
lean_dec_ref(v_keys_1296_);
return v_res_1301_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___boxed(lean_object* v_x_1302_, lean_object* v_x_1303_, lean_object* v_x_1304_, lean_object* v_x_1305_, lean_object* v_x_1306_){
_start:
{
size_t v_x_12363__boxed_1307_; size_t v_x_12364__boxed_1308_; lean_object* v_res_1309_; 
v_x_12363__boxed_1307_ = lean_unbox_usize(v_x_1303_);
lean_dec(v_x_1303_);
v_x_12364__boxed_1308_ = lean_unbox_usize(v_x_1304_);
lean_dec(v_x_1304_);
v_res_1309_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg(v_x_1302_, v_x_12363__boxed_1307_, v_x_12364__boxed_1308_, v_x_1305_, v_x_1306_);
return v_res_1309_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16___redArg(lean_object* v_x_1310_, lean_object* v_x_1311_, lean_object* v_x_1312_){
_start:
{
uint64_t v___x_1313_; size_t v___x_1314_; size_t v___x_1315_; lean_object* v___x_1316_; 
v___x_1313_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash(v_x_1311_);
v___x_1314_ = lean_uint64_to_usize(v___x_1313_);
v___x_1315_ = ((size_t)1ULL);
v___x_1316_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg(v_x_1310_, v___x_1314_, v___x_1315_, v_x_1311_, v_x_1312_);
return v___x_1316_;
}
}
static lean_object* _init_l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1317_; 
v___x_1317_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1317_;
}
}
static lean_object* _init_l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1318_; lean_object* v___x_1319_; 
v___x_1318_ = lean_obj_once(&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__0, &l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__0_once, _init_l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__0);
v___x_1319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1318_);
return v___x_1319_;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0(lean_object* v_realizeMapRef_1320_, lean_object* v_env_1321_, lean_object* v_env_1322_, lean_object* v_forConst_1323_, lean_object* v_ctx_1324_, lean_object* v_realize_1325_, lean_object* v_opts_1326_, lean_object* v_key_1327_, lean_object* v_inst_1328_, lean_object* v_____r_1329_){
_start:
{
lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v_fst_1334_; lean_object* v_snd_1335_; lean_object* v___y_1385_; lean_object* v___x_1390_; 
v___x_1331_ = lean_io_promise_new();
v___x_1332_ = lean_st_ref_take(v_realizeMapRef_1320_);
v___x_1390_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_1332_, v_inst_1328_);
if (lean_obj_tag(v___x_1390_) == 0)
{
lean_object* v___x_1391_; 
v___x_1391_ = lean_obj_once(&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__1, &l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__1_once, _init_l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__1);
v___y_1385_ = v___x_1391_;
goto v___jp_1384_;
}
else
{
lean_object* v_val_1392_; 
v_val_1392_ = lean_ctor_get(v___x_1390_, 0);
lean_inc(v_val_1392_);
lean_dec_ref_known(v___x_1390_, 1);
v___y_1385_ = v_val_1392_;
goto v___jp_1384_;
}
v___jp_1333_:
{
lean_object* v___x_1336_; 
v___x_1336_ = lean_st_ref_put(v_realizeMapRef_1320_, v_snd_1335_);
if (lean_obj_tag(v_fst_1334_) == 1)
{
lean_object* v_val_1337_; lean_object* v___x_1339_; uint8_t v_isShared_1340_; uint8_t v_isSharedCheck_1345_; 
lean_dec(v___x_1331_);
lean_dec_ref(v_opts_1326_);
lean_dec_ref(v_realize_1325_);
lean_dec_ref(v_ctx_1324_);
lean_dec(v_forConst_1323_);
lean_dec_ref(v_env_1322_);
lean_dec(v_env_1321_);
v_val_1337_ = lean_ctor_get(v_fst_1334_, 0);
v_isSharedCheck_1345_ = !lean_is_exclusive(v_fst_1334_);
if (v_isSharedCheck_1345_ == 0)
{
v___x_1339_ = v_fst_1334_;
v_isShared_1340_ = v_isSharedCheck_1345_;
goto v_resetjp_1338_;
}
else
{
lean_inc(v_val_1337_);
lean_dec(v_fst_1334_);
v___x_1339_ = lean_box(0);
v_isShared_1340_ = v_isSharedCheck_1345_;
goto v_resetjp_1338_;
}
v_resetjp_1338_:
{
lean_object* v___x_1341_; lean_object* v___x_1343_; 
v___x_1341_ = lean_task_get_own(v_val_1337_);
if (v_isShared_1340_ == 0)
{
lean_ctor_set_tag(v___x_1339_, 0);
lean_ctor_set(v___x_1339_, 0, v___x_1341_);
v___x_1343_ = v___x_1339_;
goto v_reusejp_1342_;
}
else
{
lean_object* v_reuseFailAlloc_1344_; 
v_reuseFailAlloc_1344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1344_, 0, v___x_1341_);
v___x_1343_ = v_reuseFailAlloc_1344_;
goto v_reusejp_1342_;
}
v_reusejp_1342_:
{
return v___x_1343_;
}
}
}
else
{
lean_object* v_base_1346_; lean_object* v_serverBaseExts_1347_; lean_object* v_checked_1348_; lean_object* v_asyncConstsMap_1349_; lean_object* v_asyncCtx_x3f_1350_; lean_object* v_localRealizationCtxMap_1351_; lean_object* v_allRealizations_1352_; uint8_t v_isExporting_1353_; uint8_t v_isRecordingDeps_1354_; lean_object* v_synthCacheRaw_x3f_1355_; lean_object* v_declChangeLog_1356_; lean_object* v_recordingConstGen_1357_; lean_object* v_constAddedGens_1358_; lean_object* v_constGen_1359_; lean_object* v_importRealizationCtx_x3f_1360_; lean_object* v___x_1362_; uint8_t v_isShared_1363_; uint8_t v_isSharedCheck_1371_; 
lean_dec(v_fst_1334_);
v_base_1346_ = lean_ctor_get(v_env_1321_, 0);
lean_inc_ref(v_base_1346_);
v_serverBaseExts_1347_ = lean_ctor_get(v_env_1321_, 1);
lean_inc_ref(v_serverBaseExts_1347_);
v_checked_1348_ = lean_ctor_get(v_env_1321_, 2);
lean_inc_ref(v_checked_1348_);
v_asyncConstsMap_1349_ = lean_ctor_get(v_env_1321_, 3);
lean_inc_ref(v_asyncConstsMap_1349_);
v_asyncCtx_x3f_1350_ = lean_ctor_get(v_env_1321_, 4);
lean_inc(v_asyncCtx_x3f_1350_);
v_localRealizationCtxMap_1351_ = lean_ctor_get(v_env_1321_, 6);
lean_inc(v_localRealizationCtxMap_1351_);
v_allRealizations_1352_ = lean_ctor_get(v_env_1321_, 7);
lean_inc_ref(v_allRealizations_1352_);
v_isExporting_1353_ = lean_ctor_get_uint8(v_env_1321_, sizeof(void*)*13);
v_isRecordingDeps_1354_ = lean_ctor_get_uint8(v_env_1321_, sizeof(void*)*13 + 1);
v_synthCacheRaw_x3f_1355_ = lean_ctor_get(v_env_1321_, 8);
lean_inc(v_synthCacheRaw_x3f_1355_);
v_declChangeLog_1356_ = lean_ctor_get(v_env_1321_, 9);
lean_inc_ref(v_declChangeLog_1356_);
v_recordingConstGen_1357_ = lean_ctor_get(v_env_1321_, 10);
lean_inc(v_recordingConstGen_1357_);
v_constAddedGens_1358_ = lean_ctor_get(v_env_1321_, 11);
lean_inc_ref(v_constAddedGens_1358_);
v_constGen_1359_ = lean_ctor_get(v_env_1321_, 12);
lean_inc(v_constGen_1359_);
lean_dec(v_env_1321_);
v_importRealizationCtx_x3f_1360_ = lean_ctor_get(v_env_1322_, 5);
v_isSharedCheck_1371_ = !lean_is_exclusive(v_env_1322_);
if (v_isSharedCheck_1371_ == 0)
{
lean_object* v_unused_1372_; lean_object* v_unused_1373_; lean_object* v_unused_1374_; lean_object* v_unused_1375_; lean_object* v_unused_1376_; lean_object* v_unused_1377_; lean_object* v_unused_1378_; lean_object* v_unused_1379_; lean_object* v_unused_1380_; lean_object* v_unused_1381_; lean_object* v_unused_1382_; lean_object* v_unused_1383_; 
v_unused_1372_ = lean_ctor_get(v_env_1322_, 12);
lean_dec(v_unused_1372_);
v_unused_1373_ = lean_ctor_get(v_env_1322_, 11);
lean_dec(v_unused_1373_);
v_unused_1374_ = lean_ctor_get(v_env_1322_, 10);
lean_dec(v_unused_1374_);
v_unused_1375_ = lean_ctor_get(v_env_1322_, 9);
lean_dec(v_unused_1375_);
v_unused_1376_ = lean_ctor_get(v_env_1322_, 8);
lean_dec(v_unused_1376_);
v_unused_1377_ = lean_ctor_get(v_env_1322_, 7);
lean_dec(v_unused_1377_);
v_unused_1378_ = lean_ctor_get(v_env_1322_, 6);
lean_dec(v_unused_1378_);
v_unused_1379_ = lean_ctor_get(v_env_1322_, 4);
lean_dec(v_unused_1379_);
v_unused_1380_ = lean_ctor_get(v_env_1322_, 3);
lean_dec(v_unused_1380_);
v_unused_1381_ = lean_ctor_get(v_env_1322_, 2);
lean_dec(v_unused_1381_);
v_unused_1382_ = lean_ctor_get(v_env_1322_, 1);
lean_dec(v_unused_1382_);
v_unused_1383_ = lean_ctor_get(v_env_1322_, 0);
lean_dec(v_unused_1383_);
v___x_1362_ = v_env_1322_;
v_isShared_1363_ = v_isSharedCheck_1371_;
goto v_resetjp_1361_;
}
else
{
lean_inc(v_importRealizationCtx_x3f_1360_);
lean_dec(v_env_1322_);
v___x_1362_ = lean_box(0);
v_isShared_1363_ = v_isSharedCheck_1371_;
goto v_resetjp_1361_;
}
v_resetjp_1361_:
{
lean_object* v___x_1364_; lean_object* v___x_1366_; 
v___x_1364_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_forConst_1323_, v_ctx_1324_, v_localRealizationCtxMap_1351_);
if (v_isShared_1363_ == 0)
{
lean_ctor_set(v___x_1362_, 12, v_constGen_1359_);
lean_ctor_set(v___x_1362_, 11, v_constAddedGens_1358_);
lean_ctor_set(v___x_1362_, 10, v_recordingConstGen_1357_);
lean_ctor_set(v___x_1362_, 9, v_declChangeLog_1356_);
lean_ctor_set(v___x_1362_, 8, v_synthCacheRaw_x3f_1355_);
lean_ctor_set(v___x_1362_, 7, v_allRealizations_1352_);
lean_ctor_set(v___x_1362_, 6, v___x_1364_);
lean_ctor_set(v___x_1362_, 4, v_asyncCtx_x3f_1350_);
lean_ctor_set(v___x_1362_, 3, v_asyncConstsMap_1349_);
lean_ctor_set(v___x_1362_, 2, v_checked_1348_);
lean_ctor_set(v___x_1362_, 1, v_serverBaseExts_1347_);
lean_ctor_set(v___x_1362_, 0, v_base_1346_);
v___x_1366_ = v___x_1362_;
goto v_reusejp_1365_;
}
else
{
lean_object* v_reuseFailAlloc_1370_; 
v_reuseFailAlloc_1370_ = lean_alloc_ctor(0, 13, 2);
lean_ctor_set(v_reuseFailAlloc_1370_, 0, v_base_1346_);
lean_ctor_set(v_reuseFailAlloc_1370_, 1, v_serverBaseExts_1347_);
lean_ctor_set(v_reuseFailAlloc_1370_, 2, v_checked_1348_);
lean_ctor_set(v_reuseFailAlloc_1370_, 3, v_asyncConstsMap_1349_);
lean_ctor_set(v_reuseFailAlloc_1370_, 4, v_asyncCtx_x3f_1350_);
lean_ctor_set(v_reuseFailAlloc_1370_, 5, v_importRealizationCtx_x3f_1360_);
lean_ctor_set(v_reuseFailAlloc_1370_, 6, v___x_1364_);
lean_ctor_set(v_reuseFailAlloc_1370_, 7, v_allRealizations_1352_);
lean_ctor_set(v_reuseFailAlloc_1370_, 8, v_synthCacheRaw_x3f_1355_);
lean_ctor_set(v_reuseFailAlloc_1370_, 9, v_declChangeLog_1356_);
lean_ctor_set(v_reuseFailAlloc_1370_, 10, v_recordingConstGen_1357_);
lean_ctor_set(v_reuseFailAlloc_1370_, 11, v_constAddedGens_1358_);
lean_ctor_set(v_reuseFailAlloc_1370_, 12, v_constGen_1359_);
v___x_1366_ = v_reuseFailAlloc_1370_;
goto v_reusejp_1365_;
}
v_reusejp_1365_:
{
lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; 
lean_ctor_set_uint8(v___x_1366_, sizeof(void*)*13, v_isExporting_1353_);
lean_ctor_set_uint8(v___x_1366_, sizeof(void*)*13 + 1, v_isRecordingDeps_1354_);
v___x_1367_ = lean_apply_3(v_realize_1325_, v___x_1366_, v_opts_1326_, lean_box(0));
lean_inc(v___x_1367_);
v___x_1368_ = lean_io_promise_resolve(v___x_1367_, v___x_1331_);
lean_dec(v___x_1331_);
v___x_1369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1369_, 0, v___x_1367_);
return v___x_1369_;
}
}
}
}
v___jp_1384_:
{
lean_object* v___x_1386_; 
v___x_1386_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___redArg(v___y_1385_, v_key_1327_);
if (lean_obj_tag(v___x_1386_) == 0)
{
lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; 
v___x_1387_ = l_IO_Promise_result_x21___redArg(v___x_1331_);
v___x_1388_ = l_Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16___redArg(v___y_1385_, v_key_1327_, v___x_1387_);
v___x_1389_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_inst_1328_, v___x_1388_, v___x_1332_);
v_fst_1334_ = v___x_1386_;
v_snd_1335_ = v___x_1389_;
goto v___jp_1333_;
}
else
{
lean_dec_ref(v___y_1385_);
lean_dec(v_inst_1328_);
lean_dec_ref(v_key_1327_);
v_fst_1334_ = v___x_1386_;
v_snd_1335_ = v___x_1332_;
goto v___jp_1333_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___boxed(lean_object* v_realizeMapRef_1393_, lean_object* v_env_1394_, lean_object* v_env_1395_, lean_object* v_forConst_1396_, lean_object* v_ctx_1397_, lean_object* v_realize_1398_, lean_object* v_opts_1399_, lean_object* v_key_1400_, lean_object* v_inst_1401_, lean_object* v_____r_1402_, lean_object* v___y_1403_){
_start:
{
lean_object* v_res_1404_; 
v_res_1404_ = l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0(v_realizeMapRef_1393_, v_env_1394_, v_env_1395_, v_forConst_1396_, v_ctx_1397_, v_realize_1398_, v_opts_1399_, v_key_1400_, v_inst_1401_, v_____r_1402_);
lean_dec(v_realizeMapRef_1393_);
return v_res_1404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11(lean_object* v_inst_1411_, lean_object* v_env_1412_, lean_object* v_forConst_1413_, lean_object* v_key_1414_, lean_object* v_realize_1415_){
_start:
{
lean_object* v___x_1417_; lean_object* v_a_1419_; lean_object* v___y_1423_; lean_object* v_ctx_1426_; uint8_t v___x_1440_; 
v___x_1417_ = lean_io_get_num_heartbeats();
v___x_1440_ = l_Lean_Environment_isImportedConst(v_env_1412_, v_forConst_1413_);
if (v___x_1440_ == 0)
{
lean_object* v_localRealizationCtxMap_1441_; lean_object* v___x_1442_; 
v_localRealizationCtxMap_1441_ = lean_ctor_get(v_env_1412_, 6);
v___x_1442_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_localRealizationCtxMap_1441_, v_forConst_1413_);
if (lean_obj_tag(v___x_1442_) == 0)
{
lean_object* v___x_1443_; uint8_t v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; 
lean_dec(v___x_1417_);
lean_dec_ref(v_realize_1415_);
lean_dec_ref(v_key_1414_);
lean_dec_ref(v_env_1412_);
v___x_1443_ = ((lean_object*)(l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__0));
v___x_1444_ = 1;
v___x_1445_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_inst_1411_, v___x_1444_);
v___x_1446_ = lean_string_append(v___x_1443_, v___x_1445_);
lean_dec_ref(v___x_1445_);
v___x_1447_ = ((lean_object*)(l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__1));
v___x_1448_ = lean_string_append(v___x_1446_, v___x_1447_);
v___x_1449_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_forConst_1413_, v___x_1444_);
v___x_1450_ = lean_string_append(v___x_1448_, v___x_1449_);
lean_dec_ref(v___x_1449_);
v___x_1451_ = ((lean_object*)(l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__2));
v___x_1452_ = lean_string_append(v___x_1450_, v___x_1451_);
v___x_1453_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1453_, 0, v___x_1452_);
v___x_1454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1454_, 0, v___x_1453_);
return v___x_1454_;
}
else
{
lean_object* v_val_1455_; 
v_val_1455_ = lean_ctor_get(v___x_1442_, 0);
lean_inc(v_val_1455_);
lean_dec_ref_known(v___x_1442_, 1);
v_ctx_1426_ = v_val_1455_;
goto v___jp_1425_;
}
}
else
{
lean_object* v_importRealizationCtx_x3f_1456_; 
v_importRealizationCtx_x3f_1456_ = lean_ctor_get(v_env_1412_, 5);
if (lean_obj_tag(v_importRealizationCtx_x3f_1456_) == 0)
{
lean_object* v___x_1457_; lean_object* v___x_1458_; 
lean_dec(v___x_1417_);
lean_dec_ref(v_realize_1415_);
lean_dec_ref(v_key_1414_);
lean_dec(v_forConst_1413_);
lean_dec_ref(v_env_1412_);
lean_dec(v_inst_1411_);
v___x_1457_ = ((lean_object*)(l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__4));
v___x_1458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1458_, 0, v___x_1457_);
return v___x_1458_;
}
else
{
lean_object* v_val_1459_; 
v_val_1459_ = lean_ctor_get(v_importRealizationCtx_x3f_1456_, 0);
lean_inc(v_val_1459_);
v_ctx_1426_ = v_val_1459_;
goto v___jp_1425_;
}
}
v___jp_1418_:
{
lean_object* v___x_1420_; lean_object* v___x_1421_; 
v___x_1420_ = lean_io_set_heartbeats(v___x_1417_);
v___x_1421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1421_, 0, v_a_1419_);
return v___x_1421_;
}
v___jp_1422_:
{
lean_object* v_a_1424_; 
v_a_1424_ = lean_ctor_get(v___y_1423_, 0);
lean_inc(v_a_1424_);
lean_dec_ref(v___y_1423_);
v_a_1419_ = v_a_1424_;
goto v___jp_1418_;
}
v___jp_1425_:
{
lean_object* v_env_1427_; lean_object* v_opts_1428_; lean_object* v_realizeMapRef_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; 
v_env_1427_ = lean_ctor_get(v_ctx_1426_, 0);
lean_inc(v_env_1427_);
v_opts_1428_ = lean_ctor_get(v_ctx_1426_, 1);
lean_inc_ref(v_opts_1428_);
v_realizeMapRef_1429_ = lean_ctor_get(v_ctx_1426_, 2);
lean_inc(v_realizeMapRef_1429_);
v___x_1430_ = lean_st_ref_get(v_realizeMapRef_1429_);
v___x_1431_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_1430_, v_inst_1411_);
lean_dec(v___x_1430_);
if (lean_obj_tag(v___x_1431_) == 1)
{
lean_object* v_val_1432_; lean_object* v___x_1433_; 
v_val_1432_ = lean_ctor_get(v___x_1431_, 0);
lean_inc(v_val_1432_);
lean_dec_ref_known(v___x_1431_, 1);
v___x_1433_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___redArg(v_val_1432_, v_key_1414_);
lean_dec(v_val_1432_);
if (lean_obj_tag(v___x_1433_) == 1)
{
lean_object* v_val_1434_; lean_object* v___x_1435_; 
lean_dec(v_realizeMapRef_1429_);
lean_dec_ref(v_opts_1428_);
lean_dec(v_env_1427_);
lean_dec_ref(v_ctx_1426_);
lean_dec_ref(v_realize_1415_);
lean_dec_ref(v_key_1414_);
lean_dec(v_forConst_1413_);
lean_dec_ref(v_env_1412_);
lean_dec(v_inst_1411_);
v_val_1434_ = lean_ctor_get(v___x_1433_, 0);
lean_inc(v_val_1434_);
lean_dec_ref_known(v___x_1433_, 1);
v___x_1435_ = lean_task_get_own(v_val_1434_);
v_a_1419_ = v___x_1435_;
goto v___jp_1418_;
}
else
{
lean_object* v___x_1436_; lean_object* v___x_1437_; 
lean_dec(v___x_1433_);
v___x_1436_ = lean_box(0);
v___x_1437_ = l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0(v_realizeMapRef_1429_, v_env_1427_, v_env_1412_, v_forConst_1413_, v_ctx_1426_, v_realize_1415_, v_opts_1428_, v_key_1414_, v_inst_1411_, v___x_1436_);
lean_dec(v_realizeMapRef_1429_);
v___y_1423_ = v___x_1437_;
goto v___jp_1422_;
}
}
else
{
lean_object* v___x_1438_; lean_object* v___x_1439_; 
lean_dec(v___x_1431_);
v___x_1438_ = lean_box(0);
v___x_1439_ = l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0(v_realizeMapRef_1429_, v_env_1427_, v_env_1412_, v_forConst_1413_, v_ctx_1426_, v_realize_1415_, v_opts_1428_, v_key_1414_, v_inst_1411_, v___x_1438_);
lean_dec(v_realizeMapRef_1429_);
v___y_1423_ = v___x_1439_;
goto v___jp_1422_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___boxed(lean_object* v_inst_1460_, lean_object* v_env_1461_, lean_object* v_forConst_1462_, lean_object* v_key_1463_, lean_object* v_realize_1464_, lean_object* v_a_1465_){
_start:
{
lean_object* v_res_1466_; 
v_res_1466_ = l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11(v_inst_1460_, v_env_1461_, v_forConst_1462_, v_key_1463_, v_realize_1464_);
return v_res_1466_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___redArg(lean_object* v_msg_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_){
_start:
{
lean_object* v___f_1473_; lean_object* v___x_10559__overap_1474_; lean_object* v___x_1475_; 
v___f_1473_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___closed__0));
v___x_10559__overap_1474_ = lean_panic_fn_borrowed(v___f_1473_, v_msg_1467_);
lean_inc(v___y_1471_);
lean_inc_ref(v___y_1470_);
lean_inc(v___y_1469_);
lean_inc_ref(v___y_1468_);
v___x_1475_ = lean_apply_5(v___x_10559__overap_1474_, v___y_1468_, v___y_1469_, v___y_1470_, v___y_1471_, lean_box(0));
return v___x_1475_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___redArg___boxed(lean_object* v_msg_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_){
_start:
{
lean_object* v_res_1482_; 
v_res_1482_ = l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___redArg(v_msg_1476_, v___y_1477_, v___y_1478_, v___y_1479_, v___y_1480_);
lean_dec(v___y_1480_);
lean_dec_ref(v___y_1479_);
lean_dec(v___y_1478_);
lean_dec_ref(v___y_1477_);
return v_res_1482_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___lam__0(lean_object* v_realize_1483_, lean_object* v_inst_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_){
_start:
{
lean_object* v___x_1490_; 
lean_inc(v___y_1488_);
lean_inc_ref(v___y_1487_);
lean_inc(v___y_1486_);
v___x_1490_ = lean_apply_5(v_realize_1483_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_, lean_box(0));
if (lean_obj_tag(v___x_1490_) == 0)
{
lean_object* v_a_1491_; lean_object* v___x_1493_; uint8_t v_isShared_1494_; uint8_t v_isSharedCheck_1499_; 
v_a_1491_ = lean_ctor_get(v___x_1490_, 0);
v_isSharedCheck_1499_ = !lean_is_exclusive(v___x_1490_);
if (v_isSharedCheck_1499_ == 0)
{
v___x_1493_ = v___x_1490_;
v_isShared_1494_ = v_isSharedCheck_1499_;
goto v_resetjp_1492_;
}
else
{
lean_inc(v_a_1491_);
lean_dec(v___x_1490_);
v___x_1493_ = lean_box(0);
v_isShared_1494_ = v_isSharedCheck_1499_;
goto v_resetjp_1492_;
}
v_resetjp_1492_:
{
lean_object* v___x_1495_; lean_object* v___x_1497_; 
v___x_1495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1495_, 0, v_inst_1484_);
lean_ctor_set(v___x_1495_, 1, v_a_1491_);
if (v_isShared_1494_ == 0)
{
lean_ctor_set(v___x_1493_, 0, v___x_1495_);
v___x_1497_ = v___x_1493_;
goto v_reusejp_1496_;
}
else
{
lean_object* v_reuseFailAlloc_1498_; 
v_reuseFailAlloc_1498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1498_, 0, v___x_1495_);
v___x_1497_ = v_reuseFailAlloc_1498_;
goto v_reusejp_1496_;
}
v_reusejp_1496_:
{
return v___x_1497_;
}
}
}
else
{
lean_object* v_a_1500_; lean_object* v___x_1502_; uint8_t v_isShared_1503_; uint8_t v_isSharedCheck_1507_; 
lean_dec(v_inst_1484_);
v_a_1500_ = lean_ctor_get(v___x_1490_, 0);
v_isSharedCheck_1507_ = !lean_is_exclusive(v___x_1490_);
if (v_isSharedCheck_1507_ == 0)
{
v___x_1502_ = v___x_1490_;
v_isShared_1503_ = v_isSharedCheck_1507_;
goto v_resetjp_1501_;
}
else
{
lean_inc(v_a_1500_);
lean_dec(v___x_1490_);
v___x_1502_ = lean_box(0);
v_isShared_1503_ = v_isSharedCheck_1507_;
goto v_resetjp_1501_;
}
v_resetjp_1501_:
{
lean_object* v___x_1505_; 
if (v_isShared_1503_ == 0)
{
v___x_1505_ = v___x_1502_;
goto v_reusejp_1504_;
}
else
{
lean_object* v_reuseFailAlloc_1506_; 
v_reuseFailAlloc_1506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1506_, 0, v_a_1500_);
v___x_1505_ = v_reuseFailAlloc_1506_;
goto v_reusejp_1504_;
}
v_reusejp_1504_:
{
return v___x_1505_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___lam__0___boxed(lean_object* v_realize_1508_, lean_object* v_inst_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_){
_start:
{
lean_object* v_res_1515_; 
v_res_1515_ = l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___lam__0(v_realize_1508_, v_inst_1509_, v___y_1510_, v___y_1511_, v___y_1512_, v___y_1513_);
lean_dec(v___y_1513_);
lean_dec_ref(v___y_1512_);
lean_dec(v___y_1511_);
return v_res_1515_;
}
}
static lean_object* _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_1516_; lean_object* v___x_1517_; 
v___x_1516_ = l_Lean_Options_empty;
v___x_1517_ = l_Lean_Core_getMaxHeartbeats(v___x_1516_);
return v___x_1517_;
}
}
static lean_object* _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__1(void){
_start:
{
lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; 
v___x_1518_ = lean_box(0);
v___x_1519_ = lean_unsigned_to_nat(16u);
v___x_1520_ = lean_mk_array(v___x_1519_, v___x_1518_);
return v___x_1520_;
}
}
static lean_object* _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__2(void){
_start:
{
lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; 
v___x_1521_ = lean_obj_once(&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__1, &l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__1_once, _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__1);
v___x_1522_ = lean_unsigned_to_nat(0u);
v___x_1523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1523_, 0, v___x_1522_);
lean_ctor_set(v___x_1523_, 1, v___x_1521_);
return v___x_1523_;
}
}
static uint16_t _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__3(void){
_start:
{
lean_object* v___x_1524_; uint16_t v___x_1525_; 
v___x_1524_ = l_Lean_Options_empty;
v___x_1525_ = l_Lean_OptionFlags_ofOptions(v___x_1524_);
return v___x_1525_;
}
}
static lean_object* _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__6(void){
_start:
{
lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; 
v___x_1528_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__4));
v___x_1529_ = lean_unsigned_to_nat(36u);
v___x_1530_ = lean_unsigned_to_nat(2872u);
v___x_1531_ = ((lean_object*)(l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__5));
v___x_1532_ = ((lean_object*)(l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__4));
v___x_1533_ = l_mkPanicMessageWithDecl(v___x_1532_, v___x_1531_, v___x_1530_, v___x_1529_, v___x_1528_);
return v___x_1533_;
}
}
static lean_object* _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__7(void){
_start:
{
lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; 
v___x_1534_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__4));
v___x_1535_ = lean_unsigned_to_nat(48u);
v___x_1536_ = lean_unsigned_to_nat(2863u);
v___x_1537_ = ((lean_object*)(l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__5));
v___x_1538_ = ((lean_object*)(l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__4));
v___x_1539_ = l_mkPanicMessageWithDecl(v___x_1538_, v___x_1537_, v___x_1536_, v___x_1535_, v___x_1534_);
return v___x_1539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg(lean_object* v_inst_1540_, lean_object* v_inst_1541_, lean_object* v_forConst_1542_, lean_object* v_key_1543_, lean_object* v_realize_1544_, lean_object* v_a_1545_, lean_object* v_a_1546_, lean_object* v_a_1547_, lean_object* v_a_1548_){
_start:
{
lean_object* v___f_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v_env_1553_; uint8_t v___x_1554_; 
lean_inc(v_inst_1541_);
lean_inc_ref(v_realize_1544_);
v___f_1550_ = lean_alloc_closure((void*)(l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___lam__0___boxed), 7, 2);
lean_closure_set(v___f_1550_, 0, v_realize_1544_);
lean_closure_set(v___f_1550_, 1, v_inst_1541_);
v___x_1551_ = l___private_Lean_Meta_Basic_0__Lean_Meta_instImpl_00___x40_Lean_Meta_Basic_373817412____hygCtx___hyg_13_;
v___x_1552_ = lean_st_ref_get(v_a_1548_);
v_env_1553_ = lean_ctor_get(v___x_1552_, 0);
lean_inc_ref(v_env_1553_);
lean_dec(v___x_1552_);
v___x_1554_ = l_Lean_Environment_areRealizationsEnabledForConst(v_env_1553_, v_forConst_1542_);
if (v___x_1554_ == 0)
{
lean_object* v___x_1555_; 
lean_dec_ref(v_env_1553_);
lean_dec_ref(v___f_1550_);
lean_dec_ref(v_key_1543_);
lean_dec(v_forConst_1542_);
lean_dec(v_inst_1541_);
lean_dec(v_inst_1540_);
lean_inc(v_a_1548_);
lean_inc_ref(v_a_1547_);
lean_inc(v_a_1546_);
lean_inc_ref(v_a_1545_);
v___x_1555_ = lean_apply_5(v_realize_1544_, v_a_1545_, v_a_1546_, v_a_1547_, v_a_1548_, lean_box(0));
return v___x_1555_;
}
else
{
uint8_t v___x_1556_; lean_object* v___x_1557_; lean_object* v_toCold_1558_; lean_object* v_ref_1559_; lean_object* v_fileName_1560_; lean_object* v_fileMap_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; uint16_t v___x_1573_; uint8_t v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; 
lean_dec_ref(v_realize_1544_);
v___x_1556_ = 0;
v___x_1557_ = lean_io_get_num_heartbeats();
v_toCold_1558_ = lean_ctor_get(v_a_1547_, 0);
v_ref_1559_ = lean_ctor_get(v_a_1547_, 2);
v_fileName_1560_ = lean_ctor_get(v_toCold_1558_, 0);
v_fileMap_1561_ = lean_ctor_get(v_toCold_1558_, 1);
v___x_1562_ = l_Lean_Options_empty;
v___x_1563_ = lean_unsigned_to_nat(1000u);
v___x_1564_ = lean_box(0);
v___x_1565_ = lean_box(0);
v___x_1566_ = lean_obj_once(&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__0, &l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__0_once, _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__0);
v___x_1567_ = l_Lean_firstFrontendMacroScope;
v___x_1568_ = lean_box(0);
v___x_1569_ = lean_unsigned_to_nat(0u);
v___x_1570_ = lean_obj_once(&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__2, &l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__2_once, _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__2);
lean_inc_ref(v_fileMap_1561_);
lean_inc_ref(v_fileName_1560_);
v___x_1571_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_1571_, 0, v_fileName_1560_);
lean_ctor_set(v___x_1571_, 1, v_fileMap_1561_);
lean_ctor_set(v___x_1571_, 2, v___x_1562_);
lean_ctor_set(v___x_1571_, 3, v___x_1563_);
lean_ctor_set(v___x_1571_, 4, v___x_1564_);
lean_ctor_set(v___x_1571_, 5, v___x_1565_);
lean_ctor_set(v___x_1571_, 6, v___x_1557_);
lean_ctor_set(v___x_1571_, 7, v___x_1566_);
lean_ctor_set(v___x_1571_, 8, v___x_1564_);
lean_ctor_set(v___x_1571_, 9, v___x_1567_);
lean_ctor_set(v___x_1571_, 10, v___x_1568_);
lean_ctor_set(v___x_1571_, 11, v___x_1570_);
v___x_1572_ = lean_box(0);
v___x_1573_ = lean_uint16_once(&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__3, &l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__3_once, _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__3);
v___x_1574_ = 0;
v___x_1575_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1575_, 0, v___x_1571_);
lean_ctor_set(v___x_1575_, 1, v___x_1569_);
lean_ctor_set(v___x_1575_, 2, v___x_1572_);
lean_ctor_set_uint16(v___x_1575_, sizeof(void*)*3, v___x_1573_);
lean_ctor_set_uint8(v___x_1575_, sizeof(void*)*3 + 2, v___x_1556_);
lean_ctor_set_uint8(v___x_1575_, sizeof(void*)*3 + 3, v___x_1574_);
lean_ctor_set_uint8(v___x_1575_, sizeof(void*)*3 + 4, v___x_1556_);
v___x_1576_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_realizeValue_realizeAndReport___boxed), 5, 2);
lean_closure_set(v___x_1576_, 0, v___f_1550_);
lean_closure_set(v___x_1576_, 1, v___x_1575_);
v___x_1577_ = l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11(v_inst_1540_, v_env_1553_, v_forConst_1542_, v_key_1543_, v___x_1576_);
if (lean_obj_tag(v___x_1577_) == 0)
{
lean_object* v_a_1578_; lean_object* v___x_1580_; uint8_t v_isShared_1581_; uint8_t v_isSharedCheck_1629_; 
v_a_1578_ = lean_ctor_get(v___x_1577_, 0);
v_isSharedCheck_1629_ = !lean_is_exclusive(v___x_1577_);
if (v_isSharedCheck_1629_ == 0)
{
v___x_1580_ = v___x_1577_;
v_isShared_1581_ = v_isSharedCheck_1629_;
goto v_resetjp_1579_;
}
else
{
lean_inc(v_a_1578_);
lean_dec(v___x_1577_);
v___x_1580_ = lean_box(0);
v_isShared_1581_ = v_isSharedCheck_1629_;
goto v_resetjp_1579_;
}
v_resetjp_1579_:
{
lean_object* v___x_1582_; 
v___x_1582_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_a_1578_, v___x_1551_);
lean_dec(v_a_1578_);
if (lean_obj_tag(v___x_1582_) == 1)
{
lean_object* v_val_1583_; lean_object* v_res_x3f_1584_; lean_object* v_snap_x3f_1585_; lean_object* v___y_1587_; lean_object* v___y_1588_; lean_object* v___y_1589_; lean_object* v___y_1590_; lean_object* v_snap_1604_; lean_object* v___y_1605_; lean_object* v___y_1606_; lean_object* v___y_1607_; lean_object* v___y_1608_; 
v_val_1583_ = lean_ctor_get(v___x_1582_, 0);
lean_inc(v_val_1583_);
lean_dec_ref_known(v___x_1582_, 1);
v_res_x3f_1584_ = lean_ctor_get(v_val_1583_, 0);
lean_inc_ref(v_res_x3f_1584_);
v_snap_x3f_1585_ = lean_ctor_get(v_val_1583_, 1);
lean_inc(v_snap_x3f_1585_);
lean_dec(v_val_1583_);
if (lean_obj_tag(v_snap_x3f_1585_) == 1)
{
lean_object* v_val_1619_; lean_object* v___x_1620_; 
v_val_1619_ = lean_ctor_get(v_snap_x3f_1585_, 0);
lean_inc(v_val_1619_);
lean_dec_ref_known(v_snap_x3f_1585_, 1);
v___x_1620_ = l_Lean_Syntax_getRange_x3f(v_ref_1559_, v___x_1556_);
if (lean_obj_tag(v___x_1620_) == 1)
{
lean_object* v_val_1621_; lean_object* v_start_1622_; lean_object* v_stop_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; 
v_val_1621_ = lean_ctor_get(v___x_1620_, 0);
lean_inc(v_val_1621_);
lean_dec_ref_known(v___x_1620_, 1);
v_start_1622_ = lean_ctor_get(v_val_1621_, 0);
lean_inc(v_start_1622_);
v_stop_1623_ = lean_ctor_get(v_val_1621_, 1);
lean_inc(v_stop_1623_);
lean_dec(v_val_1621_);
lean_inc_ref_n(v_fileMap_1561_, 2);
v___x_1624_ = l_Lean_FileMap_toPosition(v_fileMap_1561_, v_start_1622_);
lean_dec(v_start_1622_);
v___x_1625_ = l_Lean_FileMap_toPosition(v_fileMap_1561_, v_stop_1623_);
lean_dec(v_stop_1623_);
v___x_1626_ = l___private_Lean_Meta_Basic_0__Lean_Meta_setAllDiagRanges(v_val_1619_, v___x_1624_, v___x_1625_);
v_snap_1604_ = v___x_1626_;
v___y_1605_ = v_a_1545_;
v___y_1606_ = v_a_1546_;
v___y_1607_ = v_a_1547_;
v___y_1608_ = v_a_1548_;
goto v___jp_1603_;
}
else
{
lean_dec(v___x_1620_);
v_snap_1604_ = v_val_1619_;
v___y_1605_ = v_a_1545_;
v___y_1606_ = v_a_1546_;
v___y_1607_ = v_a_1547_;
v___y_1608_ = v_a_1548_;
goto v___jp_1603_;
}
}
else
{
lean_dec(v_snap_x3f_1585_);
v___y_1587_ = v_a_1545_;
v___y_1588_ = v_a_1546_;
v___y_1589_ = v_a_1547_;
v___y_1590_ = v_a_1548_;
goto v___jp_1586_;
}
v___jp_1586_:
{
if (lean_obj_tag(v_res_x3f_1584_) == 0)
{
lean_object* v_a_1591_; lean_object* v___x_1593_; 
lean_dec(v_inst_1541_);
v_a_1591_ = lean_ctor_get(v_res_x3f_1584_, 0);
lean_inc(v_a_1591_);
lean_dec_ref_known(v_res_x3f_1584_, 1);
if (v_isShared_1581_ == 0)
{
lean_ctor_set_tag(v___x_1580_, 1);
lean_ctor_set(v___x_1580_, 0, v_a_1591_);
v___x_1593_ = v___x_1580_;
goto v_reusejp_1592_;
}
else
{
lean_object* v_reuseFailAlloc_1594_; 
v_reuseFailAlloc_1594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1594_, 0, v_a_1591_);
v___x_1593_ = v_reuseFailAlloc_1594_;
goto v_reusejp_1592_;
}
v_reusejp_1592_:
{
return v___x_1593_;
}
}
else
{
lean_object* v_a_1595_; lean_object* v___x_1596_; 
v_a_1595_ = lean_ctor_get(v_res_x3f_1584_, 0);
lean_inc(v_a_1595_);
lean_dec_ref_known(v_res_x3f_1584_, 1);
v___x_1596_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_a_1595_, v_inst_1541_);
lean_dec(v_inst_1541_);
lean_dec(v_a_1595_);
if (lean_obj_tag(v___x_1596_) == 0)
{
lean_object* v___x_1597_; lean_object* v___x_1598_; 
lean_del_object(v___x_1580_);
v___x_1597_ = lean_obj_once(&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__6, &l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__6_once, _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__6);
v___x_1598_ = l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___redArg(v___x_1597_, v___y_1587_, v___y_1588_, v___y_1589_, v___y_1590_);
return v___x_1598_;
}
else
{
lean_object* v_val_1599_; lean_object* v___x_1601_; 
v_val_1599_ = lean_ctor_get(v___x_1596_, 0);
lean_inc(v_val_1599_);
lean_dec_ref_known(v___x_1596_, 1);
if (v_isShared_1581_ == 0)
{
lean_ctor_set(v___x_1580_, 0, v_val_1599_);
v___x_1601_ = v___x_1580_;
goto v_reusejp_1600_;
}
else
{
lean_object* v_reuseFailAlloc_1602_; 
v_reuseFailAlloc_1602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1602_, 0, v_val_1599_);
v___x_1601_ = v_reuseFailAlloc_1602_;
goto v_reusejp_1600_;
}
v_reusejp_1600_:
{
return v___x_1601_;
}
}
}
}
v___jp_1603_:
{
lean_object* v___x_1609_; lean_object* v___x_1610_; 
v___x_1609_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_1568_, v_snap_1604_);
v___x_1610_ = l_Lean_Core_logSnapshotTask___redArg(v___x_1609_, v___y_1608_);
if (lean_obj_tag(v___x_1610_) == 0)
{
lean_dec_ref_known(v___x_1610_, 1);
v___y_1587_ = v___y_1605_;
v___y_1588_ = v___y_1606_;
v___y_1589_ = v___y_1607_;
v___y_1590_ = v___y_1608_;
goto v___jp_1586_;
}
else
{
lean_object* v_a_1611_; lean_object* v___x_1613_; uint8_t v_isShared_1614_; uint8_t v_isSharedCheck_1618_; 
lean_dec_ref(v_res_x3f_1584_);
lean_del_object(v___x_1580_);
lean_dec(v_inst_1541_);
v_a_1611_ = lean_ctor_get(v___x_1610_, 0);
v_isSharedCheck_1618_ = !lean_is_exclusive(v___x_1610_);
if (v_isSharedCheck_1618_ == 0)
{
v___x_1613_ = v___x_1610_;
v_isShared_1614_ = v_isSharedCheck_1618_;
goto v_resetjp_1612_;
}
else
{
lean_inc(v_a_1611_);
lean_dec(v___x_1610_);
v___x_1613_ = lean_box(0);
v_isShared_1614_ = v_isSharedCheck_1618_;
goto v_resetjp_1612_;
}
v_resetjp_1612_:
{
lean_object* v___x_1616_; 
if (v_isShared_1614_ == 0)
{
v___x_1616_ = v___x_1613_;
goto v_reusejp_1615_;
}
else
{
lean_object* v_reuseFailAlloc_1617_; 
v_reuseFailAlloc_1617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1617_, 0, v_a_1611_);
v___x_1616_ = v_reuseFailAlloc_1617_;
goto v_reusejp_1615_;
}
v_reusejp_1615_:
{
return v___x_1616_;
}
}
}
}
}
else
{
lean_object* v___x_1627_; lean_object* v___x_1628_; 
lean_dec(v___x_1582_);
lean_del_object(v___x_1580_);
lean_dec(v_inst_1541_);
v___x_1627_ = lean_obj_once(&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__7, &l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__7_once, _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__7);
v___x_1628_ = l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___redArg(v___x_1627_, v_a_1545_, v_a_1546_, v_a_1547_, v_a_1548_);
return v___x_1628_;
}
}
}
else
{
lean_object* v_a_1630_; lean_object* v___x_1632_; uint8_t v_isShared_1633_; uint8_t v_isSharedCheck_1641_; 
lean_dec(v_inst_1541_);
v_a_1630_ = lean_ctor_get(v___x_1577_, 0);
v_isSharedCheck_1641_ = !lean_is_exclusive(v___x_1577_);
if (v_isSharedCheck_1641_ == 0)
{
v___x_1632_ = v___x_1577_;
v_isShared_1633_ = v_isSharedCheck_1641_;
goto v_resetjp_1631_;
}
else
{
lean_inc(v_a_1630_);
lean_dec(v___x_1577_);
v___x_1632_ = lean_box(0);
v_isShared_1633_ = v_isSharedCheck_1641_;
goto v_resetjp_1631_;
}
v_resetjp_1631_:
{
lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1639_; 
v___x_1634_ = lean_io_error_to_string(v_a_1630_);
v___x_1635_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1635_, 0, v___x_1634_);
v___x_1636_ = l_Lean_MessageData_ofFormat(v___x_1635_);
lean_inc(v_ref_1559_);
v___x_1637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1637_, 0, v_ref_1559_);
lean_ctor_set(v___x_1637_, 1, v___x_1636_);
if (v_isShared_1633_ == 0)
{
lean_ctor_set(v___x_1632_, 0, v___x_1637_);
v___x_1639_ = v___x_1632_;
goto v_reusejp_1638_;
}
else
{
lean_object* v_reuseFailAlloc_1640_; 
v_reuseFailAlloc_1640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1640_, 0, v___x_1637_);
v___x_1639_ = v_reuseFailAlloc_1640_;
goto v_reusejp_1638_;
}
v_reusejp_1638_:
{
return v___x_1639_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___boxed(lean_object* v_inst_1642_, lean_object* v_inst_1643_, lean_object* v_forConst_1644_, lean_object* v_key_1645_, lean_object* v_realize_1646_, lean_object* v_a_1647_, lean_object* v_a_1648_, lean_object* v_a_1649_, lean_object* v_a_1650_, lean_object* v_a_1651_){
_start:
{
lean_object* v_res_1652_; 
v_res_1652_ = l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg(v_inst_1642_, v_inst_1643_, v_forConst_1644_, v_key_1645_, v_realize_1646_, v_a_1647_, v_a_1648_, v_a_1649_, v_a_1650_);
lean_dec(v_a_1650_);
lean_dec_ref(v_a_1649_);
lean_dec(v_a_1648_);
lean_dec_ref(v_a_1647_);
return v_res_1652_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___redArg(lean_object* v_keys_1653_, lean_object* v_vals_1654_, lean_object* v_i_1655_, lean_object* v_k_1656_){
_start:
{
lean_object* v___x_1657_; uint8_t v___x_1658_; 
v___x_1657_ = lean_array_get_size(v_keys_1653_);
v___x_1658_ = lean_nat_dec_lt(v_i_1655_, v___x_1657_);
if (v___x_1658_ == 0)
{
lean_object* v___x_1659_; 
lean_dec(v_i_1655_);
v___x_1659_ = lean_box(0);
return v___x_1659_;
}
else
{
lean_object* v_k_x27_1660_; uint8_t v___x_1661_; 
v_k_x27_1660_ = lean_array_fget_borrowed(v_keys_1653_, v_i_1655_);
v___x_1661_ = l_Lean_Meta_instBEqInfoCacheKey_beq(v_k_1656_, v_k_x27_1660_);
if (v___x_1661_ == 0)
{
lean_object* v___x_1662_; lean_object* v___x_1663_; 
v___x_1662_ = lean_unsigned_to_nat(1u);
v___x_1663_ = lean_nat_add(v_i_1655_, v___x_1662_);
lean_dec(v_i_1655_);
v_i_1655_ = v___x_1663_;
goto _start;
}
else
{
lean_object* v___x_1665_; lean_object* v___x_1666_; 
v___x_1665_ = lean_array_fget_borrowed(v_vals_1654_, v_i_1655_);
lean_dec(v_i_1655_);
lean_inc(v___x_1665_);
v___x_1666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1666_, 0, v___x_1665_);
return v___x_1666_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___redArg___boxed(lean_object* v_keys_1667_, lean_object* v_vals_1668_, lean_object* v_i_1669_, lean_object* v_k_1670_){
_start:
{
lean_object* v_res_1671_; 
v_res_1671_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___redArg(v_keys_1667_, v_vals_1668_, v_i_1669_, v_k_1670_);
lean_dec_ref(v_k_1670_);
lean_dec_ref(v_vals_1668_);
lean_dec_ref(v_keys_1667_);
return v_res_1671_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___redArg(lean_object* v_x_1672_, size_t v_x_1673_, lean_object* v_x_1674_){
_start:
{
if (lean_obj_tag(v_x_1672_) == 0)
{
lean_object* v_es_1675_; lean_object* v___x_1676_; size_t v___x_1677_; size_t v___x_1678_; lean_object* v_j_1679_; lean_object* v___x_1680_; 
v_es_1675_ = lean_ctor_get(v_x_1672_, 0);
v___x_1676_ = lean_box(2);
v___x_1677_ = ((size_t)31ULL);
v___x_1678_ = lean_usize_land(v_x_1673_, v___x_1677_);
v_j_1679_ = lean_usize_to_nat(v___x_1678_);
v___x_1680_ = lean_array_get_borrowed(v___x_1676_, v_es_1675_, v_j_1679_);
lean_dec(v_j_1679_);
switch(lean_obj_tag(v___x_1680_))
{
case 0:
{
lean_object* v_key_1681_; lean_object* v_val_1682_; uint8_t v___x_1683_; 
v_key_1681_ = lean_ctor_get(v___x_1680_, 0);
v_val_1682_ = lean_ctor_get(v___x_1680_, 1);
v___x_1683_ = l_Lean_Meta_instBEqInfoCacheKey_beq(v_x_1674_, v_key_1681_);
if (v___x_1683_ == 0)
{
lean_object* v___x_1684_; 
v___x_1684_ = lean_box(0);
return v___x_1684_;
}
else
{
lean_object* v___x_1685_; 
lean_inc(v_val_1682_);
v___x_1685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1685_, 0, v_val_1682_);
return v___x_1685_;
}
}
case 1:
{
lean_object* v_node_1686_; size_t v___x_1687_; size_t v___x_1688_; 
v_node_1686_ = lean_ctor_get(v___x_1680_, 0);
v___x_1687_ = ((size_t)5ULL);
v___x_1688_ = lean_usize_shift_right(v_x_1673_, v___x_1687_);
v_x_1672_ = v_node_1686_;
v_x_1673_ = v___x_1688_;
goto _start;
}
default: 
{
lean_object* v___x_1690_; 
v___x_1690_ = lean_box(0);
return v___x_1690_;
}
}
}
else
{
lean_object* v_ks_1691_; lean_object* v_vs_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; 
v_ks_1691_ = lean_ctor_get(v_x_1672_, 0);
v_vs_1692_ = lean_ctor_get(v_x_1672_, 1);
v___x_1693_ = lean_unsigned_to_nat(0u);
v___x_1694_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___redArg(v_ks_1691_, v_vs_1692_, v___x_1693_, v_x_1674_);
return v___x_1694_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___redArg___boxed(lean_object* v_x_1695_, lean_object* v_x_1696_, lean_object* v_x_1697_){
_start:
{
size_t v_x_13083__boxed_1698_; lean_object* v_res_1699_; 
v_x_13083__boxed_1698_ = lean_unbox_usize(v_x_1696_);
lean_dec(v_x_1696_);
v_res_1699_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___redArg(v_x_1695_, v_x_13083__boxed_1698_, v_x_1697_);
lean_dec_ref(v_x_1697_);
lean_dec_ref(v_x_1695_);
return v_res_1699_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___redArg(lean_object* v_x_1700_, lean_object* v_x_1701_){
_start:
{
uint64_t v_configKey_1702_; lean_object* v_expr_1703_; lean_object* v_nargs_x3f_1704_; uint64_t v___x_1705_; uint64_t v___y_1707_; 
v_configKey_1702_ = lean_ctor_get_uint64(v_x_1701_, sizeof(void*)*2);
v_expr_1703_ = lean_ctor_get(v_x_1701_, 0);
v_nargs_x3f_1704_ = lean_ctor_get(v_x_1701_, 1);
v___x_1705_ = l_Lean_Expr_hash(v_expr_1703_);
if (lean_obj_tag(v_nargs_x3f_1704_) == 0)
{
uint64_t v___x_1712_; 
v___x_1712_ = 11ULL;
v___y_1707_ = v___x_1712_;
goto v___jp_1706_;
}
else
{
lean_object* v_val_1713_; uint64_t v___x_1714_; uint64_t v___x_1715_; uint64_t v___x_1716_; 
v_val_1713_ = lean_ctor_get(v_nargs_x3f_1704_, 0);
v___x_1714_ = lean_uint64_of_nat(v_val_1713_);
v___x_1715_ = 13ULL;
v___x_1716_ = lean_uint64_mix_hash(v___x_1714_, v___x_1715_);
v___y_1707_ = v___x_1716_;
goto v___jp_1706_;
}
v___jp_1706_:
{
uint64_t v___x_1708_; uint64_t v___x_1709_; size_t v___x_1710_; lean_object* v___x_1711_; 
v___x_1708_ = lean_uint64_mix_hash(v___x_1705_, v___y_1707_);
v___x_1709_ = lean_uint64_mix_hash(v_configKey_1702_, v___x_1708_);
v___x_1710_ = lean_uint64_to_usize(v___x_1709_);
v___x_1711_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___redArg(v_x_1700_, v___x_1710_, v_x_1701_);
return v___x_1711_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___redArg___boxed(lean_object* v_x_1717_, lean_object* v_x_1718_){
_start:
{
lean_object* v_res_1719_; 
v_res_1719_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___redArg(v_x_1717_, v_x_1718_);
lean_dec_ref(v_x_1718_);
lean_dec_ref(v_x_1717_);
return v_res_1719_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7_spec__12___redArg(lean_object* v_x_1720_, lean_object* v_x_1721_, lean_object* v_x_1722_, lean_object* v_x_1723_){
_start:
{
lean_object* v_ks_1724_; lean_object* v_vs_1725_; lean_object* v___x_1727_; uint8_t v_isShared_1728_; uint8_t v_isSharedCheck_1749_; 
v_ks_1724_ = lean_ctor_get(v_x_1720_, 0);
v_vs_1725_ = lean_ctor_get(v_x_1720_, 1);
v_isSharedCheck_1749_ = !lean_is_exclusive(v_x_1720_);
if (v_isSharedCheck_1749_ == 0)
{
v___x_1727_ = v_x_1720_;
v_isShared_1728_ = v_isSharedCheck_1749_;
goto v_resetjp_1726_;
}
else
{
lean_inc(v_vs_1725_);
lean_inc(v_ks_1724_);
lean_dec(v_x_1720_);
v___x_1727_ = lean_box(0);
v_isShared_1728_ = v_isSharedCheck_1749_;
goto v_resetjp_1726_;
}
v_resetjp_1726_:
{
lean_object* v___x_1729_; uint8_t v___x_1730_; 
v___x_1729_ = lean_array_get_size(v_ks_1724_);
v___x_1730_ = lean_nat_dec_lt(v_x_1721_, v___x_1729_);
if (v___x_1730_ == 0)
{
lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1734_; 
lean_dec(v_x_1721_);
v___x_1731_ = lean_array_push(v_ks_1724_, v_x_1722_);
v___x_1732_ = lean_array_push(v_vs_1725_, v_x_1723_);
if (v_isShared_1728_ == 0)
{
lean_ctor_set(v___x_1727_, 1, v___x_1732_);
lean_ctor_set(v___x_1727_, 0, v___x_1731_);
v___x_1734_ = v___x_1727_;
goto v_reusejp_1733_;
}
else
{
lean_object* v_reuseFailAlloc_1735_; 
v_reuseFailAlloc_1735_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1735_, 0, v___x_1731_);
lean_ctor_set(v_reuseFailAlloc_1735_, 1, v___x_1732_);
v___x_1734_ = v_reuseFailAlloc_1735_;
goto v_reusejp_1733_;
}
v_reusejp_1733_:
{
return v___x_1734_;
}
}
else
{
lean_object* v_k_x27_1736_; uint8_t v___x_1737_; 
v_k_x27_1736_ = lean_array_fget_borrowed(v_ks_1724_, v_x_1721_);
v___x_1737_ = l_Lean_Meta_instBEqInfoCacheKey_beq(v_x_1722_, v_k_x27_1736_);
if (v___x_1737_ == 0)
{
lean_object* v___x_1739_; 
if (v_isShared_1728_ == 0)
{
v___x_1739_ = v___x_1727_;
goto v_reusejp_1738_;
}
else
{
lean_object* v_reuseFailAlloc_1743_; 
v_reuseFailAlloc_1743_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1743_, 0, v_ks_1724_);
lean_ctor_set(v_reuseFailAlloc_1743_, 1, v_vs_1725_);
v___x_1739_ = v_reuseFailAlloc_1743_;
goto v_reusejp_1738_;
}
v_reusejp_1738_:
{
lean_object* v___x_1740_; lean_object* v___x_1741_; 
v___x_1740_ = lean_unsigned_to_nat(1u);
v___x_1741_ = lean_nat_add(v_x_1721_, v___x_1740_);
lean_dec(v_x_1721_);
v_x_1720_ = v___x_1739_;
v_x_1721_ = v___x_1741_;
goto _start;
}
}
else
{
lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1747_; 
v___x_1744_ = lean_array_fset(v_ks_1724_, v_x_1721_, v_x_1722_);
v___x_1745_ = lean_array_fset(v_vs_1725_, v_x_1721_, v_x_1723_);
lean_dec(v_x_1721_);
if (v_isShared_1728_ == 0)
{
lean_ctor_set(v___x_1727_, 1, v___x_1745_);
lean_ctor_set(v___x_1727_, 0, v___x_1744_);
v___x_1747_ = v___x_1727_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v___x_1744_);
lean_ctor_set(v_reuseFailAlloc_1748_, 1, v___x_1745_);
v___x_1747_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1746_;
}
v_reusejp_1746_:
{
return v___x_1747_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7___redArg(lean_object* v_n_1750_, lean_object* v_k_1751_, lean_object* v_v_1752_){
_start:
{
lean_object* v___x_1753_; lean_object* v___x_1754_; 
v___x_1753_ = lean_unsigned_to_nat(0u);
v___x_1754_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7_spec__12___redArg(v_n_1750_, v___x_1753_, v_k_1751_, v_v_1752_);
return v___x_1754_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg(lean_object* v_x_1755_, size_t v_x_1756_, size_t v_x_1757_, lean_object* v_x_1758_, lean_object* v_x_1759_){
_start:
{
if (lean_obj_tag(v_x_1755_) == 0)
{
lean_object* v_es_1760_; size_t v___x_1761_; size_t v___x_1762_; lean_object* v_j_1763_; lean_object* v___x_1764_; uint8_t v___x_1765_; 
v_es_1760_ = lean_ctor_get(v_x_1755_, 0);
v___x_1761_ = ((size_t)31ULL);
v___x_1762_ = lean_usize_land(v_x_1756_, v___x_1761_);
v_j_1763_ = lean_usize_to_nat(v___x_1762_);
v___x_1764_ = lean_array_get_size(v_es_1760_);
v___x_1765_ = lean_nat_dec_lt(v_j_1763_, v___x_1764_);
if (v___x_1765_ == 0)
{
lean_dec(v_j_1763_);
lean_dec(v_x_1759_);
lean_dec_ref(v_x_1758_);
return v_x_1755_;
}
else
{
lean_object* v___x_1767_; uint8_t v_isShared_1768_; uint8_t v_isSharedCheck_1804_; 
lean_inc_ref(v_es_1760_);
v_isSharedCheck_1804_ = !lean_is_exclusive(v_x_1755_);
if (v_isSharedCheck_1804_ == 0)
{
lean_object* v_unused_1805_; 
v_unused_1805_ = lean_ctor_get(v_x_1755_, 0);
lean_dec(v_unused_1805_);
v___x_1767_ = v_x_1755_;
v_isShared_1768_ = v_isSharedCheck_1804_;
goto v_resetjp_1766_;
}
else
{
lean_dec(v_x_1755_);
v___x_1767_ = lean_box(0);
v_isShared_1768_ = v_isSharedCheck_1804_;
goto v_resetjp_1766_;
}
v_resetjp_1766_:
{
lean_object* v_v_1769_; lean_object* v___x_1770_; lean_object* v_xs_x27_1771_; lean_object* v___y_1773_; 
v_v_1769_ = lean_array_fget(v_es_1760_, v_j_1763_);
v___x_1770_ = lean_box(0);
v_xs_x27_1771_ = lean_array_fset(v_es_1760_, v_j_1763_, v___x_1770_);
switch(lean_obj_tag(v_v_1769_))
{
case 0:
{
lean_object* v_key_1778_; lean_object* v_val_1779_; lean_object* v___x_1781_; uint8_t v_isShared_1782_; uint8_t v_isSharedCheck_1789_; 
v_key_1778_ = lean_ctor_get(v_v_1769_, 0);
v_val_1779_ = lean_ctor_get(v_v_1769_, 1);
v_isSharedCheck_1789_ = !lean_is_exclusive(v_v_1769_);
if (v_isSharedCheck_1789_ == 0)
{
v___x_1781_ = v_v_1769_;
v_isShared_1782_ = v_isSharedCheck_1789_;
goto v_resetjp_1780_;
}
else
{
lean_inc(v_val_1779_);
lean_inc(v_key_1778_);
lean_dec(v_v_1769_);
v___x_1781_ = lean_box(0);
v_isShared_1782_ = v_isSharedCheck_1789_;
goto v_resetjp_1780_;
}
v_resetjp_1780_:
{
uint8_t v___x_1783_; 
v___x_1783_ = l_Lean_Meta_instBEqInfoCacheKey_beq(v_x_1758_, v_key_1778_);
if (v___x_1783_ == 0)
{
lean_object* v___x_1784_; lean_object* v___x_1785_; 
lean_del_object(v___x_1781_);
v___x_1784_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1778_, v_val_1779_, v_x_1758_, v_x_1759_);
v___x_1785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1785_, 0, v___x_1784_);
v___y_1773_ = v___x_1785_;
goto v___jp_1772_;
}
else
{
lean_object* v___x_1787_; 
lean_dec(v_val_1779_);
lean_dec(v_key_1778_);
if (v_isShared_1782_ == 0)
{
lean_ctor_set(v___x_1781_, 1, v_x_1759_);
lean_ctor_set(v___x_1781_, 0, v_x_1758_);
v___x_1787_ = v___x_1781_;
goto v_reusejp_1786_;
}
else
{
lean_object* v_reuseFailAlloc_1788_; 
v_reuseFailAlloc_1788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1788_, 0, v_x_1758_);
lean_ctor_set(v_reuseFailAlloc_1788_, 1, v_x_1759_);
v___x_1787_ = v_reuseFailAlloc_1788_;
goto v_reusejp_1786_;
}
v_reusejp_1786_:
{
v___y_1773_ = v___x_1787_;
goto v___jp_1772_;
}
}
}
}
case 1:
{
lean_object* v_node_1790_; lean_object* v___x_1792_; uint8_t v_isShared_1793_; uint8_t v_isSharedCheck_1802_; 
v_node_1790_ = lean_ctor_get(v_v_1769_, 0);
v_isSharedCheck_1802_ = !lean_is_exclusive(v_v_1769_);
if (v_isSharedCheck_1802_ == 0)
{
v___x_1792_ = v_v_1769_;
v_isShared_1793_ = v_isSharedCheck_1802_;
goto v_resetjp_1791_;
}
else
{
lean_inc(v_node_1790_);
lean_dec(v_v_1769_);
v___x_1792_ = lean_box(0);
v_isShared_1793_ = v_isSharedCheck_1802_;
goto v_resetjp_1791_;
}
v_resetjp_1791_:
{
size_t v___x_1794_; size_t v___x_1795_; size_t v___x_1796_; size_t v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1800_; 
v___x_1794_ = ((size_t)5ULL);
v___x_1795_ = lean_usize_shift_right(v_x_1756_, v___x_1794_);
v___x_1796_ = ((size_t)1ULL);
v___x_1797_ = lean_usize_add(v_x_1757_, v___x_1796_);
v___x_1798_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg(v_node_1790_, v___x_1795_, v___x_1797_, v_x_1758_, v_x_1759_);
if (v_isShared_1793_ == 0)
{
lean_ctor_set(v___x_1792_, 0, v___x_1798_);
v___x_1800_ = v___x_1792_;
goto v_reusejp_1799_;
}
else
{
lean_object* v_reuseFailAlloc_1801_; 
v_reuseFailAlloc_1801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1801_, 0, v___x_1798_);
v___x_1800_ = v_reuseFailAlloc_1801_;
goto v_reusejp_1799_;
}
v_reusejp_1799_:
{
v___y_1773_ = v___x_1800_;
goto v___jp_1772_;
}
}
}
default: 
{
lean_object* v___x_1803_; 
v___x_1803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1803_, 0, v_x_1758_);
lean_ctor_set(v___x_1803_, 1, v_x_1759_);
v___y_1773_ = v___x_1803_;
goto v___jp_1772_;
}
}
v___jp_1772_:
{
lean_object* v___x_1774_; lean_object* v___x_1776_; 
v___x_1774_ = lean_array_fset(v_xs_x27_1771_, v_j_1763_, v___y_1773_);
lean_dec(v_j_1763_);
if (v_isShared_1768_ == 0)
{
lean_ctor_set(v___x_1767_, 0, v___x_1774_);
v___x_1776_ = v___x_1767_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v___x_1774_);
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
else
{
lean_object* v_ks_1806_; lean_object* v_vs_1807_; lean_object* v___x_1809_; uint8_t v_isShared_1810_; uint8_t v_isSharedCheck_1825_; 
v_ks_1806_ = lean_ctor_get(v_x_1755_, 0);
v_vs_1807_ = lean_ctor_get(v_x_1755_, 1);
v_isSharedCheck_1825_ = !lean_is_exclusive(v_x_1755_);
if (v_isSharedCheck_1825_ == 0)
{
v___x_1809_ = v_x_1755_;
v_isShared_1810_ = v_isSharedCheck_1825_;
goto v_resetjp_1808_;
}
else
{
lean_inc(v_vs_1807_);
lean_inc(v_ks_1806_);
lean_dec(v_x_1755_);
v___x_1809_ = lean_box(0);
v_isShared_1810_ = v_isSharedCheck_1825_;
goto v_resetjp_1808_;
}
v_resetjp_1808_:
{
lean_object* v___x_1812_; 
if (v_isShared_1810_ == 0)
{
v___x_1812_ = v___x_1809_;
goto v_reusejp_1811_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v_ks_1806_);
lean_ctor_set(v_reuseFailAlloc_1824_, 1, v_vs_1807_);
v___x_1812_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1811_;
}
v_reusejp_1811_:
{
lean_object* v_newNode_1813_; size_t v___x_1814_; uint8_t v___x_1815_; 
v_newNode_1813_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7___redArg(v___x_1812_, v_x_1758_, v_x_1759_);
v___x_1814_ = ((size_t)7ULL);
v___x_1815_ = lean_usize_dec_le(v___x_1814_, v_x_1757_);
if (v___x_1815_ == 0)
{
lean_object* v___x_1816_; lean_object* v___x_1817_; uint8_t v___x_1818_; 
v___x_1816_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1813_);
v___x_1817_ = lean_unsigned_to_nat(4u);
v___x_1818_ = lean_nat_dec_lt(v___x_1816_, v___x_1817_);
lean_dec(v___x_1816_);
if (v___x_1818_ == 0)
{
lean_object* v_ks_1819_; lean_object* v_vs_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; 
v_ks_1819_ = lean_ctor_get(v_newNode_1813_, 0);
lean_inc_ref(v_ks_1819_);
v_vs_1820_ = lean_ctor_get(v_newNode_1813_, 1);
lean_inc_ref(v_vs_1820_);
lean_dec_ref(v_newNode_1813_);
v___x_1821_ = lean_unsigned_to_nat(0u);
v___x_1822_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0);
v___x_1823_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___redArg(v_x_1757_, v_ks_1819_, v_vs_1820_, v___x_1821_, v___x_1822_);
lean_dec_ref(v_vs_1820_);
lean_dec_ref(v_ks_1819_);
return v___x_1823_;
}
else
{
return v_newNode_1813_;
}
}
else
{
return v_newNode_1813_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___redArg(size_t v_depth_1826_, lean_object* v_keys_1827_, lean_object* v_vals_1828_, lean_object* v_i_1829_, lean_object* v_entries_1830_){
_start:
{
lean_object* v___x_1831_; uint8_t v___x_1832_; 
v___x_1831_ = lean_array_get_size(v_keys_1827_);
v___x_1832_ = lean_nat_dec_lt(v_i_1829_, v___x_1831_);
if (v___x_1832_ == 0)
{
lean_dec(v_i_1829_);
return v_entries_1830_;
}
else
{
lean_object* v_k_1833_; uint64_t v_configKey_1834_; lean_object* v_expr_1835_; lean_object* v_nargs_x3f_1836_; lean_object* v_v_1837_; uint64_t v___x_1838_; uint64_t v___y_1840_; 
v_k_1833_ = lean_array_fget_borrowed(v_keys_1827_, v_i_1829_);
v_configKey_1834_ = lean_ctor_get_uint64(v_k_1833_, sizeof(void*)*2);
v_expr_1835_ = lean_ctor_get(v_k_1833_, 0);
v_nargs_x3f_1836_ = lean_ctor_get(v_k_1833_, 1);
v_v_1837_ = lean_array_fget_borrowed(v_vals_1828_, v_i_1829_);
v___x_1838_ = l_Lean_Expr_hash(v_expr_1835_);
if (lean_obj_tag(v_nargs_x3f_1836_) == 0)
{
uint64_t v___x_1853_; 
v___x_1853_ = 11ULL;
v___y_1840_ = v___x_1853_;
goto v___jp_1839_;
}
else
{
lean_object* v_val_1854_; uint64_t v___x_1855_; uint64_t v___x_1856_; uint64_t v___x_1857_; 
v_val_1854_ = lean_ctor_get(v_nargs_x3f_1836_, 0);
v___x_1855_ = lean_uint64_of_nat(v_val_1854_);
v___x_1856_ = 13ULL;
v___x_1857_ = lean_uint64_mix_hash(v___x_1855_, v___x_1856_);
v___y_1840_ = v___x_1857_;
goto v___jp_1839_;
}
v___jp_1839_:
{
uint64_t v___x_1841_; uint64_t v___x_1842_; size_t v_h_1843_; size_t v___x_1844_; lean_object* v___x_1845_; size_t v___x_1846_; size_t v___x_1847_; size_t v___x_1848_; size_t v_h_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; 
v___x_1841_ = lean_uint64_mix_hash(v___x_1838_, v___y_1840_);
v___x_1842_ = lean_uint64_mix_hash(v_configKey_1834_, v___x_1841_);
v_h_1843_ = lean_uint64_to_usize(v___x_1842_);
v___x_1844_ = ((size_t)5ULL);
v___x_1845_ = lean_unsigned_to_nat(1u);
v___x_1846_ = ((size_t)1ULL);
v___x_1847_ = lean_usize_sub(v_depth_1826_, v___x_1846_);
v___x_1848_ = lean_usize_mul(v___x_1844_, v___x_1847_);
v_h_1849_ = lean_usize_shift_right(v_h_1843_, v___x_1848_);
v___x_1850_ = lean_nat_add(v_i_1829_, v___x_1845_);
lean_dec(v_i_1829_);
lean_inc(v_v_1837_);
lean_inc(v_k_1833_);
v___x_1851_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg(v_entries_1830_, v_h_1849_, v_depth_1826_, v_k_1833_, v_v_1837_);
v_i_1829_ = v___x_1850_;
v_entries_1830_ = v___x_1851_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___redArg___boxed(lean_object* v_depth_1858_, lean_object* v_keys_1859_, lean_object* v_vals_1860_, lean_object* v_i_1861_, lean_object* v_entries_1862_){
_start:
{
size_t v_depth_boxed_1863_; lean_object* v_res_1864_; 
v_depth_boxed_1863_ = lean_unbox_usize(v_depth_1858_);
lean_dec(v_depth_1858_);
v_res_1864_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___redArg(v_depth_boxed_1863_, v_keys_1859_, v_vals_1860_, v_i_1861_, v_entries_1862_);
lean_dec_ref(v_vals_1860_);
lean_dec_ref(v_keys_1859_);
return v_res_1864_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg___boxed(lean_object* v_x_1865_, lean_object* v_x_1866_, lean_object* v_x_1867_, lean_object* v_x_1868_, lean_object* v_x_1869_){
_start:
{
size_t v_x_13253__boxed_1870_; size_t v_x_13254__boxed_1871_; lean_object* v_res_1872_; 
v_x_13253__boxed_1870_ = lean_unbox_usize(v_x_1866_);
lean_dec(v_x_1866_);
v_x_13254__boxed_1871_ = lean_unbox_usize(v_x_1867_);
lean_dec(v_x_1867_);
v_res_1872_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg(v_x_1865_, v_x_13253__boxed_1870_, v_x_13254__boxed_1871_, v_x_1868_, v_x_1869_);
return v_res_1872_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6___redArg(lean_object* v_x_1873_, lean_object* v_x_1874_, lean_object* v_x_1875_){
_start:
{
uint64_t v_configKey_1876_; lean_object* v_expr_1877_; lean_object* v_nargs_x3f_1878_; uint64_t v___x_1879_; uint64_t v___y_1881_; 
v_configKey_1876_ = lean_ctor_get_uint64(v_x_1874_, sizeof(void*)*2);
v_expr_1877_ = lean_ctor_get(v_x_1874_, 0);
v_nargs_x3f_1878_ = lean_ctor_get(v_x_1874_, 1);
v___x_1879_ = l_Lean_Expr_hash(v_expr_1877_);
if (lean_obj_tag(v_nargs_x3f_1878_) == 0)
{
uint64_t v___x_1887_; 
v___x_1887_ = 11ULL;
v___y_1881_ = v___x_1887_;
goto v___jp_1880_;
}
else
{
lean_object* v_val_1888_; uint64_t v___x_1889_; uint64_t v___x_1890_; uint64_t v___x_1891_; 
v_val_1888_ = lean_ctor_get(v_nargs_x3f_1878_, 0);
v___x_1889_ = lean_uint64_of_nat(v_val_1888_);
v___x_1890_ = 13ULL;
v___x_1891_ = lean_uint64_mix_hash(v___x_1889_, v___x_1890_);
v___y_1881_ = v___x_1891_;
goto v___jp_1880_;
}
v___jp_1880_:
{
uint64_t v___x_1882_; uint64_t v___x_1883_; size_t v___x_1884_; size_t v___x_1885_; lean_object* v___x_1886_; 
v___x_1882_ = lean_uint64_mix_hash(v___x_1879_, v___y_1881_);
v___x_1883_ = lean_uint64_mix_hash(v_configKey_1876_, v___x_1882_);
v___x_1884_ = lean_uint64_to_usize(v___x_1883_);
v___x_1885_ = ((size_t)1ULL);
v___x_1886_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg(v_x_1873_, v___x_1884_, v___x_1885_, v_x_1874_, v_x_1875_);
return v___x_1886_;
}
}
}
LEAN_EXPORT uint8_t l_List_any___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8(lean_object* v_x_1892_){
_start:
{
if (lean_obj_tag(v_x_1892_) == 0)
{
uint8_t v___x_1893_; 
v___x_1893_ = 0;
return v___x_1893_;
}
else
{
lean_object* v_head_1894_; lean_object* v_tail_1895_; uint8_t v___x_1896_; 
v_head_1894_ = lean_ctor_get(v_x_1892_, 0);
v_tail_1895_ = lean_ctor_get(v_x_1892_, 1);
v___x_1896_ = l_Lean_Level_hasMVar(v_head_1894_);
if (v___x_1896_ == 0)
{
v_x_1892_ = v_tail_1895_;
goto _start;
}
else
{
return v___x_1896_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___boxed(lean_object* v_x_1898_){
_start:
{
uint8_t v_res_1899_; lean_object* v_r_1900_; 
v_res_1899_ = l_List_any___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8(v_x_1898_);
lean_dec(v_x_1898_);
v_r_1900_ = lean_box(v_res_1899_);
return v_r_1900_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux(lean_object* v_fn_1903_, lean_object* v_maxArgs_x3f_1904_, lean_object* v_a_1905_, lean_object* v_a_1906_, lean_object* v_a_1907_, lean_object* v_a_1908_){
_start:
{
lean_object* v___f_1910_; lean_object* v___f_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; 
v___f_1910_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___closed__0));
lean_inc_n(v_maxArgs_x3f_1904_, 2);
lean_inc_ref_n(v_fn_1903_, 2);
v___f_1911_ = lean_alloc_closure((void*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1___boxed), 8, 3);
lean_closure_set(v___f_1911_, 0, v_fn_1903_);
lean_closure_set(v___f_1911_, 1, v_maxArgs_x3f_1904_);
lean_closure_set(v___f_1911_, 2, v___f_1910_);
v___x_1912_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_71_));
v___x_1913_ = l_Lean_Meta_instImpl_00___x40_Lean_Meta_Basic_383016249____hygCtx___hyg_24_;
v___x_1914_ = l_Lean_Meta_mkInfoCacheKey___redArg(v_fn_1903_, v_maxArgs_x3f_1904_, v_a_1905_);
if (lean_obj_tag(v___x_1914_) == 0)
{
lean_object* v_a_1915_; lean_object* v___x_1917_; uint8_t v_isShared_1918_; uint8_t v_isSharedCheck_1977_; 
v_a_1915_ = lean_ctor_get(v___x_1914_, 0);
v_isSharedCheck_1977_ = !lean_is_exclusive(v___x_1914_);
if (v_isSharedCheck_1977_ == 0)
{
v___x_1917_ = v___x_1914_;
v_isShared_1918_ = v_isSharedCheck_1977_;
goto v_resetjp_1916_;
}
else
{
lean_inc(v_a_1915_);
lean_dec(v___x_1914_);
v___x_1917_ = lean_box(0);
v_isShared_1918_ = v_isSharedCheck_1977_;
goto v_resetjp_1916_;
}
v_resetjp_1916_:
{
lean_object* v_finfo_1920_; lean_object* v___y_1921_; lean_object* v___x_1955_; lean_object* v_cache_1956_; lean_object* v_funInfo_1957_; lean_object* v___x_1958_; 
v___x_1955_ = lean_st_ref_get(v_a_1906_);
v_cache_1956_ = lean_ctor_get(v___x_1955_, 1);
lean_inc_ref(v_cache_1956_);
lean_dec(v___x_1955_);
v_funInfo_1957_ = lean_ctor_get(v_cache_1956_, 1);
lean_inc_ref(v_funInfo_1957_);
lean_dec_ref(v_cache_1956_);
v___x_1958_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___redArg(v_funInfo_1957_, v_a_1915_);
lean_dec_ref(v_funInfo_1957_);
if (lean_obj_tag(v___x_1958_) == 0)
{
if (lean_obj_tag(v_fn_1903_) == 4)
{
lean_object* v_declName_1959_; lean_object* v_us_1960_; uint8_t v___x_1961_; 
v_declName_1959_ = lean_ctor_get(v_fn_1903_, 0);
v_us_1960_ = lean_ctor_get(v_fn_1903_, 1);
v___x_1961_ = l_List_any___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8(v_us_1960_);
if (v___x_1961_ == 0)
{
lean_object* v___x_1962_; lean_object* v___x_1963_; 
lean_inc(v_us_1960_);
lean_inc_n(v_declName_1959_, 2);
lean_dec_ref_known(v_fn_1903_, 2);
v___x_1962_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1962_, 0, v_declName_1959_);
lean_ctor_set(v___x_1962_, 1, v_us_1960_);
lean_ctor_set(v___x_1962_, 2, v_maxArgs_x3f_1904_);
v___x_1963_ = l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg(v___x_1912_, v___x_1913_, v_declName_1959_, v___x_1962_, v___f_1911_, v_a_1905_, v_a_1906_, v_a_1907_, v_a_1908_);
if (lean_obj_tag(v___x_1963_) == 0)
{
lean_object* v_a_1964_; 
v_a_1964_ = lean_ctor_get(v___x_1963_, 0);
lean_inc(v_a_1964_);
lean_dec_ref_known(v___x_1963_, 1);
v_finfo_1920_ = v_a_1964_;
v___y_1921_ = v_a_1906_;
goto v___jp_1919_;
}
else
{
lean_del_object(v___x_1917_);
lean_dec(v_a_1915_);
return v___x_1963_;
}
}
else
{
lean_object* v___x_1965_; 
lean_dec_ref(v___f_1911_);
lean_inc(v_a_1908_);
lean_inc_ref(v_a_1907_);
lean_inc(v_a_1906_);
lean_inc_ref(v_a_1905_);
v___x_1965_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1(v_fn_1903_, v_maxArgs_x3f_1904_, v___f_1910_, v_a_1905_, v_a_1906_, v_a_1907_, v_a_1908_);
if (lean_obj_tag(v___x_1965_) == 0)
{
lean_object* v_a_1966_; 
v_a_1966_ = lean_ctor_get(v___x_1965_, 0);
lean_inc(v_a_1966_);
lean_dec_ref_known(v___x_1965_, 1);
v_finfo_1920_ = v_a_1966_;
v___y_1921_ = v_a_1906_;
goto v___jp_1919_;
}
else
{
lean_del_object(v___x_1917_);
lean_dec(v_a_1915_);
return v___x_1965_;
}
}
}
else
{
lean_object* v___x_1967_; 
lean_dec_ref(v___f_1911_);
lean_inc(v_a_1908_);
lean_inc_ref(v_a_1907_);
lean_inc(v_a_1906_);
lean_inc_ref(v_a_1905_);
v___x_1967_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1(v_fn_1903_, v_maxArgs_x3f_1904_, v___f_1910_, v_a_1905_, v_a_1906_, v_a_1907_, v_a_1908_);
if (lean_obj_tag(v___x_1967_) == 0)
{
lean_object* v_a_1968_; 
v_a_1968_ = lean_ctor_get(v___x_1967_, 0);
lean_inc(v_a_1968_);
lean_dec_ref_known(v___x_1967_, 1);
v_finfo_1920_ = v_a_1968_;
v___y_1921_ = v_a_1906_;
goto v___jp_1919_;
}
else
{
lean_del_object(v___x_1917_);
lean_dec(v_a_1915_);
return v___x_1967_;
}
}
}
else
{
lean_object* v_val_1969_; lean_object* v___x_1971_; uint8_t v_isShared_1972_; uint8_t v_isSharedCheck_1976_; 
lean_del_object(v___x_1917_);
lean_dec(v_a_1915_);
lean_dec_ref(v___f_1911_);
lean_dec(v_maxArgs_x3f_1904_);
lean_dec_ref(v_fn_1903_);
v_val_1969_ = lean_ctor_get(v___x_1958_, 0);
v_isSharedCheck_1976_ = !lean_is_exclusive(v___x_1958_);
if (v_isSharedCheck_1976_ == 0)
{
v___x_1971_ = v___x_1958_;
v_isShared_1972_ = v_isSharedCheck_1976_;
goto v_resetjp_1970_;
}
else
{
lean_inc(v_val_1969_);
lean_dec(v___x_1958_);
v___x_1971_ = lean_box(0);
v_isShared_1972_ = v_isSharedCheck_1976_;
goto v_resetjp_1970_;
}
v_resetjp_1970_:
{
lean_object* v___x_1974_; 
if (v_isShared_1972_ == 0)
{
lean_ctor_set_tag(v___x_1971_, 0);
v___x_1974_ = v___x_1971_;
goto v_reusejp_1973_;
}
else
{
lean_object* v_reuseFailAlloc_1975_; 
v_reuseFailAlloc_1975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1975_, 0, v_val_1969_);
v___x_1974_ = v_reuseFailAlloc_1975_;
goto v_reusejp_1973_;
}
v_reusejp_1973_:
{
return v___x_1974_;
}
}
}
v___jp_1919_:
{
lean_object* v___x_1922_; lean_object* v_cache_1923_; lean_object* v_mctx_1924_; lean_object* v_zetaDeltaFVarIds_1925_; lean_object* v_postponed_1926_; lean_object* v_diag_1927_; lean_object* v___x_1929_; uint8_t v_isShared_1930_; uint8_t v_isSharedCheck_1954_; 
v___x_1922_ = lean_st_ref_take(v___y_1921_);
v_cache_1923_ = lean_ctor_get(v___x_1922_, 1);
v_mctx_1924_ = lean_ctor_get(v___x_1922_, 0);
v_zetaDeltaFVarIds_1925_ = lean_ctor_get(v___x_1922_, 2);
v_postponed_1926_ = lean_ctor_get(v___x_1922_, 3);
v_diag_1927_ = lean_ctor_get(v___x_1922_, 4);
v_isSharedCheck_1954_ = !lean_is_exclusive(v___x_1922_);
if (v_isSharedCheck_1954_ == 0)
{
v___x_1929_ = v___x_1922_;
v_isShared_1930_ = v_isSharedCheck_1954_;
goto v_resetjp_1928_;
}
else
{
lean_inc(v_diag_1927_);
lean_inc(v_postponed_1926_);
lean_inc(v_zetaDeltaFVarIds_1925_);
lean_inc(v_cache_1923_);
lean_inc(v_mctx_1924_);
lean_dec(v___x_1922_);
v___x_1929_ = lean_box(0);
v_isShared_1930_ = v_isSharedCheck_1954_;
goto v_resetjp_1928_;
}
v_resetjp_1928_:
{
lean_object* v_inferType_1931_; lean_object* v_funInfo_1932_; lean_object* v_synthInstance_1933_; lean_object* v_whnf_1934_; lean_object* v_defEqTrans_1935_; lean_object* v_defEqPerm_1936_; lean_object* v_isUnitLike_1937_; lean_object* v_unfold_1938_; lean_object* v___x_1940_; uint8_t v_isShared_1941_; uint8_t v_isSharedCheck_1953_; 
v_inferType_1931_ = lean_ctor_get(v_cache_1923_, 0);
v_funInfo_1932_ = lean_ctor_get(v_cache_1923_, 1);
v_synthInstance_1933_ = lean_ctor_get(v_cache_1923_, 2);
v_whnf_1934_ = lean_ctor_get(v_cache_1923_, 3);
v_defEqTrans_1935_ = lean_ctor_get(v_cache_1923_, 4);
v_defEqPerm_1936_ = lean_ctor_get(v_cache_1923_, 5);
v_isUnitLike_1937_ = lean_ctor_get(v_cache_1923_, 6);
v_unfold_1938_ = lean_ctor_get(v_cache_1923_, 7);
v_isSharedCheck_1953_ = !lean_is_exclusive(v_cache_1923_);
if (v_isSharedCheck_1953_ == 0)
{
v___x_1940_ = v_cache_1923_;
v_isShared_1941_ = v_isSharedCheck_1953_;
goto v_resetjp_1939_;
}
else
{
lean_inc(v_unfold_1938_);
lean_inc(v_isUnitLike_1937_);
lean_inc(v_defEqPerm_1936_);
lean_inc(v_defEqTrans_1935_);
lean_inc(v_whnf_1934_);
lean_inc(v_synthInstance_1933_);
lean_inc(v_funInfo_1932_);
lean_inc(v_inferType_1931_);
lean_dec(v_cache_1923_);
v___x_1940_ = lean_box(0);
v_isShared_1941_ = v_isSharedCheck_1953_;
goto v_resetjp_1939_;
}
v_resetjp_1939_:
{
lean_object* v___x_1942_; lean_object* v___x_1944_; 
lean_inc_ref(v_finfo_1920_);
v___x_1942_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6___redArg(v_funInfo_1932_, v_a_1915_, v_finfo_1920_);
if (v_isShared_1941_ == 0)
{
lean_ctor_set(v___x_1940_, 1, v___x_1942_);
v___x_1944_ = v___x_1940_;
goto v_reusejp_1943_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v_inferType_1931_);
lean_ctor_set(v_reuseFailAlloc_1952_, 1, v___x_1942_);
lean_ctor_set(v_reuseFailAlloc_1952_, 2, v_synthInstance_1933_);
lean_ctor_set(v_reuseFailAlloc_1952_, 3, v_whnf_1934_);
lean_ctor_set(v_reuseFailAlloc_1952_, 4, v_defEqTrans_1935_);
lean_ctor_set(v_reuseFailAlloc_1952_, 5, v_defEqPerm_1936_);
lean_ctor_set(v_reuseFailAlloc_1952_, 6, v_isUnitLike_1937_);
lean_ctor_set(v_reuseFailAlloc_1952_, 7, v_unfold_1938_);
v___x_1944_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1943_;
}
v_reusejp_1943_:
{
lean_object* v___x_1946_; 
if (v_isShared_1930_ == 0)
{
lean_ctor_set(v___x_1929_, 1, v___x_1944_);
v___x_1946_ = v___x_1929_;
goto v_reusejp_1945_;
}
else
{
lean_object* v_reuseFailAlloc_1951_; 
v_reuseFailAlloc_1951_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1951_, 0, v_mctx_1924_);
lean_ctor_set(v_reuseFailAlloc_1951_, 1, v___x_1944_);
lean_ctor_set(v_reuseFailAlloc_1951_, 2, v_zetaDeltaFVarIds_1925_);
lean_ctor_set(v_reuseFailAlloc_1951_, 3, v_postponed_1926_);
lean_ctor_set(v_reuseFailAlloc_1951_, 4, v_diag_1927_);
v___x_1946_ = v_reuseFailAlloc_1951_;
goto v_reusejp_1945_;
}
v_reusejp_1945_:
{
lean_object* v___x_1947_; lean_object* v___x_1949_; 
v___x_1947_ = lean_st_ref_put(v___y_1921_, v___x_1946_);
if (v_isShared_1918_ == 0)
{
lean_ctor_set(v___x_1917_, 0, v_finfo_1920_);
v___x_1949_ = v___x_1917_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1950_; 
v_reuseFailAlloc_1950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1950_, 0, v_finfo_1920_);
v___x_1949_ = v_reuseFailAlloc_1950_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
return v___x_1949_;
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
lean_object* v_a_1978_; lean_object* v___x_1980_; uint8_t v_isShared_1981_; uint8_t v_isSharedCheck_1985_; 
lean_dec_ref(v___f_1911_);
lean_dec(v_maxArgs_x3f_1904_);
lean_dec_ref(v_fn_1903_);
v_a_1978_ = lean_ctor_get(v___x_1914_, 0);
v_isSharedCheck_1985_ = !lean_is_exclusive(v___x_1914_);
if (v_isSharedCheck_1985_ == 0)
{
v___x_1980_ = v___x_1914_;
v_isShared_1981_ = v_isSharedCheck_1985_;
goto v_resetjp_1979_;
}
else
{
lean_inc(v_a_1978_);
lean_dec(v___x_1914_);
v___x_1980_ = lean_box(0);
v_isShared_1981_ = v_isSharedCheck_1985_;
goto v_resetjp_1979_;
}
v_resetjp_1979_:
{
lean_object* v___x_1983_; 
if (v_isShared_1981_ == 0)
{
v___x_1983_ = v___x_1980_;
goto v_reusejp_1982_;
}
else
{
lean_object* v_reuseFailAlloc_1984_; 
v_reuseFailAlloc_1984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1984_, 0, v_a_1978_);
v___x_1983_ = v_reuseFailAlloc_1984_;
goto v_reusejp_1982_;
}
v_reusejp_1982_:
{
return v___x_1983_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___boxed(lean_object* v_fn_1986_, lean_object* v_maxArgs_x3f_1987_, lean_object* v_a_1988_, lean_object* v_a_1989_, lean_object* v_a_1990_, lean_object* v_a_1991_, lean_object* v_a_1992_){
_start:
{
lean_object* v_res_1993_; 
v_res_1993_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux(v_fn_1986_, v_maxArgs_x3f_1987_, v_a_1988_, v_a_1989_, v_a_1990_, v_a_1991_);
lean_dec(v_a_1991_);
lean_dec_ref(v_a_1990_);
lean_dec(v_a_1989_);
lean_dec_ref(v_a_1988_);
return v_res_1993_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0(lean_object* v_00_u03b2_1994_, lean_object* v_k_1995_, lean_object* v_t_1996_){
_start:
{
uint8_t v___x_1997_; 
v___x_1997_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg(v_k_1995_, v_t_1996_);
return v___x_1997_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___boxed(lean_object* v_00_u03b2_1998_, lean_object* v_k_1999_, lean_object* v_t_2000_){
_start:
{
uint8_t v_res_2001_; lean_object* v_r_2002_; 
v_res_2001_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0(v_00_u03b2_1998_, v_k_1999_, v_t_2000_);
lean_dec(v_t_2000_);
lean_dec(v_k_1999_);
v_r_2002_ = lean_box(v_res_2001_);
return v_r_2002_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2(lean_object* v_upperBound_2003_, lean_object* v_val_2004_, lean_object* v___x_2005_, lean_object* v_fvars_2006_, lean_object* v_inst_2007_, lean_object* v_R_2008_, lean_object* v_a_2009_, lean_object* v_b_2010_, lean_object* v_c_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_){
_start:
{
lean_object* v___x_2017_; 
v___x_2017_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg(v_upperBound_2003_, v_val_2004_, v___x_2005_, v_fvars_2006_, v_a_2009_, v_b_2010_, v___y_2012_, v___y_2013_, v___y_2014_, v___y_2015_);
return v___x_2017_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___boxed(lean_object* v_upperBound_2018_, lean_object* v_val_2019_, lean_object* v___x_2020_, lean_object* v_fvars_2021_, lean_object* v_inst_2022_, lean_object* v_R_2023_, lean_object* v_a_2024_, lean_object* v_b_2025_, lean_object* v_c_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_){
_start:
{
lean_object* v_res_2032_; 
v_res_2032_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2(v_upperBound_2018_, v_val_2019_, v___x_2020_, v_fvars_2021_, v_inst_2022_, v_R_2023_, v_a_2024_, v_b_2025_, v_c_2026_, v___y_2027_, v___y_2028_, v___y_2029_, v___y_2030_);
lean_dec(v___y_2030_);
lean_dec_ref(v___y_2029_);
lean_dec(v___y_2028_);
lean_dec_ref(v___y_2027_);
lean_dec_ref(v_fvars_2021_);
lean_dec_ref(v___x_2020_);
lean_dec_ref(v_val_2019_);
lean_dec(v_upperBound_2018_);
return v_res_2032_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4(lean_object* v_upperBound_2033_, lean_object* v_fvars_2034_, lean_object* v_inst_2035_, lean_object* v_R_2036_, lean_object* v_a_2037_, lean_object* v_b_2038_, lean_object* v_c_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_){
_start:
{
lean_object* v___x_2045_; 
v___x_2045_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg(v_upperBound_2033_, v_fvars_2034_, v_a_2037_, v_b_2038_, v___y_2040_, v___y_2041_, v___y_2042_, v___y_2043_);
return v___x_2045_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___boxed(lean_object* v_upperBound_2046_, lean_object* v_fvars_2047_, lean_object* v_inst_2048_, lean_object* v_R_2049_, lean_object* v_a_2050_, lean_object* v_b_2051_, lean_object* v_c_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_){
_start:
{
lean_object* v_res_2058_; 
v_res_2058_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4(v_upperBound_2046_, v_fvars_2047_, v_inst_2048_, v_R_2049_, v_a_2050_, v_b_2051_, v_c_2052_, v___y_2053_, v___y_2054_, v___y_2055_, v___y_2056_);
lean_dec(v___y_2056_);
lean_dec_ref(v___y_2055_);
lean_dec(v___y_2054_);
lean_dec_ref(v___y_2053_);
lean_dec_ref(v_fvars_2047_);
lean_dec(v_upperBound_2046_);
return v_res_2058_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6(lean_object* v_00_u03b2_2059_, lean_object* v_x_2060_, lean_object* v_x_2061_, lean_object* v_x_2062_){
_start:
{
lean_object* v___x_2063_; 
v___x_2063_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6___redArg(v_x_2060_, v_x_2061_, v_x_2062_);
return v___x_2063_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7(lean_object* v_00_u03b2_2064_, lean_object* v_x_2065_, lean_object* v_x_2066_){
_start:
{
lean_object* v___x_2067_; 
v___x_2067_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___redArg(v_x_2065_, v_x_2066_);
return v___x_2067_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___boxed(lean_object* v_00_u03b2_2068_, lean_object* v_x_2069_, lean_object* v_x_2070_){
_start:
{
lean_object* v_res_2071_; 
v_res_2071_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7(v_00_u03b2_2068_, v_x_2069_, v_x_2070_);
lean_dec_ref(v_x_2070_);
lean_dec_ref(v_x_2069_);
return v_res_2071_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12(lean_object* v_00_u03b2_2072_, lean_object* v_msg_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_){
_start:
{
lean_object* v___x_2079_; 
v___x_2079_ = l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___redArg(v_msg_2073_, v___y_2074_, v___y_2075_, v___y_2076_, v___y_2077_);
return v___x_2079_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___boxed(lean_object* v_00_u03b2_2080_, lean_object* v_msg_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_){
_start:
{
lean_object* v_res_2087_; 
v_res_2087_ = l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12(v_00_u03b2_2080_, v_msg_2081_, v___y_2082_, v___y_2083_, v___y_2084_, v___y_2085_);
lean_dec(v___y_2085_);
lean_dec_ref(v___y_2084_);
lean_dec(v___y_2083_);
lean_dec_ref(v___y_2082_);
return v_res_2087_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9(lean_object* v_00_u03b2_2088_, lean_object* v_inst_2089_, lean_object* v_inst_2090_, lean_object* v_forConst_2091_, lean_object* v_key_2092_, lean_object* v_realize_2093_, lean_object* v_a_2094_, lean_object* v_a_2095_, lean_object* v_a_2096_, lean_object* v_a_2097_){
_start:
{
lean_object* v___x_2099_; 
v___x_2099_ = l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg(v_inst_2089_, v_inst_2090_, v_forConst_2091_, v_key_2092_, v_realize_2093_, v_a_2094_, v_a_2095_, v_a_2096_, v_a_2097_);
return v___x_2099_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___boxed(lean_object* v_00_u03b2_2100_, lean_object* v_inst_2101_, lean_object* v_inst_2102_, lean_object* v_forConst_2103_, lean_object* v_key_2104_, lean_object* v_realize_2105_, lean_object* v_a_2106_, lean_object* v_a_2107_, lean_object* v_a_2108_, lean_object* v_a_2109_, lean_object* v_a_2110_){
_start:
{
lean_object* v_res_2111_; 
v_res_2111_ = l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9(v_00_u03b2_2100_, v_inst_2101_, v_inst_2102_, v_forConst_2103_, v_key_2104_, v_realize_2105_, v_a_2106_, v_a_2107_, v_a_2108_, v_a_2109_);
lean_dec(v_a_2109_);
lean_dec_ref(v_a_2108_);
lean_dec(v_a_2107_);
lean_dec_ref(v_a_2106_);
return v_res_2111_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6(lean_object* v_00_u03b2_2112_, lean_object* v_x_2113_, size_t v_x_2114_, size_t v_x_2115_, lean_object* v_x_2116_, lean_object* v_x_2117_){
_start:
{
lean_object* v___x_2118_; 
v___x_2118_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg(v_x_2113_, v_x_2114_, v_x_2115_, v_x_2116_, v_x_2117_);
return v___x_2118_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___boxed(lean_object* v_00_u03b2_2119_, lean_object* v_x_2120_, lean_object* v_x_2121_, lean_object* v_x_2122_, lean_object* v_x_2123_, lean_object* v_x_2124_){
_start:
{
size_t v_x_13697__boxed_2125_; size_t v_x_13698__boxed_2126_; lean_object* v_res_2127_; 
v_x_13697__boxed_2125_ = lean_unbox_usize(v_x_2121_);
lean_dec(v_x_2121_);
v_x_13698__boxed_2126_ = lean_unbox_usize(v_x_2122_);
lean_dec(v_x_2122_);
v_res_2127_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6(v_00_u03b2_2119_, v_x_2120_, v_x_13697__boxed_2125_, v_x_13698__boxed_2126_, v_x_2123_, v_x_2124_);
return v_res_2127_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8(lean_object* v_00_u03b2_2128_, lean_object* v_x_2129_, size_t v_x_2130_, lean_object* v_x_2131_){
_start:
{
lean_object* v___x_2132_; 
v___x_2132_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___redArg(v_x_2129_, v_x_2130_, v_x_2131_);
return v___x_2132_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___boxed(lean_object* v_00_u03b2_2133_, lean_object* v_x_2134_, lean_object* v_x_2135_, lean_object* v_x_2136_){
_start:
{
size_t v_x_13714__boxed_2137_; lean_object* v_res_2138_; 
v_x_13714__boxed_2137_ = lean_unbox_usize(v_x_2135_);
lean_dec(v_x_2135_);
v_res_2138_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8(v_00_u03b2_2133_, v_x_2134_, v_x_13714__boxed_2137_, v_x_2136_);
lean_dec_ref(v_x_2136_);
lean_dec_ref(v_x_2134_);
return v_res_2138_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7(lean_object* v_00_u03b2_2139_, lean_object* v_n_2140_, lean_object* v_k_2141_, lean_object* v_v_2142_){
_start:
{
lean_object* v___x_2143_; 
v___x_2143_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7___redArg(v_n_2140_, v_k_2141_, v_v_2142_);
return v___x_2143_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8(lean_object* v_00_u03b2_2144_, size_t v_depth_2145_, lean_object* v_keys_2146_, lean_object* v_vals_2147_, lean_object* v_heq_2148_, lean_object* v_i_2149_, lean_object* v_entries_2150_){
_start:
{
lean_object* v___x_2151_; 
v___x_2151_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___redArg(v_depth_2145_, v_keys_2146_, v_vals_2147_, v_i_2149_, v_entries_2150_);
return v___x_2151_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___boxed(lean_object* v_00_u03b2_2152_, lean_object* v_depth_2153_, lean_object* v_keys_2154_, lean_object* v_vals_2155_, lean_object* v_heq_2156_, lean_object* v_i_2157_, lean_object* v_entries_2158_){
_start:
{
size_t v_depth_boxed_2159_; lean_object* v_res_2160_; 
v_depth_boxed_2159_ = lean_unbox_usize(v_depth_2153_);
lean_dec(v_depth_2153_);
v_res_2160_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8(v_00_u03b2_2152_, v_depth_boxed_2159_, v_keys_2154_, v_vals_2155_, v_heq_2156_, v_i_2157_, v_entries_2158_);
lean_dec_ref(v_vals_2155_);
lean_dec_ref(v_keys_2154_);
return v_res_2160_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11(lean_object* v_00_u03b2_2161_, lean_object* v_keys_2162_, lean_object* v_vals_2163_, lean_object* v_heq_2164_, lean_object* v_i_2165_, lean_object* v_k_2166_){
_start:
{
lean_object* v___x_2167_; 
v___x_2167_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___redArg(v_keys_2162_, v_vals_2163_, v_i_2165_, v_k_2166_);
return v___x_2167_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___boxed(lean_object* v_00_u03b2_2168_, lean_object* v_keys_2169_, lean_object* v_vals_2170_, lean_object* v_heq_2171_, lean_object* v_i_2172_, lean_object* v_k_2173_){
_start:
{
lean_object* v_res_2174_; 
v_res_2174_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11(v_00_u03b2_2168_, v_keys_2169_, v_vals_2170_, v_heq_2171_, v_i_2172_, v_k_2173_);
lean_dec_ref(v_k_2173_);
lean_dec_ref(v_vals_2170_);
lean_dec_ref(v_keys_2169_);
return v_res_2174_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15(lean_object* v_00_u03b2_2175_, lean_object* v_x_2176_, lean_object* v_x_2177_){
_start:
{
lean_object* v___x_2178_; 
v___x_2178_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___redArg(v_x_2176_, v_x_2177_);
return v___x_2178_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___boxed(lean_object* v_00_u03b2_2179_, lean_object* v_x_2180_, lean_object* v_x_2181_){
_start:
{
lean_object* v_res_2182_; 
v_res_2182_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15(v_00_u03b2_2179_, v_x_2180_, v_x_2181_);
lean_dec_ref(v_x_2181_);
lean_dec_ref(v_x_2180_);
return v_res_2182_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16(lean_object* v_00_u03b2_2183_, lean_object* v_x_2184_, lean_object* v_x_2185_, lean_object* v_x_2186_){
_start:
{
lean_object* v___x_2187_; 
v___x_2187_ = l_Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16___redArg(v_x_2184_, v_x_2185_, v_x_2186_);
return v___x_2187_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7_spec__12(lean_object* v_00_u03b2_2188_, lean_object* v_x_2189_, lean_object* v_x_2190_, lean_object* v_x_2191_, lean_object* v_x_2192_){
_start:
{
lean_object* v___x_2193_; 
v___x_2193_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7_spec__12___redArg(v_x_2189_, v_x_2190_, v_x_2191_, v_x_2192_);
return v___x_2193_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18(lean_object* v_00_u03b2_2194_, lean_object* v_x_2195_, size_t v_x_2196_, lean_object* v_x_2197_){
_start:
{
lean_object* v___x_2198_; 
v___x_2198_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___redArg(v_x_2195_, v_x_2196_, v_x_2197_);
return v___x_2198_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___boxed(lean_object* v_00_u03b2_2199_, lean_object* v_x_2200_, lean_object* v_x_2201_, lean_object* v_x_2202_){
_start:
{
size_t v_x_13757__boxed_2203_; lean_object* v_res_2204_; 
v_x_13757__boxed_2203_ = lean_unbox_usize(v_x_2201_);
lean_dec(v_x_2201_);
v_res_2204_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18(v_00_u03b2_2199_, v_x_2200_, v_x_13757__boxed_2203_, v_x_2202_);
lean_dec_ref(v_x_2202_);
lean_dec_ref(v_x_2200_);
return v_res_2204_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20(lean_object* v_00_u03b2_2205_, lean_object* v_x_2206_, size_t v_x_2207_, size_t v_x_2208_, lean_object* v_x_2209_, lean_object* v_x_2210_){
_start:
{
lean_object* v___x_2211_; 
v___x_2211_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg(v_x_2206_, v_x_2207_, v_x_2208_, v_x_2209_, v_x_2210_);
return v___x_2211_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___boxed(lean_object* v_00_u03b2_2212_, lean_object* v_x_2213_, lean_object* v_x_2214_, lean_object* v_x_2215_, lean_object* v_x_2216_, lean_object* v_x_2217_){
_start:
{
size_t v_x_13768__boxed_2218_; size_t v_x_13769__boxed_2219_; lean_object* v_res_2220_; 
v_x_13768__boxed_2218_ = lean_unbox_usize(v_x_2214_);
lean_dec(v_x_2214_);
v_x_13769__boxed_2219_ = lean_unbox_usize(v_x_2215_);
lean_dec(v_x_2215_);
v_res_2220_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20(v_00_u03b2_2212_, v_x_2213_, v_x_13768__boxed_2218_, v_x_13769__boxed_2219_, v_x_2216_, v_x_2217_);
return v_res_2220_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19(lean_object* v_00_u03b2_2221_, lean_object* v_keys_2222_, lean_object* v_vals_2223_, lean_object* v_heq_2224_, lean_object* v_i_2225_, lean_object* v_k_2226_){
_start:
{
lean_object* v___x_2227_; 
v___x_2227_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___redArg(v_keys_2222_, v_vals_2223_, v_i_2225_, v_k_2226_);
return v___x_2227_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___boxed(lean_object* v_00_u03b2_2228_, lean_object* v_keys_2229_, lean_object* v_vals_2230_, lean_object* v_heq_2231_, lean_object* v_i_2232_, lean_object* v_k_2233_){
_start:
{
lean_object* v_res_2234_; 
v_res_2234_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19(v_00_u03b2_2228_, v_keys_2229_, v_vals_2230_, v_heq_2231_, v_i_2232_, v_k_2233_);
lean_dec_ref(v_k_2233_);
lean_dec_ref(v_vals_2230_);
lean_dec_ref(v_keys_2229_);
return v_res_2234_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22(lean_object* v_00_u03b2_2235_, lean_object* v_n_2236_, lean_object* v_k_2237_, lean_object* v_v_2238_){
_start:
{
lean_object* v___x_2239_; 
v___x_2239_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22___redArg(v_n_2236_, v_k_2237_, v_v_2238_);
return v___x_2239_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23(lean_object* v_00_u03b2_2240_, size_t v_depth_2241_, lean_object* v_keys_2242_, lean_object* v_vals_2243_, lean_object* v_heq_2244_, lean_object* v_i_2245_, lean_object* v_entries_2246_){
_start:
{
lean_object* v___x_2247_; 
v___x_2247_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___redArg(v_depth_2241_, v_keys_2242_, v_vals_2243_, v_i_2245_, v_entries_2246_);
return v___x_2247_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___boxed(lean_object* v_00_u03b2_2248_, lean_object* v_depth_2249_, lean_object* v_keys_2250_, lean_object* v_vals_2251_, lean_object* v_heq_2252_, lean_object* v_i_2253_, lean_object* v_entries_2254_){
_start:
{
size_t v_depth_boxed_2255_; lean_object* v_res_2256_; 
v_depth_boxed_2255_ = lean_unbox_usize(v_depth_2249_);
lean_dec(v_depth_2249_);
v_res_2256_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23(v_00_u03b2_2248_, v_depth_boxed_2255_, v_keys_2250_, v_vals_2251_, v_heq_2252_, v_i_2253_, v_entries_2254_);
lean_dec_ref(v_vals_2251_);
lean_dec_ref(v_keys_2250_);
return v_res_2256_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22_spec__23(lean_object* v_00_u03b2_2257_, lean_object* v_x_2258_, lean_object* v_x_2259_, lean_object* v_x_2260_, lean_object* v_x_2261_){
_start:
{
lean_object* v___x_2262_; 
v___x_2262_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22_spec__23___redArg(v_x_2258_, v_x_2259_, v_x_2260_, v_x_2261_);
return v___x_2262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfo(lean_object* v_fn_2263_, lean_object* v_maxArgs_x3f_2264_, lean_object* v_a_2265_, lean_object* v_a_2266_, lean_object* v_a_2267_, lean_object* v_a_2268_){
_start:
{
lean_object* v___x_2270_; 
v___x_2270_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux(v_fn_2263_, v_maxArgs_x3f_2264_, v_a_2265_, v_a_2266_, v_a_2267_, v_a_2268_);
return v___x_2270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfo___boxed(lean_object* v_fn_2271_, lean_object* v_maxArgs_x3f_2272_, lean_object* v_a_2273_, lean_object* v_a_2274_, lean_object* v_a_2275_, lean_object* v_a_2276_, lean_object* v_a_2277_){
_start:
{
lean_object* v_res_2278_; 
v_res_2278_ = l_Lean_Meta_getFunInfo(v_fn_2271_, v_maxArgs_x3f_2272_, v_a_2273_, v_a_2274_, v_a_2275_, v_a_2276_);
lean_dec(v_a_2276_);
lean_dec_ref(v_a_2275_);
lean_dec(v_a_2274_);
lean_dec_ref(v_a_2273_);
return v_res_2278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object* v_fn_2279_, lean_object* v_nargs_2280_, lean_object* v_a_2281_, lean_object* v_a_2282_, lean_object* v_a_2283_, lean_object* v_a_2284_){
_start:
{
lean_object* v___x_2286_; lean_object* v___x_2287_; 
v___x_2286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2286_, 0, v_nargs_2280_);
v___x_2287_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux(v_fn_2279_, v___x_2286_, v_a_2281_, v_a_2282_, v_a_2283_, v_a_2284_);
return v___x_2287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfoNArgs___boxed(lean_object* v_fn_2288_, lean_object* v_nargs_2289_, lean_object* v_a_2290_, lean_object* v_a_2291_, lean_object* v_a_2292_, lean_object* v_a_2293_, lean_object* v_a_2294_){
_start:
{
lean_object* v_res_2295_; 
v_res_2295_ = l_Lean_Meta_getFunInfoNArgs(v_fn_2288_, v_nargs_2289_, v_a_2290_, v_a_2291_, v_a_2292_, v_a_2293_);
lean_dec(v_a_2293_);
lean_dec_ref(v_a_2292_);
lean_dec(v_a_2291_);
lean_dec_ref(v_a_2290_);
return v_res_2295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInfo_getArity(lean_object* v_info_2296_){
_start:
{
lean_object* v_paramInfo_2297_; lean_object* v___x_2298_; 
v_paramInfo_2297_ = lean_ctor_get(v_info_2296_, 0);
v___x_2298_ = lean_array_get_size(v_paramInfo_2297_);
return v___x_2298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInfo_getArity___boxed(lean_object* v_info_2299_){
_start:
{
lean_object* v_res_2300_; 
v_res_2300_ = l_Lean_Meta_FunInfo_getArity(v_info_2299_);
lean_dec_ref(v_info_2299_);
return v_res_2300_;
}
}
lean_object* runtime_initialize_Lean_Meta_InferType(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_FunInfo(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_FunInfo(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_InferType(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_FunInfo(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_FunInfo(builtin);
}
#ifdef __cplusplus
}
#endif
