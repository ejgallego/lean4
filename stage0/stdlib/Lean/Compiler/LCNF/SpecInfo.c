// Lean compiler output
// Module: Lean.Compiler.LCNF.SpecInfo
// Imports: public import Lean.Compiler.LCNF.FixedParams public import Lean.Compiler.LCNF.InferType
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
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedParam_default___redArg();
uint8_t l_Lean_Expr_containsFVar(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_instInhabitedReaderT___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_nat_to_int(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_SimplePersistentEnvExtension_replayOfFilter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentEnvExtension_getModuleIREntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Compiler_hasNospecializeAttribute(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_getSpecializationArgs_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_isArrowClass_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_Compiler_LCNF_isTypeFormerType(lean_object*);
uint8_t l_Lean_Compiler_hasWeakSpecializeAttribute(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkFixedParamsMap(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPurity___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_toLocalContext(lean_object*, uint8_t);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_ctorElim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_fixedInst_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_fixedInst_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_fixedInst_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_fixedInst_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_fixedHO_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_fixedHO_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_fixedHO_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_fixedHO_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_fixedNeutral_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_fixedNeutral_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_fixedNeutral_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_fixedNeutral_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_user_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_user_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_user_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_user_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_other_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_other_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_other_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_other_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Compiler_LCNF_instInhabitedSpecParamInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedSpecParamInfo_default___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedSpecParamInfo_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_instInhabitedSpecParamInfo_default = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedSpecParamInfo_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_instInhabitedSpecParamInfo = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedSpecParamInfo_default___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lean.Compiler.LCNF.SpecParamInfo.fixedHO"};
static const lean_object* l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__0_value)}};
static const lean_object* l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "Lean.Compiler.LCNF.SpecParamInfo.fixedNeutral"};
static const lean_object* l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__2_value)}};
static const lean_object* l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__3_value;
static const lean_string_object l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lean.Compiler.LCNF.SpecParamInfo.user"};
static const lean_object* l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__4_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__4_value)}};
static const lean_object* l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__5_value;
static const lean_string_object l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Lean.Compiler.LCNF.SpecParamInfo.other"};
static const lean_object* l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__6_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__6_value)}};
static const lean_object* l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__7_value;
static const lean_string_object l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Lean.Compiler.LCNF.SpecParamInfo.fixedInst"};
static const lean_object* l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__8_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__8_value)}};
static const lean_object* l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__9_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__10_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__11;
static lean_once_cell_t l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__12;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_instReprSpecParamInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instReprSpecParamInfo___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instReprSpecParamInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_instReprSpecParamInfo = (const lean_object*)&l_Lean_Compiler_LCNF_instReprSpecParamInfo___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_SpecParamInfo_causesSpecialization(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_causesSpecialization___boxed(lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "I"};
static const lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__2;
static const lean_string_object l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "W"};
static const lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__3_value)}};
static const lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__5;
static const lean_string_object l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "H"};
static const lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__6_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__6_value)}};
static const lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__7_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__8;
static const lean_string_object l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "N"};
static const lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__9_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__9_value)}};
static const lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__10_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__11;
static const lean_string_object l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "U"};
static const lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__12 = (const lean_object*)&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__12_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__12_value)}};
static const lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__13 = (const lean_object*)&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__13_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__14;
static const lean_string_object l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "O"};
static const lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__15 = (const lean_object*)&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__15_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__15_value)}};
static const lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__16 = (const lean_object*)&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__16_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__17;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo = (const lean_object*)&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___closed__0_value;
static const lean_array_object l_Lean_Compiler_LCNF_instInhabitedSpecEntry_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedSpecEntry_default___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedSpecEntry_default___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_instInhabitedSpecEntry_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_instInhabitedSpecEntry_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedSpecEntry_default___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedSpecEntry_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_instInhabitedSpecEntry_default = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedSpecEntry_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_instInhabitedSpecEntry = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedSpecEntry_default___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", alreadySpecialized\? "};
static const lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___lam__1___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___lam__1___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = ", info: "};
static const lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___lam__1___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___lam__1___closed__3;
static const lean_string_object l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___lam__1___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___lam__1___closed__4_value;
static const lean_string_object l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___lam__1___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___lam__1___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___closed__0_value)} };
static const lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecEntry = (const lean_object*)&l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_instInhabitedSpecState_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instInhabitedSpecState_default___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_instInhabitedSpecState_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instInhabitedSpecState_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSpecState_default;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSpecState;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecState_addEntry(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_declLt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_declLt___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_sortEntries___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_declLt___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_sortEntries___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_sortEntries___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_sortEntries(lean_object*);
static const lean_array_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_findAtSorted_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_findAtSorted_x3f___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_findAtSorted_x3f___closed__0_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_findAtSorted_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_findAtSorted_x3f___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_findAtSorted_x3f___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_findAtSorted_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_findAtSorted_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___lam__1_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___lam__1_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___lam__2_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___lam__2_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2____boxed(lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___lam__1_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___lam__2_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "specExtension"};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(68, 195, 72, 11, 109, 136, 143, 118)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(229, 76, 245, 57, 5, 8, 44, 184)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(4, 125, 66, 207, 170, 81, 149, 39)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_SpecState_addEntry, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SimplePersistentEnvExtension_replayOfFilter___boxed, .m_arity = 7, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 8, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1_spec__2(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_specExtension;
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_isNoSpecType(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_isNoSpecType___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_isWeakSpecType(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_isWeakSpecType___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_hasFwdDeps_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_hasFwdDeps_spec__0___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_hasFwdDeps_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_hasFwdDeps_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_hasFwdDeps_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_hasFwdDeps___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_hasFwdDeps___closed__0;
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_hasFwdDeps(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_hasFwdDeps___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_hasFwdDeps_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_hasFwdDeps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__8___closed__0;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__8___closed__1 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__8___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__8___closed__2 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__8___closed__2_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__4___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__1_spec__1(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__1___boxed(lean_object*, lean_object*);
static const lean_array_object l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__0(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__5(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___redArg___closed__0;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Compiler.LCNF.SpecInfo"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___redArg___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lean.Compiler.LCNF.computeSpecEntries"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___redArg___closed__2_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___redArg___closed__3_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___redArg___closed__4;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_computeSpecEntries___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_computeSpecEntries___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_computeSpecEntries___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_computeSpecEntries(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_computeSpecEntries___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__2___closed__0;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__2___closed__1;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__2___closed__2;
static const lean_string_object l_Lean_addTrace___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__2___closed__3 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__2___closed__3_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__2___closed__4 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__2___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00instBEqOption_beq___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00instBEqOption_beq___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Compiler_LCNF_saveSpecEntries___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2___redArg___closed__0_value)}};
static const lean_object* l_Lean_Compiler_LCNF_saveSpecEntries___lam__0___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_saveSpecEntries___lam__0___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_saveSpecEntries___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_saveSpecEntries___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___lam__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "specialize"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "info"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(135, 178, 200, 12, 6, 8, 169, 47)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__4_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__3_value),LEAN_SCALAR_PTR_LITERAL(239, 10, 5, 245, 97, 204, 194, 190)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__7;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__8_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__9;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_saveSpecEntries___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_saveSpecEntries___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_saveSpecEntries___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_saveSpecEntries___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_saveSpecEntries(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_saveSpecEntries___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00instBEqOption_beq___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00instBEqOption_beq___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_getSpecEntryCore_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_getSpecEntryCore_x3f___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getSpecEntryCore_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getSpecEntry_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getSpecEntry_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getSpecEntry_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isSpecCandidate___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isSpecCandidate___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isSpecCandidate(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "SpecInfo"};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(189, 143, 90, 20, 187, 241, 210, 130)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(72, 221, 196, 202, 242, 20, 202, 54)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(33, 252, 235, 237, 133, 48, 182, 31)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(79, 107, 219, 87, 200, 53, 139, 182)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(34, 11, 76, 70, 228, 174, 143, 241)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(151, 151, 165, 105, 57, 237, 31, 157)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(82, 32, 108, 248, 142, 238, 193, 222)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(83, 232, 203, 212, 181, 229, 127, 130)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(53, 208, 136, 97, 67, 35, 203, 29)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(224, 28, 172, 95, 144, 231, 210, 82)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(40, 101, 36, 130, 141, 225, 110, 6)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value),((lean_object*)(((size_t)(513551779) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(142, 89, 44, 236, 61, 209, 169, 61)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(217, 94, 100, 117, 85, 240, 197, 64)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(17, 114, 191, 226, 45, 202, 144, 166)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(236, 120, 192, 10, 119, 154, 32, 73)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lean_Compiler_LCNF_SpecParamInfo_ctorIdx___impl(v_x_3_);
lean_dec(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
if (lean_obj_tag(v_t_5_) == 0)
{
uint8_t v_weak_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v_weak_7_ = lean_ctor_get_uint8(v_t_5_, 0);
v___x_8_ = lean_box(v_weak_7_);
v___x_9_ = lean_apply_1(v_k_6_, v___x_8_);
return v___x_9_;
}
else
{
return v_k_6_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_ctorElim___redArg___boxed(lean_object* v_t_10_, lean_object* v_k_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = l_Lean_Compiler_LCNF_SpecParamInfo_ctorElim___redArg(v_t_10_, v_k_11_);
lean_dec(v_t_10_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_ctorElim(lean_object* v_motive_13_, lean_object* v_ctorIdx_14_, lean_object* v_t_15_, lean_object* v_h_16_, lean_object* v_k_17_){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = l_Lean_Compiler_LCNF_SpecParamInfo_ctorElim___redArg(v_t_15_, v_k_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_ctorElim___boxed(lean_object* v_motive_19_, lean_object* v_ctorIdx_20_, lean_object* v_t_21_, lean_object* v_h_22_, lean_object* v_k_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lean_Compiler_LCNF_SpecParamInfo_ctorElim(v_motive_19_, v_ctorIdx_20_, v_t_21_, v_h_22_, v_k_23_);
lean_dec(v_t_21_);
lean_dec(v_ctorIdx_20_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_fixedInst_elim___redArg(lean_object* v_t_25_, lean_object* v_fixedInst_26_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Lean_Compiler_LCNF_SpecParamInfo_ctorElim___redArg(v_t_25_, v_fixedInst_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_fixedInst_elim___redArg___boxed(lean_object* v_t_28_, lean_object* v_fixedInst_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lean_Compiler_LCNF_SpecParamInfo_fixedInst_elim___redArg(v_t_28_, v_fixedInst_29_);
lean_dec(v_t_28_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_fixedInst_elim(lean_object* v_motive_31_, lean_object* v_t_32_, lean_object* v_h_33_, lean_object* v_fixedInst_34_){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = l_Lean_Compiler_LCNF_SpecParamInfo_ctorElim___redArg(v_t_32_, v_fixedInst_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_fixedInst_elim___boxed(lean_object* v_motive_36_, lean_object* v_t_37_, lean_object* v_h_38_, lean_object* v_fixedInst_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l_Lean_Compiler_LCNF_SpecParamInfo_fixedInst_elim(v_motive_36_, v_t_37_, v_h_38_, v_fixedInst_39_);
lean_dec(v_t_37_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_fixedHO_elim___redArg(lean_object* v_t_41_, lean_object* v_fixedHO_42_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Lean_Compiler_LCNF_SpecParamInfo_ctorElim___redArg(v_t_41_, v_fixedHO_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_fixedHO_elim___redArg___boxed(lean_object* v_t_44_, lean_object* v_fixedHO_45_){
_start:
{
lean_object* v_res_46_; 
v_res_46_ = l_Lean_Compiler_LCNF_SpecParamInfo_fixedHO_elim___redArg(v_t_44_, v_fixedHO_45_);
lean_dec(v_t_44_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_fixedHO_elim(lean_object* v_motive_47_, lean_object* v_t_48_, lean_object* v_h_49_, lean_object* v_fixedHO_50_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = l_Lean_Compiler_LCNF_SpecParamInfo_ctorElim___redArg(v_t_48_, v_fixedHO_50_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_fixedHO_elim___boxed(lean_object* v_motive_52_, lean_object* v_t_53_, lean_object* v_h_54_, lean_object* v_fixedHO_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l_Lean_Compiler_LCNF_SpecParamInfo_fixedHO_elim(v_motive_52_, v_t_53_, v_h_54_, v_fixedHO_55_);
lean_dec(v_t_53_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_fixedNeutral_elim___redArg(lean_object* v_t_57_, lean_object* v_fixedNeutral_58_){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = l_Lean_Compiler_LCNF_SpecParamInfo_ctorElim___redArg(v_t_57_, v_fixedNeutral_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_fixedNeutral_elim___redArg___boxed(lean_object* v_t_60_, lean_object* v_fixedNeutral_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = l_Lean_Compiler_LCNF_SpecParamInfo_fixedNeutral_elim___redArg(v_t_60_, v_fixedNeutral_61_);
lean_dec(v_t_60_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_fixedNeutral_elim(lean_object* v_motive_63_, lean_object* v_t_64_, lean_object* v_h_65_, lean_object* v_fixedNeutral_66_){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = l_Lean_Compiler_LCNF_SpecParamInfo_ctorElim___redArg(v_t_64_, v_fixedNeutral_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_fixedNeutral_elim___boxed(lean_object* v_motive_68_, lean_object* v_t_69_, lean_object* v_h_70_, lean_object* v_fixedNeutral_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = l_Lean_Compiler_LCNF_SpecParamInfo_fixedNeutral_elim(v_motive_68_, v_t_69_, v_h_70_, v_fixedNeutral_71_);
lean_dec(v_t_69_);
return v_res_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_user_elim___redArg(lean_object* v_t_73_, lean_object* v_user_74_){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = l_Lean_Compiler_LCNF_SpecParamInfo_ctorElim___redArg(v_t_73_, v_user_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_user_elim___redArg___boxed(lean_object* v_t_76_, lean_object* v_user_77_){
_start:
{
lean_object* v_res_78_; 
v_res_78_ = l_Lean_Compiler_LCNF_SpecParamInfo_user_elim___redArg(v_t_76_, v_user_77_);
lean_dec(v_t_76_);
return v_res_78_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_user_elim(lean_object* v_motive_79_, lean_object* v_t_80_, lean_object* v_h_81_, lean_object* v_user_82_){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = l_Lean_Compiler_LCNF_SpecParamInfo_ctorElim___redArg(v_t_80_, v_user_82_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_user_elim___boxed(lean_object* v_motive_84_, lean_object* v_t_85_, lean_object* v_h_86_, lean_object* v_user_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = l_Lean_Compiler_LCNF_SpecParamInfo_user_elim(v_motive_84_, v_t_85_, v_h_86_, v_user_87_);
lean_dec(v_t_85_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_other_elim___redArg(lean_object* v_t_89_, lean_object* v_other_90_){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = l_Lean_Compiler_LCNF_SpecParamInfo_ctorElim___redArg(v_t_89_, v_other_90_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_other_elim___redArg___boxed(lean_object* v_t_92_, lean_object* v_other_93_){
_start:
{
lean_object* v_res_94_; 
v_res_94_ = l_Lean_Compiler_LCNF_SpecParamInfo_other_elim___redArg(v_t_92_, v_other_93_);
lean_dec(v_t_92_);
return v_res_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_other_elim(lean_object* v_motive_95_, lean_object* v_t_96_, lean_object* v_h_97_, lean_object* v_other_98_){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = l_Lean_Compiler_LCNF_SpecParamInfo_ctorElim___redArg(v_t_96_, v_other_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_other_elim___boxed(lean_object* v_motive_100_, lean_object* v_t_101_, lean_object* v_h_102_, lean_object* v_other_103_){
_start:
{
lean_object* v_res_104_; 
v_res_104_ = l_Lean_Compiler_LCNF_SpecParamInfo_other_elim(v_motive_100_, v_t_101_, v_h_102_, v_other_103_);
lean_dec(v_t_101_);
return v_res_104_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__11(void){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_127_ = lean_unsigned_to_nat(2u);
v___x_128_ = lean_nat_to_int(v___x_127_);
return v___x_128_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__12(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_129_ = lean_unsigned_to_nat(1u);
v___x_130_ = lean_nat_to_int(v___x_129_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr(lean_object* v_x_131_, lean_object* v_prec_132_){
_start:
{
lean_object* v___y_134_; lean_object* v___y_141_; lean_object* v___y_148_; lean_object* v___y_155_; 
switch(lean_obj_tag(v_x_131_))
{
case 0:
{
uint8_t v_weak_161_; lean_object* v___y_163_; lean_object* v___x_171_; uint8_t v___x_172_; 
v_weak_161_ = lean_ctor_get_uint8(v_x_131_, 0);
v___x_171_ = lean_unsigned_to_nat(1024u);
v___x_172_ = lean_nat_dec_le(v___x_171_, v_prec_132_);
if (v___x_172_ == 0)
{
lean_object* v___x_173_; 
v___x_173_ = lean_obj_once(&l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__11, &l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__11_once, _init_l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__11);
v___y_163_ = v___x_173_;
goto v___jp_162_;
}
else
{
lean_object* v___x_174_; 
v___x_174_ = lean_obj_once(&l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__12, &l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__12_once, _init_l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__12);
v___y_163_ = v___x_174_;
goto v___jp_162_;
}
v___jp_162_:
{
lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; uint8_t v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_164_ = ((lean_object*)(l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__10));
v___x_165_ = l_Bool_repr___redArg(v_weak_161_);
v___x_166_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_166_, 0, v___x_164_);
lean_ctor_set(v___x_166_, 1, v___x_165_);
lean_inc(v___y_163_);
v___x_167_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_167_, 0, v___y_163_);
lean_ctor_set(v___x_167_, 1, v___x_166_);
v___x_168_ = 0;
v___x_169_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_169_, 0, v___x_167_);
lean_ctor_set_uint8(v___x_169_, sizeof(void*)*1, v___x_168_);
v___x_170_ = l_Repr_addAppParen(v___x_169_, v_prec_132_);
return v___x_170_;
}
}
case 1:
{
lean_object* v___x_175_; uint8_t v___x_176_; 
v___x_175_ = lean_unsigned_to_nat(1024u);
v___x_176_ = lean_nat_dec_le(v___x_175_, v_prec_132_);
if (v___x_176_ == 0)
{
lean_object* v___x_177_; 
v___x_177_ = lean_obj_once(&l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__11, &l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__11_once, _init_l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__11);
v___y_134_ = v___x_177_;
goto v___jp_133_;
}
else
{
lean_object* v___x_178_; 
v___x_178_ = lean_obj_once(&l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__12, &l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__12_once, _init_l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__12);
v___y_134_ = v___x_178_;
goto v___jp_133_;
}
}
case 2:
{
lean_object* v___x_179_; uint8_t v___x_180_; 
v___x_179_ = lean_unsigned_to_nat(1024u);
v___x_180_ = lean_nat_dec_le(v___x_179_, v_prec_132_);
if (v___x_180_ == 0)
{
lean_object* v___x_181_; 
v___x_181_ = lean_obj_once(&l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__11, &l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__11_once, _init_l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__11);
v___y_141_ = v___x_181_;
goto v___jp_140_;
}
else
{
lean_object* v___x_182_; 
v___x_182_ = lean_obj_once(&l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__12, &l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__12_once, _init_l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__12);
v___y_141_ = v___x_182_;
goto v___jp_140_;
}
}
case 3:
{
lean_object* v___x_183_; uint8_t v___x_184_; 
v___x_183_ = lean_unsigned_to_nat(1024u);
v___x_184_ = lean_nat_dec_le(v___x_183_, v_prec_132_);
if (v___x_184_ == 0)
{
lean_object* v___x_185_; 
v___x_185_ = lean_obj_once(&l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__11, &l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__11_once, _init_l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__11);
v___y_148_ = v___x_185_;
goto v___jp_147_;
}
else
{
lean_object* v___x_186_; 
v___x_186_ = lean_obj_once(&l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__12, &l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__12_once, _init_l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__12);
v___y_148_ = v___x_186_;
goto v___jp_147_;
}
}
default: 
{
lean_object* v___x_187_; uint8_t v___x_188_; 
v___x_187_ = lean_unsigned_to_nat(1024u);
v___x_188_ = lean_nat_dec_le(v___x_187_, v_prec_132_);
if (v___x_188_ == 0)
{
lean_object* v___x_189_; 
v___x_189_ = lean_obj_once(&l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__11, &l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__11_once, _init_l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__11);
v___y_155_ = v___x_189_;
goto v___jp_154_;
}
else
{
lean_object* v___x_190_; 
v___x_190_ = lean_obj_once(&l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__12, &l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__12_once, _init_l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__12);
v___y_155_ = v___x_190_;
goto v___jp_154_;
}
}
}
v___jp_133_:
{
lean_object* v___x_135_; lean_object* v___x_136_; uint8_t v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_135_ = ((lean_object*)(l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__1));
lean_inc(v___y_134_);
v___x_136_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_136_, 0, v___y_134_);
lean_ctor_set(v___x_136_, 1, v___x_135_);
v___x_137_ = 0;
v___x_138_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_138_, 0, v___x_136_);
lean_ctor_set_uint8(v___x_138_, sizeof(void*)*1, v___x_137_);
v___x_139_ = l_Repr_addAppParen(v___x_138_, v_prec_132_);
return v___x_139_;
}
v___jp_140_:
{
lean_object* v___x_142_; lean_object* v___x_143_; uint8_t v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_142_ = ((lean_object*)(l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__3));
lean_inc(v___y_141_);
v___x_143_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_143_, 0, v___y_141_);
lean_ctor_set(v___x_143_, 1, v___x_142_);
v___x_144_ = 0;
v___x_145_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_145_, 0, v___x_143_);
lean_ctor_set_uint8(v___x_145_, sizeof(void*)*1, v___x_144_);
v___x_146_ = l_Repr_addAppParen(v___x_145_, v_prec_132_);
return v___x_146_;
}
v___jp_147_:
{
lean_object* v___x_149_; lean_object* v___x_150_; uint8_t v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_149_ = ((lean_object*)(l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__5));
lean_inc(v___y_148_);
v___x_150_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_150_, 0, v___y_148_);
lean_ctor_set(v___x_150_, 1, v___x_149_);
v___x_151_ = 0;
v___x_152_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_152_, 0, v___x_150_);
lean_ctor_set_uint8(v___x_152_, sizeof(void*)*1, v___x_151_);
v___x_153_ = l_Repr_addAppParen(v___x_152_, v_prec_132_);
return v___x_153_;
}
v___jp_154_:
{
lean_object* v___x_156_; lean_object* v___x_157_; uint8_t v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_156_ = ((lean_object*)(l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___closed__7));
lean_inc(v___y_155_);
v___x_157_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_157_, 0, v___y_155_);
lean_ctor_set(v___x_157_, 1, v___x_156_);
v___x_158_ = 0;
v___x_159_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_159_, 0, v___x_157_);
lean_ctor_set_uint8(v___x_159_, sizeof(void*)*1, v___x_158_);
v___x_160_ = l_Repr_addAppParen(v___x_159_, v_prec_132_);
return v___x_160_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr___boxed(lean_object* v_x_191_, lean_object* v_prec_192_){
_start:
{
lean_object* v_res_193_; 
v_res_193_ = l_Lean_Compiler_LCNF_instReprSpecParamInfo_repr(v_x_191_, v_prec_192_);
lean_dec(v_prec_192_);
lean_dec(v_x_191_);
return v_res_193_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_SpecParamInfo_causesSpecialization(lean_object* v_x_196_){
_start:
{
switch(lean_obj_tag(v_x_196_))
{
case 0:
{
uint8_t v_weak_197_; 
v_weak_197_ = lean_ctor_get_uint8(v_x_196_, 0);
if (v_weak_197_ == 0)
{
uint8_t v___x_198_; 
v___x_198_ = 1;
return v___x_198_;
}
else
{
uint8_t v___x_199_; 
v___x_199_ = 0;
return v___x_199_;
}
}
case 2:
{
uint8_t v___x_200_; 
v___x_200_ = 0;
return v___x_200_;
}
case 4:
{
uint8_t v___x_201_; 
v___x_201_ = 0;
return v___x_201_;
}
default: 
{
uint8_t v___x_202_; 
v___x_202_ = 1;
return v___x_202_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecParamInfo_causesSpecialization___boxed(lean_object* v_x_203_){
_start:
{
uint8_t v_res_204_; lean_object* v_r_205_; 
v_res_204_ = l_Lean_Compiler_LCNF_SpecParamInfo_causesSpecialization(v_x_203_);
lean_dec(v_x_203_);
v_r_205_ = lean_box(v_res_204_);
return v_r_205_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__2(void){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_209_ = ((lean_object*)(l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__1));
v___x_210_ = l_Lean_MessageData_ofFormat(v___x_209_);
return v___x_210_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__5(void){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_214_ = ((lean_object*)(l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__4));
v___x_215_ = l_Lean_MessageData_ofFormat(v___x_214_);
return v___x_215_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__8(void){
_start:
{
lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_219_ = ((lean_object*)(l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__7));
v___x_220_ = l_Lean_MessageData_ofFormat(v___x_219_);
return v___x_220_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__11(void){
_start:
{
lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_224_ = ((lean_object*)(l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__10));
v___x_225_ = l_Lean_MessageData_ofFormat(v___x_224_);
return v___x_225_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__14(void){
_start:
{
lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_229_ = ((lean_object*)(l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__13));
v___x_230_ = l_Lean_MessageData_ofFormat(v___x_229_);
return v___x_230_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__17(void){
_start:
{
lean_object* v___x_234_; lean_object* v___x_235_; 
v___x_234_ = ((lean_object*)(l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__16));
v___x_235_ = l_Lean_MessageData_ofFormat(v___x_234_);
return v___x_235_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0(lean_object* v_x_236_){
_start:
{
switch(lean_obj_tag(v_x_236_))
{
case 0:
{
uint8_t v_weak_237_; 
v_weak_237_ = lean_ctor_get_uint8(v_x_236_, 0);
if (v_weak_237_ == 0)
{
lean_object* v___x_238_; 
v___x_238_ = lean_obj_once(&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__2, &l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__2_once, _init_l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__2);
return v___x_238_;
}
else
{
lean_object* v___x_239_; 
v___x_239_ = lean_obj_once(&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__5, &l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__5_once, _init_l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__5);
return v___x_239_;
}
}
case 1:
{
lean_object* v___x_240_; 
v___x_240_ = lean_obj_once(&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__8, &l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__8_once, _init_l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__8);
return v___x_240_;
}
case 2:
{
lean_object* v___x_241_; 
v___x_241_ = lean_obj_once(&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__11, &l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__11_once, _init_l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__11);
return v___x_241_;
}
case 3:
{
lean_object* v___x_242_; 
v___x_242_ = lean_obj_once(&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__14, &l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__14_once, _init_l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__14);
return v___x_242_;
}
default: 
{
lean_object* v___x_243_; 
v___x_243_ = lean_obj_once(&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__17, &l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__17_once, _init_l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__17);
return v___x_243_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___boxed(lean_object* v_x_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0(v_x_244_);
lean_dec(v_x_244_);
return v_res_245_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___lam__1___closed__1(void){
_start:
{
lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_257_ = ((lean_object*)(l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___lam__1___closed__0));
v___x_258_ = l_Lean_stringToMessageData(v___x_257_);
return v___x_258_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___lam__1___closed__3(void){
_start:
{
lean_object* v___x_260_; lean_object* v___x_261_; 
v___x_260_ = ((lean_object*)(l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___lam__1___closed__2));
v___x_261_ = l_Lean_stringToMessageData(v___x_260_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___lam__1(lean_object* v___f_264_, lean_object* v_x_265_){
_start:
{
lean_object* v_declName_266_; lean_object* v_paramsInfo_267_; uint8_t v_alreadySpecialized_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___y_273_; 
v_declName_266_ = lean_ctor_get(v_x_265_, 0);
lean_inc(v_declName_266_);
v_paramsInfo_267_ = lean_ctor_get(v_x_265_, 1);
lean_inc_ref(v_paramsInfo_267_);
v_alreadySpecialized_268_ = lean_ctor_get_uint8(v_x_265_, sizeof(void*)*2);
lean_dec_ref(v_x_265_);
v___x_269_ = l_Lean_MessageData_ofName(v_declName_266_);
v___x_270_ = lean_obj_once(&l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___lam__1___closed__1, &l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___lam__1___closed__1_once, _init_l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___lam__1___closed__1);
v___x_271_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_271_, 0, v___x_269_);
lean_ctor_set(v___x_271_, 1, v___x_270_);
if (v_alreadySpecialized_268_ == 0)
{
lean_object* v___x_284_; 
v___x_284_ = ((lean_object*)(l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___lam__1___closed__4));
v___y_273_ = v___x_284_;
goto v___jp_272_;
}
else
{
lean_object* v___x_285_; 
v___x_285_ = ((lean_object*)(l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___lam__1___closed__5));
v___y_273_ = v___x_285_;
goto v___jp_272_;
}
v___jp_272_:
{
lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; 
lean_inc_ref(v___y_273_);
v___x_274_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_274_, 0, v___y_273_);
v___x_275_ = l_Lean_MessageData_ofFormat(v___x_274_);
v___x_276_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_276_, 0, v___x_271_);
lean_ctor_set(v___x_276_, 1, v___x_275_);
v___x_277_ = lean_obj_once(&l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___lam__1___closed__3, &l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___lam__1___closed__3_once, _init_l_Lean_Compiler_LCNF_instToMessageDataSpecEntry___lam__1___closed__3);
v___x_278_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_278_, 0, v___x_276_);
lean_ctor_set(v___x_278_, 1, v___x_277_);
v___x_279_ = lean_array_to_list(v_paramsInfo_267_);
v___x_280_ = lean_box(0);
v___x_281_ = l_List_mapTR_loop___redArg(v___f_264_, v___x_279_, v___x_280_);
v___x_282_ = l_Lean_MessageData_ofList(v___x_281_);
v___x_283_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_283_, 0, v___x_278_);
lean_ctor_set(v___x_283_, 1, v___x_282_);
return v___x_283_;
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedSpecState_default___closed__0(void){
_start:
{
lean_object* v___x_289_; 
v___x_289_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_289_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedSpecState_default___closed__1(void){
_start:
{
lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_290_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedSpecState_default___closed__0, &l_Lean_Compiler_LCNF_instInhabitedSpecState_default___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedSpecState_default___closed__0);
v___x_291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_291_, 0, v___x_290_);
return v___x_291_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedSpecState_default(void){
_start:
{
lean_object* v___x_292_; 
v___x_292_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedSpecState_default___closed__1, &l_Lean_Compiler_LCNF_instInhabitedSpecState_default___closed__1_once, _init_l_Lean_Compiler_LCNF_instInhabitedSpecState_default___closed__1);
return v___x_292_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedSpecState(void){
_start:
{
lean_object* v___x_293_; 
v___x_293_ = l_Lean_Compiler_LCNF_instInhabitedSpecState_default;
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_294_, lean_object* v_x_295_, lean_object* v_x_296_, lean_object* v_x_297_){
_start:
{
lean_object* v_ks_298_; lean_object* v_vs_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_323_; 
v_ks_298_ = lean_ctor_get(v_x_294_, 0);
v_vs_299_ = lean_ctor_get(v_x_294_, 1);
v_isSharedCheck_323_ = !lean_is_exclusive(v_x_294_);
if (v_isSharedCheck_323_ == 0)
{
v___x_301_ = v_x_294_;
v_isShared_302_ = v_isSharedCheck_323_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_vs_299_);
lean_inc(v_ks_298_);
lean_dec(v_x_294_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_323_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
lean_object* v___x_303_; uint8_t v___x_304_; 
v___x_303_ = lean_array_get_size(v_ks_298_);
v___x_304_ = lean_nat_dec_lt(v_x_295_, v___x_303_);
if (v___x_304_ == 0)
{
lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_308_; 
lean_dec(v_x_295_);
v___x_305_ = lean_array_push(v_ks_298_, v_x_296_);
v___x_306_ = lean_array_push(v_vs_299_, v_x_297_);
if (v_isShared_302_ == 0)
{
lean_ctor_set(v___x_301_, 1, v___x_306_);
lean_ctor_set(v___x_301_, 0, v___x_305_);
v___x_308_ = v___x_301_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v___x_305_);
lean_ctor_set(v_reuseFailAlloc_309_, 1, v___x_306_);
v___x_308_ = v_reuseFailAlloc_309_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
return v___x_308_;
}
}
else
{
lean_object* v_k_x27_310_; uint8_t v___x_311_; 
v_k_x27_310_ = lean_array_fget_borrowed(v_ks_298_, v_x_295_);
v___x_311_ = lean_name_eq(v_x_296_, v_k_x27_310_);
if (v___x_311_ == 0)
{
lean_object* v___x_313_; 
if (v_isShared_302_ == 0)
{
v___x_313_ = v___x_301_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v_ks_298_);
lean_ctor_set(v_reuseFailAlloc_317_, 1, v_vs_299_);
v___x_313_ = v_reuseFailAlloc_317_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_314_ = lean_unsigned_to_nat(1u);
v___x_315_ = lean_nat_add(v_x_295_, v___x_314_);
lean_dec(v_x_295_);
v_x_294_ = v___x_313_;
v_x_295_ = v___x_315_;
goto _start;
}
}
else
{
lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_321_; 
v___x_318_ = lean_array_fset(v_ks_298_, v_x_295_, v_x_296_);
v___x_319_ = lean_array_fset(v_vs_299_, v_x_295_, v_x_297_);
lean_dec(v_x_295_);
if (v_isShared_302_ == 0)
{
lean_ctor_set(v___x_301_, 1, v___x_319_);
lean_ctor_set(v___x_301_, 0, v___x_318_);
v___x_321_ = v___x_301_;
goto v_reusejp_320_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v___x_318_);
lean_ctor_set(v_reuseFailAlloc_322_, 1, v___x_319_);
v___x_321_ = v_reuseFailAlloc_322_;
goto v_reusejp_320_;
}
v_reusejp_320_:
{
return v___x_321_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0_spec__1___redArg(lean_object* v_n_324_, lean_object* v_k_325_, lean_object* v_v_326_){
_start:
{
lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_327_ = lean_unsigned_to_nat(0u);
v___x_328_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0_spec__1_spec__2___redArg(v_n_324_, v___x_327_, v_k_325_, v_v_326_);
return v___x_328_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_329_; 
v___x_329_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_329_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0___redArg(lean_object* v_x_330_, size_t v_x_331_, size_t v_x_332_, lean_object* v_x_333_, lean_object* v_x_334_){
_start:
{
if (lean_obj_tag(v_x_330_) == 0)
{
lean_object* v_es_335_; size_t v___x_336_; size_t v___x_337_; lean_object* v_j_338_; lean_object* v___x_339_; uint8_t v___x_340_; 
v_es_335_ = lean_ctor_get(v_x_330_, 0);
v___x_336_ = ((size_t)31ULL);
v___x_337_ = lean_usize_land(v_x_331_, v___x_336_);
v_j_338_ = lean_usize_to_nat(v___x_337_);
v___x_339_ = lean_array_get_size(v_es_335_);
v___x_340_ = lean_nat_dec_lt(v_j_338_, v___x_339_);
if (v___x_340_ == 0)
{
lean_dec(v_j_338_);
lean_dec(v_x_334_);
lean_dec(v_x_333_);
return v_x_330_;
}
else
{
lean_object* v___x_342_; uint8_t v_isShared_343_; uint8_t v_isSharedCheck_379_; 
lean_inc_ref(v_es_335_);
v_isSharedCheck_379_ = !lean_is_exclusive(v_x_330_);
if (v_isSharedCheck_379_ == 0)
{
lean_object* v_unused_380_; 
v_unused_380_ = lean_ctor_get(v_x_330_, 0);
lean_dec(v_unused_380_);
v___x_342_ = v_x_330_;
v_isShared_343_ = v_isSharedCheck_379_;
goto v_resetjp_341_;
}
else
{
lean_dec(v_x_330_);
v___x_342_ = lean_box(0);
v_isShared_343_ = v_isSharedCheck_379_;
goto v_resetjp_341_;
}
v_resetjp_341_:
{
lean_object* v_v_344_; lean_object* v___x_345_; lean_object* v_xs_x27_346_; lean_object* v___y_348_; 
v_v_344_ = lean_array_fget(v_es_335_, v_j_338_);
v___x_345_ = lean_box(0);
v_xs_x27_346_ = lean_array_fset(v_es_335_, v_j_338_, v___x_345_);
switch(lean_obj_tag(v_v_344_))
{
case 0:
{
lean_object* v_key_353_; lean_object* v_val_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_364_; 
v_key_353_ = lean_ctor_get(v_v_344_, 0);
v_val_354_ = lean_ctor_get(v_v_344_, 1);
v_isSharedCheck_364_ = !lean_is_exclusive(v_v_344_);
if (v_isSharedCheck_364_ == 0)
{
v___x_356_ = v_v_344_;
v_isShared_357_ = v_isSharedCheck_364_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_val_354_);
lean_inc(v_key_353_);
lean_dec(v_v_344_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_364_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
uint8_t v___x_358_; 
v___x_358_ = lean_name_eq(v_x_333_, v_key_353_);
if (v___x_358_ == 0)
{
lean_object* v___x_359_; lean_object* v___x_360_; 
lean_del_object(v___x_356_);
v___x_359_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_353_, v_val_354_, v_x_333_, v_x_334_);
v___x_360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_360_, 0, v___x_359_);
v___y_348_ = v___x_360_;
goto v___jp_347_;
}
else
{
lean_object* v___x_362_; 
lean_dec(v_val_354_);
lean_dec(v_key_353_);
if (v_isShared_357_ == 0)
{
lean_ctor_set(v___x_356_, 1, v_x_334_);
lean_ctor_set(v___x_356_, 0, v_x_333_);
v___x_362_ = v___x_356_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v_x_333_);
lean_ctor_set(v_reuseFailAlloc_363_, 1, v_x_334_);
v___x_362_ = v_reuseFailAlloc_363_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
v___y_348_ = v___x_362_;
goto v___jp_347_;
}
}
}
}
case 1:
{
lean_object* v_node_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_377_; 
v_node_365_ = lean_ctor_get(v_v_344_, 0);
v_isSharedCheck_377_ = !lean_is_exclusive(v_v_344_);
if (v_isSharedCheck_377_ == 0)
{
v___x_367_ = v_v_344_;
v_isShared_368_ = v_isSharedCheck_377_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_node_365_);
lean_dec(v_v_344_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_377_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
size_t v___x_369_; size_t v___x_370_; size_t v___x_371_; size_t v___x_372_; lean_object* v___x_373_; lean_object* v___x_375_; 
v___x_369_ = ((size_t)5ULL);
v___x_370_ = lean_usize_shift_right(v_x_331_, v___x_369_);
v___x_371_ = ((size_t)1ULL);
v___x_372_ = lean_usize_add(v_x_332_, v___x_371_);
v___x_373_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0___redArg(v_node_365_, v___x_370_, v___x_372_, v_x_333_, v_x_334_);
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 0, v___x_373_);
v___x_375_ = v___x_367_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_376_; 
v_reuseFailAlloc_376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_376_, 0, v___x_373_);
v___x_375_ = v_reuseFailAlloc_376_;
goto v_reusejp_374_;
}
v_reusejp_374_:
{
v___y_348_ = v___x_375_;
goto v___jp_347_;
}
}
}
default: 
{
lean_object* v___x_378_; 
v___x_378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_378_, 0, v_x_333_);
lean_ctor_set(v___x_378_, 1, v_x_334_);
v___y_348_ = v___x_378_;
goto v___jp_347_;
}
}
v___jp_347_:
{
lean_object* v___x_349_; lean_object* v___x_351_; 
v___x_349_ = lean_array_fset(v_xs_x27_346_, v_j_338_, v___y_348_);
lean_dec(v_j_338_);
if (v_isShared_343_ == 0)
{
lean_ctor_set(v___x_342_, 0, v___x_349_);
v___x_351_ = v___x_342_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v___x_349_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
}
}
else
{
lean_object* v_ks_381_; lean_object* v_vs_382_; lean_object* v___x_384_; uint8_t v_isShared_385_; uint8_t v_isSharedCheck_400_; 
v_ks_381_ = lean_ctor_get(v_x_330_, 0);
v_vs_382_ = lean_ctor_get(v_x_330_, 1);
v_isSharedCheck_400_ = !lean_is_exclusive(v_x_330_);
if (v_isSharedCheck_400_ == 0)
{
v___x_384_ = v_x_330_;
v_isShared_385_ = v_isSharedCheck_400_;
goto v_resetjp_383_;
}
else
{
lean_inc(v_vs_382_);
lean_inc(v_ks_381_);
lean_dec(v_x_330_);
v___x_384_ = lean_box(0);
v_isShared_385_ = v_isSharedCheck_400_;
goto v_resetjp_383_;
}
v_resetjp_383_:
{
lean_object* v___x_387_; 
if (v_isShared_385_ == 0)
{
v___x_387_ = v___x_384_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_399_; 
v_reuseFailAlloc_399_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_399_, 0, v_ks_381_);
lean_ctor_set(v_reuseFailAlloc_399_, 1, v_vs_382_);
v___x_387_ = v_reuseFailAlloc_399_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
lean_object* v_newNode_388_; size_t v___x_389_; uint8_t v___x_390_; 
v_newNode_388_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0_spec__1___redArg(v___x_387_, v_x_333_, v_x_334_);
v___x_389_ = ((size_t)7ULL);
v___x_390_ = lean_usize_dec_le(v___x_389_, v_x_332_);
if (v___x_390_ == 0)
{
lean_object* v___x_391_; lean_object* v___x_392_; uint8_t v___x_393_; 
v___x_391_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_388_);
v___x_392_ = lean_unsigned_to_nat(4u);
v___x_393_ = lean_nat_dec_lt(v___x_391_, v___x_392_);
lean_dec(v___x_391_);
if (v___x_393_ == 0)
{
lean_object* v_ks_394_; lean_object* v_vs_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; 
v_ks_394_ = lean_ctor_get(v_newNode_388_, 0);
lean_inc_ref(v_ks_394_);
v_vs_395_ = lean_ctor_get(v_newNode_388_, 1);
lean_inc_ref(v_vs_395_);
lean_dec_ref(v_newNode_388_);
v___x_396_ = lean_unsigned_to_nat(0u);
v___x_397_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0___redArg___closed__0);
v___x_398_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0_spec__2___redArg(v_x_332_, v_ks_394_, v_vs_395_, v___x_396_, v___x_397_);
lean_dec_ref(v_vs_395_);
lean_dec_ref(v_ks_394_);
return v___x_398_;
}
else
{
return v_newNode_388_;
}
}
else
{
return v_newNode_388_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0_spec__2___redArg(size_t v_depth_401_, lean_object* v_keys_402_, lean_object* v_vals_403_, lean_object* v_i_404_, lean_object* v_entries_405_){
_start:
{
lean_object* v___x_406_; uint8_t v___x_407_; 
v___x_406_ = lean_array_get_size(v_keys_402_);
v___x_407_ = lean_nat_dec_lt(v_i_404_, v___x_406_);
if (v___x_407_ == 0)
{
lean_dec(v_i_404_);
return v_entries_405_;
}
else
{
lean_object* v_k_408_; lean_object* v_v_409_; uint64_t v___y_411_; 
v_k_408_ = lean_array_fget_borrowed(v_keys_402_, v_i_404_);
v_v_409_ = lean_array_fget_borrowed(v_vals_403_, v_i_404_);
if (lean_obj_tag(v_k_408_) == 0)
{
uint64_t v___x_422_; 
v___x_422_ = 1723ULL;
v___y_411_ = v___x_422_;
goto v___jp_410_;
}
else
{
uint64_t v_hash_423_; 
v_hash_423_ = lean_ctor_get_uint64(v_k_408_, sizeof(void*)*2);
v___y_411_ = v_hash_423_;
goto v___jp_410_;
}
v___jp_410_:
{
size_t v_h_412_; size_t v___x_413_; lean_object* v___x_414_; size_t v___x_415_; size_t v___x_416_; size_t v___x_417_; size_t v_h_418_; lean_object* v___x_419_; lean_object* v___x_420_; 
v_h_412_ = lean_uint64_to_usize(v___y_411_);
v___x_413_ = ((size_t)5ULL);
v___x_414_ = lean_unsigned_to_nat(1u);
v___x_415_ = ((size_t)1ULL);
v___x_416_ = lean_usize_sub(v_depth_401_, v___x_415_);
v___x_417_ = lean_usize_mul(v___x_413_, v___x_416_);
v_h_418_ = lean_usize_shift_right(v_h_412_, v___x_417_);
v___x_419_ = lean_nat_add(v_i_404_, v___x_414_);
lean_dec(v_i_404_);
lean_inc(v_v_409_);
lean_inc(v_k_408_);
v___x_420_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0___redArg(v_entries_405_, v_h_418_, v_depth_401_, v_k_408_, v_v_409_);
v_i_404_ = v___x_419_;
v_entries_405_ = v___x_420_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_424_, lean_object* v_keys_425_, lean_object* v_vals_426_, lean_object* v_i_427_, lean_object* v_entries_428_){
_start:
{
size_t v_depth_boxed_429_; lean_object* v_res_430_; 
v_depth_boxed_429_ = lean_unbox_usize(v_depth_424_);
lean_dec(v_depth_424_);
v_res_430_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0_spec__2___redArg(v_depth_boxed_429_, v_keys_425_, v_vals_426_, v_i_427_, v_entries_428_);
lean_dec_ref(v_vals_426_);
lean_dec_ref(v_keys_425_);
return v_res_430_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0___redArg___boxed(lean_object* v_x_431_, lean_object* v_x_432_, lean_object* v_x_433_, lean_object* v_x_434_, lean_object* v_x_435_){
_start:
{
size_t v_x_366__boxed_436_; size_t v_x_367__boxed_437_; lean_object* v_res_438_; 
v_x_366__boxed_436_ = lean_unbox_usize(v_x_432_);
lean_dec(v_x_432_);
v_x_367__boxed_437_ = lean_unbox_usize(v_x_433_);
lean_dec(v_x_433_);
v_res_438_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0___redArg(v_x_431_, v_x_366__boxed_436_, v_x_367__boxed_437_, v_x_434_, v_x_435_);
return v_res_438_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0___redArg(lean_object* v_x_439_, lean_object* v_x_440_, lean_object* v_x_441_){
_start:
{
uint64_t v___y_443_; 
if (lean_obj_tag(v_x_440_) == 0)
{
uint64_t v___x_447_; 
v___x_447_ = 1723ULL;
v___y_443_ = v___x_447_;
goto v___jp_442_;
}
else
{
uint64_t v_hash_448_; 
v_hash_448_ = lean_ctor_get_uint64(v_x_440_, sizeof(void*)*2);
v___y_443_ = v_hash_448_;
goto v___jp_442_;
}
v___jp_442_:
{
size_t v___x_444_; size_t v___x_445_; lean_object* v___x_446_; 
v___x_444_ = lean_uint64_to_usize(v___y_443_);
v___x_445_ = ((size_t)1ULL);
v___x_446_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0___redArg(v_x_439_, v___x_444_, v___x_445_, v_x_440_, v_x_441_);
return v___x_446_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_SpecState_addEntry(lean_object* v_s_449_, lean_object* v_e_450_){
_start:
{
lean_object* v_declName_451_; lean_object* v___x_452_; 
v_declName_451_ = lean_ctor_get(v_e_450_, 0);
lean_inc(v_declName_451_);
v___x_452_ = l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0___redArg(v_s_449_, v_declName_451_, v_e_450_);
return v___x_452_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0(lean_object* v_00_u03b2_453_, lean_object* v_x_454_, lean_object* v_x_455_, lean_object* v_x_456_){
_start:
{
lean_object* v___x_457_; 
v___x_457_ = l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0___redArg(v_x_454_, v_x_455_, v_x_456_);
return v___x_457_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0(lean_object* v_00_u03b2_458_, lean_object* v_x_459_, size_t v_x_460_, size_t v_x_461_, lean_object* v_x_462_, lean_object* v_x_463_){
_start:
{
lean_object* v___x_464_; 
v___x_464_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0___redArg(v_x_459_, v_x_460_, v_x_461_, v_x_462_, v_x_463_);
return v___x_464_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0___boxed(lean_object* v_00_u03b2_465_, lean_object* v_x_466_, lean_object* v_x_467_, lean_object* v_x_468_, lean_object* v_x_469_, lean_object* v_x_470_){
_start:
{
size_t v_x_548__boxed_471_; size_t v_x_549__boxed_472_; lean_object* v_res_473_; 
v_x_548__boxed_471_ = lean_unbox_usize(v_x_467_);
lean_dec(v_x_467_);
v_x_549__boxed_472_ = lean_unbox_usize(v_x_468_);
lean_dec(v_x_468_);
v_res_473_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0(v_00_u03b2_465_, v_x_466_, v_x_548__boxed_471_, v_x_549__boxed_472_, v_x_469_, v_x_470_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_474_, lean_object* v_n_475_, lean_object* v_k_476_, lean_object* v_v_477_){
_start:
{
lean_object* v___x_478_; 
v___x_478_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0_spec__1___redArg(v_n_475_, v_k_476_, v_v_477_);
return v___x_478_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_479_, size_t v_depth_480_, lean_object* v_keys_481_, lean_object* v_vals_482_, lean_object* v_heq_483_, lean_object* v_i_484_, lean_object* v_entries_485_){
_start:
{
lean_object* v___x_486_; 
v___x_486_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0_spec__2___redArg(v_depth_480_, v_keys_481_, v_vals_482_, v_i_484_, v_entries_485_);
return v___x_486_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_487_, lean_object* v_depth_488_, lean_object* v_keys_489_, lean_object* v_vals_490_, lean_object* v_heq_491_, lean_object* v_i_492_, lean_object* v_entries_493_){
_start:
{
size_t v_depth_boxed_494_; lean_object* v_res_495_; 
v_depth_boxed_494_ = lean_unbox_usize(v_depth_488_);
lean_dec(v_depth_488_);
v_res_495_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0_spec__2(v_00_u03b2_487_, v_depth_boxed_494_, v_keys_489_, v_vals_490_, v_heq_491_, v_i_492_, v_entries_493_);
lean_dec_ref(v_vals_490_);
lean_dec_ref(v_keys_489_);
return v_res_495_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_496_, lean_object* v_x_497_, lean_object* v_x_498_, lean_object* v_x_499_, lean_object* v_x_500_){
_start:
{
lean_object* v___x_501_; 
v___x_501_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_SpecState_addEntry_spec__0_spec__0_spec__1_spec__2___redArg(v_x_497_, v_x_498_, v_x_499_, v_x_500_);
return v___x_501_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_declLt(lean_object* v_a_502_, lean_object* v_b_503_){
_start:
{
lean_object* v_declName_504_; lean_object* v_declName_505_; uint8_t v___x_506_; 
v_declName_504_ = lean_ctor_get(v_a_502_, 0);
v_declName_505_ = lean_ctor_get(v_b_503_, 0);
v___x_506_ = l_Lean_Name_quickLt(v_declName_504_, v_declName_505_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_declLt___boxed(lean_object* v_a_507_, lean_object* v_b_508_){
_start:
{
uint8_t v_res_509_; lean_object* v_r_510_; 
v_res_509_ = l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_declLt(v_a_507_, v_b_508_);
lean_dec_ref(v_b_508_);
lean_dec_ref(v_a_507_);
v_r_510_ = lean_box(v_res_509_);
return v_r_510_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_sortEntries(lean_object* v_entries_512_){
_start:
{
lean_object* v___x_513_; lean_object* v___x_514_; uint8_t v___x_515_; 
v___x_513_ = lean_array_get_size(v_entries_512_);
v___x_514_ = lean_unsigned_to_nat(0u);
v___x_515_ = lean_nat_dec_eq(v___x_513_, v___x_514_);
if (v___x_515_ == 0)
{
lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___y_520_; uint8_t v___x_524_; 
v___x_516_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_sortEntries___closed__0));
v___x_517_ = lean_unsigned_to_nat(1u);
v___x_518_ = lean_nat_sub(v___x_513_, v___x_517_);
v___x_524_ = lean_nat_dec_le(v___x_514_, v___x_518_);
if (v___x_524_ == 0)
{
lean_inc(v___x_518_);
v___y_520_ = v___x_518_;
goto v___jp_519_;
}
else
{
v___y_520_ = v___x_514_;
goto v___jp_519_;
}
v___jp_519_:
{
uint8_t v___x_521_; 
v___x_521_ = lean_nat_dec_le(v___y_520_, v___x_518_);
if (v___x_521_ == 0)
{
lean_object* v___x_522_; 
lean_dec(v___x_518_);
lean_inc(v___y_520_);
v___x_522_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___x_516_, v___x_513_, v_entries_512_, v___y_520_, v___y_520_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_520_);
return v___x_522_;
}
else
{
lean_object* v___x_523_; 
v___x_523_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___x_516_, v___x_513_, v_entries_512_, v___y_520_, v___x_518_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___x_518_);
return v___x_523_;
}
}
}
else
{
return v_entries_512_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_findAtSorted_x3f(lean_object* v_entries_528_, lean_object* v_declName_529_){
_start:
{
lean_object* v___x_530_; lean_object* v___x_531_; uint8_t v___x_532_; 
v___x_530_ = lean_unsigned_to_nat(0u);
v___x_531_ = lean_array_get_size(v_entries_528_);
v___x_532_ = lean_nat_dec_lt(v___x_530_, v___x_531_);
if (v___x_532_ == 0)
{
lean_object* v___x_533_; 
lean_dec(v_declName_529_);
v___x_533_ = lean_box(0);
return v___x_533_;
}
else
{
lean_object* v___x_534_; lean_object* v___x_535_; uint8_t v___x_536_; 
v___x_534_ = lean_unsigned_to_nat(1u);
v___x_535_ = lean_nat_sub(v___x_531_, v___x_534_);
v___x_536_ = lean_nat_dec_le(v___x_530_, v___x_535_);
if (v___x_536_ == 0)
{
lean_object* v___x_537_; 
lean_dec(v___x_535_);
lean_dec(v_declName_529_);
v___x_537_ = lean_box(0);
return v___x_537_;
}
else
{
lean_object* v___x_538_; uint8_t v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_538_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_findAtSorted_x3f___closed__0));
v___x_539_ = 0;
v___x_540_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_540_, 0, v_declName_529_);
lean_ctor_set(v___x_540_, 1, v___x_538_);
lean_ctor_set_uint8(v___x_540_, sizeof(void*)*2, v___x_539_);
v___x_541_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_sortEntries___closed__0));
v___x_542_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_findAtSorted_x3f___closed__1));
v___x_543_ = l_Array_binSearchAux___redArg(v___x_541_, v___x_542_, v_entries_528_, v___x_540_, v___x_530_, v___x_535_);
return v___x_543_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_findAtSorted_x3f___boxed(lean_object* v_entries_544_, lean_object* v_declName_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_findAtSorted_x3f(v_entries_544_, v_declName_545_);
lean_dec_ref(v_entries_544_);
return v_res_546_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0___redArg___lam__0(lean_object* v___y_547_, lean_object* v___y_548_){
_start:
{
lean_object* v_declName_549_; lean_object* v_declName_550_; uint8_t v___x_551_; 
v_declName_549_ = lean_ctor_get(v___y_547_, 0);
v_declName_550_ = lean_ctor_get(v___y_548_, 0);
v___x_551_ = l_Lean_Name_quickLt(v_declName_549_, v_declName_550_);
return v___x_551_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0___redArg___lam__0___boxed(lean_object* v___y_552_, lean_object* v___y_553_){
_start:
{
uint8_t v_res_554_; lean_object* v_r_555_; 
v_res_554_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0___redArg___lam__0(v___y_552_, v___y_553_);
lean_dec_ref(v___y_553_);
lean_dec_ref(v___y_552_);
v_r_555_ = lean_box(v_res_554_);
return v_r_555_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_hi_556_, lean_object* v_pivot_557_, lean_object* v_as_558_, lean_object* v_i_559_, lean_object* v_k_560_){
_start:
{
uint8_t v___x_561_; 
v___x_561_ = lean_nat_dec_lt(v_k_560_, v_hi_556_);
if (v___x_561_ == 0)
{
lean_object* v___x_562_; lean_object* v___x_563_; 
lean_dec(v_k_560_);
v___x_562_ = lean_array_fswap(v_as_558_, v_i_559_, v_hi_556_);
v___x_563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_563_, 0, v_i_559_);
lean_ctor_set(v___x_563_, 1, v___x_562_);
return v___x_563_;
}
else
{
lean_object* v___x_564_; lean_object* v_declName_565_; lean_object* v_declName_566_; uint8_t v___x_567_; 
v___x_564_ = lean_array_fget_borrowed(v_as_558_, v_k_560_);
v_declName_565_ = lean_ctor_get(v___x_564_, 0);
v_declName_566_ = lean_ctor_get(v_pivot_557_, 0);
v___x_567_ = l_Lean_Name_quickLt(v_declName_565_, v_declName_566_);
if (v___x_567_ == 0)
{
lean_object* v___x_568_; lean_object* v___x_569_; 
v___x_568_ = lean_unsigned_to_nat(1u);
v___x_569_ = lean_nat_add(v_k_560_, v___x_568_);
lean_dec(v_k_560_);
v_k_560_ = v___x_569_;
goto _start;
}
else
{
lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_571_ = lean_array_fswap(v_as_558_, v_i_559_, v_k_560_);
v___x_572_ = lean_unsigned_to_nat(1u);
v___x_573_ = lean_nat_add(v_i_559_, v___x_572_);
lean_dec(v_i_559_);
v___x_574_ = lean_nat_add(v_k_560_, v___x_572_);
lean_dec(v_k_560_);
v_as_558_ = v___x_571_;
v_i_559_ = v___x_573_;
v_k_560_ = v___x_574_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_hi_576_, lean_object* v_pivot_577_, lean_object* v_as_578_, lean_object* v_i_579_, lean_object* v_k_580_){
_start:
{
lean_object* v_res_581_; 
v_res_581_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0_spec__0___redArg(v_hi_576_, v_pivot_577_, v_as_578_, v_i_579_, v_k_580_);
lean_dec_ref(v_pivot_577_);
lean_dec(v_hi_576_);
return v_res_581_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0___redArg(lean_object* v_n_582_, lean_object* v_as_583_, lean_object* v_lo_584_, lean_object* v_hi_585_){
_start:
{
lean_object* v___y_587_; uint8_t v___x_597_; 
v___x_597_ = lean_nat_dec_lt(v_lo_584_, v_hi_585_);
if (v___x_597_ == 0)
{
lean_dec(v_lo_584_);
return v_as_583_;
}
else
{
lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v_mid_600_; lean_object* v___y_602_; lean_object* v___y_608_; lean_object* v___x_613_; lean_object* v___x_614_; uint8_t v___x_615_; 
v___x_598_ = lean_nat_add(v_lo_584_, v_hi_585_);
v___x_599_ = lean_unsigned_to_nat(1u);
v_mid_600_ = lean_nat_shiftr(v___x_598_, v___x_599_);
lean_dec(v___x_598_);
v___x_613_ = lean_array_fget_borrowed(v_as_583_, v_mid_600_);
v___x_614_ = lean_array_fget_borrowed(v_as_583_, v_lo_584_);
v___x_615_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0___redArg___lam__0(v___x_613_, v___x_614_);
if (v___x_615_ == 0)
{
v___y_608_ = v_as_583_;
goto v___jp_607_;
}
else
{
lean_object* v___x_616_; 
v___x_616_ = lean_array_fswap(v_as_583_, v_lo_584_, v_mid_600_);
v___y_608_ = v___x_616_;
goto v___jp_607_;
}
v___jp_601_:
{
lean_object* v___x_603_; lean_object* v___x_604_; uint8_t v___x_605_; 
v___x_603_ = lean_array_fget_borrowed(v___y_602_, v_mid_600_);
v___x_604_ = lean_array_fget_borrowed(v___y_602_, v_hi_585_);
v___x_605_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0___redArg___lam__0(v___x_603_, v___x_604_);
if (v___x_605_ == 0)
{
lean_dec(v_mid_600_);
v___y_587_ = v___y_602_;
goto v___jp_586_;
}
else
{
lean_object* v___x_606_; 
v___x_606_ = lean_array_fswap(v___y_602_, v_mid_600_, v_hi_585_);
lean_dec(v_mid_600_);
v___y_587_ = v___x_606_;
goto v___jp_586_;
}
}
v___jp_607_:
{
lean_object* v___x_609_; lean_object* v___x_610_; uint8_t v___x_611_; 
v___x_609_ = lean_array_fget_borrowed(v___y_608_, v_hi_585_);
v___x_610_ = lean_array_fget_borrowed(v___y_608_, v_lo_584_);
v___x_611_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0___redArg___lam__0(v___x_609_, v___x_610_);
if (v___x_611_ == 0)
{
v___y_602_ = v___y_608_;
goto v___jp_601_;
}
else
{
lean_object* v___x_612_; 
v___x_612_ = lean_array_fswap(v___y_608_, v_lo_584_, v_hi_585_);
v___y_602_ = v___x_612_;
goto v___jp_601_;
}
}
}
v___jp_586_:
{
lean_object* v_pivot_588_; lean_object* v___x_589_; lean_object* v_fst_590_; lean_object* v_snd_591_; uint8_t v___x_592_; 
v_pivot_588_ = lean_array_fget(v___y_587_, v_hi_585_);
lean_inc_n(v_lo_584_, 2);
v___x_589_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0_spec__0___redArg(v_hi_585_, v_pivot_588_, v___y_587_, v_lo_584_, v_lo_584_);
lean_dec(v_pivot_588_);
v_fst_590_ = lean_ctor_get(v___x_589_, 0);
lean_inc(v_fst_590_);
v_snd_591_ = lean_ctor_get(v___x_589_, 1);
lean_inc(v_snd_591_);
lean_dec_ref(v___x_589_);
v___x_592_ = lean_nat_dec_le(v_hi_585_, v_fst_590_);
if (v___x_592_ == 0)
{
lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_593_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0___redArg(v_n_582_, v_snd_591_, v_lo_584_, v_fst_590_);
v___x_594_ = lean_unsigned_to_nat(1u);
v___x_595_ = lean_nat_add(v_fst_590_, v___x_594_);
lean_dec(v_fst_590_);
v_as_583_ = v___x_593_;
v_lo_584_ = v___x_595_;
goto _start;
}
else
{
lean_dec(v_fst_590_);
lean_dec(v_lo_584_);
return v_snd_591_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_n_617_, lean_object* v_as_618_, lean_object* v_lo_619_, lean_object* v_hi_620_){
_start:
{
lean_object* v_res_621_; 
v_res_621_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0___redArg(v_n_617_, v_as_618_, v_lo_619_, v_hi_620_);
lean_dec(v_hi_620_);
lean_dec(v_n_617_);
return v_res_621_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2_(lean_object* v_s_622_){
_start:
{
lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; uint8_t v___x_626_; 
v___x_623_ = lean_array_mk(v_s_622_);
v___x_624_ = lean_array_get_size(v___x_623_);
v___x_625_ = lean_unsigned_to_nat(0u);
v___x_626_ = lean_nat_dec_eq(v___x_624_, v___x_625_);
if (v___x_626_ == 0)
{
lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___y_630_; uint8_t v___x_634_; 
v___x_627_ = lean_unsigned_to_nat(1u);
v___x_628_ = lean_nat_sub(v___x_624_, v___x_627_);
v___x_634_ = lean_nat_dec_le(v___x_625_, v___x_628_);
if (v___x_634_ == 0)
{
lean_inc(v___x_628_);
v___y_630_ = v___x_628_;
goto v___jp_629_;
}
else
{
v___y_630_ = v___x_625_;
goto v___jp_629_;
}
v___jp_629_:
{
uint8_t v___x_631_; 
v___x_631_ = lean_nat_dec_le(v___y_630_, v___x_628_);
if (v___x_631_ == 0)
{
lean_object* v___x_632_; 
lean_dec(v___x_628_);
lean_inc(v___y_630_);
v___x_632_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0___redArg(v___x_624_, v___x_623_, v___y_630_, v___y_630_);
lean_dec(v___y_630_);
return v___x_632_;
}
else
{
lean_object* v___x_633_; 
v___x_633_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0___redArg(v___x_624_, v___x_623_, v___y_630_, v___x_628_);
lean_dec(v___x_628_);
return v___x_633_;
}
}
}
else
{
return v___x_623_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1_spec__2_spec__3___redArg(lean_object* v_keys_635_, lean_object* v_i_636_, lean_object* v_k_637_){
_start:
{
lean_object* v___x_638_; uint8_t v___x_639_; 
v___x_638_ = lean_array_get_size(v_keys_635_);
v___x_639_ = lean_nat_dec_lt(v_i_636_, v___x_638_);
if (v___x_639_ == 0)
{
lean_dec(v_i_636_);
return v___x_639_;
}
else
{
lean_object* v_k_x27_640_; uint8_t v___x_641_; 
v_k_x27_640_ = lean_array_fget_borrowed(v_keys_635_, v_i_636_);
v___x_641_ = lean_name_eq(v_k_637_, v_k_x27_640_);
if (v___x_641_ == 0)
{
lean_object* v___x_642_; lean_object* v___x_643_; 
v___x_642_ = lean_unsigned_to_nat(1u);
v___x_643_ = lean_nat_add(v_i_636_, v___x_642_);
lean_dec(v_i_636_);
v_i_636_ = v___x_643_;
goto _start;
}
else
{
lean_dec(v_i_636_);
return v___x_639_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1_spec__2_spec__3___redArg___boxed(lean_object* v_keys_645_, lean_object* v_i_646_, lean_object* v_k_647_){
_start:
{
uint8_t v_res_648_; lean_object* v_r_649_; 
v_res_648_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1_spec__2_spec__3___redArg(v_keys_645_, v_i_646_, v_k_647_);
lean_dec(v_k_647_);
lean_dec_ref(v_keys_645_);
v_r_649_ = lean_box(v_res_648_);
return v_r_649_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object* v_x_650_, size_t v_x_651_, lean_object* v_x_652_){
_start:
{
if (lean_obj_tag(v_x_650_) == 0)
{
lean_object* v_es_653_; lean_object* v___x_654_; size_t v___x_655_; size_t v___x_656_; lean_object* v_j_657_; lean_object* v___x_658_; 
v_es_653_ = lean_ctor_get(v_x_650_, 0);
v___x_654_ = lean_box(2);
v___x_655_ = ((size_t)31ULL);
v___x_656_ = lean_usize_land(v_x_651_, v___x_655_);
v_j_657_ = lean_usize_to_nat(v___x_656_);
v___x_658_ = lean_array_get_borrowed(v___x_654_, v_es_653_, v_j_657_);
lean_dec(v_j_657_);
switch(lean_obj_tag(v___x_658_))
{
case 0:
{
lean_object* v_key_659_; uint8_t v___x_660_; 
v_key_659_ = lean_ctor_get(v___x_658_, 0);
v___x_660_ = lean_name_eq(v_x_652_, v_key_659_);
return v___x_660_;
}
case 1:
{
lean_object* v_node_661_; size_t v___x_662_; size_t v___x_663_; 
v_node_661_ = lean_ctor_get(v___x_658_, 0);
v___x_662_ = ((size_t)5ULL);
v___x_663_ = lean_usize_shift_right(v_x_651_, v___x_662_);
v_x_650_ = v_node_661_;
v_x_651_ = v___x_663_;
goto _start;
}
default: 
{
uint8_t v___x_665_; 
v___x_665_ = 0;
return v___x_665_;
}
}
}
else
{
lean_object* v_ks_666_; lean_object* v___x_667_; uint8_t v___x_668_; 
v_ks_666_ = lean_ctor_get(v_x_650_, 0);
v___x_667_ = lean_unsigned_to_nat(0u);
v___x_668_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1_spec__2_spec__3___redArg(v_ks_666_, v___x_667_, v_x_652_);
return v___x_668_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object* v_x_669_, lean_object* v_x_670_, lean_object* v_x_671_){
_start:
{
size_t v_x_479__boxed_672_; uint8_t v_res_673_; lean_object* v_r_674_; 
v_x_479__boxed_672_ = lean_unbox_usize(v_x_670_);
lean_dec(v_x_670_);
v_res_673_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1_spec__2___redArg(v_x_669_, v_x_479__boxed_672_, v_x_671_);
lean_dec(v_x_671_);
lean_dec_ref(v_x_669_);
v_r_674_ = lean_box(v_res_673_);
return v_r_674_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1___redArg(lean_object* v_x_675_, lean_object* v_x_676_){
_start:
{
uint64_t v___y_678_; 
if (lean_obj_tag(v_x_676_) == 0)
{
uint64_t v___x_681_; 
v___x_681_ = 1723ULL;
v___y_678_ = v___x_681_;
goto v___jp_677_;
}
else
{
uint64_t v_hash_682_; 
v_hash_682_ = lean_ctor_get_uint64(v_x_676_, sizeof(void*)*2);
v___y_678_ = v_hash_682_;
goto v___jp_677_;
}
v___jp_677_:
{
size_t v___x_679_; uint8_t v___x_680_; 
v___x_679_ = lean_uint64_to_usize(v___y_678_);
v___x_680_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1_spec__2___redArg(v_x_675_, v___x_679_, v_x_676_);
return v___x_680_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object* v_x_683_, lean_object* v_x_684_){
_start:
{
uint8_t v_res_685_; lean_object* v_r_686_; 
v_res_685_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1___redArg(v_x_683_, v_x_684_);
lean_dec(v_x_684_);
lean_dec_ref(v_x_683_);
v_r_686_ = lean_box(v_res_685_);
return v_r_686_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___lam__1_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2_(lean_object* v_x1_687_, lean_object* v_x2_688_){
_start:
{
lean_object* v_declName_689_; uint8_t v___x_690_; 
v_declName_689_ = lean_ctor_get(v_x2_688_, 0);
v___x_690_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1___redArg(v_x1_687_, v_declName_689_);
if (v___x_690_ == 0)
{
uint8_t v___x_691_; 
v___x_691_ = 1;
return v___x_691_;
}
else
{
uint8_t v___x_692_; 
v___x_692_ = 0;
return v___x_692_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___lam__1_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2____boxed(lean_object* v_x1_693_, lean_object* v_x2_694_){
_start:
{
uint8_t v_res_695_; lean_object* v_r_696_; 
v_res_695_ = l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___lam__1_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2_(v_x1_693_, v_x2_694_);
lean_dec_ref(v_x2_694_);
lean_dec_ref(v_x1_693_);
v_r_696_ = lean_box(v_res_695_);
return v_r_696_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___lam__2_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2_(lean_object* v_x_697_){
_start:
{
lean_object* v___x_698_; 
v___x_698_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedSpecState_default___closed__1, &l_Lean_Compiler_LCNF_instInhabitedSpecState_default___closed__1_once, _init_l_Lean_Compiler_LCNF_instInhabitedSpecState_default___closed__1);
return v___x_698_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___lam__2_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2____boxed(lean_object* v_x_699_){
_start:
{
lean_object* v_res_700_; 
v_res_700_ = l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___lam__2_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2_(v_x_699_);
lean_dec_ref(v_x_699_);
return v_res_700_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_729_; lean_object* v___x_730_; 
v___x_729_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2_));
v___x_730_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_729_);
return v___x_730_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2____boxed(lean_object* v_a_731_){
_start:
{
lean_object* v_res_732_; 
v_res_732_ = l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2_();
return v_res_732_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0(lean_object* v_n_733_, lean_object* v_as_734_, lean_object* v_lo_735_, lean_object* v_hi_736_, lean_object* v_w_737_, lean_object* v_hlo_738_, lean_object* v_hhi_739_){
_start:
{
lean_object* v___x_740_; 
v___x_740_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0___redArg(v_n_733_, v_as_734_, v_lo_735_, v_hi_736_);
return v___x_740_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0___boxed(lean_object* v_n_741_, lean_object* v_as_742_, lean_object* v_lo_743_, lean_object* v_hi_744_, lean_object* v_w_745_, lean_object* v_hlo_746_, lean_object* v_hhi_747_){
_start:
{
lean_object* v_res_748_; 
v_res_748_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0(v_n_741_, v_as_742_, v_lo_743_, v_hi_744_, v_w_745_, v_hlo_746_, v_hhi_747_);
lean_dec(v_hi_744_);
lean_dec(v_n_741_);
return v_res_748_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1(lean_object* v_00_u03b2_749_, lean_object* v_x_750_, lean_object* v_x_751_){
_start:
{
uint8_t v___x_752_; 
v___x_752_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1___redArg(v_x_750_, v_x_751_);
return v___x_752_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1___boxed(lean_object* v_00_u03b2_753_, lean_object* v_x_754_, lean_object* v_x_755_){
_start:
{
uint8_t v_res_756_; lean_object* v_r_757_; 
v_res_756_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1(v_00_u03b2_753_, v_x_754_, v_x_755_);
lean_dec(v_x_755_);
lean_dec_ref(v_x_754_);
v_r_757_ = lean_box(v_res_756_);
return v_r_757_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_n_758_, lean_object* v_lo_759_, lean_object* v_hi_760_, lean_object* v_hhi_761_, lean_object* v_pivot_762_, lean_object* v_as_763_, lean_object* v_i_764_, lean_object* v_k_765_, lean_object* v_ilo_766_, lean_object* v_ik_767_, lean_object* v_w_768_){
_start:
{
lean_object* v___x_769_; 
v___x_769_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0_spec__0___redArg(v_hi_760_, v_pivot_762_, v_as_763_, v_i_764_, v_k_765_);
return v___x_769_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_n_770_, lean_object* v_lo_771_, lean_object* v_hi_772_, lean_object* v_hhi_773_, lean_object* v_pivot_774_, lean_object* v_as_775_, lean_object* v_i_776_, lean_object* v_k_777_, lean_object* v_ilo_778_, lean_object* v_ik_779_, lean_object* v_w_780_){
_start:
{
lean_object* v_res_781_; 
v_res_781_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0_spec__0(v_n_770_, v_lo_771_, v_hi_772_, v_hhi_773_, v_pivot_774_, v_as_775_, v_i_776_, v_k_777_, v_ilo_778_, v_ik_779_, v_w_780_);
lean_dec_ref(v_pivot_774_);
lean_dec(v_hi_772_);
lean_dec(v_lo_771_);
lean_dec(v_n_770_);
return v_res_781_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_00_u03b2_782_, lean_object* v_x_783_, size_t v_x_784_, lean_object* v_x_785_){
_start:
{
uint8_t v___x_786_; 
v___x_786_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1_spec__2___redArg(v_x_783_, v_x_784_, v_x_785_);
return v___x_786_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object* v_00_u03b2_787_, lean_object* v_x_788_, lean_object* v_x_789_, lean_object* v_x_790_){
_start:
{
size_t v_x_657__boxed_791_; uint8_t v_res_792_; lean_object* v_r_793_; 
v_x_657__boxed_791_ = lean_unbox_usize(v_x_789_);
lean_dec(v_x_789_);
v_res_792_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1_spec__2(v_00_u03b2_787_, v_x_788_, v_x_657__boxed_791_, v_x_790_);
lean_dec(v_x_790_);
lean_dec_ref(v_x_788_);
v_r_793_ = lean_box(v_res_792_);
return v_r_793_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1_spec__2_spec__3(lean_object* v_00_u03b2_794_, lean_object* v_keys_795_, lean_object* v_vals_796_, lean_object* v_heq_797_, lean_object* v_i_798_, lean_object* v_k_799_){
_start:
{
uint8_t v___x_800_; 
v___x_800_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1_spec__2_spec__3___redArg(v_keys_795_, v_i_798_, v_k_799_);
return v___x_800_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1_spec__2_spec__3___boxed(lean_object* v_00_u03b2_801_, lean_object* v_keys_802_, lean_object* v_vals_803_, lean_object* v_heq_804_, lean_object* v_i_805_, lean_object* v_k_806_){
_start:
{
uint8_t v_res_807_; lean_object* v_r_808_; 
v_res_807_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__1_spec__2_spec__3(v_00_u03b2_801_, v_keys_802_, v_vals_803_, v_heq_804_, v_i_805_, v_k_806_);
lean_dec(v_k_806_);
lean_dec_ref(v_vals_803_);
lean_dec_ref(v_keys_802_);
v_r_808_ = lean_box(v_res_807_);
return v_r_808_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_isNoSpecType(lean_object* v_env_809_, lean_object* v_type_810_){
_start:
{
if (lean_obj_tag(v_type_810_) == 7)
{
lean_object* v_body_811_; 
v_body_811_ = lean_ctor_get(v_type_810_, 2);
v_type_810_ = v_body_811_;
goto _start;
}
else
{
lean_object* v___x_813_; 
v___x_813_ = l_Lean_Expr_getAppFn(v_type_810_);
if (lean_obj_tag(v___x_813_) == 4)
{
lean_object* v_declName_814_; uint8_t v___x_815_; 
v_declName_814_ = lean_ctor_get(v___x_813_, 0);
lean_inc(v_declName_814_);
lean_dec_ref_known(v___x_813_, 2);
v___x_815_ = l_Lean_Compiler_hasNospecializeAttribute(v_env_809_, v_declName_814_);
return v___x_815_;
}
else
{
uint8_t v___x_816_; 
lean_dec_ref(v___x_813_);
lean_dec_ref(v_env_809_);
v___x_816_ = 0;
return v___x_816_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_isNoSpecType___boxed(lean_object* v_env_817_, lean_object* v_type_818_){
_start:
{
uint8_t v_res_819_; lean_object* v_r_820_; 
v_res_819_ = l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_isNoSpecType(v_env_817_, v_type_818_);
lean_dec_ref(v_type_818_);
v_r_820_ = lean_box(v_res_819_);
return v_r_820_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_isWeakSpecType(lean_object* v_env_821_, lean_object* v_type_822_){
_start:
{
if (lean_obj_tag(v_type_822_) == 7)
{
lean_object* v_body_823_; 
v_body_823_ = lean_ctor_get(v_type_822_, 2);
v_type_822_ = v_body_823_;
goto _start;
}
else
{
lean_object* v___x_825_; 
v___x_825_ = l_Lean_Expr_getAppFn(v_type_822_);
if (lean_obj_tag(v___x_825_) == 4)
{
lean_object* v_declName_826_; uint8_t v___x_827_; 
v_declName_826_ = lean_ctor_get(v___x_825_, 0);
lean_inc(v_declName_826_);
lean_dec_ref_known(v___x_825_, 2);
v___x_827_ = l_Lean_Compiler_hasWeakSpecializeAttribute(v_env_821_, v_declName_826_);
return v___x_827_;
}
else
{
uint8_t v___x_828_; 
lean_dec_ref(v___x_825_);
lean_dec_ref(v_env_821_);
v___x_828_ = 0;
return v___x_828_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_isWeakSpecType___boxed(lean_object* v_env_829_, lean_object* v_type_830_){
_start:
{
uint8_t v_res_831_; lean_object* v_r_832_; 
v_res_831_ = l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_isWeakSpecType(v_env_829_, v_type_830_);
lean_dec_ref(v_type_830_);
v_r_832_ = lean_box(v_res_831_);
return v_r_832_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_hasFwdDeps_spec__0___redArg(lean_object* v___x_836_, lean_object* v_param_837_, lean_object* v_paramsInfo_838_, lean_object* v_upperBound_839_, lean_object* v_a_840_, lean_object* v_b_841_){
_start:
{
lean_object* v_a_843_; uint8_t v___x_847_; 
v___x_847_ = lean_nat_dec_lt(v_a_840_, v_upperBound_839_);
if (v___x_847_ == 0)
{
lean_dec(v_a_840_);
lean_inc_ref(v_b_841_);
return v_b_841_;
}
else
{
lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_858_; lean_object* v___x_861_; 
v___x_848_ = lean_box(0);
v___x_849_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_hasFwdDeps_spec__0___redArg___closed__0));
v___x_858_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedSpecParamInfo_default));
v___x_861_ = lean_array_get_borrowed(v___x_858_, v_paramsInfo_838_, v_a_840_);
switch(lean_obj_tag(v___x_861_))
{
case 0:
{
uint8_t v_weak_862_; 
v_weak_862_ = lean_ctor_get_uint8(v___x_861_, 0);
if (v_weak_862_ == 0)
{
goto v___jp_850_;
}
else
{
goto v___jp_859_;
}
}
case 2:
{
goto v___jp_859_;
}
case 4:
{
goto v___jp_859_;
}
default: 
{
goto v___jp_850_;
}
}
v___jp_850_:
{
lean_object* v___x_851_; lean_object* v_type_852_; lean_object* v_fvarId_853_; uint8_t v___x_854_; 
v___x_851_ = lean_array_fget_borrowed(v___x_836_, v_a_840_);
v_type_852_ = lean_ctor_get(v___x_851_, 2);
v_fvarId_853_ = lean_ctor_get(v_param_837_, 0);
v___x_854_ = l_Lean_Expr_containsFVar(v_type_852_, v_fvarId_853_);
if (v___x_854_ == 0)
{
v_a_843_ = v___x_849_;
goto v___jp_842_;
}
else
{
lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
lean_dec(v_a_840_);
v___x_855_ = lean_box(v___x_854_);
v___x_856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_856_, 0, v___x_855_);
v___x_857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_857_, 0, v___x_856_);
lean_ctor_set(v___x_857_, 1, v___x_848_);
return v___x_857_;
}
}
v___jp_859_:
{
lean_object* v___x_860_; 
v___x_860_ = lean_array_get_borrowed(v___x_858_, v_paramsInfo_838_, v_a_840_);
if (lean_obj_tag(v___x_860_) == 0)
{
goto v___jp_850_;
}
else
{
v_a_843_ = v___x_849_;
goto v___jp_842_;
}
}
}
v___jp_842_:
{
lean_object* v___x_844_; lean_object* v___x_845_; 
v___x_844_ = lean_unsigned_to_nat(1u);
v___x_845_ = lean_nat_add(v_a_840_, v___x_844_);
lean_dec(v_a_840_);
v_a_840_ = v___x_845_;
v_b_841_ = v_a_843_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_hasFwdDeps_spec__0___redArg___boxed(lean_object* v___x_863_, lean_object* v_param_864_, lean_object* v_paramsInfo_865_, lean_object* v_upperBound_866_, lean_object* v_a_867_, lean_object* v_b_868_){
_start:
{
lean_object* v_res_869_; 
v_res_869_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_hasFwdDeps_spec__0___redArg(v___x_863_, v_param_864_, v_paramsInfo_865_, v_upperBound_866_, v_a_867_, v_b_868_);
lean_dec_ref(v_b_868_);
lean_dec(v_upperBound_866_);
lean_dec_ref(v_paramsInfo_865_);
lean_dec_ref(v_param_864_);
lean_dec_ref(v___x_863_);
return v_res_869_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_hasFwdDeps___closed__0(void){
_start:
{
lean_object* v___x_870_; 
v___x_870_ = l_Lean_Compiler_LCNF_instInhabitedParam_default___redArg();
return v___x_870_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_hasFwdDeps(lean_object* v_decl_871_, lean_object* v_paramsInfo_872_, lean_object* v_j_873_){
_start:
{
lean_object* v_toSignature_874_; lean_object* v_params_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v_param_881_; lean_object* v___x_882_; lean_object* v_fst_883_; 
v_toSignature_874_ = lean_ctor_get(v_decl_871_, 0);
v_params_875_ = lean_ctor_get(v_toSignature_874_, 3);
v___x_876_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_hasFwdDeps___closed__0, &l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_hasFwdDeps___closed__0_once, _init_l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_hasFwdDeps___closed__0);
v___x_877_ = lean_unsigned_to_nat(1u);
v___x_878_ = lean_nat_add(v_j_873_, v___x_877_);
v___x_879_ = lean_array_get_size(v_params_875_);
v___x_880_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_hasFwdDeps_spec__0___redArg___closed__0));
v_param_881_ = lean_array_get_borrowed(v___x_876_, v_params_875_, v_j_873_);
v___x_882_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_hasFwdDeps_spec__0___redArg(v_params_875_, v_param_881_, v_paramsInfo_872_, v___x_879_, v___x_878_, v___x_880_);
v_fst_883_ = lean_ctor_get(v___x_882_, 0);
lean_inc(v_fst_883_);
lean_dec_ref(v___x_882_);
if (lean_obj_tag(v_fst_883_) == 0)
{
uint8_t v___x_884_; 
v___x_884_ = 0;
return v___x_884_;
}
else
{
lean_object* v_val_885_; uint8_t v___x_886_; 
v_val_885_ = lean_ctor_get(v_fst_883_, 0);
lean_inc(v_val_885_);
lean_dec_ref_known(v_fst_883_, 1);
v___x_886_ = lean_unbox(v_val_885_);
lean_dec(v_val_885_);
return v___x_886_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_hasFwdDeps___boxed(lean_object* v_decl_887_, lean_object* v_paramsInfo_888_, lean_object* v_j_889_){
_start:
{
uint8_t v_res_890_; lean_object* v_r_891_; 
v_res_890_ = l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_hasFwdDeps(v_decl_887_, v_paramsInfo_888_, v_j_889_);
lean_dec(v_j_889_);
lean_dec_ref(v_paramsInfo_888_);
lean_dec_ref(v_decl_887_);
v_r_891_ = lean_box(v_res_890_);
return v_r_891_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_hasFwdDeps_spec__0(lean_object* v___x_892_, lean_object* v_param_893_, lean_object* v_paramsInfo_894_, lean_object* v_upperBound_895_, lean_object* v_inst_896_, lean_object* v_R_897_, lean_object* v_a_898_, lean_object* v_b_899_, lean_object* v_c_900_){
_start:
{
lean_object* v___x_901_; 
v___x_901_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_hasFwdDeps_spec__0___redArg(v___x_892_, v_param_893_, v_paramsInfo_894_, v_upperBound_895_, v_a_898_, v_b_899_);
return v___x_901_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_hasFwdDeps_spec__0___boxed(lean_object* v___x_902_, lean_object* v_param_903_, lean_object* v_paramsInfo_904_, lean_object* v_upperBound_905_, lean_object* v_inst_906_, lean_object* v_R_907_, lean_object* v_a_908_, lean_object* v_b_909_, lean_object* v_c_910_){
_start:
{
lean_object* v_res_911_; 
v_res_911_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_hasFwdDeps_spec__0(v___x_902_, v_param_903_, v_paramsInfo_904_, v_upperBound_905_, v_inst_906_, v_R_907_, v_a_908_, v_b_909_, v_c_910_);
lean_dec_ref(v_b_909_);
lean_dec(v_upperBound_905_);
lean_dec_ref(v_paramsInfo_904_);
lean_dec_ref(v_param_903_);
lean_dec_ref(v___x_902_);
return v_res_911_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__8___closed__0(void){
_start:
{
lean_object* v___x_912_; 
v___x_912_ = l_instMonadEIO___redArg();
return v___x_912_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__8(lean_object* v_msg_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_){
_start:
{
lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v_toApplicative_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_956_; 
v___x_921_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__8___closed__0, &l_panic___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__8___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__8___closed__0);
v___x_922_ = l_StateRefT_x27_instMonad___redArg(v___x_921_);
v_toApplicative_923_ = lean_ctor_get(v___x_922_, 0);
v_isSharedCheck_956_ = !lean_is_exclusive(v___x_922_);
if (v_isSharedCheck_956_ == 0)
{
lean_object* v_unused_957_; 
v_unused_957_ = lean_ctor_get(v___x_922_, 1);
lean_dec(v_unused_957_);
v___x_925_ = v___x_922_;
v_isShared_926_ = v_isSharedCheck_956_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_toApplicative_923_);
lean_dec(v___x_922_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_956_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v_toFunctor_927_; lean_object* v_toSeq_928_; lean_object* v_toSeqLeft_929_; lean_object* v_toSeqRight_930_; lean_object* v___x_932_; uint8_t v_isShared_933_; uint8_t v_isSharedCheck_954_; 
v_toFunctor_927_ = lean_ctor_get(v_toApplicative_923_, 0);
v_toSeq_928_ = lean_ctor_get(v_toApplicative_923_, 2);
v_toSeqLeft_929_ = lean_ctor_get(v_toApplicative_923_, 3);
v_toSeqRight_930_ = lean_ctor_get(v_toApplicative_923_, 4);
v_isSharedCheck_954_ = !lean_is_exclusive(v_toApplicative_923_);
if (v_isSharedCheck_954_ == 0)
{
lean_object* v_unused_955_; 
v_unused_955_ = lean_ctor_get(v_toApplicative_923_, 1);
lean_dec(v_unused_955_);
v___x_932_ = v_toApplicative_923_;
v_isShared_933_ = v_isSharedCheck_954_;
goto v_resetjp_931_;
}
else
{
lean_inc(v_toSeqRight_930_);
lean_inc(v_toSeqLeft_929_);
lean_inc(v_toSeq_928_);
lean_inc(v_toFunctor_927_);
lean_dec(v_toApplicative_923_);
v___x_932_ = lean_box(0);
v_isShared_933_ = v_isSharedCheck_954_;
goto v_resetjp_931_;
}
v_resetjp_931_:
{
lean_object* v___f_934_; lean_object* v___f_935_; lean_object* v___f_936_; lean_object* v___f_937_; lean_object* v___x_938_; lean_object* v___f_939_; lean_object* v___f_940_; lean_object* v___f_941_; lean_object* v___x_943_; 
v___f_934_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__8___closed__1));
v___f_935_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__8___closed__2));
lean_inc_ref(v_toFunctor_927_);
v___f_936_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_936_, 0, v_toFunctor_927_);
v___f_937_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_937_, 0, v_toFunctor_927_);
v___x_938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_938_, 0, v___f_936_);
lean_ctor_set(v___x_938_, 1, v___f_937_);
v___f_939_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_939_, 0, v_toSeqRight_930_);
v___f_940_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_940_, 0, v_toSeqLeft_929_);
v___f_941_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_941_, 0, v_toSeq_928_);
if (v_isShared_933_ == 0)
{
lean_ctor_set(v___x_932_, 4, v___f_939_);
lean_ctor_set(v___x_932_, 3, v___f_940_);
lean_ctor_set(v___x_932_, 2, v___f_941_);
lean_ctor_set(v___x_932_, 1, v___f_934_);
lean_ctor_set(v___x_932_, 0, v___x_938_);
v___x_943_ = v___x_932_;
goto v_reusejp_942_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v___x_938_);
lean_ctor_set(v_reuseFailAlloc_953_, 1, v___f_934_);
lean_ctor_set(v_reuseFailAlloc_953_, 2, v___f_941_);
lean_ctor_set(v_reuseFailAlloc_953_, 3, v___f_940_);
lean_ctor_set(v_reuseFailAlloc_953_, 4, v___f_939_);
v___x_943_ = v_reuseFailAlloc_953_;
goto v_reusejp_942_;
}
v_reusejp_942_:
{
lean_object* v___x_945_; 
if (v_isShared_926_ == 0)
{
lean_ctor_set(v___x_925_, 1, v___f_935_);
lean_ctor_set(v___x_925_, 0, v___x_943_);
v___x_945_ = v___x_925_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v___x_943_);
lean_ctor_set(v_reuseFailAlloc_952_, 1, v___f_935_);
v___x_945_ = v_reuseFailAlloc_952_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___f_949_; lean_object* v___x_10314__overap_950_; lean_object* v___x_951_; 
v___x_946_ = l_StateRefT_x27_instMonad___redArg(v___x_945_);
v___x_947_ = lean_box(0);
v___x_948_ = l_instInhabitedOfMonad___redArg(v___x_946_, v___x_947_);
v___f_949_ = lean_alloc_closure((void*)(l_instInhabitedReaderT___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_949_, 0, v___x_948_);
v___x_10314__overap_950_ = lean_panic_fn_borrowed(v___f_949_, v_msg_915_);
lean_dec_ref(v___f_949_);
lean_inc(v___y_919_);
lean_inc_ref(v___y_918_);
lean_inc(v___y_917_);
lean_inc_ref(v___y_916_);
v___x_951_ = lean_apply_5(v___x_10314__overap_950_, v___y_916_, v___y_917_, v___y_918_, v___y_919_, lean_box(0));
return v___x_951_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__8___boxed(lean_object* v_msg_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_){
_start:
{
lean_object* v_res_964_; 
v_res_964_ = l_panic___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__8(v_msg_958_, v___y_959_, v___y_960_, v___y_961_, v___y_962_);
lean_dec(v___y_962_);
lean_dec_ref(v___y_961_);
lean_dec(v___y_960_);
lean_dec_ref(v___y_959_);
return v_res_964_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__4___redArg(lean_object* v_alreadySpecialized_965_, size_t v_sz_966_, size_t v_i_967_, lean_object* v_bs_968_){
_start:
{
uint8_t v___x_969_; 
v___x_969_ = lean_usize_dec_lt(v_i_967_, v_sz_966_);
if (v___x_969_ == 0)
{
return v_bs_968_;
}
else
{
lean_object* v_v_970_; lean_object* v_toSignature_971_; lean_object* v_name_972_; lean_object* v_params_973_; lean_object* v___x_974_; lean_object* v_bs_x27_975_; uint8_t v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; uint8_t v___x_984_; size_t v___x_985_; size_t v___x_986_; lean_object* v___x_987_; 
v_v_970_ = lean_array_uget_borrowed(v_bs_968_, v_i_967_);
v_toSignature_971_ = lean_ctor_get(v_v_970_, 0);
v_name_972_ = lean_ctor_get(v_toSignature_971_, 0);
lean_inc(v_name_972_);
v_params_973_ = lean_ctor_get(v_toSignature_971_, 3);
lean_inc_ref(v_params_973_);
v___x_974_ = lean_unsigned_to_nat(0u);
v_bs_x27_975_ = lean_array_uset(v_bs_968_, v_i_967_, v___x_974_);
v___x_976_ = 0;
v___x_977_ = lean_usize_to_nat(v_i_967_);
v___x_978_ = lean_array_get_size(v_params_973_);
lean_dec_ref(v_params_973_);
v___x_979_ = lean_box(4);
v___x_980_ = lean_mk_array(v___x_978_, v___x_979_);
v___x_981_ = lean_box(v___x_976_);
v___x_982_ = lean_array_get(v___x_981_, v_alreadySpecialized_965_, v___x_977_);
lean_dec(v___x_977_);
lean_dec(v___x_981_);
v___x_983_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_983_, 0, v_name_972_);
lean_ctor_set(v___x_983_, 1, v___x_980_);
v___x_984_ = lean_unbox(v___x_982_);
lean_dec(v___x_982_);
lean_ctor_set_uint8(v___x_983_, sizeof(void*)*2, v___x_984_);
v___x_985_ = ((size_t)1ULL);
v___x_986_ = lean_usize_add(v_i_967_, v___x_985_);
v___x_987_ = lean_array_uset(v_bs_x27_975_, v_i_967_, v___x_983_);
v_i_967_ = v___x_986_;
v_bs_968_ = v___x_987_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__4___redArg___boxed(lean_object* v_alreadySpecialized_989_, lean_object* v_sz_990_, lean_object* v_i_991_, lean_object* v_bs_992_){
_start:
{
size_t v_sz_boxed_993_; size_t v_i_boxed_994_; lean_object* v_res_995_; 
v_sz_boxed_993_ = lean_unbox_usize(v_sz_990_);
lean_dec(v_sz_990_);
v_i_boxed_994_ = lean_unbox_usize(v_i_991_);
lean_dec(v_i_991_);
v_res_995_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__4___redArg(v_alreadySpecialized_989_, v_sz_boxed_993_, v_i_boxed_994_, v_bs_992_);
lean_dec_ref(v_alreadySpecialized_989_);
return v_res_995_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2___redArg___lam__0(lean_object* v_b_996_, lean_object* v_info_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_){
_start:
{
lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1003_ = lean_array_push(v_b_996_, v_info_997_);
v___x_1004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1004_, 0, v___x_1003_);
v___x_1005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1005_, 0, v___x_1004_);
return v___x_1005_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2___redArg___lam__0___boxed(lean_object* v_b_1006_, lean_object* v_info_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_){
_start:
{
lean_object* v_res_1013_; 
v_res_1013_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2___redArg___lam__0(v_b_1006_, v_info_1007_, v___y_1008_, v___y_1009_, v___y_1010_, v___y_1011_);
lean_dec(v___y_1011_);
lean_dec_ref(v___y_1010_);
lean_dec(v___y_1009_);
lean_dec_ref(v___y_1008_);
return v_res_1013_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2___redArg___lam__1(lean_object* v___f_1014_, lean_object* v_00___1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_){
_start:
{
lean_object* v___x_1021_; lean_object* v___x_1022_; 
v___x_1021_ = lean_box(4);
lean_inc(v___y_1019_);
lean_inc_ref(v___y_1018_);
lean_inc(v___y_1017_);
lean_inc_ref(v___y_1016_);
v___x_1022_ = lean_apply_6(v___f_1014_, v___x_1021_, v___y_1016_, v___y_1017_, v___y_1018_, v___y_1019_, lean_box(0));
return v___x_1022_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2___redArg___lam__1___boxed(lean_object* v___f_1023_, lean_object* v_00___1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_){
_start:
{
lean_object* v_res_1030_; 
v_res_1030_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2___redArg___lam__1(v___f_1023_, v_00___1024_, v___y_1025_, v___y_1026_, v___y_1027_, v___y_1028_);
lean_dec(v___y_1028_);
lean_dec_ref(v___y_1027_);
lean_dec(v___y_1026_);
lean_dec_ref(v___y_1025_);
return v_res_1030_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__1_spec__1(lean_object* v_a_1031_, lean_object* v_as_1032_, size_t v_i_1033_, size_t v_stop_1034_){
_start:
{
uint8_t v___x_1035_; 
v___x_1035_ = lean_usize_dec_eq(v_i_1033_, v_stop_1034_);
if (v___x_1035_ == 0)
{
lean_object* v___x_1036_; uint8_t v___x_1037_; 
v___x_1036_ = lean_array_uget_borrowed(v_as_1032_, v_i_1033_);
v___x_1037_ = lean_nat_dec_eq(v_a_1031_, v___x_1036_);
if (v___x_1037_ == 0)
{
size_t v___x_1038_; size_t v___x_1039_; 
v___x_1038_ = ((size_t)1ULL);
v___x_1039_ = lean_usize_add(v_i_1033_, v___x_1038_);
v_i_1033_ = v___x_1039_;
goto _start;
}
else
{
return v___x_1037_;
}
}
else
{
uint8_t v___x_1041_; 
v___x_1041_ = 0;
return v___x_1041_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__1_spec__1___boxed(lean_object* v_a_1042_, lean_object* v_as_1043_, lean_object* v_i_1044_, lean_object* v_stop_1045_){
_start:
{
size_t v_i_boxed_1046_; size_t v_stop_boxed_1047_; uint8_t v_res_1048_; lean_object* v_r_1049_; 
v_i_boxed_1046_ = lean_unbox_usize(v_i_1044_);
lean_dec(v_i_1044_);
v_stop_boxed_1047_ = lean_unbox_usize(v_stop_1045_);
lean_dec(v_stop_1045_);
v_res_1048_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__1_spec__1(v_a_1042_, v_as_1043_, v_i_boxed_1046_, v_stop_boxed_1047_);
lean_dec_ref(v_as_1043_);
lean_dec(v_a_1042_);
v_r_1049_ = lean_box(v_res_1048_);
return v_r_1049_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__1(lean_object* v_as_1050_, lean_object* v_a_1051_){
_start:
{
lean_object* v___x_1052_; lean_object* v___x_1053_; uint8_t v___x_1054_; 
v___x_1052_ = lean_unsigned_to_nat(0u);
v___x_1053_ = lean_array_get_size(v_as_1050_);
v___x_1054_ = lean_nat_dec_lt(v___x_1052_, v___x_1053_);
if (v___x_1054_ == 0)
{
return v___x_1054_;
}
else
{
size_t v___x_1055_; size_t v___x_1056_; uint8_t v___x_1057_; 
v___x_1055_ = ((size_t)0ULL);
v___x_1056_ = lean_usize_of_nat(v___x_1053_);
v___x_1057_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__1_spec__1(v_a_1051_, v_as_1050_, v___x_1055_, v___x_1056_);
return v___x_1057_;
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__1___boxed(lean_object* v_as_1058_, lean_object* v_a_1059_){
_start:
{
uint8_t v_res_1060_; lean_object* v_r_1061_; 
v_res_1060_ = l_Array_contains___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__1(v_as_1058_, v_a_1059_);
lean_dec(v_a_1059_);
lean_dec_ref(v_as_1058_);
v_r_1061_ = lean_box(v_res_1060_);
return v_r_1061_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2___redArg(lean_object* v_upperBound_1064_, lean_object* v___x_1065_, lean_object* v_autoSpecialize_1066_, lean_object* v___x_1067_, lean_object* v___x_1068_, lean_object* v_a_1069_, lean_object* v_b_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_){
_start:
{
lean_object* v___y_1077_; uint8_t v___x_1099_; 
v___x_1099_ = lean_nat_dec_lt(v_a_1069_, v_upperBound_1064_);
if (v___x_1099_ == 0)
{
lean_object* v___x_1100_; 
lean_dec(v_a_1069_);
lean_dec(v___x_1068_);
lean_dec(v___x_1067_);
lean_dec_ref(v_autoSpecialize_1066_);
v___x_1100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1100_, 0, v_b_1070_);
return v___x_1100_;
}
else
{
lean_object* v___f_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v_env_1104_; lean_object* v_type_1105_; lean_object* v___x_1106_; 
lean_inc_ref(v_b_1070_);
v___f_1101_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_1101_, 0, v_b_1070_);
v___x_1102_ = lean_array_fget_borrowed(v___x_1065_, v_a_1069_);
v___x_1103_ = lean_st_ref_get(v___y_1074_);
v_env_1104_ = lean_ctor_get(v___x_1103_, 0);
lean_inc_ref(v_env_1104_);
lean_dec(v___x_1103_);
v_type_1105_ = lean_ctor_get(v___x_1102_, 2);
lean_inc_ref(v_type_1105_);
v___x_1106_ = l_Lean_Compiler_LCNF_isArrowClass_x3f___redArg(v_type_1105_, v___y_1074_);
if (lean_obj_tag(v___x_1106_) == 0)
{
lean_object* v_a_1107_; uint8_t v___y_1112_; 
v_a_1107_ = lean_ctor_get(v___x_1106_, 0);
lean_inc(v_a_1107_);
lean_dec_ref_known(v___x_1106_, 1);
if (lean_obj_tag(v___x_1068_) == 0)
{
lean_object* v___x_1130_; uint8_t v___x_1131_; 
v___x_1130_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2___redArg___closed__0));
v___x_1131_ = l_Array_contains___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__1(v___x_1130_, v_a_1069_);
v___y_1112_ = v___x_1131_;
goto v___jp_1111_;
}
else
{
lean_object* v_val_1132_; uint8_t v___x_1133_; 
v_val_1132_ = lean_ctor_get(v___x_1068_, 0);
v___x_1133_ = l_Array_contains___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__1(v_val_1132_, v_a_1069_);
v___y_1112_ = v___x_1133_;
goto v___jp_1111_;
}
v___jp_1108_:
{
lean_object* v___x_1109_; lean_object* v___x_1110_; 
v___x_1109_ = lean_box(0);
v___x_1110_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2___redArg___lam__1(v___f_1101_, v___x_1109_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_);
v___y_1077_ = v___x_1110_;
goto v___jp_1076_;
}
v___jp_1111_:
{
if (v___y_1112_ == 0)
{
uint8_t v___x_1113_; 
v___x_1113_ = l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_isNoSpecType(v_env_1104_, v_type_1105_);
if (v___x_1113_ == 0)
{
uint8_t v___x_1114_; 
lean_inc_ref(v_type_1105_);
v___x_1114_ = l_Lean_Compiler_LCNF_isTypeFormerType(v_type_1105_);
if (v___x_1114_ == 0)
{
if (lean_obj_tag(v_a_1107_) == 0)
{
lean_object* v___x_1115_; uint8_t v___x_1116_; 
lean_inc_ref(v_autoSpecialize_1066_);
lean_inc(v___x_1068_);
lean_inc(v___x_1067_);
v___x_1115_ = lean_apply_2(v_autoSpecialize_1066_, v___x_1067_, v___x_1068_);
v___x_1116_ = lean_unbox(v___x_1115_);
if (v___x_1116_ == 0)
{
lean_dec_ref(v_b_1070_);
goto v___jp_1108_;
}
else
{
if (lean_obj_tag(v_type_1105_) == 7)
{
lean_object* v___x_1117_; lean_object* v___x_1118_; 
lean_dec_ref(v___f_1101_);
v___x_1117_ = lean_box(1);
v___x_1118_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2___redArg___lam__0(v_b_1070_, v___x_1117_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_);
v___y_1077_ = v___x_1118_;
goto v___jp_1076_;
}
else
{
lean_dec_ref(v_b_1070_);
goto v___jp_1108_;
}
}
}
else
{
lean_object* v___x_1119_; lean_object* v_env_1120_; uint8_t v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; 
lean_dec_ref_known(v_a_1107_, 1);
lean_dec_ref(v___f_1101_);
v___x_1119_ = lean_st_ref_get(v___y_1074_);
v_env_1120_ = lean_ctor_get(v___x_1119_, 0);
lean_inc_ref(v_env_1120_);
lean_dec(v___x_1119_);
v___x_1121_ = l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_isWeakSpecType(v_env_1120_, v_type_1105_);
v___x_1122_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_1122_, 0, v___x_1121_);
v___x_1123_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2___redArg___lam__0(v_b_1070_, v___x_1122_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_);
v___y_1077_ = v___x_1123_;
goto v___jp_1076_;
}
}
else
{
lean_object* v___x_1124_; lean_object* v___x_1125_; 
lean_dec(v_a_1107_);
lean_dec_ref(v___f_1101_);
v___x_1124_ = lean_box(2);
v___x_1125_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2___redArg___lam__0(v_b_1070_, v___x_1124_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_);
v___y_1077_ = v___x_1125_;
goto v___jp_1076_;
}
}
else
{
lean_object* v___x_1126_; lean_object* v___x_1127_; 
lean_dec(v_a_1107_);
lean_dec_ref(v_b_1070_);
v___x_1126_ = lean_box(0);
v___x_1127_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2___redArg___lam__1(v___f_1101_, v___x_1126_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_);
v___y_1077_ = v___x_1127_;
goto v___jp_1076_;
}
}
else
{
lean_object* v___x_1128_; lean_object* v___x_1129_; 
lean_dec(v_a_1107_);
lean_dec_ref(v_env_1104_);
lean_dec_ref(v___f_1101_);
v___x_1128_ = lean_box(3);
v___x_1129_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2___redArg___lam__0(v_b_1070_, v___x_1128_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_);
v___y_1077_ = v___x_1129_;
goto v___jp_1076_;
}
}
}
else
{
lean_object* v_a_1134_; lean_object* v___x_1136_; uint8_t v_isShared_1137_; uint8_t v_isSharedCheck_1141_; 
lean_dec_ref(v_env_1104_);
lean_dec_ref(v___f_1101_);
lean_dec_ref(v_b_1070_);
lean_dec(v_a_1069_);
lean_dec(v___x_1068_);
lean_dec(v___x_1067_);
lean_dec_ref(v_autoSpecialize_1066_);
v_a_1134_ = lean_ctor_get(v___x_1106_, 0);
v_isSharedCheck_1141_ = !lean_is_exclusive(v___x_1106_);
if (v_isSharedCheck_1141_ == 0)
{
v___x_1136_ = v___x_1106_;
v_isShared_1137_ = v_isSharedCheck_1141_;
goto v_resetjp_1135_;
}
else
{
lean_inc(v_a_1134_);
lean_dec(v___x_1106_);
v___x_1136_ = lean_box(0);
v_isShared_1137_ = v_isSharedCheck_1141_;
goto v_resetjp_1135_;
}
v_resetjp_1135_:
{
lean_object* v___x_1139_; 
if (v_isShared_1137_ == 0)
{
v___x_1139_ = v___x_1136_;
goto v_reusejp_1138_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1140_, 0, v_a_1134_);
v___x_1139_ = v_reuseFailAlloc_1140_;
goto v_reusejp_1138_;
}
v_reusejp_1138_:
{
return v___x_1139_;
}
}
}
}
v___jp_1076_:
{
if (lean_obj_tag(v___y_1077_) == 0)
{
lean_object* v_a_1078_; lean_object* v___x_1080_; uint8_t v_isShared_1081_; uint8_t v_isSharedCheck_1090_; 
v_a_1078_ = lean_ctor_get(v___y_1077_, 0);
v_isSharedCheck_1090_ = !lean_is_exclusive(v___y_1077_);
if (v_isSharedCheck_1090_ == 0)
{
v___x_1080_ = v___y_1077_;
v_isShared_1081_ = v_isSharedCheck_1090_;
goto v_resetjp_1079_;
}
else
{
lean_inc(v_a_1078_);
lean_dec(v___y_1077_);
v___x_1080_ = lean_box(0);
v_isShared_1081_ = v_isSharedCheck_1090_;
goto v_resetjp_1079_;
}
v_resetjp_1079_:
{
if (lean_obj_tag(v_a_1078_) == 0)
{
lean_object* v_a_1082_; lean_object* v___x_1084_; 
lean_dec(v_a_1069_);
lean_dec(v___x_1068_);
lean_dec(v___x_1067_);
lean_dec_ref(v_autoSpecialize_1066_);
v_a_1082_ = lean_ctor_get(v_a_1078_, 0);
lean_inc(v_a_1082_);
lean_dec_ref_known(v_a_1078_, 1);
if (v_isShared_1081_ == 0)
{
lean_ctor_set(v___x_1080_, 0, v_a_1082_);
v___x_1084_ = v___x_1080_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v_a_1082_);
v___x_1084_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
return v___x_1084_;
}
}
else
{
lean_object* v_a_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; 
lean_del_object(v___x_1080_);
v_a_1086_ = lean_ctor_get(v_a_1078_, 0);
lean_inc(v_a_1086_);
lean_dec_ref_known(v_a_1078_, 1);
v___x_1087_ = lean_unsigned_to_nat(1u);
v___x_1088_ = lean_nat_add(v_a_1069_, v___x_1087_);
lean_dec(v_a_1069_);
v_a_1069_ = v___x_1088_;
v_b_1070_ = v_a_1086_;
goto _start;
}
}
}
else
{
lean_object* v_a_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1098_; 
lean_dec(v_a_1069_);
lean_dec(v___x_1068_);
lean_dec(v___x_1067_);
lean_dec_ref(v_autoSpecialize_1066_);
v_a_1091_ = lean_ctor_get(v___y_1077_, 0);
v_isSharedCheck_1098_ = !lean_is_exclusive(v___y_1077_);
if (v_isSharedCheck_1098_ == 0)
{
v___x_1093_ = v___y_1077_;
v_isShared_1094_ = v_isSharedCheck_1098_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_a_1091_);
lean_dec(v___y_1077_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1098_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
lean_object* v___x_1096_; 
if (v_isShared_1094_ == 0)
{
v___x_1096_ = v___x_1093_;
goto v_reusejp_1095_;
}
else
{
lean_object* v_reuseFailAlloc_1097_; 
v_reuseFailAlloc_1097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1097_, 0, v_a_1091_);
v___x_1096_ = v_reuseFailAlloc_1097_;
goto v_reusejp_1095_;
}
v_reusejp_1095_:
{
return v___x_1096_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2___redArg___boxed(lean_object* v_upperBound_1142_, lean_object* v___x_1143_, lean_object* v_autoSpecialize_1144_, lean_object* v___x_1145_, lean_object* v___x_1146_, lean_object* v_a_1147_, lean_object* v_b_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_){
_start:
{
lean_object* v_res_1154_; 
v_res_1154_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2___redArg(v_upperBound_1142_, v___x_1143_, v_autoSpecialize_1144_, v___x_1145_, v___x_1146_, v_a_1147_, v_b_1148_, v___y_1149_, v___y_1150_, v___y_1151_, v___y_1152_);
lean_dec(v___y_1152_);
lean_dec_ref(v___y_1151_);
lean_dec(v___y_1150_);
lean_dec_ref(v___y_1149_);
lean_dec_ref(v___x_1143_);
lean_dec(v_upperBound_1142_);
return v_res_1154_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__3(lean_object* v_autoSpecialize_1155_, lean_object* v_as_1156_, size_t v_sz_1157_, size_t v_i_1158_, lean_object* v_b_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_){
_start:
{
lean_object* v_a_1166_; uint8_t v___x_1170_; 
v___x_1170_ = lean_usize_dec_lt(v_i_1158_, v_sz_1157_);
if (v___x_1170_ == 0)
{
lean_object* v___x_1171_; 
lean_dec_ref(v_autoSpecialize_1155_);
v___x_1171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1171_, 0, v_b_1159_);
return v___x_1171_;
}
else
{
lean_object* v_a_1172_; lean_object* v___x_1173_; lean_object* v_toSignature_1174_; lean_object* v_env_1175_; lean_object* v_name_1176_; lean_object* v_params_1177_; uint8_t v___x_1178_; 
v_a_1172_ = lean_array_uget_borrowed(v_as_1156_, v_i_1158_);
v___x_1173_ = lean_st_ref_get(v___y_1163_);
v_toSignature_1174_ = lean_ctor_get(v_a_1172_, 0);
v_env_1175_ = lean_ctor_get(v___x_1173_, 0);
lean_inc_ref(v_env_1175_);
lean_dec(v___x_1173_);
v_name_1176_ = lean_ctor_get(v_toSignature_1174_, 0);
v_params_1177_ = lean_ctor_get(v_toSignature_1174_, 3);
lean_inc(v_name_1176_);
v___x_1178_ = l_Lean_Compiler_hasNospecializeAttribute(v_env_1175_, v_name_1176_);
if (v___x_1178_ == 0)
{
lean_object* v___x_1179_; lean_object* v_env_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; 
v___x_1179_ = lean_st_ref_get(v___y_1163_);
v_env_1180_ = lean_ctor_get(v___x_1179_, 0);
lean_inc_ref(v_env_1180_);
lean_dec(v___x_1179_);
v___x_1181_ = lean_array_get_size(v_params_1177_);
v___x_1182_ = lean_unsigned_to_nat(0u);
v___x_1183_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_findAtSorted_x3f___closed__0));
lean_inc_n(v_name_1176_, 2);
v___x_1184_ = l_Lean_Compiler_getSpecializationArgs_x3f(v_env_1180_, v_name_1176_);
lean_inc_ref(v_autoSpecialize_1155_);
v___x_1185_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2___redArg(v___x_1181_, v_params_1177_, v_autoSpecialize_1155_, v_name_1176_, v___x_1184_, v___x_1182_, v___x_1183_, v___y_1160_, v___y_1161_, v___y_1162_, v___y_1163_);
if (lean_obj_tag(v___x_1185_) == 0)
{
lean_object* v_a_1186_; lean_object* v___x_1187_; 
v_a_1186_ = lean_ctor_get(v___x_1185_, 0);
lean_inc(v_a_1186_);
lean_dec_ref_known(v___x_1185_, 1);
v___x_1187_ = lean_array_push(v_b_1159_, v_a_1186_);
v_a_1166_ = v___x_1187_;
goto v___jp_1165_;
}
else
{
lean_object* v_a_1188_; lean_object* v___x_1190_; uint8_t v_isShared_1191_; uint8_t v_isSharedCheck_1195_; 
lean_dec_ref(v_b_1159_);
lean_dec_ref(v_autoSpecialize_1155_);
v_a_1188_ = lean_ctor_get(v___x_1185_, 0);
v_isSharedCheck_1195_ = !lean_is_exclusive(v___x_1185_);
if (v_isSharedCheck_1195_ == 0)
{
v___x_1190_ = v___x_1185_;
v_isShared_1191_ = v_isSharedCheck_1195_;
goto v_resetjp_1189_;
}
else
{
lean_inc(v_a_1188_);
lean_dec(v___x_1185_);
v___x_1190_ = lean_box(0);
v_isShared_1191_ = v_isSharedCheck_1195_;
goto v_resetjp_1189_;
}
v_resetjp_1189_:
{
lean_object* v___x_1193_; 
if (v_isShared_1191_ == 0)
{
v___x_1193_ = v___x_1190_;
goto v_reusejp_1192_;
}
else
{
lean_object* v_reuseFailAlloc_1194_; 
v_reuseFailAlloc_1194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1194_, 0, v_a_1188_);
v___x_1193_ = v_reuseFailAlloc_1194_;
goto v_reusejp_1192_;
}
v_reusejp_1192_:
{
return v___x_1193_;
}
}
}
}
else
{
lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; 
v___x_1196_ = lean_array_get_size(v_params_1177_);
v___x_1197_ = lean_box(4);
v___x_1198_ = lean_mk_array(v___x_1196_, v___x_1197_);
v___x_1199_ = lean_array_push(v_b_1159_, v___x_1198_);
v_a_1166_ = v___x_1199_;
goto v___jp_1165_;
}
}
v___jp_1165_:
{
size_t v___x_1167_; size_t v___x_1168_; 
v___x_1167_ = ((size_t)1ULL);
v___x_1168_ = lean_usize_add(v_i_1158_, v___x_1167_);
v_i_1158_ = v___x_1168_;
v_b_1159_ = v_a_1166_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__3___boxed(lean_object* v_autoSpecialize_1200_, lean_object* v_as_1201_, lean_object* v_sz_1202_, lean_object* v_i_1203_, lean_object* v_b_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_){
_start:
{
size_t v_sz_boxed_1210_; size_t v_i_boxed_1211_; lean_object* v_res_1212_; 
v_sz_boxed_1210_ = lean_unbox_usize(v_sz_1202_);
lean_dec(v_sz_1202_);
v_i_boxed_1211_ = lean_unbox_usize(v_i_1203_);
lean_dec(v_i_1203_);
v_res_1212_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__3(v_autoSpecialize_1200_, v_as_1201_, v_sz_boxed_1210_, v_i_boxed_1211_, v_b_1204_, v___y_1205_, v___y_1206_, v___y_1207_, v___y_1208_);
lean_dec(v___y_1208_);
lean_dec_ref(v___y_1207_);
lean_dec(v___y_1206_);
lean_dec_ref(v___y_1205_);
lean_dec_ref(v_as_1201_);
return v_res_1212_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__0(lean_object* v_as_1213_, size_t v_i_1214_, size_t v_stop_1215_){
_start:
{
uint8_t v___x_1220_; 
v___x_1220_ = lean_usize_dec_eq(v_i_1214_, v_stop_1215_);
if (v___x_1220_ == 0)
{
lean_object* v___x_1221_; 
v___x_1221_ = lean_array_uget_borrowed(v_as_1213_, v_i_1214_);
switch(lean_obj_tag(v___x_1221_))
{
case 0:
{
uint8_t v_weak_1222_; 
v_weak_1222_ = lean_ctor_get_uint8(v___x_1221_, 0);
if (v_weak_1222_ == 0)
{
uint8_t v___x_1223_; 
v___x_1223_ = 1;
return v___x_1223_;
}
else
{
goto v___jp_1216_;
}
}
case 2:
{
goto v___jp_1216_;
}
case 4:
{
goto v___jp_1216_;
}
default: 
{
uint8_t v___x_1224_; 
v___x_1224_ = 1;
return v___x_1224_;
}
}
}
else
{
uint8_t v___x_1225_; 
v___x_1225_ = 0;
return v___x_1225_;
}
v___jp_1216_:
{
size_t v___x_1217_; size_t v___x_1218_; 
v___x_1217_ = ((size_t)1ULL);
v___x_1218_ = lean_usize_add(v_i_1214_, v___x_1217_);
v_i_1214_ = v___x_1218_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__0___boxed(lean_object* v_as_1226_, lean_object* v_i_1227_, lean_object* v_stop_1228_){
_start:
{
size_t v_i_boxed_1229_; size_t v_stop_boxed_1230_; uint8_t v_res_1231_; lean_object* v_r_1232_; 
v_i_boxed_1229_ = lean_unbox_usize(v_i_1227_);
lean_dec(v_i_1227_);
v_stop_boxed_1230_ = lean_unbox_usize(v_stop_1228_);
lean_dec(v_stop_1228_);
v_res_1231_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__0(v_as_1226_, v_i_boxed_1229_, v_stop_boxed_1230_);
lean_dec_ref(v_as_1226_);
v_r_1232_ = lean_box(v_res_1231_);
return v_r_1232_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__5(lean_object* v_as_1233_, size_t v_i_1234_, size_t v_stop_1235_){
_start:
{
uint8_t v___x_1240_; 
v___x_1240_ = lean_usize_dec_eq(v_i_1234_, v_stop_1235_);
if (v___x_1240_ == 0)
{
lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; uint8_t v___x_1244_; 
v___x_1241_ = lean_array_uget_borrowed(v_as_1233_, v_i_1234_);
v___x_1242_ = lean_unsigned_to_nat(0u);
v___x_1243_ = lean_array_get_size(v___x_1241_);
v___x_1244_ = lean_nat_dec_lt(v___x_1242_, v___x_1243_);
if (v___x_1244_ == 0)
{
goto v___jp_1236_;
}
else
{
if (v___x_1244_ == 0)
{
goto v___jp_1236_;
}
else
{
size_t v___x_1245_; size_t v___x_1246_; uint8_t v___x_1247_; 
v___x_1245_ = ((size_t)0ULL);
v___x_1246_ = lean_usize_of_nat(v___x_1243_);
v___x_1247_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__0(v___x_1241_, v___x_1245_, v___x_1246_);
if (v___x_1247_ == 0)
{
goto v___jp_1236_;
}
else
{
return v___x_1247_;
}
}
}
}
else
{
uint8_t v___x_1248_; 
v___x_1248_ = 0;
return v___x_1248_;
}
v___jp_1236_:
{
size_t v___x_1237_; size_t v___x_1238_; 
v___x_1237_ = ((size_t)1ULL);
v___x_1238_ = lean_usize_add(v_i_1234_, v___x_1237_);
v_i_1234_ = v___x_1238_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__5___boxed(lean_object* v_as_1249_, lean_object* v_i_1250_, lean_object* v_stop_1251_){
_start:
{
size_t v_i_boxed_1252_; size_t v_stop_boxed_1253_; uint8_t v_res_1254_; lean_object* v_r_1255_; 
v_i_boxed_1252_ = lean_unbox_usize(v_i_1250_);
lean_dec(v_i_1250_);
v_stop_boxed_1253_ = lean_unbox_usize(v_stop_1251_);
lean_dec(v_stop_1251_);
v_res_1254_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__5(v_as_1249_, v_i_boxed_1252_, v_stop_boxed_1253_);
lean_dec_ref(v_as_1249_);
v_r_1255_ = lean_box(v_res_1254_);
return v_r_1255_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__6(lean_object* v_as_1256_, lean_object* v_bs_1257_, lean_object* v_i_1258_, lean_object* v_cs_1259_){
_start:
{
lean_object* v___y_1261_; lean_object* v___x_1266_; uint8_t v___x_1267_; 
v___x_1266_ = lean_array_get_size(v_as_1256_);
v___x_1267_ = lean_nat_dec_lt(v_i_1258_, v___x_1266_);
if (v___x_1267_ == 0)
{
lean_dec(v_i_1258_);
return v_cs_1259_;
}
else
{
lean_object* v___x_1268_; uint8_t v___x_1269_; 
v___x_1268_ = lean_array_get_size(v_bs_1257_);
v___x_1269_ = lean_nat_dec_lt(v_i_1258_, v___x_1268_);
if (v___x_1269_ == 0)
{
lean_dec(v_i_1258_);
return v_cs_1259_;
}
else
{
lean_object* v_a_1270_; lean_object* v_b_1271_; uint8_t v___x_1272_; 
v_a_1270_ = lean_array_fget_borrowed(v_as_1256_, v_i_1258_);
v_b_1271_ = lean_array_fget_borrowed(v_bs_1257_, v_i_1258_);
v___x_1272_ = lean_unbox(v_b_1271_);
if (v___x_1272_ == 0)
{
if (lean_obj_tag(v_a_1270_) == 3)
{
v___y_1261_ = v_a_1270_;
goto v___jp_1260_;
}
else
{
lean_object* v___x_1273_; 
v___x_1273_ = lean_box(4);
v___y_1261_ = v___x_1273_;
goto v___jp_1260_;
}
}
else
{
lean_inc(v_a_1270_);
v___y_1261_ = v_a_1270_;
goto v___jp_1260_;
}
}
}
v___jp_1260_:
{
lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; 
v___x_1262_ = lean_unsigned_to_nat(1u);
v___x_1263_ = lean_nat_add(v_i_1258_, v___x_1262_);
lean_dec(v_i_1258_);
v___x_1264_ = lean_array_push(v_cs_1259_, v___y_1261_);
v_i_1258_ = v___x_1263_;
v_cs_1259_ = v___x_1264_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__6___boxed(lean_object* v_as_1274_, lean_object* v_bs_1275_, lean_object* v_i_1276_, lean_object* v_cs_1277_){
_start:
{
lean_object* v_res_1278_; 
v_res_1278_ = l_Array_zipWithMAux___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__6(v_as_1274_, v_bs_1275_, v_i_1276_, v_cs_1277_);
lean_dec_ref(v_bs_1275_);
lean_dec_ref(v_as_1274_);
return v_res_1278_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__7___redArg(lean_object* v_upperBound_1279_, lean_object* v___x_1280_, lean_object* v_a_1281_, lean_object* v_b_1282_){
_start:
{
lean_object* v_a_1285_; uint8_t v___x_1289_; 
v___x_1289_ = lean_nat_dec_lt(v_a_1281_, v_upperBound_1279_);
if (v___x_1289_ == 0)
{
lean_object* v___x_1290_; 
lean_dec(v_a_1281_);
v___x_1290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1290_, 0, v_b_1282_);
return v___x_1290_;
}
else
{
lean_object* v___x_1291_; lean_object* v___x_1292_; 
v___x_1291_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedSpecParamInfo_default));
v___x_1292_ = lean_array_get_borrowed(v___x_1291_, v_b_1282_, v_a_1281_);
if (lean_obj_tag(v___x_1292_) == 2)
{
uint8_t v___x_1293_; 
v___x_1293_ = l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_hasFwdDeps(v___x_1280_, v_b_1282_, v_a_1281_);
if (v___x_1293_ == 0)
{
lean_object* v___x_1294_; lean_object* v___x_1295_; 
v___x_1294_ = lean_box(4);
v___x_1295_ = lean_array_set(v_b_1282_, v_a_1281_, v___x_1294_);
v_a_1285_ = v___x_1295_;
goto v___jp_1284_;
}
else
{
v_a_1285_ = v_b_1282_;
goto v___jp_1284_;
}
}
else
{
v_a_1285_ = v_b_1282_;
goto v___jp_1284_;
}
}
v___jp_1284_:
{
lean_object* v___x_1286_; lean_object* v___x_1287_; 
v___x_1286_ = lean_unsigned_to_nat(1u);
v___x_1287_ = lean_nat_add(v_a_1281_, v___x_1286_);
lean_dec(v_a_1281_);
v_a_1281_ = v___x_1287_;
v_b_1282_ = v_a_1285_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__7___redArg___boxed(lean_object* v_upperBound_1296_, lean_object* v___x_1297_, lean_object* v_a_1298_, lean_object* v_b_1299_, lean_object* v___y_1300_){
_start:
{
lean_object* v_res_1301_; 
v_res_1301_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__7___redArg(v_upperBound_1296_, v___x_1297_, v_a_1298_, v_b_1299_);
lean_dec_ref(v___x_1297_);
lean_dec(v_upperBound_1296_);
return v_res_1301_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_1302_; 
v___x_1302_ = l_Array_instInhabited___redArg();
return v___x_1302_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___redArg___closed__4(void){
_start:
{
lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
v___x_1306_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___redArg___closed__3));
v___x_1307_ = lean_unsigned_to_nat(43u);
v___x_1308_ = lean_unsigned_to_nat(236u);
v___x_1309_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___redArg___closed__2));
v___x_1310_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___redArg___closed__1));
v___x_1311_ = l_mkPanicMessageWithDecl(v___x_1310_, v___x_1309_, v___x_1308_, v___x_1307_, v___x_1306_);
return v___x_1311_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___redArg(lean_object* v_upperBound_1312_, lean_object* v_decls_1313_, lean_object* v_alreadySpecialized_1314_, lean_object* v___x_1315_, lean_object* v_a_1316_, lean_object* v_a_1317_, lean_object* v_b_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_){
_start:
{
lean_object* v_a_1325_; uint8_t v___x_1329_; 
v___x_1329_ = lean_nat_dec_lt(v_a_1317_, v_upperBound_1312_);
if (v___x_1329_ == 0)
{
lean_object* v___x_1330_; 
lean_dec(v_a_1317_);
v___x_1330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1330_, 0, v_b_1318_);
return v___x_1330_;
}
else
{
lean_object* v___x_1331_; lean_object* v_toSignature_1332_; lean_object* v_name_1333_; lean_object* v___x_1334_; 
v___x_1331_ = lean_array_fget_borrowed(v_decls_1313_, v_a_1317_);
v_toSignature_1332_ = lean_ctor_get(v___x_1331_, 0);
v_name_1333_ = lean_ctor_get(v_toSignature_1332_, 0);
v___x_1334_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_1315_, v_name_1333_);
if (lean_obj_tag(v___x_1334_) == 1)
{
lean_object* v_val_1335_; uint8_t v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; 
v_val_1335_ = lean_ctor_get(v___x_1334_, 0);
lean_inc(v_val_1335_);
lean_dec_ref_known(v___x_1334_, 1);
v___x_1336_ = 0;
v___x_1337_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___redArg___closed__0);
v___x_1338_ = lean_array_get_borrowed(v___x_1337_, v_a_1316_, v_a_1317_);
v___x_1339_ = lean_unsigned_to_nat(0u);
v___x_1340_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_findAtSorted_x3f___closed__0));
v___x_1341_ = l_Array_zipWithMAux___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__6(v___x_1338_, v_val_1335_, v___x_1339_, v___x_1340_);
lean_dec(v_val_1335_);
v___x_1342_ = lean_array_get_size(v___x_1341_);
v___x_1343_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__7___redArg(v___x_1342_, v___x_1331_, v___x_1339_, v___x_1341_);
if (lean_obj_tag(v___x_1343_) == 0)
{
lean_object* v_a_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; uint8_t v___x_1348_; lean_object* v___x_1349_; 
v_a_1344_ = lean_ctor_get(v___x_1343_, 0);
lean_inc(v_a_1344_);
lean_dec_ref_known(v___x_1343_, 1);
v___x_1345_ = lean_box(v___x_1336_);
v___x_1346_ = lean_array_get(v___x_1345_, v_alreadySpecialized_1314_, v_a_1317_);
lean_dec(v___x_1345_);
lean_inc(v_name_1333_);
v___x_1347_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1347_, 0, v_name_1333_);
lean_ctor_set(v___x_1347_, 1, v_a_1344_);
v___x_1348_ = lean_unbox(v___x_1346_);
lean_dec(v___x_1346_);
lean_ctor_set_uint8(v___x_1347_, sizeof(void*)*2, v___x_1348_);
v___x_1349_ = lean_array_push(v_b_1318_, v___x_1347_);
v_a_1325_ = v___x_1349_;
goto v___jp_1324_;
}
else
{
lean_object* v_a_1350_; lean_object* v___x_1352_; uint8_t v_isShared_1353_; uint8_t v_isSharedCheck_1357_; 
lean_dec_ref(v_b_1318_);
lean_dec(v_a_1317_);
v_a_1350_ = lean_ctor_get(v___x_1343_, 0);
v_isSharedCheck_1357_ = !lean_is_exclusive(v___x_1343_);
if (v_isSharedCheck_1357_ == 0)
{
v___x_1352_ = v___x_1343_;
v_isShared_1353_ = v_isSharedCheck_1357_;
goto v_resetjp_1351_;
}
else
{
lean_inc(v_a_1350_);
lean_dec(v___x_1343_);
v___x_1352_ = lean_box(0);
v_isShared_1353_ = v_isSharedCheck_1357_;
goto v_resetjp_1351_;
}
v_resetjp_1351_:
{
lean_object* v___x_1355_; 
if (v_isShared_1353_ == 0)
{
v___x_1355_ = v___x_1352_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1356_; 
v_reuseFailAlloc_1356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1356_, 0, v_a_1350_);
v___x_1355_ = v_reuseFailAlloc_1356_;
goto v_reusejp_1354_;
}
v_reusejp_1354_:
{
return v___x_1355_;
}
}
}
}
else
{
lean_object* v___x_1358_; lean_object* v___x_1359_; 
lean_dec(v___x_1334_);
v___x_1358_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___redArg___closed__4, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___redArg___closed__4_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___redArg___closed__4);
v___x_1359_ = l_panic___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__8(v___x_1358_, v___y_1319_, v___y_1320_, v___y_1321_, v___y_1322_);
if (lean_obj_tag(v___x_1359_) == 0)
{
lean_dec_ref_known(v___x_1359_, 1);
v_a_1325_ = v_b_1318_;
goto v___jp_1324_;
}
else
{
lean_object* v_a_1360_; lean_object* v___x_1362_; uint8_t v_isShared_1363_; uint8_t v_isSharedCheck_1367_; 
lean_dec_ref(v_b_1318_);
lean_dec(v_a_1317_);
v_a_1360_ = lean_ctor_get(v___x_1359_, 0);
v_isSharedCheck_1367_ = !lean_is_exclusive(v___x_1359_);
if (v_isSharedCheck_1367_ == 0)
{
v___x_1362_ = v___x_1359_;
v_isShared_1363_ = v_isSharedCheck_1367_;
goto v_resetjp_1361_;
}
else
{
lean_inc(v_a_1360_);
lean_dec(v___x_1359_);
v___x_1362_ = lean_box(0);
v_isShared_1363_ = v_isSharedCheck_1367_;
goto v_resetjp_1361_;
}
v_resetjp_1361_:
{
lean_object* v___x_1365_; 
if (v_isShared_1363_ == 0)
{
v___x_1365_ = v___x_1362_;
goto v_reusejp_1364_;
}
else
{
lean_object* v_reuseFailAlloc_1366_; 
v_reuseFailAlloc_1366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1366_, 0, v_a_1360_);
v___x_1365_ = v_reuseFailAlloc_1366_;
goto v_reusejp_1364_;
}
v_reusejp_1364_:
{
return v___x_1365_;
}
}
}
}
}
v___jp_1324_:
{
lean_object* v___x_1326_; lean_object* v___x_1327_; 
v___x_1326_ = lean_unsigned_to_nat(1u);
v___x_1327_ = lean_nat_add(v_a_1317_, v___x_1326_);
lean_dec(v_a_1317_);
v_a_1317_ = v___x_1327_;
v_b_1318_ = v_a_1325_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___redArg___boxed(lean_object* v_upperBound_1368_, lean_object* v_decls_1369_, lean_object* v_alreadySpecialized_1370_, lean_object* v___x_1371_, lean_object* v_a_1372_, lean_object* v_a_1373_, lean_object* v_b_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_){
_start:
{
lean_object* v_res_1380_; 
v_res_1380_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___redArg(v_upperBound_1368_, v_decls_1369_, v_alreadySpecialized_1370_, v___x_1371_, v_a_1372_, v_a_1373_, v_b_1374_, v___y_1375_, v___y_1376_, v___y_1377_, v___y_1378_);
lean_dec(v___y_1378_);
lean_dec_ref(v___y_1377_);
lean_dec(v___y_1376_);
lean_dec_ref(v___y_1375_);
lean_dec_ref(v_a_1372_);
lean_dec(v___x_1371_);
lean_dec_ref(v_alreadySpecialized_1370_);
lean_dec_ref(v_decls_1369_);
lean_dec(v_upperBound_1368_);
return v_res_1380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_computeSpecEntries(lean_object* v_decls_1383_, lean_object* v_autoSpecialize_1384_, lean_object* v_alreadySpecialized_1385_, lean_object* v_a_1386_, lean_object* v_a_1387_, lean_object* v_a_1388_, lean_object* v_a_1389_){
_start:
{
lean_object* v___x_1391_; lean_object* v_declsInfo_1392_; size_t v_sz_1393_; size_t v___x_1394_; lean_object* v___x_1395_; 
v___x_1391_ = lean_unsigned_to_nat(0u);
v_declsInfo_1392_ = ((lean_object*)(l_Lean_Compiler_LCNF_computeSpecEntries___closed__0));
v_sz_1393_ = lean_array_size(v_decls_1383_);
v___x_1394_ = ((size_t)0ULL);
v___x_1395_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__3(v_autoSpecialize_1384_, v_decls_1383_, v_sz_1393_, v___x_1394_, v_declsInfo_1392_, v_a_1386_, v_a_1387_, v_a_1388_, v_a_1389_);
if (lean_obj_tag(v___x_1395_) == 0)
{
lean_object* v_a_1396_; lean_object* v___x_1398_; uint8_t v_isShared_1399_; uint8_t v_isSharedCheck_1413_; 
v_a_1396_ = lean_ctor_get(v___x_1395_, 0);
v_isSharedCheck_1413_ = !lean_is_exclusive(v___x_1395_);
if (v_isSharedCheck_1413_ == 0)
{
v___x_1398_ = v___x_1395_;
v_isShared_1399_ = v_isSharedCheck_1413_;
goto v_resetjp_1397_;
}
else
{
lean_inc(v_a_1396_);
lean_dec(v___x_1395_);
v___x_1398_ = lean_box(0);
v_isShared_1399_ = v_isSharedCheck_1413_;
goto v_resetjp_1397_;
}
v_resetjp_1397_:
{
lean_object* v___x_1405_; uint8_t v___x_1406_; 
v___x_1405_ = lean_array_get_size(v_a_1396_);
v___x_1406_ = lean_nat_dec_lt(v___x_1391_, v___x_1405_);
if (v___x_1406_ == 0)
{
lean_dec(v_a_1396_);
goto v___jp_1400_;
}
else
{
if (v___x_1406_ == 0)
{
lean_dec(v_a_1396_);
goto v___jp_1400_;
}
else
{
size_t v___x_1407_; uint8_t v___x_1408_; 
v___x_1407_ = lean_usize_of_nat(v___x_1405_);
v___x_1408_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__5(v_a_1396_, v___x_1394_, v___x_1407_);
if (v___x_1408_ == 0)
{
lean_dec(v_a_1396_);
goto v___jp_1400_;
}
else
{
lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; 
lean_del_object(v___x_1398_);
v___x_1409_ = lean_array_get_size(v_decls_1383_);
v___x_1410_ = lean_mk_empty_array_with_capacity(v___x_1409_);
lean_inc_ref(v_decls_1383_);
v___x_1411_ = l_Lean_Compiler_LCNF_mkFixedParamsMap(v_decls_1383_);
v___x_1412_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___redArg(v___x_1409_, v_decls_1383_, v_alreadySpecialized_1385_, v___x_1411_, v_a_1396_, v___x_1391_, v___x_1410_, v_a_1386_, v_a_1387_, v_a_1388_, v_a_1389_);
lean_dec(v_a_1396_);
lean_dec(v___x_1411_);
lean_dec_ref(v_decls_1383_);
return v___x_1412_;
}
}
}
v___jp_1400_:
{
lean_object* v___x_1401_; lean_object* v___x_1403_; 
v___x_1401_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__4___redArg(v_alreadySpecialized_1385_, v_sz_1393_, v___x_1394_, v_decls_1383_);
if (v_isShared_1399_ == 0)
{
lean_ctor_set(v___x_1398_, 0, v___x_1401_);
v___x_1403_ = v___x_1398_;
goto v_reusejp_1402_;
}
else
{
lean_object* v_reuseFailAlloc_1404_; 
v_reuseFailAlloc_1404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1404_, 0, v___x_1401_);
v___x_1403_ = v_reuseFailAlloc_1404_;
goto v_reusejp_1402_;
}
v_reusejp_1402_:
{
return v___x_1403_;
}
}
}
}
else
{
lean_object* v_a_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1421_; 
lean_dec_ref(v_decls_1383_);
v_a_1414_ = lean_ctor_get(v___x_1395_, 0);
v_isSharedCheck_1421_ = !lean_is_exclusive(v___x_1395_);
if (v_isSharedCheck_1421_ == 0)
{
v___x_1416_ = v___x_1395_;
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_a_1414_);
lean_dec(v___x_1395_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v___x_1419_; 
if (v_isShared_1417_ == 0)
{
v___x_1419_ = v___x_1416_;
goto v_reusejp_1418_;
}
else
{
lean_object* v_reuseFailAlloc_1420_; 
v_reuseFailAlloc_1420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1420_, 0, v_a_1414_);
v___x_1419_ = v_reuseFailAlloc_1420_;
goto v_reusejp_1418_;
}
v_reusejp_1418_:
{
return v___x_1419_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_computeSpecEntries___boxed(lean_object* v_decls_1422_, lean_object* v_autoSpecialize_1423_, lean_object* v_alreadySpecialized_1424_, lean_object* v_a_1425_, lean_object* v_a_1426_, lean_object* v_a_1427_, lean_object* v_a_1428_, lean_object* v_a_1429_){
_start:
{
lean_object* v_res_1430_; 
v_res_1430_ = l_Lean_Compiler_LCNF_computeSpecEntries(v_decls_1422_, v_autoSpecialize_1423_, v_alreadySpecialized_1424_, v_a_1425_, v_a_1426_, v_a_1427_, v_a_1428_);
lean_dec(v_a_1428_);
lean_dec_ref(v_a_1427_);
lean_dec(v_a_1426_);
lean_dec_ref(v_a_1425_);
lean_dec_ref(v_alreadySpecialized_1424_);
return v_res_1430_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2(lean_object* v_upperBound_1431_, lean_object* v___x_1432_, lean_object* v_autoSpecialize_1433_, lean_object* v___x_1434_, lean_object* v___x_1435_, lean_object* v_inst_1436_, lean_object* v_R_1437_, lean_object* v_a_1438_, lean_object* v_b_1439_, lean_object* v_c_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_){
_start:
{
lean_object* v___x_1446_; 
v___x_1446_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2___redArg(v_upperBound_1431_, v___x_1432_, v_autoSpecialize_1433_, v___x_1434_, v___x_1435_, v_a_1438_, v_b_1439_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1444_);
return v___x_1446_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2___boxed(lean_object* v_upperBound_1447_, lean_object* v___x_1448_, lean_object* v_autoSpecialize_1449_, lean_object* v___x_1450_, lean_object* v___x_1451_, lean_object* v_inst_1452_, lean_object* v_R_1453_, lean_object* v_a_1454_, lean_object* v_b_1455_, lean_object* v_c_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_){
_start:
{
lean_object* v_res_1462_; 
v_res_1462_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__2(v_upperBound_1447_, v___x_1448_, v_autoSpecialize_1449_, v___x_1450_, v___x_1451_, v_inst_1452_, v_R_1453_, v_a_1454_, v_b_1455_, v_c_1456_, v___y_1457_, v___y_1458_, v___y_1459_, v___y_1460_);
lean_dec(v___y_1460_);
lean_dec_ref(v___y_1459_);
lean_dec(v___y_1458_);
lean_dec_ref(v___y_1457_);
lean_dec_ref(v___x_1448_);
lean_dec(v_upperBound_1447_);
return v_res_1462_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__4(lean_object* v_alreadySpecialized_1463_, lean_object* v_as_1464_, size_t v_sz_1465_, size_t v_i_1466_, lean_object* v_bs_1467_){
_start:
{
lean_object* v___x_1468_; 
v___x_1468_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__4___redArg(v_alreadySpecialized_1463_, v_sz_1465_, v_i_1466_, v_bs_1467_);
return v___x_1468_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__4___boxed(lean_object* v_alreadySpecialized_1469_, lean_object* v_as_1470_, lean_object* v_sz_1471_, lean_object* v_i_1472_, lean_object* v_bs_1473_){
_start:
{
size_t v_sz_boxed_1474_; size_t v_i_boxed_1475_; lean_object* v_res_1476_; 
v_sz_boxed_1474_ = lean_unbox_usize(v_sz_1471_);
lean_dec(v_sz_1471_);
v_i_boxed_1475_ = lean_unbox_usize(v_i_1472_);
lean_dec(v_i_1472_);
v_res_1476_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__4(v_alreadySpecialized_1469_, v_as_1470_, v_sz_boxed_1474_, v_i_boxed_1475_, v_bs_1473_);
lean_dec_ref(v_as_1470_);
lean_dec_ref(v_alreadySpecialized_1469_);
return v_res_1476_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__7(lean_object* v_upperBound_1477_, lean_object* v___x_1478_, lean_object* v_inst_1479_, lean_object* v_R_1480_, lean_object* v_a_1481_, lean_object* v_b_1482_, lean_object* v_c_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_){
_start:
{
lean_object* v___x_1489_; 
v___x_1489_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__7___redArg(v_upperBound_1477_, v___x_1478_, v_a_1481_, v_b_1482_);
return v___x_1489_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__7___boxed(lean_object* v_upperBound_1490_, lean_object* v___x_1491_, lean_object* v_inst_1492_, lean_object* v_R_1493_, lean_object* v_a_1494_, lean_object* v_b_1495_, lean_object* v_c_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_){
_start:
{
lean_object* v_res_1502_; 
v_res_1502_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__7(v_upperBound_1490_, v___x_1491_, v_inst_1492_, v_R_1493_, v_a_1494_, v_b_1495_, v_c_1496_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_);
lean_dec(v___y_1500_);
lean_dec_ref(v___y_1499_);
lean_dec(v___y_1498_);
lean_dec_ref(v___y_1497_);
lean_dec_ref(v___x_1491_);
lean_dec(v_upperBound_1490_);
return v_res_1502_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9(lean_object* v_upperBound_1503_, lean_object* v_decls_1504_, lean_object* v_alreadySpecialized_1505_, lean_object* v___x_1506_, lean_object* v_a_1507_, lean_object* v_inst_1508_, lean_object* v_R_1509_, lean_object* v_a_1510_, lean_object* v_b_1511_, lean_object* v_c_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_){
_start:
{
lean_object* v___x_1518_; 
v___x_1518_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___redArg(v_upperBound_1503_, v_decls_1504_, v_alreadySpecialized_1505_, v___x_1506_, v_a_1507_, v_a_1510_, v_b_1511_, v___y_1513_, v___y_1514_, v___y_1515_, v___y_1516_);
return v___x_1518_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9___boxed(lean_object* v_upperBound_1519_, lean_object* v_decls_1520_, lean_object* v_alreadySpecialized_1521_, lean_object* v___x_1522_, lean_object* v_a_1523_, lean_object* v_inst_1524_, lean_object* v_R_1525_, lean_object* v_a_1526_, lean_object* v_b_1527_, lean_object* v_c_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_){
_start:
{
lean_object* v_res_1534_; 
v_res_1534_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__9(v_upperBound_1519_, v_decls_1520_, v_alreadySpecialized_1521_, v___x_1522_, v_a_1523_, v_inst_1524_, v_R_1525_, v_a_1526_, v_b_1527_, v_c_1528_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_);
lean_dec(v___y_1532_);
lean_dec_ref(v___y_1531_);
lean_dec(v___y_1530_);
lean_dec_ref(v___y_1529_);
lean_dec_ref(v_a_1523_);
lean_dec(v___x_1522_);
lean_dec_ref(v_alreadySpecialized_1521_);
lean_dec_ref(v_decls_1520_);
lean_dec(v_upperBound_1519_);
return v_res_1534_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1535_; lean_object* v___x_1536_; 
v___x_1535_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedSpecState_default___closed__0, &l_Lean_Compiler_LCNF_instInhabitedSpecState_default___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedSpecState_default___closed__0);
v___x_1536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1536_, 0, v___x_1535_);
return v___x_1536_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__2___closed__1(void){
_start:
{
lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; 
v___x_1537_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__2___closed__0, &l_Lean_addTrace___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__2___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__2___closed__0);
v___x_1538_ = lean_unsigned_to_nat(0u);
v___x_1539_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1539_, 0, v___x_1538_);
lean_ctor_set(v___x_1539_, 1, v___x_1538_);
lean_ctor_set(v___x_1539_, 2, v___x_1538_);
lean_ctor_set(v___x_1539_, 3, v___x_1538_);
lean_ctor_set(v___x_1539_, 4, v___x_1537_);
lean_ctor_set(v___x_1539_, 5, v___x_1537_);
lean_ctor_set(v___x_1539_, 6, v___x_1537_);
lean_ctor_set(v___x_1539_, 7, v___x_1537_);
lean_ctor_set(v___x_1539_, 8, v___x_1537_);
lean_ctor_set(v___x_1539_, 9, v___x_1537_);
lean_ctor_set(v___x_1539_, 10, v___x_1537_);
return v___x_1539_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__2___closed__2(void){
_start:
{
lean_object* v___x_1540_; double v___x_1541_; 
v___x_1540_ = lean_unsigned_to_nat(0u);
v___x_1541_ = lean_float_of_nat(v___x_1540_);
return v___x_1541_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__2(lean_object* v_cls_1545_, lean_object* v_msg_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_){
_start:
{
lean_object* v_ref_1552_; lean_object* v___x_1553_; lean_object* v_env_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; 
v_ref_1552_ = lean_ctor_get(v___y_1549_, 2);
v___x_1553_ = lean_st_ref_get(v___y_1550_);
v_env_1554_ = lean_ctor_get(v___x_1553_, 0);
lean_inc_ref(v_env_1554_);
lean_dec(v___x_1553_);
v___x_1555_ = lean_st_ref_get(v___y_1548_);
v___x_1556_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_1547_);
if (lean_obj_tag(v___x_1556_) == 0)
{
lean_object* v_a_1557_; lean_object* v___x_1559_; uint8_t v_isShared_1560_; uint8_t v_isSharedCheck_1616_; 
v_a_1557_ = lean_ctor_get(v___x_1556_, 0);
v_isSharedCheck_1616_ = !lean_is_exclusive(v___x_1556_);
if (v_isSharedCheck_1616_ == 0)
{
v___x_1559_ = v___x_1556_;
v_isShared_1560_ = v_isSharedCheck_1616_;
goto v_resetjp_1558_;
}
else
{
lean_inc(v_a_1557_);
lean_dec(v___x_1556_);
v___x_1559_ = lean_box(0);
v_isShared_1560_ = v_isSharedCheck_1616_;
goto v_resetjp_1558_;
}
v_resetjp_1558_:
{
lean_object* v_lctx_1561_; lean_object* v___x_1563_; uint8_t v_isShared_1564_; uint8_t v_isSharedCheck_1614_; 
v_lctx_1561_ = lean_ctor_get(v___x_1555_, 0);
v_isSharedCheck_1614_ = !lean_is_exclusive(v___x_1555_);
if (v_isSharedCheck_1614_ == 0)
{
lean_object* v_unused_1615_; 
v_unused_1615_ = lean_ctor_get(v___x_1555_, 1);
lean_dec(v_unused_1615_);
v___x_1563_ = v___x_1555_;
v_isShared_1564_ = v_isSharedCheck_1614_;
goto v_resetjp_1562_;
}
else
{
lean_inc(v_lctx_1561_);
lean_dec(v___x_1555_);
v___x_1563_ = lean_box(0);
v_isShared_1564_ = v_isSharedCheck_1614_;
goto v_resetjp_1562_;
}
v_resetjp_1562_:
{
uint8_t v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1571_; 
v___x_1565_ = lean_unbox(v_a_1557_);
lean_dec(v_a_1557_);
v___x_1566_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_1561_, v___x_1565_);
lean_dec_ref(v_lctx_1561_);
v___x_1567_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1549_);
v___x_1568_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__2___closed__1, &l_Lean_addTrace___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__2___closed__1_once, _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__2___closed__1);
v___x_1569_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1569_, 0, v_env_1554_);
lean_ctor_set(v___x_1569_, 1, v___x_1568_);
lean_ctor_set(v___x_1569_, 2, v___x_1566_);
lean_ctor_set(v___x_1569_, 3, v___x_1567_);
if (v_isShared_1564_ == 0)
{
lean_ctor_set_tag(v___x_1563_, 3);
lean_ctor_set(v___x_1563_, 1, v_msg_1546_);
lean_ctor_set(v___x_1563_, 0, v___x_1569_);
v___x_1571_ = v___x_1563_;
goto v_reusejp_1570_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v___x_1569_);
lean_ctor_set(v_reuseFailAlloc_1613_, 1, v_msg_1546_);
v___x_1571_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1570_;
}
v_reusejp_1570_:
{
lean_object* v___x_1572_; lean_object* v_traceState_1573_; lean_object* v_env_1574_; lean_object* v_nextMacroScope_1575_; lean_object* v_ngen_1576_; lean_object* v_auxDeclNGen_1577_; lean_object* v_cache_1578_; lean_object* v_recordedDeps_1579_; lean_object* v_messages_1580_; lean_object* v_infoState_1581_; lean_object* v_snapshotTasks_1582_; lean_object* v___x_1584_; uint8_t v_isShared_1585_; uint8_t v_isSharedCheck_1612_; 
v___x_1572_ = lean_st_ref_take(v___y_1550_);
v_traceState_1573_ = lean_ctor_get(v___x_1572_, 4);
v_env_1574_ = lean_ctor_get(v___x_1572_, 0);
v_nextMacroScope_1575_ = lean_ctor_get(v___x_1572_, 1);
v_ngen_1576_ = lean_ctor_get(v___x_1572_, 2);
v_auxDeclNGen_1577_ = lean_ctor_get(v___x_1572_, 3);
v_cache_1578_ = lean_ctor_get(v___x_1572_, 5);
v_recordedDeps_1579_ = lean_ctor_get(v___x_1572_, 6);
v_messages_1580_ = lean_ctor_get(v___x_1572_, 7);
v_infoState_1581_ = lean_ctor_get(v___x_1572_, 8);
v_snapshotTasks_1582_ = lean_ctor_get(v___x_1572_, 9);
v_isSharedCheck_1612_ = !lean_is_exclusive(v___x_1572_);
if (v_isSharedCheck_1612_ == 0)
{
v___x_1584_ = v___x_1572_;
v_isShared_1585_ = v_isSharedCheck_1612_;
goto v_resetjp_1583_;
}
else
{
lean_inc(v_snapshotTasks_1582_);
lean_inc(v_infoState_1581_);
lean_inc(v_messages_1580_);
lean_inc(v_recordedDeps_1579_);
lean_inc(v_cache_1578_);
lean_inc(v_traceState_1573_);
lean_inc(v_auxDeclNGen_1577_);
lean_inc(v_ngen_1576_);
lean_inc(v_nextMacroScope_1575_);
lean_inc(v_env_1574_);
lean_dec(v___x_1572_);
v___x_1584_ = lean_box(0);
v_isShared_1585_ = v_isSharedCheck_1612_;
goto v_resetjp_1583_;
}
v_resetjp_1583_:
{
uint64_t v_tid_1586_; lean_object* v_traces_1587_; lean_object* v___x_1589_; uint8_t v_isShared_1590_; uint8_t v_isSharedCheck_1611_; 
v_tid_1586_ = lean_ctor_get_uint64(v_traceState_1573_, sizeof(void*)*1);
v_traces_1587_ = lean_ctor_get(v_traceState_1573_, 0);
v_isSharedCheck_1611_ = !lean_is_exclusive(v_traceState_1573_);
if (v_isSharedCheck_1611_ == 0)
{
v___x_1589_ = v_traceState_1573_;
v_isShared_1590_ = v_isSharedCheck_1611_;
goto v_resetjp_1588_;
}
else
{
lean_inc(v_traces_1587_);
lean_dec(v_traceState_1573_);
v___x_1589_ = lean_box(0);
v_isShared_1590_ = v_isSharedCheck_1611_;
goto v_resetjp_1588_;
}
v_resetjp_1588_:
{
lean_object* v___x_1591_; lean_object* v___x_1592_; double v___x_1593_; uint8_t v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1602_; 
v___x_1591_ = lean_box(0);
v___x_1592_ = lean_box(0);
v___x_1593_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__2___closed__2, &l_Lean_addTrace___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__2___closed__2_once, _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__2___closed__2);
v___x_1594_ = 0;
v___x_1595_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__2___closed__3));
v___x_1596_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1596_, 0, v_cls_1545_);
lean_ctor_set(v___x_1596_, 1, v___x_1592_);
lean_ctor_set(v___x_1596_, 2, v___x_1595_);
lean_ctor_set_float(v___x_1596_, sizeof(void*)*3, v___x_1593_);
lean_ctor_set_float(v___x_1596_, sizeof(void*)*3 + 8, v___x_1593_);
lean_ctor_set_uint8(v___x_1596_, sizeof(void*)*3 + 16, v___x_1594_);
v___x_1597_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__2___closed__4));
v___x_1598_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1598_, 0, v___x_1596_);
lean_ctor_set(v___x_1598_, 1, v___x_1571_);
lean_ctor_set(v___x_1598_, 2, v___x_1597_);
lean_inc(v_ref_1552_);
v___x_1599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1599_, 0, v_ref_1552_);
lean_ctor_set(v___x_1599_, 1, v___x_1598_);
v___x_1600_ = l_Lean_PersistentArray_push___redArg(v_traces_1587_, v___x_1599_);
if (v_isShared_1590_ == 0)
{
lean_ctor_set(v___x_1589_, 0, v___x_1600_);
v___x_1602_ = v___x_1589_;
goto v_reusejp_1601_;
}
else
{
lean_object* v_reuseFailAlloc_1610_; 
v_reuseFailAlloc_1610_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1610_, 0, v___x_1600_);
lean_ctor_set_uint64(v_reuseFailAlloc_1610_, sizeof(void*)*1, v_tid_1586_);
v___x_1602_ = v_reuseFailAlloc_1610_;
goto v_reusejp_1601_;
}
v_reusejp_1601_:
{
lean_object* v___x_1604_; 
if (v_isShared_1585_ == 0)
{
lean_ctor_set(v___x_1584_, 4, v___x_1602_);
v___x_1604_ = v___x_1584_;
goto v_reusejp_1603_;
}
else
{
lean_object* v_reuseFailAlloc_1609_; 
v_reuseFailAlloc_1609_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1609_, 0, v_env_1574_);
lean_ctor_set(v_reuseFailAlloc_1609_, 1, v_nextMacroScope_1575_);
lean_ctor_set(v_reuseFailAlloc_1609_, 2, v_ngen_1576_);
lean_ctor_set(v_reuseFailAlloc_1609_, 3, v_auxDeclNGen_1577_);
lean_ctor_set(v_reuseFailAlloc_1609_, 4, v___x_1602_);
lean_ctor_set(v_reuseFailAlloc_1609_, 5, v_cache_1578_);
lean_ctor_set(v_reuseFailAlloc_1609_, 6, v_recordedDeps_1579_);
lean_ctor_set(v_reuseFailAlloc_1609_, 7, v_messages_1580_);
lean_ctor_set(v_reuseFailAlloc_1609_, 8, v_infoState_1581_);
lean_ctor_set(v_reuseFailAlloc_1609_, 9, v_snapshotTasks_1582_);
v___x_1604_ = v_reuseFailAlloc_1609_;
goto v_reusejp_1603_;
}
v_reusejp_1603_:
{
lean_object* v___x_1605_; lean_object* v___x_1607_; 
v___x_1605_ = lean_st_ref_put(v___y_1550_, v___x_1604_);
if (v_isShared_1560_ == 0)
{
lean_ctor_set(v___x_1559_, 0, v___x_1591_);
v___x_1607_ = v___x_1559_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1608_; 
v_reuseFailAlloc_1608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1608_, 0, v___x_1591_);
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
}
}
}
}
else
{
lean_object* v_a_1617_; lean_object* v___x_1619_; uint8_t v_isShared_1620_; uint8_t v_isSharedCheck_1624_; 
lean_dec(v___x_1555_);
lean_dec_ref(v_env_1554_);
lean_dec_ref(v_msg_1546_);
lean_dec(v_cls_1545_);
v_a_1617_ = lean_ctor_get(v___x_1556_, 0);
v_isSharedCheck_1624_ = !lean_is_exclusive(v___x_1556_);
if (v_isSharedCheck_1624_ == 0)
{
v___x_1619_ = v___x_1556_;
v_isShared_1620_ = v_isSharedCheck_1624_;
goto v_resetjp_1618_;
}
else
{
lean_inc(v_a_1617_);
lean_dec(v___x_1556_);
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
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__2___boxed(lean_object* v_cls_1625_, lean_object* v_msg_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_){
_start:
{
lean_object* v_res_1632_; 
v_res_1632_ = l_Lean_addTrace___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__2(v_cls_1625_, v_msg_1626_, v___y_1627_, v___y_1628_, v___y_1629_, v___y_1630_);
lean_dec(v___y_1630_);
lean_dec_ref(v___y_1629_);
lean_dec(v___y_1628_);
lean_dec_ref(v___y_1627_);
return v_res_1632_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00instBEqOption_beq___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__0_spec__0___redArg(lean_object* v_xs_1633_, lean_object* v_ys_1634_, lean_object* v_x_1635_){
_start:
{
lean_object* v_zero_1636_; uint8_t v_isZero_1637_; 
v_zero_1636_ = lean_unsigned_to_nat(0u);
v_isZero_1637_ = lean_nat_dec_eq(v_x_1635_, v_zero_1636_);
if (v_isZero_1637_ == 1)
{
lean_dec(v_x_1635_);
return v_isZero_1637_;
}
else
{
lean_object* v_one_1638_; lean_object* v_n_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; uint8_t v___x_1642_; 
v_one_1638_ = lean_unsigned_to_nat(1u);
v_n_1639_ = lean_nat_sub(v_x_1635_, v_one_1638_);
lean_dec(v_x_1635_);
v___x_1640_ = lean_array_fget_borrowed(v_xs_1633_, v_n_1639_);
v___x_1641_ = lean_array_fget_borrowed(v_ys_1634_, v_n_1639_);
v___x_1642_ = lean_nat_dec_eq(v___x_1640_, v___x_1641_);
if (v___x_1642_ == 0)
{
lean_dec(v_n_1639_);
return v___x_1642_;
}
else
{
v_x_1635_ = v_n_1639_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00instBEqOption_beq___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__0_spec__0___redArg___boxed(lean_object* v_xs_1644_, lean_object* v_ys_1645_, lean_object* v_x_1646_){
_start:
{
uint8_t v_res_1647_; lean_object* v_r_1648_; 
v_res_1647_ = l_Array_isEqvAux___at___00instBEqOption_beq___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__0_spec__0___redArg(v_xs_1644_, v_ys_1645_, v_x_1646_);
lean_dec_ref(v_ys_1645_);
lean_dec_ref(v_xs_1644_);
v_r_1648_ = lean_box(v_res_1647_);
return v_r_1648_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__0(lean_object* v_x_1649_, lean_object* v_x_1650_){
_start:
{
if (lean_obj_tag(v_x_1649_) == 0)
{
if (lean_obj_tag(v_x_1650_) == 0)
{
uint8_t v___x_1651_; 
v___x_1651_ = 1;
return v___x_1651_;
}
else
{
uint8_t v___x_1652_; 
v___x_1652_ = 0;
return v___x_1652_;
}
}
else
{
if (lean_obj_tag(v_x_1650_) == 0)
{
uint8_t v___x_1653_; 
v___x_1653_ = 0;
return v___x_1653_;
}
else
{
lean_object* v_val_1654_; lean_object* v_val_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; uint8_t v___x_1658_; 
v_val_1654_ = lean_ctor_get(v_x_1649_, 0);
v_val_1655_ = lean_ctor_get(v_x_1650_, 0);
v___x_1656_ = lean_array_get_size(v_val_1654_);
v___x_1657_ = lean_array_get_size(v_val_1655_);
v___x_1658_ = lean_nat_dec_eq(v___x_1656_, v___x_1657_);
if (v___x_1658_ == 0)
{
return v___x_1658_;
}
else
{
uint8_t v___x_1659_; 
v___x_1659_ = l_Array_isEqvAux___at___00instBEqOption_beq___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__0_spec__0___redArg(v_val_1654_, v_val_1655_, v___x_1656_);
return v___x_1659_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__0___boxed(lean_object* v_x_1660_, lean_object* v_x_1661_){
_start:
{
uint8_t v_res_1662_; lean_object* v_r_1663_; 
v_res_1662_ = l_instBEqOption_beq___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__0(v_x_1660_, v_x_1661_);
lean_dec(v_x_1661_);
lean_dec(v_x_1660_);
v_r_1663_ = lean_box(v_res_1662_);
return v_r_1663_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_saveSpecEntries___lam__0(lean_object* v_x_1666_, lean_object* v_specArgs_x3f_1667_){
_start:
{
lean_object* v___x_1668_; uint8_t v___x_1669_; 
v___x_1668_ = ((lean_object*)(l_Lean_Compiler_LCNF_saveSpecEntries___lam__0___closed__0));
v___x_1669_ = l_instBEqOption_beq___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__0(v_specArgs_x3f_1667_, v___x_1668_);
return v___x_1669_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_saveSpecEntries___lam__0___boxed(lean_object* v_x_1670_, lean_object* v_specArgs_x3f_1671_){
_start:
{
uint8_t v_res_1672_; lean_object* v_r_1673_; 
v_res_1672_ = l_Lean_Compiler_LCNF_saveSpecEntries___lam__0(v_x_1670_, v_specArgs_x3f_1671_);
lean_dec(v_specArgs_x3f_1671_);
lean_dec(v_x_1670_);
v_r_1673_ = lean_box(v_res_1672_);
return v_r_1673_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__1(lean_object* v_a_1674_, lean_object* v_a_1675_){
_start:
{
if (lean_obj_tag(v_a_1674_) == 0)
{
lean_object* v___x_1676_; 
v___x_1676_ = l_List_reverse___redArg(v_a_1675_);
return v___x_1676_;
}
else
{
lean_object* v_head_1677_; lean_object* v_tail_1678_; lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1695_; 
v_head_1677_ = lean_ctor_get(v_a_1674_, 0);
v_tail_1678_ = lean_ctor_get(v_a_1674_, 1);
v_isSharedCheck_1695_ = !lean_is_exclusive(v_a_1674_);
if (v_isSharedCheck_1695_ == 0)
{
v___x_1680_ = v_a_1674_;
v_isShared_1681_ = v_isSharedCheck_1695_;
goto v_resetjp_1679_;
}
else
{
lean_inc(v_tail_1678_);
lean_inc(v_head_1677_);
lean_dec(v_a_1674_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1695_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
lean_object* v___y_1683_; 
switch(lean_obj_tag(v_head_1677_))
{
case 0:
{
uint8_t v_weak_1688_; 
v_weak_1688_ = lean_ctor_get_uint8(v_head_1677_, 0);
lean_dec_ref_known(v_head_1677_, 0);
if (v_weak_1688_ == 0)
{
lean_object* v___x_1689_; 
v___x_1689_ = lean_obj_once(&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__2, &l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__2_once, _init_l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__2);
v___y_1683_ = v___x_1689_;
goto v___jp_1682_;
}
else
{
lean_object* v___x_1690_; 
v___x_1690_ = lean_obj_once(&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__5, &l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__5_once, _init_l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__5);
v___y_1683_ = v___x_1690_;
goto v___jp_1682_;
}
}
case 1:
{
lean_object* v___x_1691_; 
v___x_1691_ = lean_obj_once(&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__8, &l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__8_once, _init_l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__8);
v___y_1683_ = v___x_1691_;
goto v___jp_1682_;
}
case 2:
{
lean_object* v___x_1692_; 
v___x_1692_ = lean_obj_once(&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__11, &l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__11_once, _init_l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__11);
v___y_1683_ = v___x_1692_;
goto v___jp_1682_;
}
case 3:
{
lean_object* v___x_1693_; 
v___x_1693_ = lean_obj_once(&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__14, &l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__14_once, _init_l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__14);
v___y_1683_ = v___x_1693_;
goto v___jp_1682_;
}
default: 
{
lean_object* v___x_1694_; 
v___x_1694_ = lean_obj_once(&l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__17, &l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__17_once, _init_l_Lean_Compiler_LCNF_instToMessageDataSpecParamInfo___lam__0___closed__17);
v___y_1683_ = v___x_1694_;
goto v___jp_1682_;
}
}
v___jp_1682_:
{
lean_object* v___x_1685_; 
lean_inc_ref(v___y_1683_);
if (v_isShared_1681_ == 0)
{
lean_ctor_set(v___x_1680_, 1, v_a_1675_);
lean_ctor_set(v___x_1680_, 0, v___y_1683_);
v___x_1685_ = v___x_1680_;
goto v_reusejp_1684_;
}
else
{
lean_object* v_reuseFailAlloc_1687_; 
v_reuseFailAlloc_1687_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1687_, 0, v___y_1683_);
lean_ctor_set(v_reuseFailAlloc_1687_, 1, v_a_1675_);
v___x_1685_ = v_reuseFailAlloc_1687_;
goto v_reusejp_1684_;
}
v_reusejp_1684_:
{
v_a_1674_ = v_tail_1678_;
v_a_1675_ = v___x_1685_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___lam__0(lean_object* v_addEntryFn_1696_, lean_object* v_a_1697_, lean_object* v_s_1698_){
_start:
{
lean_object* v_importedEntries_1699_; lean_object* v_state_1700_; lean_object* v___x_1702_; uint8_t v_isShared_1703_; uint8_t v_isSharedCheck_1708_; 
v_importedEntries_1699_ = lean_ctor_get(v_s_1698_, 0);
v_state_1700_ = lean_ctor_get(v_s_1698_, 1);
v_isSharedCheck_1708_ = !lean_is_exclusive(v_s_1698_);
if (v_isSharedCheck_1708_ == 0)
{
v___x_1702_ = v_s_1698_;
v_isShared_1703_ = v_isSharedCheck_1708_;
goto v_resetjp_1701_;
}
else
{
lean_inc(v_state_1700_);
lean_inc(v_importedEntries_1699_);
lean_dec(v_s_1698_);
v___x_1702_ = lean_box(0);
v_isShared_1703_ = v_isSharedCheck_1708_;
goto v_resetjp_1701_;
}
v_resetjp_1701_:
{
lean_object* v_state_1704_; lean_object* v___x_1706_; 
v_state_1704_ = lean_apply_2(v_addEntryFn_1696_, v_state_1700_, v_a_1697_);
if (v_isShared_1703_ == 0)
{
lean_ctor_set(v___x_1702_, 1, v_state_1704_);
v___x_1706_ = v___x_1702_;
goto v_reusejp_1705_;
}
else
{
lean_object* v_reuseFailAlloc_1707_; 
v_reuseFailAlloc_1707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1707_, 0, v_importedEntries_1699_);
lean_ctor_set(v_reuseFailAlloc_1707_, 1, v_state_1704_);
v___x_1706_ = v_reuseFailAlloc_1707_;
goto v_reusejp_1705_;
}
v_reusejp_1705_:
{
return v___x_1706_;
}
}
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__0(void){
_start:
{
lean_object* v___x_1709_; lean_object* v___x_1710_; 
v___x_1709_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedSpecState_default___closed__0, &l_Lean_Compiler_LCNF_instInhabitedSpecState_default___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedSpecState_default___closed__0);
v___x_1710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1710_, 0, v___x_1709_);
return v___x_1710_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__1(void){
_start:
{
lean_object* v___x_1711_; lean_object* v___x_1712_; 
v___x_1711_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__0);
v___x_1712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1712_, 0, v___x_1711_);
lean_ctor_set(v___x_1712_, 1, v___x_1711_);
return v___x_1712_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__7(void){
_start:
{
lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; 
v___x_1722_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__4));
v___x_1723_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__6));
v___x_1724_ = l_Lean_Name_append(v___x_1723_, v___x_1722_);
return v___x_1724_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__9(void){
_start:
{
lean_object* v___x_1726_; lean_object* v___x_1727_; 
v___x_1726_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__8));
v___x_1727_ = l_Lean_stringToMessageData(v___x_1726_);
return v___x_1727_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3(lean_object* v_as_1728_, size_t v_sz_1729_, size_t v_i_1730_, lean_object* v_b_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_){
_start:
{
lean_object* v_a_1738_; uint8_t v___x_1742_; 
v___x_1742_ = lean_usize_dec_lt(v_i_1730_, v_sz_1729_);
if (v___x_1742_ == 0)
{
lean_object* v___x_1743_; 
v___x_1743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1743_, 0, v_b_1731_);
return v___x_1743_;
}
else
{
lean_object* v_a_1744_; lean_object* v_declName_1745_; lean_object* v_paramsInfo_1746_; lean_object* v___x_1747_; lean_object* v___y_1749_; lean_object* v_nextMacroScope_1750_; lean_object* v_ngen_1751_; lean_object* v_auxDeclNGen_1752_; lean_object* v_traceState_1753_; lean_object* v_recordedDeps_1754_; lean_object* v_messages_1755_; lean_object* v_infoState_1756_; lean_object* v_snapshotTasks_1757_; lean_object* v___y_1758_; lean_object* v___x_1762_; lean_object* v___x_1763_; uint8_t v___x_1764_; 
v_a_1744_ = lean_array_uget_borrowed(v_as_1728_, v_i_1730_);
v_declName_1745_ = lean_ctor_get(v_a_1744_, 0);
v_paramsInfo_1746_ = lean_ctor_get(v_a_1744_, 1);
v___x_1747_ = lean_box(0);
v___x_1762_ = lean_unsigned_to_nat(0u);
v___x_1763_ = lean_array_get_size(v_paramsInfo_1746_);
v___x_1764_ = lean_nat_dec_lt(v___x_1762_, v___x_1763_);
if (v___x_1764_ == 0)
{
v_a_1738_ = v___x_1747_;
goto v___jp_1737_;
}
else
{
if (v___x_1764_ == 0)
{
v_a_1738_ = v___x_1747_;
goto v___jp_1737_;
}
else
{
size_t v___x_1765_; size_t v___x_1766_; uint8_t v___x_1767_; lean_object* v___y_1769_; 
v___x_1765_ = ((size_t)0ULL);
v___x_1766_ = lean_usize_of_nat(v___x_1763_);
v___x_1767_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_computeSpecEntries_spec__0(v_paramsInfo_1746_, v___x_1765_, v___x_1766_);
if (v___x_1767_ == 0)
{
v_a_1738_ = v___x_1747_;
goto v___jp_1737_;
}
else
{
lean_object* v_toCold_1790_; lean_object* v_options_1791_; uint8_t v_hasTrace_1792_; 
v_toCold_1790_ = lean_ctor_get(v___y_1734_, 0);
v_options_1791_ = lean_ctor_get(v_toCold_1790_, 2);
v_hasTrace_1792_ = lean_ctor_get_uint8(v_options_1791_, sizeof(void*)*1);
if (v_hasTrace_1792_ == 0)
{
v___y_1769_ = v___y_1735_;
goto v___jp_1768_;
}
else
{
lean_object* v_inheritedTraceOptions_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; uint8_t v___x_1796_; 
v_inheritedTraceOptions_1793_ = lean_ctor_get(v_toCold_1790_, 11);
v___x_1794_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__4));
v___x_1795_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__7);
v___x_1796_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1793_, v_options_1791_, v___x_1795_);
if (v___x_1796_ == 0)
{
v___y_1769_ = v___y_1735_;
goto v___jp_1768_;
}
else
{
lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; 
lean_inc(v_declName_1745_);
v___x_1797_ = l_Lean_MessageData_ofName(v_declName_1745_);
v___x_1798_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__9, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__9);
v___x_1799_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1799_, 0, v___x_1797_);
lean_ctor_set(v___x_1799_, 1, v___x_1798_);
lean_inc_ref(v_paramsInfo_1746_);
v___x_1800_ = lean_array_to_list(v_paramsInfo_1746_);
v___x_1801_ = lean_box(0);
v___x_1802_ = l_List_mapTR_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__1(v___x_1800_, v___x_1801_);
v___x_1803_ = l_Lean_MessageData_ofList(v___x_1802_);
v___x_1804_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1804_, 0, v___x_1799_);
lean_ctor_set(v___x_1804_, 1, v___x_1803_);
v___x_1805_ = l_Lean_addTrace___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__2(v___x_1794_, v___x_1804_, v___y_1732_, v___y_1733_, v___y_1734_, v___y_1735_);
if (lean_obj_tag(v___x_1805_) == 0)
{
lean_dec_ref_known(v___x_1805_, 1);
v___y_1769_ = v___y_1735_;
goto v___jp_1768_;
}
else
{
return v___x_1805_;
}
}
}
}
v___jp_1768_:
{
lean_object* v___x_1770_; lean_object* v_env_1771_; lean_object* v_nextMacroScope_1772_; lean_object* v_ngen_1773_; lean_object* v_auxDeclNGen_1774_; lean_object* v_traceState_1775_; lean_object* v_recordedDeps_1776_; lean_object* v_messages_1777_; lean_object* v_infoState_1778_; lean_object* v_snapshotTasks_1779_; lean_object* v___x_1780_; lean_object* v_toEnvExtension_1781_; lean_object* v_addEntryFn_1782_; lean_object* v_asyncMode_1783_; uint8_t v_logWrites_1784_; lean_object* v___f_1785_; lean_object* v___x_1786_; 
v___x_1770_ = lean_st_ref_take(v___y_1769_);
v_env_1771_ = lean_ctor_get(v___x_1770_, 0);
lean_inc_ref(v_env_1771_);
v_nextMacroScope_1772_ = lean_ctor_get(v___x_1770_, 1);
lean_inc(v_nextMacroScope_1772_);
v_ngen_1773_ = lean_ctor_get(v___x_1770_, 2);
lean_inc_ref(v_ngen_1773_);
v_auxDeclNGen_1774_ = lean_ctor_get(v___x_1770_, 3);
lean_inc_ref(v_auxDeclNGen_1774_);
v_traceState_1775_ = lean_ctor_get(v___x_1770_, 4);
lean_inc_ref(v_traceState_1775_);
v_recordedDeps_1776_ = lean_ctor_get(v___x_1770_, 6);
lean_inc_ref(v_recordedDeps_1776_);
v_messages_1777_ = lean_ctor_get(v___x_1770_, 7);
lean_inc_ref(v_messages_1777_);
v_infoState_1778_ = lean_ctor_get(v___x_1770_, 8);
lean_inc_ref(v_infoState_1778_);
v_snapshotTasks_1779_ = lean_ctor_get(v___x_1770_, 9);
lean_inc_ref(v_snapshotTasks_1779_);
lean_dec(v___x_1770_);
v___x_1780_ = l_Lean_Compiler_LCNF_specExtension;
v_toEnvExtension_1781_ = lean_ctor_get(v___x_1780_, 0);
v_addEntryFn_1782_ = lean_ctor_get(v___x_1780_, 3);
v_asyncMode_1783_ = lean_ctor_get(v_toEnvExtension_1781_, 2);
v_logWrites_1784_ = lean_ctor_get_uint8(v_toEnvExtension_1781_, sizeof(void*)*6);
lean_inc(v_a_1744_);
lean_inc(v_addEntryFn_1782_);
v___f_1785_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___lam__0), 3, 2);
lean_closure_set(v___f_1785_, 0, v_addEntryFn_1782_);
lean_closure_set(v___f_1785_, 1, v_a_1744_);
v___x_1786_ = lean_box(0);
if (v_logWrites_1784_ == 0)
{
lean_object* v___x_1787_; 
lean_inc_ref(v_toEnvExtension_1781_);
v___x_1787_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1781_, v_env_1771_, v___f_1785_, v_asyncMode_1783_, v___x_1786_, v___x_1767_);
v___y_1749_ = v___y_1769_;
v_nextMacroScope_1750_ = v_nextMacroScope_1772_;
v_ngen_1751_ = v_ngen_1773_;
v_auxDeclNGen_1752_ = v_auxDeclNGen_1774_;
v_traceState_1753_ = v_traceState_1775_;
v_recordedDeps_1754_ = v_recordedDeps_1776_;
v_messages_1755_ = v_messages_1777_;
v_infoState_1756_ = v_infoState_1778_;
v_snapshotTasks_1757_ = v_snapshotTasks_1779_;
v___y_1758_ = v___x_1787_;
goto v___jp_1748_;
}
else
{
lean_object* v___x_1788_; lean_object* v___x_1789_; 
lean_inc_ref_n(v_toEnvExtension_1781_, 2);
v___x_1788_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_1781_, v_env_1771_);
lean_dec_ref(v_env_1771_);
v___x_1789_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1781_, v___x_1788_, v___f_1785_, v_asyncMode_1783_, v___x_1786_, v___x_1767_);
v___y_1749_ = v___y_1769_;
v_nextMacroScope_1750_ = v_nextMacroScope_1772_;
v_ngen_1751_ = v_ngen_1773_;
v_auxDeclNGen_1752_ = v_auxDeclNGen_1774_;
v_traceState_1753_ = v_traceState_1775_;
v_recordedDeps_1754_ = v_recordedDeps_1776_;
v_messages_1755_ = v_messages_1777_;
v_infoState_1756_ = v_infoState_1778_;
v_snapshotTasks_1757_ = v_snapshotTasks_1779_;
v___y_1758_ = v___x_1789_;
goto v___jp_1748_;
}
}
}
}
v___jp_1748_:
{
lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; 
v___x_1759_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__1);
v___x_1760_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_1760_, 0, v___y_1758_);
lean_ctor_set(v___x_1760_, 1, v_nextMacroScope_1750_);
lean_ctor_set(v___x_1760_, 2, v_ngen_1751_);
lean_ctor_set(v___x_1760_, 3, v_auxDeclNGen_1752_);
lean_ctor_set(v___x_1760_, 4, v_traceState_1753_);
lean_ctor_set(v___x_1760_, 5, v___x_1759_);
lean_ctor_set(v___x_1760_, 6, v_recordedDeps_1754_);
lean_ctor_set(v___x_1760_, 7, v_messages_1755_);
lean_ctor_set(v___x_1760_, 8, v_infoState_1756_);
lean_ctor_set(v___x_1760_, 9, v_snapshotTasks_1757_);
v___x_1761_ = lean_st_ref_put(v___y_1749_, v___x_1760_);
v_a_1738_ = v___x_1747_;
goto v___jp_1737_;
}
}
v___jp_1737_:
{
size_t v___x_1739_; size_t v___x_1740_; 
v___x_1739_ = ((size_t)1ULL);
v___x_1740_ = lean_usize_add(v_i_1730_, v___x_1739_);
v_i_1730_ = v___x_1740_;
v_b_1731_ = v_a_1738_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___boxed(lean_object* v_as_1806_, lean_object* v_sz_1807_, lean_object* v_i_1808_, lean_object* v_b_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_){
_start:
{
size_t v_sz_boxed_1815_; size_t v_i_boxed_1816_; lean_object* v_res_1817_; 
v_sz_boxed_1815_ = lean_unbox_usize(v_sz_1807_);
lean_dec(v_sz_1807_);
v_i_boxed_1816_ = lean_unbox_usize(v_i_1808_);
lean_dec(v_i_1808_);
v_res_1817_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3(v_as_1806_, v_sz_boxed_1815_, v_i_boxed_1816_, v_b_1809_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_);
lean_dec(v___y_1813_);
lean_dec_ref(v___y_1812_);
lean_dec(v___y_1811_);
lean_dec_ref(v___y_1810_);
lean_dec_ref(v_as_1806_);
return v_res_1817_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_saveSpecEntries(lean_object* v_decls_1819_, lean_object* v_a_1820_, lean_object* v_a_1821_, lean_object* v_a_1822_, lean_object* v_a_1823_){
_start:
{
lean_object* v___f_1825_; lean_object* v___x_1826_; uint8_t v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; 
v___f_1825_ = ((lean_object*)(l_Lean_Compiler_LCNF_saveSpecEntries___closed__0));
v___x_1826_ = lean_array_get_size(v_decls_1819_);
v___x_1827_ = 0;
v___x_1828_ = lean_box(v___x_1827_);
v___x_1829_ = lean_mk_array(v___x_1826_, v___x_1828_);
v___x_1830_ = l_Lean_Compiler_LCNF_computeSpecEntries(v_decls_1819_, v___f_1825_, v___x_1829_, v_a_1820_, v_a_1821_, v_a_1822_, v_a_1823_);
lean_dec_ref(v___x_1829_);
if (lean_obj_tag(v___x_1830_) == 0)
{
lean_object* v_a_1831_; lean_object* v___x_1832_; size_t v_sz_1833_; size_t v___x_1834_; lean_object* v___x_1835_; 
v_a_1831_ = lean_ctor_get(v___x_1830_, 0);
lean_inc(v_a_1831_);
lean_dec_ref_known(v___x_1830_, 1);
v___x_1832_ = lean_box(0);
v_sz_1833_ = lean_array_size(v_a_1831_);
v___x_1834_ = ((size_t)0ULL);
v___x_1835_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3(v_a_1831_, v_sz_1833_, v___x_1834_, v___x_1832_, v_a_1820_, v_a_1821_, v_a_1822_, v_a_1823_);
lean_dec(v_a_1831_);
if (lean_obj_tag(v___x_1835_) == 0)
{
lean_object* v___x_1837_; uint8_t v_isShared_1838_; uint8_t v_isSharedCheck_1842_; 
v_isSharedCheck_1842_ = !lean_is_exclusive(v___x_1835_);
if (v_isSharedCheck_1842_ == 0)
{
lean_object* v_unused_1843_; 
v_unused_1843_ = lean_ctor_get(v___x_1835_, 0);
lean_dec(v_unused_1843_);
v___x_1837_ = v___x_1835_;
v_isShared_1838_ = v_isSharedCheck_1842_;
goto v_resetjp_1836_;
}
else
{
lean_dec(v___x_1835_);
v___x_1837_ = lean_box(0);
v_isShared_1838_ = v_isSharedCheck_1842_;
goto v_resetjp_1836_;
}
v_resetjp_1836_:
{
lean_object* v___x_1840_; 
if (v_isShared_1838_ == 0)
{
lean_ctor_set(v___x_1837_, 0, v___x_1832_);
v___x_1840_ = v___x_1837_;
goto v_reusejp_1839_;
}
else
{
lean_object* v_reuseFailAlloc_1841_; 
v_reuseFailAlloc_1841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1841_, 0, v___x_1832_);
v___x_1840_ = v_reuseFailAlloc_1841_;
goto v_reusejp_1839_;
}
v_reusejp_1839_:
{
return v___x_1840_;
}
}
}
else
{
return v___x_1835_;
}
}
else
{
lean_object* v_a_1844_; lean_object* v___x_1846_; uint8_t v_isShared_1847_; uint8_t v_isSharedCheck_1851_; 
v_a_1844_ = lean_ctor_get(v___x_1830_, 0);
v_isSharedCheck_1851_ = !lean_is_exclusive(v___x_1830_);
if (v_isSharedCheck_1851_ == 0)
{
v___x_1846_ = v___x_1830_;
v_isShared_1847_ = v_isSharedCheck_1851_;
goto v_resetjp_1845_;
}
else
{
lean_inc(v_a_1844_);
lean_dec(v___x_1830_);
v___x_1846_ = lean_box(0);
v_isShared_1847_ = v_isSharedCheck_1851_;
goto v_resetjp_1845_;
}
v_resetjp_1845_:
{
lean_object* v___x_1849_; 
if (v_isShared_1847_ == 0)
{
v___x_1849_ = v___x_1846_;
goto v_reusejp_1848_;
}
else
{
lean_object* v_reuseFailAlloc_1850_; 
v_reuseFailAlloc_1850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1850_, 0, v_a_1844_);
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
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_saveSpecEntries___boxed(lean_object* v_decls_1852_, lean_object* v_a_1853_, lean_object* v_a_1854_, lean_object* v_a_1855_, lean_object* v_a_1856_, lean_object* v_a_1857_){
_start:
{
lean_object* v_res_1858_; 
v_res_1858_ = l_Lean_Compiler_LCNF_saveSpecEntries(v_decls_1852_, v_a_1853_, v_a_1854_, v_a_1855_, v_a_1856_);
lean_dec(v_a_1856_);
lean_dec_ref(v_a_1855_);
lean_dec(v_a_1854_);
lean_dec_ref(v_a_1853_);
return v_res_1858_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00instBEqOption_beq___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__0_spec__0(lean_object* v_xs_1859_, lean_object* v_ys_1860_, lean_object* v_hsz_1861_, lean_object* v_x_1862_, lean_object* v_x_1863_){
_start:
{
uint8_t v___x_1864_; 
v___x_1864_ = l_Array_isEqvAux___at___00instBEqOption_beq___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__0_spec__0___redArg(v_xs_1859_, v_ys_1860_, v_x_1862_);
return v___x_1864_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00instBEqOption_beq___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__0_spec__0___boxed(lean_object* v_xs_1865_, lean_object* v_ys_1866_, lean_object* v_hsz_1867_, lean_object* v_x_1868_, lean_object* v_x_1869_){
_start:
{
uint8_t v_res_1870_; lean_object* v_r_1871_; 
v_res_1870_ = l_Array_isEqvAux___at___00instBEqOption_beq___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__0_spec__0(v_xs_1865_, v_ys_1866_, v_hsz_1867_, v_x_1868_, v_x_1869_);
lean_dec_ref(v_ys_1866_);
lean_dec_ref(v_xs_1865_);
v_r_1871_ = lean_box(v_res_1870_);
return v_r_1871_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__1___redArg(lean_object* v_as_1872_, lean_object* v_k_1873_, lean_object* v_x_1874_, lean_object* v_x_1875_){
_start:
{
lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v_m_1878_; lean_object* v_a_1879_; uint8_t v___x_1880_; 
v___x_1876_ = lean_nat_add(v_x_1874_, v_x_1875_);
v___x_1877_ = lean_unsigned_to_nat(1u);
v_m_1878_ = lean_nat_shiftr(v___x_1876_, v___x_1877_);
lean_dec(v___x_1876_);
v_a_1879_ = lean_array_fget_borrowed(v_as_1872_, v_m_1878_);
v___x_1880_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0___redArg___lam__0(v_a_1879_, v_k_1873_);
if (v___x_1880_ == 0)
{
uint8_t v___x_1881_; 
lean_dec(v_x_1875_);
v___x_1881_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2__spec__0___redArg___lam__0(v_k_1873_, v_a_1879_);
if (v___x_1881_ == 0)
{
lean_object* v___x_1882_; 
lean_dec(v_m_1878_);
lean_dec(v_x_1874_);
lean_inc(v_a_1879_);
v___x_1882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1882_, 0, v_a_1879_);
return v___x_1882_;
}
else
{
lean_object* v___x_1883_; uint8_t v___x_1884_; 
v___x_1883_ = lean_unsigned_to_nat(0u);
v___x_1884_ = lean_nat_dec_eq(v_m_1878_, v___x_1883_);
if (v___x_1884_ == 0)
{
lean_object* v___x_1885_; uint8_t v___x_1886_; 
v___x_1885_ = lean_nat_sub(v_m_1878_, v___x_1877_);
lean_dec(v_m_1878_);
v___x_1886_ = lean_nat_dec_lt(v___x_1885_, v_x_1874_);
if (v___x_1886_ == 0)
{
v_x_1875_ = v___x_1885_;
goto _start;
}
else
{
lean_object* v___x_1888_; 
lean_dec(v___x_1885_);
lean_dec(v_x_1874_);
v___x_1888_ = lean_box(0);
return v___x_1888_;
}
}
else
{
lean_object* v___x_1889_; 
lean_dec(v_m_1878_);
lean_dec(v_x_1874_);
v___x_1889_ = lean_box(0);
return v___x_1889_;
}
}
}
else
{
lean_object* v___x_1890_; uint8_t v___x_1891_; 
lean_dec(v_x_1874_);
v___x_1890_ = lean_nat_add(v_m_1878_, v___x_1877_);
lean_dec(v_m_1878_);
v___x_1891_ = lean_nat_dec_le(v___x_1890_, v_x_1875_);
if (v___x_1891_ == 0)
{
lean_object* v___x_1892_; 
lean_dec(v___x_1890_);
lean_dec(v_x_1875_);
v___x_1892_ = lean_box(0);
return v___x_1892_;
}
else
{
v_x_1874_ = v___x_1890_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__1___redArg___boxed(lean_object* v_as_1894_, lean_object* v_k_1895_, lean_object* v_x_1896_, lean_object* v_x_1897_){
_start:
{
lean_object* v_res_1898_; 
v_res_1898_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__1___redArg(v_as_1894_, v_k_1895_, v_x_1896_, v_x_1897_);
lean_dec_ref(v_k_1895_);
lean_dec_ref(v_as_1894_);
return v_res_1898_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1899_, lean_object* v_vals_1900_, lean_object* v_i_1901_, lean_object* v_k_1902_){
_start:
{
lean_object* v___x_1903_; uint8_t v___x_1904_; 
v___x_1903_ = lean_array_get_size(v_keys_1899_);
v___x_1904_ = lean_nat_dec_lt(v_i_1901_, v___x_1903_);
if (v___x_1904_ == 0)
{
lean_object* v___x_1905_; 
lean_dec(v_i_1901_);
v___x_1905_ = lean_box(0);
return v___x_1905_;
}
else
{
lean_object* v_k_x27_1906_; uint8_t v___x_1907_; 
v_k_x27_1906_ = lean_array_fget_borrowed(v_keys_1899_, v_i_1901_);
v___x_1907_ = lean_name_eq(v_k_1902_, v_k_x27_1906_);
if (v___x_1907_ == 0)
{
lean_object* v___x_1908_; lean_object* v___x_1909_; 
v___x_1908_ = lean_unsigned_to_nat(1u);
v___x_1909_ = lean_nat_add(v_i_1901_, v___x_1908_);
lean_dec(v_i_1901_);
v_i_1901_ = v___x_1909_;
goto _start;
}
else
{
lean_object* v___x_1911_; lean_object* v___x_1912_; 
v___x_1911_ = lean_array_fget_borrowed(v_vals_1900_, v_i_1901_);
lean_dec(v_i_1901_);
lean_inc(v___x_1911_);
v___x_1912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1912_, 0, v___x_1911_);
return v___x_1912_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1913_, lean_object* v_vals_1914_, lean_object* v_i_1915_, lean_object* v_k_1916_){
_start:
{
lean_object* v_res_1917_; 
v_res_1917_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0_spec__0_spec__1___redArg(v_keys_1913_, v_vals_1914_, v_i_1915_, v_k_1916_);
lean_dec(v_k_1916_);
lean_dec_ref(v_vals_1914_);
lean_dec_ref(v_keys_1913_);
return v_res_1917_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0_spec__0___redArg(lean_object* v_x_1918_, size_t v_x_1919_, lean_object* v_x_1920_){
_start:
{
if (lean_obj_tag(v_x_1918_) == 0)
{
lean_object* v_es_1921_; lean_object* v___x_1922_; size_t v___x_1923_; size_t v___x_1924_; lean_object* v_j_1925_; lean_object* v___x_1926_; 
v_es_1921_ = lean_ctor_get(v_x_1918_, 0);
v___x_1922_ = lean_box(2);
v___x_1923_ = ((size_t)31ULL);
v___x_1924_ = lean_usize_land(v_x_1919_, v___x_1923_);
v_j_1925_ = lean_usize_to_nat(v___x_1924_);
v___x_1926_ = lean_array_get_borrowed(v___x_1922_, v_es_1921_, v_j_1925_);
lean_dec(v_j_1925_);
switch(lean_obj_tag(v___x_1926_))
{
case 0:
{
lean_object* v_key_1927_; lean_object* v_val_1928_; uint8_t v___x_1929_; 
v_key_1927_ = lean_ctor_get(v___x_1926_, 0);
v_val_1928_ = lean_ctor_get(v___x_1926_, 1);
v___x_1929_ = lean_name_eq(v_x_1920_, v_key_1927_);
if (v___x_1929_ == 0)
{
lean_object* v___x_1930_; 
v___x_1930_ = lean_box(0);
return v___x_1930_;
}
else
{
lean_object* v___x_1931_; 
lean_inc(v_val_1928_);
v___x_1931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1931_, 0, v_val_1928_);
return v___x_1931_;
}
}
case 1:
{
lean_object* v_node_1932_; size_t v___x_1933_; size_t v___x_1934_; 
v_node_1932_ = lean_ctor_get(v___x_1926_, 0);
v___x_1933_ = ((size_t)5ULL);
v___x_1934_ = lean_usize_shift_right(v_x_1919_, v___x_1933_);
v_x_1918_ = v_node_1932_;
v_x_1919_ = v___x_1934_;
goto _start;
}
default: 
{
lean_object* v___x_1936_; 
v___x_1936_ = lean_box(0);
return v___x_1936_;
}
}
}
else
{
lean_object* v_ks_1937_; lean_object* v_vs_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; 
v_ks_1937_ = lean_ctor_get(v_x_1918_, 0);
v_vs_1938_ = lean_ctor_get(v_x_1918_, 1);
v___x_1939_ = lean_unsigned_to_nat(0u);
v___x_1940_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0_spec__0_spec__1___redArg(v_ks_1937_, v_vs_1938_, v___x_1939_, v_x_1920_);
return v___x_1940_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_1941_, lean_object* v_x_1942_, lean_object* v_x_1943_){
_start:
{
size_t v_x_418__boxed_1944_; lean_object* v_res_1945_; 
v_x_418__boxed_1944_ = lean_unbox_usize(v_x_1942_);
lean_dec(v_x_1942_);
v_res_1945_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0_spec__0___redArg(v_x_1941_, v_x_418__boxed_1944_, v_x_1943_);
lean_dec(v_x_1943_);
lean_dec_ref(v_x_1941_);
return v_res_1945_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0___redArg(lean_object* v_x_1946_, lean_object* v_x_1947_){
_start:
{
uint64_t v___y_1949_; 
if (lean_obj_tag(v_x_1947_) == 0)
{
uint64_t v___x_1952_; 
v___x_1952_ = 1723ULL;
v___y_1949_ = v___x_1952_;
goto v___jp_1948_;
}
else
{
uint64_t v_hash_1953_; 
v_hash_1953_ = lean_ctor_get_uint64(v_x_1947_, sizeof(void*)*2);
v___y_1949_ = v_hash_1953_;
goto v___jp_1948_;
}
v___jp_1948_:
{
size_t v___x_1950_; lean_object* v___x_1951_; 
v___x_1950_ = lean_uint64_to_usize(v___y_1949_);
v___x_1951_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0_spec__0___redArg(v_x_1946_, v___x_1950_, v_x_1947_);
return v___x_1951_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0___redArg___boxed(lean_object* v_x_1954_, lean_object* v_x_1955_){
_start:
{
lean_object* v_res_1956_; 
v_res_1956_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0___redArg(v_x_1954_, v_x_1955_);
lean_dec(v_x_1955_);
lean_dec_ref(v_x_1954_);
return v_res_1956_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_getSpecEntryCore_x3f___closed__0(void){
_start:
{
lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; 
v___x_1957_ = l_Lean_Compiler_LCNF_instInhabitedSpecState_default;
v___x_1958_ = lean_box(0);
v___x_1959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1959_, 0, v___x_1958_);
lean_ctor_set(v___x_1959_, 1, v___x_1957_);
return v___x_1959_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getSpecEntryCore_x3f(lean_object* v_env_1960_, lean_object* v_declName_1961_){
_start:
{
lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1972_; 
v___x_1962_ = lean_obj_once(&l_Lean_Compiler_LCNF_getSpecEntryCore_x3f___closed__0, &l_Lean_Compiler_LCNF_getSpecEntryCore_x3f___closed__0_once, _init_l_Lean_Compiler_LCNF_getSpecEntryCore_x3f___closed__0);
v___x_1963_ = l_Lean_Compiler_LCNF_specExtension;
v___x_1972_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1960_, v_declName_1961_);
if (lean_obj_tag(v___x_1972_) == 0)
{
goto v___jp_1964_;
}
else
{
lean_object* v_val_1973_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; uint8_t v___x_1990_; 
v_val_1973_ = lean_ctor_get(v___x_1972_, 0);
lean_inc(v_val_1973_);
lean_dec_ref_known(v___x_1972_, 1);
v___x_1987_ = l_Lean_PersistentEnvExtension_getModuleIREntries___redArg(v___x_1962_, v___x_1963_, v_env_1960_, v_val_1973_);
v___x_1988_ = lean_unsigned_to_nat(0u);
v___x_1989_ = lean_array_get_size(v___x_1987_);
v___x_1990_ = lean_nat_dec_lt(v___x_1988_, v___x_1989_);
if (v___x_1990_ == 0)
{
lean_dec_ref(v___x_1987_);
goto v___jp_1974_;
}
else
{
lean_object* v___x_1991_; lean_object* v___x_1992_; uint8_t v___x_1993_; 
v___x_1991_ = lean_unsigned_to_nat(1u);
v___x_1992_ = lean_nat_sub(v___x_1989_, v___x_1991_);
v___x_1993_ = lean_nat_dec_le(v___x_1988_, v___x_1992_);
if (v___x_1993_ == 0)
{
lean_dec(v___x_1992_);
lean_dec_ref(v___x_1987_);
goto v___jp_1974_;
}
else
{
lean_object* v___x_1994_; uint8_t v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; 
v___x_1994_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_findAtSorted_x3f___closed__0));
v___x_1995_ = 0;
lean_inc(v_declName_1961_);
v___x_1996_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1996_, 0, v_declName_1961_);
lean_ctor_set(v___x_1996_, 1, v___x_1994_);
lean_ctor_set_uint8(v___x_1996_, sizeof(void*)*2, v___x_1995_);
v___x_1997_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__1___redArg(v___x_1987_, v___x_1996_, v___x_1988_, v___x_1992_);
lean_dec_ref_known(v___x_1996_, 2);
lean_dec_ref(v___x_1987_);
if (lean_obj_tag(v___x_1997_) == 0)
{
goto v___jp_1974_;
}
else
{
lean_dec(v_val_1973_);
lean_dec(v_declName_1961_);
lean_dec_ref(v_env_1960_);
return v___x_1997_;
}
}
}
v___jp_1974_:
{
uint8_t v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; uint8_t v___x_1979_; 
v___x_1975_ = 0;
v___x_1976_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_1962_, v___x_1963_, v_env_1960_, v_val_1973_, v___x_1975_);
lean_dec(v_val_1973_);
v___x_1977_ = lean_unsigned_to_nat(0u);
v___x_1978_ = lean_array_get_size(v___x_1976_);
v___x_1979_ = lean_nat_dec_lt(v___x_1977_, v___x_1978_);
if (v___x_1979_ == 0)
{
lean_dec_ref(v___x_1976_);
goto v___jp_1964_;
}
else
{
lean_object* v___x_1980_; lean_object* v___x_1981_; uint8_t v___x_1982_; 
v___x_1980_ = lean_unsigned_to_nat(1u);
v___x_1981_ = lean_nat_sub(v___x_1978_, v___x_1980_);
v___x_1982_ = lean_nat_dec_le(v___x_1977_, v___x_1981_);
if (v___x_1982_ == 0)
{
lean_dec(v___x_1981_);
lean_dec_ref(v___x_1976_);
goto v___jp_1964_;
}
else
{
lean_object* v___x_1983_; uint8_t v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; 
v___x_1983_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_findAtSorted_x3f___closed__0));
v___x_1984_ = 0;
lean_inc(v_declName_1961_);
v___x_1985_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1985_, 0, v_declName_1961_);
lean_ctor_set(v___x_1985_, 1, v___x_1983_);
lean_ctor_set_uint8(v___x_1985_, sizeof(void*)*2, v___x_1984_);
v___x_1986_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__1___redArg(v___x_1976_, v___x_1985_, v___x_1977_, v___x_1981_);
lean_dec_ref_known(v___x_1985_, 2);
lean_dec_ref(v___x_1976_);
if (lean_obj_tag(v___x_1986_) == 0)
{
goto v___jp_1964_;
}
else
{
lean_dec(v_declName_1961_);
lean_dec_ref(v_env_1960_);
return v___x_1986_;
}
}
}
}
}
v___jp_1964_:
{
lean_object* v_toEnvExtension_1965_; lean_object* v_asyncMode_1966_; lean_object* v___x_1967_; uint8_t v___x_1968_; lean_object* v___x_1969_; lean_object* v_snd_1970_; lean_object* v___x_1971_; 
v_toEnvExtension_1965_ = lean_ctor_get(v___x_1963_, 0);
v_asyncMode_1966_ = lean_ctor_get(v_toEnvExtension_1965_, 2);
v___x_1967_ = lean_box(0);
v___x_1968_ = 0;
v___x_1969_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1962_, v___x_1963_, v_env_1960_, v_asyncMode_1966_, v___x_1967_, v___x_1968_);
v_snd_1970_ = lean_ctor_get(v___x_1969_, 1);
lean_inc(v_snd_1970_);
lean_dec(v___x_1969_);
v___x_1971_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0___redArg(v_snd_1970_, v_declName_1961_);
lean_dec(v_declName_1961_);
lean_dec(v_snd_1970_);
return v___x_1971_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0(lean_object* v_00_u03b2_1998_, lean_object* v_x_1999_, lean_object* v_x_2000_){
_start:
{
lean_object* v___x_2001_; 
v___x_2001_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0___redArg(v_x_1999_, v_x_2000_);
return v___x_2001_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0___boxed(lean_object* v_00_u03b2_2002_, lean_object* v_x_2003_, lean_object* v_x_2004_){
_start:
{
lean_object* v_res_2005_; 
v_res_2005_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0(v_00_u03b2_2002_, v_x_2003_, v_x_2004_);
lean_dec(v_x_2004_);
lean_dec_ref(v_x_2003_);
return v_res_2005_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__1(lean_object* v_as_2006_, lean_object* v_k_2007_, lean_object* v_x_2008_, lean_object* v_x_2009_, lean_object* v_x_2010_){
_start:
{
lean_object* v___x_2011_; 
v___x_2011_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__1___redArg(v_as_2006_, v_k_2007_, v_x_2008_, v_x_2009_);
return v___x_2011_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__1___boxed(lean_object* v_as_2012_, lean_object* v_k_2013_, lean_object* v_x_2014_, lean_object* v_x_2015_, lean_object* v_x_2016_){
_start:
{
lean_object* v_res_2017_; 
v_res_2017_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__1(v_as_2012_, v_k_2013_, v_x_2014_, v_x_2015_, v_x_2016_);
lean_dec_ref(v_k_2013_);
lean_dec_ref(v_as_2012_);
return v_res_2017_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0_spec__0(lean_object* v_00_u03b2_2018_, lean_object* v_x_2019_, size_t v_x_2020_, lean_object* v_x_2021_){
_start:
{
lean_object* v___x_2022_; 
v___x_2022_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0_spec__0___redArg(v_x_2019_, v_x_2020_, v_x_2021_);
return v___x_2022_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2023_, lean_object* v_x_2024_, lean_object* v_x_2025_, lean_object* v_x_2026_){
_start:
{
size_t v_x_581__boxed_2027_; lean_object* v_res_2028_; 
v_x_581__boxed_2027_ = lean_unbox_usize(v_x_2025_);
lean_dec(v_x_2025_);
v_res_2028_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0_spec__0(v_00_u03b2_2023_, v_x_2024_, v_x_581__boxed_2027_, v_x_2026_);
lean_dec(v_x_2026_);
lean_dec_ref(v_x_2024_);
return v_res_2028_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2029_, lean_object* v_keys_2030_, lean_object* v_vals_2031_, lean_object* v_heq_2032_, lean_object* v_i_2033_, lean_object* v_k_2034_){
_start:
{
lean_object* v___x_2035_; 
v___x_2035_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0_spec__0_spec__1___redArg(v_keys_2030_, v_vals_2031_, v_i_2033_, v_k_2034_);
return v___x_2035_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2036_, lean_object* v_keys_2037_, lean_object* v_vals_2038_, lean_object* v_heq_2039_, lean_object* v_i_2040_, lean_object* v_k_2041_){
_start:
{
lean_object* v_res_2042_; 
v_res_2042_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getSpecEntryCore_x3f_spec__0_spec__0_spec__1(v_00_u03b2_2036_, v_keys_2037_, v_vals_2038_, v_heq_2039_, v_i_2040_, v_k_2041_);
lean_dec(v_k_2041_);
lean_dec_ref(v_vals_2038_);
lean_dec_ref(v_keys_2037_);
return v_res_2042_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getSpecEntry_x3f___redArg___lam__0(lean_object* v_declName_2043_, lean_object* v_toPure_2044_, lean_object* v_____do__lift_2045_){
_start:
{
lean_object* v___x_2046_; lean_object* v___x_2047_; 
v___x_2046_ = l_Lean_Compiler_LCNF_getSpecEntryCore_x3f(v_____do__lift_2045_, v_declName_2043_);
v___x_2047_ = lean_apply_2(v_toPure_2044_, lean_box(0), v___x_2046_);
return v___x_2047_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getSpecEntry_x3f___redArg(lean_object* v_inst_2048_, lean_object* v_inst_2049_, lean_object* v_declName_2050_){
_start:
{
lean_object* v_toApplicative_2051_; lean_object* v_toBind_2052_; lean_object* v_getEnv_2053_; lean_object* v_toPure_2054_; lean_object* v___f_2055_; lean_object* v___x_2056_; 
v_toApplicative_2051_ = lean_ctor_get(v_inst_2048_, 0);
lean_inc_ref(v_toApplicative_2051_);
v_toBind_2052_ = lean_ctor_get(v_inst_2048_, 1);
lean_inc(v_toBind_2052_);
lean_dec_ref(v_inst_2048_);
v_getEnv_2053_ = lean_ctor_get(v_inst_2049_, 0);
lean_inc(v_getEnv_2053_);
lean_dec_ref(v_inst_2049_);
v_toPure_2054_ = lean_ctor_get(v_toApplicative_2051_, 1);
lean_inc(v_toPure_2054_);
lean_dec_ref(v_toApplicative_2051_);
v___f_2055_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_getSpecEntry_x3f___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2055_, 0, v_declName_2050_);
lean_closure_set(v___f_2055_, 1, v_toPure_2054_);
v___x_2056_ = lean_apply_4(v_toBind_2052_, lean_box(0), lean_box(0), v_getEnv_2053_, v___f_2055_);
return v___x_2056_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getSpecEntry_x3f(lean_object* v_m_2057_, lean_object* v_inst_2058_, lean_object* v_inst_2059_, lean_object* v_declName_2060_){
_start:
{
lean_object* v___x_2061_; 
v___x_2061_ = l_Lean_Compiler_LCNF_getSpecEntry_x3f___redArg(v_inst_2058_, v_inst_2059_, v_declName_2060_);
return v___x_2061_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isSpecCandidate___redArg___lam__0(lean_object* v_declName_2062_, lean_object* v_toPure_2063_, lean_object* v_____do__lift_2064_){
_start:
{
lean_object* v___x_2065_; 
v___x_2065_ = l_Lean_Compiler_LCNF_getSpecEntryCore_x3f(v_____do__lift_2064_, v_declName_2062_);
if (lean_obj_tag(v___x_2065_) == 0)
{
uint8_t v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; 
v___x_2066_ = 0;
v___x_2067_ = lean_box(v___x_2066_);
v___x_2068_ = lean_apply_2(v_toPure_2063_, lean_box(0), v___x_2067_);
return v___x_2068_;
}
else
{
uint8_t v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; 
lean_dec_ref_known(v___x_2065_, 1);
v___x_2069_ = 1;
v___x_2070_ = lean_box(v___x_2069_);
v___x_2071_ = lean_apply_2(v_toPure_2063_, lean_box(0), v___x_2070_);
return v___x_2071_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isSpecCandidate___redArg(lean_object* v_inst_2072_, lean_object* v_inst_2073_, lean_object* v_declName_2074_){
_start:
{
lean_object* v_toApplicative_2075_; lean_object* v_toBind_2076_; lean_object* v_getEnv_2077_; lean_object* v_toPure_2078_; lean_object* v___f_2079_; lean_object* v___x_2080_; 
v_toApplicative_2075_ = lean_ctor_get(v_inst_2072_, 0);
lean_inc_ref(v_toApplicative_2075_);
v_toBind_2076_ = lean_ctor_get(v_inst_2072_, 1);
lean_inc(v_toBind_2076_);
lean_dec_ref(v_inst_2072_);
v_getEnv_2077_ = lean_ctor_get(v_inst_2073_, 0);
lean_inc(v_getEnv_2077_);
lean_dec_ref(v_inst_2073_);
v_toPure_2078_ = lean_ctor_get(v_toApplicative_2075_, 1);
lean_inc(v_toPure_2078_);
lean_dec_ref(v_toApplicative_2075_);
v___f_2079_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_isSpecCandidate___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2079_, 0, v_declName_2074_);
lean_closure_set(v___f_2079_, 1, v_toPure_2078_);
v___x_2080_ = lean_apply_4(v_toBind_2076_, lean_box(0), lean_box(0), v_getEnv_2077_, v___f_2079_);
return v___x_2080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isSpecCandidate(lean_object* v_m_2081_, lean_object* v_inst_2082_, lean_object* v_inst_2083_, lean_object* v_declName_2084_){
_start:
{
lean_object* v___x_2085_; 
v___x_2085_ = l_Lean_Compiler_LCNF_isSpecCandidate___redArg(v_inst_2082_, v_inst_2083_, v_declName_2084_);
return v___x_2085_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2150_; uint8_t v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; 
v___x_2150_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_saveSpecEntries_spec__3___closed__4));
v___x_2151_ = 0;
v___x_2152_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2_));
v___x_2153_ = l_Lean_registerTraceClass(v___x_2150_, v___x_2151_, v___x_2152_);
return v___x_2153_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2____boxed(lean_object* v_a_2154_){
_start:
{
lean_object* v_res_2155_; 
v_res_2155_ = l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2_();
return v_res_2155_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_FixedParams(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_InferType(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_SpecInfo(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_instInhabitedSpecState_default = _init_l_Lean_Compiler_LCNF_instInhabitedSpecState_default();
lean_mark_persistent(l_Lean_Compiler_LCNF_instInhabitedSpecState_default);
l_Lean_Compiler_LCNF_instInhabitedSpecState = _init_l_Lean_Compiler_LCNF_instInhabitedSpecState();
lean_mark_persistent(l_Lean_Compiler_LCNF_instInhabitedSpecState);
res = l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_3827028689____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Compiler_LCNF_specExtension = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Compiler_LCNF_specExtension);
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_SpecInfo_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SpecInfo_513551779____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_SpecInfo(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_FixedParams(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_InferType(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_SpecInfo(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_SpecInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_SpecInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_SpecInfo(builtin);
}
#ifdef __cplusplus
}
#endif
