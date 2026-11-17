// Lean compiler output
// Module: Lean.ReducibilityAttrs
// Imports: public import Lean.ScopedEnvExtension
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
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
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
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg(lean_object*);
lean_object* l_Lean_SMap_instInhabited___redArg();
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___redArg(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_findSortedByName_x3f___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Environment_logDeclChange(lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_addCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Lean_Attribute_Builtin_ensureNoArgs(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_ConstantInfo_isDefinition(lean_object*);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_reducible_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_reducible_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_reducible_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_reducible_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_semireducible_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_semireducible_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_semireducible_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_semireducible_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_irreducible_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_irreducible_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_irreducible_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_irreducible_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_implicitReducible_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_implicitReducible_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_implicitReducible_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_implicitReducible_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_instanceReducible_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_instanceReducible_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_instanceReducible_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_instanceReducible_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instInhabitedReducibilityStatus_default;
LEAN_EXPORT uint8_t l_Lean_instInhabitedReducibilityStatus;
static const lean_string_object l_Lean_instReprReducibilityStatus_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.ReducibilityStatus.reducible"};
static const lean_object* l_Lean_instReprReducibilityStatus_repr___closed__0 = (const lean_object*)&l_Lean_instReprReducibilityStatus_repr___closed__0_value;
static const lean_ctor_object l_Lean_instReprReducibilityStatus_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprReducibilityStatus_repr___closed__0_value)}};
static const lean_object* l_Lean_instReprReducibilityStatus_repr___closed__1 = (const lean_object*)&l_Lean_instReprReducibilityStatus_repr___closed__1_value;
static const lean_string_object l_Lean_instReprReducibilityStatus_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lean.ReducibilityStatus.semireducible"};
static const lean_object* l_Lean_instReprReducibilityStatus_repr___closed__2 = (const lean_object*)&l_Lean_instReprReducibilityStatus_repr___closed__2_value;
static const lean_ctor_object l_Lean_instReprReducibilityStatus_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprReducibilityStatus_repr___closed__2_value)}};
static const lean_object* l_Lean_instReprReducibilityStatus_repr___closed__3 = (const lean_object*)&l_Lean_instReprReducibilityStatus_repr___closed__3_value;
static const lean_string_object l_Lean_instReprReducibilityStatus_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.ReducibilityStatus.irreducible"};
static const lean_object* l_Lean_instReprReducibilityStatus_repr___closed__4 = (const lean_object*)&l_Lean_instReprReducibilityStatus_repr___closed__4_value;
static const lean_ctor_object l_Lean_instReprReducibilityStatus_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprReducibilityStatus_repr___closed__4_value)}};
static const lean_object* l_Lean_instReprReducibilityStatus_repr___closed__5 = (const lean_object*)&l_Lean_instReprReducibilityStatus_repr___closed__5_value;
static const lean_string_object l_Lean_instReprReducibilityStatus_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Lean.ReducibilityStatus.implicitReducible"};
static const lean_object* l_Lean_instReprReducibilityStatus_repr___closed__6 = (const lean_object*)&l_Lean_instReprReducibilityStatus_repr___closed__6_value;
static const lean_ctor_object l_Lean_instReprReducibilityStatus_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprReducibilityStatus_repr___closed__6_value)}};
static const lean_object* l_Lean_instReprReducibilityStatus_repr___closed__7 = (const lean_object*)&l_Lean_instReprReducibilityStatus_repr___closed__7_value;
static const lean_string_object l_Lean_instReprReducibilityStatus_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Lean.ReducibilityStatus.instanceReducible"};
static const lean_object* l_Lean_instReprReducibilityStatus_repr___closed__8 = (const lean_object*)&l_Lean_instReprReducibilityStatus_repr___closed__8_value;
static const lean_ctor_object l_Lean_instReprReducibilityStatus_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprReducibilityStatus_repr___closed__8_value)}};
static const lean_object* l_Lean_instReprReducibilityStatus_repr___closed__9 = (const lean_object*)&l_Lean_instReprReducibilityStatus_repr___closed__9_value;
static lean_once_cell_t l_Lean_instReprReducibilityStatus_repr___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprReducibilityStatus_repr___closed__10;
static lean_once_cell_t l_Lean_instReprReducibilityStatus_repr___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprReducibilityStatus_repr___closed__11;
LEAN_EXPORT lean_object* l_Lean_instReprReducibilityStatus_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprReducibilityStatus_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprReducibilityStatus___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprReducibilityStatus_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprReducibilityStatus___closed__0 = (const lean_object*)&l_Lean_instReprReducibilityStatus___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprReducibilityStatus = (const lean_object*)&l_Lean_instReprReducibilityStatus___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_instBEqReducibilityStatus_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_instBEqReducibilityStatus_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqReducibilityStatus___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqReducibilityStatus_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqReducibilityStatus___closed__0 = (const lean_object*)&l_Lean_instBEqReducibilityStatus___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqReducibilityStatus = (const lean_object*)&l_Lean_instBEqReducibilityStatus___closed__0_value;
static const lean_string_object l_Lean_ReducibilityStatus_toAttrString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "[reducible]"};
static const lean_object* l_Lean_ReducibilityStatus_toAttrString___closed__0 = (const lean_object*)&l_Lean_ReducibilityStatus_toAttrString___closed__0_value;
static const lean_string_object l_Lean_ReducibilityStatus_toAttrString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "[semireducible]"};
static const lean_object* l_Lean_ReducibilityStatus_toAttrString___closed__1 = (const lean_object*)&l_Lean_ReducibilityStatus_toAttrString___closed__1_value;
static const lean_string_object l_Lean_ReducibilityStatus_toAttrString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "[irreducible]"};
static const lean_object* l_Lean_ReducibilityStatus_toAttrString___closed__2 = (const lean_object*)&l_Lean_ReducibilityStatus_toAttrString___closed__2_value;
static const lean_string_object l_Lean_ReducibilityStatus_toAttrString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "[implicit_reducible]"};
static const lean_object* l_Lean_ReducibilityStatus_toAttrString___closed__3 = (const lean_object*)&l_Lean_ReducibilityStatus_toAttrString___closed__3_value;
static const lean_string_object l_Lean_ReducibilityStatus_toAttrString___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "[instance_reducible]"};
static const lean_object* l_Lean_ReducibilityStatus_toAttrString___closed__4 = (const lean_object*)&l_Lean_ReducibilityStatus_toAttrString___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_toAttrString(uint8_t);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_toAttrString___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__1_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__1_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "reducibility attribute core extension"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__1_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__1_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__1_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__2_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__1_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__2_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__2_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__3_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "number of local entries: "};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__3_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__3_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__4_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__3_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__4_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__4_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__5_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__2_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__4_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__5_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__5_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__3_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__3_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__4_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__4_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__5_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__5_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__6_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__6_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__1_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__3_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__4_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "reducibilityCore"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(95, 201, 42, 208, 53, 44, 245, 169)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__5_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__6_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__11_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 8, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__11_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__11_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__12_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__11_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__12_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__12_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reducibilityCoreExt;
LEAN_EXPORT lean_object* l_Lean_SMap_switch___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_switch___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__1_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__1_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__5___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__1_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SMap_switch___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__0___redArg, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "reducibilityExtra"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(114, 61, 52, 173, 157, 234, 207, 193)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__11_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__11_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__11_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__12_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__12_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reducibilityExtraExt;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_getReducibilityStatusCore___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getReducibilityStatusCore___closed__0;
LEAN_EXPORT uint8_t l_Lean_getReducibilityStatusCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatusCore___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "allowUnsafeReducibility"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(43, 3, 217, 246, 47, 128, 204, 22)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 235, .m_capacity = 235, .m_length = 234, .m_data = "enables users to modify the reducibility settings for declarations even when such changes are deemed potentially hazardous. For example, `simp` and type class resolution maintain term indices where reducible declarations are expanded."};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(106, 158, 85, 56, 211, 107, 118, 9)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_allowUnsafeReducibility;
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__4;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "failed to set `[reducible]`, `"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__0 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__0_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__1;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "` is not currently `[semireducible]`, but `"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__2 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__2_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__3;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "failed to set `[semireducible]` for `"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__4 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__4_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__5;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "` because it already is `[semireducible]`"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__6 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__6_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__7;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "failed to set `[irreducible]`, `"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__8 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__8_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__9;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 95, .m_capacity = 95, .m_length = 94, .m_data = "` is not currently `[semireducible]`, `[implicit_reducible]` nor `[instance_reducible]`, but `"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__10 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__10_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__11;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "failed to set `[implicit_reducible]`, `"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__12 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__12_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__13;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "` is not currently `[semireducible]` nor `[instance_reducible]`, but `"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__14 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__14_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__15;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "failed to set `[instance_reducible]`, `"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__16 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__16_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__17;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "failed to set reducibility status, `"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__18 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__18_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__19;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 73, .m_capacity = 73, .m_length = 72, .m_data = "` has not been defined in this file, consider using the `local` modifier"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__20 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__20_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__21;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "failed to set `[local reducible]` for `"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__22 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__22_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__23;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 112, .m_capacity = 112, .m_length = 111, .m_data = "`, recall that `[reducible]` affects the term indexing data structures used by `simp` and type class resolution"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__24 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__24_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__25;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "failed to set `[local semireducible]`, `"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__26 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__26_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__27;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "` is currently `"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__28 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__28_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__29;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "`, `[irreducible]` expected"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__30 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__30_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__31;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "failed to set `[local irreducible]`, `"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__32 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__32_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__33;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 81, .m_capacity = 81, .m_length = 80, .m_data = "`, `[semireducible]`, `[implicit_reducible]` nor `[instance_reducible]` expected"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__34 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__34_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__35;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "failed to set `[local implicit_reducible]`, `"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__36 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__36_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__37;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "`, `[semireducible]` or `[instance_reducible]` expected"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__38 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__38_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__39;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "failed to set `[local instance_reducible]`, `"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__40 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__40_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__41;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "`, `[semireducible]` expected"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__42 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__42_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__43;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "failed to set reducibility status for `"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__44 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__44_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__45;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "`, the `scoped` modifier is not recommended for this kind of attribute"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__46 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__46_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__47;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "` is not a definition"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__48 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__48_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__49;
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__0;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__0 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__0_value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 89, .m_capacity = 89, .m_length = 88, .m_data = "Use `set_option allowUnsafeReducibility true` to override reducibility status validation"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__1 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__1_value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__1_value)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__2 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__2_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__3;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_addAttr(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_addAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Attribute `["};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` cannot be erased"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__3_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__3_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "ReducibilityAttrs"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 243, 132, 119, 102, 176, 104, 231)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(136, 6, 121, 201, 161, 138, 59, 119)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(97, 62, 6, 154, 126, 194, 108, 7)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(152, 228, 198, 151, 110, 175, 120, 179)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(105, 11, 210, 221, 39, 72, 148, 16)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__11_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(44, 11, 42, 155, 183, 228, 253, 121)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__11_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__11_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__12_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__11_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(43, 193, 210, 85, 51, 24, 109, 168)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__12_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__12_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__13_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__12_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)(((size_t)(562565324) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(13, 53, 165, 236, 93, 163, 7, 1)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__13_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__13_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__14_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__14_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__14_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__15_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__13_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__14_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(238, 6, 193, 170, 140, 56, 155, 78)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__15_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__15_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__16_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__16_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__16_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__17_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__15_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__16_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(66, 73, 145, 21, 118, 11, 88, 35)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__17_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__17_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__18_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__17_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(155, 100, 92, 11, 143, 96, 227, 175)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__18_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__18_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__19_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "irreducible"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__19_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__19_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__20_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__19_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(61, 207, 43, 193, 214, 202, 115, 95)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__20_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__20_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__21_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__20_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__21_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__21_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__22_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "irreducible declaration"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__22_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__22_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__23_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__18_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__20_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__22_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__23_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__23_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__24_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_addAttr___boxed, .m_arity = 7, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__24_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__24_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__25_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__23_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__24_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__21_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__25_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__25_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reducible"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(29, 67, 225, 118, 155, 2, 197, 97)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "reducible declaration"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_addAttr___boxed, .m_arity = 7, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "semireducible"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(106, 254, 211, 230, 8, 182, 79, 36)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "semireducible declaration"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_addAttr___boxed, .m_arity = 7, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2____boxed(lean_object*);
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__12_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)(((size_t)(82891871) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(118, 199, 147, 168, 131, 34, 217, 154)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__14_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(81, 105, 54, 185, 136, 245, 11, 248)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__16_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(233, 151, 171, 199, 88, 193, 139, 229)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(20, 89, 104, 119, 191, 122, 184, 229)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "implicit_reducible"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(138, 100, 121, 167, 26, 160, 176, 156)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "implicit reducible declaration"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_addAttr___boxed, .m_arity = 7, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2____boxed(lean_object*);
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__12_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2104212786) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(22, 126, 215, 185, 112, 104, 250, 112)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__14_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(177, 41, 203, 163, 66, 33, 161, 91)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__16_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(73, 186, 193, 195, 12, 58, 248, 252)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(52, 224, 28, 233, 79, 131, 248, 111)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "instance_reducible"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(125, 180, 213, 185, 56, 77, 23, 14)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "instance reducible declaration"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_addAttr___boxed, .m_arity = 7, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___redArg___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___redArg(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isReducible___redArg___lam__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_isReducible___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isReducible___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isReducible(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isIrreducible___redArg___lam__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_isIrreducible___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isIrreducible___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isIrreducible(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_isImplicitReducibleCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isImplicitReducibleCore___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isImplicitReducible___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isImplicitReducible___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isImplicitReducible(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_isInstanceReducibleCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInstanceReducibleCore___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_ctorIdx___impl(uint8_t v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_box(v_x_1_);
v___x_3_ = lean_obj_tag_nat(v___x_2_);
lean_dec(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_ctorIdx___impl___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_4__boxed_5_; lean_object* v_res_6_; 
v_x_4__boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = l_Lean_ReducibilityStatus_ctorIdx___impl(v_x_4__boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_ctorElim___redArg(lean_object* v_k_7_){
_start:
{
lean_inc(v_k_7_);
return v_k_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_ctorElim___redArg___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Lean_ReducibilityStatus_ctorElim___redArg(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, uint8_t v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_inc(v_k_14_);
return v_k_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
uint8_t v_t_boxed_20_; lean_object* v_res_21_; 
v_t_boxed_20_ = lean_unbox(v_t_17_);
v_res_21_ = l_Lean_ReducibilityStatus_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_boxed_20_, v_h_18_, v_k_19_);
lean_dec(v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_reducible_elim___redArg(lean_object* v_reducible_22_){
_start:
{
lean_inc(v_reducible_22_);
return v_reducible_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_reducible_elim___redArg___boxed(lean_object* v_reducible_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lean_ReducibilityStatus_reducible_elim___redArg(v_reducible_23_);
lean_dec(v_reducible_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_reducible_elim(lean_object* v_motive_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_reducible_28_){
_start:
{
lean_inc(v_reducible_28_);
return v_reducible_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_reducible_elim___boxed(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_reducible_32_){
_start:
{
uint8_t v_t_boxed_33_; lean_object* v_res_34_; 
v_t_boxed_33_ = lean_unbox(v_t_30_);
v_res_34_ = l_Lean_ReducibilityStatus_reducible_elim(v_motive_29_, v_t_boxed_33_, v_h_31_, v_reducible_32_);
lean_dec(v_reducible_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_semireducible_elim___redArg(lean_object* v_semireducible_35_){
_start:
{
lean_inc(v_semireducible_35_);
return v_semireducible_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_semireducible_elim___redArg___boxed(lean_object* v_semireducible_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lean_ReducibilityStatus_semireducible_elim___redArg(v_semireducible_36_);
lean_dec(v_semireducible_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_semireducible_elim(lean_object* v_motive_38_, uint8_t v_t_39_, lean_object* v_h_40_, lean_object* v_semireducible_41_){
_start:
{
lean_inc(v_semireducible_41_);
return v_semireducible_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_semireducible_elim___boxed(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_semireducible_45_){
_start:
{
uint8_t v_t_boxed_46_; lean_object* v_res_47_; 
v_t_boxed_46_ = lean_unbox(v_t_43_);
v_res_47_ = l_Lean_ReducibilityStatus_semireducible_elim(v_motive_42_, v_t_boxed_46_, v_h_44_, v_semireducible_45_);
lean_dec(v_semireducible_45_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_irreducible_elim___redArg(lean_object* v_irreducible_48_){
_start:
{
lean_inc(v_irreducible_48_);
return v_irreducible_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_irreducible_elim___redArg___boxed(lean_object* v_irreducible_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Lean_ReducibilityStatus_irreducible_elim___redArg(v_irreducible_49_);
lean_dec(v_irreducible_49_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_irreducible_elim(lean_object* v_motive_51_, uint8_t v_t_52_, lean_object* v_h_53_, lean_object* v_irreducible_54_){
_start:
{
lean_inc(v_irreducible_54_);
return v_irreducible_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_irreducible_elim___boxed(lean_object* v_motive_55_, lean_object* v_t_56_, lean_object* v_h_57_, lean_object* v_irreducible_58_){
_start:
{
uint8_t v_t_boxed_59_; lean_object* v_res_60_; 
v_t_boxed_59_ = lean_unbox(v_t_56_);
v_res_60_ = l_Lean_ReducibilityStatus_irreducible_elim(v_motive_55_, v_t_boxed_59_, v_h_57_, v_irreducible_58_);
lean_dec(v_irreducible_58_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_implicitReducible_elim___redArg(lean_object* v_implicitReducible_61_){
_start:
{
lean_inc(v_implicitReducible_61_);
return v_implicitReducible_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_implicitReducible_elim___redArg___boxed(lean_object* v_implicitReducible_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = l_Lean_ReducibilityStatus_implicitReducible_elim___redArg(v_implicitReducible_62_);
lean_dec(v_implicitReducible_62_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_implicitReducible_elim(lean_object* v_motive_64_, uint8_t v_t_65_, lean_object* v_h_66_, lean_object* v_implicitReducible_67_){
_start:
{
lean_inc(v_implicitReducible_67_);
return v_implicitReducible_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_implicitReducible_elim___boxed(lean_object* v_motive_68_, lean_object* v_t_69_, lean_object* v_h_70_, lean_object* v_implicitReducible_71_){
_start:
{
uint8_t v_t_boxed_72_; lean_object* v_res_73_; 
v_t_boxed_72_ = lean_unbox(v_t_69_);
v_res_73_ = l_Lean_ReducibilityStatus_implicitReducible_elim(v_motive_68_, v_t_boxed_72_, v_h_70_, v_implicitReducible_71_);
lean_dec(v_implicitReducible_71_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_instanceReducible_elim___redArg(lean_object* v_instanceReducible_74_){
_start:
{
lean_inc(v_instanceReducible_74_);
return v_instanceReducible_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_instanceReducible_elim___redArg___boxed(lean_object* v_instanceReducible_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l_Lean_ReducibilityStatus_instanceReducible_elim___redArg(v_instanceReducible_75_);
lean_dec(v_instanceReducible_75_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_instanceReducible_elim(lean_object* v_motive_77_, uint8_t v_t_78_, lean_object* v_h_79_, lean_object* v_instanceReducible_80_){
_start:
{
lean_inc(v_instanceReducible_80_);
return v_instanceReducible_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_instanceReducible_elim___boxed(lean_object* v_motive_81_, lean_object* v_t_82_, lean_object* v_h_83_, lean_object* v_instanceReducible_84_){
_start:
{
uint8_t v_t_boxed_85_; lean_object* v_res_86_; 
v_t_boxed_85_ = lean_unbox(v_t_82_);
v_res_86_ = l_Lean_ReducibilityStatus_instanceReducible_elim(v_motive_81_, v_t_boxed_85_, v_h_83_, v_instanceReducible_84_);
lean_dec(v_instanceReducible_84_);
return v_res_86_;
}
}
static uint8_t _init_l_Lean_instInhabitedReducibilityStatus_default(void){
_start:
{
uint8_t v___x_87_; 
v___x_87_ = 0;
return v___x_87_;
}
}
static uint8_t _init_l_Lean_instInhabitedReducibilityStatus(void){
_start:
{
uint8_t v___x_88_; 
v___x_88_ = 0;
return v___x_88_;
}
}
static lean_object* _init_l_Lean_instReprReducibilityStatus_repr___closed__10(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_104_ = lean_unsigned_to_nat(2u);
v___x_105_ = lean_nat_to_int(v___x_104_);
return v___x_105_;
}
}
static lean_object* _init_l_Lean_instReprReducibilityStatus_repr___closed__11(void){
_start:
{
lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_106_ = lean_unsigned_to_nat(1u);
v___x_107_ = lean_nat_to_int(v___x_106_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprReducibilityStatus_repr(uint8_t v_x_108_, lean_object* v_prec_109_){
_start:
{
lean_object* v___y_111_; lean_object* v___y_118_; lean_object* v___y_125_; lean_object* v___y_132_; lean_object* v___y_139_; 
switch(v_x_108_)
{
case 0:
{
lean_object* v___x_145_; uint8_t v___x_146_; 
v___x_145_ = lean_unsigned_to_nat(1024u);
v___x_146_ = lean_nat_dec_le(v___x_145_, v_prec_109_);
if (v___x_146_ == 0)
{
lean_object* v___x_147_; 
v___x_147_ = lean_obj_once(&l_Lean_instReprReducibilityStatus_repr___closed__10, &l_Lean_instReprReducibilityStatus_repr___closed__10_once, _init_l_Lean_instReprReducibilityStatus_repr___closed__10);
v___y_111_ = v___x_147_;
goto v___jp_110_;
}
else
{
lean_object* v___x_148_; 
v___x_148_ = lean_obj_once(&l_Lean_instReprReducibilityStatus_repr___closed__11, &l_Lean_instReprReducibilityStatus_repr___closed__11_once, _init_l_Lean_instReprReducibilityStatus_repr___closed__11);
v___y_111_ = v___x_148_;
goto v___jp_110_;
}
}
case 1:
{
lean_object* v___x_149_; uint8_t v___x_150_; 
v___x_149_ = lean_unsigned_to_nat(1024u);
v___x_150_ = lean_nat_dec_le(v___x_149_, v_prec_109_);
if (v___x_150_ == 0)
{
lean_object* v___x_151_; 
v___x_151_ = lean_obj_once(&l_Lean_instReprReducibilityStatus_repr___closed__10, &l_Lean_instReprReducibilityStatus_repr___closed__10_once, _init_l_Lean_instReprReducibilityStatus_repr___closed__10);
v___y_118_ = v___x_151_;
goto v___jp_117_;
}
else
{
lean_object* v___x_152_; 
v___x_152_ = lean_obj_once(&l_Lean_instReprReducibilityStatus_repr___closed__11, &l_Lean_instReprReducibilityStatus_repr___closed__11_once, _init_l_Lean_instReprReducibilityStatus_repr___closed__11);
v___y_118_ = v___x_152_;
goto v___jp_117_;
}
}
case 2:
{
lean_object* v___x_153_; uint8_t v___x_154_; 
v___x_153_ = lean_unsigned_to_nat(1024u);
v___x_154_ = lean_nat_dec_le(v___x_153_, v_prec_109_);
if (v___x_154_ == 0)
{
lean_object* v___x_155_; 
v___x_155_ = lean_obj_once(&l_Lean_instReprReducibilityStatus_repr___closed__10, &l_Lean_instReprReducibilityStatus_repr___closed__10_once, _init_l_Lean_instReprReducibilityStatus_repr___closed__10);
v___y_125_ = v___x_155_;
goto v___jp_124_;
}
else
{
lean_object* v___x_156_; 
v___x_156_ = lean_obj_once(&l_Lean_instReprReducibilityStatus_repr___closed__11, &l_Lean_instReprReducibilityStatus_repr___closed__11_once, _init_l_Lean_instReprReducibilityStatus_repr___closed__11);
v___y_125_ = v___x_156_;
goto v___jp_124_;
}
}
case 3:
{
lean_object* v___x_157_; uint8_t v___x_158_; 
v___x_157_ = lean_unsigned_to_nat(1024u);
v___x_158_ = lean_nat_dec_le(v___x_157_, v_prec_109_);
if (v___x_158_ == 0)
{
lean_object* v___x_159_; 
v___x_159_ = lean_obj_once(&l_Lean_instReprReducibilityStatus_repr___closed__10, &l_Lean_instReprReducibilityStatus_repr___closed__10_once, _init_l_Lean_instReprReducibilityStatus_repr___closed__10);
v___y_132_ = v___x_159_;
goto v___jp_131_;
}
else
{
lean_object* v___x_160_; 
v___x_160_ = lean_obj_once(&l_Lean_instReprReducibilityStatus_repr___closed__11, &l_Lean_instReprReducibilityStatus_repr___closed__11_once, _init_l_Lean_instReprReducibilityStatus_repr___closed__11);
v___y_132_ = v___x_160_;
goto v___jp_131_;
}
}
default: 
{
lean_object* v___x_161_; uint8_t v___x_162_; 
v___x_161_ = lean_unsigned_to_nat(1024u);
v___x_162_ = lean_nat_dec_le(v___x_161_, v_prec_109_);
if (v___x_162_ == 0)
{
lean_object* v___x_163_; 
v___x_163_ = lean_obj_once(&l_Lean_instReprReducibilityStatus_repr___closed__10, &l_Lean_instReprReducibilityStatus_repr___closed__10_once, _init_l_Lean_instReprReducibilityStatus_repr___closed__10);
v___y_139_ = v___x_163_;
goto v___jp_138_;
}
else
{
lean_object* v___x_164_; 
v___x_164_ = lean_obj_once(&l_Lean_instReprReducibilityStatus_repr___closed__11, &l_Lean_instReprReducibilityStatus_repr___closed__11_once, _init_l_Lean_instReprReducibilityStatus_repr___closed__11);
v___y_139_ = v___x_164_;
goto v___jp_138_;
}
}
}
v___jp_110_:
{
lean_object* v___x_112_; lean_object* v___x_113_; uint8_t v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_112_ = ((lean_object*)(l_Lean_instReprReducibilityStatus_repr___closed__1));
lean_inc(v___y_111_);
v___x_113_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_113_, 0, v___y_111_);
lean_ctor_set(v___x_113_, 1, v___x_112_);
v___x_114_ = 0;
v___x_115_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_115_, 0, v___x_113_);
lean_ctor_set_uint8(v___x_115_, sizeof(void*)*1, v___x_114_);
v___x_116_ = l_Repr_addAppParen(v___x_115_, v_prec_109_);
return v___x_116_;
}
v___jp_117_:
{
lean_object* v___x_119_; lean_object* v___x_120_; uint8_t v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_119_ = ((lean_object*)(l_Lean_instReprReducibilityStatus_repr___closed__3));
lean_inc(v___y_118_);
v___x_120_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_120_, 0, v___y_118_);
lean_ctor_set(v___x_120_, 1, v___x_119_);
v___x_121_ = 0;
v___x_122_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_122_, 0, v___x_120_);
lean_ctor_set_uint8(v___x_122_, sizeof(void*)*1, v___x_121_);
v___x_123_ = l_Repr_addAppParen(v___x_122_, v_prec_109_);
return v___x_123_;
}
v___jp_124_:
{
lean_object* v___x_126_; lean_object* v___x_127_; uint8_t v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_126_ = ((lean_object*)(l_Lean_instReprReducibilityStatus_repr___closed__5));
lean_inc(v___y_125_);
v___x_127_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_127_, 0, v___y_125_);
lean_ctor_set(v___x_127_, 1, v___x_126_);
v___x_128_ = 0;
v___x_129_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_129_, 0, v___x_127_);
lean_ctor_set_uint8(v___x_129_, sizeof(void*)*1, v___x_128_);
v___x_130_ = l_Repr_addAppParen(v___x_129_, v_prec_109_);
return v___x_130_;
}
v___jp_131_:
{
lean_object* v___x_133_; lean_object* v___x_134_; uint8_t v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_133_ = ((lean_object*)(l_Lean_instReprReducibilityStatus_repr___closed__7));
lean_inc(v___y_132_);
v___x_134_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_134_, 0, v___y_132_);
lean_ctor_set(v___x_134_, 1, v___x_133_);
v___x_135_ = 0;
v___x_136_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_136_, 0, v___x_134_);
lean_ctor_set_uint8(v___x_136_, sizeof(void*)*1, v___x_135_);
v___x_137_ = l_Repr_addAppParen(v___x_136_, v_prec_109_);
return v___x_137_;
}
v___jp_138_:
{
lean_object* v___x_140_; lean_object* v___x_141_; uint8_t v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_140_ = ((lean_object*)(l_Lean_instReprReducibilityStatus_repr___closed__9));
lean_inc(v___y_139_);
v___x_141_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_141_, 0, v___y_139_);
lean_ctor_set(v___x_141_, 1, v___x_140_);
v___x_142_ = 0;
v___x_143_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_143_, 0, v___x_141_);
lean_ctor_set_uint8(v___x_143_, sizeof(void*)*1, v___x_142_);
v___x_144_ = l_Repr_addAppParen(v___x_143_, v_prec_109_);
return v___x_144_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprReducibilityStatus_repr___boxed(lean_object* v_x_165_, lean_object* v_prec_166_){
_start:
{
uint8_t v_x_419__boxed_167_; lean_object* v_res_168_; 
v_x_419__boxed_167_ = lean_unbox(v_x_165_);
v_res_168_ = l_Lean_instReprReducibilityStatus_repr(v_x_419__boxed_167_, v_prec_166_);
lean_dec(v_prec_166_);
return v_res_168_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqReducibilityStatus_beq(uint8_t v_x_171_, uint8_t v_y_172_){
_start:
{
lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; uint8_t v___x_177_; 
v___x_173_ = lean_box(v_x_171_);
v___x_174_ = lean_obj_tag_nat(v___x_173_);
lean_dec(v___x_173_);
v___x_175_ = lean_box(v_y_172_);
v___x_176_ = lean_obj_tag_nat(v___x_175_);
lean_dec(v___x_175_);
v___x_177_ = lean_nat_dec_eq(v___x_174_, v___x_176_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqReducibilityStatus_beq___boxed(lean_object* v_x_178_, lean_object* v_y_179_){
_start:
{
uint8_t v_x_24__boxed_180_; uint8_t v_y_25__boxed_181_; uint8_t v_res_182_; lean_object* v_r_183_; 
v_x_24__boxed_180_ = lean_unbox(v_x_178_);
v_y_25__boxed_181_ = lean_unbox(v_y_179_);
v_res_182_ = l_Lean_instBEqReducibilityStatus_beq(v_x_24__boxed_180_, v_y_25__boxed_181_);
v_r_183_ = lean_box(v_res_182_);
return v_r_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_toAttrString(uint8_t v_x_191_){
_start:
{
switch(v_x_191_)
{
case 0:
{
lean_object* v___x_192_; 
v___x_192_ = ((lean_object*)(l_Lean_ReducibilityStatus_toAttrString___closed__0));
return v___x_192_;
}
case 1:
{
lean_object* v___x_193_; 
v___x_193_ = ((lean_object*)(l_Lean_ReducibilityStatus_toAttrString___closed__1));
return v___x_193_;
}
case 2:
{
lean_object* v___x_194_; 
v___x_194_ = ((lean_object*)(l_Lean_ReducibilityStatus_toAttrString___closed__2));
return v___x_194_;
}
case 3:
{
lean_object* v___x_195_; 
v___x_195_ = ((lean_object*)(l_Lean_ReducibilityStatus_toAttrString___closed__3));
return v___x_195_;
}
default: 
{
lean_object* v___x_196_; 
v___x_196_ = ((lean_object*)(l_Lean_ReducibilityStatus_toAttrString___closed__4));
return v___x_196_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_toAttrString___boxed(lean_object* v_x_197_){
_start:
{
uint8_t v_x_49__boxed_198_; lean_object* v_res_199_; 
v_x_49__boxed_198_ = lean_unbox(v_x_197_);
v_res_199_ = l_Lean_ReducibilityStatus_toAttrString(v_x_49__boxed_198_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_(lean_object* v_s_200_, lean_object* v_p_201_){
_start:
{
lean_object* v_fst_202_; lean_object* v_snd_203_; lean_object* v___x_204_; 
v_fst_202_ = lean_ctor_get(v_p_201_, 0);
lean_inc(v_fst_202_);
v_snd_203_ = lean_ctor_get(v_p_201_, 1);
lean_inc(v_snd_203_);
lean_dec_ref(v_p_201_);
v___x_204_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_202_, v_snd_203_, v_s_200_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_init_205_, lean_object* v_x_206_){
_start:
{
if (lean_obj_tag(v_x_206_) == 0)
{
lean_object* v_k_207_; lean_object* v_v_208_; lean_object* v_l_209_; lean_object* v_r_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
v_k_207_ = lean_ctor_get(v_x_206_, 1);
v_v_208_ = lean_ctor_get(v_x_206_, 2);
v_l_209_ = lean_ctor_get(v_x_206_, 3);
v_r_210_ = lean_ctor_get(v_x_206_, 4);
v___x_211_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__0_spec__0(v_init_205_, v_l_209_);
lean_inc(v_v_208_);
lean_inc(v_k_207_);
v___x_212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_212_, 0, v_k_207_);
lean_ctor_set(v___x_212_, 1, v_v_208_);
v___x_213_ = lean_array_push(v___x_211_, v___x_212_);
v_init_205_ = v___x_213_;
v_x_206_ = v_r_210_;
goto _start;
}
else
{
return v_init_205_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_init_215_, lean_object* v_x_216_){
_start:
{
lean_object* v_res_217_; 
v_res_217_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__0_spec__0(v_init_215_, v_x_216_);
lean_dec(v_x_216_);
return v_res_217_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1___redArg___lam__0(lean_object* v_a_218_, lean_object* v_b_219_){
_start:
{
lean_object* v_fst_220_; lean_object* v_fst_221_; uint8_t v___x_222_; 
v_fst_220_ = lean_ctor_get(v_a_218_, 0);
v_fst_221_ = lean_ctor_get(v_b_219_, 0);
v___x_222_ = l_Lean_Name_quickLt(v_fst_220_, v_fst_221_);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1___redArg___lam__0___boxed(lean_object* v_a_223_, lean_object* v_b_224_){
_start:
{
uint8_t v_res_225_; lean_object* v_r_226_; 
v_res_225_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1___redArg___lam__0(v_a_223_, v_b_224_);
lean_dec_ref(v_b_224_);
lean_dec_ref(v_a_223_);
v_r_226_ = lean_box(v_res_225_);
return v_r_226_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object* v_hi_227_, lean_object* v_pivot_228_, lean_object* v_as_229_, lean_object* v_i_230_, lean_object* v_k_231_){
_start:
{
uint8_t v___x_232_; 
v___x_232_ = lean_nat_dec_lt(v_k_231_, v_hi_227_);
if (v___x_232_ == 0)
{
lean_object* v___x_233_; lean_object* v___x_234_; 
lean_dec(v_k_231_);
v___x_233_ = lean_array_fswap(v_as_229_, v_i_230_, v_hi_227_);
v___x_234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_234_, 0, v_i_230_);
lean_ctor_set(v___x_234_, 1, v___x_233_);
return v___x_234_;
}
else
{
lean_object* v___x_235_; lean_object* v_fst_236_; lean_object* v_fst_237_; uint8_t v___x_238_; 
v___x_235_ = lean_array_fget_borrowed(v_as_229_, v_k_231_);
v_fst_236_ = lean_ctor_get(v___x_235_, 0);
v_fst_237_ = lean_ctor_get(v_pivot_228_, 0);
v___x_238_ = l_Lean_Name_quickLt(v_fst_236_, v_fst_237_);
if (v___x_238_ == 0)
{
lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_239_ = lean_unsigned_to_nat(1u);
v___x_240_ = lean_nat_add(v_k_231_, v___x_239_);
lean_dec(v_k_231_);
v_k_231_ = v___x_240_;
goto _start;
}
else
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_242_ = lean_array_fswap(v_as_229_, v_i_230_, v_k_231_);
v___x_243_ = lean_unsigned_to_nat(1u);
v___x_244_ = lean_nat_add(v_i_230_, v___x_243_);
lean_dec(v_i_230_);
v___x_245_ = lean_nat_add(v_k_231_, v___x_243_);
lean_dec(v_k_231_);
v_as_229_ = v___x_242_;
v_i_230_ = v___x_244_;
v_k_231_ = v___x_245_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object* v_hi_247_, lean_object* v_pivot_248_, lean_object* v_as_249_, lean_object* v_i_250_, lean_object* v_k_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_247_, v_pivot_248_, v_as_249_, v_i_250_, v_k_251_);
lean_dec_ref(v_pivot_248_);
lean_dec(v_hi_247_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1___redArg(lean_object* v_n_253_, lean_object* v_as_254_, lean_object* v_lo_255_, lean_object* v_hi_256_){
_start:
{
lean_object* v___y_258_; uint8_t v___x_268_; 
v___x_268_ = lean_nat_dec_lt(v_lo_255_, v_hi_256_);
if (v___x_268_ == 0)
{
lean_dec(v_lo_255_);
return v_as_254_;
}
else
{
lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v_mid_271_; lean_object* v___y_273_; lean_object* v___y_279_; lean_object* v___x_284_; lean_object* v___x_285_; uint8_t v___x_286_; 
v___x_269_ = lean_nat_add(v_lo_255_, v_hi_256_);
v___x_270_ = lean_unsigned_to_nat(1u);
v_mid_271_ = lean_nat_shiftr(v___x_269_, v___x_270_);
lean_dec(v___x_269_);
v___x_284_ = lean_array_fget_borrowed(v_as_254_, v_mid_271_);
v___x_285_ = lean_array_fget_borrowed(v_as_254_, v_lo_255_);
v___x_286_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1___redArg___lam__0(v___x_284_, v___x_285_);
if (v___x_286_ == 0)
{
v___y_279_ = v_as_254_;
goto v___jp_278_;
}
else
{
lean_object* v___x_287_; 
v___x_287_ = lean_array_fswap(v_as_254_, v_lo_255_, v_mid_271_);
v___y_279_ = v___x_287_;
goto v___jp_278_;
}
v___jp_272_:
{
lean_object* v___x_274_; lean_object* v___x_275_; uint8_t v___x_276_; 
v___x_274_ = lean_array_fget_borrowed(v___y_273_, v_mid_271_);
v___x_275_ = lean_array_fget_borrowed(v___y_273_, v_hi_256_);
v___x_276_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1___redArg___lam__0(v___x_274_, v___x_275_);
if (v___x_276_ == 0)
{
lean_dec(v_mid_271_);
v___y_258_ = v___y_273_;
goto v___jp_257_;
}
else
{
lean_object* v___x_277_; 
v___x_277_ = lean_array_fswap(v___y_273_, v_mid_271_, v_hi_256_);
lean_dec(v_mid_271_);
v___y_258_ = v___x_277_;
goto v___jp_257_;
}
}
v___jp_278_:
{
lean_object* v___x_280_; lean_object* v___x_281_; uint8_t v___x_282_; 
v___x_280_ = lean_array_fget_borrowed(v___y_279_, v_hi_256_);
v___x_281_ = lean_array_fget_borrowed(v___y_279_, v_lo_255_);
v___x_282_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1___redArg___lam__0(v___x_280_, v___x_281_);
if (v___x_282_ == 0)
{
v___y_273_ = v___y_279_;
goto v___jp_272_;
}
else
{
lean_object* v___x_283_; 
v___x_283_ = lean_array_fswap(v___y_279_, v_lo_255_, v_hi_256_);
v___y_273_ = v___x_283_;
goto v___jp_272_;
}
}
}
v___jp_257_:
{
lean_object* v_pivot_259_; lean_object* v___x_260_; lean_object* v_fst_261_; lean_object* v_snd_262_; uint8_t v___x_263_; 
v_pivot_259_ = lean_array_fget(v___y_258_, v_hi_256_);
lean_inc_n(v_lo_255_, 2);
v___x_260_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_256_, v_pivot_259_, v___y_258_, v_lo_255_, v_lo_255_);
lean_dec(v_pivot_259_);
v_fst_261_ = lean_ctor_get(v___x_260_, 0);
lean_inc(v_fst_261_);
v_snd_262_ = lean_ctor_get(v___x_260_, 1);
lean_inc(v_snd_262_);
lean_dec_ref(v___x_260_);
v___x_263_ = lean_nat_dec_le(v_hi_256_, v_fst_261_);
if (v___x_263_ == 0)
{
lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; 
v___x_264_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1___redArg(v_n_253_, v_snd_262_, v_lo_255_, v_fst_261_);
v___x_265_ = lean_unsigned_to_nat(1u);
v___x_266_ = lean_nat_add(v_fst_261_, v___x_265_);
lean_dec(v_fst_261_);
v_as_254_ = v___x_264_;
v_lo_255_ = v___x_266_;
goto _start;
}
else
{
lean_dec(v_fst_261_);
lean_dec(v_lo_255_);
return v_snd_262_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object* v_n_288_, lean_object* v_as_289_, lean_object* v_lo_290_, lean_object* v_hi_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1___redArg(v_n_288_, v_as_289_, v_lo_290_, v_hi_291_);
lean_dec(v_hi_291_);
lean_dec(v_n_288_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__1_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_(lean_object* v_x_295_, lean_object* v_s_296_){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v_r_299_; lean_object* v___x_300_; lean_object* v___y_302_; lean_object* v___y_303_; uint8_t v___x_306_; 
v___x_297_ = lean_unsigned_to_nat(0u);
v___x_298_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_));
v_r_299_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__0_spec__0(v___x_298_, v_s_296_);
v___x_300_ = lean_array_get_size(v_r_299_);
v___x_306_ = lean_nat_dec_eq(v___x_300_, v___x_297_);
if (v___x_306_ == 0)
{
lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___y_310_; uint8_t v___x_312_; 
v___x_307_ = lean_unsigned_to_nat(1u);
v___x_308_ = lean_nat_sub(v___x_300_, v___x_307_);
v___x_312_ = lean_nat_dec_le(v___x_297_, v___x_308_);
if (v___x_312_ == 0)
{
lean_inc(v___x_308_);
v___y_310_ = v___x_308_;
goto v___jp_309_;
}
else
{
v___y_310_ = v___x_297_;
goto v___jp_309_;
}
v___jp_309_:
{
uint8_t v___x_311_; 
v___x_311_ = lean_nat_dec_le(v___y_310_, v___x_308_);
if (v___x_311_ == 0)
{
lean_dec(v___x_308_);
lean_inc(v___y_310_);
v___y_302_ = v___y_310_;
v___y_303_ = v___y_310_;
goto v___jp_301_;
}
else
{
v___y_302_ = v___y_310_;
v___y_303_ = v___x_308_;
goto v___jp_301_;
}
}
}
else
{
lean_object* v___x_313_; 
lean_inc_ref_n(v_r_299_, 2);
v___x_313_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_313_, 0, v_r_299_);
lean_ctor_set(v___x_313_, 1, v_r_299_);
lean_ctor_set(v___x_313_, 2, v_r_299_);
return v___x_313_;
}
v___jp_301_:
{
lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_304_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1___redArg(v___x_300_, v_r_299_, v___y_302_, v___y_303_);
lean_dec(v___y_303_);
lean_inc_ref_n(v___x_304_, 2);
v___x_305_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_305_, 0, v___x_304_);
lean_ctor_set(v___x_305_, 1, v___x_304_);
lean_ctor_set(v___x_305_, 2, v___x_304_);
return v___x_305_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__1_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2____boxed(lean_object* v_x_314_, lean_object* v_s_315_){
_start:
{
lean_object* v_res_316_; 
v_res_316_ = l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__1_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_(v_x_314_, v_s_315_);
lean_dec(v_s_315_);
lean_dec_ref(v_x_314_);
return v_res_316_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_(lean_object* v_s_329_){
_start:
{
lean_object* v___x_330_; lean_object* v___y_332_; 
v___x_330_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__5_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_));
if (lean_obj_tag(v_s_329_) == 0)
{
lean_object* v_size_336_; 
v_size_336_ = lean_ctor_get(v_s_329_, 0);
lean_inc(v_size_336_);
lean_dec_ref_known(v_s_329_, 5);
v___y_332_ = v_size_336_;
goto v___jp_331_;
}
else
{
lean_object* v___x_337_; 
v___x_337_ = lean_unsigned_to_nat(0u);
v___y_332_ = v___x_337_;
goto v___jp_331_;
}
v___jp_331_:
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
v___x_333_ = l_Nat_reprFast(v___y_332_);
v___x_334_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
v___x_335_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_335_, 0, v___x_330_);
lean_ctor_set(v___x_335_, 1, v___x_334_);
return v___x_335_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__2(lean_object* v_newState_338_, lean_object* v_x_339_, lean_object* v_x_340_){
_start:
{
if (lean_obj_tag(v_x_340_) == 0)
{
return v_x_339_;
}
else
{
lean_object* v_head_341_; lean_object* v_tail_342_; lean_object* v___x_343_; 
v_head_341_ = lean_ctor_get(v_x_340_, 0);
lean_inc(v_head_341_);
v_tail_342_ = lean_ctor_get(v_x_340_, 1);
lean_inc(v_tail_342_);
lean_dec_ref_known(v_x_340_, 2);
v___x_343_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_newState_338_, v_head_341_);
if (lean_obj_tag(v___x_343_) == 1)
{
lean_object* v_val_344_; lean_object* v___x_345_; 
v_val_344_ = lean_ctor_get(v___x_343_, 0);
lean_inc(v_val_344_);
lean_dec_ref_known(v___x_343_, 1);
v___x_345_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_head_341_, v_val_344_, v_x_339_);
v_x_339_ = v___x_345_;
v_x_340_ = v_tail_342_;
goto _start;
}
else
{
lean_dec(v___x_343_);
lean_dec(v_head_341_);
v_x_340_ = v_tail_342_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__2___boxed(lean_object* v_newState_348_, lean_object* v_x_349_, lean_object* v_x_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = l_List_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__2(v_newState_348_, v_x_349_, v_x_350_);
lean_dec(v_newState_348_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__3_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_(lean_object* v___oldState_352_, lean_object* v_newState_353_, lean_object* v_newItems_354_, lean_object* v_otherState_355_){
_start:
{
lean_object* v___x_356_; 
v___x_356_ = l_List_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__2(v_newState_353_, v_otherState_355_, v_newItems_354_);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__3_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2____boxed(lean_object* v___oldState_357_, lean_object* v_newState_358_, lean_object* v_newItems_359_, lean_object* v_otherState_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__3_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_(v___oldState_357_, v_newState_358_, v_newItems_359_, v_otherState_360_);
lean_dec(v_newState_358_);
lean_dec(v___oldState_357_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__4_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_(lean_object* v_m_362_){
_start:
{
lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v_r_365_; lean_object* v___x_366_; uint8_t v___x_367_; 
v___x_363_ = lean_unsigned_to_nat(0u);
v___x_364_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_));
v_r_365_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__0_spec__0(v___x_364_, v_m_362_);
v___x_366_ = lean_array_get_size(v_r_365_);
v___x_367_ = lean_nat_dec_eq(v___x_366_, v___x_363_);
if (v___x_367_ == 0)
{
lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___y_371_; uint8_t v___x_375_; 
v___x_368_ = lean_unsigned_to_nat(1u);
v___x_369_ = lean_nat_sub(v___x_366_, v___x_368_);
v___x_375_ = lean_nat_dec_le(v___x_363_, v___x_369_);
if (v___x_375_ == 0)
{
lean_inc(v___x_369_);
v___y_371_ = v___x_369_;
goto v___jp_370_;
}
else
{
v___y_371_ = v___x_363_;
goto v___jp_370_;
}
v___jp_370_:
{
uint8_t v___x_372_; 
v___x_372_ = lean_nat_dec_le(v___y_371_, v___x_369_);
if (v___x_372_ == 0)
{
lean_object* v___x_373_; 
lean_dec(v___x_369_);
lean_inc(v___y_371_);
v___x_373_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1___redArg(v___x_366_, v_r_365_, v___y_371_, v___y_371_);
lean_dec(v___y_371_);
return v___x_373_;
}
else
{
lean_object* v___x_374_; 
v___x_374_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1___redArg(v___x_366_, v_r_365_, v___y_371_, v___x_369_);
lean_dec(v___x_369_);
return v___x_374_;
}
}
}
else
{
return v_r_365_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__4_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2____boxed(lean_object* v_m_376_){
_start:
{
lean_object* v_res_377_; 
v_res_377_ = l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__4_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_(v_m_376_);
lean_dec(v_m_376_);
return v_res_377_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__5_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_(lean_object* v___x_378_){
_start:
{
lean_object* v___x_380_; 
v___x_380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_380_, 0, v___x_378_);
return v___x_380_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__5_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2____boxed(lean_object* v___x_381_, lean_object* v___y_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__5_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_(v___x_381_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__6_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_(lean_object* v___x_384_, lean_object* v_x_385_, lean_object* v_x_386_){
_start:
{
lean_object* v___x_388_; 
v___x_388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_388_, 0, v___x_384_);
return v___x_388_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__6_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2____boxed(lean_object* v___x_389_, lean_object* v_x_390_, lean_object* v_x_391_, lean_object* v___y_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__6_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_(v___x_389_, v_x_390_, v_x_391_);
lean_dec_ref(v_x_391_);
lean_dec_ref(v_x_390_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_425_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__12_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_));
v___x_426_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_425_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2____boxed(lean_object* v_a_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_();
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__0(lean_object* v_init_429_, lean_object* v_t_430_){
_start:
{
lean_object* v___x_431_; 
v___x_431_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__0_spec__0(v_init_429_, v_t_430_);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__0___boxed(lean_object* v_init_432_, lean_object* v_t_433_){
_start:
{
lean_object* v_res_434_; 
v_res_434_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__0(v_init_432_, v_t_433_);
lean_dec(v_t_433_);
return v_res_434_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1(lean_object* v_n_435_, lean_object* v_as_436_, lean_object* v_lo_437_, lean_object* v_hi_438_, lean_object* v_w_439_, lean_object* v_hlo_440_, lean_object* v_hhi_441_){
_start:
{
lean_object* v___x_442_; 
v___x_442_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1___redArg(v_n_435_, v_as_436_, v_lo_437_, v_hi_438_);
return v___x_442_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1___boxed(lean_object* v_n_443_, lean_object* v_as_444_, lean_object* v_lo_445_, lean_object* v_hi_446_, lean_object* v_w_447_, lean_object* v_hlo_448_, lean_object* v_hhi_449_){
_start:
{
lean_object* v_res_450_; 
v_res_450_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1(v_n_443_, v_as_444_, v_lo_445_, v_hi_446_, v_w_447_, v_hlo_448_, v_hhi_449_);
lean_dec(v_hi_446_);
lean_dec(v_n_443_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_n_451_, lean_object* v_lo_452_, lean_object* v_hi_453_, lean_object* v_hhi_454_, lean_object* v_pivot_455_, lean_object* v_as_456_, lean_object* v_i_457_, lean_object* v_k_458_, lean_object* v_ilo_459_, lean_object* v_ik_460_, lean_object* v_w_461_){
_start:
{
lean_object* v___x_462_; 
v___x_462_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_453_, v_pivot_455_, v_as_456_, v_i_457_, v_k_458_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object* v_n_463_, lean_object* v_lo_464_, lean_object* v_hi_465_, lean_object* v_hhi_466_, lean_object* v_pivot_467_, lean_object* v_as_468_, lean_object* v_i_469_, lean_object* v_k_470_, lean_object* v_ilo_471_, lean_object* v_ik_472_, lean_object* v_w_473_){
_start:
{
lean_object* v_res_474_; 
v_res_474_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2__spec__1_spec__2(v_n_463_, v_lo_464_, v_hi_465_, v_hhi_466_, v_pivot_467_, v_as_468_, v_i_469_, v_k_470_, v_ilo_471_, v_ik_472_, v_w_473_);
lean_dec_ref(v_pivot_467_);
lean_dec(v_hi_465_);
lean_dec(v_lo_464_);
lean_dec(v_n_463_);
return v_res_474_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_switch___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__0___redArg(lean_object* v_m_475_){
_start:
{
uint8_t v_stage_u2081_476_; 
v_stage_u2081_476_ = lean_ctor_get_uint8(v_m_475_, sizeof(void*)*2);
if (v_stage_u2081_476_ == 0)
{
return v_m_475_;
}
else
{
lean_object* v_map_u2081_477_; lean_object* v_map_u2082_478_; lean_object* v___x_480_; uint8_t v_isShared_481_; uint8_t v_isSharedCheck_486_; 
v_map_u2081_477_ = lean_ctor_get(v_m_475_, 0);
v_map_u2082_478_ = lean_ctor_get(v_m_475_, 1);
v_isSharedCheck_486_ = !lean_is_exclusive(v_m_475_);
if (v_isSharedCheck_486_ == 0)
{
v___x_480_ = v_m_475_;
v_isShared_481_ = v_isSharedCheck_486_;
goto v_resetjp_479_;
}
else
{
lean_inc(v_map_u2082_478_);
lean_inc(v_map_u2081_477_);
lean_dec(v_m_475_);
v___x_480_ = lean_box(0);
v_isShared_481_ = v_isSharedCheck_486_;
goto v_resetjp_479_;
}
v_resetjp_479_:
{
uint8_t v___x_482_; lean_object* v___x_484_; 
v___x_482_ = 0;
if (v_isShared_481_ == 0)
{
v___x_484_ = v___x_480_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_485_; 
v_reuseFailAlloc_485_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_485_, 0, v_map_u2081_477_);
lean_ctor_set(v_reuseFailAlloc_485_, 1, v_map_u2082_478_);
v___x_484_ = v_reuseFailAlloc_485_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
lean_ctor_set_uint8(v___x_484_, sizeof(void*)*2, v___x_482_);
return v___x_484_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_switch___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b2_487_, lean_object* v_m_488_){
_start:
{
lean_object* v___x_489_; 
v___x_489_ = l_Lean_SMap_switch___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__0___redArg(v_m_488_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_(lean_object* v_x_490_){
_start:
{
lean_object* v_fst_491_; 
v_fst_491_ = lean_ctor_get(v_x_490_, 0);
lean_inc(v_fst_491_);
return v_fst_491_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2____boxed(lean_object* v_x_492_){
_start:
{
lean_object* v_res_493_; 
v_res_493_ = l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_(v_x_492_);
lean_dec_ref(v_x_492_);
return v_res_493_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__1_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_(lean_object* v_x_494_, lean_object* v_a_495_){
_start:
{
lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_496_, 0, v_a_495_);
lean_inc_ref_n(v___x_496_, 2);
v___x_497_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_497_, 0, v___x_496_);
lean_ctor_set(v___x_497_, 1, v___x_496_);
lean_ctor_set(v___x_497_, 2, v___x_496_);
return v___x_497_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__1_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2____boxed(lean_object* v_x_498_, lean_object* v_a_499_){
_start:
{
lean_object* v_res_500_; 
v_res_500_ = l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__1_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_(v_x_498_, v_a_499_);
lean_dec_ref(v_x_498_);
return v_res_500_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg(lean_object* v_a_501_, lean_object* v_x_502_){
_start:
{
if (lean_obj_tag(v_x_502_) == 0)
{
uint8_t v___x_503_; 
v___x_503_ = 0;
return v___x_503_;
}
else
{
lean_object* v_key_504_; lean_object* v_tail_505_; uint8_t v___x_506_; 
v_key_504_ = lean_ctor_get(v_x_502_, 0);
v_tail_505_ = lean_ctor_get(v_x_502_, 2);
v___x_506_ = lean_name_eq(v_key_504_, v_a_501_);
if (v___x_506_ == 0)
{
v_x_502_ = v_tail_505_;
goto _start;
}
else
{
return v___x_506_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_a_508_, lean_object* v_x_509_){
_start:
{
uint8_t v_res_510_; lean_object* v_r_511_; 
v_res_510_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg(v_a_508_, v_x_509_);
lean_dec(v_x_509_);
lean_dec(v_a_508_);
v_r_511_ = lean_box(v_res_510_);
return v_r_511_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10___redArg(lean_object* v_x_512_, lean_object* v_x_513_){
_start:
{
if (lean_obj_tag(v_x_513_) == 0)
{
return v_x_512_;
}
else
{
lean_object* v_key_514_; lean_object* v_value_515_; lean_object* v_tail_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_542_; 
v_key_514_ = lean_ctor_get(v_x_513_, 0);
v_value_515_ = lean_ctor_get(v_x_513_, 1);
v_tail_516_ = lean_ctor_get(v_x_513_, 2);
v_isSharedCheck_542_ = !lean_is_exclusive(v_x_513_);
if (v_isSharedCheck_542_ == 0)
{
v___x_518_ = v_x_513_;
v_isShared_519_ = v_isSharedCheck_542_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_tail_516_);
lean_inc(v_value_515_);
lean_inc(v_key_514_);
lean_dec(v_x_513_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_542_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_520_; uint64_t v___y_522_; 
v___x_520_ = lean_array_get_size(v_x_512_);
if (lean_obj_tag(v_key_514_) == 0)
{
uint64_t v___x_540_; 
v___x_540_ = 1723ULL;
v___y_522_ = v___x_540_;
goto v___jp_521_;
}
else
{
uint64_t v_hash_541_; 
v_hash_541_ = lean_ctor_get_uint64(v_key_514_, sizeof(void*)*2);
v___y_522_ = v_hash_541_;
goto v___jp_521_;
}
v___jp_521_:
{
uint64_t v___x_523_; uint64_t v___x_524_; uint64_t v_fold_525_; uint64_t v___x_526_; uint64_t v___x_527_; uint64_t v___x_528_; size_t v___x_529_; size_t v___x_530_; size_t v___x_531_; size_t v___x_532_; size_t v___x_533_; lean_object* v___x_534_; lean_object* v___x_536_; 
v___x_523_ = 32ULL;
v___x_524_ = lean_uint64_shift_right(v___y_522_, v___x_523_);
v_fold_525_ = lean_uint64_xor(v___y_522_, v___x_524_);
v___x_526_ = 16ULL;
v___x_527_ = lean_uint64_shift_right(v_fold_525_, v___x_526_);
v___x_528_ = lean_uint64_xor(v_fold_525_, v___x_527_);
v___x_529_ = lean_uint64_to_usize(v___x_528_);
v___x_530_ = lean_usize_of_nat(v___x_520_);
v___x_531_ = ((size_t)1ULL);
v___x_532_ = lean_usize_sub(v___x_530_, v___x_531_);
v___x_533_ = lean_usize_land(v___x_529_, v___x_532_);
v___x_534_ = lean_array_uget_borrowed(v_x_512_, v___x_533_);
lean_inc(v___x_534_);
if (v_isShared_519_ == 0)
{
lean_ctor_set(v___x_518_, 2, v___x_534_);
v___x_536_ = v___x_518_;
goto v_reusejp_535_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v_key_514_);
lean_ctor_set(v_reuseFailAlloc_539_, 1, v_value_515_);
lean_ctor_set(v_reuseFailAlloc_539_, 2, v___x_534_);
v___x_536_ = v_reuseFailAlloc_539_;
goto v_reusejp_535_;
}
v_reusejp_535_:
{
lean_object* v___x_537_; 
v___x_537_ = lean_array_uset(v_x_512_, v___x_533_, v___x_536_);
v_x_512_ = v___x_537_;
v_x_513_ = v_tail_516_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8___redArg(lean_object* v_i_543_, lean_object* v_source_544_, lean_object* v_target_545_){
_start:
{
lean_object* v___x_546_; uint8_t v___x_547_; 
v___x_546_ = lean_array_get_size(v_source_544_);
v___x_547_ = lean_nat_dec_lt(v_i_543_, v___x_546_);
if (v___x_547_ == 0)
{
lean_dec_ref(v_source_544_);
lean_dec(v_i_543_);
return v_target_545_;
}
else
{
lean_object* v_es_548_; lean_object* v___x_549_; lean_object* v_source_550_; lean_object* v_target_551_; lean_object* v___x_552_; lean_object* v___x_553_; 
v_es_548_ = lean_array_fget(v_source_544_, v_i_543_);
v___x_549_ = lean_box(0);
v_source_550_ = lean_array_fset(v_source_544_, v_i_543_, v___x_549_);
v_target_551_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10___redArg(v_target_545_, v_es_548_);
v___x_552_ = lean_unsigned_to_nat(1u);
v___x_553_ = lean_nat_add(v_i_543_, v___x_552_);
lean_dec(v_i_543_);
v_i_543_ = v___x_553_;
v_source_544_ = v_source_550_;
v_target_545_ = v_target_551_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__5___redArg(lean_object* v_data_555_){
_start:
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v_nbuckets_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; 
v___x_556_ = lean_array_get_size(v_data_555_);
v___x_557_ = lean_unsigned_to_nat(2u);
v_nbuckets_558_ = lean_nat_mul(v___x_556_, v___x_557_);
v___x_559_ = lean_unsigned_to_nat(0u);
v___x_560_ = lean_box(0);
v___x_561_ = lean_mk_array(v_nbuckets_558_, v___x_560_);
v___x_562_ = lean_array_propagate_mark(v_data_555_, v___x_561_);
v___x_563_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8___redArg(v___x_559_, v_data_555_, v___x_562_);
return v___x_563_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__6___redArg(lean_object* v_a_564_, lean_object* v_b_565_, lean_object* v_x_566_){
_start:
{
if (lean_obj_tag(v_x_566_) == 0)
{
lean_dec(v_b_565_);
lean_dec(v_a_564_);
return v_x_566_;
}
else
{
lean_object* v_key_567_; lean_object* v_value_568_; lean_object* v_tail_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_581_; 
v_key_567_ = lean_ctor_get(v_x_566_, 0);
v_value_568_ = lean_ctor_get(v_x_566_, 1);
v_tail_569_ = lean_ctor_get(v_x_566_, 2);
v_isSharedCheck_581_ = !lean_is_exclusive(v_x_566_);
if (v_isSharedCheck_581_ == 0)
{
v___x_571_ = v_x_566_;
v_isShared_572_ = v_isSharedCheck_581_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_tail_569_);
lean_inc(v_value_568_);
lean_inc(v_key_567_);
lean_dec(v_x_566_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_581_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
uint8_t v___x_573_; 
v___x_573_ = lean_name_eq(v_key_567_, v_a_564_);
if (v___x_573_ == 0)
{
lean_object* v___x_574_; lean_object* v___x_576_; 
v___x_574_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__6___redArg(v_a_564_, v_b_565_, v_tail_569_);
if (v_isShared_572_ == 0)
{
lean_ctor_set(v___x_571_, 2, v___x_574_);
v___x_576_ = v___x_571_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v_key_567_);
lean_ctor_set(v_reuseFailAlloc_577_, 1, v_value_568_);
lean_ctor_set(v_reuseFailAlloc_577_, 2, v___x_574_);
v___x_576_ = v_reuseFailAlloc_577_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
return v___x_576_;
}
}
else
{
lean_object* v___x_579_; 
lean_dec(v_value_568_);
lean_dec(v_key_567_);
if (v_isShared_572_ == 0)
{
lean_ctor_set(v___x_571_, 1, v_b_565_);
lean_ctor_set(v___x_571_, 0, v_a_564_);
v___x_579_ = v___x_571_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v_a_564_);
lean_ctor_set(v_reuseFailAlloc_580_, 1, v_b_565_);
lean_ctor_set(v_reuseFailAlloc_580_, 2, v_tail_569_);
v___x_579_ = v_reuseFailAlloc_580_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
return v___x_579_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object* v_m_582_, lean_object* v_a_583_, lean_object* v_b_584_){
_start:
{
lean_object* v_size_585_; lean_object* v_buckets_586_; lean_object* v___x_588_; uint8_t v_isShared_589_; uint8_t v_isSharedCheck_632_; 
v_size_585_ = lean_ctor_get(v_m_582_, 0);
v_buckets_586_ = lean_ctor_get(v_m_582_, 1);
v_isSharedCheck_632_ = !lean_is_exclusive(v_m_582_);
if (v_isSharedCheck_632_ == 0)
{
v___x_588_ = v_m_582_;
v_isShared_589_ = v_isSharedCheck_632_;
goto v_resetjp_587_;
}
else
{
lean_inc(v_buckets_586_);
lean_inc(v_size_585_);
lean_dec(v_m_582_);
v___x_588_ = lean_box(0);
v_isShared_589_ = v_isSharedCheck_632_;
goto v_resetjp_587_;
}
v_resetjp_587_:
{
lean_object* v___x_590_; uint64_t v___y_592_; 
v___x_590_ = lean_array_get_size(v_buckets_586_);
if (lean_obj_tag(v_a_583_) == 0)
{
uint64_t v___x_630_; 
v___x_630_ = 1723ULL;
v___y_592_ = v___x_630_;
goto v___jp_591_;
}
else
{
uint64_t v_hash_631_; 
v_hash_631_ = lean_ctor_get_uint64(v_a_583_, sizeof(void*)*2);
v___y_592_ = v_hash_631_;
goto v___jp_591_;
}
v___jp_591_:
{
uint64_t v___x_593_; uint64_t v___x_594_; uint64_t v_fold_595_; uint64_t v___x_596_; uint64_t v___x_597_; uint64_t v___x_598_; size_t v___x_599_; size_t v___x_600_; size_t v___x_601_; size_t v___x_602_; size_t v___x_603_; lean_object* v_bkt_604_; uint8_t v___x_605_; 
v___x_593_ = 32ULL;
v___x_594_ = lean_uint64_shift_right(v___y_592_, v___x_593_);
v_fold_595_ = lean_uint64_xor(v___y_592_, v___x_594_);
v___x_596_ = 16ULL;
v___x_597_ = lean_uint64_shift_right(v_fold_595_, v___x_596_);
v___x_598_ = lean_uint64_xor(v_fold_595_, v___x_597_);
v___x_599_ = lean_uint64_to_usize(v___x_598_);
v___x_600_ = lean_usize_of_nat(v___x_590_);
v___x_601_ = ((size_t)1ULL);
v___x_602_ = lean_usize_sub(v___x_600_, v___x_601_);
v___x_603_ = lean_usize_land(v___x_599_, v___x_602_);
v_bkt_604_ = lean_array_uget_borrowed(v_buckets_586_, v___x_603_);
v___x_605_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg(v_a_583_, v_bkt_604_);
if (v___x_605_ == 0)
{
lean_object* v___x_606_; lean_object* v_size_x27_607_; lean_object* v___x_608_; lean_object* v_buckets_x27_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; uint8_t v___x_615_; 
v___x_606_ = lean_unsigned_to_nat(1u);
v_size_x27_607_ = lean_nat_add(v_size_585_, v___x_606_);
lean_dec(v_size_585_);
lean_inc(v_bkt_604_);
v___x_608_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_608_, 0, v_a_583_);
lean_ctor_set(v___x_608_, 1, v_b_584_);
lean_ctor_set(v___x_608_, 2, v_bkt_604_);
v_buckets_x27_609_ = lean_array_uset(v_buckets_586_, v___x_603_, v___x_608_);
v___x_610_ = lean_unsigned_to_nat(4u);
v___x_611_ = lean_nat_mul(v_size_x27_607_, v___x_610_);
v___x_612_ = lean_unsigned_to_nat(3u);
v___x_613_ = lean_nat_div(v___x_611_, v___x_612_);
lean_dec(v___x_611_);
v___x_614_ = lean_array_get_size(v_buckets_x27_609_);
v___x_615_ = lean_nat_dec_le(v___x_613_, v___x_614_);
lean_dec(v___x_613_);
if (v___x_615_ == 0)
{
lean_object* v_val_616_; lean_object* v___x_618_; 
v_val_616_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__5___redArg(v_buckets_x27_609_);
if (v_isShared_589_ == 0)
{
lean_ctor_set(v___x_588_, 1, v_val_616_);
lean_ctor_set(v___x_588_, 0, v_size_x27_607_);
v___x_618_ = v___x_588_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_size_x27_607_);
lean_ctor_set(v_reuseFailAlloc_619_, 1, v_val_616_);
v___x_618_ = v_reuseFailAlloc_619_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
return v___x_618_;
}
}
else
{
lean_object* v___x_621_; 
if (v_isShared_589_ == 0)
{
lean_ctor_set(v___x_588_, 1, v_buckets_x27_609_);
lean_ctor_set(v___x_588_, 0, v_size_x27_607_);
v___x_621_ = v___x_588_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v_size_x27_607_);
lean_ctor_set(v_reuseFailAlloc_622_, 1, v_buckets_x27_609_);
v___x_621_ = v_reuseFailAlloc_622_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
return v___x_621_;
}
}
}
else
{
lean_object* v___x_623_; lean_object* v_buckets_x27_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_628_; 
lean_inc(v_bkt_604_);
v___x_623_ = lean_box(0);
v_buckets_x27_624_ = lean_array_uset(v_buckets_586_, v___x_603_, v___x_623_);
v___x_625_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__6___redArg(v_a_583_, v_b_584_, v_bkt_604_);
v___x_626_ = lean_array_uset(v_buckets_x27_624_, v___x_603_, v___x_625_);
if (v_isShared_589_ == 0)
{
lean_ctor_set(v___x_588_, 1, v___x_626_);
v___x_628_ = v___x_588_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v_size_585_);
lean_ctor_set(v_reuseFailAlloc_629_, 1, v___x_626_);
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
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__3_spec__5___redArg(lean_object* v_x_633_, lean_object* v_x_634_, lean_object* v_x_635_, lean_object* v_x_636_){
_start:
{
lean_object* v_ks_637_; lean_object* v_vs_638_; lean_object* v___x_640_; uint8_t v_isShared_641_; uint8_t v_isSharedCheck_662_; 
v_ks_637_ = lean_ctor_get(v_x_633_, 0);
v_vs_638_ = lean_ctor_get(v_x_633_, 1);
v_isSharedCheck_662_ = !lean_is_exclusive(v_x_633_);
if (v_isSharedCheck_662_ == 0)
{
v___x_640_ = v_x_633_;
v_isShared_641_ = v_isSharedCheck_662_;
goto v_resetjp_639_;
}
else
{
lean_inc(v_vs_638_);
lean_inc(v_ks_637_);
lean_dec(v_x_633_);
v___x_640_ = lean_box(0);
v_isShared_641_ = v_isSharedCheck_662_;
goto v_resetjp_639_;
}
v_resetjp_639_:
{
lean_object* v___x_642_; uint8_t v___x_643_; 
v___x_642_ = lean_array_get_size(v_ks_637_);
v___x_643_ = lean_nat_dec_lt(v_x_634_, v___x_642_);
if (v___x_643_ == 0)
{
lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_647_; 
lean_dec(v_x_634_);
v___x_644_ = lean_array_push(v_ks_637_, v_x_635_);
v___x_645_ = lean_array_push(v_vs_638_, v_x_636_);
if (v_isShared_641_ == 0)
{
lean_ctor_set(v___x_640_, 1, v___x_645_);
lean_ctor_set(v___x_640_, 0, v___x_644_);
v___x_647_ = v___x_640_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v___x_644_);
lean_ctor_set(v_reuseFailAlloc_648_, 1, v___x_645_);
v___x_647_ = v_reuseFailAlloc_648_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
return v___x_647_;
}
}
else
{
lean_object* v_k_x27_649_; uint8_t v___x_650_; 
v_k_x27_649_ = lean_array_fget_borrowed(v_ks_637_, v_x_634_);
v___x_650_ = lean_name_eq(v_x_635_, v_k_x27_649_);
if (v___x_650_ == 0)
{
lean_object* v___x_652_; 
if (v_isShared_641_ == 0)
{
v___x_652_ = v___x_640_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v_ks_637_);
lean_ctor_set(v_reuseFailAlloc_656_, 1, v_vs_638_);
v___x_652_ = v_reuseFailAlloc_656_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
lean_object* v___x_653_; lean_object* v___x_654_; 
v___x_653_ = lean_unsigned_to_nat(1u);
v___x_654_ = lean_nat_add(v_x_634_, v___x_653_);
lean_dec(v_x_634_);
v_x_633_ = v___x_652_;
v_x_634_ = v___x_654_;
goto _start;
}
}
else
{
lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_660_; 
v___x_657_ = lean_array_fset(v_ks_637_, v_x_634_, v_x_635_);
v___x_658_ = lean_array_fset(v_vs_638_, v_x_634_, v_x_636_);
lean_dec(v_x_634_);
if (v_isShared_641_ == 0)
{
lean_ctor_set(v___x_640_, 1, v___x_658_);
lean_ctor_set(v___x_640_, 0, v___x_657_);
v___x_660_ = v___x_640_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v___x_657_);
lean_ctor_set(v_reuseFailAlloc_661_, 1, v___x_658_);
v___x_660_ = v_reuseFailAlloc_661_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
return v___x_660_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__3___redArg(lean_object* v_n_663_, lean_object* v_k_664_, lean_object* v_v_665_){
_start:
{
lean_object* v___x_666_; lean_object* v___x_667_; 
v___x_666_ = lean_unsigned_to_nat(0u);
v___x_667_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__3_spec__5___redArg(v_n_663_, v___x_666_, v_k_664_, v_v_665_);
return v___x_667_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_668_; 
v___x_668_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_668_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg(lean_object* v_x_669_, size_t v_x_670_, size_t v_x_671_, lean_object* v_x_672_, lean_object* v_x_673_){
_start:
{
if (lean_obj_tag(v_x_669_) == 0)
{
lean_object* v_es_674_; size_t v___x_675_; size_t v___x_676_; lean_object* v_j_677_; lean_object* v___x_678_; uint8_t v___x_679_; 
v_es_674_ = lean_ctor_get(v_x_669_, 0);
v___x_675_ = ((size_t)31ULL);
v___x_676_ = lean_usize_land(v_x_670_, v___x_675_);
v_j_677_ = lean_usize_to_nat(v___x_676_);
v___x_678_ = lean_array_get_size(v_es_674_);
v___x_679_ = lean_nat_dec_lt(v_j_677_, v___x_678_);
if (v___x_679_ == 0)
{
lean_dec(v_j_677_);
lean_dec(v_x_673_);
lean_dec(v_x_672_);
return v_x_669_;
}
else
{
lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_718_; 
lean_inc_ref(v_es_674_);
v_isSharedCheck_718_ = !lean_is_exclusive(v_x_669_);
if (v_isSharedCheck_718_ == 0)
{
lean_object* v_unused_719_; 
v_unused_719_ = lean_ctor_get(v_x_669_, 0);
lean_dec(v_unused_719_);
v___x_681_ = v_x_669_;
v_isShared_682_ = v_isSharedCheck_718_;
goto v_resetjp_680_;
}
else
{
lean_dec(v_x_669_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_718_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
lean_object* v_v_683_; lean_object* v___x_684_; lean_object* v_xs_x27_685_; lean_object* v___y_687_; 
v_v_683_ = lean_array_fget(v_es_674_, v_j_677_);
v___x_684_ = lean_box(0);
v_xs_x27_685_ = lean_array_fset(v_es_674_, v_j_677_, v___x_684_);
switch(lean_obj_tag(v_v_683_))
{
case 0:
{
lean_object* v_key_692_; lean_object* v_val_693_; lean_object* v___x_695_; uint8_t v_isShared_696_; uint8_t v_isSharedCheck_703_; 
v_key_692_ = lean_ctor_get(v_v_683_, 0);
v_val_693_ = lean_ctor_get(v_v_683_, 1);
v_isSharedCheck_703_ = !lean_is_exclusive(v_v_683_);
if (v_isSharedCheck_703_ == 0)
{
v___x_695_ = v_v_683_;
v_isShared_696_ = v_isSharedCheck_703_;
goto v_resetjp_694_;
}
else
{
lean_inc(v_val_693_);
lean_inc(v_key_692_);
lean_dec(v_v_683_);
v___x_695_ = lean_box(0);
v_isShared_696_ = v_isSharedCheck_703_;
goto v_resetjp_694_;
}
v_resetjp_694_:
{
uint8_t v___x_697_; 
v___x_697_ = lean_name_eq(v_x_672_, v_key_692_);
if (v___x_697_ == 0)
{
lean_object* v___x_698_; lean_object* v___x_699_; 
lean_del_object(v___x_695_);
v___x_698_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_692_, v_val_693_, v_x_672_, v_x_673_);
v___x_699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_699_, 0, v___x_698_);
v___y_687_ = v___x_699_;
goto v___jp_686_;
}
else
{
lean_object* v___x_701_; 
lean_dec(v_val_693_);
lean_dec(v_key_692_);
if (v_isShared_696_ == 0)
{
lean_ctor_set(v___x_695_, 1, v_x_673_);
lean_ctor_set(v___x_695_, 0, v_x_672_);
v___x_701_ = v___x_695_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v_x_672_);
lean_ctor_set(v_reuseFailAlloc_702_, 1, v_x_673_);
v___x_701_ = v_reuseFailAlloc_702_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
v___y_687_ = v___x_701_;
goto v___jp_686_;
}
}
}
}
case 1:
{
lean_object* v_node_704_; lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_716_; 
v_node_704_ = lean_ctor_get(v_v_683_, 0);
v_isSharedCheck_716_ = !lean_is_exclusive(v_v_683_);
if (v_isSharedCheck_716_ == 0)
{
v___x_706_ = v_v_683_;
v_isShared_707_ = v_isSharedCheck_716_;
goto v_resetjp_705_;
}
else
{
lean_inc(v_node_704_);
lean_dec(v_v_683_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_716_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
size_t v___x_708_; size_t v___x_709_; size_t v___x_710_; size_t v___x_711_; lean_object* v___x_712_; lean_object* v___x_714_; 
v___x_708_ = ((size_t)5ULL);
v___x_709_ = lean_usize_shift_right(v_x_670_, v___x_708_);
v___x_710_ = ((size_t)1ULL);
v___x_711_ = lean_usize_add(v_x_671_, v___x_710_);
v___x_712_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg(v_node_704_, v___x_709_, v___x_711_, v_x_672_, v_x_673_);
if (v_isShared_707_ == 0)
{
lean_ctor_set(v___x_706_, 0, v___x_712_);
v___x_714_ = v___x_706_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_715_; 
v_reuseFailAlloc_715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_715_, 0, v___x_712_);
v___x_714_ = v_reuseFailAlloc_715_;
goto v_reusejp_713_;
}
v_reusejp_713_:
{
v___y_687_ = v___x_714_;
goto v___jp_686_;
}
}
}
default: 
{
lean_object* v___x_717_; 
v___x_717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_717_, 0, v_x_672_);
lean_ctor_set(v___x_717_, 1, v_x_673_);
v___y_687_ = v___x_717_;
goto v___jp_686_;
}
}
v___jp_686_:
{
lean_object* v___x_688_; lean_object* v___x_690_; 
v___x_688_ = lean_array_fset(v_xs_x27_685_, v_j_677_, v___y_687_);
lean_dec(v_j_677_);
if (v_isShared_682_ == 0)
{
lean_ctor_set(v___x_681_, 0, v___x_688_);
v___x_690_ = v___x_681_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v___x_688_);
v___x_690_ = v_reuseFailAlloc_691_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
return v___x_690_;
}
}
}
}
}
else
{
lean_object* v_ks_720_; lean_object* v_vs_721_; lean_object* v___x_723_; uint8_t v_isShared_724_; uint8_t v_isSharedCheck_739_; 
v_ks_720_ = lean_ctor_get(v_x_669_, 0);
v_vs_721_ = lean_ctor_get(v_x_669_, 1);
v_isSharedCheck_739_ = !lean_is_exclusive(v_x_669_);
if (v_isSharedCheck_739_ == 0)
{
v___x_723_ = v_x_669_;
v_isShared_724_ = v_isSharedCheck_739_;
goto v_resetjp_722_;
}
else
{
lean_inc(v_vs_721_);
lean_inc(v_ks_720_);
lean_dec(v_x_669_);
v___x_723_ = lean_box(0);
v_isShared_724_ = v_isSharedCheck_739_;
goto v_resetjp_722_;
}
v_resetjp_722_:
{
lean_object* v___x_726_; 
if (v_isShared_724_ == 0)
{
v___x_726_ = v___x_723_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v_ks_720_);
lean_ctor_set(v_reuseFailAlloc_738_, 1, v_vs_721_);
v___x_726_ = v_reuseFailAlloc_738_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
lean_object* v_newNode_727_; size_t v___x_728_; uint8_t v___x_729_; 
v_newNode_727_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__3___redArg(v___x_726_, v_x_672_, v_x_673_);
v___x_728_ = ((size_t)7ULL);
v___x_729_ = lean_usize_dec_le(v___x_728_, v_x_671_);
if (v___x_729_ == 0)
{
lean_object* v___x_730_; lean_object* v___x_731_; uint8_t v___x_732_; 
v___x_730_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_727_);
v___x_731_ = lean_unsigned_to_nat(4u);
v___x_732_ = lean_nat_dec_lt(v___x_730_, v___x_731_);
lean_dec(v___x_730_);
if (v___x_732_ == 0)
{
lean_object* v_ks_733_; lean_object* v_vs_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v_ks_733_ = lean_ctor_get(v_newNode_727_, 0);
lean_inc_ref(v_ks_733_);
v_vs_734_ = lean_ctor_get(v_newNode_727_, 1);
lean_inc_ref(v_vs_734_);
lean_dec_ref(v_newNode_727_);
v___x_735_ = lean_unsigned_to_nat(0u);
v___x_736_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___closed__0);
v___x_737_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg(v_x_671_, v_ks_733_, v_vs_734_, v___x_735_, v___x_736_);
lean_dec_ref(v_vs_734_);
lean_dec_ref(v_ks_733_);
return v___x_737_;
}
else
{
return v_newNode_727_;
}
}
else
{
return v_newNode_727_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg(size_t v_depth_740_, lean_object* v_keys_741_, lean_object* v_vals_742_, lean_object* v_i_743_, lean_object* v_entries_744_){
_start:
{
lean_object* v___x_745_; uint8_t v___x_746_; 
v___x_745_ = lean_array_get_size(v_keys_741_);
v___x_746_ = lean_nat_dec_lt(v_i_743_, v___x_745_);
if (v___x_746_ == 0)
{
lean_dec(v_i_743_);
return v_entries_744_;
}
else
{
lean_object* v_k_747_; lean_object* v_v_748_; uint64_t v___y_750_; 
v_k_747_ = lean_array_fget_borrowed(v_keys_741_, v_i_743_);
v_v_748_ = lean_array_fget_borrowed(v_vals_742_, v_i_743_);
if (lean_obj_tag(v_k_747_) == 0)
{
uint64_t v___x_761_; 
v___x_761_ = 1723ULL;
v___y_750_ = v___x_761_;
goto v___jp_749_;
}
else
{
uint64_t v_hash_762_; 
v_hash_762_ = lean_ctor_get_uint64(v_k_747_, sizeof(void*)*2);
v___y_750_ = v_hash_762_;
goto v___jp_749_;
}
v___jp_749_:
{
size_t v_h_751_; size_t v___x_752_; lean_object* v___x_753_; size_t v___x_754_; size_t v___x_755_; size_t v___x_756_; size_t v_h_757_; lean_object* v___x_758_; lean_object* v___x_759_; 
v_h_751_ = lean_uint64_to_usize(v___y_750_);
v___x_752_ = ((size_t)5ULL);
v___x_753_ = lean_unsigned_to_nat(1u);
v___x_754_ = ((size_t)1ULL);
v___x_755_ = lean_usize_sub(v_depth_740_, v___x_754_);
v___x_756_ = lean_usize_mul(v___x_752_, v___x_755_);
v_h_757_ = lean_usize_shift_right(v_h_751_, v___x_756_);
v___x_758_ = lean_nat_add(v_i_743_, v___x_753_);
lean_dec(v_i_743_);
lean_inc(v_v_748_);
lean_inc(v_k_747_);
v___x_759_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg(v_entries_744_, v_h_757_, v_depth_740_, v_k_747_, v_v_748_);
v_i_743_ = v___x_758_;
v_entries_744_ = v___x_759_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_depth_763_, lean_object* v_keys_764_, lean_object* v_vals_765_, lean_object* v_i_766_, lean_object* v_entries_767_){
_start:
{
size_t v_depth_boxed_768_; lean_object* v_res_769_; 
v_depth_boxed_768_ = lean_unbox_usize(v_depth_763_);
lean_dec(v_depth_763_);
v_res_769_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg(v_depth_boxed_768_, v_keys_764_, v_vals_765_, v_i_766_, v_entries_767_);
lean_dec_ref(v_vals_765_);
lean_dec_ref(v_keys_764_);
return v_res_769_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_x_770_, lean_object* v_x_771_, lean_object* v_x_772_, lean_object* v_x_773_, lean_object* v_x_774_){
_start:
{
size_t v_x_1102__boxed_775_; size_t v_x_1103__boxed_776_; lean_object* v_res_777_; 
v_x_1102__boxed_775_ = lean_unbox_usize(v_x_771_);
lean_dec(v_x_771_);
v_x_1103__boxed_776_ = lean_unbox_usize(v_x_772_);
lean_dec(v_x_772_);
v_res_777_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg(v_x_770_, v_x_1102__boxed_775_, v_x_1103__boxed_776_, v_x_773_, v_x_774_);
return v_res_777_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1___redArg(lean_object* v_x_778_, lean_object* v_x_779_, lean_object* v_x_780_){
_start:
{
uint64_t v___y_782_; 
if (lean_obj_tag(v_x_779_) == 0)
{
uint64_t v___x_786_; 
v___x_786_ = 1723ULL;
v___y_782_ = v___x_786_;
goto v___jp_781_;
}
else
{
uint64_t v_hash_787_; 
v_hash_787_ = lean_ctor_get_uint64(v_x_779_, sizeof(void*)*2);
v___y_782_ = v_hash_787_;
goto v___jp_781_;
}
v___jp_781_:
{
size_t v___x_783_; size_t v___x_784_; lean_object* v___x_785_; 
v___x_783_ = lean_uint64_to_usize(v___y_782_);
v___x_784_ = ((size_t)1ULL);
v___x_785_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg(v_x_778_, v___x_783_, v___x_784_, v_x_779_, v_x_780_);
return v___x_785_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1___redArg(lean_object* v_x_788_, lean_object* v_x_789_, lean_object* v_x_790_){
_start:
{
uint8_t v_stage_u2081_791_; 
v_stage_u2081_791_ = lean_ctor_get_uint8(v_x_788_, sizeof(void*)*2);
if (v_stage_u2081_791_ == 0)
{
lean_object* v_map_u2081_792_; lean_object* v_map_u2082_793_; lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_801_; 
v_map_u2081_792_ = lean_ctor_get(v_x_788_, 0);
v_map_u2082_793_ = lean_ctor_get(v_x_788_, 1);
v_isSharedCheck_801_ = !lean_is_exclusive(v_x_788_);
if (v_isSharedCheck_801_ == 0)
{
v___x_795_ = v_x_788_;
v_isShared_796_ = v_isSharedCheck_801_;
goto v_resetjp_794_;
}
else
{
lean_inc(v_map_u2082_793_);
lean_inc(v_map_u2081_792_);
lean_dec(v_x_788_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_801_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
lean_object* v___x_797_; lean_object* v___x_799_; 
v___x_797_ = l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1___redArg(v_map_u2082_793_, v_x_789_, v_x_790_);
if (v_isShared_796_ == 0)
{
lean_ctor_set(v___x_795_, 1, v___x_797_);
v___x_799_ = v___x_795_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v_map_u2081_792_);
lean_ctor_set(v_reuseFailAlloc_800_, 1, v___x_797_);
lean_ctor_set_uint8(v_reuseFailAlloc_800_, sizeof(void*)*2, v_stage_u2081_791_);
v___x_799_ = v_reuseFailAlloc_800_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
return v___x_799_;
}
}
}
else
{
lean_object* v_map_u2081_802_; lean_object* v_map_u2082_803_; lean_object* v___x_805_; uint8_t v_isShared_806_; uint8_t v_isSharedCheck_811_; 
v_map_u2081_802_ = lean_ctor_get(v_x_788_, 0);
v_map_u2082_803_ = lean_ctor_get(v_x_788_, 1);
v_isSharedCheck_811_ = !lean_is_exclusive(v_x_788_);
if (v_isSharedCheck_811_ == 0)
{
v___x_805_ = v_x_788_;
v_isShared_806_ = v_isSharedCheck_811_;
goto v_resetjp_804_;
}
else
{
lean_inc(v_map_u2082_803_);
lean_inc(v_map_u2081_802_);
lean_dec(v_x_788_);
v___x_805_ = lean_box(0);
v_isShared_806_ = v_isSharedCheck_811_;
goto v_resetjp_804_;
}
v_resetjp_804_:
{
lean_object* v___x_807_; lean_object* v___x_809_; 
v___x_807_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2___redArg(v_map_u2081_802_, v_x_789_, v_x_790_);
if (v_isShared_806_ == 0)
{
lean_ctor_set(v___x_805_, 0, v___x_807_);
v___x_809_ = v___x_805_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v___x_807_);
lean_ctor_set(v_reuseFailAlloc_810_, 1, v_map_u2082_803_);
lean_ctor_set_uint8(v_reuseFailAlloc_810_, sizeof(void*)*2, v_stage_u2081_791_);
v___x_809_ = v_reuseFailAlloc_810_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
return v___x_809_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_(lean_object* v_d_812_, lean_object* v_x_813_){
_start:
{
lean_object* v_fst_814_; lean_object* v_snd_815_; lean_object* v___x_816_; 
v_fst_814_ = lean_ctor_get(v_x_813_, 0);
lean_inc(v_fst_814_);
v_snd_815_ = lean_ctor_get(v_x_813_, 1);
lean_inc(v_snd_815_);
lean_dec_ref(v_x_813_);
v___x_816_ = l_Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1___redArg(v_d_812_, v_fst_814_, v_snd_815_);
return v___x_816_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; 
v___x_824_ = lean_box(0);
v___x_825_ = lean_unsigned_to_nat(16u);
v___x_826_ = lean_mk_array(v___x_825_, v___x_824_);
return v___x_826_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; 
v___x_827_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_);
v___x_828_ = lean_unsigned_to_nat(0u);
v___x_829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_829_, 0, v___x_828_);
lean_ctor_set(v___x_829_, 1, v___x_827_);
return v___x_829_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_830_; 
v___x_830_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_830_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_831_; lean_object* v___x_832_; 
v___x_831_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_);
v___x_832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_832_, 0, v___x_831_);
return v___x_832_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_833_; lean_object* v___x_834_; uint8_t v___x_835_; lean_object* v___x_836_; 
v___x_833_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_);
v___x_834_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_);
v___x_835_ = 1;
v___x_836_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_836_, 0, v___x_834_);
lean_ctor_set(v___x_836_, 1, v___x_833_);
lean_ctor_set_uint8(v___x_836_, sizeof(void*)*2, v___x_835_);
return v___x_836_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__12_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_839_; uint8_t v___x_840_; uint8_t v___x_841_; lean_object* v___f_842_; lean_object* v___f_843_; lean_object* v___x_844_; lean_object* v___f_845_; lean_object* v___x_846_; lean_object* v___x_847_; 
v___x_839_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__11_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_));
v___x_840_ = 1;
v___x_841_ = 0;
v___f_842_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_));
v___f_843_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_));
v___x_844_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_);
v___f_845_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_));
v___x_846_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_));
v___x_847_ = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(v___x_847_, 0, v___x_846_);
lean_ctor_set(v___x_847_, 1, v___f_845_);
lean_ctor_set(v___x_847_, 2, v___f_845_);
lean_ctor_set(v___x_847_, 3, v___x_844_);
lean_ctor_set(v___x_847_, 4, v___f_843_);
lean_ctor_set(v___x_847_, 5, v___f_842_);
lean_ctor_set(v___x_847_, 6, v___x_839_);
lean_ctor_set_uint8(v___x_847_, sizeof(void*)*7, v___x_841_);
lean_ctor_set_uint8(v___x_847_, sizeof(void*)*7 + 1, v___x_840_);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_849_; lean_object* v___x_850_; 
v___x_849_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__12_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__12_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__12_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_);
v___x_850_ = l_Lean_registerSimpleScopedEnvExtension___redArg(v___x_849_);
return v___x_850_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2____boxed(lean_object* v_a_851_){
_start:
{
lean_object* v_res_852_; 
v_res_852_ = l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_();
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1(lean_object* v_00_u03b2_853_, lean_object* v_x_854_, lean_object* v_x_855_, lean_object* v_x_856_){
_start:
{
lean_object* v___x_857_; 
v___x_857_ = l_Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1___redArg(v_x_854_, v_x_855_, v_x_856_);
return v___x_857_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1(lean_object* v_00_u03b2_858_, lean_object* v_x_859_, lean_object* v_x_860_, lean_object* v_x_861_){
_start:
{
lean_object* v___x_862_; 
v___x_862_ = l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1___redArg(v_x_859_, v_x_860_, v_x_861_);
return v___x_862_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_00_u03b2_863_, lean_object* v_m_864_, lean_object* v_a_865_, lean_object* v_b_866_){
_start:
{
lean_object* v___x_867_; 
v___x_867_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2___redArg(v_m_864_, v_a_865_, v_b_866_);
return v___x_867_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2(lean_object* v_00_u03b2_868_, lean_object* v_x_869_, size_t v_x_870_, size_t v_x_871_, lean_object* v_x_872_, lean_object* v_x_873_){
_start:
{
lean_object* v___x_874_; 
v___x_874_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg(v_x_869_, v_x_870_, v_x_871_, v_x_872_, v_x_873_);
return v___x_874_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2___boxed(lean_object* v_00_u03b2_875_, lean_object* v_x_876_, lean_object* v_x_877_, lean_object* v_x_878_, lean_object* v_x_879_, lean_object* v_x_880_){
_start:
{
size_t v_x_1450__boxed_881_; size_t v_x_1451__boxed_882_; lean_object* v_res_883_; 
v_x_1450__boxed_881_ = lean_unbox_usize(v_x_877_);
lean_dec(v_x_877_);
v_x_1451__boxed_882_ = lean_unbox_usize(v_x_878_);
lean_dec(v_x_878_);
v_res_883_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2(v_00_u03b2_875_, v_x_876_, v_x_1450__boxed_881_, v_x_1451__boxed_882_, v_x_879_, v_x_880_);
return v_res_883_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__4(lean_object* v_00_u03b2_884_, lean_object* v_a_885_, lean_object* v_x_886_){
_start:
{
uint8_t v___x_887_; 
v___x_887_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg(v_a_885_, v_x_886_);
return v___x_887_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b2_888_, lean_object* v_a_889_, lean_object* v_x_890_){
_start:
{
uint8_t v_res_891_; lean_object* v_r_892_; 
v_res_891_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__4(v_00_u03b2_888_, v_a_889_, v_x_890_);
lean_dec(v_x_890_);
lean_dec(v_a_889_);
v_r_892_ = lean_box(v_res_891_);
return v_r_892_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__5(lean_object* v_00_u03b2_893_, lean_object* v_data_894_){
_start:
{
lean_object* v___x_895_; 
v___x_895_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__5___redArg(v_data_894_);
return v___x_895_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__6(lean_object* v_00_u03b2_896_, lean_object* v_a_897_, lean_object* v_b_898_, lean_object* v_x_899_){
_start:
{
lean_object* v___x_900_; 
v___x_900_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__6___redArg(v_a_897_, v_b_898_, v_x_899_);
return v___x_900_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_901_, lean_object* v_n_902_, lean_object* v_k_903_, lean_object* v_v_904_){
_start:
{
lean_object* v___x_905_; 
v___x_905_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__3___redArg(v_n_902_, v_k_903_, v_v_904_);
return v___x_905_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_906_, size_t v_depth_907_, lean_object* v_keys_908_, lean_object* v_vals_909_, lean_object* v_heq_910_, lean_object* v_i_911_, lean_object* v_entries_912_){
_start:
{
lean_object* v___x_913_; 
v___x_913_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg(v_depth_907_, v_keys_908_, v_vals_909_, v_i_911_, v_entries_912_);
return v___x_913_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b2_914_, lean_object* v_depth_915_, lean_object* v_keys_916_, lean_object* v_vals_917_, lean_object* v_heq_918_, lean_object* v_i_919_, lean_object* v_entries_920_){
_start:
{
size_t v_depth_boxed_921_; lean_object* v_res_922_; 
v_depth_boxed_921_ = lean_unbox_usize(v_depth_915_);
lean_dec(v_depth_915_);
v_res_922_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4(v_00_u03b2_914_, v_depth_boxed_921_, v_keys_916_, v_vals_917_, v_heq_918_, v_i_919_, v_entries_920_);
lean_dec_ref(v_vals_917_);
lean_dec_ref(v_keys_916_);
return v_res_922_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8(lean_object* v_00_u03b2_923_, lean_object* v_i_924_, lean_object* v_source_925_, lean_object* v_target_926_){
_start:
{
lean_object* v___x_927_; 
v___x_927_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8___redArg(v_i_924_, v_source_925_, v_target_926_);
return v___x_927_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__3_spec__5(lean_object* v_00_u03b2_928_, lean_object* v_x_929_, lean_object* v_x_930_, lean_object* v_x_931_, lean_object* v_x_932_){
_start:
{
lean_object* v___x_933_; 
v___x_933_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__3_spec__5___redArg(v_x_929_, v_x_930_, v_x_931_, v_x_932_);
return v___x_933_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10(lean_object* v_00_u03b2_934_, lean_object* v_x_935_, lean_object* v_x_936_){
_start:
{
lean_object* v___x_937_; 
v___x_937_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10___redArg(v_x_935_, v_x_936_);
return v___x_937_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_keys_938_, lean_object* v_vals_939_, lean_object* v_i_940_, lean_object* v_k_941_){
_start:
{
lean_object* v___x_942_; uint8_t v___x_943_; 
v___x_942_ = lean_array_get_size(v_keys_938_);
v___x_943_ = lean_nat_dec_lt(v_i_940_, v___x_942_);
if (v___x_943_ == 0)
{
lean_object* v___x_944_; 
lean_dec(v_i_940_);
v___x_944_ = lean_box(0);
return v___x_944_;
}
else
{
lean_object* v_k_x27_945_; uint8_t v___x_946_; 
v_k_x27_945_ = lean_array_fget_borrowed(v_keys_938_, v_i_940_);
v___x_946_ = lean_name_eq(v_k_941_, v_k_x27_945_);
if (v___x_946_ == 0)
{
lean_object* v___x_947_; lean_object* v___x_948_; 
v___x_947_ = lean_unsigned_to_nat(1u);
v___x_948_ = lean_nat_add(v_i_940_, v___x_947_);
lean_dec(v_i_940_);
v_i_940_ = v___x_948_;
goto _start;
}
else
{
lean_object* v___x_950_; lean_object* v___x_951_; 
v___x_950_ = lean_array_fget_borrowed(v_vals_939_, v_i_940_);
lean_dec(v_i_940_);
lean_inc(v___x_950_);
v___x_951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_951_, 0, v___x_950_);
return v___x_951_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_keys_952_, lean_object* v_vals_953_, lean_object* v_i_954_, lean_object* v_k_955_){
_start:
{
lean_object* v_res_956_; 
v_res_956_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1_spec__2___redArg(v_keys_952_, v_vals_953_, v_i_954_, v_k_955_);
lean_dec(v_k_955_);
lean_dec_ref(v_vals_953_);
lean_dec_ref(v_keys_952_);
return v_res_956_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1___redArg(lean_object* v_x_957_, size_t v_x_958_, lean_object* v_x_959_){
_start:
{
if (lean_obj_tag(v_x_957_) == 0)
{
lean_object* v_es_960_; lean_object* v___x_961_; size_t v___x_962_; size_t v___x_963_; lean_object* v_j_964_; lean_object* v___x_965_; 
v_es_960_ = lean_ctor_get(v_x_957_, 0);
v___x_961_ = lean_box(2);
v___x_962_ = ((size_t)31ULL);
v___x_963_ = lean_usize_land(v_x_958_, v___x_962_);
v_j_964_ = lean_usize_to_nat(v___x_963_);
v___x_965_ = lean_array_get_borrowed(v___x_961_, v_es_960_, v_j_964_);
lean_dec(v_j_964_);
switch(lean_obj_tag(v___x_965_))
{
case 0:
{
lean_object* v_key_966_; lean_object* v_val_967_; uint8_t v___x_968_; 
v_key_966_ = lean_ctor_get(v___x_965_, 0);
v_val_967_ = lean_ctor_get(v___x_965_, 1);
v___x_968_ = lean_name_eq(v_x_959_, v_key_966_);
if (v___x_968_ == 0)
{
lean_object* v___x_969_; 
v___x_969_ = lean_box(0);
return v___x_969_;
}
else
{
lean_object* v___x_970_; 
lean_inc(v_val_967_);
v___x_970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_970_, 0, v_val_967_);
return v___x_970_;
}
}
case 1:
{
lean_object* v_node_971_; size_t v___x_972_; size_t v___x_973_; 
v_node_971_ = lean_ctor_get(v___x_965_, 0);
v___x_972_ = ((size_t)5ULL);
v___x_973_ = lean_usize_shift_right(v_x_958_, v___x_972_);
v_x_957_ = v_node_971_;
v_x_958_ = v___x_973_;
goto _start;
}
default: 
{
lean_object* v___x_975_; 
v___x_975_ = lean_box(0);
return v___x_975_;
}
}
}
else
{
lean_object* v_ks_976_; lean_object* v_vs_977_; lean_object* v___x_978_; lean_object* v___x_979_; 
v_ks_976_ = lean_ctor_get(v_x_957_, 0);
v_vs_977_ = lean_ctor_get(v_x_957_, 1);
v___x_978_ = lean_unsigned_to_nat(0u);
v___x_979_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1_spec__2___redArg(v_ks_976_, v_vs_977_, v___x_978_, v_x_959_);
return v___x_979_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_980_, lean_object* v_x_981_, lean_object* v_x_982_){
_start:
{
size_t v_x_365__boxed_983_; lean_object* v_res_984_; 
v_x_365__boxed_983_ = lean_unbox_usize(v_x_981_);
lean_dec(v_x_981_);
v_res_984_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1___redArg(v_x_980_, v_x_365__boxed_983_, v_x_982_);
lean_dec(v_x_982_);
lean_dec_ref(v_x_980_);
return v_res_984_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0___redArg(lean_object* v_x_985_, lean_object* v_x_986_){
_start:
{
uint64_t v___y_988_; 
if (lean_obj_tag(v_x_986_) == 0)
{
uint64_t v___x_991_; 
v___x_991_ = 1723ULL;
v___y_988_ = v___x_991_;
goto v___jp_987_;
}
else
{
uint64_t v_hash_992_; 
v_hash_992_ = lean_ctor_get_uint64(v_x_986_, sizeof(void*)*2);
v___y_988_ = v_hash_992_;
goto v___jp_987_;
}
v___jp_987_:
{
size_t v___x_989_; lean_object* v___x_990_; 
v___x_989_ = lean_uint64_to_usize(v___y_988_);
v___x_990_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1___redArg(v_x_985_, v___x_989_, v_x_986_);
return v___x_990_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0___redArg___boxed(lean_object* v_x_993_, lean_object* v_x_994_){
_start:
{
lean_object* v_res_995_; 
v_res_995_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0___redArg(v_x_993_, v_x_994_);
lean_dec(v_x_994_);
lean_dec_ref(v_x_993_);
return v_res_995_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1_spec__3___redArg(lean_object* v_a_996_, lean_object* v_x_997_){
_start:
{
if (lean_obj_tag(v_x_997_) == 0)
{
lean_object* v___x_998_; 
v___x_998_ = lean_box(0);
return v___x_998_;
}
else
{
lean_object* v_key_999_; lean_object* v_value_1000_; lean_object* v_tail_1001_; uint8_t v___x_1002_; 
v_key_999_ = lean_ctor_get(v_x_997_, 0);
v_value_1000_ = lean_ctor_get(v_x_997_, 1);
v_tail_1001_ = lean_ctor_get(v_x_997_, 2);
v___x_1002_ = lean_name_eq(v_key_999_, v_a_996_);
if (v___x_1002_ == 0)
{
v_x_997_ = v_tail_1001_;
goto _start;
}
else
{
lean_object* v___x_1004_; 
lean_inc(v_value_1000_);
v___x_1004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1004_, 0, v_value_1000_);
return v___x_1004_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_a_1005_, lean_object* v_x_1006_){
_start:
{
lean_object* v_res_1007_; 
v_res_1007_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1_spec__3___redArg(v_a_1005_, v_x_1006_);
lean_dec(v_x_1006_);
lean_dec(v_a_1005_);
return v_res_1007_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1___redArg(lean_object* v_m_1008_, lean_object* v_a_1009_){
_start:
{
lean_object* v_buckets_1010_; lean_object* v___x_1011_; uint64_t v___y_1013_; 
v_buckets_1010_ = lean_ctor_get(v_m_1008_, 1);
v___x_1011_ = lean_array_get_size(v_buckets_1010_);
if (lean_obj_tag(v_a_1009_) == 0)
{
uint64_t v___x_1027_; 
v___x_1027_ = 1723ULL;
v___y_1013_ = v___x_1027_;
goto v___jp_1012_;
}
else
{
uint64_t v_hash_1028_; 
v_hash_1028_ = lean_ctor_get_uint64(v_a_1009_, sizeof(void*)*2);
v___y_1013_ = v_hash_1028_;
goto v___jp_1012_;
}
v___jp_1012_:
{
uint64_t v___x_1014_; uint64_t v___x_1015_; uint64_t v_fold_1016_; uint64_t v___x_1017_; uint64_t v___x_1018_; uint64_t v___x_1019_; size_t v___x_1020_; size_t v___x_1021_; size_t v___x_1022_; size_t v___x_1023_; size_t v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; 
v___x_1014_ = 32ULL;
v___x_1015_ = lean_uint64_shift_right(v___y_1013_, v___x_1014_);
v_fold_1016_ = lean_uint64_xor(v___y_1013_, v___x_1015_);
v___x_1017_ = 16ULL;
v___x_1018_ = lean_uint64_shift_right(v_fold_1016_, v___x_1017_);
v___x_1019_ = lean_uint64_xor(v_fold_1016_, v___x_1018_);
v___x_1020_ = lean_uint64_to_usize(v___x_1019_);
v___x_1021_ = lean_usize_of_nat(v___x_1011_);
v___x_1022_ = ((size_t)1ULL);
v___x_1023_ = lean_usize_sub(v___x_1021_, v___x_1022_);
v___x_1024_ = lean_usize_land(v___x_1020_, v___x_1023_);
v___x_1025_ = lean_array_uget_borrowed(v_buckets_1010_, v___x_1024_);
v___x_1026_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1_spec__3___redArg(v_a_1009_, v___x_1025_);
return v___x_1026_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1___redArg___boxed(lean_object* v_m_1029_, lean_object* v_a_1030_){
_start:
{
lean_object* v_res_1031_; 
v_res_1031_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1___redArg(v_m_1029_, v_a_1030_);
lean_dec(v_a_1030_);
lean_dec_ref(v_m_1029_);
return v_res_1031_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0___redArg(lean_object* v_x_1032_, lean_object* v_x_1033_){
_start:
{
uint8_t v_stage_u2081_1034_; 
v_stage_u2081_1034_ = lean_ctor_get_uint8(v_x_1032_, sizeof(void*)*2);
if (v_stage_u2081_1034_ == 0)
{
lean_object* v_map_u2081_1035_; lean_object* v_map_u2082_1036_; lean_object* v___x_1037_; 
v_map_u2081_1035_ = lean_ctor_get(v_x_1032_, 0);
v_map_u2082_1036_ = lean_ctor_get(v_x_1032_, 1);
v___x_1037_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0___redArg(v_map_u2082_1036_, v_x_1033_);
if (lean_obj_tag(v___x_1037_) == 0)
{
lean_object* v___x_1038_; 
v___x_1038_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1___redArg(v_map_u2081_1035_, v_x_1033_);
return v___x_1038_;
}
else
{
return v___x_1037_;
}
}
else
{
lean_object* v_map_u2081_1039_; lean_object* v___x_1040_; 
v_map_u2081_1039_ = lean_ctor_get(v_x_1032_, 0);
v___x_1040_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1___redArg(v_map_u2081_1039_, v_x_1033_);
return v___x_1040_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0___redArg___boxed(lean_object* v_x_1041_, lean_object* v_x_1042_){
_start:
{
lean_object* v_res_1043_; 
v_res_1043_ = l_Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0___redArg(v_x_1041_, v_x_1042_);
lean_dec(v_x_1042_);
lean_dec_ref(v_x_1041_);
return v_res_1043_;
}
}
static lean_object* _init_l_Lean_getReducibilityStatusCore___closed__0(void){
_start:
{
lean_object* v___x_1044_; 
v___x_1044_ = l_Lean_SMap_instInhabited___redArg();
return v___x_1044_;
}
}
LEAN_EXPORT uint8_t l_Lean_getReducibilityStatusCore(lean_object* v_env_1045_, lean_object* v_declName_1046_){
_start:
{
lean_object* v___x_1047_; lean_object* v_ext_1048_; lean_object* v_toEnvExtension_1049_; lean_object* v_asyncMode_1050_; lean_object* v___x_1051_; uint8_t v___x_1052_; lean_object* v_m_1053_; lean_object* v___x_1054_; 
v___x_1047_ = l_Lean_reducibilityExtraExt;
v_ext_1048_ = lean_ctor_get(v___x_1047_, 1);
v_toEnvExtension_1049_ = lean_ctor_get(v_ext_1048_, 0);
v_asyncMode_1050_ = lean_ctor_get(v_toEnvExtension_1049_, 2);
v___x_1051_ = lean_obj_once(&l_Lean_getReducibilityStatusCore___closed__0, &l_Lean_getReducibilityStatusCore___closed__0_once, _init_l_Lean_getReducibilityStatusCore___closed__0);
v___x_1052_ = 0;
lean_inc_ref(v_env_1045_);
v_m_1053_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_1051_, v___x_1047_, v_env_1045_, v_asyncMode_1050_, v___x_1052_);
v___x_1054_ = l_Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0___redArg(v_m_1053_, v_declName_1046_);
lean_dec(v_m_1053_);
if (lean_obj_tag(v___x_1054_) == 1)
{
lean_object* v_val_1055_; uint8_t v___x_1056_; 
lean_dec(v_declName_1046_);
lean_dec_ref(v_env_1045_);
v_val_1055_ = lean_ctor_get(v___x_1054_, 0);
lean_inc(v_val_1055_);
lean_dec_ref_known(v___x_1054_, 1);
v___x_1056_ = lean_unbox(v_val_1055_);
lean_dec(v_val_1055_);
return v___x_1056_;
}
else
{
lean_object* v___x_1057_; lean_object* v___x_1058_; 
lean_dec(v___x_1054_);
v___x_1057_ = lean_box(1);
v___x_1058_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1045_, v_declName_1046_);
if (lean_obj_tag(v___x_1058_) == 0)
{
lean_object* v___x_1059_; lean_object* v_toEnvExtension_1060_; lean_object* v_asyncMode_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; 
v___x_1059_ = l_Lean_reducibilityCoreExt;
v_toEnvExtension_1060_ = lean_ctor_get(v___x_1059_, 0);
v_asyncMode_1061_ = lean_ctor_get(v_toEnvExtension_1060_, 2);
lean_inc(v_declName_1046_);
v___x_1062_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1057_, v___x_1059_, v_env_1045_, v_asyncMode_1061_, v_declName_1046_, v___x_1052_);
v___x_1063_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_1062_, v_declName_1046_);
lean_dec(v_declName_1046_);
lean_dec(v___x_1062_);
if (lean_obj_tag(v___x_1063_) == 0)
{
uint8_t v___x_1064_; 
v___x_1064_ = 1;
return v___x_1064_;
}
else
{
lean_object* v_val_1065_; uint8_t v___x_1066_; 
v_val_1065_ = lean_ctor_get(v___x_1063_, 0);
lean_inc(v_val_1065_);
lean_dec_ref_known(v___x_1063_, 1);
v___x_1066_ = lean_unbox(v_val_1065_);
lean_dec(v_val_1065_);
return v___x_1066_;
}
}
else
{
lean_object* v_val_1067_; lean_object* v___x_1068_; uint8_t v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; 
v_val_1067_ = lean_ctor_get(v___x_1058_, 0);
lean_inc(v_val_1067_);
lean_dec_ref_known(v___x_1058_, 1);
v___x_1068_ = l_Lean_reducibilityCoreExt;
v___x_1069_ = 0;
v___x_1070_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_1057_, v___x_1068_, v_env_1045_, v_val_1067_, v___x_1069_);
lean_dec(v_val_1067_);
lean_dec_ref(v_env_1045_);
v___x_1071_ = l_Lean_findSortedByName_x3f___redArg(v___x_1070_, v_declName_1046_);
lean_dec(v_declName_1046_);
lean_dec_ref(v___x_1070_);
if (lean_obj_tag(v___x_1071_) == 0)
{
uint8_t v___x_1072_; 
v___x_1072_ = 1;
return v___x_1072_;
}
else
{
lean_object* v_val_1073_; lean_object* v_snd_1074_; uint8_t v___x_1075_; 
v_val_1073_ = lean_ctor_get(v___x_1071_, 0);
lean_inc(v_val_1073_);
lean_dec_ref_known(v___x_1071_, 1);
v_snd_1074_ = lean_ctor_get(v_val_1073_, 1);
lean_inc(v_snd_1074_);
lean_dec(v_val_1073_);
v___x_1075_ = lean_unbox(v_snd_1074_);
lean_dec(v_snd_1074_);
return v___x_1075_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatusCore___boxed(lean_object* v_env_1076_, lean_object* v_declName_1077_){
_start:
{
uint8_t v_res_1078_; lean_object* v_r_1079_; 
v_res_1078_ = l_Lean_getReducibilityStatusCore(v_env_1076_, v_declName_1077_);
v_r_1079_ = lean_box(v_res_1078_);
return v_r_1079_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0(lean_object* v_00_u03b2_1080_, lean_object* v_x_1081_, lean_object* v_x_1082_){
_start:
{
lean_object* v___x_1083_; 
v___x_1083_ = l_Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0___redArg(v_x_1081_, v_x_1082_);
return v___x_1083_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0___boxed(lean_object* v_00_u03b2_1084_, lean_object* v_x_1085_, lean_object* v_x_1086_){
_start:
{
lean_object* v_res_1087_; 
v_res_1087_ = l_Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0(v_00_u03b2_1084_, v_x_1085_, v_x_1086_);
lean_dec(v_x_1086_);
lean_dec_ref(v_x_1085_);
return v_res_1087_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0(lean_object* v_00_u03b2_1088_, lean_object* v_x_1089_, lean_object* v_x_1090_){
_start:
{
lean_object* v___x_1091_; 
v___x_1091_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0___redArg(v_x_1089_, v_x_1090_);
return v___x_1091_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1092_, lean_object* v_x_1093_, lean_object* v_x_1094_){
_start:
{
lean_object* v_res_1095_; 
v_res_1095_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0(v_00_u03b2_1092_, v_x_1093_, v_x_1094_);
lean_dec(v_x_1094_);
lean_dec_ref(v_x_1093_);
return v_res_1095_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1(lean_object* v_00_u03b2_1096_, lean_object* v_m_1097_, lean_object* v_a_1098_){
_start:
{
lean_object* v___x_1099_; 
v___x_1099_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1___redArg(v_m_1097_, v_a_1098_);
return v___x_1099_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1100_, lean_object* v_m_1101_, lean_object* v_a_1102_){
_start:
{
lean_object* v_res_1103_; 
v_res_1103_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1(v_00_u03b2_1100_, v_m_1101_, v_a_1102_);
lean_dec(v_a_1102_);
lean_dec_ref(v_m_1101_);
return v_res_1103_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1104_, lean_object* v_x_1105_, size_t v_x_1106_, lean_object* v_x_1107_){
_start:
{
lean_object* v___x_1108_; 
v___x_1108_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1___redArg(v_x_1105_, v_x_1106_, v_x_1107_);
return v___x_1108_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1109_, lean_object* v_x_1110_, lean_object* v_x_1111_, lean_object* v_x_1112_){
_start:
{
size_t v_x_569__boxed_1113_; lean_object* v_res_1114_; 
v_x_569__boxed_1113_ = lean_unbox_usize(v_x_1111_);
lean_dec(v_x_1111_);
v_res_1114_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1(v_00_u03b2_1109_, v_x_1110_, v_x_569__boxed_1113_, v_x_1112_);
lean_dec(v_x_1112_);
lean_dec_ref(v_x_1110_);
return v_res_1114_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_1115_, lean_object* v_a_1116_, lean_object* v_x_1117_){
_start:
{
lean_object* v___x_1118_; 
v___x_1118_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1_spec__3___redArg(v_a_1116_, v_x_1117_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_1119_, lean_object* v_a_1120_, lean_object* v_x_1121_){
_start:
{
lean_object* v_res_1122_; 
v_res_1122_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1_spec__3(v_00_u03b2_1119_, v_a_1120_, v_x_1121_);
lean_dec(v_x_1121_);
lean_dec(v_a_1120_);
return v_res_1122_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_1123_, lean_object* v_keys_1124_, lean_object* v_vals_1125_, lean_object* v_heq_1126_, lean_object* v_i_1127_, lean_object* v_k_1128_){
_start:
{
lean_object* v___x_1129_; 
v___x_1129_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1_spec__2___redArg(v_keys_1124_, v_vals_1125_, v_i_1127_, v_k_1128_);
return v___x_1129_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1130_, lean_object* v_keys_1131_, lean_object* v_vals_1132_, lean_object* v_heq_1133_, lean_object* v_i_1134_, lean_object* v_k_1135_){
_start:
{
lean_object* v_res_1136_; 
v_res_1136_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1_spec__2(v_00_u03b2_1130_, v_keys_1131_, v_vals_1132_, v_heq_1133_, v_i_1134_, v_k_1135_);
lean_dec(v_k_1135_);
lean_dec_ref(v_vals_1132_);
lean_dec_ref(v_keys_1131_);
return v_res_1136_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore___lam__0(lean_object* v_addEntryFn_1137_, lean_object* v___x_1138_, lean_object* v_s_1139_){
_start:
{
lean_object* v_importedEntries_1140_; lean_object* v_state_1141_; lean_object* v___x_1143_; uint8_t v_isShared_1144_; uint8_t v_isSharedCheck_1149_; 
v_importedEntries_1140_ = lean_ctor_get(v_s_1139_, 0);
v_state_1141_ = lean_ctor_get(v_s_1139_, 1);
v_isSharedCheck_1149_ = !lean_is_exclusive(v_s_1139_);
if (v_isSharedCheck_1149_ == 0)
{
v___x_1143_ = v_s_1139_;
v_isShared_1144_ = v_isSharedCheck_1149_;
goto v_resetjp_1142_;
}
else
{
lean_inc(v_state_1141_);
lean_inc(v_importedEntries_1140_);
lean_dec(v_s_1139_);
v___x_1143_ = lean_box(0);
v_isShared_1144_ = v_isSharedCheck_1149_;
goto v_resetjp_1142_;
}
v_resetjp_1142_:
{
lean_object* v_state_1145_; lean_object* v___x_1147_; 
v_state_1145_ = lean_apply_2(v_addEntryFn_1137_, v_state_1141_, v___x_1138_);
if (v_isShared_1144_ == 0)
{
lean_ctor_set(v___x_1143_, 1, v_state_1145_);
v___x_1147_ = v___x_1143_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1148_; 
v_reuseFailAlloc_1148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1148_, 0, v_importedEntries_1140_);
lean_ctor_set(v_reuseFailAlloc_1148_, 1, v_state_1145_);
v___x_1147_ = v_reuseFailAlloc_1148_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
return v___x_1147_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(lean_object* v_env_1150_, lean_object* v_declName_1151_, uint8_t v_status_1152_, uint8_t v_attrKind_1153_, lean_object* v_currNamespace_1154_){
_start:
{
if (v_attrKind_1153_ == 0)
{
lean_object* v___x_1155_; 
lean_dec(v_currNamespace_1154_);
v___x_1155_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1150_, v_declName_1151_);
if (lean_obj_tag(v___x_1155_) == 0)
{
lean_object* v___x_1156_; lean_object* v_toEnvExtension_1157_; lean_object* v_addEntryFn_1158_; lean_object* v_asyncMode_1159_; uint8_t v_logWrites_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___f_1163_; uint8_t v___x_1164_; 
v___x_1156_ = l_Lean_reducibilityCoreExt;
v_toEnvExtension_1157_ = lean_ctor_get(v___x_1156_, 0);
v_addEntryFn_1158_ = lean_ctor_get(v___x_1156_, 3);
v_asyncMode_1159_ = lean_ctor_get(v_toEnvExtension_1157_, 2);
v_logWrites_1160_ = lean_ctor_get_uint8(v_toEnvExtension_1157_, sizeof(void*)*6);
v___x_1161_ = lean_box(v_status_1152_);
lean_inc(v_declName_1151_);
v___x_1162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1162_, 0, v_declName_1151_);
lean_ctor_set(v___x_1162_, 1, v___x_1161_);
lean_inc(v_addEntryFn_1158_);
v___f_1163_ = lean_alloc_closure((void*)(l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore___lam__0), 3, 2);
lean_closure_set(v___f_1163_, 0, v_addEntryFn_1158_);
lean_closure_set(v___f_1163_, 1, v___x_1162_);
v___x_1164_ = 1;
if (v_logWrites_1160_ == 0)
{
lean_object* v___x_1165_; 
lean_inc_ref(v_toEnvExtension_1157_);
v___x_1165_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1157_, v_env_1150_, v___f_1163_, v_asyncMode_1159_, v_declName_1151_, v___x_1164_);
return v___x_1165_;
}
else
{
lean_object* v___x_1166_; lean_object* v___x_1167_; 
lean_inc(v_declName_1151_);
v___x_1166_ = l_Lean_Environment_logDeclChange(v_env_1150_, v_declName_1151_);
lean_inc_ref(v_toEnvExtension_1157_);
v___x_1167_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1157_, v___x_1166_, v___f_1163_, v_asyncMode_1159_, v_declName_1151_, v___x_1164_);
return v___x_1167_;
}
}
else
{
lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; 
lean_dec_ref_known(v___x_1155_, 1);
v___x_1168_ = l_Lean_reducibilityExtraExt;
v___x_1169_ = lean_box(v_status_1152_);
v___x_1170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1170_, 0, v_declName_1151_);
lean_ctor_set(v___x_1170_, 1, v___x_1169_);
v___x_1171_ = l_Lean_ScopedEnvExtension_addEntry___redArg(v___x_1168_, v_env_1150_, v___x_1170_);
return v___x_1171_;
}
}
else
{
lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; 
v___x_1172_ = l_Lean_reducibilityExtraExt;
v___x_1173_ = lean_box(v_status_1152_);
v___x_1174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1174_, 0, v_declName_1151_);
lean_ctor_set(v___x_1174_, 1, v___x_1173_);
v___x_1175_ = l_Lean_ScopedEnvExtension_addCore___redArg(v_env_1150_, v___x_1172_, v___x_1174_, v_attrKind_1153_, v_currNamespace_1154_);
return v___x_1175_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore___boxed(lean_object* v_env_1176_, lean_object* v_declName_1177_, lean_object* v_status_1178_, lean_object* v_attrKind_1179_, lean_object* v_currNamespace_1180_){
_start:
{
uint8_t v_status_boxed_1181_; uint8_t v_attrKind_boxed_1182_; lean_object* v_res_1183_; 
v_status_boxed_1181_ = lean_unbox(v_status_1178_);
v_attrKind_boxed_1182_ = lean_unbox(v_attrKind_1179_);
v_res_1183_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_1176_, v_declName_1177_, v_status_boxed_1181_, v_attrKind_boxed_1182_, v_currNamespace_1180_);
return v_res_1183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__spec__0(lean_object* v_name_1184_, lean_object* v_decl_1185_, lean_object* v_ref_1186_){
_start:
{
lean_object* v_defValue_1188_; lean_object* v_descr_1189_; lean_object* v_deprecation_x3f_1190_; lean_object* v___x_1191_; uint8_t v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; 
v_defValue_1188_ = lean_ctor_get(v_decl_1185_, 0);
v_descr_1189_ = lean_ctor_get(v_decl_1185_, 1);
v_deprecation_x3f_1190_ = lean_ctor_get(v_decl_1185_, 2);
v___x_1191_ = lean_alloc_ctor(1, 0, 1);
v___x_1192_ = lean_unbox(v_defValue_1188_);
lean_ctor_set_uint8(v___x_1191_, 0, v___x_1192_);
lean_inc(v_deprecation_x3f_1190_);
lean_inc_ref(v_descr_1189_);
lean_inc_n(v_name_1184_, 2);
v___x_1193_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1193_, 0, v_name_1184_);
lean_ctor_set(v___x_1193_, 1, v_ref_1186_);
lean_ctor_set(v___x_1193_, 2, v___x_1191_);
lean_ctor_set(v___x_1193_, 3, v_descr_1189_);
lean_ctor_set(v___x_1193_, 4, v_deprecation_x3f_1190_);
v___x_1194_ = lean_register_option(v_name_1184_, v___x_1193_);
if (lean_obj_tag(v___x_1194_) == 0)
{
lean_object* v___x_1196_; uint8_t v_isShared_1197_; uint8_t v_isSharedCheck_1202_; 
v_isSharedCheck_1202_ = !lean_is_exclusive(v___x_1194_);
if (v_isSharedCheck_1202_ == 0)
{
lean_object* v_unused_1203_; 
v_unused_1203_ = lean_ctor_get(v___x_1194_, 0);
lean_dec(v_unused_1203_);
v___x_1196_ = v___x_1194_;
v_isShared_1197_ = v_isSharedCheck_1202_;
goto v_resetjp_1195_;
}
else
{
lean_dec(v___x_1194_);
v___x_1196_ = lean_box(0);
v_isShared_1197_ = v_isSharedCheck_1202_;
goto v_resetjp_1195_;
}
v_resetjp_1195_:
{
lean_object* v___x_1198_; lean_object* v___x_1200_; 
lean_inc(v_defValue_1188_);
v___x_1198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1198_, 0, v_name_1184_);
lean_ctor_set(v___x_1198_, 1, v_defValue_1188_);
if (v_isShared_1197_ == 0)
{
lean_ctor_set(v___x_1196_, 0, v___x_1198_);
v___x_1200_ = v___x_1196_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v___x_1198_);
v___x_1200_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
return v___x_1200_;
}
}
}
else
{
lean_object* v_a_1204_; lean_object* v___x_1206_; uint8_t v_isShared_1207_; uint8_t v_isSharedCheck_1211_; 
lean_dec(v_name_1184_);
v_a_1204_ = lean_ctor_get(v___x_1194_, 0);
v_isSharedCheck_1211_ = !lean_is_exclusive(v___x_1194_);
if (v_isSharedCheck_1211_ == 0)
{
v___x_1206_ = v___x_1194_;
v_isShared_1207_ = v_isSharedCheck_1211_;
goto v_resetjp_1205_;
}
else
{
lean_inc(v_a_1204_);
lean_dec(v___x_1194_);
v___x_1206_ = lean_box(0);
v_isShared_1207_ = v_isSharedCheck_1211_;
goto v_resetjp_1205_;
}
v_resetjp_1205_:
{
lean_object* v___x_1209_; 
if (v_isShared_1207_ == 0)
{
v___x_1209_ = v___x_1206_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1210_; 
v_reuseFailAlloc_1210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1210_, 0, v_a_1204_);
v___x_1209_ = v_reuseFailAlloc_1210_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
return v___x_1209_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_1212_, lean_object* v_decl_1213_, lean_object* v_ref_1214_, lean_object* v_a_1215_){
_start:
{
lean_object* v_res_1216_; 
v_res_1216_ = l_Lean_Option_register___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__spec__0(v_name_1212_, v_decl_1213_, v_ref_1214_);
lean_dec_ref(v_decl_1213_);
return v_res_1216_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; 
v___x_1231_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4_));
v___x_1232_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4_));
v___x_1233_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4_));
v___x_1234_ = l_Lean_Option_register___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__spec__0(v___x_1231_, v___x_1232_, v___x_1233_);
return v___x_1234_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4____boxed(lean_object* v_a_1235_){
_start:
{
lean_object* v_res_1236_; 
v_res_1236_ = l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4_();
return v_res_1236_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__0(lean_object* v_opts_1237_, lean_object* v_opt_1238_){
_start:
{
lean_object* v_name_1239_; lean_object* v_defValue_1240_; lean_object* v_map_1241_; lean_object* v___x_1242_; 
v_name_1239_ = lean_ctor_get(v_opt_1238_, 0);
v_defValue_1240_ = lean_ctor_get(v_opt_1238_, 1);
v_map_1241_ = lean_ctor_get(v_opts_1237_, 0);
v___x_1242_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1241_, v_name_1239_);
if (lean_obj_tag(v___x_1242_) == 0)
{
uint8_t v___x_1243_; 
v___x_1243_ = lean_unbox(v_defValue_1240_);
return v___x_1243_;
}
else
{
lean_object* v_val_1244_; 
v_val_1244_ = lean_ctor_get(v___x_1242_, 0);
lean_inc(v_val_1244_);
lean_dec_ref_known(v___x_1242_, 1);
if (lean_obj_tag(v_val_1244_) == 1)
{
uint8_t v_v_1245_; 
v_v_1245_ = lean_ctor_get_uint8(v_val_1244_, 0);
lean_dec_ref_known(v_val_1244_, 0);
return v_v_1245_;
}
else
{
uint8_t v___x_1246_; 
lean_dec(v_val_1244_);
v___x_1246_ = lean_unbox(v_defValue_1240_);
return v___x_1246_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__0___boxed(lean_object* v_opts_1247_, lean_object* v_opt_1248_){
_start:
{
uint8_t v_res_1249_; lean_object* v_r_1250_; 
v_res_1249_ = l_Lean_Option_get___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__0(v_opts_1247_, v_opt_1248_);
lean_dec_ref(v_opt_1248_);
lean_dec_ref(v_opts_1247_);
v_r_1250_ = lean_box(v_res_1249_);
return v_r_1250_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0(lean_object* v_00___1251_, lean_object* v___y_1252_, lean_object* v___y_1253_){
_start:
{
lean_object* v___x_1255_; lean_object* v___x_1256_; 
v___x_1255_ = lean_box(0);
v___x_1256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1256_, 0, v___x_1255_);
return v___x_1256_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___boxed(lean_object* v_00___1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_){
_start:
{
lean_object* v_res_1261_; 
v_res_1261_ = l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0(v_00___1257_, v___y_1258_, v___y_1259_);
lean_dec(v___y_1259_);
lean_dec_ref(v___y_1258_);
return v_res_1261_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1262_; lean_object* v___x_1263_; 
v___x_1262_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_);
v___x_1263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1263_, 0, v___x_1262_);
return v___x_1263_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; 
v___x_1264_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__0);
v___x_1265_ = lean_unsigned_to_nat(0u);
v___x_1266_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1266_, 0, v___x_1265_);
lean_ctor_set(v___x_1266_, 1, v___x_1265_);
lean_ctor_set(v___x_1266_, 2, v___x_1265_);
lean_ctor_set(v___x_1266_, 3, v___x_1265_);
lean_ctor_set(v___x_1266_, 4, v___x_1264_);
lean_ctor_set(v___x_1266_, 5, v___x_1264_);
lean_ctor_set(v___x_1266_, 6, v___x_1264_);
lean_ctor_set(v___x_1266_, 7, v___x_1264_);
lean_ctor_set(v___x_1266_, 8, v___x_1264_);
lean_ctor_set(v___x_1266_, 9, v___x_1264_);
lean_ctor_set(v___x_1266_, 10, v___x_1264_);
return v___x_1266_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__2(void){
_start:
{
lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; 
v___x_1267_ = lean_unsigned_to_nat(32u);
v___x_1268_ = lean_mk_empty_array_with_capacity(v___x_1267_);
v___x_1269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1269_, 0, v___x_1268_);
return v___x_1269_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__3(void){
_start:
{
size_t v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; 
v___x_1270_ = ((size_t)5ULL);
v___x_1271_ = lean_unsigned_to_nat(0u);
v___x_1272_ = lean_unsigned_to_nat(32u);
v___x_1273_ = lean_mk_empty_array_with_capacity(v___x_1272_);
v___x_1274_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__2);
v___x_1275_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1275_, 0, v___x_1274_);
lean_ctor_set(v___x_1275_, 1, v___x_1273_);
lean_ctor_set(v___x_1275_, 2, v___x_1271_);
lean_ctor_set(v___x_1275_, 3, v___x_1271_);
lean_ctor_set_usize(v___x_1275_, 4, v___x_1270_);
return v___x_1275_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__4(void){
_start:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; 
v___x_1276_ = lean_box(1);
v___x_1277_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__3);
v___x_1278_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__0);
v___x_1279_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1279_, 0, v___x_1278_);
lean_ctor_set(v___x_1279_, 1, v___x_1277_);
lean_ctor_set(v___x_1279_, 2, v___x_1276_);
return v___x_1279_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1(lean_object* v_msgData_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_){
_start:
{
lean_object* v___x_1284_; lean_object* v_toCold_1285_; lean_object* v_env_1286_; lean_object* v_options_1287_; uint8_t v___x_1288_; lean_object* v_env_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; 
v___x_1284_ = lean_st_ref_get(v___y_1282_);
v_toCold_1285_ = lean_ctor_get(v___y_1281_, 0);
v_env_1286_ = lean_ctor_get(v___x_1284_, 0);
lean_inc_ref(v_env_1286_);
lean_dec(v___x_1284_);
v_options_1287_ = lean_ctor_get(v_toCold_1285_, 2);
v___x_1288_ = 0;
v_env_1289_ = l_Lean_Environment_setRecordingDeps(v_env_1286_, v___x_1288_);
v___x_1290_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__1);
v___x_1291_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__4);
lean_inc_ref(v_options_1287_);
v___x_1292_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1292_, 0, v_env_1289_);
lean_ctor_set(v___x_1292_, 1, v___x_1290_);
lean_ctor_set(v___x_1292_, 2, v___x_1291_);
lean_ctor_set(v___x_1292_, 3, v_options_1287_);
v___x_1293_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1293_, 0, v___x_1292_);
lean_ctor_set(v___x_1293_, 1, v_msgData_1280_);
v___x_1294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1294_, 0, v___x_1293_);
return v___x_1294_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___boxed(lean_object* v_msgData_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_){
_start:
{
lean_object* v_res_1299_; 
v_res_1299_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1(v_msgData_1295_, v___y_1296_, v___y_1297_);
lean_dec(v___y_1297_);
lean_dec_ref(v___y_1296_);
return v_res_1299_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(lean_object* v_msg_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_){
_start:
{
lean_object* v_ref_1304_; lean_object* v___x_1305_; lean_object* v_a_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1314_; 
v_ref_1304_ = lean_ctor_get(v___y_1301_, 2);
v___x_1305_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1(v_msg_1300_, v___y_1301_, v___y_1302_);
v_a_1306_ = lean_ctor_get(v___x_1305_, 0);
v_isSharedCheck_1314_ = !lean_is_exclusive(v___x_1305_);
if (v_isSharedCheck_1314_ == 0)
{
v___x_1308_ = v___x_1305_;
v_isShared_1309_ = v_isSharedCheck_1314_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_a_1306_);
lean_dec(v___x_1305_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1314_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v___x_1310_; lean_object* v___x_1312_; 
lean_inc(v_ref_1304_);
v___x_1310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1310_, 0, v_ref_1304_);
lean_ctor_set(v___x_1310_, 1, v_a_1306_);
if (v_isShared_1309_ == 0)
{
lean_ctor_set_tag(v___x_1308_, 1);
lean_ctor_set(v___x_1308_, 0, v___x_1310_);
v___x_1312_ = v___x_1308_;
goto v_reusejp_1311_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1313_, 0, v___x_1310_);
v___x_1312_ = v_reuseFailAlloc_1313_;
goto v_reusejp_1311_;
}
v_reusejp_1311_:
{
return v___x_1312_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg___boxed(lean_object* v_msg_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_){
_start:
{
lean_object* v_res_1319_; 
v_res_1319_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v_msg_1315_, v___y_1316_, v___y_1317_);
lean_dec(v___y_1317_);
lean_dec_ref(v___y_1316_);
return v_res_1319_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__9___redArg(lean_object* v_ref_1320_, lean_object* v_msg_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_){
_start:
{
lean_object* v_toCold_1325_; lean_object* v_currRecDepth_1326_; lean_object* v_ref_1327_; uint16_t v_optionFlags_1328_; uint8_t v_suppressElabErrors_1329_; uint8_t v_checkDeprecated_1330_; uint8_t v_isRecordingDeps_1331_; lean_object* v_ref_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; 
v_toCold_1325_ = lean_ctor_get(v___y_1322_, 0);
v_currRecDepth_1326_ = lean_ctor_get(v___y_1322_, 1);
v_ref_1327_ = lean_ctor_get(v___y_1322_, 2);
v_optionFlags_1328_ = lean_ctor_get_uint16(v___y_1322_, sizeof(void*)*3);
v_suppressElabErrors_1329_ = lean_ctor_get_uint8(v___y_1322_, sizeof(void*)*3 + 2);
v_checkDeprecated_1330_ = lean_ctor_get_uint8(v___y_1322_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1331_ = lean_ctor_get_uint8(v___y_1322_, sizeof(void*)*3 + 4);
v_ref_1332_ = l_Lean_replaceRef(v_ref_1320_, v_ref_1327_);
lean_inc(v_currRecDepth_1326_);
lean_inc_ref(v_toCold_1325_);
v___x_1333_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1333_, 0, v_toCold_1325_);
lean_ctor_set(v___x_1333_, 1, v_currRecDepth_1326_);
lean_ctor_set(v___x_1333_, 2, v_ref_1332_);
lean_ctor_set_uint16(v___x_1333_, sizeof(void*)*3, v_optionFlags_1328_);
lean_ctor_set_uint8(v___x_1333_, sizeof(void*)*3 + 2, v_suppressElabErrors_1329_);
lean_ctor_set_uint8(v___x_1333_, sizeof(void*)*3 + 3, v_checkDeprecated_1330_);
lean_ctor_set_uint8(v___x_1333_, sizeof(void*)*3 + 4, v_isRecordingDeps_1331_);
v___x_1334_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v_msg_1321_, v___x_1333_, v___y_1323_);
lean_dec_ref_known(v___x_1333_, 3);
return v___x_1334_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__9___redArg___boxed(lean_object* v_ref_1335_, lean_object* v_msg_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_){
_start:
{
lean_object* v_res_1340_; 
v_res_1340_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__9___redArg(v_ref_1335_, v_msg_1336_, v___y_1337_, v___y_1338_);
lean_dec(v___y_1338_);
lean_dec_ref(v___y_1337_);
lean_dec(v_ref_1335_);
return v_res_1340_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__1(void){
_start:
{
lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1342_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__0));
v___x_1343_ = l_Lean_stringToMessageData(v___x_1342_);
return v___x_1343_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__3(void){
_start:
{
lean_object* v___x_1345_; lean_object* v___x_1346_; 
v___x_1345_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__2));
v___x_1346_ = l_Lean_stringToMessageData(v___x_1345_);
return v___x_1346_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__5(void){
_start:
{
lean_object* v___x_1348_; lean_object* v___x_1349_; 
v___x_1348_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__4));
v___x_1349_ = l_Lean_stringToMessageData(v___x_1348_);
return v___x_1349_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__7(void){
_start:
{
lean_object* v___x_1351_; lean_object* v___x_1352_; 
v___x_1351_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__6));
v___x_1352_ = l_Lean_stringToMessageData(v___x_1351_);
return v___x_1352_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__9(void){
_start:
{
lean_object* v___x_1354_; lean_object* v___x_1355_; 
v___x_1354_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__8));
v___x_1355_ = l_Lean_stringToMessageData(v___x_1354_);
return v___x_1355_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__11(void){
_start:
{
lean_object* v___x_1357_; lean_object* v___x_1358_; 
v___x_1357_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__10));
v___x_1358_ = l_Lean_stringToMessageData(v___x_1357_);
return v___x_1358_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__13(void){
_start:
{
lean_object* v___x_1360_; lean_object* v___x_1361_; 
v___x_1360_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__12));
v___x_1361_ = l_Lean_stringToMessageData(v___x_1360_);
return v___x_1361_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg(lean_object* v_msg_1362_, lean_object* v_declHint_1363_, lean_object* v___y_1364_){
_start:
{
lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v_env_1368_; uint8_t v___x_1369_; 
v___x_1366_ = lean_box(0);
v___x_1367_ = lean_st_ref_get(v___y_1364_);
v_env_1368_ = lean_ctor_get(v___x_1367_, 0);
lean_inc_ref(v_env_1368_);
lean_dec(v___x_1367_);
v___x_1369_ = l_Lean_Name_isAnonymous(v_declHint_1363_);
if (v___x_1369_ == 0)
{
uint8_t v_isExporting_1370_; 
v_isExporting_1370_ = lean_ctor_get_uint8(v_env_1368_, sizeof(void*)*13);
if (v_isExporting_1370_ == 0)
{
lean_object* v___x_1371_; 
lean_dec_ref(v_env_1368_);
lean_dec(v_declHint_1363_);
v___x_1371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1371_, 0, v_msg_1362_);
return v___x_1371_;
}
else
{
lean_object* v___x_1372_; uint8_t v___x_1373_; 
lean_inc_ref(v_env_1368_);
v___x_1372_ = l_Lean_Environment_setExporting(v_env_1368_, v___x_1369_);
lean_inc(v_declHint_1363_);
lean_inc_ref(v___x_1372_);
v___x_1373_ = l_Lean_Environment_contains(v___x_1372_, v_declHint_1363_, v_isExporting_1370_);
if (v___x_1373_ == 0)
{
lean_object* v___x_1374_; 
lean_dec_ref(v___x_1372_);
lean_dec_ref(v_env_1368_);
lean_dec(v_declHint_1363_);
v___x_1374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1374_, 0, v_msg_1362_);
return v___x_1374_;
}
else
{
lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v_c_1380_; lean_object* v___x_1381_; 
v___x_1375_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__1);
v___x_1376_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__4);
v___x_1377_ = l_Lean_Options_empty;
lean_inc_ref(v___x_1372_);
v___x_1378_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1378_, 0, v___x_1372_);
lean_ctor_set(v___x_1378_, 1, v___x_1375_);
lean_ctor_set(v___x_1378_, 2, v___x_1376_);
lean_ctor_set(v___x_1378_, 3, v___x_1377_);
lean_inc(v_declHint_1363_);
v___x_1379_ = l_Lean_MessageData_ofConstName(v_declHint_1363_, v___x_1369_);
v_c_1380_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1380_, 0, v___x_1378_);
lean_ctor_set(v_c_1380_, 1, v___x_1379_);
v___x_1381_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_1372_, v_declHint_1363_);
lean_dec_ref(v___x_1372_);
if (lean_obj_tag(v___x_1381_) == 0)
{
lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; 
lean_dec_ref(v_env_1368_);
lean_dec(v_declHint_1363_);
v___x_1382_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__1);
v___x_1383_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1383_, 0, v___x_1382_);
lean_ctor_set(v___x_1383_, 1, v_c_1380_);
v___x_1384_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__3);
v___x_1385_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1385_, 0, v___x_1383_);
lean_ctor_set(v___x_1385_, 1, v___x_1384_);
v___x_1386_ = l_Lean_MessageData_note(v___x_1385_);
v___x_1387_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1387_, 0, v_msg_1362_);
lean_ctor_set(v___x_1387_, 1, v___x_1386_);
v___x_1388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1388_, 0, v___x_1387_);
return v___x_1388_;
}
else
{
lean_object* v_val_1389_; lean_object* v___x_1391_; uint8_t v_isShared_1392_; uint8_t v_isSharedCheck_1423_; 
v_val_1389_ = lean_ctor_get(v___x_1381_, 0);
v_isSharedCheck_1423_ = !lean_is_exclusive(v___x_1381_);
if (v_isSharedCheck_1423_ == 0)
{
v___x_1391_ = v___x_1381_;
v_isShared_1392_ = v_isSharedCheck_1423_;
goto v_resetjp_1390_;
}
else
{
lean_inc(v_val_1389_);
lean_dec(v___x_1381_);
v___x_1391_ = lean_box(0);
v_isShared_1392_ = v_isSharedCheck_1423_;
goto v_resetjp_1390_;
}
v_resetjp_1390_:
{
lean_object* v___x_1393_; lean_object* v_moduleNames_1394_; lean_object* v_mod_1395_; uint8_t v___x_1396_; 
v___x_1393_ = l_Lean_Environment_header(v_env_1368_);
lean_dec_ref(v_env_1368_);
v_moduleNames_1394_ = lean_ctor_get(v___x_1393_, 4);
lean_inc_ref(v_moduleNames_1394_);
lean_dec_ref(v___x_1393_);
v_mod_1395_ = lean_array_get(v___x_1366_, v_moduleNames_1394_, v_val_1389_);
lean_dec(v_val_1389_);
lean_dec_ref(v_moduleNames_1394_);
v___x_1396_ = l_Lean_isPrivateName(v_declHint_1363_);
lean_dec(v_declHint_1363_);
if (v___x_1396_ == 0)
{
lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1408_; 
v___x_1397_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__5);
v___x_1398_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1398_, 0, v___x_1397_);
lean_ctor_set(v___x_1398_, 1, v_c_1380_);
v___x_1399_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__7);
v___x_1400_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1400_, 0, v___x_1398_);
lean_ctor_set(v___x_1400_, 1, v___x_1399_);
v___x_1401_ = l_Lean_MessageData_ofName(v_mod_1395_);
v___x_1402_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1402_, 0, v___x_1400_);
lean_ctor_set(v___x_1402_, 1, v___x_1401_);
v___x_1403_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__9);
v___x_1404_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1404_, 0, v___x_1402_);
lean_ctor_set(v___x_1404_, 1, v___x_1403_);
v___x_1405_ = l_Lean_MessageData_note(v___x_1404_);
v___x_1406_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1406_, 0, v_msg_1362_);
lean_ctor_set(v___x_1406_, 1, v___x_1405_);
if (v_isShared_1392_ == 0)
{
lean_ctor_set_tag(v___x_1391_, 0);
lean_ctor_set(v___x_1391_, 0, v___x_1406_);
v___x_1408_ = v___x_1391_;
goto v_reusejp_1407_;
}
else
{
lean_object* v_reuseFailAlloc_1409_; 
v_reuseFailAlloc_1409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1409_, 0, v___x_1406_);
v___x_1408_ = v_reuseFailAlloc_1409_;
goto v_reusejp_1407_;
}
v_reusejp_1407_:
{
return v___x_1408_;
}
}
else
{
lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1421_; 
v___x_1410_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__1);
v___x_1411_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1411_, 0, v___x_1410_);
lean_ctor_set(v___x_1411_, 1, v_c_1380_);
v___x_1412_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__11);
v___x_1413_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1413_, 0, v___x_1411_);
lean_ctor_set(v___x_1413_, 1, v___x_1412_);
v___x_1414_ = l_Lean_MessageData_ofName(v_mod_1395_);
v___x_1415_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1415_, 0, v___x_1413_);
lean_ctor_set(v___x_1415_, 1, v___x_1414_);
v___x_1416_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__13);
v___x_1417_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1417_, 0, v___x_1415_);
lean_ctor_set(v___x_1417_, 1, v___x_1416_);
v___x_1418_ = l_Lean_MessageData_note(v___x_1417_);
v___x_1419_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1419_, 0, v_msg_1362_);
lean_ctor_set(v___x_1419_, 1, v___x_1418_);
if (v_isShared_1392_ == 0)
{
lean_ctor_set_tag(v___x_1391_, 0);
lean_ctor_set(v___x_1391_, 0, v___x_1419_);
v___x_1421_ = v___x_1391_;
goto v_reusejp_1420_;
}
else
{
lean_object* v_reuseFailAlloc_1422_; 
v_reuseFailAlloc_1422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1422_, 0, v___x_1419_);
v___x_1421_ = v_reuseFailAlloc_1422_;
goto v_reusejp_1420_;
}
v_reusejp_1420_:
{
return v___x_1421_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1424_; 
lean_dec_ref(v_env_1368_);
lean_dec(v_declHint_1363_);
v___x_1424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1424_, 0, v_msg_1362_);
return v___x_1424_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___boxed(lean_object* v_msg_1425_, lean_object* v_declHint_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_){
_start:
{
lean_object* v_res_1429_; 
v_res_1429_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg(v_msg_1425_, v_declHint_1426_, v___y_1427_);
lean_dec(v___y_1427_);
return v_res_1429_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8(lean_object* v_msg_1430_, lean_object* v_declHint_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_){
_start:
{
lean_object* v___x_1435_; lean_object* v_a_1436_; lean_object* v___x_1438_; uint8_t v_isShared_1439_; uint8_t v_isSharedCheck_1445_; 
v___x_1435_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg(v_msg_1430_, v_declHint_1431_, v___y_1433_);
v_a_1436_ = lean_ctor_get(v___x_1435_, 0);
v_isSharedCheck_1445_ = !lean_is_exclusive(v___x_1435_);
if (v_isSharedCheck_1445_ == 0)
{
v___x_1438_ = v___x_1435_;
v_isShared_1439_ = v_isSharedCheck_1445_;
goto v_resetjp_1437_;
}
else
{
lean_inc(v_a_1436_);
lean_dec(v___x_1435_);
v___x_1438_ = lean_box(0);
v_isShared_1439_ = v_isSharedCheck_1445_;
goto v_resetjp_1437_;
}
v_resetjp_1437_:
{
lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1443_; 
v___x_1440_ = l_Lean_unknownIdentifierMessageTag;
v___x_1441_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1441_, 0, v___x_1440_);
lean_ctor_set(v___x_1441_, 1, v_a_1436_);
if (v_isShared_1439_ == 0)
{
lean_ctor_set(v___x_1438_, 0, v___x_1441_);
v___x_1443_ = v___x_1438_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v___x_1441_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
return v___x_1443_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8___boxed(lean_object* v_msg_1446_, lean_object* v_declHint_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_){
_start:
{
lean_object* v_res_1451_; 
v_res_1451_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8(v_msg_1446_, v_declHint_1447_, v___y_1448_, v___y_1449_);
lean_dec(v___y_1449_);
lean_dec_ref(v___y_1448_);
return v_res_1451_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7___redArg(lean_object* v_ref_1452_, lean_object* v_msg_1453_, lean_object* v_declHint_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_){
_start:
{
lean_object* v___x_1458_; lean_object* v_a_1459_; lean_object* v___x_1460_; 
v___x_1458_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8(v_msg_1453_, v_declHint_1454_, v___y_1455_, v___y_1456_);
v_a_1459_ = lean_ctor_get(v___x_1458_, 0);
lean_inc(v_a_1459_);
lean_dec_ref(v___x_1458_);
v___x_1460_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__9___redArg(v_ref_1452_, v_a_1459_, v___y_1455_, v___y_1456_);
return v___x_1460_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7___redArg___boxed(lean_object* v_ref_1461_, lean_object* v_msg_1462_, lean_object* v_declHint_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_){
_start:
{
lean_object* v_res_1467_; 
v_res_1467_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7___redArg(v_ref_1461_, v_msg_1462_, v_declHint_1463_, v___y_1464_, v___y_1465_);
lean_dec(v___y_1465_);
lean_dec_ref(v___y_1464_);
lean_dec(v_ref_1461_);
return v_res_1467_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_1469_; lean_object* v___x_1470_; 
v___x_1469_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__0));
v___x_1470_ = l_Lean_stringToMessageData(v___x_1469_);
return v___x_1470_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_1472_; lean_object* v___x_1473_; 
v___x_1472_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__2));
v___x_1473_ = l_Lean_stringToMessageData(v___x_1472_);
return v___x_1473_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg(lean_object* v_ref_1474_, lean_object* v_constName_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_){
_start:
{
lean_object* v___x_1479_; uint8_t v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; 
v___x_1479_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__1);
v___x_1480_ = 0;
lean_inc(v_constName_1475_);
v___x_1481_ = l_Lean_MessageData_ofConstName(v_constName_1475_, v___x_1480_);
v___x_1482_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1482_, 0, v___x_1479_);
lean_ctor_set(v___x_1482_, 1, v___x_1481_);
v___x_1483_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3);
v___x_1484_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1484_, 0, v___x_1482_);
lean_ctor_set(v___x_1484_, 1, v___x_1483_);
v___x_1485_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7___redArg(v_ref_1474_, v___x_1484_, v_constName_1475_, v___y_1476_, v___y_1477_);
return v___x_1485_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_ref_1486_, lean_object* v_constName_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_){
_start:
{
lean_object* v_res_1491_; 
v_res_1491_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg(v_ref_1486_, v_constName_1487_, v___y_1488_, v___y_1489_);
lean_dec(v___y_1489_);
lean_dec_ref(v___y_1488_);
lean_dec(v_ref_1486_);
return v_res_1491_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3___redArg(lean_object* v_constName_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_){
_start:
{
lean_object* v_ref_1496_; lean_object* v___x_1497_; 
v_ref_1496_ = lean_ctor_get(v___y_1493_, 2);
v___x_1497_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg(v_ref_1496_, v_constName_1492_, v___y_1493_, v___y_1494_);
return v___x_1497_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3___redArg___boxed(lean_object* v_constName_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_){
_start:
{
lean_object* v_res_1502_; 
v_res_1502_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3___redArg(v_constName_1498_, v___y_1499_, v___y_1500_);
lean_dec(v___y_1500_);
lean_dec_ref(v___y_1499_);
return v_res_1502_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2(lean_object* v_constName_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_){
_start:
{
lean_object* v___x_1507_; lean_object* v_env_1508_; uint8_t v___x_1509_; lean_object* v___x_1510_; 
v___x_1507_ = lean_st_ref_get(v___y_1505_);
v_env_1508_ = lean_ctor_get(v___x_1507_, 0);
lean_inc_ref(v_env_1508_);
lean_dec(v___x_1507_);
v___x_1509_ = 0;
lean_inc(v_constName_1503_);
v___x_1510_ = l_Lean_Environment_find_x3f(v_env_1508_, v_constName_1503_, v___x_1509_);
if (lean_obj_tag(v___x_1510_) == 0)
{
lean_object* v___x_1511_; 
v___x_1511_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3___redArg(v_constName_1503_, v___y_1504_, v___y_1505_);
return v___x_1511_;
}
else
{
lean_object* v_val_1512_; lean_object* v___x_1514_; uint8_t v_isShared_1515_; uint8_t v_isSharedCheck_1519_; 
lean_dec(v_constName_1503_);
v_val_1512_ = lean_ctor_get(v___x_1510_, 0);
v_isSharedCheck_1519_ = !lean_is_exclusive(v___x_1510_);
if (v_isSharedCheck_1519_ == 0)
{
v___x_1514_ = v___x_1510_;
v_isShared_1515_ = v_isSharedCheck_1519_;
goto v_resetjp_1513_;
}
else
{
lean_inc(v_val_1512_);
lean_dec(v___x_1510_);
v___x_1514_ = lean_box(0);
v_isShared_1515_ = v_isSharedCheck_1519_;
goto v_resetjp_1513_;
}
v_resetjp_1513_:
{
lean_object* v___x_1517_; 
if (v_isShared_1515_ == 0)
{
lean_ctor_set_tag(v___x_1514_, 0);
v___x_1517_ = v___x_1514_;
goto v_reusejp_1516_;
}
else
{
lean_object* v_reuseFailAlloc_1518_; 
v_reuseFailAlloc_1518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1518_, 0, v_val_1512_);
v___x_1517_ = v_reuseFailAlloc_1518_;
goto v_reusejp_1516_;
}
v_reusejp_1516_:
{
return v___x_1517_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2___boxed(lean_object* v_constName_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_){
_start:
{
lean_object* v_res_1524_; 
v_res_1524_ = l_Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2(v_constName_1520_, v___y_1521_, v___y_1522_);
lean_dec(v___y_1522_);
lean_dec_ref(v___y_1521_);
return v_res_1524_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1526_; lean_object* v___x_1527_; 
v___x_1526_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__0));
v___x_1527_ = l_Lean_stringToMessageData(v___x_1526_);
return v___x_1527_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1529_; lean_object* v___x_1530_; 
v___x_1529_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__2));
v___x_1530_ = l_Lean_stringToMessageData(v___x_1529_);
return v___x_1530_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__5(void){
_start:
{
lean_object* v___x_1532_; lean_object* v___x_1533_; 
v___x_1532_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__4));
v___x_1533_ = l_Lean_stringToMessageData(v___x_1532_);
return v___x_1533_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__7(void){
_start:
{
lean_object* v___x_1535_; lean_object* v___x_1536_; 
v___x_1535_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__6));
v___x_1536_ = l_Lean_stringToMessageData(v___x_1535_);
return v___x_1536_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__9(void){
_start:
{
lean_object* v___x_1538_; lean_object* v___x_1539_; 
v___x_1538_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__8));
v___x_1539_ = l_Lean_stringToMessageData(v___x_1538_);
return v___x_1539_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__11(void){
_start:
{
lean_object* v___x_1541_; lean_object* v___x_1542_; 
v___x_1541_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__10));
v___x_1542_ = l_Lean_stringToMessageData(v___x_1541_);
return v___x_1542_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__13(void){
_start:
{
lean_object* v___x_1544_; lean_object* v___x_1545_; 
v___x_1544_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__12));
v___x_1545_ = l_Lean_stringToMessageData(v___x_1544_);
return v___x_1545_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__15(void){
_start:
{
lean_object* v___x_1547_; lean_object* v___x_1548_; 
v___x_1547_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__14));
v___x_1548_ = l_Lean_stringToMessageData(v___x_1547_);
return v___x_1548_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__17(void){
_start:
{
lean_object* v___x_1550_; lean_object* v___x_1551_; 
v___x_1550_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__16));
v___x_1551_ = l_Lean_stringToMessageData(v___x_1550_);
return v___x_1551_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__19(void){
_start:
{
lean_object* v___x_1553_; lean_object* v___x_1554_; 
v___x_1553_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__18));
v___x_1554_ = l_Lean_stringToMessageData(v___x_1553_);
return v___x_1554_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__21(void){
_start:
{
lean_object* v___x_1556_; lean_object* v___x_1557_; 
v___x_1556_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__20));
v___x_1557_ = l_Lean_stringToMessageData(v___x_1556_);
return v___x_1557_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__23(void){
_start:
{
lean_object* v___x_1559_; lean_object* v___x_1560_; 
v___x_1559_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__22));
v___x_1560_ = l_Lean_stringToMessageData(v___x_1559_);
return v___x_1560_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__25(void){
_start:
{
lean_object* v___x_1562_; lean_object* v___x_1563_; 
v___x_1562_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__24));
v___x_1563_ = l_Lean_stringToMessageData(v___x_1562_);
return v___x_1563_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__27(void){
_start:
{
lean_object* v___x_1565_; lean_object* v___x_1566_; 
v___x_1565_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__26));
v___x_1566_ = l_Lean_stringToMessageData(v___x_1565_);
return v___x_1566_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__29(void){
_start:
{
lean_object* v___x_1568_; lean_object* v___x_1569_; 
v___x_1568_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__28));
v___x_1569_ = l_Lean_stringToMessageData(v___x_1568_);
return v___x_1569_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__31(void){
_start:
{
lean_object* v___x_1571_; lean_object* v___x_1572_; 
v___x_1571_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__30));
v___x_1572_ = l_Lean_stringToMessageData(v___x_1571_);
return v___x_1572_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__33(void){
_start:
{
lean_object* v___x_1574_; lean_object* v___x_1575_; 
v___x_1574_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__32));
v___x_1575_ = l_Lean_stringToMessageData(v___x_1574_);
return v___x_1575_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__35(void){
_start:
{
lean_object* v___x_1577_; lean_object* v___x_1578_; 
v___x_1577_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__34));
v___x_1578_ = l_Lean_stringToMessageData(v___x_1577_);
return v___x_1578_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__37(void){
_start:
{
lean_object* v___x_1580_; lean_object* v___x_1581_; 
v___x_1580_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__36));
v___x_1581_ = l_Lean_stringToMessageData(v___x_1580_);
return v___x_1581_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__39(void){
_start:
{
lean_object* v___x_1583_; lean_object* v___x_1584_; 
v___x_1583_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__38));
v___x_1584_ = l_Lean_stringToMessageData(v___x_1583_);
return v___x_1584_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__41(void){
_start:
{
lean_object* v___x_1586_; lean_object* v___x_1587_; 
v___x_1586_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__40));
v___x_1587_ = l_Lean_stringToMessageData(v___x_1586_);
return v___x_1587_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__43(void){
_start:
{
lean_object* v___x_1589_; lean_object* v___x_1590_; 
v___x_1589_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__42));
v___x_1590_ = l_Lean_stringToMessageData(v___x_1589_);
return v___x_1590_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__45(void){
_start:
{
lean_object* v___x_1592_; lean_object* v___x_1593_; 
v___x_1592_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__44));
v___x_1593_ = l_Lean_stringToMessageData(v___x_1592_);
return v___x_1593_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__47(void){
_start:
{
lean_object* v___x_1595_; lean_object* v___x_1596_; 
v___x_1595_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__46));
v___x_1596_ = l_Lean_stringToMessageData(v___x_1595_);
return v___x_1596_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__49(void){
_start:
{
lean_object* v___x_1598_; lean_object* v___x_1599_; 
v___x_1598_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__48));
v___x_1599_ = l_Lean_stringToMessageData(v___x_1598_);
return v___x_1599_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1(lean_object* v___f_1600_, uint8_t v_status_1601_, lean_object* v_declName_1602_, lean_object* v_suffix_1603_, uint8_t v_attrKind_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_){
_start:
{
lean_object* v___y_1609_; lean_object* v___y_1610_; lean_object* v___y_1614_; lean_object* v___y_1615_; lean_object* v___y_1619_; lean_object* v___y_1620_; lean_object* v___y_1624_; lean_object* v___y_1625_; lean_object* v___x_1628_; lean_object* v___x_1629_; uint8_t v___x_1630_; uint8_t v___y_1632_; lean_object* v___y_1633_; lean_object* v___y_1634_; lean_object* v___y_1702_; lean_object* v___y_1703_; 
v___x_1628_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1605_);
v___x_1629_ = l_Lean_allowUnsafeReducibility;
v___x_1630_ = l_Lean_Option_get___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__0(v___x_1628_, v___x_1629_);
lean_dec_ref(v___x_1628_);
if (v___x_1630_ == 0)
{
lean_object* v___x_1783_; 
lean_inc(v_declName_1602_);
v___x_1783_ = l_Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2(v_declName_1602_, v___y_1605_, v___y_1606_);
if (lean_obj_tag(v___x_1783_) == 0)
{
lean_object* v_a_1784_; uint8_t v___x_1785_; 
v_a_1784_ = lean_ctor_get(v___x_1783_, 0);
lean_inc(v_a_1784_);
lean_dec_ref_known(v___x_1783_, 1);
v___x_1785_ = l_Lean_ConstantInfo_isDefinition(v_a_1784_);
lean_dec(v_a_1784_);
if (v___x_1785_ == 0)
{
lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; 
lean_dec_ref(v___f_1600_);
v___x_1786_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__19, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__19_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__19);
v___x_1787_ = l_Lean_MessageData_ofConstName(v_declName_1602_, v___x_1785_);
v___x_1788_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1788_, 0, v___x_1786_);
lean_ctor_set(v___x_1788_, 1, v___x_1787_);
v___x_1789_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__49, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__49_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__49);
v___x_1790_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1790_, 0, v___x_1788_);
lean_ctor_set(v___x_1790_, 1, v___x_1789_);
v___x_1791_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1791_, 0, v___x_1790_);
lean_ctor_set(v___x_1791_, 1, v_suffix_1603_);
v___x_1792_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v___x_1791_, v___y_1605_, v___y_1606_);
lean_dec(v___y_1606_);
lean_dec_ref(v___y_1605_);
return v___x_1792_;
}
else
{
v___y_1702_ = v___y_1605_;
v___y_1703_ = v___y_1606_;
goto v___jp_1701_;
}
}
else
{
lean_object* v_a_1793_; lean_object* v___x_1795_; uint8_t v_isShared_1796_; uint8_t v_isSharedCheck_1800_; 
lean_dec(v___y_1606_);
lean_dec_ref(v___y_1605_);
lean_dec_ref(v_suffix_1603_);
lean_dec(v_declName_1602_);
lean_dec_ref(v___f_1600_);
v_a_1793_ = lean_ctor_get(v___x_1783_, 0);
v_isSharedCheck_1800_ = !lean_is_exclusive(v___x_1783_);
if (v_isSharedCheck_1800_ == 0)
{
v___x_1795_ = v___x_1783_;
v_isShared_1796_ = v_isSharedCheck_1800_;
goto v_resetjp_1794_;
}
else
{
lean_inc(v_a_1793_);
lean_dec(v___x_1783_);
v___x_1795_ = lean_box(0);
v_isShared_1796_ = v_isSharedCheck_1800_;
goto v_resetjp_1794_;
}
v_resetjp_1794_:
{
lean_object* v___x_1798_; 
if (v_isShared_1796_ == 0)
{
v___x_1798_ = v___x_1795_;
goto v_reusejp_1797_;
}
else
{
lean_object* v_reuseFailAlloc_1799_; 
v_reuseFailAlloc_1799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1799_, 0, v_a_1793_);
v___x_1798_ = v_reuseFailAlloc_1799_;
goto v_reusejp_1797_;
}
v_reusejp_1797_:
{
return v___x_1798_;
}
}
}
}
else
{
lean_object* v___x_1801_; lean_object* v___x_1802_; 
lean_dec_ref(v_suffix_1603_);
lean_dec(v_declName_1602_);
v___x_1801_ = lean_box(0);
v___x_1802_ = lean_apply_4(v___f_1600_, v___x_1801_, v___y_1605_, v___y_1606_, lean_box(0));
return v___x_1802_;
}
v___jp_1608_:
{
lean_object* v___x_1611_; lean_object* v___x_1612_; 
v___x_1611_ = lean_box(0);
v___x_1612_ = lean_apply_4(v___f_1600_, v___x_1611_, v___y_1609_, v___y_1610_, lean_box(0));
return v___x_1612_;
}
v___jp_1613_:
{
lean_object* v___x_1616_; lean_object* v___x_1617_; 
v___x_1616_ = lean_box(0);
v___x_1617_ = lean_apply_4(v___f_1600_, v___x_1616_, v___y_1614_, v___y_1615_, lean_box(0));
return v___x_1617_;
}
v___jp_1618_:
{
lean_object* v___x_1621_; lean_object* v___x_1622_; 
v___x_1621_ = lean_box(0);
v___x_1622_ = lean_apply_4(v___f_1600_, v___x_1621_, v___y_1619_, v___y_1620_, lean_box(0));
return v___x_1622_;
}
v___jp_1623_:
{
lean_object* v___x_1626_; lean_object* v___x_1627_; 
v___x_1626_ = lean_box(0);
v___x_1627_ = lean_apply_4(v___f_1600_, v___x_1626_, v___y_1624_, v___y_1625_, lean_box(0));
return v___x_1627_;
}
v___jp_1631_:
{
switch(v_status_1601_)
{
case 0:
{
if (v___y_1632_ == 1)
{
lean_object* v___x_1635_; lean_object* v___x_1636_; 
lean_dec_ref(v_suffix_1603_);
lean_dec(v_declName_1602_);
v___x_1635_ = lean_box(0);
v___x_1636_ = lean_apply_4(v___f_1600_, v___x_1635_, v___y_1633_, v___y_1634_, lean_box(0));
return v___x_1636_;
}
else
{
lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; 
lean_dec_ref(v___f_1600_);
v___x_1637_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__1, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__1_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__1);
v___x_1638_ = l_Lean_MessageData_ofConstName(v_declName_1602_, v___x_1630_);
v___x_1639_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1639_, 0, v___x_1637_);
lean_ctor_set(v___x_1639_, 1, v___x_1638_);
v___x_1640_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__3, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__3_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__3);
v___x_1641_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1641_, 0, v___x_1639_);
lean_ctor_set(v___x_1641_, 1, v___x_1640_);
v___x_1642_ = l_Lean_ReducibilityStatus_toAttrString(v___y_1632_);
v___x_1643_ = l_Lean_stringToMessageData(v___x_1642_);
v___x_1644_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1644_, 0, v___x_1641_);
lean_ctor_set(v___x_1644_, 1, v___x_1643_);
v___x_1645_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3);
v___x_1646_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1646_, 0, v___x_1644_);
lean_ctor_set(v___x_1646_, 1, v___x_1645_);
v___x_1647_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1647_, 0, v___x_1646_);
lean_ctor_set(v___x_1647_, 1, v_suffix_1603_);
v___x_1648_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v___x_1647_, v___y_1633_, v___y_1634_);
lean_dec(v___y_1634_);
lean_dec_ref(v___y_1633_);
return v___x_1648_;
}
}
case 1:
{
lean_dec_ref(v___f_1600_);
if (v___y_1632_ == 1)
{
lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; 
v___x_1649_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__5, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__5_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__5);
v___x_1650_ = l_Lean_MessageData_ofConstName(v_declName_1602_, v___x_1630_);
v___x_1651_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1651_, 0, v___x_1649_);
lean_ctor_set(v___x_1651_, 1, v___x_1650_);
v___x_1652_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__7, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__7_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__7);
v___x_1653_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1653_, 0, v___x_1651_);
lean_ctor_set(v___x_1653_, 1, v___x_1652_);
v___x_1654_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1654_, 0, v___x_1653_);
lean_ctor_set(v___x_1654_, 1, v_suffix_1603_);
v___x_1655_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v___x_1654_, v___y_1633_, v___y_1634_);
lean_dec(v___y_1634_);
lean_dec_ref(v___y_1633_);
return v___x_1655_;
}
else
{
lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; 
v___x_1656_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__5, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__5_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__5);
v___x_1657_ = l_Lean_MessageData_ofConstName(v_declName_1602_, v___x_1630_);
v___x_1658_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1658_, 0, v___x_1656_);
lean_ctor_set(v___x_1658_, 1, v___x_1657_);
v___x_1659_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3);
v___x_1660_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1660_, 0, v___x_1658_);
lean_ctor_set(v___x_1660_, 1, v___x_1659_);
v___x_1661_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1661_, 0, v___x_1660_);
lean_ctor_set(v___x_1661_, 1, v_suffix_1603_);
v___x_1662_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v___x_1661_, v___y_1633_, v___y_1634_);
lean_dec(v___y_1634_);
lean_dec_ref(v___y_1633_);
return v___x_1662_;
}
}
case 2:
{
switch(v___y_1632_)
{
case 1:
{
lean_dec_ref(v_suffix_1603_);
lean_dec(v_declName_1602_);
v___y_1624_ = v___y_1633_;
v___y_1625_ = v___y_1634_;
goto v___jp_1623_;
}
case 3:
{
lean_dec_ref(v_suffix_1603_);
lean_dec(v_declName_1602_);
v___y_1624_ = v___y_1633_;
v___y_1625_ = v___y_1634_;
goto v___jp_1623_;
}
case 4:
{
lean_dec_ref(v_suffix_1603_);
lean_dec(v_declName_1602_);
v___y_1624_ = v___y_1633_;
v___y_1625_ = v___y_1634_;
goto v___jp_1623_;
}
default: 
{
lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; 
lean_dec_ref(v___f_1600_);
v___x_1663_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__9, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__9_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__9);
v___x_1664_ = l_Lean_MessageData_ofConstName(v_declName_1602_, v___x_1630_);
v___x_1665_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1665_, 0, v___x_1663_);
lean_ctor_set(v___x_1665_, 1, v___x_1664_);
v___x_1666_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__11, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__11_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__11);
v___x_1667_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1667_, 0, v___x_1665_);
lean_ctor_set(v___x_1667_, 1, v___x_1666_);
v___x_1668_ = l_Lean_ReducibilityStatus_toAttrString(v___y_1632_);
v___x_1669_ = l_Lean_stringToMessageData(v___x_1668_);
v___x_1670_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1670_, 0, v___x_1667_);
lean_ctor_set(v___x_1670_, 1, v___x_1669_);
v___x_1671_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3);
v___x_1672_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1672_, 0, v___x_1670_);
lean_ctor_set(v___x_1672_, 1, v___x_1671_);
v___x_1673_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1673_, 0, v___x_1672_);
lean_ctor_set(v___x_1673_, 1, v_suffix_1603_);
v___x_1674_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v___x_1673_, v___y_1633_, v___y_1634_);
lean_dec(v___y_1634_);
lean_dec_ref(v___y_1633_);
return v___x_1674_;
}
}
}
case 3:
{
switch(v___y_1632_)
{
case 1:
{
lean_dec_ref(v_suffix_1603_);
lean_dec(v_declName_1602_);
v___y_1619_ = v___y_1633_;
v___y_1620_ = v___y_1634_;
goto v___jp_1618_;
}
case 4:
{
lean_dec_ref(v_suffix_1603_);
lean_dec(v_declName_1602_);
v___y_1619_ = v___y_1633_;
v___y_1620_ = v___y_1634_;
goto v___jp_1618_;
}
default: 
{
lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; 
lean_dec_ref(v___f_1600_);
v___x_1675_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__13, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__13_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__13);
v___x_1676_ = l_Lean_MessageData_ofConstName(v_declName_1602_, v___x_1630_);
v___x_1677_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1677_, 0, v___x_1675_);
lean_ctor_set(v___x_1677_, 1, v___x_1676_);
v___x_1678_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__15, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__15_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__15);
v___x_1679_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1679_, 0, v___x_1677_);
lean_ctor_set(v___x_1679_, 1, v___x_1678_);
v___x_1680_ = l_Lean_ReducibilityStatus_toAttrString(v___y_1632_);
v___x_1681_ = l_Lean_stringToMessageData(v___x_1680_);
v___x_1682_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1682_, 0, v___x_1679_);
lean_ctor_set(v___x_1682_, 1, v___x_1681_);
v___x_1683_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3);
v___x_1684_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1684_, 0, v___x_1682_);
lean_ctor_set(v___x_1684_, 1, v___x_1683_);
v___x_1685_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1685_, 0, v___x_1684_);
lean_ctor_set(v___x_1685_, 1, v_suffix_1603_);
v___x_1686_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v___x_1685_, v___y_1633_, v___y_1634_);
lean_dec(v___y_1634_);
lean_dec_ref(v___y_1633_);
return v___x_1686_;
}
}
}
default: 
{
if (v___y_1632_ == 1)
{
lean_object* v___x_1687_; lean_object* v___x_1688_; 
lean_dec_ref(v_suffix_1603_);
lean_dec(v_declName_1602_);
v___x_1687_ = lean_box(0);
v___x_1688_ = lean_apply_4(v___f_1600_, v___x_1687_, v___y_1633_, v___y_1634_, lean_box(0));
return v___x_1688_;
}
else
{
lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; 
lean_dec_ref(v___f_1600_);
v___x_1689_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__17, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__17_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__17);
v___x_1690_ = l_Lean_MessageData_ofConstName(v_declName_1602_, v___x_1630_);
v___x_1691_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1691_, 0, v___x_1689_);
lean_ctor_set(v___x_1691_, 1, v___x_1690_);
v___x_1692_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__3, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__3_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__3);
v___x_1693_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1693_, 0, v___x_1691_);
lean_ctor_set(v___x_1693_, 1, v___x_1692_);
v___x_1694_ = l_Lean_ReducibilityStatus_toAttrString(v___y_1632_);
v___x_1695_ = l_Lean_stringToMessageData(v___x_1694_);
v___x_1696_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1696_, 0, v___x_1693_);
lean_ctor_set(v___x_1696_, 1, v___x_1695_);
v___x_1697_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3);
v___x_1698_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1698_, 0, v___x_1696_);
lean_ctor_set(v___x_1698_, 1, v___x_1697_);
v___x_1699_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1699_, 0, v___x_1698_);
lean_ctor_set(v___x_1699_, 1, v_suffix_1603_);
v___x_1700_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v___x_1699_, v___y_1633_, v___y_1634_);
lean_dec(v___y_1634_);
lean_dec_ref(v___y_1633_);
return v___x_1700_;
}
}
}
}
v___jp_1701_:
{
lean_object* v___x_1704_; lean_object* v_env_1705_; uint8_t v___x_1706_; 
v___x_1704_ = lean_st_ref_get(v___y_1703_);
v_env_1705_ = lean_ctor_get(v___x_1704_, 0);
lean_inc_ref(v_env_1705_);
lean_dec(v___x_1704_);
lean_inc(v_declName_1602_);
v___x_1706_ = l_Lean_getReducibilityStatusCore(v_env_1705_, v_declName_1602_);
switch(v_attrKind_1604_)
{
case 0:
{
lean_object* v___x_1707_; lean_object* v_env_1708_; lean_object* v___x_1709_; 
v___x_1707_ = lean_st_ref_get(v___y_1703_);
v_env_1708_ = lean_ctor_get(v___x_1707_, 0);
lean_inc_ref(v_env_1708_);
lean_dec(v___x_1707_);
v___x_1709_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1708_, v_declName_1602_);
lean_dec_ref(v_env_1708_);
if (lean_obj_tag(v___x_1709_) == 1)
{
lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; 
lean_dec_ref_known(v___x_1709_, 1);
lean_dec_ref(v___f_1600_);
v___x_1710_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__19, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__19_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__19);
v___x_1711_ = l_Lean_MessageData_ofConstName(v_declName_1602_, v___x_1630_);
v___x_1712_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1712_, 0, v___x_1710_);
lean_ctor_set(v___x_1712_, 1, v___x_1711_);
v___x_1713_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__21, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__21_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__21);
v___x_1714_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1714_, 0, v___x_1712_);
lean_ctor_set(v___x_1714_, 1, v___x_1713_);
v___x_1715_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1715_, 0, v___x_1714_);
lean_ctor_set(v___x_1715_, 1, v_suffix_1603_);
v___x_1716_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v___x_1715_, v___y_1702_, v___y_1703_);
lean_dec(v___y_1703_);
lean_dec_ref(v___y_1702_);
return v___x_1716_;
}
else
{
lean_dec(v___x_1709_);
v___y_1632_ = v___x_1706_;
v___y_1633_ = v___y_1702_;
v___y_1634_ = v___y_1703_;
goto v___jp_1631_;
}
}
case 1:
{
switch(v_status_1601_)
{
case 0:
{
lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; 
lean_dec_ref(v___f_1600_);
v___x_1717_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__23, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__23_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__23);
v___x_1718_ = l_Lean_MessageData_ofConstName(v_declName_1602_, v___x_1630_);
v___x_1719_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1719_, 0, v___x_1717_);
lean_ctor_set(v___x_1719_, 1, v___x_1718_);
v___x_1720_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__25, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__25_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__25);
v___x_1721_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1721_, 0, v___x_1719_);
lean_ctor_set(v___x_1721_, 1, v___x_1720_);
v___x_1722_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1722_, 0, v___x_1721_);
lean_ctor_set(v___x_1722_, 1, v_suffix_1603_);
v___x_1723_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v___x_1722_, v___y_1702_, v___y_1703_);
lean_dec(v___y_1703_);
lean_dec_ref(v___y_1702_);
return v___x_1723_;
}
case 1:
{
if (v___x_1706_ == 2)
{
lean_object* v___x_1724_; lean_object* v___x_1725_; 
lean_dec_ref(v_suffix_1603_);
lean_dec(v_declName_1602_);
v___x_1724_ = lean_box(0);
v___x_1725_ = lean_apply_4(v___f_1600_, v___x_1724_, v___y_1702_, v___y_1703_, lean_box(0));
return v___x_1725_;
}
else
{
lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; 
lean_dec_ref(v___f_1600_);
v___x_1726_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__27, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__27_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__27);
v___x_1727_ = l_Lean_MessageData_ofConstName(v_declName_1602_, v___x_1630_);
v___x_1728_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1728_, 0, v___x_1726_);
lean_ctor_set(v___x_1728_, 1, v___x_1727_);
v___x_1729_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__29, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__29_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__29);
v___x_1730_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1730_, 0, v___x_1728_);
lean_ctor_set(v___x_1730_, 1, v___x_1729_);
v___x_1731_ = l_Lean_ReducibilityStatus_toAttrString(v___x_1706_);
v___x_1732_ = l_Lean_stringToMessageData(v___x_1731_);
v___x_1733_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1733_, 0, v___x_1730_);
lean_ctor_set(v___x_1733_, 1, v___x_1732_);
v___x_1734_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__31, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__31_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__31);
v___x_1735_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1735_, 0, v___x_1733_);
lean_ctor_set(v___x_1735_, 1, v___x_1734_);
v___x_1736_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1736_, 0, v___x_1735_);
lean_ctor_set(v___x_1736_, 1, v_suffix_1603_);
v___x_1737_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v___x_1736_, v___y_1702_, v___y_1703_);
lean_dec(v___y_1703_);
lean_dec_ref(v___y_1702_);
return v___x_1737_;
}
}
case 2:
{
switch(v___x_1706_)
{
case 1:
{
lean_dec_ref(v_suffix_1603_);
lean_dec(v_declName_1602_);
v___y_1609_ = v___y_1702_;
v___y_1610_ = v___y_1703_;
goto v___jp_1608_;
}
case 3:
{
lean_dec_ref(v_suffix_1603_);
lean_dec(v_declName_1602_);
v___y_1609_ = v___y_1702_;
v___y_1610_ = v___y_1703_;
goto v___jp_1608_;
}
case 4:
{
lean_dec_ref(v_suffix_1603_);
lean_dec(v_declName_1602_);
v___y_1609_ = v___y_1702_;
v___y_1610_ = v___y_1703_;
goto v___jp_1608_;
}
default: 
{
lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; 
lean_dec_ref(v___f_1600_);
v___x_1738_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__33, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__33_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__33);
v___x_1739_ = l_Lean_MessageData_ofConstName(v_declName_1602_, v___x_1630_);
v___x_1740_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1740_, 0, v___x_1738_);
lean_ctor_set(v___x_1740_, 1, v___x_1739_);
v___x_1741_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__29, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__29_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__29);
v___x_1742_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1742_, 0, v___x_1740_);
lean_ctor_set(v___x_1742_, 1, v___x_1741_);
v___x_1743_ = l_Lean_ReducibilityStatus_toAttrString(v___x_1706_);
v___x_1744_ = l_Lean_stringToMessageData(v___x_1743_);
v___x_1745_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1745_, 0, v___x_1742_);
lean_ctor_set(v___x_1745_, 1, v___x_1744_);
v___x_1746_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__35, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__35_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__35);
v___x_1747_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1747_, 0, v___x_1745_);
lean_ctor_set(v___x_1747_, 1, v___x_1746_);
v___x_1748_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1748_, 0, v___x_1747_);
lean_ctor_set(v___x_1748_, 1, v_suffix_1603_);
v___x_1749_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v___x_1748_, v___y_1702_, v___y_1703_);
lean_dec(v___y_1703_);
lean_dec_ref(v___y_1702_);
return v___x_1749_;
}
}
}
case 3:
{
switch(v___x_1706_)
{
case 1:
{
lean_dec_ref(v_suffix_1603_);
lean_dec(v_declName_1602_);
v___y_1614_ = v___y_1702_;
v___y_1615_ = v___y_1703_;
goto v___jp_1613_;
}
case 4:
{
lean_dec_ref(v_suffix_1603_);
lean_dec(v_declName_1602_);
v___y_1614_ = v___y_1702_;
v___y_1615_ = v___y_1703_;
goto v___jp_1613_;
}
default: 
{
lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; 
lean_dec_ref(v___f_1600_);
v___x_1750_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__37, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__37_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__37);
v___x_1751_ = l_Lean_MessageData_ofConstName(v_declName_1602_, v___x_1630_);
v___x_1752_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1752_, 0, v___x_1750_);
lean_ctor_set(v___x_1752_, 1, v___x_1751_);
v___x_1753_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__29, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__29_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__29);
v___x_1754_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1754_, 0, v___x_1752_);
lean_ctor_set(v___x_1754_, 1, v___x_1753_);
v___x_1755_ = l_Lean_ReducibilityStatus_toAttrString(v___x_1706_);
v___x_1756_ = l_Lean_stringToMessageData(v___x_1755_);
v___x_1757_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1757_, 0, v___x_1754_);
lean_ctor_set(v___x_1757_, 1, v___x_1756_);
v___x_1758_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__39, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__39_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__39);
v___x_1759_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1759_, 0, v___x_1757_);
lean_ctor_set(v___x_1759_, 1, v___x_1758_);
v___x_1760_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1760_, 0, v___x_1759_);
lean_ctor_set(v___x_1760_, 1, v_suffix_1603_);
v___x_1761_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v___x_1760_, v___y_1702_, v___y_1703_);
lean_dec(v___y_1703_);
lean_dec_ref(v___y_1702_);
return v___x_1761_;
}
}
}
default: 
{
if (v___x_1706_ == 1)
{
lean_object* v___x_1762_; lean_object* v___x_1763_; 
lean_dec_ref(v_suffix_1603_);
lean_dec(v_declName_1602_);
v___x_1762_ = lean_box(0);
v___x_1763_ = lean_apply_4(v___f_1600_, v___x_1762_, v___y_1702_, v___y_1703_, lean_box(0));
return v___x_1763_;
}
else
{
lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; 
lean_dec_ref(v___f_1600_);
v___x_1764_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__41, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__41_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__41);
v___x_1765_ = l_Lean_MessageData_ofConstName(v_declName_1602_, v___x_1630_);
v___x_1766_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1766_, 0, v___x_1764_);
lean_ctor_set(v___x_1766_, 1, v___x_1765_);
v___x_1767_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__29, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__29_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__29);
v___x_1768_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1768_, 0, v___x_1766_);
lean_ctor_set(v___x_1768_, 1, v___x_1767_);
v___x_1769_ = l_Lean_ReducibilityStatus_toAttrString(v___x_1706_);
v___x_1770_ = l_Lean_stringToMessageData(v___x_1769_);
v___x_1771_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1771_, 0, v___x_1768_);
lean_ctor_set(v___x_1771_, 1, v___x_1770_);
v___x_1772_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__43, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__43_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__43);
v___x_1773_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1773_, 0, v___x_1771_);
lean_ctor_set(v___x_1773_, 1, v___x_1772_);
v___x_1774_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1774_, 0, v___x_1773_);
lean_ctor_set(v___x_1774_, 1, v_suffix_1603_);
v___x_1775_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v___x_1774_, v___y_1702_, v___y_1703_);
lean_dec(v___y_1703_);
lean_dec_ref(v___y_1702_);
return v___x_1775_;
}
}
}
}
default: 
{
lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; 
lean_dec_ref(v___f_1600_);
v___x_1776_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__45, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__45_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__45);
v___x_1777_ = l_Lean_MessageData_ofConstName(v_declName_1602_, v___x_1630_);
v___x_1778_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1778_, 0, v___x_1776_);
lean_ctor_set(v___x_1778_, 1, v___x_1777_);
v___x_1779_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__47, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__47_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___closed__47);
v___x_1780_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1780_, 0, v___x_1778_);
lean_ctor_set(v___x_1780_, 1, v___x_1779_);
v___x_1781_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1781_, 0, v___x_1780_);
lean_ctor_set(v___x_1781_, 1, v_suffix_1603_);
v___x_1782_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v___x_1781_, v___y_1702_, v___y_1703_);
lean_dec(v___y_1703_);
lean_dec_ref(v___y_1702_);
return v___x_1782_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___boxed(lean_object* v___f_1803_, lean_object* v_status_1804_, lean_object* v_declName_1805_, lean_object* v_suffix_1806_, lean_object* v_attrKind_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_){
_start:
{
uint8_t v_status_boxed_1811_; uint8_t v_attrKind_boxed_1812_; lean_object* v_res_1813_; 
v_status_boxed_1811_ = lean_unbox(v_status_1804_);
v_attrKind_boxed_1812_ = lean_unbox(v_attrKind_1807_);
v_res_1813_ = l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1(v___f_1803_, v_status_boxed_1811_, v_declName_1805_, v_suffix_1806_, v_attrKind_boxed_1812_, v___y_1808_, v___y_1809_);
return v_res_1813_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___lam__0(lean_object* v___y_1814_, uint8_t v_isExporting_1815_, lean_object* v___x_1816_, lean_object* v_a_x3f_1817_){
_start:
{
lean_object* v___x_1819_; lean_object* v_env_1820_; lean_object* v_nextMacroScope_1821_; lean_object* v_ngen_1822_; lean_object* v_auxDeclNGen_1823_; lean_object* v_traceState_1824_; lean_object* v_recordedDeps_1825_; lean_object* v_messages_1826_; lean_object* v_infoState_1827_; lean_object* v_snapshotTasks_1828_; lean_object* v___x_1830_; uint8_t v_isShared_1831_; uint8_t v_isSharedCheck_1839_; 
v___x_1819_ = lean_st_ref_take(v___y_1814_);
v_env_1820_ = lean_ctor_get(v___x_1819_, 0);
v_nextMacroScope_1821_ = lean_ctor_get(v___x_1819_, 1);
v_ngen_1822_ = lean_ctor_get(v___x_1819_, 2);
v_auxDeclNGen_1823_ = lean_ctor_get(v___x_1819_, 3);
v_traceState_1824_ = lean_ctor_get(v___x_1819_, 4);
v_recordedDeps_1825_ = lean_ctor_get(v___x_1819_, 6);
v_messages_1826_ = lean_ctor_get(v___x_1819_, 7);
v_infoState_1827_ = lean_ctor_get(v___x_1819_, 8);
v_snapshotTasks_1828_ = lean_ctor_get(v___x_1819_, 9);
v_isSharedCheck_1839_ = !lean_is_exclusive(v___x_1819_);
if (v_isSharedCheck_1839_ == 0)
{
lean_object* v_unused_1840_; 
v_unused_1840_ = lean_ctor_get(v___x_1819_, 5);
lean_dec(v_unused_1840_);
v___x_1830_ = v___x_1819_;
v_isShared_1831_ = v_isSharedCheck_1839_;
goto v_resetjp_1829_;
}
else
{
lean_inc(v_snapshotTasks_1828_);
lean_inc(v_infoState_1827_);
lean_inc(v_messages_1826_);
lean_inc(v_recordedDeps_1825_);
lean_inc(v_traceState_1824_);
lean_inc(v_auxDeclNGen_1823_);
lean_inc(v_ngen_1822_);
lean_inc(v_nextMacroScope_1821_);
lean_inc(v_env_1820_);
lean_dec(v___x_1819_);
v___x_1830_ = lean_box(0);
v_isShared_1831_ = v_isSharedCheck_1839_;
goto v_resetjp_1829_;
}
v_resetjp_1829_:
{
lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1835_; 
v___x_1832_ = lean_box(0);
v___x_1833_ = l_Lean_Environment_setExporting(v_env_1820_, v_isExporting_1815_);
if (v_isShared_1831_ == 0)
{
lean_ctor_set(v___x_1830_, 5, v___x_1816_);
lean_ctor_set(v___x_1830_, 0, v___x_1833_);
v___x_1835_ = v___x_1830_;
goto v_reusejp_1834_;
}
else
{
lean_object* v_reuseFailAlloc_1838_; 
v_reuseFailAlloc_1838_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1838_, 0, v___x_1833_);
lean_ctor_set(v_reuseFailAlloc_1838_, 1, v_nextMacroScope_1821_);
lean_ctor_set(v_reuseFailAlloc_1838_, 2, v_ngen_1822_);
lean_ctor_set(v_reuseFailAlloc_1838_, 3, v_auxDeclNGen_1823_);
lean_ctor_set(v_reuseFailAlloc_1838_, 4, v_traceState_1824_);
lean_ctor_set(v_reuseFailAlloc_1838_, 5, v___x_1816_);
lean_ctor_set(v_reuseFailAlloc_1838_, 6, v_recordedDeps_1825_);
lean_ctor_set(v_reuseFailAlloc_1838_, 7, v_messages_1826_);
lean_ctor_set(v_reuseFailAlloc_1838_, 8, v_infoState_1827_);
lean_ctor_set(v_reuseFailAlloc_1838_, 9, v_snapshotTasks_1828_);
v___x_1835_ = v_reuseFailAlloc_1838_;
goto v_reusejp_1834_;
}
v_reusejp_1834_:
{
lean_object* v___x_1836_; lean_object* v___x_1837_; 
v___x_1836_ = lean_st_ref_put(v___y_1814_, v___x_1835_);
v___x_1837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1837_, 0, v___x_1832_);
return v___x_1837_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___lam__0___boxed(lean_object* v___y_1841_, lean_object* v_isExporting_1842_, lean_object* v___x_1843_, lean_object* v_a_x3f_1844_, lean_object* v___y_1845_){
_start:
{
uint8_t v_isExporting_boxed_1846_; lean_object* v_res_1847_; 
v_isExporting_boxed_1846_ = lean_unbox(v_isExporting_1842_);
v_res_1847_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___lam__0(v___y_1841_, v_isExporting_boxed_1846_, v___x_1843_, v_a_x3f_1844_);
lean_dec(v_a_x3f_1844_);
lean_dec(v___y_1841_);
return v_res_1847_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_1848_; lean_object* v___x_1849_; 
v___x_1848_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_);
v___x_1849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1849_, 0, v___x_1848_);
return v___x_1849_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_1850_; lean_object* v___x_1851_; 
v___x_1850_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__0);
v___x_1851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1851_, 0, v___x_1850_);
lean_ctor_set(v___x_1851_, 1, v___x_1850_);
return v___x_1851_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg(lean_object* v_x_1852_, uint8_t v_isExporting_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_){
_start:
{
lean_object* v___x_1857_; lean_object* v_env_1858_; lean_object* v___x_1859_; uint8_t v_isModule_1860_; 
v___x_1857_ = lean_st_ref_get(v___y_1855_);
v_env_1858_ = lean_ctor_get(v___x_1857_, 0);
lean_inc_ref(v_env_1858_);
lean_dec(v___x_1857_);
v___x_1859_ = l_Lean_Environment_header(v_env_1858_);
v_isModule_1860_ = lean_ctor_get_uint8(v___x_1859_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_1859_);
if (v_isModule_1860_ == 0)
{
lean_object* v___x_1861_; 
lean_dec_ref(v_env_1858_);
lean_inc(v___y_1855_);
lean_inc_ref(v___y_1854_);
v___x_1861_ = lean_apply_3(v_x_1852_, v___y_1854_, v___y_1855_, lean_box(0));
return v___x_1861_;
}
else
{
uint8_t v_isExporting_1862_; 
v_isExporting_1862_ = lean_ctor_get_uint8(v_env_1858_, sizeof(void*)*13);
lean_dec_ref(v_env_1858_);
if (v_isExporting_1853_ == 0)
{
if (v_isExporting_1862_ == 0)
{
lean_object* v___x_1914_; 
lean_inc(v___y_1855_);
lean_inc_ref(v___y_1854_);
v___x_1914_ = lean_apply_3(v_x_1852_, v___y_1854_, v___y_1855_, lean_box(0));
return v___x_1914_;
}
else
{
goto v___jp_1863_;
}
}
else
{
if (v_isExporting_1862_ == 0)
{
goto v___jp_1863_;
}
else
{
lean_object* v___x_1915_; 
lean_inc(v___y_1855_);
lean_inc_ref(v___y_1854_);
v___x_1915_ = lean_apply_3(v_x_1852_, v___y_1854_, v___y_1855_, lean_box(0));
return v___x_1915_;
}
}
v___jp_1863_:
{
lean_object* v___x_1864_; lean_object* v_env_1865_; lean_object* v_nextMacroScope_1866_; lean_object* v_ngen_1867_; lean_object* v_auxDeclNGen_1868_; lean_object* v_traceState_1869_; lean_object* v_recordedDeps_1870_; lean_object* v_messages_1871_; lean_object* v_infoState_1872_; lean_object* v_snapshotTasks_1873_; lean_object* v___x_1875_; uint8_t v_isShared_1876_; uint8_t v_isSharedCheck_1912_; 
v___x_1864_ = lean_st_ref_take(v___y_1855_);
v_env_1865_ = lean_ctor_get(v___x_1864_, 0);
v_nextMacroScope_1866_ = lean_ctor_get(v___x_1864_, 1);
v_ngen_1867_ = lean_ctor_get(v___x_1864_, 2);
v_auxDeclNGen_1868_ = lean_ctor_get(v___x_1864_, 3);
v_traceState_1869_ = lean_ctor_get(v___x_1864_, 4);
v_recordedDeps_1870_ = lean_ctor_get(v___x_1864_, 6);
v_messages_1871_ = lean_ctor_get(v___x_1864_, 7);
v_infoState_1872_ = lean_ctor_get(v___x_1864_, 8);
v_snapshotTasks_1873_ = lean_ctor_get(v___x_1864_, 9);
v_isSharedCheck_1912_ = !lean_is_exclusive(v___x_1864_);
if (v_isSharedCheck_1912_ == 0)
{
lean_object* v_unused_1913_; 
v_unused_1913_ = lean_ctor_get(v___x_1864_, 5);
lean_dec(v_unused_1913_);
v___x_1875_ = v___x_1864_;
v_isShared_1876_ = v_isSharedCheck_1912_;
goto v_resetjp_1874_;
}
else
{
lean_inc(v_snapshotTasks_1873_);
lean_inc(v_infoState_1872_);
lean_inc(v_messages_1871_);
lean_inc(v_recordedDeps_1870_);
lean_inc(v_traceState_1869_);
lean_inc(v_auxDeclNGen_1868_);
lean_inc(v_ngen_1867_);
lean_inc(v_nextMacroScope_1866_);
lean_inc(v_env_1865_);
lean_dec(v___x_1864_);
v___x_1875_ = lean_box(0);
v_isShared_1876_ = v_isSharedCheck_1912_;
goto v_resetjp_1874_;
}
v_resetjp_1874_:
{
lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1880_; 
v___x_1877_ = l_Lean_Environment_setExporting(v_env_1865_, v_isExporting_1853_);
v___x_1878_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__1, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__1);
if (v_isShared_1876_ == 0)
{
lean_ctor_set(v___x_1875_, 5, v___x_1878_);
lean_ctor_set(v___x_1875_, 0, v___x_1877_);
v___x_1880_ = v___x_1875_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1911_; 
v_reuseFailAlloc_1911_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1911_, 0, v___x_1877_);
lean_ctor_set(v_reuseFailAlloc_1911_, 1, v_nextMacroScope_1866_);
lean_ctor_set(v_reuseFailAlloc_1911_, 2, v_ngen_1867_);
lean_ctor_set(v_reuseFailAlloc_1911_, 3, v_auxDeclNGen_1868_);
lean_ctor_set(v_reuseFailAlloc_1911_, 4, v_traceState_1869_);
lean_ctor_set(v_reuseFailAlloc_1911_, 5, v___x_1878_);
lean_ctor_set(v_reuseFailAlloc_1911_, 6, v_recordedDeps_1870_);
lean_ctor_set(v_reuseFailAlloc_1911_, 7, v_messages_1871_);
lean_ctor_set(v_reuseFailAlloc_1911_, 8, v_infoState_1872_);
lean_ctor_set(v_reuseFailAlloc_1911_, 9, v_snapshotTasks_1873_);
v___x_1880_ = v_reuseFailAlloc_1911_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
lean_object* v___x_1881_; lean_object* v_r_1882_; 
v___x_1881_ = lean_st_ref_put(v___y_1855_, v___x_1880_);
lean_inc(v___y_1855_);
lean_inc_ref(v___y_1854_);
v_r_1882_ = lean_apply_3(v_x_1852_, v___y_1854_, v___y_1855_, lean_box(0));
if (lean_obj_tag(v_r_1882_) == 0)
{
lean_object* v_a_1883_; lean_object* v___x_1885_; uint8_t v_isShared_1886_; uint8_t v_isSharedCheck_1899_; 
v_a_1883_ = lean_ctor_get(v_r_1882_, 0);
v_isSharedCheck_1899_ = !lean_is_exclusive(v_r_1882_);
if (v_isSharedCheck_1899_ == 0)
{
v___x_1885_ = v_r_1882_;
v_isShared_1886_ = v_isSharedCheck_1899_;
goto v_resetjp_1884_;
}
else
{
lean_inc(v_a_1883_);
lean_dec(v_r_1882_);
v___x_1885_ = lean_box(0);
v_isShared_1886_ = v_isSharedCheck_1899_;
goto v_resetjp_1884_;
}
v_resetjp_1884_:
{
lean_object* v___x_1888_; 
lean_inc(v_a_1883_);
if (v_isShared_1886_ == 0)
{
lean_ctor_set_tag(v___x_1885_, 1);
v___x_1888_ = v___x_1885_;
goto v_reusejp_1887_;
}
else
{
lean_object* v_reuseFailAlloc_1898_; 
v_reuseFailAlloc_1898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1898_, 0, v_a_1883_);
v___x_1888_ = v_reuseFailAlloc_1898_;
goto v_reusejp_1887_;
}
v_reusejp_1887_:
{
lean_object* v___x_1889_; lean_object* v___x_1891_; uint8_t v_isShared_1892_; uint8_t v_isSharedCheck_1896_; 
v___x_1889_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___lam__0(v___y_1855_, v_isExporting_1862_, v___x_1878_, v___x_1888_);
lean_dec_ref(v___x_1888_);
v_isSharedCheck_1896_ = !lean_is_exclusive(v___x_1889_);
if (v_isSharedCheck_1896_ == 0)
{
lean_object* v_unused_1897_; 
v_unused_1897_ = lean_ctor_get(v___x_1889_, 0);
lean_dec(v_unused_1897_);
v___x_1891_ = v___x_1889_;
v_isShared_1892_ = v_isSharedCheck_1896_;
goto v_resetjp_1890_;
}
else
{
lean_dec(v___x_1889_);
v___x_1891_ = lean_box(0);
v_isShared_1892_ = v_isSharedCheck_1896_;
goto v_resetjp_1890_;
}
v_resetjp_1890_:
{
lean_object* v___x_1894_; 
if (v_isShared_1892_ == 0)
{
lean_ctor_set(v___x_1891_, 0, v_a_1883_);
v___x_1894_ = v___x_1891_;
goto v_reusejp_1893_;
}
else
{
lean_object* v_reuseFailAlloc_1895_; 
v_reuseFailAlloc_1895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1895_, 0, v_a_1883_);
v___x_1894_ = v_reuseFailAlloc_1895_;
goto v_reusejp_1893_;
}
v_reusejp_1893_:
{
return v___x_1894_;
}
}
}
}
}
else
{
lean_object* v_a_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1904_; uint8_t v_isShared_1905_; uint8_t v_isSharedCheck_1909_; 
v_a_1900_ = lean_ctor_get(v_r_1882_, 0);
lean_inc(v_a_1900_);
lean_dec_ref_known(v_r_1882_, 1);
v___x_1901_ = lean_box(0);
v___x_1902_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___lam__0(v___y_1855_, v_isExporting_1862_, v___x_1878_, v___x_1901_);
v_isSharedCheck_1909_ = !lean_is_exclusive(v___x_1902_);
if (v_isSharedCheck_1909_ == 0)
{
lean_object* v_unused_1910_; 
v_unused_1910_ = lean_ctor_get(v___x_1902_, 0);
lean_dec(v_unused_1910_);
v___x_1904_ = v___x_1902_;
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
else
{
lean_dec(v___x_1902_);
v___x_1904_ = lean_box(0);
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
v_resetjp_1903_:
{
lean_object* v___x_1907_; 
if (v_isShared_1905_ == 0)
{
lean_ctor_set_tag(v___x_1904_, 1);
lean_ctor_set(v___x_1904_, 0, v_a_1900_);
v___x_1907_ = v___x_1904_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1908_; 
v_reuseFailAlloc_1908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1908_, 0, v_a_1900_);
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
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___boxed(lean_object* v_x_1916_, lean_object* v_isExporting_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_){
_start:
{
uint8_t v_isExporting_boxed_1921_; lean_object* v_res_1922_; 
v_isExporting_boxed_1921_ = lean_unbox(v_isExporting_1917_);
v_res_1922_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg(v_x_1916_, v_isExporting_boxed_1921_, v___y_1918_, v___y_1919_);
lean_dec(v___y_1919_);
lean_dec_ref(v___y_1918_);
return v_res_1922_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3___redArg(lean_object* v_x_1923_, uint8_t v_when_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_){
_start:
{
if (v_when_1924_ == 0)
{
lean_object* v___x_1928_; 
lean_inc(v___y_1926_);
lean_inc_ref(v___y_1925_);
v___x_1928_ = lean_apply_3(v_x_1923_, v___y_1925_, v___y_1926_, lean_box(0));
return v___x_1928_;
}
else
{
uint8_t v___x_1929_; lean_object* v___x_1930_; 
v___x_1929_ = 0;
v___x_1930_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg(v_x_1923_, v___x_1929_, v___y_1925_, v___y_1926_);
return v___x_1930_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3___redArg___boxed(lean_object* v_x_1931_, lean_object* v_when_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_){
_start:
{
uint8_t v_when_boxed_1936_; lean_object* v_res_1937_; 
v_when_boxed_1936_ = lean_unbox(v_when_1932_);
v_res_1937_ = l_Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3___redArg(v_x_1931_, v_when_boxed_1936_, v___y_1933_, v___y_1934_);
lean_dec(v___y_1934_);
lean_dec_ref(v___y_1933_);
return v_res_1937_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__3(void){
_start:
{
lean_object* v___x_1942_; lean_object* v___x_1943_; 
v___x_1942_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__2));
v___x_1943_ = l_Lean_MessageData_ofFormat(v___x_1942_);
return v___x_1943_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__4(void){
_start:
{
lean_object* v___x_1944_; lean_object* v_suffix_1945_; 
v___x_1944_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__3, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__3_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__3);
v_suffix_1945_ = l_Lean_MessageData_note(v___x_1944_);
return v_suffix_1945_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate(lean_object* v_declName_1946_, uint8_t v_status_1947_, uint8_t v_attrKind_1948_, lean_object* v_a_1949_, lean_object* v_a_1950_){
_start:
{
lean_object* v___f_1952_; lean_object* v_suffix_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___f_1956_; uint8_t v___x_1957_; lean_object* v___x_1958_; 
v___f_1952_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__0));
v_suffix_1953_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__4, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__4_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__4);
v___x_1954_ = lean_box(v_status_1947_);
v___x_1955_ = lean_box(v_attrKind_1948_);
v___f_1956_ = lean_alloc_closure((void*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__1___boxed), 8, 5);
lean_closure_set(v___f_1956_, 0, v___f_1952_);
lean_closure_set(v___f_1956_, 1, v___x_1954_);
lean_closure_set(v___f_1956_, 2, v_declName_1946_);
lean_closure_set(v___f_1956_, 3, v_suffix_1953_);
lean_closure_set(v___f_1956_, 4, v___x_1955_);
v___x_1957_ = 1;
v___x_1958_ = l_Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3___redArg(v___f_1956_, v___x_1957_, v_a_1949_, v_a_1950_);
return v___x_1958_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___boxed(lean_object* v_declName_1959_, lean_object* v_status_1960_, lean_object* v_attrKind_1961_, lean_object* v_a_1962_, lean_object* v_a_1963_, lean_object* v_a_1964_){
_start:
{
uint8_t v_status_boxed_1965_; uint8_t v_attrKind_boxed_1966_; lean_object* v_res_1967_; 
v_status_boxed_1965_ = lean_unbox(v_status_1960_);
v_attrKind_boxed_1966_ = lean_unbox(v_attrKind_1961_);
v_res_1967_ = l___private_Lean_ReducibilityAttrs_0__Lean_validate(v_declName_1959_, v_status_boxed_1965_, v_attrKind_boxed_1966_, v_a_1962_, v_a_1963_);
lean_dec(v_a_1963_);
lean_dec_ref(v_a_1962_);
return v_res_1967_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1(lean_object* v_00_u03b1_1968_, lean_object* v_msg_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_){
_start:
{
lean_object* v___x_1973_; 
v___x_1973_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v_msg_1969_, v___y_1970_, v___y_1971_);
return v___x_1973_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___boxed(lean_object* v_00_u03b1_1974_, lean_object* v_msg_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_){
_start:
{
lean_object* v_res_1979_; 
v_res_1979_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1(v_00_u03b1_1974_, v_msg_1975_, v___y_1976_, v___y_1977_);
lean_dec(v___y_1977_);
lean_dec_ref(v___y_1976_);
return v_res_1979_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5(lean_object* v_00_u03b1_1980_, lean_object* v_x_1981_, uint8_t v_isExporting_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_){
_start:
{
lean_object* v___x_1986_; 
v___x_1986_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg(v_x_1981_, v_isExporting_1982_, v___y_1983_, v___y_1984_);
return v___x_1986_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___boxed(lean_object* v_00_u03b1_1987_, lean_object* v_x_1988_, lean_object* v_isExporting_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_){
_start:
{
uint8_t v_isExporting_boxed_1993_; lean_object* v_res_1994_; 
v_isExporting_boxed_1993_ = lean_unbox(v_isExporting_1989_);
v_res_1994_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5(v_00_u03b1_1987_, v_x_1988_, v_isExporting_boxed_1993_, v___y_1990_, v___y_1991_);
lean_dec(v___y_1991_);
lean_dec_ref(v___y_1990_);
return v_res_1994_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3(lean_object* v_00_u03b1_1995_, lean_object* v_x_1996_, uint8_t v_when_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_){
_start:
{
lean_object* v___x_2001_; 
v___x_2001_ = l_Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3___redArg(v_x_1996_, v_when_1997_, v___y_1998_, v___y_1999_);
return v___x_2001_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3___boxed(lean_object* v_00_u03b1_2002_, lean_object* v_x_2003_, lean_object* v_when_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_){
_start:
{
uint8_t v_when_boxed_2008_; lean_object* v_res_2009_; 
v_when_boxed_2008_ = lean_unbox(v_when_2004_);
v_res_2009_ = l_Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3(v_00_u03b1_2002_, v_x_2003_, v_when_boxed_2008_, v___y_2005_, v___y_2006_);
lean_dec(v___y_2006_);
lean_dec_ref(v___y_2005_);
return v_res_2009_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3(lean_object* v_00_u03b1_2010_, lean_object* v_constName_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_){
_start:
{
lean_object* v___x_2015_; 
v___x_2015_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3___redArg(v_constName_2011_, v___y_2012_, v___y_2013_);
return v___x_2015_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3___boxed(lean_object* v_00_u03b1_2016_, lean_object* v_constName_2017_, lean_object* v___y_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_){
_start:
{
lean_object* v_res_2021_; 
v_res_2021_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3(v_00_u03b1_2016_, v_constName_2017_, v___y_2018_, v___y_2019_);
lean_dec(v___y_2019_);
lean_dec_ref(v___y_2018_);
return v_res_2021_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4(lean_object* v_00_u03b1_2022_, lean_object* v_ref_2023_, lean_object* v_constName_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_){
_start:
{
lean_object* v___x_2028_; 
v___x_2028_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg(v_ref_2023_, v_constName_2024_, v___y_2025_, v___y_2026_);
return v___x_2028_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___boxed(lean_object* v_00_u03b1_2029_, lean_object* v_ref_2030_, lean_object* v_constName_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_){
_start:
{
lean_object* v_res_2035_; 
v_res_2035_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4(v_00_u03b1_2029_, v_ref_2030_, v_constName_2031_, v___y_2032_, v___y_2033_);
lean_dec(v___y_2033_);
lean_dec_ref(v___y_2032_);
lean_dec(v_ref_2030_);
return v_res_2035_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7(lean_object* v_00_u03b1_2036_, lean_object* v_ref_2037_, lean_object* v_msg_2038_, lean_object* v_declHint_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_){
_start:
{
lean_object* v___x_2043_; 
v___x_2043_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7___redArg(v_ref_2037_, v_msg_2038_, v_declHint_2039_, v___y_2040_, v___y_2041_);
return v___x_2043_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7___boxed(lean_object* v_00_u03b1_2044_, lean_object* v_ref_2045_, lean_object* v_msg_2046_, lean_object* v_declHint_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_){
_start:
{
lean_object* v_res_2051_; 
v_res_2051_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7(v_00_u03b1_2044_, v_ref_2045_, v_msg_2046_, v_declHint_2047_, v___y_2048_, v___y_2049_);
lean_dec(v___y_2049_);
lean_dec_ref(v___y_2048_);
lean_dec(v_ref_2045_);
return v_res_2051_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9(lean_object* v_msg_2052_, lean_object* v_declHint_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_){
_start:
{
lean_object* v___x_2057_; 
v___x_2057_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg(v_msg_2052_, v_declHint_2053_, v___y_2055_);
return v___x_2057_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___boxed(lean_object* v_msg_2058_, lean_object* v_declHint_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_){
_start:
{
lean_object* v_res_2063_; 
v_res_2063_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9(v_msg_2058_, v_declHint_2059_, v___y_2060_, v___y_2061_);
lean_dec(v___y_2061_);
lean_dec_ref(v___y_2060_);
return v_res_2063_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__9(lean_object* v_00_u03b1_2064_, lean_object* v_ref_2065_, lean_object* v_msg_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_){
_start:
{
lean_object* v___x_2070_; 
v___x_2070_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__9___redArg(v_ref_2065_, v_msg_2066_, v___y_2067_, v___y_2068_);
return v___x_2070_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__9___boxed(lean_object* v_00_u03b1_2071_, lean_object* v_ref_2072_, lean_object* v_msg_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_){
_start:
{
lean_object* v_res_2077_; 
v_res_2077_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__9(v_00_u03b1_2071_, v_ref_2072_, v_msg_2073_, v___y_2074_, v___y_2075_);
lean_dec(v___y_2075_);
lean_dec_ref(v___y_2074_);
lean_dec(v_ref_2072_);
return v_res_2077_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_addAttr(uint8_t v_status_2078_, lean_object* v_declName_2079_, lean_object* v_stx_2080_, uint8_t v_attrKind_2081_, lean_object* v_a_2082_, lean_object* v_a_2083_){
_start:
{
lean_object* v___x_2085_; 
v___x_2085_ = l_Lean_Attribute_Builtin_ensureNoArgs(v_stx_2080_, v_a_2082_, v_a_2083_);
if (lean_obj_tag(v___x_2085_) == 0)
{
lean_object* v___x_2086_; 
lean_dec_ref_known(v___x_2085_, 1);
lean_inc(v_declName_2079_);
v___x_2086_ = l___private_Lean_ReducibilityAttrs_0__Lean_validate(v_declName_2079_, v_status_2078_, v_attrKind_2081_, v_a_2082_, v_a_2083_);
if (lean_obj_tag(v___x_2086_) == 0)
{
lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2117_; 
v_isSharedCheck_2117_ = !lean_is_exclusive(v___x_2086_);
if (v_isSharedCheck_2117_ == 0)
{
lean_object* v_unused_2118_; 
v_unused_2118_ = lean_ctor_get(v___x_2086_, 0);
lean_dec(v_unused_2118_);
v___x_2088_ = v___x_2086_;
v_isShared_2089_ = v_isSharedCheck_2117_;
goto v_resetjp_2087_;
}
else
{
lean_dec(v___x_2086_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2117_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v_toCold_2090_; lean_object* v_currNamespace_2091_; lean_object* v___x_2092_; lean_object* v_env_2093_; lean_object* v_nextMacroScope_2094_; lean_object* v_ngen_2095_; lean_object* v_auxDeclNGen_2096_; lean_object* v_traceState_2097_; lean_object* v_recordedDeps_2098_; lean_object* v_messages_2099_; lean_object* v_infoState_2100_; lean_object* v_snapshotTasks_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2115_; 
v_toCold_2090_ = lean_ctor_get(v_a_2082_, 0);
v_currNamespace_2091_ = lean_ctor_get(v_toCold_2090_, 4);
v___x_2092_ = lean_st_ref_take(v_a_2083_);
v_env_2093_ = lean_ctor_get(v___x_2092_, 0);
v_nextMacroScope_2094_ = lean_ctor_get(v___x_2092_, 1);
v_ngen_2095_ = lean_ctor_get(v___x_2092_, 2);
v_auxDeclNGen_2096_ = lean_ctor_get(v___x_2092_, 3);
v_traceState_2097_ = lean_ctor_get(v___x_2092_, 4);
v_recordedDeps_2098_ = lean_ctor_get(v___x_2092_, 6);
v_messages_2099_ = lean_ctor_get(v___x_2092_, 7);
v_infoState_2100_ = lean_ctor_get(v___x_2092_, 8);
v_snapshotTasks_2101_ = lean_ctor_get(v___x_2092_, 9);
v_isSharedCheck_2115_ = !lean_is_exclusive(v___x_2092_);
if (v_isSharedCheck_2115_ == 0)
{
lean_object* v_unused_2116_; 
v_unused_2116_ = lean_ctor_get(v___x_2092_, 5);
lean_dec(v_unused_2116_);
v___x_2103_ = v___x_2092_;
v_isShared_2104_ = v_isSharedCheck_2115_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_snapshotTasks_2101_);
lean_inc(v_infoState_2100_);
lean_inc(v_messages_2099_);
lean_inc(v_recordedDeps_2098_);
lean_inc(v_traceState_2097_);
lean_inc(v_auxDeclNGen_2096_);
lean_inc(v_ngen_2095_);
lean_inc(v_nextMacroScope_2094_);
lean_inc(v_env_2093_);
lean_dec(v___x_2092_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2115_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2109_; 
v___x_2105_ = lean_box(0);
lean_inc(v_currNamespace_2091_);
v___x_2106_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_2093_, v_declName_2079_, v_status_2078_, v_attrKind_2081_, v_currNamespace_2091_);
v___x_2107_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__1, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__1);
if (v_isShared_2104_ == 0)
{
lean_ctor_set(v___x_2103_, 5, v___x_2107_);
lean_ctor_set(v___x_2103_, 0, v___x_2106_);
v___x_2109_ = v___x_2103_;
goto v_reusejp_2108_;
}
else
{
lean_object* v_reuseFailAlloc_2114_; 
v_reuseFailAlloc_2114_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2114_, 0, v___x_2106_);
lean_ctor_set(v_reuseFailAlloc_2114_, 1, v_nextMacroScope_2094_);
lean_ctor_set(v_reuseFailAlloc_2114_, 2, v_ngen_2095_);
lean_ctor_set(v_reuseFailAlloc_2114_, 3, v_auxDeclNGen_2096_);
lean_ctor_set(v_reuseFailAlloc_2114_, 4, v_traceState_2097_);
lean_ctor_set(v_reuseFailAlloc_2114_, 5, v___x_2107_);
lean_ctor_set(v_reuseFailAlloc_2114_, 6, v_recordedDeps_2098_);
lean_ctor_set(v_reuseFailAlloc_2114_, 7, v_messages_2099_);
lean_ctor_set(v_reuseFailAlloc_2114_, 8, v_infoState_2100_);
lean_ctor_set(v_reuseFailAlloc_2114_, 9, v_snapshotTasks_2101_);
v___x_2109_ = v_reuseFailAlloc_2114_;
goto v_reusejp_2108_;
}
v_reusejp_2108_:
{
lean_object* v___x_2110_; lean_object* v___x_2112_; 
v___x_2110_ = lean_st_ref_put(v_a_2083_, v___x_2109_);
if (v_isShared_2089_ == 0)
{
lean_ctor_set(v___x_2088_, 0, v___x_2105_);
v___x_2112_ = v___x_2088_;
goto v_reusejp_2111_;
}
else
{
lean_object* v_reuseFailAlloc_2113_; 
v_reuseFailAlloc_2113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2113_, 0, v___x_2105_);
v___x_2112_ = v_reuseFailAlloc_2113_;
goto v_reusejp_2111_;
}
v_reusejp_2111_:
{
return v___x_2112_;
}
}
}
}
}
else
{
lean_dec(v_declName_2079_);
return v___x_2086_;
}
}
else
{
lean_dec(v_declName_2079_);
return v___x_2085_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_addAttr___boxed(lean_object* v_status_2119_, lean_object* v_declName_2120_, lean_object* v_stx_2121_, lean_object* v_attrKind_2122_, lean_object* v_a_2123_, lean_object* v_a_2124_, lean_object* v_a_2125_){
_start:
{
uint8_t v_status_boxed_2126_; uint8_t v_attrKind_boxed_2127_; lean_object* v_res_2128_; 
v_status_boxed_2126_ = lean_unbox(v_status_2119_);
v_attrKind_boxed_2127_ = lean_unbox(v_attrKind_2122_);
v_res_2128_ = l___private_Lean_ReducibilityAttrs_0__Lean_addAttr(v_status_boxed_2126_, v_declName_2120_, v_stx_2121_, v_attrKind_boxed_2127_, v_a_2123_, v_a_2124_);
lean_dec(v_a_2124_);
lean_dec_ref(v_a_2123_);
return v_res_2128_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2130_; lean_object* v___x_2131_; 
v___x_2130_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_));
v___x_2131_ = l_Lean_stringToMessageData(v___x_2130_);
return v___x_2131_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__3_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2133_; lean_object* v___x_2134_; 
v___x_2133_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_));
v___x_2134_ = l_Lean_stringToMessageData(v___x_2133_);
return v___x_2134_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_(lean_object* v___x_2135_, lean_object* v_decl_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_){
_start:
{
lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; 
v___x_2140_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_);
v___x_2141_ = l_Lean_MessageData_ofName(v___x_2135_);
v___x_2142_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2142_, 0, v___x_2140_);
lean_ctor_set(v___x_2142_, 1, v___x_2141_);
v___x_2143_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__3_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__3_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__3_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_);
v___x_2144_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2144_, 0, v___x_2142_);
lean_ctor_set(v___x_2144_, 1, v___x_2143_);
v___x_2145_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v___x_2144_, v___y_2137_, v___y_2138_);
return v___x_2145_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2____boxed(lean_object* v___x_2146_, lean_object* v_decl_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_){
_start:
{
lean_object* v_res_2151_; 
v_res_2151_ = l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_(v___x_2146_, v_decl_2147_, v___y_2148_, v___y_2149_);
lean_dec(v___y_2149_);
lean_dec_ref(v___y_2148_);
lean_dec(v_decl_2147_);
return v_res_2151_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2216_; lean_object* v___x_2217_; 
v___x_2216_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__25_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_));
v___x_2217_ = l_Lean_registerBuiltinAttribute(v___x_2216_);
return v___x_2217_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2____boxed(lean_object* v_a_2218_){
_start:
{
lean_object* v_res_2219_; 
v_res_2219_ = l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_();
return v_res_2219_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; 
v___x_2220_ = lean_unsigned_to_nat(4118757939u);
v___x_2221_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__12_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_));
v___x_2222_ = l_Lean_Name_num___override(v___x_2221_, v___x_2220_);
return v___x_2222_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; 
v___x_2223_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__14_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_));
v___x_2224_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_);
v___x_2225_ = l_Lean_Name_str___override(v___x_2224_, v___x_2223_);
return v___x_2225_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; 
v___x_2226_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__16_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_));
v___x_2227_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_);
v___x_2228_ = l_Lean_Name_str___override(v___x_2227_, v___x_2226_);
return v___x_2228_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; 
v___x_2229_ = lean_unsigned_to_nat(2u);
v___x_2230_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_);
v___x_2231_ = l_Lean_Name_num___override(v___x_2230_, v___x_2229_);
return v___x_2231_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; 
v___x_2238_ = 0;
v___x_2239_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_));
v___x_2240_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_));
v___x_2241_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_);
v___x_2242_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2242_, 0, v___x_2241_);
lean_ctor_set(v___x_2242_, 1, v___x_2240_);
lean_ctor_set(v___x_2242_, 2, v___x_2239_);
lean_ctor_set_uint8(v___x_2242_, sizeof(void*)*3, v___x_2238_);
return v___x_2242_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; 
v___f_2246_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_));
v___x_2247_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_));
v___x_2248_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_);
v___x_2249_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2249_, 0, v___x_2248_);
lean_ctor_set(v___x_2249_, 1, v___x_2247_);
lean_ctor_set(v___x_2249_, 2, v___f_2246_);
return v___x_2249_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2251_; lean_object* v___x_2252_; 
v___x_2251_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_);
v___x_2252_ = l_Lean_registerBuiltinAttribute(v___x_2251_);
return v___x_2252_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2____boxed(lean_object* v_a_2253_){
_start:
{
lean_object* v_res_2254_; 
v_res_2254_ = l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_();
return v_res_2254_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; 
v___x_2255_ = lean_unsigned_to_nat(2994861043u);
v___x_2256_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__12_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_));
v___x_2257_ = l_Lean_Name_num___override(v___x_2256_, v___x_2255_);
return v___x_2257_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; 
v___x_2258_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__14_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_));
v___x_2259_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_);
v___x_2260_ = l_Lean_Name_str___override(v___x_2259_, v___x_2258_);
return v___x_2260_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; 
v___x_2261_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__16_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_));
v___x_2262_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_);
v___x_2263_ = l_Lean_Name_str___override(v___x_2262_, v___x_2261_);
return v___x_2263_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; 
v___x_2264_ = lean_unsigned_to_nat(2u);
v___x_2265_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_);
v___x_2266_ = l_Lean_Name_num___override(v___x_2265_, v___x_2264_);
return v___x_2266_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; 
v___x_2273_ = 0;
v___x_2274_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_));
v___x_2275_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_));
v___x_2276_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_);
v___x_2277_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2277_, 0, v___x_2276_);
lean_ctor_set(v___x_2277_, 1, v___x_2275_);
lean_ctor_set(v___x_2277_, 2, v___x_2274_);
lean_ctor_set_uint8(v___x_2277_, sizeof(void*)*3, v___x_2273_);
return v___x_2277_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; 
v___f_2281_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_));
v___x_2282_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_));
v___x_2283_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_);
v___x_2284_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2284_, 0, v___x_2283_);
lean_ctor_set(v___x_2284_, 1, v___x_2282_);
lean_ctor_set(v___x_2284_, 2, v___f_2281_);
return v___x_2284_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2286_; lean_object* v___x_2287_; 
v___x_2286_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_);
v___x_2287_ = l_Lean_registerBuiltinAttribute(v___x_2286_);
return v___x_2287_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2____boxed(lean_object* v_a_2288_){
_start:
{
lean_object* v_res_2289_; 
v_res_2289_ = l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_();
return v_res_2289_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2321_; lean_object* v___x_2322_; 
v___x_2321_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2_));
v___x_2322_ = l_Lean_registerBuiltinAttribute(v___x_2321_);
return v___x_2322_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2____boxed(lean_object* v_a_2323_){
_start:
{
lean_object* v_res_2324_; 
v_res_2324_ = l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2_();
return v_res_2324_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2356_; lean_object* v___x_2357_; 
v___x_2356_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2_));
v___x_2357_ = l_Lean_registerBuiltinAttribute(v___x_2356_);
return v___x_2357_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2____boxed(lean_object* v_a_2358_){
_start:
{
lean_object* v_res_2359_; 
v_res_2359_ = l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2_();
return v_res_2359_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___redArg___lam__0(lean_object* v_declName_2360_, lean_object* v_toPure_2361_, lean_object* v_____do__lift_2362_){
_start:
{
uint8_t v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; 
v___x_2363_ = l_Lean_getReducibilityStatusCore(v_____do__lift_2362_, v_declName_2360_);
v___x_2364_ = lean_box(v___x_2363_);
v___x_2365_ = lean_apply_2(v_toPure_2361_, lean_box(0), v___x_2364_);
return v___x_2365_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___redArg(lean_object* v_inst_2366_, lean_object* v_inst_2367_, lean_object* v_declName_2368_){
_start:
{
lean_object* v_toApplicative_2369_; lean_object* v_toBind_2370_; lean_object* v_getEnv_2371_; lean_object* v_toPure_2372_; lean_object* v___f_2373_; lean_object* v___x_2374_; 
v_toApplicative_2369_ = lean_ctor_get(v_inst_2366_, 0);
lean_inc_ref(v_toApplicative_2369_);
v_toBind_2370_ = lean_ctor_get(v_inst_2366_, 1);
lean_inc(v_toBind_2370_);
lean_dec_ref(v_inst_2366_);
v_getEnv_2371_ = lean_ctor_get(v_inst_2367_, 0);
lean_inc(v_getEnv_2371_);
lean_dec_ref(v_inst_2367_);
v_toPure_2372_ = lean_ctor_get(v_toApplicative_2369_, 1);
lean_inc(v_toPure_2372_);
lean_dec_ref(v_toApplicative_2369_);
v___f_2373_ = lean_alloc_closure((void*)(l_Lean_getReducibilityStatus___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2373_, 0, v_declName_2368_);
lean_closure_set(v___f_2373_, 1, v_toPure_2372_);
v___x_2374_ = lean_apply_4(v_toBind_2370_, lean_box(0), lean_box(0), v_getEnv_2371_, v___f_2373_);
return v___x_2374_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus(lean_object* v_m_2375_, lean_object* v_inst_2376_, lean_object* v_inst_2377_, lean_object* v_declName_2378_){
_start:
{
lean_object* v___x_2379_; 
v___x_2379_ = l_Lean_getReducibilityStatus___redArg(v_inst_2376_, v_inst_2377_, v_declName_2378_);
return v___x_2379_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___redArg___lam__0(lean_object* v_declName_2380_, uint8_t v_s_2381_, lean_object* v_env_2382_){
_start:
{
uint8_t v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; 
v___x_2383_ = 0;
v___x_2384_ = lean_box(0);
v___x_2385_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_2382_, v_declName_2380_, v_s_2381_, v___x_2383_, v___x_2384_);
return v___x_2385_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___redArg___lam__0___boxed(lean_object* v_declName_2386_, lean_object* v_s_2387_, lean_object* v_env_2388_){
_start:
{
uint8_t v_s_boxed_2389_; lean_object* v_res_2390_; 
v_s_boxed_2389_ = lean_unbox(v_s_2387_);
v_res_2390_ = l_Lean_setReducibilityStatus___redArg___lam__0(v_declName_2386_, v_s_boxed_2389_, v_env_2388_);
return v_res_2390_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___redArg(lean_object* v_inst_2391_, lean_object* v_declName_2392_, uint8_t v_s_2393_){
_start:
{
lean_object* v_modifyEnv_2394_; lean_object* v___x_2395_; lean_object* v___f_2396_; lean_object* v___x_2397_; 
v_modifyEnv_2394_ = lean_ctor_get(v_inst_2391_, 1);
lean_inc(v_modifyEnv_2394_);
lean_dec_ref(v_inst_2391_);
v___x_2395_ = lean_box(v_s_2393_);
v___f_2396_ = lean_alloc_closure((void*)(l_Lean_setReducibilityStatus___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2396_, 0, v_declName_2392_);
lean_closure_set(v___f_2396_, 1, v___x_2395_);
v___x_2397_ = lean_apply_1(v_modifyEnv_2394_, v___f_2396_);
return v___x_2397_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___redArg___boxed(lean_object* v_inst_2398_, lean_object* v_declName_2399_, lean_object* v_s_2400_){
_start:
{
uint8_t v_s_boxed_2401_; lean_object* v_res_2402_; 
v_s_boxed_2401_ = lean_unbox(v_s_2400_);
v_res_2402_ = l_Lean_setReducibilityStatus___redArg(v_inst_2398_, v_declName_2399_, v_s_boxed_2401_);
return v_res_2402_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus(lean_object* v_m_2403_, lean_object* v_inst_2404_, lean_object* v_declName_2405_, uint8_t v_s_2406_){
_start:
{
lean_object* v___x_2407_; 
v___x_2407_ = l_Lean_setReducibilityStatus___redArg(v_inst_2404_, v_declName_2405_, v_s_2406_);
return v___x_2407_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___boxed(lean_object* v_m_2408_, lean_object* v_inst_2409_, lean_object* v_declName_2410_, lean_object* v_s_2411_){
_start:
{
uint8_t v_s_boxed_2412_; lean_object* v_res_2413_; 
v_s_boxed_2412_ = lean_unbox(v_s_2411_);
v_res_2413_ = l_Lean_setReducibilityStatus(v_m_2408_, v_inst_2409_, v_declName_2410_, v_s_boxed_2412_);
return v_res_2413_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___redArg(lean_object* v_inst_2414_, lean_object* v_declName_2415_){
_start:
{
uint8_t v___x_2416_; lean_object* v___x_2417_; 
v___x_2416_ = 0;
v___x_2417_ = l_Lean_setReducibilityStatus___redArg(v_inst_2414_, v_declName_2415_, v___x_2416_);
return v___x_2417_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute(lean_object* v_m_2418_, lean_object* v_inst_2419_, lean_object* v_declName_2420_){
_start:
{
lean_object* v___x_2421_; 
v___x_2421_ = l_Lean_setReducibleAttribute___redArg(v_inst_2419_, v_declName_2420_);
return v___x_2421_;
}
}
LEAN_EXPORT lean_object* l_Lean_isReducible___redArg___lam__0(lean_object* v_toPure_2422_, uint8_t v_____do__lift_2423_){
_start:
{
if (v_____do__lift_2423_ == 0)
{
uint8_t v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; 
v___x_2424_ = 1;
v___x_2425_ = lean_box(v___x_2424_);
v___x_2426_ = lean_apply_2(v_toPure_2422_, lean_box(0), v___x_2425_);
return v___x_2426_;
}
else
{
uint8_t v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; 
v___x_2427_ = 0;
v___x_2428_ = lean_box(v___x_2427_);
v___x_2429_ = lean_apply_2(v_toPure_2422_, lean_box(0), v___x_2428_);
return v___x_2429_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isReducible___redArg___lam__0___boxed(lean_object* v_toPure_2430_, lean_object* v_____do__lift_2431_){
_start:
{
uint8_t v_____do__lift_48__boxed_2432_; lean_object* v_res_2433_; 
v_____do__lift_48__boxed_2432_ = lean_unbox(v_____do__lift_2431_);
v_res_2433_ = l_Lean_isReducible___redArg___lam__0(v_toPure_2430_, v_____do__lift_48__boxed_2432_);
return v_res_2433_;
}
}
LEAN_EXPORT lean_object* l_Lean_isReducible___redArg(lean_object* v_inst_2434_, lean_object* v_inst_2435_, lean_object* v_declName_2436_){
_start:
{
lean_object* v_toApplicative_2437_; lean_object* v_toBind_2438_; lean_object* v_toPure_2439_; lean_object* v___x_2440_; lean_object* v___f_2441_; lean_object* v___x_2442_; 
v_toApplicative_2437_ = lean_ctor_get(v_inst_2434_, 0);
v_toBind_2438_ = lean_ctor_get(v_inst_2434_, 1);
lean_inc(v_toBind_2438_);
v_toPure_2439_ = lean_ctor_get(v_toApplicative_2437_, 1);
lean_inc(v_toPure_2439_);
v___x_2440_ = l_Lean_getReducibilityStatus___redArg(v_inst_2434_, v_inst_2435_, v_declName_2436_);
v___f_2441_ = lean_alloc_closure((void*)(l_Lean_isReducible___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2441_, 0, v_toPure_2439_);
v___x_2442_ = lean_apply_4(v_toBind_2438_, lean_box(0), lean_box(0), v___x_2440_, v___f_2441_);
return v___x_2442_;
}
}
LEAN_EXPORT lean_object* l_Lean_isReducible(lean_object* v_m_2443_, lean_object* v_inst_2444_, lean_object* v_inst_2445_, lean_object* v_declName_2446_){
_start:
{
lean_object* v___x_2447_; 
v___x_2447_ = l_Lean_isReducible___redArg(v_inst_2444_, v_inst_2445_, v_declName_2446_);
return v___x_2447_;
}
}
LEAN_EXPORT lean_object* l_Lean_isIrreducible___redArg___lam__0(lean_object* v_toPure_2448_, uint8_t v_____do__lift_2449_){
_start:
{
if (v_____do__lift_2449_ == 2)
{
uint8_t v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; 
v___x_2450_ = 1;
v___x_2451_ = lean_box(v___x_2450_);
v___x_2452_ = lean_apply_2(v_toPure_2448_, lean_box(0), v___x_2451_);
return v___x_2452_;
}
else
{
uint8_t v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; 
v___x_2453_ = 0;
v___x_2454_ = lean_box(v___x_2453_);
v___x_2455_ = lean_apply_2(v_toPure_2448_, lean_box(0), v___x_2454_);
return v___x_2455_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isIrreducible___redArg___lam__0___boxed(lean_object* v_toPure_2456_, lean_object* v_____do__lift_2457_){
_start:
{
uint8_t v_____do__lift_48__boxed_2458_; lean_object* v_res_2459_; 
v_____do__lift_48__boxed_2458_ = lean_unbox(v_____do__lift_2457_);
v_res_2459_ = l_Lean_isIrreducible___redArg___lam__0(v_toPure_2456_, v_____do__lift_48__boxed_2458_);
return v_res_2459_;
}
}
LEAN_EXPORT lean_object* l_Lean_isIrreducible___redArg(lean_object* v_inst_2460_, lean_object* v_inst_2461_, lean_object* v_declName_2462_){
_start:
{
lean_object* v_toApplicative_2463_; lean_object* v_toBind_2464_; lean_object* v_toPure_2465_; lean_object* v___x_2466_; lean_object* v___f_2467_; lean_object* v___x_2468_; 
v_toApplicative_2463_ = lean_ctor_get(v_inst_2460_, 0);
v_toBind_2464_ = lean_ctor_get(v_inst_2460_, 1);
lean_inc(v_toBind_2464_);
v_toPure_2465_ = lean_ctor_get(v_toApplicative_2463_, 1);
lean_inc(v_toPure_2465_);
v___x_2466_ = l_Lean_getReducibilityStatus___redArg(v_inst_2460_, v_inst_2461_, v_declName_2462_);
v___f_2467_ = lean_alloc_closure((void*)(l_Lean_isIrreducible___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2467_, 0, v_toPure_2465_);
v___x_2468_ = lean_apply_4(v_toBind_2464_, lean_box(0), lean_box(0), v___x_2466_, v___f_2467_);
return v___x_2468_;
}
}
LEAN_EXPORT lean_object* l_Lean_isIrreducible(lean_object* v_m_2469_, lean_object* v_inst_2470_, lean_object* v_inst_2471_, lean_object* v_declName_2472_){
_start:
{
lean_object* v___x_2473_; 
v___x_2473_ = l_Lean_isIrreducible___redArg(v_inst_2470_, v_inst_2471_, v_declName_2472_);
return v___x_2473_;
}
}
LEAN_EXPORT uint8_t l_Lean_isImplicitReducibleCore(lean_object* v_env_2474_, lean_object* v_declName_2475_){
_start:
{
uint8_t v___x_2476_; 
v___x_2476_ = l_Lean_getReducibilityStatusCore(v_env_2474_, v_declName_2475_);
if (v___x_2476_ == 3)
{
uint8_t v___x_2477_; 
v___x_2477_ = 1;
return v___x_2477_;
}
else
{
uint8_t v___x_2478_; 
v___x_2478_ = 0;
return v___x_2478_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isImplicitReducibleCore___boxed(lean_object* v_env_2479_, lean_object* v_declName_2480_){
_start:
{
uint8_t v_res_2481_; lean_object* v_r_2482_; 
v_res_2481_ = l_Lean_isImplicitReducibleCore(v_env_2479_, v_declName_2480_);
v_r_2482_ = lean_box(v_res_2481_);
return v_r_2482_;
}
}
LEAN_EXPORT lean_object* l_Lean_isImplicitReducible___redArg___lam__0(lean_object* v_declName_2483_, lean_object* v_toPure_2484_, lean_object* v_____do__lift_2485_){
_start:
{
uint8_t v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; 
v___x_2486_ = l_Lean_isImplicitReducibleCore(v_____do__lift_2485_, v_declName_2483_);
v___x_2487_ = lean_box(v___x_2486_);
v___x_2488_ = lean_apply_2(v_toPure_2484_, lean_box(0), v___x_2487_);
return v___x_2488_;
}
}
LEAN_EXPORT lean_object* l_Lean_isImplicitReducible___redArg(lean_object* v_inst_2489_, lean_object* v_inst_2490_, lean_object* v_declName_2491_){
_start:
{
lean_object* v_toApplicative_2492_; lean_object* v_toBind_2493_; lean_object* v_getEnv_2494_; lean_object* v_toPure_2495_; lean_object* v___f_2496_; lean_object* v___x_2497_; 
v_toApplicative_2492_ = lean_ctor_get(v_inst_2489_, 0);
lean_inc_ref(v_toApplicative_2492_);
v_toBind_2493_ = lean_ctor_get(v_inst_2489_, 1);
lean_inc(v_toBind_2493_);
lean_dec_ref(v_inst_2489_);
v_getEnv_2494_ = lean_ctor_get(v_inst_2490_, 0);
lean_inc(v_getEnv_2494_);
lean_dec_ref(v_inst_2490_);
v_toPure_2495_ = lean_ctor_get(v_toApplicative_2492_, 1);
lean_inc(v_toPure_2495_);
lean_dec_ref(v_toApplicative_2492_);
v___f_2496_ = lean_alloc_closure((void*)(l_Lean_isImplicitReducible___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2496_, 0, v_declName_2491_);
lean_closure_set(v___f_2496_, 1, v_toPure_2495_);
v___x_2497_ = lean_apply_4(v_toBind_2493_, lean_box(0), lean_box(0), v_getEnv_2494_, v___f_2496_);
return v___x_2497_;
}
}
LEAN_EXPORT lean_object* l_Lean_isImplicitReducible(lean_object* v_m_2498_, lean_object* v_inst_2499_, lean_object* v_inst_2500_, lean_object* v_declName_2501_){
_start:
{
lean_object* v___x_2502_; 
v___x_2502_ = l_Lean_isImplicitReducible___redArg(v_inst_2499_, v_inst_2500_, v_declName_2501_);
return v___x_2502_;
}
}
LEAN_EXPORT uint8_t l_Lean_isInstanceReducibleCore(lean_object* v_env_2503_, lean_object* v_declName_2504_){
_start:
{
uint8_t v___x_2505_; 
v___x_2505_ = l_Lean_getReducibilityStatusCore(v_env_2503_, v_declName_2504_);
if (v___x_2505_ == 4)
{
uint8_t v___x_2506_; 
v___x_2506_ = 1;
return v___x_2506_;
}
else
{
uint8_t v___x_2507_; 
v___x_2507_ = 0;
return v___x_2507_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isInstanceReducibleCore___boxed(lean_object* v_env_2508_, lean_object* v_declName_2509_){
_start:
{
uint8_t v_res_2510_; lean_object* v_r_2511_; 
v_res_2510_ = l_Lean_isInstanceReducibleCore(v_env_2508_, v_declName_2509_);
v_r_2511_ = lean_box(v_res_2510_);
return v_r_2511_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___redArg___lam__0(lean_object* v_declName_2512_, lean_object* v_toPure_2513_, lean_object* v_____do__lift_2514_){
_start:
{
uint8_t v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; 
v___x_2515_ = l_Lean_isInstanceReducibleCore(v_____do__lift_2514_, v_declName_2512_);
v___x_2516_ = lean_box(v___x_2515_);
v___x_2517_ = lean_apply_2(v_toPure_2513_, lean_box(0), v___x_2516_);
return v___x_2517_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___redArg(lean_object* v_inst_2518_, lean_object* v_inst_2519_, lean_object* v_declName_2520_){
_start:
{
lean_object* v_toApplicative_2521_; lean_object* v_toBind_2522_; lean_object* v_getEnv_2523_; lean_object* v_toPure_2524_; lean_object* v___f_2525_; lean_object* v___x_2526_; 
v_toApplicative_2521_ = lean_ctor_get(v_inst_2518_, 0);
lean_inc_ref(v_toApplicative_2521_);
v_toBind_2522_ = lean_ctor_get(v_inst_2518_, 1);
lean_inc(v_toBind_2522_);
lean_dec_ref(v_inst_2518_);
v_getEnv_2523_ = lean_ctor_get(v_inst_2519_, 0);
lean_inc(v_getEnv_2523_);
lean_dec_ref(v_inst_2519_);
v_toPure_2524_ = lean_ctor_get(v_toApplicative_2521_, 1);
lean_inc(v_toPure_2524_);
lean_dec_ref(v_toApplicative_2521_);
v___f_2525_ = lean_alloc_closure((void*)(l_Lean_isInstanceReducible___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2525_, 0, v_declName_2520_);
lean_closure_set(v___f_2525_, 1, v_toPure_2524_);
v___x_2526_ = lean_apply_4(v_toBind_2522_, lean_box(0), lean_box(0), v_getEnv_2523_, v___f_2525_);
return v___x_2526_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible(lean_object* v_m_2527_, lean_object* v_inst_2528_, lean_object* v_inst_2529_, lean_object* v_declName_2530_){
_start:
{
lean_object* v___x_2531_; 
v___x_2531_ = l_Lean_isInstanceReducible___redArg(v_inst_2528_, v_inst_2529_, v_declName_2530_);
return v___x_2531_;
}
}
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___redArg(lean_object* v_inst_2532_, lean_object* v_declName_2533_){
_start:
{
uint8_t v___x_2534_; lean_object* v___x_2535_; 
v___x_2534_ = 2;
v___x_2535_ = l_Lean_setReducibilityStatus___redArg(v_inst_2532_, v_declName_2533_, v___x_2534_);
return v___x_2535_;
}
}
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute(lean_object* v_m_2536_, lean_object* v_inst_2537_, lean_object* v_declName_2538_){
_start:
{
lean_object* v___x_2539_; 
v___x_2539_ = l_Lean_setIrreducibleAttribute___redArg(v_inst_2537_, v_declName_2538_);
return v___x_2539_;
}
}
lean_object* runtime_initialize_Lean_ScopedEnvExtension(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_ReducibilityAttrs(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_ScopedEnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedReducibilityStatus_default = _init_l_Lean_instInhabitedReducibilityStatus_default();
l_Lean_instInhabitedReducibilityStatus = _init_l_Lean_instInhabitedReducibilityStatus();
res = l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_599401733____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_reducibilityCoreExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_reducibilityCoreExt);
lean_dec_ref(res);
res = l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3383261721____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_reducibilityExtraExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_reducibilityExtraExt);
lean_dec_ref(res);
res = l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_allowUnsafeReducibility = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_allowUnsafeReducibility);
lean_dec_ref(res);
res = l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_82891871____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_2104212786____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_ReducibilityAttrs(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_ScopedEnvExtension(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_ReducibilityAttrs(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_ScopedEnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ReducibilityAttrs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_ReducibilityAttrs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_ReducibilityAttrs(builtin);
}
#ifdef __cplusplus
}
#endif
