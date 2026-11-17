// Lean compiler output
// Module: Lean.Compiler.LCNF.ToImpureType
// Imports: public import Lean.Compiler.LCNF.Irrelevant import Lean.Compiler.LCNF.MonoTypes import Lean.Runtime import Init.Data.Format.Macro
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
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_mkMapDeclarationExtension___redArg(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeFormerType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Irrelevant_setHasTrivialStructure_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_instInhabitedCtorInfo_default;
extern lean_object* l_Lean_maxCtorNumObjs;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instInhabitedCoreM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_toLCNFType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_toMonoType(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isErased(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Compiler_LCNF_setOtherDeclMonoType(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Compiler_LCNF_Irrelevant_hasTrivialStructure_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getOtherDeclBaseType(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getParamTypes(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_CtorInfo_checkValid(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_expr_dbg_to_string(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lean_Meta_isPropFormerType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tagged"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 57, 252, 162, 142, 133, 51, 193)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__1_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__2;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt32"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__3_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__3_value),LEAN_SCALAR_PTR_LITERAL(98, 192, 58, 241, 186, 14, 255, 186)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__4_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__5;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt16"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__6 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__6_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__6_value),LEAN_SCALAR_PTR_LITERAL(6, 214, 154, 233, 192, 74, 99, 135)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__7 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__7_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__8;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "UInt8"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__9 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__9_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__9_value),LEAN_SCALAR_PTR_LITERAL(144, 254, 64, 72, 7, 99, 197, 218)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__10 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__10_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__11;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "ToImpureType"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(195, 154, 3, 9, 42, 52, 199, 231)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(14, 103, 172, 122, 112, 104, 83, 202)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(183, 21, 192, 83, 126, 85, 186, 68)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(169, 76, 182, 201, 28, 76, 239, 149)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(172, 159, 124, 100, 112, 3, 128, 86)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "impureTypeExt"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(123, 215, 204, 232, 104, 251, 181, 107)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeExt;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "impureTrivialStructureInfoExt"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(121, 218, 151, 106, 231, 134, 17, 84)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTrivialStructureInfoExt;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Subtype"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ST"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Internal"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Void"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "nonemptyType"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_setHasTrivialImpureStructure_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_setHasTrivialImpureStructure_x3f___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_setHasTrivialImpureStructure_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setHasTrivialImpureStructure_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setHasTrivialImpureStructure_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_hasTrivialImpureStructure_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_hasTrivialImpureStructure_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt64"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "USize"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Float"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Float32"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lcErased"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__4_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__5 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__5_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "lcVoid"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__6 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__6_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__6_value),LEAN_SCALAR_PTR_LITERAL(68, 180, 59, 167, 252, 217, 37, 174)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__7 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__7_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__8;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__9;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "tobj"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__10 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__10_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__10_value),LEAN_SCALAR_PTR_LITERAL(25, 168, 138, 20, 203, 141, 233, 12)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__11 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__11_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__13;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__4_value),LEAN_SCALAR_PTR_LITERAL(171, 218, 234, 194, 194, 57, 75, 5)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__14 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__14_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__15;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__16;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(246, 232, 182, 48, 64, 193, 160, 231)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__17 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__17_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__18;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__19;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(56, 69, 114, 85, 163, 177, 220, 67)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__20 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__20_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__21;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__22;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(109, 217, 26, 131, 232, 198, 207, 245)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__23 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__23_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__24;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__25;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(58, 113, 45, 150, 103, 228, 0, 41)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__26 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__26_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__27;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__28;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__29;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__30;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__31;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___boxed(lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instInhabitedCoreM___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__0___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2_spec__2___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2_spec__2___redArg___boxed(lean_object*);
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Compiler.LCNF.ToImpureType"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 79, .m_data = "_private.Lean.Compiler.LCNF.ToImpureType.0.Lean.Compiler.LCNF.computeImpureType"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__1_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__2_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__3;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 24, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 1, 1, 1, 2, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__4 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__4_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__5;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__6;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__7;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__8;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__9;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__10;
static const lean_array_object l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__11 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__11_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__12;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__13;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__14;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__15;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__16;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__17;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__18;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__19;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "obj"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(240, 235, 44, 74, 242, 121, 239, 90)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__1_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_setImpureType___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_setImpureType___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_setImpureType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_setImpureType___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setImpureType(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setImpureType___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_nameToImpureType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Compiler_LCNF_nameToImpureType___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_nameToImpureType___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_nameToImpureType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_nameToImpureType___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_nameToImpureType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "` was not compiled; `compileDecls` must run on inductive types first"};
static const lean_object* l_Lean_Compiler_LCNF_nameToImpureType___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_nameToImpureType___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_nameToImpureType___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_nameToImpureType___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_nameToImpureType(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_nameToImpureType___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_isAnyProducingType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "lcAny"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_isAnyProducingType___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_isAnyProducingType___closed__0_value;
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_isAnyProducingType(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_isAnyProducingType___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_toImpureType_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_toImpureType_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_toImpureType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_toImpureType___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_toImpureType___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_toImpureType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_toImpureType___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_toImpureType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Compiler.LCNF.toImpureType"};
static const lean_object* l_Lean_Compiler_LCNF_toImpureType___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_toImpureType___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_toImpureType___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_toImpureType___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_toImpureType___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_toImpureType___closed__4;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toImpureType(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_toImpureType_visitApp(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_toImpureType_visitApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toImpureType___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_erased_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_erased_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_object_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_object_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_usize_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_usize_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_scalar_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_scalar_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_void_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_void_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_spilled_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_spilled_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedCtorFieldInfo_default;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedCtorFieldInfo;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "◾"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__0_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "obj@"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__2_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__2_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__4_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__4_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__5 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__5_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "usize@"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__6 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__6_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__6_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__7 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__7_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "scalar#"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__8 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__8_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__8_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__9 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__9_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__10 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__10_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__10_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__11 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__11_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "void"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__12 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__12_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__12_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__13 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__13_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__14 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__14_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__14_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__15 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__15_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_spillDepth(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_spillDepth___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_instToFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_instToFormat___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_instToFormat___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_instToFormat = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_instToFormat___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_spillLinkIdx___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_spillLinkIdx___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_spillLinkIdx;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_numSpillObjs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_numSpillObjs___boxed(lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_spillCtorInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "spill"};
static const lean_object* l_Lean_Compiler_LCNF_spillCtorInfo___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_spillCtorInfo___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_spillCtorInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_spillCtorInfo___closed__0_value),LEAN_SCALAR_PTR_LITERAL(204, 44, 31, 101, 209, 151, 202, 87)}};
static const lean_object* l_Lean_Compiler_LCNF_spillCtorInfo___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_spillCtorInfo___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_spillCtorInfo(lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedCtorLayout;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "ctorLayoutExt"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(157, 123, 250, 80, 124, 9, 225, 155)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_ctorLayoutExt;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_checkCtorLayout(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_checkCtorLayout___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__2___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__6___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__6(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__4(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 86, .m_capacity = 86, .m_length = 85, .m_data = "_private.Lean.Compiler.LCNF.ToImpureType.0.Lean.Compiler.LCNF.setCtorLayout.fillCache"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1___closed__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___lam__1___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___closed__0;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setCtorLayout(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setCtorLayout___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getCtorLayout(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getCtorLayout___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__1___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lean.Compiler.LCNF.compileInductives"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__4___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__4___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_compileInductives_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_compileInductives_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_compileInductives___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_compileInductives___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_compileInductives___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_compileInductives(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_compileInductives___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_compileInductives_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_compileInductives_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_box(0);
v___x_5_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__1));
v___x_6_ = l_Lean_Expr_const___override(v___x_5_, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__5(void){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_10_ = lean_box(0);
v___x_11_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__4));
v___x_12_ = l_Lean_Expr_const___override(v___x_11_, v___x_10_);
return v___x_12_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__8(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_16_ = lean_box(0);
v___x_17_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__7));
v___x_18_ = l_Lean_Expr_const___override(v___x_17_, v___x_16_);
return v___x_18_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__11(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_22_ = lean_box(0);
v___x_23_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__10));
v___x_24_ = l_Lean_Expr_const___override(v___x_23_, v___x_22_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum(lean_object* v_numCtors_25_){
_start:
{
lean_object* v___x_28_; uint8_t v___x_29_; 
v___x_28_ = lean_unsigned_to_nat(1u);
v___x_29_ = lean_nat_dec_eq(v_numCtors_25_, v___x_28_);
if (v___x_29_ == 0)
{
lean_object* v___x_30_; uint8_t v___x_31_; 
v___x_30_ = lean_unsigned_to_nat(256u);
v___x_31_ = lean_nat_dec_lt(v_numCtors_25_, v___x_30_);
if (v___x_31_ == 0)
{
lean_object* v___x_32_; uint8_t v___x_33_; 
v___x_32_ = lean_unsigned_to_nat(65536u);
v___x_33_ = lean_nat_dec_lt(v_numCtors_25_, v___x_32_);
if (v___x_33_ == 0)
{
lean_object* v___x_34_; uint8_t v___x_35_; 
v___x_34_ = lean_cstr_to_nat("4294967296");
v___x_35_ = lean_nat_dec_lt(v_numCtors_25_, v___x_34_);
lean_dec(v___x_34_);
if (v___x_35_ == 0)
{
goto v___jp_26_;
}
else
{
lean_object* v___x_36_; 
v___x_36_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__5, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__5_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__5);
return v___x_36_;
}
}
else
{
lean_object* v___x_37_; 
v___x_37_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__8, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__8_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__8);
return v___x_37_;
}
}
else
{
lean_object* v___x_38_; 
v___x_38_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__11, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__11_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__11);
return v___x_38_;
}
}
else
{
goto v___jp_26_;
}
v___jp_26_:
{
lean_object* v___x_27_; 
v___x_27_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__2, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__2);
return v___x_27_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___boxed(lean_object* v_numCtors_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum(v_numCtors_39_);
lean_dec(v_numCtors_39_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__spec__0(lean_object* v_env_41_, lean_object* v_as_42_, size_t v_i_43_, size_t v_stop_44_, lean_object* v_b_45_){
_start:
{
lean_object* v___y_47_; uint8_t v___x_51_; 
v___x_51_ = lean_usize_dec_eq(v_i_43_, v_stop_44_);
if (v___x_51_ == 0)
{
lean_object* v___x_52_; lean_object* v_fst_53_; uint8_t v___x_54_; lean_object* v___x_55_; uint8_t v___x_56_; 
v___x_52_ = lean_array_uget_borrowed(v_as_42_, v_i_43_);
v_fst_53_ = lean_ctor_get(v___x_52_, 0);
v___x_54_ = 1;
lean_inc_ref(v_env_41_);
v___x_55_ = l_Lean_Environment_setExporting(v_env_41_, v___x_54_);
lean_inc(v_fst_53_);
v___x_56_ = l_Lean_Environment_contains(v___x_55_, v_fst_53_, v___x_51_);
if (v___x_56_ == 0)
{
v___y_47_ = v_b_45_;
goto v___jp_46_;
}
else
{
lean_object* v___x_57_; 
lean_inc(v___x_52_);
v___x_57_ = lean_array_push(v_b_45_, v___x_52_);
v___y_47_ = v___x_57_;
goto v___jp_46_;
}
}
else
{
lean_dec_ref(v_env_41_);
return v_b_45_;
}
v___jp_46_:
{
size_t v___x_48_; size_t v___x_49_; 
v___x_48_ = ((size_t)1ULL);
v___x_49_ = lean_usize_add(v_i_43_, v___x_48_);
v_i_43_ = v___x_49_;
v_b_45_ = v___y_47_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__spec__0___boxed(lean_object* v_env_58_, lean_object* v_as_59_, lean_object* v_i_60_, lean_object* v_stop_61_, lean_object* v_b_62_){
_start:
{
size_t v_i_boxed_63_; size_t v_stop_boxed_64_; lean_object* v_res_65_; 
v_i_boxed_63_ = lean_unbox_usize(v_i_60_);
lean_dec(v_i_60_);
v_stop_boxed_64_ = lean_unbox_usize(v_stop_61_);
lean_dec(v_stop_61_);
v_res_65_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__spec__0(v_env_58_, v_as_59_, v_i_boxed_63_, v_stop_boxed_64_, v_b_62_);
lean_dec_ref(v_as_59_);
return v_res_65_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__spec__1_spec__1(lean_object* v_init_66_, lean_object* v_x_67_){
_start:
{
if (lean_obj_tag(v_x_67_) == 0)
{
lean_object* v_k_68_; lean_object* v_v_69_; lean_object* v_l_70_; lean_object* v_r_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v_k_68_ = lean_ctor_get(v_x_67_, 1);
v_v_69_ = lean_ctor_get(v_x_67_, 2);
v_l_70_ = lean_ctor_get(v_x_67_, 3);
v_r_71_ = lean_ctor_get(v_x_67_, 4);
v___x_72_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__spec__1_spec__1(v_init_66_, v_l_70_);
lean_inc(v_v_69_);
lean_inc(v_k_68_);
v___x_73_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_73_, 0, v_k_68_);
lean_ctor_set(v___x_73_, 1, v_v_69_);
v___x_74_ = lean_array_push(v___x_72_, v___x_73_);
v_init_66_ = v___x_74_;
v_x_67_ = v_r_71_;
goto _start;
}
else
{
return v_init_66_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__spec__1_spec__1___boxed(lean_object* v_init_76_, lean_object* v_x_77_){
_start:
{
lean_object* v_res_78_; 
v_res_78_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__spec__1_spec__1(v_init_76_, v_x_77_);
lean_dec(v_x_77_);
return v_res_78_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__spec__2(lean_object* v_env_79_, lean_object* v_as_80_, size_t v_i_81_, size_t v_stop_82_, lean_object* v_b_83_){
_start:
{
lean_object* v___y_85_; uint8_t v___x_89_; 
v___x_89_ = lean_usize_dec_eq(v_i_81_, v_stop_82_);
if (v___x_89_ == 0)
{
lean_object* v___x_90_; lean_object* v_fst_91_; uint8_t v___x_92_; 
v___x_90_ = lean_array_uget_borrowed(v_as_80_, v_i_81_);
v_fst_91_ = lean_ctor_get(v___x_90_, 0);
lean_inc(v_fst_91_);
lean_inc_ref(v_env_79_);
v___x_92_ = l_Lean_Environment_contains(v_env_79_, v_fst_91_, v___x_89_);
if (v___x_92_ == 0)
{
v___y_85_ = v_b_83_;
goto v___jp_84_;
}
else
{
lean_object* v___x_93_; 
lean_inc(v___x_90_);
v___x_93_ = lean_array_push(v_b_83_, v___x_90_);
v___y_85_ = v___x_93_;
goto v___jp_84_;
}
}
else
{
lean_dec_ref(v_env_79_);
return v_b_83_;
}
v___jp_84_:
{
size_t v___x_86_; size_t v___x_87_; 
v___x_86_ = ((size_t)1ULL);
v___x_87_ = lean_usize_add(v_i_81_, v___x_86_);
v_i_81_ = v___x_87_;
v_b_83_ = v___y_85_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__spec__2___boxed(lean_object* v_env_94_, lean_object* v_as_95_, lean_object* v_i_96_, lean_object* v_stop_97_, lean_object* v_b_98_){
_start:
{
size_t v_i_boxed_99_; size_t v_stop_boxed_100_; lean_object* v_res_101_; 
v_i_boxed_99_ = lean_unbox_usize(v_i_96_);
lean_dec(v_i_96_);
v_stop_boxed_100_ = lean_unbox_usize(v_stop_97_);
lean_dec(v_stop_97_);
v_res_101_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__spec__2(v_env_94_, v_as_95_, v_i_boxed_99_, v_stop_boxed_100_, v_b_98_);
lean_dec_ref(v_as_95_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_(lean_object* v___x_102_, lean_object* v_env_103_, lean_object* v_s_104_){
_start:
{
lean_object* v___y_106_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; uint8_t v___x_119_; 
v___x_115_ = lean_mk_empty_array_with_capacity(v___x_102_);
v___x_116_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__spec__1_spec__1(v___x_115_, v_s_104_);
v___x_117_ = lean_array_get_size(v___x_116_);
v___x_118_ = lean_mk_empty_array_with_capacity(v___x_102_);
v___x_119_ = lean_nat_dec_lt(v___x_102_, v___x_117_);
if (v___x_119_ == 0)
{
lean_dec_ref(v___x_116_);
v___y_106_ = v___x_118_;
goto v___jp_105_;
}
else
{
size_t v___x_120_; size_t v___x_121_; lean_object* v___x_122_; 
v___x_120_ = ((size_t)0ULL);
v___x_121_ = lean_usize_of_nat(v___x_117_);
lean_inc_ref(v_env_103_);
v___x_122_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__spec__2(v_env_103_, v___x_116_, v___x_120_, v___x_121_, v___x_118_);
lean_dec_ref(v___x_116_);
v___y_106_ = v___x_122_;
goto v___jp_105_;
}
v___jp_105_:
{
lean_object* v___x_107_; lean_object* v___x_108_; uint8_t v___x_109_; 
v___x_107_ = lean_array_get_size(v___y_106_);
v___x_108_ = lean_mk_empty_array_with_capacity(v___x_102_);
v___x_109_ = lean_nat_dec_lt(v___x_102_, v___x_107_);
if (v___x_109_ == 0)
{
lean_object* v___x_110_; 
lean_dec_ref(v_env_103_);
lean_inc_ref(v___x_108_);
v___x_110_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_110_, 0, v___x_108_);
lean_ctor_set(v___x_110_, 1, v___x_108_);
lean_ctor_set(v___x_110_, 2, v___y_106_);
return v___x_110_;
}
else
{
size_t v___x_111_; size_t v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; 
v___x_111_ = ((size_t)0ULL);
v___x_112_ = lean_usize_of_nat(v___x_107_);
v___x_113_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__spec__0(v_env_103_, v___y_106_, v___x_111_, v___x_112_, v___x_108_);
lean_inc_ref(v___x_113_);
v___x_114_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_114_, 0, v___x_113_);
lean_ctor_set(v___x_114_, 1, v___x_113_);
lean_ctor_set(v___x_114_, 2, v___y_106_);
return v___x_114_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2____boxed(lean_object* v___x_123_, lean_object* v_env_124_, lean_object* v_s_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_(v___x_123_, v_env_124_, v_s_125_);
lean_dec(v_s_125_);
lean_dec(v___x_123_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_166_; lean_object* v___x_167_; lean_object* v___x_168_; uint8_t v___x_169_; lean_object* v___x_170_; 
v___f_166_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_));
v___x_167_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_));
v___x_168_ = lean_box(0);
v___x_169_ = 0;
v___x_170_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_167_, v___x_168_, v___x_169_, v___f_166_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2____boxed(lean_object* v_a_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_();
return v_res_172_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__spec__1(lean_object* v_init_173_, lean_object* v_t_174_){
_start:
{
lean_object* v___x_175_; 
v___x_175_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__spec__1_spec__1(v_init_173_, v_t_174_);
return v___x_175_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__spec__1___boxed(lean_object* v_init_176_, lean_object* v_t_177_){
_start:
{
lean_object* v_res_178_; 
v_res_178_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2__spec__1(v_init_176_, v_t_177_);
lean_dec(v_t_177_);
return v_res_178_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__spec__2(lean_object* v_env_179_, lean_object* v_as_180_, size_t v_i_181_, size_t v_stop_182_, lean_object* v_b_183_){
_start:
{
lean_object* v___y_185_; uint8_t v___x_189_; 
v___x_189_ = lean_usize_dec_eq(v_i_181_, v_stop_182_);
if (v___x_189_ == 0)
{
lean_object* v___x_190_; lean_object* v_fst_191_; uint8_t v___x_192_; 
v___x_190_ = lean_array_uget_borrowed(v_as_180_, v_i_181_);
v_fst_191_ = lean_ctor_get(v___x_190_, 0);
lean_inc(v_fst_191_);
lean_inc_ref(v_env_179_);
v___x_192_ = l_Lean_Environment_contains(v_env_179_, v_fst_191_, v___x_189_);
if (v___x_192_ == 0)
{
v___y_185_ = v_b_183_;
goto v___jp_184_;
}
else
{
lean_object* v___x_193_; 
lean_inc(v___x_190_);
v___x_193_ = lean_array_push(v_b_183_, v___x_190_);
v___y_185_ = v___x_193_;
goto v___jp_184_;
}
}
else
{
lean_dec_ref(v_env_179_);
return v_b_183_;
}
v___jp_184_:
{
size_t v___x_186_; size_t v___x_187_; 
v___x_186_ = ((size_t)1ULL);
v___x_187_ = lean_usize_add(v_i_181_, v___x_186_);
v_i_181_ = v___x_187_;
v_b_183_ = v___y_185_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__spec__2___boxed(lean_object* v_env_194_, lean_object* v_as_195_, lean_object* v_i_196_, lean_object* v_stop_197_, lean_object* v_b_198_){
_start:
{
size_t v_i_boxed_199_; size_t v_stop_boxed_200_; lean_object* v_res_201_; 
v_i_boxed_199_ = lean_unbox_usize(v_i_196_);
lean_dec(v_i_196_);
v_stop_boxed_200_ = lean_unbox_usize(v_stop_197_);
lean_dec(v_stop_197_);
v_res_201_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__spec__2(v_env_194_, v_as_195_, v_i_boxed_199_, v_stop_boxed_200_, v_b_198_);
lean_dec_ref(v_as_195_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__spec__1_spec__1(lean_object* v_init_202_, lean_object* v_x_203_){
_start:
{
if (lean_obj_tag(v_x_203_) == 0)
{
lean_object* v_k_204_; lean_object* v_v_205_; lean_object* v_l_206_; lean_object* v_r_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; 
v_k_204_ = lean_ctor_get(v_x_203_, 1);
v_v_205_ = lean_ctor_get(v_x_203_, 2);
v_l_206_ = lean_ctor_get(v_x_203_, 3);
v_r_207_ = lean_ctor_get(v_x_203_, 4);
v___x_208_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__spec__1_spec__1(v_init_202_, v_l_206_);
lean_inc(v_v_205_);
lean_inc(v_k_204_);
v___x_209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_209_, 0, v_k_204_);
lean_ctor_set(v___x_209_, 1, v_v_205_);
v___x_210_ = lean_array_push(v___x_208_, v___x_209_);
v_init_202_ = v___x_210_;
v_x_203_ = v_r_207_;
goto _start;
}
else
{
return v_init_202_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__spec__1_spec__1___boxed(lean_object* v_init_212_, lean_object* v_x_213_){
_start:
{
lean_object* v_res_214_; 
v_res_214_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__spec__1_spec__1(v_init_212_, v_x_213_);
lean_dec(v_x_213_);
return v_res_214_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__spec__0(lean_object* v_env_215_, lean_object* v_as_216_, size_t v_i_217_, size_t v_stop_218_, lean_object* v_b_219_){
_start:
{
lean_object* v___y_221_; uint8_t v___x_225_; 
v___x_225_ = lean_usize_dec_eq(v_i_217_, v_stop_218_);
if (v___x_225_ == 0)
{
lean_object* v___x_226_; lean_object* v_fst_227_; uint8_t v___x_228_; lean_object* v___x_229_; uint8_t v___x_230_; 
v___x_226_ = lean_array_uget_borrowed(v_as_216_, v_i_217_);
v_fst_227_ = lean_ctor_get(v___x_226_, 0);
v___x_228_ = 1;
lean_inc_ref(v_env_215_);
v___x_229_ = l_Lean_Environment_setExporting(v_env_215_, v___x_228_);
lean_inc(v_fst_227_);
v___x_230_ = l_Lean_Environment_contains(v___x_229_, v_fst_227_, v___x_225_);
if (v___x_230_ == 0)
{
v___y_221_ = v_b_219_;
goto v___jp_220_;
}
else
{
lean_object* v___x_231_; 
lean_inc(v___x_226_);
v___x_231_ = lean_array_push(v_b_219_, v___x_226_);
v___y_221_ = v___x_231_;
goto v___jp_220_;
}
}
else
{
lean_dec_ref(v_env_215_);
return v_b_219_;
}
v___jp_220_:
{
size_t v___x_222_; size_t v___x_223_; 
v___x_222_ = ((size_t)1ULL);
v___x_223_ = lean_usize_add(v_i_217_, v___x_222_);
v_i_217_ = v___x_223_;
v_b_219_ = v___y_221_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__spec__0___boxed(lean_object* v_env_232_, lean_object* v_as_233_, lean_object* v_i_234_, lean_object* v_stop_235_, lean_object* v_b_236_){
_start:
{
size_t v_i_boxed_237_; size_t v_stop_boxed_238_; lean_object* v_res_239_; 
v_i_boxed_237_ = lean_unbox_usize(v_i_234_);
lean_dec(v_i_234_);
v_stop_boxed_238_ = lean_unbox_usize(v_stop_235_);
lean_dec(v_stop_235_);
v_res_239_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__spec__0(v_env_232_, v_as_233_, v_i_boxed_237_, v_stop_boxed_238_, v_b_236_);
lean_dec_ref(v_as_233_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2_(lean_object* v___x_240_, lean_object* v_env_241_, lean_object* v_s_242_){
_start:
{
lean_object* v___y_244_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; uint8_t v___x_257_; 
v___x_253_ = lean_mk_empty_array_with_capacity(v___x_240_);
v___x_254_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__spec__1_spec__1(v___x_253_, v_s_242_);
v___x_255_ = lean_array_get_size(v___x_254_);
v___x_256_ = lean_mk_empty_array_with_capacity(v___x_240_);
v___x_257_ = lean_nat_dec_lt(v___x_240_, v___x_255_);
if (v___x_257_ == 0)
{
lean_dec_ref(v___x_254_);
v___y_244_ = v___x_256_;
goto v___jp_243_;
}
else
{
size_t v___x_258_; size_t v___x_259_; lean_object* v___x_260_; 
v___x_258_ = ((size_t)0ULL);
v___x_259_ = lean_usize_of_nat(v___x_255_);
lean_inc_ref(v_env_241_);
v___x_260_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__spec__2(v_env_241_, v___x_254_, v___x_258_, v___x_259_, v___x_256_);
lean_dec_ref(v___x_254_);
v___y_244_ = v___x_260_;
goto v___jp_243_;
}
v___jp_243_:
{
lean_object* v___x_245_; lean_object* v___x_246_; uint8_t v___x_247_; 
v___x_245_ = lean_array_get_size(v___y_244_);
v___x_246_ = lean_mk_empty_array_with_capacity(v___x_240_);
v___x_247_ = lean_nat_dec_lt(v___x_240_, v___x_245_);
if (v___x_247_ == 0)
{
lean_object* v___x_248_; 
lean_dec_ref(v_env_241_);
lean_inc_ref(v___x_246_);
v___x_248_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_248_, 0, v___x_246_);
lean_ctor_set(v___x_248_, 1, v___x_246_);
lean_ctor_set(v___x_248_, 2, v___y_244_);
return v___x_248_;
}
else
{
size_t v___x_249_; size_t v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; 
v___x_249_ = ((size_t)0ULL);
v___x_250_ = lean_usize_of_nat(v___x_245_);
v___x_251_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__spec__0(v_env_241_, v___y_244_, v___x_249_, v___x_250_, v___x_246_);
lean_inc_ref(v___x_251_);
v___x_252_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_252_, 0, v___x_251_);
lean_ctor_set(v___x_252_, 1, v___x_251_);
lean_ctor_set(v___x_252_, 2, v___y_244_);
return v___x_252_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2____boxed(lean_object* v___x_261_, lean_object* v_env_262_, lean_object* v_s_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2_(v___x_261_, v_env_262_, v_s_263_);
lean_dec(v_s_263_);
lean_dec(v___x_261_);
return v_res_264_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_272_; lean_object* v___x_273_; lean_object* v___x_274_; uint8_t v___x_275_; lean_object* v___x_276_; 
v___f_272_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2_));
v___x_273_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2_));
v___x_274_ = lean_box(0);
v___x_275_ = 0;
v___x_276_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_273_, v___x_274_, v___x_275_, v___f_272_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2____boxed(lean_object* v_a_277_){
_start:
{
lean_object* v_res_278_; 
v_res_278_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2_();
return v_res_278_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__spec__1(lean_object* v_init_279_, lean_object* v_t_280_){
_start:
{
lean_object* v___x_281_; 
v___x_281_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__spec__1_spec__1(v_init_279_, v_t_280_);
return v___x_281_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__spec__1___boxed(lean_object* v_init_282_, lean_object* v_t_283_){
_start:
{
lean_object* v_res_284_; 
v_res_284_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2__spec__1(v_init_282_, v_t_283_);
lean_dec(v_t_283_);
return v_res_284_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType(lean_object* v_type_290_, lean_object* v_a_291_, lean_object* v_a_292_, lean_object* v_a_293_, lean_object* v_a_294_){
_start:
{
lean_object* v___x_296_; 
lean_inc_ref(v_type_290_);
v___x_296_ = l_Lean_Meta_isProp(v_type_290_, v_a_291_, v_a_292_, v_a_293_, v_a_294_);
if (lean_obj_tag(v___x_296_) == 0)
{
lean_object* v_a_297_; uint8_t v___x_298_; 
v_a_297_ = lean_ctor_get(v___x_296_, 0);
v___x_298_ = lean_unbox(v_a_297_);
if (v___x_298_ == 0)
{
lean_object* v___x_299_; 
lean_dec_ref_known(v___x_296_, 1);
lean_inc_ref(v_type_290_);
v___x_299_ = l_Lean_Meta_isTypeFormerType(v_type_290_, v_a_291_, v_a_292_, v_a_293_, v_a_294_);
if (lean_obj_tag(v___x_299_) == 0)
{
lean_object* v_a_300_; uint8_t v___x_301_; 
v_a_300_ = lean_ctor_get(v___x_299_, 0);
v___x_301_ = lean_unbox(v_a_300_);
if (v___x_301_ == 0)
{
lean_object* v___x_302_; 
lean_inc(v_a_300_);
lean_dec_ref_known(v___x_299_, 1);
v___x_302_ = l_Lean_Meta_whnfD(v_type_290_, v_a_291_, v_a_292_, v_a_293_, v_a_294_);
if (lean_obj_tag(v___x_302_) == 0)
{
lean_object* v_a_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_394_; 
v_a_303_ = lean_ctor_get(v___x_302_, 0);
v_isSharedCheck_394_ = !lean_is_exclusive(v___x_302_);
if (v_isSharedCheck_394_ == 0)
{
v___x_305_ = v___x_302_;
v_isShared_306_ = v_isSharedCheck_394_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_a_303_);
lean_dec(v___x_302_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_394_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
if (lean_obj_tag(v_a_303_) == 11)
{
lean_object* v_typeName_307_; 
v_typeName_307_ = lean_ctor_get(v_a_303_, 0);
lean_inc(v_typeName_307_);
if (lean_obj_tag(v_typeName_307_) == 1)
{
lean_object* v_pre_308_; 
v_pre_308_ = lean_ctor_get(v_typeName_307_, 0);
if (lean_obj_tag(v_pre_308_) == 0)
{
lean_object* v_idx_309_; lean_object* v_struct_310_; lean_object* v_str_311_; lean_object* v___x_312_; uint8_t v___x_313_; 
v_idx_309_ = lean_ctor_get(v_a_303_, 1);
lean_inc(v_idx_309_);
v_struct_310_ = lean_ctor_get(v_a_303_, 2);
lean_inc_ref(v_struct_310_);
lean_dec_ref_known(v_a_303_, 3);
v_str_311_ = lean_ctor_get(v_typeName_307_, 1);
lean_inc_ref(v_str_311_);
lean_dec_ref_known(v_typeName_307_, 2);
v___x_312_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___closed__0));
v___x_313_ = lean_string_dec_eq(v_str_311_, v___x_312_);
lean_dec_ref(v_str_311_);
if (v___x_313_ == 0)
{
lean_object* v___x_315_; 
lean_dec_ref(v_struct_310_);
lean_dec(v_idx_309_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v_a_300_);
v___x_315_ = v___x_305_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v_a_300_);
v___x_315_ = v_reuseFailAlloc_316_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
return v___x_315_;
}
}
else
{
lean_object* v___x_317_; uint8_t v___x_318_; 
v___x_317_ = lean_unsigned_to_nat(0u);
v___x_318_ = lean_nat_dec_eq(v_idx_309_, v___x_317_);
lean_dec(v_idx_309_);
if (v___x_318_ == 0)
{
lean_object* v___x_319_; lean_object* v___x_321_; 
lean_dec_ref(v_struct_310_);
lean_dec(v_a_300_);
v___x_319_ = lean_box(v___x_318_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v___x_319_);
v___x_321_ = v___x_305_;
goto v_reusejp_320_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v___x_319_);
v___x_321_ = v_reuseFailAlloc_322_;
goto v_reusejp_320_;
}
v_reusejp_320_:
{
return v___x_321_;
}
}
else
{
if (lean_obj_tag(v_struct_310_) == 5)
{
lean_object* v_fn_323_; 
v_fn_323_ = lean_ctor_get(v_struct_310_, 0);
lean_inc_ref(v_fn_323_);
lean_dec_ref_known(v_struct_310_, 2);
if (lean_obj_tag(v_fn_323_) == 4)
{
lean_object* v_declName_324_; 
v_declName_324_ = lean_ctor_get(v_fn_323_, 0);
lean_inc(v_declName_324_);
if (lean_obj_tag(v_declName_324_) == 1)
{
lean_object* v_pre_325_; 
v_pre_325_ = lean_ctor_get(v_declName_324_, 0);
lean_inc(v_pre_325_);
if (lean_obj_tag(v_pre_325_) == 1)
{
lean_object* v_pre_326_; 
v_pre_326_ = lean_ctor_get(v_pre_325_, 0);
lean_inc(v_pre_326_);
if (lean_obj_tag(v_pre_326_) == 1)
{
lean_object* v_pre_327_; 
v_pre_327_ = lean_ctor_get(v_pre_326_, 0);
lean_inc(v_pre_327_);
if (lean_obj_tag(v_pre_327_) == 1)
{
lean_object* v_pre_328_; 
v_pre_328_ = lean_ctor_get(v_pre_327_, 0);
if (lean_obj_tag(v_pre_328_) == 0)
{
lean_object* v_us_329_; lean_object* v_str_330_; lean_object* v_str_331_; lean_object* v_str_332_; lean_object* v_str_333_; lean_object* v___x_334_; uint8_t v___x_335_; 
v_us_329_ = lean_ctor_get(v_fn_323_, 1);
lean_inc(v_us_329_);
lean_dec_ref_known(v_fn_323_, 2);
v_str_330_ = lean_ctor_get(v_declName_324_, 1);
lean_inc_ref(v_str_330_);
lean_dec_ref_known(v_declName_324_, 2);
v_str_331_ = lean_ctor_get(v_pre_325_, 1);
lean_inc_ref(v_str_331_);
lean_dec_ref_known(v_pre_325_, 2);
v_str_332_ = lean_ctor_get(v_pre_326_, 1);
lean_inc_ref(v_str_332_);
lean_dec_ref_known(v_pre_326_, 2);
v_str_333_ = lean_ctor_get(v_pre_327_, 1);
lean_inc_ref(v_str_333_);
lean_dec_ref_known(v_pre_327_, 2);
v___x_334_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___closed__1));
v___x_335_ = lean_string_dec_eq(v_str_333_, v___x_334_);
lean_dec_ref(v_str_333_);
if (v___x_335_ == 0)
{
lean_object* v___x_337_; 
lean_dec_ref(v_str_332_);
lean_dec_ref(v_str_331_);
lean_dec_ref(v_str_330_);
lean_dec(v_us_329_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v_a_300_);
v___x_337_ = v___x_305_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v_a_300_);
v___x_337_ = v_reuseFailAlloc_338_;
goto v_reusejp_336_;
}
v_reusejp_336_:
{
return v___x_337_;
}
}
else
{
lean_object* v___x_339_; uint8_t v___x_340_; 
v___x_339_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___closed__2));
v___x_340_ = lean_string_dec_eq(v_str_332_, v___x_339_);
lean_dec_ref(v_str_332_);
if (v___x_340_ == 0)
{
lean_object* v___x_341_; lean_object* v___x_343_; 
lean_dec_ref(v_str_331_);
lean_dec_ref(v_str_330_);
lean_dec(v_us_329_);
lean_dec(v_a_300_);
v___x_341_ = lean_box(v___x_340_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v___x_341_);
v___x_343_ = v___x_305_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v___x_341_);
v___x_343_ = v_reuseFailAlloc_344_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
return v___x_343_;
}
}
else
{
lean_object* v___x_345_; uint8_t v___x_346_; 
v___x_345_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___closed__3));
v___x_346_ = lean_string_dec_eq(v_str_331_, v___x_345_);
lean_dec_ref(v_str_331_);
if (v___x_346_ == 0)
{
lean_object* v___x_347_; lean_object* v___x_349_; 
lean_dec_ref(v_str_330_);
lean_dec(v_us_329_);
lean_dec(v_a_300_);
v___x_347_ = lean_box(v___x_346_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v___x_347_);
v___x_349_ = v___x_305_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v___x_347_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
return v___x_349_;
}
}
else
{
lean_object* v___x_351_; uint8_t v___x_352_; 
v___x_351_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___closed__4));
v___x_352_ = lean_string_dec_eq(v_str_330_, v___x_351_);
lean_dec_ref(v_str_330_);
if (v___x_352_ == 0)
{
lean_object* v___x_353_; lean_object* v___x_355_; 
lean_dec(v_us_329_);
lean_dec(v_a_300_);
v___x_353_ = lean_box(v___x_352_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v___x_353_);
v___x_355_ = v___x_305_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_356_; 
v_reuseFailAlloc_356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_356_, 0, v___x_353_);
v___x_355_ = v_reuseFailAlloc_356_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
return v___x_355_;
}
}
else
{
if (lean_obj_tag(v_us_329_) == 0)
{
lean_object* v___x_357_; lean_object* v___x_359_; 
lean_dec(v_a_300_);
v___x_357_ = lean_box(v___x_352_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v___x_357_);
v___x_359_ = v___x_305_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v___x_357_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
else
{
lean_object* v___x_362_; 
lean_dec(v_us_329_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v_a_300_);
v___x_362_ = v___x_305_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v_a_300_);
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
}
}
}
else
{
lean_object* v___x_365_; 
lean_dec_ref_known(v_pre_327_, 2);
lean_dec_ref_known(v_pre_326_, 2);
lean_dec_ref_known(v_pre_325_, 2);
lean_dec_ref_known(v_declName_324_, 2);
lean_dec_ref_known(v_fn_323_, 2);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v_a_300_);
v___x_365_ = v___x_305_;
goto v_reusejp_364_;
}
else
{
lean_object* v_reuseFailAlloc_366_; 
v_reuseFailAlloc_366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_366_, 0, v_a_300_);
v___x_365_ = v_reuseFailAlloc_366_;
goto v_reusejp_364_;
}
v_reusejp_364_:
{
return v___x_365_;
}
}
}
else
{
lean_object* v___x_368_; 
lean_dec(v_pre_327_);
lean_dec_ref_known(v_pre_326_, 2);
lean_dec_ref_known(v_pre_325_, 2);
lean_dec_ref_known(v_declName_324_, 2);
lean_dec_ref_known(v_fn_323_, 2);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v_a_300_);
v___x_368_ = v___x_305_;
goto v_reusejp_367_;
}
else
{
lean_object* v_reuseFailAlloc_369_; 
v_reuseFailAlloc_369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_369_, 0, v_a_300_);
v___x_368_ = v_reuseFailAlloc_369_;
goto v_reusejp_367_;
}
v_reusejp_367_:
{
return v___x_368_;
}
}
}
else
{
lean_object* v___x_371_; 
lean_dec(v_pre_326_);
lean_dec_ref_known(v_pre_325_, 2);
lean_dec_ref_known(v_declName_324_, 2);
lean_dec_ref_known(v_fn_323_, 2);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v_a_300_);
v___x_371_ = v___x_305_;
goto v_reusejp_370_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v_a_300_);
v___x_371_ = v_reuseFailAlloc_372_;
goto v_reusejp_370_;
}
v_reusejp_370_:
{
return v___x_371_;
}
}
}
else
{
lean_object* v___x_374_; 
lean_dec_ref_known(v_declName_324_, 2);
lean_dec(v_pre_325_);
lean_dec_ref_known(v_fn_323_, 2);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v_a_300_);
v___x_374_ = v___x_305_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v_a_300_);
v___x_374_ = v_reuseFailAlloc_375_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
return v___x_374_;
}
}
}
else
{
lean_object* v___x_377_; 
lean_dec(v_declName_324_);
lean_dec_ref_known(v_fn_323_, 2);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v_a_300_);
v___x_377_ = v___x_305_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v_a_300_);
v___x_377_ = v_reuseFailAlloc_378_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
return v___x_377_;
}
}
}
else
{
lean_object* v___x_380_; 
lean_dec_ref(v_fn_323_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v_a_300_);
v___x_380_ = v___x_305_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v_a_300_);
v___x_380_ = v_reuseFailAlloc_381_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
return v___x_380_;
}
}
}
else
{
lean_object* v___x_383_; 
lean_dec_ref(v_struct_310_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v_a_300_);
v___x_383_ = v___x_305_;
goto v_reusejp_382_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v_a_300_);
v___x_383_ = v_reuseFailAlloc_384_;
goto v_reusejp_382_;
}
v_reusejp_382_:
{
return v___x_383_;
}
}
}
}
}
else
{
lean_object* v___x_386_; 
lean_dec_ref_known(v_typeName_307_, 2);
lean_dec_ref_known(v_a_303_, 3);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v_a_300_);
v___x_386_ = v___x_305_;
goto v_reusejp_385_;
}
else
{
lean_object* v_reuseFailAlloc_387_; 
v_reuseFailAlloc_387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_387_, 0, v_a_300_);
v___x_386_ = v_reuseFailAlloc_387_;
goto v_reusejp_385_;
}
v_reusejp_385_:
{
return v___x_386_;
}
}
}
else
{
lean_object* v___x_389_; 
lean_dec(v_typeName_307_);
lean_dec_ref_known(v_a_303_, 3);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v_a_300_);
v___x_389_ = v___x_305_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v_a_300_);
v___x_389_ = v_reuseFailAlloc_390_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
return v___x_389_;
}
}
}
else
{
lean_object* v___x_392_; 
lean_dec(v_a_303_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v_a_300_);
v___x_392_ = v___x_305_;
goto v_reusejp_391_;
}
else
{
lean_object* v_reuseFailAlloc_393_; 
v_reuseFailAlloc_393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_393_, 0, v_a_300_);
v___x_392_ = v_reuseFailAlloc_393_;
goto v_reusejp_391_;
}
v_reusejp_391_:
{
return v___x_392_;
}
}
}
}
else
{
lean_object* v_a_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_402_; 
lean_dec(v_a_300_);
v_a_395_ = lean_ctor_get(v___x_302_, 0);
v_isSharedCheck_402_ = !lean_is_exclusive(v___x_302_);
if (v_isSharedCheck_402_ == 0)
{
v___x_397_ = v___x_302_;
v_isShared_398_ = v_isSharedCheck_402_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_a_395_);
lean_dec(v___x_302_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_402_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v___x_400_; 
if (v_isShared_398_ == 0)
{
v___x_400_ = v___x_397_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v_a_395_);
v___x_400_ = v_reuseFailAlloc_401_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
return v___x_400_;
}
}
}
}
else
{
lean_dec_ref(v_type_290_);
return v___x_299_;
}
}
else
{
lean_dec_ref(v_type_290_);
return v___x_299_;
}
}
else
{
lean_dec_ref(v_type_290_);
return v___x_296_;
}
}
else
{
lean_dec_ref(v_type_290_);
return v___x_296_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType___boxed(lean_object* v_type_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_, lean_object* v_a_408_){
_start:
{
lean_object* v_res_409_; 
v_res_409_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureIrrelevantType(v_type_403_, v_a_404_, v_a_405_, v_a_406_, v_a_407_);
lean_dec(v_a_407_);
lean_dec_ref(v_a_406_);
lean_dec(v_a_405_);
lean_dec_ref(v_a_404_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setHasTrivialImpureStructure_x3f(lean_object* v_declName_411_, lean_object* v_a_412_, lean_object* v_a_413_){
_start:
{
lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_415_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTrivialStructureInfoExt;
v___x_416_ = ((lean_object*)(l_Lean_Compiler_LCNF_setHasTrivialImpureStructure_x3f___closed__0));
v___x_417_ = l_Lean_Compiler_LCNF_Irrelevant_setHasTrivialStructure_x3f(v___x_415_, v___x_416_, v_declName_411_, v_a_412_, v_a_413_);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setHasTrivialImpureStructure_x3f___boxed(lean_object* v_declName_418_, lean_object* v_a_419_, lean_object* v_a_420_, lean_object* v_a_421_){
_start:
{
lean_object* v_res_422_; 
v_res_422_ = l_Lean_Compiler_LCNF_setHasTrivialImpureStructure_x3f(v_declName_418_, v_a_419_, v_a_420_);
lean_dec(v_a_420_);
lean_dec_ref(v_a_419_);
return v_res_422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_hasTrivialImpureStructure_x3f(lean_object* v_declName_423_, lean_object* v_a_424_, lean_object* v_a_425_){
_start:
{
lean_object* v___x_427_; lean_object* v___x_428_; 
v___x_427_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTrivialStructureInfoExt;
v___x_428_ = l_Lean_Compiler_LCNF_Irrelevant_hasTrivialStructure_x3f(v___x_427_, v_declName_423_, v_a_424_, v_a_425_);
return v___x_428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_hasTrivialImpureStructure_x3f___boxed(lean_object* v_declName_429_, lean_object* v_a_430_, lean_object* v_a_431_, lean_object* v_a_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l_Lean_Compiler_LCNF_hasTrivialImpureStructure_x3f(v_declName_429_, v_a_430_, v_a_431_);
lean_dec(v_a_431_);
lean_dec_ref(v_a_430_);
return v_res_433_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__8(void){
_start:
{
lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_443_ = lean_box(0);
v___x_444_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__7));
v___x_445_ = l_Lean_Expr_const___override(v___x_444_, v___x_443_);
return v___x_445_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__9(void){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_446_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__8, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__8_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__8);
v___x_447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_447_, 0, v___x_446_);
return v___x_447_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12(void){
_start:
{
lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_451_ = lean_box(0);
v___x_452_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__11));
v___x_453_ = l_Lean_Expr_const___override(v___x_452_, v___x_451_);
return v___x_453_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__13(void){
_start:
{
lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_454_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12);
v___x_455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_455_, 0, v___x_454_);
return v___x_455_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__15(void){
_start:
{
lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; 
v___x_458_ = lean_box(0);
v___x_459_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__14));
v___x_460_ = l_Lean_Expr_const___override(v___x_459_, v___x_458_);
return v___x_460_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__16(void){
_start:
{
lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_461_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__15, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__15_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__15);
v___x_462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_462_, 0, v___x_461_);
return v___x_462_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__18(void){
_start:
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_465_ = lean_box(0);
v___x_466_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__17));
v___x_467_ = l_Lean_Expr_const___override(v___x_466_, v___x_465_);
return v___x_467_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__19(void){
_start:
{
lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_468_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__18, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__18_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__18);
v___x_469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_469_, 0, v___x_468_);
return v___x_469_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__21(void){
_start:
{
lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_472_ = lean_box(0);
v___x_473_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__20));
v___x_474_ = l_Lean_Expr_const___override(v___x_473_, v___x_472_);
return v___x_474_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__22(void){
_start:
{
lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_475_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__21, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__21_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__21);
v___x_476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_476_, 0, v___x_475_);
return v___x_476_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__24(void){
_start:
{
lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; 
v___x_479_ = lean_box(0);
v___x_480_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__23));
v___x_481_ = l_Lean_Expr_const___override(v___x_480_, v___x_479_);
return v___x_481_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__25(void){
_start:
{
lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_482_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__24, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__24_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__24);
v___x_483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_483_, 0, v___x_482_);
return v___x_483_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__27(void){
_start:
{
lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_486_ = lean_box(0);
v___x_487_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__26));
v___x_488_ = l_Lean_Expr_const___override(v___x_487_, v___x_486_);
return v___x_488_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__28(void){
_start:
{
lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_489_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__27, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__27_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__27);
v___x_490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_490_, 0, v___x_489_);
return v___x_490_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__29(void){
_start:
{
lean_object* v___x_491_; lean_object* v___x_492_; 
v___x_491_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__5, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__5_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__5);
v___x_492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_492_, 0, v___x_491_);
return v___x_492_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__30(void){
_start:
{
lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_493_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__8, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__8_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__8);
v___x_494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_494_, 0, v___x_493_);
return v___x_494_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__31(void){
_start:
{
lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_495_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__11, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__11_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__11);
v___x_496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_496_, 0, v___x_495_);
return v___x_496_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f(lean_object* v_x_497_){
_start:
{
if (lean_obj_tag(v_x_497_) == 1)
{
lean_object* v_pre_498_; 
v_pre_498_ = lean_ctor_get(v_x_497_, 0);
if (lean_obj_tag(v_pre_498_) == 0)
{
lean_object* v_str_499_; lean_object* v___x_500_; uint8_t v___x_501_; 
v_str_499_ = lean_ctor_get(v_x_497_, 1);
v___x_500_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__9));
v___x_501_ = lean_string_dec_eq(v_str_499_, v___x_500_);
if (v___x_501_ == 0)
{
lean_object* v___x_502_; uint8_t v___x_503_; 
v___x_502_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__6));
v___x_503_ = lean_string_dec_eq(v_str_499_, v___x_502_);
if (v___x_503_ == 0)
{
lean_object* v___x_504_; uint8_t v___x_505_; 
v___x_504_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__3));
v___x_505_ = lean_string_dec_eq(v_str_499_, v___x_504_);
if (v___x_505_ == 0)
{
lean_object* v___x_506_; uint8_t v___x_507_; 
v___x_506_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__0));
v___x_507_ = lean_string_dec_eq(v_str_499_, v___x_506_);
if (v___x_507_ == 0)
{
lean_object* v___x_508_; uint8_t v___x_509_; 
v___x_508_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__1));
v___x_509_ = lean_string_dec_eq(v_str_499_, v___x_508_);
if (v___x_509_ == 0)
{
lean_object* v___x_510_; uint8_t v___x_511_; 
v___x_510_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__2));
v___x_511_ = lean_string_dec_eq(v_str_499_, v___x_510_);
if (v___x_511_ == 0)
{
lean_object* v___x_512_; uint8_t v___x_513_; 
v___x_512_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__3));
v___x_513_ = lean_string_dec_eq(v_str_499_, v___x_512_);
if (v___x_513_ == 0)
{
lean_object* v___x_514_; uint8_t v___x_515_; 
v___x_514_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__4));
v___x_515_ = lean_string_dec_eq(v_str_499_, v___x_514_);
if (v___x_515_ == 0)
{
lean_object* v___x_516_; uint8_t v___x_517_; 
v___x_516_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__5));
v___x_517_ = lean_string_dec_eq(v_str_499_, v___x_516_);
if (v___x_517_ == 0)
{
lean_object* v___x_518_; uint8_t v___x_519_; 
v___x_518_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__6));
v___x_519_ = lean_string_dec_eq(v_str_499_, v___x_518_);
if (v___x_519_ == 0)
{
lean_object* v___x_520_; 
v___x_520_ = lean_box(0);
return v___x_520_;
}
else
{
lean_object* v___x_521_; 
v___x_521_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__9, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__9_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__9);
return v___x_521_;
}
}
else
{
lean_object* v___x_522_; 
v___x_522_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__13, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__13_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__13);
return v___x_522_;
}
}
else
{
lean_object* v___x_523_; 
v___x_523_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__16, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__16_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__16);
return v___x_523_;
}
}
else
{
lean_object* v___x_524_; 
v___x_524_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__19, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__19_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__19);
return v___x_524_;
}
}
else
{
lean_object* v___x_525_; 
v___x_525_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__22, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__22_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__22);
return v___x_525_;
}
}
else
{
lean_object* v___x_526_; 
v___x_526_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__25, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__25_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__25);
return v___x_526_;
}
}
else
{
lean_object* v___x_527_; 
v___x_527_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__28, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__28_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__28);
return v___x_527_;
}
}
else
{
lean_object* v___x_528_; 
v___x_528_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__29, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__29_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__29);
return v___x_528_;
}
}
else
{
lean_object* v___x_529_; 
v___x_529_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__30, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__30_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__30);
return v___x_529_;
}
}
else
{
lean_object* v___x_530_; 
v___x_530_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__31, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__31_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__31);
return v___x_530_;
}
}
else
{
lean_object* v___x_531_; 
v___x_531_ = lean_box(0);
return v___x_531_;
}
}
else
{
lean_object* v___x_532_; 
v___x_532_ = lean_box(0);
return v___x_532_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___boxed(lean_object* v_x_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f(v_x_533_);
lean_dec(v_x_533_);
return v_res_534_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__0(lean_object* v_msg_536_, lean_object* v___y_537_, lean_object* v___y_538_){
_start:
{
lean_object* v___f_540_; lean_object* v___x_5771__overap_541_; lean_object* v___x_542_; 
v___f_540_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__0___closed__0));
v___x_5771__overap_541_ = lean_panic_fn_borrowed(v___f_540_, v_msg_536_);
lean_inc(v___y_538_);
lean_inc_ref(v___y_537_);
v___x_542_ = lean_apply_3(v___x_5771__overap_541_, v___y_537_, v___y_538_, lean_box(0));
return v___x_542_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__0___boxed(lean_object* v_msg_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_){
_start:
{
lean_object* v_res_547_; 
v_res_547_ = l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__0(v_msg_543_, v___y_544_, v___y_545_);
lean_dec(v___y_545_);
lean_dec_ref(v___y_544_);
return v_res_547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___lam__0(lean_object* v_k_548_, lean_object* v_b_549_, lean_object* v_c_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_){
_start:
{
lean_object* v___x_556_; 
lean_inc(v___y_554_);
lean_inc_ref(v___y_553_);
lean_inc(v___y_552_);
lean_inc_ref(v___y_551_);
v___x_556_ = lean_apply_7(v_k_548_, v_b_549_, v_c_550_, v___y_551_, v___y_552_, v___y_553_, v___y_554_, lean_box(0));
return v___x_556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___lam__0___boxed(lean_object* v_k_557_, lean_object* v_b_558_, lean_object* v_c_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_){
_start:
{
lean_object* v_res_565_; 
v_res_565_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___lam__0(v_k_557_, v_b_558_, v_c_559_, v___y_560_, v___y_561_, v___y_562_, v___y_563_);
lean_dec(v___y_563_);
lean_dec_ref(v___y_562_);
lean_dec(v___y_561_);
lean_dec_ref(v___y_560_);
return v_res_565_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg(lean_object* v_type_566_, lean_object* v_k_567_, uint8_t v_cleanupAnnotations_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_){
_start:
{
lean_object* v___f_574_; uint8_t v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; 
v___f_574_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_574_, 0, v_k_567_);
v___x_575_ = 0;
v___x_576_ = lean_box(0);
v___x_577_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_575_, v___x_576_, v_type_566_, v___f_574_, v_cleanupAnnotations_568_, v___x_575_, v___y_569_, v___y_570_, v___y_571_, v___y_572_);
if (lean_obj_tag(v___x_577_) == 0)
{
lean_object* v_a_578_; lean_object* v___x_580_; uint8_t v_isShared_581_; uint8_t v_isSharedCheck_585_; 
v_a_578_ = lean_ctor_get(v___x_577_, 0);
v_isSharedCheck_585_ = !lean_is_exclusive(v___x_577_);
if (v_isSharedCheck_585_ == 0)
{
v___x_580_ = v___x_577_;
v_isShared_581_ = v_isSharedCheck_585_;
goto v_resetjp_579_;
}
else
{
lean_inc(v_a_578_);
lean_dec(v___x_577_);
v___x_580_ = lean_box(0);
v_isShared_581_ = v_isSharedCheck_585_;
goto v_resetjp_579_;
}
v_resetjp_579_:
{
lean_object* v___x_583_; 
if (v_isShared_581_ == 0)
{
v___x_583_ = v___x_580_;
goto v_reusejp_582_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v_a_578_);
v___x_583_ = v_reuseFailAlloc_584_;
goto v_reusejp_582_;
}
v_reusejp_582_:
{
return v___x_583_;
}
}
}
else
{
lean_object* v_a_586_; lean_object* v___x_588_; uint8_t v_isShared_589_; uint8_t v_isSharedCheck_593_; 
v_a_586_ = lean_ctor_get(v___x_577_, 0);
v_isSharedCheck_593_ = !lean_is_exclusive(v___x_577_);
if (v_isSharedCheck_593_ == 0)
{
v___x_588_ = v___x_577_;
v_isShared_589_ = v_isSharedCheck_593_;
goto v_resetjp_587_;
}
else
{
lean_inc(v_a_586_);
lean_dec(v___x_577_);
v___x_588_ = lean_box(0);
v_isShared_589_ = v_isSharedCheck_593_;
goto v_resetjp_587_;
}
v_resetjp_587_:
{
lean_object* v___x_591_; 
if (v_isShared_589_ == 0)
{
v___x_591_ = v___x_588_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v_a_586_);
v___x_591_ = v_reuseFailAlloc_592_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
return v___x_591_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___boxed(lean_object* v_type_594_, lean_object* v_k_595_, lean_object* v_cleanupAnnotations_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_602_; lean_object* v_res_603_; 
v_cleanupAnnotations_boxed_602_ = lean_unbox(v_cleanupAnnotations_596_);
v_res_603_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg(v_type_594_, v_k_595_, v_cleanupAnnotations_boxed_602_, v___y_597_, v___y_598_, v___y_599_, v___y_600_);
lean_dec(v___y_600_);
lean_dec_ref(v___y_599_);
lean_dec(v___y_598_);
lean_dec_ref(v___y_597_);
return v_res_603_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3(lean_object* v_00_u03b1_604_, lean_object* v_type_605_, lean_object* v_k_606_, uint8_t v_cleanupAnnotations_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_){
_start:
{
lean_object* v___x_613_; 
v___x_613_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg(v_type_605_, v_k_606_, v_cleanupAnnotations_607_, v___y_608_, v___y_609_, v___y_610_, v___y_611_);
return v___x_613_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___boxed(lean_object* v_00_u03b1_614_, lean_object* v_type_615_, lean_object* v_k_616_, lean_object* v_cleanupAnnotations_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_623_; lean_object* v_res_624_; 
v_cleanupAnnotations_boxed_623_ = lean_unbox(v_cleanupAnnotations_617_);
v_res_624_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3(v_00_u03b1_614_, v_type_615_, v_k_616_, v_cleanupAnnotations_boxed_623_, v___y_618_, v___y_619_, v___y_620_, v___y_621_);
lean_dec(v___y_621_);
lean_dec_ref(v___y_620_);
lean_dec(v___y_619_);
lean_dec_ref(v___y_618_);
return v_res_624_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_625_; 
v___x_625_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_625_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_626_; lean_object* v___x_627_; 
v___x_626_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2_spec__2___redArg___closed__0);
v___x_627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_627_, 0, v___x_626_);
return v___x_627_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2_spec__2___redArg(){
_start:
{
lean_object* v___x_629_; 
v___x_629_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2_spec__2___redArg___closed__1);
return v___x_629_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2_spec__2___redArg___boxed(lean_object* v___dummy_630_){
_start:
{
lean_object* v_res_631_; 
v_res_631_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2_spec__2___redArg();
return v_res_631_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1___redArg(lean_object* v_a_635_, lean_object* v_b_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_){
_start:
{
lean_object* v_array_642_; lean_object* v_start_643_; lean_object* v_stop_644_; lean_object* v___x_646_; uint8_t v_isShared_647_; uint8_t v_isSharedCheck_701_; 
v_array_642_ = lean_ctor_get(v_a_635_, 0);
v_start_643_ = lean_ctor_get(v_a_635_, 1);
v_stop_644_ = lean_ctor_get(v_a_635_, 2);
v_isSharedCheck_701_ = !lean_is_exclusive(v_a_635_);
if (v_isSharedCheck_701_ == 0)
{
v___x_646_ = v_a_635_;
v_isShared_647_ = v_isSharedCheck_701_;
goto v_resetjp_645_;
}
else
{
lean_inc(v_stop_644_);
lean_inc(v_start_643_);
lean_inc(v_array_642_);
lean_dec(v_a_635_);
v___x_646_ = lean_box(0);
v_isShared_647_ = v_isSharedCheck_701_;
goto v_resetjp_645_;
}
v_resetjp_645_:
{
uint8_t v___x_648_; 
v___x_648_ = lean_nat_dec_lt(v_start_643_, v_stop_644_);
if (v___x_648_ == 0)
{
lean_object* v___x_649_; 
lean_del_object(v___x_646_);
lean_dec(v_stop_644_);
lean_dec(v_start_643_);
lean_dec_ref(v_array_642_);
v___x_649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_649_, 0, v_b_636_);
return v___x_649_;
}
else
{
lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_655_; 
lean_dec_ref(v_b_636_);
v___x_650_ = lean_box(0);
v___x_651_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1___redArg___closed__0));
v___x_652_ = lean_unsigned_to_nat(1u);
v___x_653_ = lean_nat_add(v_start_643_, v___x_652_);
lean_inc_ref(v_array_642_);
if (v_isShared_647_ == 0)
{
lean_ctor_set(v___x_646_, 1, v___x_653_);
v___x_655_ = v___x_646_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v_array_642_);
lean_ctor_set(v_reuseFailAlloc_700_, 1, v___x_653_);
lean_ctor_set(v_reuseFailAlloc_700_, 2, v_stop_644_);
v___x_655_ = v_reuseFailAlloc_700_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; 
v___x_656_ = lean_array_fget(v_array_642_, v_start_643_);
lean_dec(v_start_643_);
lean_dec_ref(v_array_642_);
v___x_657_ = l_Lean_Expr_fvarId_x21(v___x_656_);
lean_dec(v___x_656_);
v___x_658_ = l_Lean_FVarId_getType___redArg(v___x_657_, v___y_637_, v___y_639_, v___y_640_);
if (lean_obj_tag(v___x_658_) == 0)
{
lean_object* v_a_659_; lean_object* v___x_660_; 
v_a_659_ = lean_ctor_get(v___x_658_, 0);
lean_inc(v_a_659_);
lean_dec_ref_known(v___x_658_, 1);
v___x_660_ = l_Lean_Compiler_LCNF_toLCNFType(v_a_659_, v___y_637_, v___y_638_, v___y_639_, v___y_640_);
if (lean_obj_tag(v___x_660_) == 0)
{
lean_object* v_a_661_; lean_object* v___x_662_; 
v_a_661_ = lean_ctor_get(v___x_660_, 0);
lean_inc(v_a_661_);
lean_dec_ref_known(v___x_660_, 1);
v___x_662_ = l_Lean_Compiler_LCNF_toMonoType(v_a_661_, v___y_639_, v___y_640_);
if (lean_obj_tag(v___x_662_) == 0)
{
lean_object* v_a_663_; lean_object* v___x_665_; uint8_t v_isShared_666_; uint8_t v_isSharedCheck_675_; 
v_a_663_ = lean_ctor_get(v___x_662_, 0);
v_isSharedCheck_675_ = !lean_is_exclusive(v___x_662_);
if (v_isSharedCheck_675_ == 0)
{
v___x_665_ = v___x_662_;
v_isShared_666_ = v_isSharedCheck_675_;
goto v_resetjp_664_;
}
else
{
lean_inc(v_a_663_);
lean_dec(v___x_662_);
v___x_665_ = lean_box(0);
v_isShared_666_ = v_isSharedCheck_675_;
goto v_resetjp_664_;
}
v_resetjp_664_:
{
uint8_t v___x_667_; 
v___x_667_ = l_Lean_Expr_isErased(v_a_663_);
lean_dec(v_a_663_);
if (v___x_667_ == 0)
{
lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_672_; 
lean_dec_ref(v___x_655_);
v___x_668_ = lean_box(v___x_648_);
v___x_669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_669_, 0, v___x_668_);
v___x_670_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_670_, 0, v___x_669_);
lean_ctor_set(v___x_670_, 1, v___x_650_);
if (v_isShared_666_ == 0)
{
lean_ctor_set(v___x_665_, 0, v___x_670_);
v___x_672_ = v___x_665_;
goto v_reusejp_671_;
}
else
{
lean_object* v_reuseFailAlloc_673_; 
v_reuseFailAlloc_673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_673_, 0, v___x_670_);
v___x_672_ = v_reuseFailAlloc_673_;
goto v_reusejp_671_;
}
v_reusejp_671_:
{
return v___x_672_;
}
}
else
{
lean_del_object(v___x_665_);
v_a_635_ = v___x_655_;
v_b_636_ = v___x_651_;
goto _start;
}
}
}
else
{
lean_object* v_a_676_; lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_683_; 
lean_dec_ref(v___x_655_);
v_a_676_ = lean_ctor_get(v___x_662_, 0);
v_isSharedCheck_683_ = !lean_is_exclusive(v___x_662_);
if (v_isSharedCheck_683_ == 0)
{
v___x_678_ = v___x_662_;
v_isShared_679_ = v_isSharedCheck_683_;
goto v_resetjp_677_;
}
else
{
lean_inc(v_a_676_);
lean_dec(v___x_662_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_683_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
lean_object* v___x_681_; 
if (v_isShared_679_ == 0)
{
v___x_681_ = v___x_678_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v_a_676_);
v___x_681_ = v_reuseFailAlloc_682_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
return v___x_681_;
}
}
}
}
else
{
lean_object* v_a_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_691_; 
lean_dec_ref(v___x_655_);
v_a_684_ = lean_ctor_get(v___x_660_, 0);
v_isSharedCheck_691_ = !lean_is_exclusive(v___x_660_);
if (v_isSharedCheck_691_ == 0)
{
v___x_686_ = v___x_660_;
v_isShared_687_ = v_isSharedCheck_691_;
goto v_resetjp_685_;
}
else
{
lean_inc(v_a_684_);
lean_dec(v___x_660_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_691_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
lean_object* v___x_689_; 
if (v_isShared_687_ == 0)
{
v___x_689_ = v___x_686_;
goto v_reusejp_688_;
}
else
{
lean_object* v_reuseFailAlloc_690_; 
v_reuseFailAlloc_690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_690_, 0, v_a_684_);
v___x_689_ = v_reuseFailAlloc_690_;
goto v_reusejp_688_;
}
v_reusejp_688_:
{
return v___x_689_;
}
}
}
}
else
{
lean_object* v_a_692_; lean_object* v___x_694_; uint8_t v_isShared_695_; uint8_t v_isSharedCheck_699_; 
lean_dec_ref(v___x_655_);
v_a_692_ = lean_ctor_get(v___x_658_, 0);
v_isSharedCheck_699_ = !lean_is_exclusive(v___x_658_);
if (v_isSharedCheck_699_ == 0)
{
v___x_694_ = v___x_658_;
v_isShared_695_ = v_isSharedCheck_699_;
goto v_resetjp_693_;
}
else
{
lean_inc(v_a_692_);
lean_dec(v___x_658_);
v___x_694_ = lean_box(0);
v_isShared_695_ = v_isSharedCheck_699_;
goto v_resetjp_693_;
}
v_resetjp_693_:
{
lean_object* v___x_697_; 
if (v_isShared_695_ == 0)
{
v___x_697_ = v___x_694_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v_a_692_);
v___x_697_ = v_reuseFailAlloc_698_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
return v___x_697_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1___redArg___boxed(lean_object* v_a_702_, lean_object* v_b_703_, lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_){
_start:
{
lean_object* v_res_709_; 
v_res_709_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1___redArg(v_a_702_, v_b_703_, v___y_704_, v___y_705_, v___y_706_, v___y_707_);
lean_dec(v___y_707_);
lean_dec_ref(v___y_706_);
lean_dec(v___y_705_);
lean_dec_ref(v___y_704_);
return v_res_709_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___lam__0(uint8_t v___x_710_, lean_object* v_numParams_711_, lean_object* v___x_712_, lean_object* v_params_713_, lean_object* v_x_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_){
_start:
{
lean_object* v_lower_721_; lean_object* v_upper_722_; lean_object* v___x_748_; uint8_t v___x_749_; 
v___x_748_ = lean_array_get_size(v_params_713_);
v___x_749_ = lean_nat_dec_le(v_numParams_711_, v___x_712_);
if (v___x_749_ == 0)
{
lean_dec(v___x_712_);
v_lower_721_ = v_numParams_711_;
v_upper_722_ = v___x_748_;
goto v___jp_720_;
}
else
{
lean_dec(v_numParams_711_);
v_lower_721_ = v___x_712_;
v_upper_722_ = v___x_748_;
goto v___jp_720_;
}
v___jp_720_:
{
lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; 
v___x_723_ = l_Array_toSubarray___redArg(v_params_713_, v_lower_721_, v_upper_722_);
v___x_724_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1___redArg___closed__0));
v___x_725_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1___redArg(v___x_723_, v___x_724_, v___y_715_, v___y_716_, v___y_717_, v___y_718_);
if (lean_obj_tag(v___x_725_) == 0)
{
lean_object* v_a_726_; lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_739_; 
v_a_726_ = lean_ctor_get(v___x_725_, 0);
v_isSharedCheck_739_ = !lean_is_exclusive(v___x_725_);
if (v_isSharedCheck_739_ == 0)
{
v___x_728_ = v___x_725_;
v_isShared_729_ = v_isSharedCheck_739_;
goto v_resetjp_727_;
}
else
{
lean_inc(v_a_726_);
lean_dec(v___x_725_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_739_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
lean_object* v_fst_730_; 
v_fst_730_ = lean_ctor_get(v_a_726_, 0);
lean_inc(v_fst_730_);
lean_dec(v_a_726_);
if (lean_obj_tag(v_fst_730_) == 0)
{
lean_object* v___x_731_; lean_object* v___x_733_; 
v___x_731_ = lean_box(v___x_710_);
if (v_isShared_729_ == 0)
{
lean_ctor_set(v___x_728_, 0, v___x_731_);
v___x_733_ = v___x_728_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v___x_731_);
v___x_733_ = v_reuseFailAlloc_734_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
return v___x_733_;
}
}
else
{
lean_object* v_val_735_; lean_object* v___x_737_; 
v_val_735_ = lean_ctor_get(v_fst_730_, 0);
lean_inc(v_val_735_);
lean_dec_ref_known(v_fst_730_, 1);
if (v_isShared_729_ == 0)
{
lean_ctor_set(v___x_728_, 0, v_val_735_);
v___x_737_ = v___x_728_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v_val_735_);
v___x_737_ = v_reuseFailAlloc_738_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
return v___x_737_;
}
}
}
}
else
{
lean_object* v_a_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_747_; 
v_a_740_ = lean_ctor_get(v___x_725_, 0);
v_isSharedCheck_747_ = !lean_is_exclusive(v___x_725_);
if (v_isSharedCheck_747_ == 0)
{
v___x_742_ = v___x_725_;
v_isShared_743_ = v_isSharedCheck_747_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_a_740_);
lean_dec(v___x_725_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_747_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v___x_745_; 
if (v_isShared_743_ == 0)
{
v___x_745_ = v___x_742_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v_a_740_);
v___x_745_ = v_reuseFailAlloc_746_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
return v___x_745_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___lam__0___boxed(lean_object* v___x_750_, lean_object* v_numParams_751_, lean_object* v___x_752_, lean_object* v_params_753_, lean_object* v_x_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_){
_start:
{
uint8_t v___x_7255__boxed_760_; lean_object* v_res_761_; 
v___x_7255__boxed_760_ = lean_unbox(v___x_750_);
v_res_761_ = l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___lam__0(v___x_7255__boxed_760_, v_numParams_751_, v___x_752_, v_params_753_, v_x_754_, v___y_755_, v___y_756_, v___y_757_, v___y_758_);
lean_dec(v___y_758_);
lean_dec_ref(v___y_757_);
lean_dec(v___y_756_);
lean_dec_ref(v___y_755_);
lean_dec_ref(v_x_754_);
return v_res_761_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_765_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__2));
v___x_766_ = lean_unsigned_to_nat(58u);
v___x_767_ = lean_unsigned_to_nat(93u);
v___x_768_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__1));
v___x_769_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__0));
v___x_770_ = l_mkPanicMessageWithDecl(v___x_769_, v___x_768_, v___x_767_, v___x_766_, v___x_765_);
return v___x_770_;
}
}
static uint64_t _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__5(void){
_start:
{
lean_object* v___x_777_; uint64_t v___x_778_; 
v___x_777_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__4));
v___x_778_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_777_);
return v___x_778_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__6(void){
_start:
{
uint64_t v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_779_ = lean_uint64_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__5, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__5_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__5);
v___x_780_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__4));
v___x_781_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_781_, 0, v___x_780_);
lean_ctor_set_uint64(v___x_781_, sizeof(void*)*1, v___x_779_);
return v___x_781_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__7(void){
_start:
{
lean_object* v___x_782_; lean_object* v___x_783_; 
v___x_782_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2_spec__2___redArg___closed__0);
v___x_783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_783_, 0, v___x_782_);
return v___x_783_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__8(void){
_start:
{
lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; 
v___x_784_ = lean_unsigned_to_nat(32u);
v___x_785_ = lean_mk_empty_array_with_capacity(v___x_784_);
v___x_786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_786_, 0, v___x_785_);
return v___x_786_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__9(void){
_start:
{
size_t v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; 
v___x_787_ = ((size_t)5ULL);
v___x_788_ = lean_unsigned_to_nat(0u);
v___x_789_ = lean_unsigned_to_nat(32u);
v___x_790_ = lean_mk_empty_array_with_capacity(v___x_789_);
v___x_791_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__8, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__8_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__8);
v___x_792_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_792_, 0, v___x_791_);
lean_ctor_set(v___x_792_, 1, v___x_790_);
lean_ctor_set(v___x_792_, 2, v___x_788_);
lean_ctor_set(v___x_792_, 3, v___x_788_);
lean_ctor_set_usize(v___x_792_, 4, v___x_787_);
return v___x_792_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__10(void){
_start:
{
lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; 
v___x_793_ = lean_box(1);
v___x_794_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__9, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__9_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__9);
v___x_795_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__7, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__7_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__7);
v___x_796_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_796_, 0, v___x_795_);
lean_ctor_set(v___x_796_, 1, v___x_794_);
lean_ctor_set(v___x_796_, 2, v___x_793_);
return v___x_796_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__12(void){
_start:
{
uint8_t v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; uint8_t v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; 
v___x_799_ = 1;
v___x_800_ = lean_unsigned_to_nat(0u);
v___x_801_ = lean_box(0);
v___x_802_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__11));
v___x_803_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__10, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__10_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__10);
v___x_804_ = lean_box(1);
v___x_805_ = 0;
v___x_806_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__6, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__6_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__6);
v___x_807_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_807_, 0, v___x_806_);
lean_ctor_set(v___x_807_, 1, v___x_804_);
lean_ctor_set(v___x_807_, 2, v___x_803_);
lean_ctor_set(v___x_807_, 3, v___x_802_);
lean_ctor_set(v___x_807_, 4, v___x_801_);
lean_ctor_set(v___x_807_, 5, v___x_800_);
lean_ctor_set(v___x_807_, 6, v___x_801_);
lean_ctor_set_uint8(v___x_807_, sizeof(void*)*7, v___x_805_);
lean_ctor_set_uint8(v___x_807_, sizeof(void*)*7 + 1, v___x_805_);
lean_ctor_set_uint8(v___x_807_, sizeof(void*)*7 + 2, v___x_805_);
lean_ctor_set_uint8(v___x_807_, sizeof(void*)*7 + 3, v___x_799_);
return v___x_807_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__13(void){
_start:
{
lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
v___x_808_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__7, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__7_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__7);
v___x_809_ = lean_unsigned_to_nat(0u);
v___x_810_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_810_, 0, v___x_809_);
lean_ctor_set(v___x_810_, 1, v___x_809_);
lean_ctor_set(v___x_810_, 2, v___x_809_);
lean_ctor_set(v___x_810_, 3, v___x_809_);
lean_ctor_set(v___x_810_, 4, v___x_808_);
lean_ctor_set(v___x_810_, 5, v___x_808_);
lean_ctor_set(v___x_810_, 6, v___x_808_);
lean_ctor_set(v___x_810_, 7, v___x_808_);
lean_ctor_set(v___x_810_, 8, v___x_808_);
lean_ctor_set(v___x_810_, 9, v___x_808_);
lean_ctor_set(v___x_810_, 10, v___x_808_);
return v___x_810_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__14(void){
_start:
{
lean_object* v___x_811_; 
v___x_811_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2_spec__2___redArg();
return v___x_811_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__15(void){
_start:
{
lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_812_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__7, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__7_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__7);
v___x_813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_813_, 0, v___x_812_);
lean_ctor_set(v___x_813_, 1, v___x_812_);
return v___x_813_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__16(void){
_start:
{
lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; 
v___x_814_ = lean_unsigned_to_nat(0u);
v___x_815_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__7, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__7_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__7);
v___x_816_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_816_, 0, v___x_815_);
lean_ctor_set(v___x_816_, 1, v___x_815_);
lean_ctor_set(v___x_816_, 2, v___x_814_);
return v___x_816_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__17(void){
_start:
{
lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; 
v___x_817_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__16, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__16_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__16);
v___x_818_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__15, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__15_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__15);
v___x_819_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__7, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__7_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__7);
v___x_820_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__14, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__14_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__14);
v___x_821_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_821_, 0, v___x_820_);
lean_ctor_set(v___x_821_, 1, v___x_819_);
lean_ctor_set(v___x_821_, 2, v___x_818_);
lean_ctor_set(v___x_821_, 3, v___x_819_);
lean_ctor_set(v___x_821_, 4, v___x_819_);
lean_ctor_set(v___x_821_, 5, v___x_819_);
lean_ctor_set(v___x_821_, 6, v___x_819_);
lean_ctor_set(v___x_821_, 7, v___x_817_);
return v___x_821_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__18(void){
_start:
{
lean_object* v___x_822_; lean_object* v___x_823_; 
v___x_822_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__7, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__7_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__7);
v___x_823_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_823_, 0, v___x_822_);
lean_ctor_set(v___x_823_, 1, v___x_822_);
lean_ctor_set(v___x_823_, 2, v___x_822_);
lean_ctor_set(v___x_823_, 3, v___x_822_);
lean_ctor_set(v___x_823_, 4, v___x_822_);
return v___x_823_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__19(void){
_start:
{
lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; 
v___x_824_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__18, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__18_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__18);
v___x_825_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__9, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__9_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__9);
v___x_826_ = lean_box(1);
v___x_827_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__17, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__17_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__17);
v___x_828_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__13, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__13_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__13);
v___x_829_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_829_, 0, v___x_828_);
lean_ctor_set(v___x_829_, 1, v___x_827_);
lean_ctor_set(v___x_829_, 2, v___x_826_);
lean_ctor_set(v___x_829_, 3, v___x_825_);
lean_ctor_set(v___x_829_, 4, v___x_824_);
return v___x_829_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg(lean_object* v___x_830_, lean_object* v_as_x27_831_, lean_object* v_b_832_, lean_object* v___y_833_, lean_object* v___y_834_){
_start:
{
if (lean_obj_tag(v_as_x27_831_) == 0)
{
lean_object* v___x_836_; 
lean_dec_ref(v___x_830_);
v___x_836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_836_, 0, v_b_832_);
return v___x_836_;
}
else
{
lean_object* v_head_837_; lean_object* v_tail_838_; lean_object* v___y_840_; lean_object* v___y_841_; uint8_t v___x_853_; lean_object* v___x_854_; 
v_head_837_ = lean_ctor_get(v_as_x27_831_, 0);
v_tail_838_ = lean_ctor_get(v_as_x27_831_, 1);
v___x_853_ = 0;
lean_inc(v_head_837_);
lean_inc_ref(v___x_830_);
v___x_854_ = l_Lean_Environment_find_x3f(v___x_830_, v_head_837_, v___x_853_);
if (lean_obj_tag(v___x_854_) == 1)
{
lean_object* v_val_855_; 
v_val_855_ = lean_ctor_get(v___x_854_, 0);
lean_inc(v_val_855_);
lean_dec_ref_known(v___x_854_, 1);
if (lean_obj_tag(v_val_855_) == 6)
{
lean_object* v_val_856_; lean_object* v_toConstantVal_857_; lean_object* v_numParams_858_; lean_object* v_type_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___f_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
v_val_856_ = lean_ctor_get(v_val_855_, 0);
lean_inc_ref(v_val_856_);
lean_dec_ref_known(v_val_855_, 1);
v_toConstantVal_857_ = lean_ctor_get(v_val_856_, 0);
lean_inc_ref(v_toConstantVal_857_);
v_numParams_858_ = lean_ctor_get(v_val_856_, 3);
lean_inc(v_numParams_858_);
lean_dec_ref(v_val_856_);
v_type_859_ = lean_ctor_get(v_toConstantVal_857_, 2);
lean_inc_ref(v_type_859_);
lean_dec_ref(v_toConstantVal_857_);
v___x_860_ = lean_unsigned_to_nat(0u);
v___x_861_ = lean_box(v___x_853_);
v___f_862_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_862_, 0, v___x_861_);
lean_closure_set(v___f_862_, 1, v_numParams_858_);
lean_closure_set(v___f_862_, 2, v___x_860_);
v___x_863_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__12, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__12_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__12);
v___x_864_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__19, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__19_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__19);
v___x_865_ = lean_st_mk_ref(v___x_864_);
v___x_866_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg(v_type_859_, v___f_862_, v___x_853_, v___x_863_, v___x_865_, v___y_833_, v___y_834_);
if (lean_obj_tag(v___x_866_) == 0)
{
lean_object* v_a_867_; lean_object* v___x_868_; uint8_t v___x_869_; 
v_a_867_ = lean_ctor_get(v___x_866_, 0);
lean_inc(v_a_867_);
lean_dec_ref_known(v___x_866_, 1);
v___x_868_ = lean_st_ref_get(v___x_865_);
lean_dec(v___x_865_);
lean_dec(v___x_868_);
v___x_869_ = lean_unbox(v_a_867_);
lean_dec(v_a_867_);
if (v___x_869_ == 0)
{
lean_object* v___x_870_; lean_object* v___x_871_; 
v___x_870_ = lean_unsigned_to_nat(1u);
v___x_871_ = lean_nat_add(v_b_832_, v___x_870_);
lean_dec(v_b_832_);
v_as_x27_831_ = v_tail_838_;
v_b_832_ = v___x_871_;
goto _start;
}
else
{
v_as_x27_831_ = v_tail_838_;
goto _start;
}
}
else
{
lean_object* v_a_874_; lean_object* v___x_876_; uint8_t v_isShared_877_; uint8_t v_isSharedCheck_881_; 
lean_dec(v___x_865_);
lean_dec(v_b_832_);
lean_dec_ref(v___x_830_);
v_a_874_ = lean_ctor_get(v___x_866_, 0);
v_isSharedCheck_881_ = !lean_is_exclusive(v___x_866_);
if (v_isSharedCheck_881_ == 0)
{
v___x_876_ = v___x_866_;
v_isShared_877_ = v_isSharedCheck_881_;
goto v_resetjp_875_;
}
else
{
lean_inc(v_a_874_);
lean_dec(v___x_866_);
v___x_876_ = lean_box(0);
v_isShared_877_ = v_isSharedCheck_881_;
goto v_resetjp_875_;
}
v_resetjp_875_:
{
lean_object* v___x_879_; 
if (v_isShared_877_ == 0)
{
v___x_879_ = v___x_876_;
goto v_reusejp_878_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v_a_874_);
v___x_879_ = v_reuseFailAlloc_880_;
goto v_reusejp_878_;
}
v_reusejp_878_:
{
return v___x_879_;
}
}
}
}
else
{
lean_dec(v_val_855_);
v___y_840_ = v___y_833_;
v___y_841_ = v___y_834_;
goto v___jp_839_;
}
}
else
{
lean_dec(v___x_854_);
v___y_840_ = v___y_833_;
v___y_841_ = v___y_834_;
goto v___jp_839_;
}
v___jp_839_:
{
lean_object* v___x_842_; lean_object* v___x_843_; 
v___x_842_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__3, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__3_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__3);
v___x_843_ = l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__0(v___x_842_, v___y_840_, v___y_841_);
if (lean_obj_tag(v___x_843_) == 0)
{
lean_dec_ref_known(v___x_843_, 1);
v_as_x27_831_ = v_tail_838_;
goto _start;
}
else
{
lean_object* v_a_845_; lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_852_; 
lean_dec(v_b_832_);
lean_dec_ref(v___x_830_);
v_a_845_ = lean_ctor_get(v___x_843_, 0);
v_isSharedCheck_852_ = !lean_is_exclusive(v___x_843_);
if (v_isSharedCheck_852_ == 0)
{
v___x_847_ = v___x_843_;
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
else
{
lean_inc(v_a_845_);
lean_dec(v___x_843_);
v___x_847_ = lean_box(0);
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
v_resetjp_846_:
{
lean_object* v___x_850_; 
if (v_isShared_848_ == 0)
{
v___x_850_ = v___x_847_;
goto v_reusejp_849_;
}
else
{
lean_object* v_reuseFailAlloc_851_; 
v_reuseFailAlloc_851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_851_, 0, v_a_845_);
v___x_850_ = v_reuseFailAlloc_851_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
return v___x_850_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___boxed(lean_object* v___x_882_, lean_object* v_as_x27_883_, lean_object* v_b_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_){
_start:
{
lean_object* v_res_888_; 
v_res_888_ = l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg(v___x_882_, v_as_x27_883_, v_b_884_, v___y_885_, v___y_886_);
lean_dec(v___y_886_);
lean_dec_ref(v___y_885_);
lean_dec(v_as_x27_883_);
return v_res_888_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__2(void){
_start:
{
lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; 
v___x_892_ = lean_box(0);
v___x_893_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__1));
v___x_894_ = l_Lean_Expr_const___override(v___x_893_, v___x_892_);
return v___x_894_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType(lean_object* v_name_895_, lean_object* v_a_896_, lean_object* v_a_897_){
_start:
{
lean_object* v___x_902_; 
v___x_902_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f(v_name_895_);
if (lean_obj_tag(v___x_902_) == 1)
{
lean_object* v_val_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_910_; 
lean_dec(v_name_895_);
v_val_903_ = lean_ctor_get(v___x_902_, 0);
v_isSharedCheck_910_ = !lean_is_exclusive(v___x_902_);
if (v_isSharedCheck_910_ == 0)
{
v___x_905_ = v___x_902_;
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
else
{
lean_inc(v_val_903_);
lean_dec(v___x_902_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
lean_object* v___x_908_; 
if (v_isShared_906_ == 0)
{
lean_ctor_set_tag(v___x_905_, 0);
v___x_908_ = v___x_905_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v_val_903_);
v___x_908_ = v_reuseFailAlloc_909_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
return v___x_908_;
}
}
}
else
{
lean_object* v___x_911_; lean_object* v_env_912_; uint8_t v___x_913_; lean_object* v___x_914_; 
lean_dec(v___x_902_);
v___x_911_ = lean_st_ref_get(v_a_897_);
v_env_912_ = lean_ctor_get(v___x_911_, 0);
lean_inc_ref_n(v_env_912_, 2);
lean_dec(v___x_911_);
v___x_913_ = 0;
v___x_914_ = l_Lean_Environment_find_x3f(v_env_912_, v_name_895_, v___x_913_);
if (lean_obj_tag(v___x_914_) == 1)
{
lean_object* v_val_915_; 
v_val_915_ = lean_ctor_get(v___x_914_, 0);
lean_inc(v_val_915_);
lean_dec_ref_known(v___x_914_, 1);
if (lean_obj_tag(v_val_915_) == 5)
{
lean_object* v_val_916_; lean_object* v_ctors_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; 
v_val_916_ = lean_ctor_get(v_val_915_, 0);
lean_inc_ref(v_val_916_);
lean_dec_ref_known(v_val_915_, 1);
v_ctors_917_ = lean_ctor_get(v_val_916_, 4);
lean_inc(v_ctors_917_);
lean_dec_ref(v_val_916_);
v___x_918_ = l_List_lengthTR___redArg(v_ctors_917_);
v___x_919_ = lean_unsigned_to_nat(0u);
v___x_920_ = l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg(v_env_912_, v_ctors_917_, v___x_919_, v_a_896_, v_a_897_);
lean_dec(v_ctors_917_);
if (lean_obj_tag(v___x_920_) == 0)
{
lean_object* v_a_921_; lean_object* v___x_923_; uint8_t v_isShared_924_; uint8_t v_isSharedCheck_939_; 
v_a_921_ = lean_ctor_get(v___x_920_, 0);
v_isSharedCheck_939_ = !lean_is_exclusive(v___x_920_);
if (v_isSharedCheck_939_ == 0)
{
v___x_923_ = v___x_920_;
v_isShared_924_ = v_isSharedCheck_939_;
goto v_resetjp_922_;
}
else
{
lean_inc(v_a_921_);
lean_dec(v___x_920_);
v___x_923_ = lean_box(0);
v_isShared_924_ = v_isSharedCheck_939_;
goto v_resetjp_922_;
}
v_resetjp_922_:
{
uint8_t v___x_925_; 
v___x_925_ = lean_nat_dec_eq(v_a_921_, v___x_918_);
if (v___x_925_ == 0)
{
uint8_t v___x_926_; 
lean_dec(v___x_918_);
v___x_926_ = lean_nat_dec_eq(v_a_921_, v___x_919_);
lean_dec(v_a_921_);
if (v___x_926_ == 0)
{
lean_object* v___x_927_; lean_object* v___x_929_; 
v___x_927_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12);
if (v_isShared_924_ == 0)
{
lean_ctor_set(v___x_923_, 0, v___x_927_);
v___x_929_ = v___x_923_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v___x_927_);
v___x_929_ = v_reuseFailAlloc_930_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
return v___x_929_;
}
}
else
{
lean_object* v___x_931_; lean_object* v___x_933_; 
v___x_931_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__2, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__2);
if (v_isShared_924_ == 0)
{
lean_ctor_set(v___x_923_, 0, v___x_931_);
v___x_933_ = v___x_923_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v___x_931_);
v___x_933_ = v_reuseFailAlloc_934_;
goto v_reusejp_932_;
}
v_reusejp_932_:
{
return v___x_933_;
}
}
}
else
{
lean_object* v___x_935_; lean_object* v___x_937_; 
lean_dec(v_a_921_);
v___x_935_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum(v___x_918_);
lean_dec(v___x_918_);
if (v_isShared_924_ == 0)
{
lean_ctor_set(v___x_923_, 0, v___x_935_);
v___x_937_ = v___x_923_;
goto v_reusejp_936_;
}
else
{
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_938_, 0, v___x_935_);
v___x_937_ = v_reuseFailAlloc_938_;
goto v_reusejp_936_;
}
v_reusejp_936_:
{
return v___x_937_;
}
}
}
}
else
{
lean_object* v_a_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_947_; 
lean_dec(v___x_918_);
v_a_940_ = lean_ctor_get(v___x_920_, 0);
v_isSharedCheck_947_ = !lean_is_exclusive(v___x_920_);
if (v_isSharedCheck_947_ == 0)
{
v___x_942_ = v___x_920_;
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_a_940_);
lean_dec(v___x_920_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v___x_945_; 
if (v_isShared_943_ == 0)
{
v___x_945_ = v___x_942_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v_a_940_);
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
lean_dec(v_val_915_);
lean_dec_ref(v_env_912_);
goto v___jp_899_;
}
}
else
{
lean_dec(v___x_914_);
lean_dec_ref(v_env_912_);
goto v___jp_899_;
}
}
v___jp_899_:
{
lean_object* v___x_900_; lean_object* v___x_901_; 
v___x_900_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12);
v___x_901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_901_, 0, v___x_900_);
return v___x_901_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___boxed(lean_object* v_name_948_, lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_){
_start:
{
lean_object* v_res_952_; 
v_res_952_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType(v_name_948_, v_a_949_, v_a_950_);
lean_dec(v_a_950_);
lean_dec_ref(v_a_949_);
return v_res_952_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1(lean_object* v_inst_953_, lean_object* v_R_954_, lean_object* v_a_955_, lean_object* v_b_956_, lean_object* v_c_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_){
_start:
{
lean_object* v___x_963_; 
v___x_963_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1___redArg(v_a_955_, v_b_956_, v___y_958_, v___y_959_, v___y_960_, v___y_961_);
return v___x_963_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1___boxed(lean_object* v_inst_964_, lean_object* v_R_965_, lean_object* v_a_966_, lean_object* v_b_967_, lean_object* v_c_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_){
_start:
{
lean_object* v_res_974_; 
v_res_974_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__1(v_inst_964_, v_R_965_, v_a_966_, v_b_967_, v_c_968_, v___y_969_, v___y_970_, v___y_971_, v___y_972_);
lean_dec(v___y_972_);
lean_dec_ref(v___y_971_);
lean_dec(v___y_970_);
lean_dec_ref(v___y_969_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2_spec__2(lean_object* v_00_u03b2_975_){
_start:
{
lean_object* v___x_976_; 
v___x_976_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__14, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__14_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__14);
return v___x_976_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2___redArg(){
_start:
{
lean_object* v___x_978_; 
v___x_978_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__14, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__14_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__14);
return v___x_978_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2___redArg___boxed(lean_object* v___dummy_979_){
_start:
{
lean_object* v_res_980_; 
v_res_980_ = l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2___redArg();
return v_res_980_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2(lean_object* v_00_u03b2_981_){
_start:
{
lean_object* v___x_982_; 
v___x_982_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__14, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__14_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__14);
return v___x_982_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4(lean_object* v___x_983_, lean_object* v_as_984_, lean_object* v_as_x27_985_, lean_object* v_b_986_, lean_object* v_a_987_, lean_object* v___y_988_, lean_object* v___y_989_){
_start:
{
lean_object* v___x_991_; 
v___x_991_ = l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg(v___x_983_, v_as_x27_985_, v_b_986_, v___y_988_, v___y_989_);
return v___x_991_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___boxed(lean_object* v___x_992_, lean_object* v_as_993_, lean_object* v_as_x27_994_, lean_object* v_b_995_, lean_object* v_a_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_){
_start:
{
lean_object* v_res_1000_; 
v_res_1000_ = l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4(v___x_992_, v_as_993_, v_as_x27_994_, v_b_995_, v_a_996_, v___y_997_, v___y_998_);
lean_dec(v___y_998_);
lean_dec_ref(v___y_997_);
lean_dec(v_as_x27_994_);
lean_dec(v_as_993_);
return v_res_1000_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_setImpureType___closed__0(void){
_start:
{
lean_object* v___x_1001_; lean_object* v___x_1002_; 
v___x_1001_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2_spec__2___redArg___closed__0);
v___x_1002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1002_, 0, v___x_1001_);
return v___x_1002_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_setImpureType___closed__1(void){
_start:
{
lean_object* v___x_1003_; lean_object* v___x_1004_; 
v___x_1003_ = lean_obj_once(&l_Lean_Compiler_LCNF_setImpureType___closed__0, &l_Lean_Compiler_LCNF_setImpureType___closed__0_once, _init_l_Lean_Compiler_LCNF_setImpureType___closed__0);
v___x_1004_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1004_, 0, v___x_1003_);
lean_ctor_set(v___x_1004_, 1, v___x_1003_);
return v___x_1004_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setImpureType(lean_object* v_name_1005_, lean_object* v_a_1006_, lean_object* v_a_1007_){
_start:
{
lean_object* v___x_1012_; 
v___x_1012_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f(v_name_1005_);
if (lean_obj_tag(v___x_1012_) == 0)
{
lean_object* v___x_1013_; lean_object* v_env_1014_; lean_object* v___x_1015_; lean_object* v_toEnvExtension_1016_; lean_object* v_asyncMode_1017_; uint8_t v___x_1018_; lean_object* v___x_1019_; 
v___x_1013_ = lean_st_ref_get(v_a_1007_);
v_env_1014_ = lean_ctor_get(v___x_1013_, 0);
lean_inc_ref(v_env_1014_);
lean_dec(v___x_1013_);
v___x_1015_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeExt;
v_toEnvExtension_1016_ = lean_ctor_get(v___x_1015_, 0);
v_asyncMode_1017_ = lean_ctor_get(v_toEnvExtension_1016_, 2);
v___x_1018_ = 0;
lean_inc(v_name_1005_);
v___x_1019_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_1015_, v_env_1014_, v_name_1005_, v_asyncMode_1017_, v___x_1018_);
if (lean_obj_tag(v___x_1019_) == 0)
{
uint8_t v___x_1020_; lean_object* v___x_1021_; 
v___x_1020_ = 0;
lean_inc(v_name_1005_);
v___x_1021_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType(v_name_1005_, v_a_1006_, v_a_1007_);
if (lean_obj_tag(v___x_1021_) == 0)
{
lean_object* v_a_1022_; lean_object* v___x_1024_; uint8_t v_isShared_1025_; uint8_t v_isSharedCheck_1051_; 
v_a_1022_ = lean_ctor_get(v___x_1021_, 0);
v_isSharedCheck_1051_ = !lean_is_exclusive(v___x_1021_);
if (v_isSharedCheck_1051_ == 0)
{
v___x_1024_ = v___x_1021_;
v_isShared_1025_ = v_isSharedCheck_1051_;
goto v_resetjp_1023_;
}
else
{
lean_inc(v_a_1022_);
lean_dec(v___x_1021_);
v___x_1024_ = lean_box(0);
v_isShared_1025_ = v_isSharedCheck_1051_;
goto v_resetjp_1023_;
}
v_resetjp_1023_:
{
lean_object* v___x_1026_; lean_object* v_env_1027_; lean_object* v_nextMacroScope_1028_; lean_object* v_ngen_1029_; lean_object* v_auxDeclNGen_1030_; lean_object* v_traceState_1031_; lean_object* v_recordedDeps_1032_; lean_object* v_messages_1033_; lean_object* v_infoState_1034_; lean_object* v_snapshotTasks_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1049_; 
v___x_1026_ = lean_st_ref_take(v_a_1007_);
v_env_1027_ = lean_ctor_get(v___x_1026_, 0);
v_nextMacroScope_1028_ = lean_ctor_get(v___x_1026_, 1);
v_ngen_1029_ = lean_ctor_get(v___x_1026_, 2);
v_auxDeclNGen_1030_ = lean_ctor_get(v___x_1026_, 3);
v_traceState_1031_ = lean_ctor_get(v___x_1026_, 4);
v_recordedDeps_1032_ = lean_ctor_get(v___x_1026_, 6);
v_messages_1033_ = lean_ctor_get(v___x_1026_, 7);
v_infoState_1034_ = lean_ctor_get(v___x_1026_, 8);
v_snapshotTasks_1035_ = lean_ctor_get(v___x_1026_, 9);
v_isSharedCheck_1049_ = !lean_is_exclusive(v___x_1026_);
if (v_isSharedCheck_1049_ == 0)
{
lean_object* v_unused_1050_; 
v_unused_1050_ = lean_ctor_get(v___x_1026_, 5);
lean_dec(v_unused_1050_);
v___x_1037_ = v___x_1026_;
v_isShared_1038_ = v_isSharedCheck_1049_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_snapshotTasks_1035_);
lean_inc(v_infoState_1034_);
lean_inc(v_messages_1033_);
lean_inc(v_recordedDeps_1032_);
lean_inc(v_traceState_1031_);
lean_inc(v_auxDeclNGen_1030_);
lean_inc(v_ngen_1029_);
lean_inc(v_nextMacroScope_1028_);
lean_inc(v_env_1027_);
lean_dec(v___x_1026_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1049_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1043_; 
v___x_1039_ = lean_box(0);
v___x_1040_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_1015_, v_env_1027_, v_name_1005_, v_a_1022_, v___x_1020_);
v___x_1041_ = lean_obj_once(&l_Lean_Compiler_LCNF_setImpureType___closed__1, &l_Lean_Compiler_LCNF_setImpureType___closed__1_once, _init_l_Lean_Compiler_LCNF_setImpureType___closed__1);
if (v_isShared_1038_ == 0)
{
lean_ctor_set(v___x_1037_, 5, v___x_1041_);
lean_ctor_set(v___x_1037_, 0, v___x_1040_);
v___x_1043_ = v___x_1037_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1048_; 
v_reuseFailAlloc_1048_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1048_, 0, v___x_1040_);
lean_ctor_set(v_reuseFailAlloc_1048_, 1, v_nextMacroScope_1028_);
lean_ctor_set(v_reuseFailAlloc_1048_, 2, v_ngen_1029_);
lean_ctor_set(v_reuseFailAlloc_1048_, 3, v_auxDeclNGen_1030_);
lean_ctor_set(v_reuseFailAlloc_1048_, 4, v_traceState_1031_);
lean_ctor_set(v_reuseFailAlloc_1048_, 5, v___x_1041_);
lean_ctor_set(v_reuseFailAlloc_1048_, 6, v_recordedDeps_1032_);
lean_ctor_set(v_reuseFailAlloc_1048_, 7, v_messages_1033_);
lean_ctor_set(v_reuseFailAlloc_1048_, 8, v_infoState_1034_);
lean_ctor_set(v_reuseFailAlloc_1048_, 9, v_snapshotTasks_1035_);
v___x_1043_ = v_reuseFailAlloc_1048_;
goto v_reusejp_1042_;
}
v_reusejp_1042_:
{
lean_object* v___x_1044_; lean_object* v___x_1046_; 
v___x_1044_ = lean_st_ref_put(v_a_1007_, v___x_1043_);
if (v_isShared_1025_ == 0)
{
lean_ctor_set(v___x_1024_, 0, v___x_1039_);
v___x_1046_ = v___x_1024_;
goto v_reusejp_1045_;
}
else
{
lean_object* v_reuseFailAlloc_1047_; 
v_reuseFailAlloc_1047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1047_, 0, v___x_1039_);
v___x_1046_ = v_reuseFailAlloc_1047_;
goto v_reusejp_1045_;
}
v_reusejp_1045_:
{
return v___x_1046_;
}
}
}
}
}
else
{
lean_object* v_a_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1059_; 
lean_dec(v_name_1005_);
v_a_1052_ = lean_ctor_get(v___x_1021_, 0);
v_isSharedCheck_1059_ = !lean_is_exclusive(v___x_1021_);
if (v_isSharedCheck_1059_ == 0)
{
v___x_1054_ = v___x_1021_;
v_isShared_1055_ = v_isSharedCheck_1059_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_a_1052_);
lean_dec(v___x_1021_);
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
v_reuseFailAlloc_1058_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_dec_ref_known(v___x_1019_, 1);
lean_dec(v_name_1005_);
goto v___jp_1009_;
}
}
else
{
lean_dec_ref_known(v___x_1012_, 1);
lean_dec(v_name_1005_);
goto v___jp_1009_;
}
v___jp_1009_:
{
lean_object* v___x_1010_; lean_object* v___x_1011_; 
v___x_1010_ = lean_box(0);
v___x_1011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1011_, 0, v___x_1010_);
return v___x_1011_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setImpureType___boxed(lean_object* v_name_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_, lean_object* v_a_1063_){
_start:
{
lean_object* v_res_1064_; 
v_res_1064_ = l_Lean_Compiler_LCNF_setImpureType(v_name_1060_, v_a_1061_, v_a_1062_);
lean_dec(v_a_1062_);
lean_dec_ref(v_a_1061_);
return v_res_1064_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1065_; lean_object* v___x_1066_; 
v___x_1065_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__2_spec__2___redArg___closed__0);
v___x_1066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1066_, 0, v___x_1065_);
return v___x_1066_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; 
v___x_1067_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__0);
v___x_1068_ = lean_unsigned_to_nat(0u);
v___x_1069_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1069_, 0, v___x_1068_);
lean_ctor_set(v___x_1069_, 1, v___x_1068_);
lean_ctor_set(v___x_1069_, 2, v___x_1068_);
lean_ctor_set(v___x_1069_, 3, v___x_1068_);
lean_ctor_set(v___x_1069_, 4, v___x_1067_);
lean_ctor_set(v___x_1069_, 5, v___x_1067_);
lean_ctor_set(v___x_1069_, 6, v___x_1067_);
lean_ctor_set(v___x_1069_, 7, v___x_1067_);
lean_ctor_set(v___x_1069_, 8, v___x_1067_);
lean_ctor_set(v___x_1069_, 9, v___x_1067_);
lean_ctor_set(v___x_1069_, 10, v___x_1067_);
return v___x_1069_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; 
v___x_1070_ = lean_box(1);
v___x_1071_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__9, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__9_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__9);
v___x_1072_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__0);
v___x_1073_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1072_);
lean_ctor_set(v___x_1073_, 1, v___x_1071_);
lean_ctor_set(v___x_1073_, 2, v___x_1070_);
return v___x_1073_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0(lean_object* v_msgData_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_){
_start:
{
lean_object* v___x_1078_; lean_object* v_toCold_1079_; lean_object* v_env_1080_; lean_object* v_options_1081_; uint8_t v___x_1082_; lean_object* v_env_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; 
v___x_1078_ = lean_st_ref_get(v___y_1076_);
v_toCold_1079_ = lean_ctor_get(v___y_1075_, 0);
v_env_1080_ = lean_ctor_get(v___x_1078_, 0);
lean_inc_ref(v_env_1080_);
lean_dec(v___x_1078_);
v_options_1081_ = lean_ctor_get(v_toCold_1079_, 2);
v___x_1082_ = 0;
v_env_1083_ = l_Lean_Environment_setRecordingDeps(v_env_1080_, v___x_1082_);
v___x_1084_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__1);
v___x_1085_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__2);
lean_inc_ref(v_options_1081_);
v___x_1086_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1086_, 0, v_env_1083_);
lean_ctor_set(v___x_1086_, 1, v___x_1084_);
lean_ctor_set(v___x_1086_, 2, v___x_1085_);
lean_ctor_set(v___x_1086_, 3, v_options_1081_);
v___x_1087_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1086_);
lean_ctor_set(v___x_1087_, 1, v_msgData_1074_);
v___x_1088_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1088_, 0, v___x_1087_);
return v___x_1088_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___boxed(lean_object* v_msgData_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_){
_start:
{
lean_object* v_res_1093_; 
v_res_1093_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0(v_msgData_1089_, v___y_1090_, v___y_1091_);
lean_dec(v___y_1091_);
lean_dec_ref(v___y_1090_);
return v_res_1093_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0___redArg(lean_object* v_msg_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_){
_start:
{
lean_object* v_ref_1098_; lean_object* v___x_1099_; lean_object* v_a_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1108_; 
v_ref_1098_ = lean_ctor_get(v___y_1095_, 2);
v___x_1099_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0(v_msg_1094_, v___y_1095_, v___y_1096_);
v_a_1100_ = lean_ctor_get(v___x_1099_, 0);
v_isSharedCheck_1108_ = !lean_is_exclusive(v___x_1099_);
if (v_isSharedCheck_1108_ == 0)
{
v___x_1102_ = v___x_1099_;
v_isShared_1103_ = v_isSharedCheck_1108_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_a_1100_);
lean_dec(v___x_1099_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1108_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v___x_1104_; lean_object* v___x_1106_; 
lean_inc(v_ref_1098_);
v___x_1104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1104_, 0, v_ref_1098_);
lean_ctor_set(v___x_1104_, 1, v_a_1100_);
if (v_isShared_1103_ == 0)
{
lean_ctor_set_tag(v___x_1102_, 1);
lean_ctor_set(v___x_1102_, 0, v___x_1104_);
v___x_1106_ = v___x_1102_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(1, 1, 0);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0___redArg___boxed(lean_object* v_msg_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_){
_start:
{
lean_object* v_res_1113_; 
v_res_1113_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0___redArg(v_msg_1109_, v___y_1110_, v___y_1111_);
lean_dec(v___y_1111_);
lean_dec_ref(v___y_1110_);
return v_res_1113_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_nameToImpureType___closed__1(void){
_start:
{
lean_object* v___x_1115_; lean_object* v___x_1116_; 
v___x_1115_ = ((lean_object*)(l_Lean_Compiler_LCNF_nameToImpureType___closed__0));
v___x_1116_ = l_Lean_stringToMessageData(v___x_1115_);
return v___x_1116_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_nameToImpureType___closed__3(void){
_start:
{
lean_object* v___x_1118_; lean_object* v___x_1119_; 
v___x_1118_ = ((lean_object*)(l_Lean_Compiler_LCNF_nameToImpureType___closed__2));
v___x_1119_ = l_Lean_stringToMessageData(v___x_1118_);
return v___x_1119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_nameToImpureType(lean_object* v_name_1120_, lean_object* v_a_1121_, lean_object* v_a_1122_){
_start:
{
lean_object* v___x_1127_; 
v___x_1127_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f(v_name_1120_);
if (lean_obj_tag(v___x_1127_) == 1)
{
lean_object* v_val_1128_; lean_object* v___x_1130_; uint8_t v_isShared_1131_; uint8_t v_isSharedCheck_1135_; 
lean_dec(v_name_1120_);
v_val_1128_ = lean_ctor_get(v___x_1127_, 0);
v_isSharedCheck_1135_ = !lean_is_exclusive(v___x_1127_);
if (v_isSharedCheck_1135_ == 0)
{
v___x_1130_ = v___x_1127_;
v_isShared_1131_ = v_isSharedCheck_1135_;
goto v_resetjp_1129_;
}
else
{
lean_inc(v_val_1128_);
lean_dec(v___x_1127_);
v___x_1130_ = lean_box(0);
v_isShared_1131_ = v_isSharedCheck_1135_;
goto v_resetjp_1129_;
}
v_resetjp_1129_:
{
lean_object* v___x_1133_; 
if (v_isShared_1131_ == 0)
{
lean_ctor_set_tag(v___x_1130_, 0);
v___x_1133_ = v___x_1130_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v_val_1128_);
v___x_1133_ = v_reuseFailAlloc_1134_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
return v___x_1133_;
}
}
}
else
{
lean_object* v___x_1136_; lean_object* v_env_1137_; uint8_t v___x_1138_; lean_object* v___x_1139_; 
lean_dec(v___x_1127_);
v___x_1136_ = lean_st_ref_get(v_a_1122_);
v_env_1137_ = lean_ctor_get(v___x_1136_, 0);
lean_inc_ref(v_env_1137_);
lean_dec(v___x_1136_);
v___x_1138_ = 0;
lean_inc(v_name_1120_);
v___x_1139_ = l_Lean_Environment_find_x3f(v_env_1137_, v_name_1120_, v___x_1138_);
if (lean_obj_tag(v___x_1139_) == 1)
{
lean_object* v_val_1140_; 
v_val_1140_ = lean_ctor_get(v___x_1139_, 0);
lean_inc(v_val_1140_);
lean_dec_ref_known(v___x_1139_, 1);
if (lean_obj_tag(v_val_1140_) == 5)
{
lean_object* v___x_1141_; lean_object* v_env_1142_; lean_object* v___x_1143_; lean_object* v_toEnvExtension_1144_; lean_object* v_asyncMode_1145_; uint8_t v___x_1146_; lean_object* v___x_1147_; 
lean_dec_ref_known(v_val_1140_, 1);
v___x_1141_ = lean_st_ref_get(v_a_1122_);
v_env_1142_ = lean_ctor_get(v___x_1141_, 0);
lean_inc_ref(v_env_1142_);
lean_dec(v___x_1141_);
v___x_1143_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeExt;
v_toEnvExtension_1144_ = lean_ctor_get(v___x_1143_, 0);
v_asyncMode_1145_ = lean_ctor_get(v_toEnvExtension_1144_, 2);
v___x_1146_ = 0;
lean_inc(v_name_1120_);
v___x_1147_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_1143_, v_env_1142_, v_name_1120_, v_asyncMode_1145_, v___x_1146_);
if (lean_obj_tag(v___x_1147_) == 1)
{
lean_object* v_val_1148_; lean_object* v___x_1150_; uint8_t v_isShared_1151_; uint8_t v_isSharedCheck_1155_; 
lean_dec(v_name_1120_);
v_val_1148_ = lean_ctor_get(v___x_1147_, 0);
v_isSharedCheck_1155_ = !lean_is_exclusive(v___x_1147_);
if (v_isSharedCheck_1155_ == 0)
{
v___x_1150_ = v___x_1147_;
v_isShared_1151_ = v_isSharedCheck_1155_;
goto v_resetjp_1149_;
}
else
{
lean_inc(v_val_1148_);
lean_dec(v___x_1147_);
v___x_1150_ = lean_box(0);
v_isShared_1151_ = v_isSharedCheck_1155_;
goto v_resetjp_1149_;
}
v_resetjp_1149_:
{
lean_object* v___x_1153_; 
if (v_isShared_1151_ == 0)
{
lean_ctor_set_tag(v___x_1150_, 0);
v___x_1153_ = v___x_1150_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v_val_1148_);
v___x_1153_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
return v___x_1153_;
}
}
}
else
{
lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; 
lean_dec(v___x_1147_);
v___x_1156_ = lean_obj_once(&l_Lean_Compiler_LCNF_nameToImpureType___closed__1, &l_Lean_Compiler_LCNF_nameToImpureType___closed__1_once, _init_l_Lean_Compiler_LCNF_nameToImpureType___closed__1);
v___x_1157_ = l_Lean_MessageData_ofName(v_name_1120_);
v___x_1158_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1158_, 0, v___x_1156_);
lean_ctor_set(v___x_1158_, 1, v___x_1157_);
v___x_1159_ = lean_obj_once(&l_Lean_Compiler_LCNF_nameToImpureType___closed__3, &l_Lean_Compiler_LCNF_nameToImpureType___closed__3_once, _init_l_Lean_Compiler_LCNF_nameToImpureType___closed__3);
v___x_1160_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1160_, 0, v___x_1158_);
lean_ctor_set(v___x_1160_, 1, v___x_1159_);
v___x_1161_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0___redArg(v___x_1160_, v_a_1121_, v_a_1122_);
return v___x_1161_;
}
}
else
{
lean_dec(v_val_1140_);
lean_dec(v_name_1120_);
goto v___jp_1124_;
}
}
else
{
lean_dec(v___x_1139_);
lean_dec(v_name_1120_);
goto v___jp_1124_;
}
}
v___jp_1124_:
{
lean_object* v___x_1125_; lean_object* v___x_1126_; 
v___x_1125_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12);
v___x_1126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1126_, 0, v___x_1125_);
return v___x_1126_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_nameToImpureType___boxed(lean_object* v_name_1162_, lean_object* v_a_1163_, lean_object* v_a_1164_, lean_object* v_a_1165_){
_start:
{
lean_object* v_res_1166_; 
v_res_1166_ = l_Lean_Compiler_LCNF_nameToImpureType(v_name_1162_, v_a_1163_, v_a_1164_);
lean_dec(v_a_1164_);
lean_dec_ref(v_a_1163_);
return v_res_1166_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0(lean_object* v_00_u03b1_1167_, lean_object* v_msg_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_){
_start:
{
lean_object* v___x_1172_; 
v___x_1172_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0___redArg(v_msg_1168_, v___y_1169_, v___y_1170_);
return v___x_1172_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0___boxed(lean_object* v_00_u03b1_1173_, lean_object* v_msg_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_){
_start:
{
lean_object* v_res_1178_; 
v_res_1178_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0(v_00_u03b1_1173_, v_msg_1174_, v___y_1175_, v___y_1176_);
lean_dec(v___y_1176_);
lean_dec_ref(v___y_1175_);
return v_res_1178_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_isAnyProducingType(lean_object* v_type_1180_){
_start:
{
switch(lean_obj_tag(v_type_1180_))
{
case 4:
{
lean_object* v_declName_1181_; 
v_declName_1181_ = lean_ctor_get(v_type_1180_, 0);
if (lean_obj_tag(v_declName_1181_) == 1)
{
lean_object* v_pre_1182_; 
v_pre_1182_ = lean_ctor_get(v_declName_1181_, 0);
if (lean_obj_tag(v_pre_1182_) == 0)
{
lean_object* v_str_1183_; lean_object* v___x_1184_; uint8_t v___x_1185_; 
v_str_1183_ = lean_ctor_get(v_declName_1181_, 1);
v___x_1184_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_isAnyProducingType___closed__0));
v___x_1185_ = lean_string_dec_eq(v_str_1183_, v___x_1184_);
return v___x_1185_;
}
else
{
uint8_t v___x_1186_; 
v___x_1186_ = 0;
return v___x_1186_;
}
}
else
{
uint8_t v___x_1187_; 
v___x_1187_ = 0;
return v___x_1187_;
}
}
case 7:
{
lean_object* v_body_1188_; 
v_body_1188_ = lean_ctor_get(v_type_1180_, 2);
v_type_1180_ = v_body_1188_;
goto _start;
}
default: 
{
uint8_t v___x_1190_; 
v___x_1190_ = 0;
return v___x_1190_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_isAnyProducingType___boxed(lean_object* v_type_1191_){
_start:
{
uint8_t v_res_1192_; lean_object* v_r_1193_; 
v_res_1192_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_isAnyProducingType(v_type_1191_);
lean_dec_ref(v_type_1191_);
v_r_1193_ = lean_box(v_res_1192_);
return v_r_1193_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_toImpureType_spec__1(lean_object* v_msg_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_){
_start:
{
lean_object* v___f_1198_; lean_object* v___x_783__overap_1199_; lean_object* v___x_1200_; 
v___f_1198_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__0___closed__0));
v___x_783__overap_1199_ = lean_panic_fn_borrowed(v___f_1198_, v_msg_1194_);
lean_inc(v___y_1196_);
lean_inc_ref(v___y_1195_);
v___x_1200_ = lean_apply_3(v___x_783__overap_1199_, v___y_1195_, v___y_1196_, lean_box(0));
return v___x_1200_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_toImpureType_spec__1___boxed(lean_object* v_msg_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_){
_start:
{
lean_object* v_res_1205_; 
v_res_1205_ = l_panic___at___00Lean_Compiler_LCNF_toImpureType_spec__1(v_msg_1201_, v___y_1202_, v___y_1203_);
lean_dec(v___y_1203_);
lean_dec_ref(v___y_1202_);
return v_res_1205_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_toImpureType___closed__1(void){
_start:
{
lean_object* v___x_1208_; lean_object* v_dummy_1209_; 
v___x_1208_ = lean_box(0);
v_dummy_1209_ = l_Lean_Expr_sort___override(v___x_1208_);
return v_dummy_1209_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_toImpureType___closed__3(void){
_start:
{
lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; 
v___x_1211_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__2));
v___x_1212_ = lean_unsigned_to_nat(41u);
v___x_1213_ = lean_unsigned_to_nat(139u);
v___x_1214_ = ((lean_object*)(l_Lean_Compiler_LCNF_toImpureType___closed__2));
v___x_1215_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__0));
v___x_1216_ = l_mkPanicMessageWithDecl(v___x_1215_, v___x_1214_, v___x_1213_, v___x_1212_, v___x_1211_);
return v___x_1216_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_toImpureType___closed__4(void){
_start:
{
lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; 
v___x_1217_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__2));
v___x_1218_ = lean_unsigned_to_nat(9u);
v___x_1219_ = lean_unsigned_to_nat(151u);
v___x_1220_ = ((lean_object*)(l_Lean_Compiler_LCNF_toImpureType___closed__2));
v___x_1221_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__0));
v___x_1222_ = l_mkPanicMessageWithDecl(v___x_1221_, v___x_1220_, v___x_1219_, v___x_1218_, v___x_1217_);
return v___x_1222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toImpureType(lean_object* v_type_1223_, lean_object* v_a_1224_, lean_object* v_a_1225_){
_start:
{
switch(lean_obj_tag(v_type_1223_))
{
case 4:
{
lean_object* v_declName_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; 
v_declName_1227_ = lean_ctor_get(v_type_1223_, 0);
lean_inc(v_declName_1227_);
lean_dec_ref_known(v_type_1223_, 2);
v___x_1228_ = ((lean_object*)(l_Lean_Compiler_LCNF_toImpureType___closed__0));
v___x_1229_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_toImpureType_visitApp(v_declName_1227_, v___x_1228_, v_a_1224_, v_a_1225_);
return v___x_1229_;
}
case 5:
{
lean_object* v___x_1230_; 
v___x_1230_ = l_Lean_Expr_getAppFn(v_type_1223_);
if (lean_obj_tag(v___x_1230_) == 4)
{
lean_object* v_declName_1231_; lean_object* v_dummy_1232_; lean_object* v_nargs_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; 
v_declName_1231_ = lean_ctor_get(v___x_1230_, 0);
lean_inc(v_declName_1231_);
lean_dec_ref_known(v___x_1230_, 2);
v_dummy_1232_ = lean_obj_once(&l_Lean_Compiler_LCNF_toImpureType___closed__1, &l_Lean_Compiler_LCNF_toImpureType___closed__1_once, _init_l_Lean_Compiler_LCNF_toImpureType___closed__1);
v_nargs_1233_ = l_Lean_Expr_getAppNumArgs(v_type_1223_);
lean_inc(v_nargs_1233_);
v___x_1234_ = lean_mk_array(v_nargs_1233_, v_dummy_1232_);
v___x_1235_ = lean_unsigned_to_nat(1u);
v___x_1236_ = lean_nat_sub(v_nargs_1233_, v___x_1235_);
lean_dec(v_nargs_1233_);
v___x_1237_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_type_1223_, v___x_1234_, v___x_1236_);
v___x_1238_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_toImpureType_visitApp(v_declName_1231_, v___x_1237_, v_a_1224_, v_a_1225_);
return v___x_1238_;
}
else
{
lean_object* v___x_1239_; lean_object* v___x_1240_; 
lean_dec_ref_known(v_type_1223_, 2);
lean_dec_ref(v___x_1230_);
v___x_1239_ = lean_obj_once(&l_Lean_Compiler_LCNF_toImpureType___closed__3, &l_Lean_Compiler_LCNF_toImpureType___closed__3_once, _init_l_Lean_Compiler_LCNF_toImpureType___closed__3);
v___x_1240_ = l_panic___at___00Lean_Compiler_LCNF_toImpureType_spec__1(v___x_1239_, v_a_1224_, v_a_1225_);
return v___x_1240_;
}
}
case 7:
{
lean_object* v_body_1241_; uint8_t v___x_1242_; 
v_body_1241_ = lean_ctor_get(v_type_1223_, 2);
lean_inc_ref(v_body_1241_);
lean_dec_ref_known(v_type_1223_, 3);
v___x_1242_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_isAnyProducingType(v_body_1241_);
lean_dec_ref(v_body_1241_);
if (v___x_1242_ == 0)
{
lean_object* v___x_1243_; lean_object* v___x_1244_; 
v___x_1243_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__2, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__2);
v___x_1244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1244_, 0, v___x_1243_);
return v___x_1244_;
}
else
{
lean_object* v___x_1245_; lean_object* v___x_1246_; 
v___x_1245_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__12);
v___x_1246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1246_, 0, v___x_1245_);
return v___x_1246_;
}
}
case 10:
{
lean_object* v_expr_1247_; 
v_expr_1247_ = lean_ctor_get(v_type_1223_, 1);
lean_inc_ref(v_expr_1247_);
lean_dec_ref_known(v_type_1223_, 2);
v_type_1223_ = v_expr_1247_;
goto _start;
}
default: 
{
lean_object* v___x_1249_; lean_object* v___x_1250_; 
lean_dec_ref(v_type_1223_);
v___x_1249_ = lean_obj_once(&l_Lean_Compiler_LCNF_toImpureType___closed__4, &l_Lean_Compiler_LCNF_toImpureType___closed__4_once, _init_l_Lean_Compiler_LCNF_toImpureType___closed__4);
v___x_1250_ = l_panic___at___00Lean_Compiler_LCNF_toImpureType_spec__1(v___x_1249_, v_a_1224_, v_a_1225_);
return v___x_1250_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_toImpureType_visitApp(lean_object* v_declName_1251_, lean_object* v_args_1252_, lean_object* v_a_1253_, lean_object* v_a_1254_){
_start:
{
lean_object* v___x_1256_; lean_object* v___x_1257_; 
v___x_1256_ = l_Lean_instInhabitedExpr;
lean_inc(v_declName_1251_);
v___x_1257_ = l_Lean_Compiler_LCNF_hasTrivialImpureStructure_x3f(v_declName_1251_, v_a_1253_, v_a_1254_);
if (lean_obj_tag(v___x_1257_) == 0)
{
lean_object* v_a_1258_; 
v_a_1258_ = lean_ctor_get(v___x_1257_, 0);
lean_inc(v_a_1258_);
lean_dec_ref_known(v___x_1257_, 1);
if (lean_obj_tag(v_a_1258_) == 1)
{
lean_object* v_val_1259_; lean_object* v_ctorName_1260_; lean_object* v_numParams_1261_; lean_object* v_fieldIdx_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; 
lean_dec(v_declName_1251_);
v_val_1259_ = lean_ctor_get(v_a_1258_, 0);
lean_inc(v_val_1259_);
lean_dec_ref_known(v_a_1258_, 1);
v_ctorName_1260_ = lean_ctor_get(v_val_1259_, 0);
lean_inc(v_ctorName_1260_);
v_numParams_1261_ = lean_ctor_get(v_val_1259_, 1);
lean_inc(v_numParams_1261_);
v_fieldIdx_1262_ = lean_ctor_get(v_val_1259_, 2);
lean_inc(v_fieldIdx_1262_);
lean_dec(v_val_1259_);
v___x_1263_ = lean_box(0);
v___x_1264_ = l_Lean_Compiler_LCNF_getOtherDeclBaseType(v_ctorName_1260_, v___x_1263_, v_a_1253_, v_a_1254_);
if (lean_obj_tag(v___x_1264_) == 0)
{
lean_object* v_a_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; 
v_a_1265_ = lean_ctor_get(v___x_1264_, 0);
lean_inc(v_a_1265_);
lean_dec_ref_known(v___x_1264_, 1);
v___x_1266_ = lean_unsigned_to_nat(0u);
v___x_1267_ = l_Array_toSubarray___redArg(v_args_1252_, v___x_1266_, v_numParams_1261_);
v___x_1268_ = l_Subarray_copy___redArg(v___x_1267_);
v___x_1269_ = l_Lean_Compiler_LCNF_instantiateForall(v_a_1265_, v___x_1268_, v_a_1253_, v_a_1254_);
lean_dec_ref(v___x_1268_);
if (lean_obj_tag(v___x_1269_) == 0)
{
lean_object* v_a_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; 
v_a_1270_ = lean_ctor_get(v___x_1269_, 0);
lean_inc(v_a_1270_);
lean_dec_ref_known(v___x_1269_, 1);
v___x_1271_ = l_Lean_Compiler_LCNF_getParamTypes(v_a_1270_);
v___x_1272_ = lean_array_get(v___x_1256_, v___x_1271_, v_fieldIdx_1262_);
lean_dec(v_fieldIdx_1262_);
lean_dec_ref(v___x_1271_);
v___x_1273_ = l_Lean_Compiler_LCNF_toMonoType(v___x_1272_, v_a_1253_, v_a_1254_);
if (lean_obj_tag(v___x_1273_) == 0)
{
lean_object* v_a_1274_; lean_object* v___x_1275_; 
v_a_1274_ = lean_ctor_get(v___x_1273_, 0);
lean_inc(v_a_1274_);
lean_dec_ref_known(v___x_1273_, 1);
v___x_1275_ = l_Lean_Compiler_LCNF_toImpureType(v_a_1274_, v_a_1253_, v_a_1254_);
return v___x_1275_;
}
else
{
return v___x_1273_;
}
}
else
{
lean_dec(v_fieldIdx_1262_);
return v___x_1269_;
}
}
else
{
lean_dec(v_fieldIdx_1262_);
lean_dec(v_numParams_1261_);
lean_dec_ref(v_args_1252_);
return v___x_1264_;
}
}
else
{
lean_object* v___x_1276_; 
lean_dec(v_a_1258_);
lean_dec_ref(v_args_1252_);
v___x_1276_ = l_Lean_Compiler_LCNF_nameToImpureType(v_declName_1251_, v_a_1253_, v_a_1254_);
return v___x_1276_;
}
}
else
{
lean_object* v_a_1277_; lean_object* v___x_1279_; uint8_t v_isShared_1280_; uint8_t v_isSharedCheck_1284_; 
lean_dec_ref(v_args_1252_);
lean_dec(v_declName_1251_);
v_a_1277_ = lean_ctor_get(v___x_1257_, 0);
v_isSharedCheck_1284_ = !lean_is_exclusive(v___x_1257_);
if (v_isSharedCheck_1284_ == 0)
{
v___x_1279_ = v___x_1257_;
v_isShared_1280_ = v_isSharedCheck_1284_;
goto v_resetjp_1278_;
}
else
{
lean_inc(v_a_1277_);
lean_dec(v___x_1257_);
v___x_1279_ = lean_box(0);
v_isShared_1280_ = v_isSharedCheck_1284_;
goto v_resetjp_1278_;
}
v_resetjp_1278_:
{
lean_object* v___x_1282_; 
if (v_isShared_1280_ == 0)
{
v___x_1282_ = v___x_1279_;
goto v_reusejp_1281_;
}
else
{
lean_object* v_reuseFailAlloc_1283_; 
v_reuseFailAlloc_1283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1283_, 0, v_a_1277_);
v___x_1282_ = v_reuseFailAlloc_1283_;
goto v_reusejp_1281_;
}
v_reusejp_1281_:
{
return v___x_1282_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_toImpureType_visitApp___boxed(lean_object* v_declName_1285_, lean_object* v_args_1286_, lean_object* v_a_1287_, lean_object* v_a_1288_, lean_object* v_a_1289_){
_start:
{
lean_object* v_res_1290_; 
v_res_1290_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_toImpureType_visitApp(v_declName_1285_, v_args_1286_, v_a_1287_, v_a_1288_);
lean_dec(v_a_1288_);
lean_dec_ref(v_a_1287_);
return v_res_1290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toImpureType___boxed(lean_object* v_type_1291_, lean_object* v_a_1292_, lean_object* v_a_1293_, lean_object* v_a_1294_){
_start:
{
lean_object* v_res_1295_; 
v_res_1295_ = l_Lean_Compiler_LCNF_toImpureType(v_type_1291_, v_a_1292_, v_a_1293_);
lean_dec(v_a_1293_);
lean_dec_ref(v_a_1292_);
return v_res_1295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_ctorIdx___impl(lean_object* v_x_1296_){
_start:
{
lean_object* v___x_1297_; 
v___x_1297_ = lean_obj_tag_nat(v_x_1296_);
return v___x_1297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_ctorIdx___impl___boxed(lean_object* v_x_1298_){
_start:
{
lean_object* v_res_1299_; 
v_res_1299_ = l_Lean_Compiler_LCNF_CtorFieldInfo_ctorIdx___impl(v_x_1298_);
lean_dec(v_x_1298_);
return v_res_1299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim___redArg(lean_object* v_t_1300_, lean_object* v_k_1301_){
_start:
{
switch(lean_obj_tag(v_t_1300_))
{
case 1:
{
lean_object* v_i_1302_; lean_object* v_type_1303_; lean_object* v___x_1304_; 
v_i_1302_ = lean_ctor_get(v_t_1300_, 0);
lean_inc(v_i_1302_);
v_type_1303_ = lean_ctor_get(v_t_1300_, 1);
lean_inc_ref(v_type_1303_);
lean_dec_ref_known(v_t_1300_, 2);
v___x_1304_ = lean_apply_2(v_k_1301_, v_i_1302_, v_type_1303_);
return v___x_1304_;
}
case 2:
{
lean_object* v_i_1305_; lean_object* v___x_1306_; 
v_i_1305_ = lean_ctor_get(v_t_1300_, 0);
lean_inc(v_i_1305_);
lean_dec_ref_known(v_t_1300_, 1);
v___x_1306_ = lean_apply_1(v_k_1301_, v_i_1305_);
return v___x_1306_;
}
case 3:
{
lean_object* v_sz_1307_; lean_object* v_offset_1308_; lean_object* v_type_1309_; lean_object* v___x_1310_; 
v_sz_1307_ = lean_ctor_get(v_t_1300_, 0);
lean_inc(v_sz_1307_);
v_offset_1308_ = lean_ctor_get(v_t_1300_, 1);
lean_inc(v_offset_1308_);
v_type_1309_ = lean_ctor_get(v_t_1300_, 2);
lean_inc_ref(v_type_1309_);
lean_dec_ref_known(v_t_1300_, 3);
v___x_1310_ = lean_apply_3(v_k_1301_, v_sz_1307_, v_offset_1308_, v_type_1309_);
return v___x_1310_;
}
case 5:
{
lean_object* v_depth_1311_; lean_object* v_i_1312_; lean_object* v_type_1313_; lean_object* v___x_1314_; 
v_depth_1311_ = lean_ctor_get(v_t_1300_, 0);
lean_inc(v_depth_1311_);
v_i_1312_ = lean_ctor_get(v_t_1300_, 1);
lean_inc(v_i_1312_);
v_type_1313_ = lean_ctor_get(v_t_1300_, 2);
lean_inc_ref(v_type_1313_);
lean_dec_ref_known(v_t_1300_, 3);
v___x_1314_ = lean_apply_3(v_k_1301_, v_depth_1311_, v_i_1312_, v_type_1313_);
return v___x_1314_;
}
default: 
{
lean_dec(v_t_1300_);
return v_k_1301_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim(lean_object* v_motive_1315_, lean_object* v_ctorIdx_1316_, lean_object* v_t_1317_, lean_object* v_h_1318_, lean_object* v_k_1319_){
_start:
{
lean_object* v___x_1320_; 
v___x_1320_ = l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim___redArg(v_t_1317_, v_k_1319_);
return v___x_1320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim___boxed(lean_object* v_motive_1321_, lean_object* v_ctorIdx_1322_, lean_object* v_t_1323_, lean_object* v_h_1324_, lean_object* v_k_1325_){
_start:
{
lean_object* v_res_1326_; 
v_res_1326_ = l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim(v_motive_1321_, v_ctorIdx_1322_, v_t_1323_, v_h_1324_, v_k_1325_);
lean_dec(v_ctorIdx_1322_);
return v_res_1326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_erased_elim___redArg(lean_object* v_t_1327_, lean_object* v_erased_1328_){
_start:
{
lean_object* v___x_1329_; 
v___x_1329_ = l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim___redArg(v_t_1327_, v_erased_1328_);
return v___x_1329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_erased_elim(lean_object* v_motive_1330_, lean_object* v_t_1331_, lean_object* v_h_1332_, lean_object* v_erased_1333_){
_start:
{
lean_object* v___x_1334_; 
v___x_1334_ = l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim___redArg(v_t_1331_, v_erased_1333_);
return v___x_1334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_object_elim___redArg(lean_object* v_t_1335_, lean_object* v_object_1336_){
_start:
{
lean_object* v___x_1337_; 
v___x_1337_ = l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim___redArg(v_t_1335_, v_object_1336_);
return v___x_1337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_object_elim(lean_object* v_motive_1338_, lean_object* v_t_1339_, lean_object* v_h_1340_, lean_object* v_object_1341_){
_start:
{
lean_object* v___x_1342_; 
v___x_1342_ = l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim___redArg(v_t_1339_, v_object_1341_);
return v___x_1342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_usize_elim___redArg(lean_object* v_t_1343_, lean_object* v_usize_1344_){
_start:
{
lean_object* v___x_1345_; 
v___x_1345_ = l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim___redArg(v_t_1343_, v_usize_1344_);
return v___x_1345_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_usize_elim(lean_object* v_motive_1346_, lean_object* v_t_1347_, lean_object* v_h_1348_, lean_object* v_usize_1349_){
_start:
{
lean_object* v___x_1350_; 
v___x_1350_ = l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim___redArg(v_t_1347_, v_usize_1349_);
return v___x_1350_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_scalar_elim___redArg(lean_object* v_t_1351_, lean_object* v_scalar_1352_){
_start:
{
lean_object* v___x_1353_; 
v___x_1353_ = l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim___redArg(v_t_1351_, v_scalar_1352_);
return v___x_1353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_scalar_elim(lean_object* v_motive_1354_, lean_object* v_t_1355_, lean_object* v_h_1356_, lean_object* v_scalar_1357_){
_start:
{
lean_object* v___x_1358_; 
v___x_1358_ = l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim___redArg(v_t_1355_, v_scalar_1357_);
return v___x_1358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_void_elim___redArg(lean_object* v_t_1359_, lean_object* v_void_1360_){
_start:
{
lean_object* v___x_1361_; 
v___x_1361_ = l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim___redArg(v_t_1359_, v_void_1360_);
return v___x_1361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_void_elim(lean_object* v_motive_1362_, lean_object* v_t_1363_, lean_object* v_h_1364_, lean_object* v_void_1365_){
_start:
{
lean_object* v___x_1366_; 
v___x_1366_ = l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim___redArg(v_t_1363_, v_void_1365_);
return v___x_1366_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_spilled_elim___redArg(lean_object* v_t_1367_, lean_object* v_spilled_1368_){
_start:
{
lean_object* v___x_1369_; 
v___x_1369_ = l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim___redArg(v_t_1367_, v_spilled_1368_);
return v___x_1369_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_spilled_elim(lean_object* v_motive_1370_, lean_object* v_t_1371_, lean_object* v_h_1372_, lean_object* v_spilled_1373_){
_start:
{
lean_object* v___x_1374_; 
v___x_1374_ = l_Lean_Compiler_LCNF_CtorFieldInfo_ctorElim___redArg(v_t_1371_, v_spilled_1373_);
return v___x_1374_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedCtorFieldInfo_default(void){
_start:
{
lean_object* v___x_1375_; 
v___x_1375_ = lean_box(0);
return v___x_1375_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedCtorFieldInfo(void){
_start:
{
lean_object* v___x_1376_; 
v___x_1376_ = lean_box(0);
return v___x_1376_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format(lean_object* v_x_1401_){
_start:
{
switch(lean_obj_tag(v_x_1401_))
{
case 0:
{
lean_object* v___x_1402_; 
v___x_1402_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__1));
return v___x_1402_;
}
case 1:
{
lean_object* v_i_1403_; lean_object* v_type_1404_; lean_object* v___x_1406_; uint8_t v_isShared_1407_; uint8_t v_isSharedCheck_1419_; 
v_i_1403_ = lean_ctor_get(v_x_1401_, 0);
v_type_1404_ = lean_ctor_get(v_x_1401_, 1);
v_isSharedCheck_1419_ = !lean_is_exclusive(v_x_1401_);
if (v_isSharedCheck_1419_ == 0)
{
v___x_1406_ = v_x_1401_;
v_isShared_1407_ = v_isSharedCheck_1419_;
goto v_resetjp_1405_;
}
else
{
lean_inc(v_type_1404_);
lean_inc(v_i_1403_);
lean_dec(v_x_1401_);
v___x_1406_ = lean_box(0);
v_isShared_1407_ = v_isSharedCheck_1419_;
goto v_resetjp_1405_;
}
v_resetjp_1405_:
{
lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1412_; 
v___x_1408_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__3));
v___x_1409_ = l_Nat_reprFast(v_i_1403_);
v___x_1410_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1410_, 0, v___x_1409_);
if (v_isShared_1407_ == 0)
{
lean_ctor_set_tag(v___x_1406_, 5);
lean_ctor_set(v___x_1406_, 1, v___x_1410_);
lean_ctor_set(v___x_1406_, 0, v___x_1408_);
v___x_1412_ = v___x_1406_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1418_; 
v_reuseFailAlloc_1418_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1418_, 0, v___x_1408_);
lean_ctor_set(v_reuseFailAlloc_1418_, 1, v___x_1410_);
v___x_1412_ = v_reuseFailAlloc_1418_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; 
v___x_1413_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__5));
v___x_1414_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1414_, 0, v___x_1412_);
lean_ctor_set(v___x_1414_, 1, v___x_1413_);
v___x_1415_ = lean_expr_dbg_to_string(v_type_1404_);
lean_dec_ref(v_type_1404_);
v___x_1416_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1416_, 0, v___x_1415_);
v___x_1417_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1417_, 0, v___x_1414_);
lean_ctor_set(v___x_1417_, 1, v___x_1416_);
return v___x_1417_;
}
}
}
case 2:
{
lean_object* v_i_1420_; lean_object* v___x_1422_; uint8_t v_isShared_1423_; uint8_t v_isSharedCheck_1430_; 
v_i_1420_ = lean_ctor_get(v_x_1401_, 0);
v_isSharedCheck_1430_ = !lean_is_exclusive(v_x_1401_);
if (v_isSharedCheck_1430_ == 0)
{
v___x_1422_ = v_x_1401_;
v_isShared_1423_ = v_isSharedCheck_1430_;
goto v_resetjp_1421_;
}
else
{
lean_inc(v_i_1420_);
lean_dec(v_x_1401_);
v___x_1422_ = lean_box(0);
v_isShared_1423_ = v_isSharedCheck_1430_;
goto v_resetjp_1421_;
}
v_resetjp_1421_:
{
lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1427_; 
v___x_1424_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__7));
v___x_1425_ = l_Nat_reprFast(v_i_1420_);
if (v_isShared_1423_ == 0)
{
lean_ctor_set_tag(v___x_1422_, 3);
lean_ctor_set(v___x_1422_, 0, v___x_1425_);
v___x_1427_ = v___x_1422_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v___x_1425_);
v___x_1427_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
lean_object* v___x_1428_; 
v___x_1428_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1428_, 0, v___x_1424_);
lean_ctor_set(v___x_1428_, 1, v___x_1427_);
return v___x_1428_;
}
}
}
case 3:
{
lean_object* v_sz_1431_; lean_object* v_offset_1432_; lean_object* v_type_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; 
v_sz_1431_ = lean_ctor_get(v_x_1401_, 0);
lean_inc(v_sz_1431_);
v_offset_1432_ = lean_ctor_get(v_x_1401_, 1);
lean_inc(v_offset_1432_);
v_type_1433_ = lean_ctor_get(v_x_1401_, 2);
lean_inc_ref(v_type_1433_);
lean_dec_ref_known(v_x_1401_, 3);
v___x_1434_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__9));
v___x_1435_ = l_Nat_reprFast(v_sz_1431_);
v___x_1436_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1436_, 0, v___x_1435_);
v___x_1437_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1437_, 0, v___x_1434_);
lean_ctor_set(v___x_1437_, 1, v___x_1436_);
v___x_1438_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__11));
v___x_1439_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1439_, 0, v___x_1437_);
lean_ctor_set(v___x_1439_, 1, v___x_1438_);
v___x_1440_ = l_Nat_reprFast(v_offset_1432_);
v___x_1441_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1441_, 0, v___x_1440_);
v___x_1442_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1442_, 0, v___x_1439_);
lean_ctor_set(v___x_1442_, 1, v___x_1441_);
v___x_1443_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__5));
v___x_1444_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1444_, 0, v___x_1442_);
lean_ctor_set(v___x_1444_, 1, v___x_1443_);
v___x_1445_ = lean_expr_dbg_to_string(v_type_1433_);
lean_dec_ref(v_type_1433_);
v___x_1446_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1446_, 0, v___x_1445_);
v___x_1447_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1447_, 0, v___x_1444_);
lean_ctor_set(v___x_1447_, 1, v___x_1446_);
return v___x_1447_;
}
case 4:
{
lean_object* v___x_1448_; 
v___x_1448_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__13));
return v___x_1448_;
}
default: 
{
lean_object* v_depth_1449_; lean_object* v_i_1450_; lean_object* v_type_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; 
v_depth_1449_ = lean_ctor_get(v_x_1401_, 0);
lean_inc(v_depth_1449_);
v_i_1450_ = lean_ctor_get(v_x_1401_, 1);
lean_inc(v_i_1450_);
v_type_1451_ = lean_ctor_get(v_x_1401_, 2);
lean_inc_ref(v_type_1451_);
lean_dec_ref_known(v_x_1401_, 3);
v___x_1452_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__3));
v___x_1453_ = l_Nat_reprFast(v_depth_1449_);
v___x_1454_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1454_, 0, v___x_1453_);
v___x_1455_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1455_, 0, v___x_1452_);
lean_ctor_set(v___x_1455_, 1, v___x_1454_);
v___x_1456_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__15));
v___x_1457_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1457_, 0, v___x_1455_);
lean_ctor_set(v___x_1457_, 1, v___x_1456_);
v___x_1458_ = l_Nat_reprFast(v_i_1450_);
v___x_1459_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1459_, 0, v___x_1458_);
v___x_1460_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1460_, 0, v___x_1457_);
lean_ctor_set(v___x_1460_, 1, v___x_1459_);
v___x_1461_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_CtorFieldInfo_format___closed__5));
v___x_1462_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1462_, 0, v___x_1460_);
lean_ctor_set(v___x_1462_, 1, v___x_1461_);
v___x_1463_ = lean_expr_dbg_to_string(v_type_1451_);
lean_dec_ref(v_type_1451_);
v___x_1464_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1464_, 0, v___x_1463_);
v___x_1465_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1465_, 0, v___x_1462_);
lean_ctor_set(v___x_1465_, 1, v___x_1464_);
return v___x_1465_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_spillDepth(lean_object* v_x_1466_){
_start:
{
if (lean_obj_tag(v_x_1466_) == 5)
{
lean_object* v_depth_1467_; 
v_depth_1467_ = lean_ctor_get(v_x_1466_, 0);
lean_inc(v_depth_1467_);
return v_depth_1467_;
}
else
{
lean_object* v___x_1468_; 
v___x_1468_ = lean_unsigned_to_nat(0u);
return v___x_1468_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_spillDepth___boxed(lean_object* v_x_1469_){
_start:
{
lean_object* v_res_1470_; 
v_res_1470_ = l_Lean_Compiler_LCNF_CtorFieldInfo_spillDepth(v_x_1469_);
lean_dec(v_x_1469_);
return v_res_1470_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_spillLinkIdx___closed__0(void){
_start:
{
lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; 
v___x_1473_ = lean_unsigned_to_nat(1u);
v___x_1474_ = l_Lean_maxCtorNumObjs;
v___x_1475_ = lean_nat_sub(v___x_1474_, v___x_1473_);
return v___x_1475_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_spillLinkIdx(void){
_start:
{
lean_object* v___x_1476_; 
v___x_1476_ = lean_obj_once(&l_Lean_Compiler_LCNF_spillLinkIdx___closed__0, &l_Lean_Compiler_LCNF_spillLinkIdx___closed__0_once, _init_l_Lean_Compiler_LCNF_spillLinkIdx___closed__0);
return v___x_1476_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_numSpillObjs(lean_object* v_numObjs_1477_){
_start:
{
lean_object* v___x_1478_; uint8_t v___x_1479_; 
v___x_1478_ = l_Lean_maxCtorNumObjs;
v___x_1479_ = lean_nat_dec_le(v_numObjs_1477_, v___x_1478_);
if (v___x_1479_ == 0)
{
lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; 
v___x_1480_ = lean_unsigned_to_nat(1u);
v___x_1481_ = lean_nat_sub(v_numObjs_1477_, v___x_1480_);
v___x_1482_ = l_Lean_Compiler_LCNF_spillLinkIdx;
v___x_1483_ = lean_nat_div(v___x_1481_, v___x_1482_);
lean_dec(v___x_1481_);
return v___x_1483_;
}
else
{
lean_object* v___x_1484_; 
v___x_1484_ = lean_unsigned_to_nat(0u);
return v___x_1484_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_numSpillObjs___boxed(lean_object* v_numObjs_1485_){
_start:
{
lean_object* v_res_1486_; 
v_res_1486_ = l_Lean_Compiler_LCNF_numSpillObjs(v_numObjs_1485_);
lean_dec(v_numObjs_1485_);
return v_res_1486_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_spillCtorInfo(lean_object* v_ctorName_1490_, lean_object* v_size_1491_){
_start:
{
lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; 
v___x_1492_ = ((lean_object*)(l_Lean_Compiler_LCNF_spillCtorInfo___closed__1));
v___x_1493_ = l_Lean_Name_append(v_ctorName_1490_, v___x_1492_);
v___x_1494_ = lean_unsigned_to_nat(0u);
v___x_1495_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1495_, 0, v___x_1493_);
lean_ctor_set(v___x_1495_, 1, v___x_1494_);
lean_ctor_set(v___x_1495_, 2, v_size_1491_);
lean_ctor_set(v___x_1495_, 3, v___x_1494_);
lean_ctor_set(v___x_1495_, 4, v___x_1494_);
return v___x_1495_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default___closed__1(void){
_start:
{
lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; 
v___x_1498_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default___closed__0));
v___x_1499_ = l_Lean_Compiler_LCNF_instInhabitedCtorInfo_default;
v___x_1500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1500_, 0, v___x_1499_);
lean_ctor_set(v___x_1500_, 1, v___x_1498_);
return v___x_1500_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default(void){
_start:
{
lean_object* v___x_1501_; 
v___x_1501_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default___closed__1, &l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default___closed__1_once, _init_l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default___closed__1);
return v___x_1501_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedCtorLayout(void){
_start:
{
lean_object* v___x_1502_; 
v___x_1502_ = l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default;
return v___x_1502_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__spec__1_spec__1(lean_object* v_init_1503_, lean_object* v_x_1504_){
_start:
{
if (lean_obj_tag(v_x_1504_) == 0)
{
lean_object* v_k_1505_; lean_object* v_v_1506_; lean_object* v_l_1507_; lean_object* v_r_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; 
v_k_1505_ = lean_ctor_get(v_x_1504_, 1);
v_v_1506_ = lean_ctor_get(v_x_1504_, 2);
v_l_1507_ = lean_ctor_get(v_x_1504_, 3);
v_r_1508_ = lean_ctor_get(v_x_1504_, 4);
v___x_1509_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__spec__1_spec__1(v_init_1503_, v_l_1507_);
lean_inc(v_v_1506_);
lean_inc(v_k_1505_);
v___x_1510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1510_, 0, v_k_1505_);
lean_ctor_set(v___x_1510_, 1, v_v_1506_);
v___x_1511_ = lean_array_push(v___x_1509_, v___x_1510_);
v_init_1503_ = v___x_1511_;
v_x_1504_ = v_r_1508_;
goto _start;
}
else
{
return v_init_1503_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__spec__1_spec__1___boxed(lean_object* v_init_1513_, lean_object* v_x_1514_){
_start:
{
lean_object* v_res_1515_; 
v_res_1515_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__spec__1_spec__1(v_init_1513_, v_x_1514_);
lean_dec(v_x_1514_);
return v_res_1515_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__spec__2(lean_object* v_env_1516_, lean_object* v_as_1517_, size_t v_i_1518_, size_t v_stop_1519_, lean_object* v_b_1520_){
_start:
{
lean_object* v___y_1522_; uint8_t v___x_1526_; 
v___x_1526_ = lean_usize_dec_eq(v_i_1518_, v_stop_1519_);
if (v___x_1526_ == 0)
{
lean_object* v___x_1527_; lean_object* v_fst_1528_; uint8_t v___x_1529_; 
v___x_1527_ = lean_array_uget_borrowed(v_as_1517_, v_i_1518_);
v_fst_1528_ = lean_ctor_get(v___x_1527_, 0);
lean_inc(v_fst_1528_);
lean_inc_ref(v_env_1516_);
v___x_1529_ = l_Lean_Environment_contains(v_env_1516_, v_fst_1528_, v___x_1526_);
if (v___x_1529_ == 0)
{
v___y_1522_ = v_b_1520_;
goto v___jp_1521_;
}
else
{
lean_object* v___x_1530_; 
lean_inc(v___x_1527_);
v___x_1530_ = lean_array_push(v_b_1520_, v___x_1527_);
v___y_1522_ = v___x_1530_;
goto v___jp_1521_;
}
}
else
{
lean_dec_ref(v_env_1516_);
return v_b_1520_;
}
v___jp_1521_:
{
size_t v___x_1523_; size_t v___x_1524_; 
v___x_1523_ = ((size_t)1ULL);
v___x_1524_ = lean_usize_add(v_i_1518_, v___x_1523_);
v_i_1518_ = v___x_1524_;
v_b_1520_ = v___y_1522_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__spec__2___boxed(lean_object* v_env_1531_, lean_object* v_as_1532_, lean_object* v_i_1533_, lean_object* v_stop_1534_, lean_object* v_b_1535_){
_start:
{
size_t v_i_boxed_1536_; size_t v_stop_boxed_1537_; lean_object* v_res_1538_; 
v_i_boxed_1536_ = lean_unbox_usize(v_i_1533_);
lean_dec(v_i_1533_);
v_stop_boxed_1537_ = lean_unbox_usize(v_stop_1534_);
lean_dec(v_stop_1534_);
v_res_1538_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__spec__2(v_env_1531_, v_as_1532_, v_i_boxed_1536_, v_stop_boxed_1537_, v_b_1535_);
lean_dec_ref(v_as_1532_);
return v_res_1538_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__spec__0(lean_object* v_env_1539_, lean_object* v_as_1540_, size_t v_i_1541_, size_t v_stop_1542_, lean_object* v_b_1543_){
_start:
{
lean_object* v___y_1545_; uint8_t v___x_1549_; 
v___x_1549_ = lean_usize_dec_eq(v_i_1541_, v_stop_1542_);
if (v___x_1549_ == 0)
{
lean_object* v___x_1550_; lean_object* v_fst_1551_; uint8_t v___x_1552_; lean_object* v___x_1553_; uint8_t v___x_1554_; 
v___x_1550_ = lean_array_uget_borrowed(v_as_1540_, v_i_1541_);
v_fst_1551_ = lean_ctor_get(v___x_1550_, 0);
v___x_1552_ = 1;
lean_inc_ref(v_env_1539_);
v___x_1553_ = l_Lean_Environment_setExporting(v_env_1539_, v___x_1552_);
lean_inc(v_fst_1551_);
v___x_1554_ = l_Lean_Environment_contains(v___x_1553_, v_fst_1551_, v___x_1549_);
if (v___x_1554_ == 0)
{
v___y_1545_ = v_b_1543_;
goto v___jp_1544_;
}
else
{
lean_object* v___x_1555_; 
lean_inc(v___x_1550_);
v___x_1555_ = lean_array_push(v_b_1543_, v___x_1550_);
v___y_1545_ = v___x_1555_;
goto v___jp_1544_;
}
}
else
{
lean_dec_ref(v_env_1539_);
return v_b_1543_;
}
v___jp_1544_:
{
size_t v___x_1546_; size_t v___x_1547_; 
v___x_1546_ = ((size_t)1ULL);
v___x_1547_ = lean_usize_add(v_i_1541_, v___x_1546_);
v_i_1541_ = v___x_1547_;
v_b_1543_ = v___y_1545_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__spec__0___boxed(lean_object* v_env_1556_, lean_object* v_as_1557_, lean_object* v_i_1558_, lean_object* v_stop_1559_, lean_object* v_b_1560_){
_start:
{
size_t v_i_boxed_1561_; size_t v_stop_boxed_1562_; lean_object* v_res_1563_; 
v_i_boxed_1561_ = lean_unbox_usize(v_i_1558_);
lean_dec(v_i_1558_);
v_stop_boxed_1562_ = lean_unbox_usize(v_stop_1559_);
lean_dec(v_stop_1559_);
v_res_1563_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__spec__0(v_env_1556_, v_as_1557_, v_i_boxed_1561_, v_stop_boxed_1562_, v_b_1560_);
lean_dec_ref(v_as_1557_);
return v_res_1563_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2_(lean_object* v___x_1564_, lean_object* v_env_1565_, lean_object* v_s_1566_){
_start:
{
lean_object* v___y_1568_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; uint8_t v___x_1581_; 
v___x_1577_ = lean_mk_empty_array_with_capacity(v___x_1564_);
v___x_1578_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__spec__1_spec__1(v___x_1577_, v_s_1566_);
v___x_1579_ = lean_array_get_size(v___x_1578_);
v___x_1580_ = lean_mk_empty_array_with_capacity(v___x_1564_);
v___x_1581_ = lean_nat_dec_lt(v___x_1564_, v___x_1579_);
if (v___x_1581_ == 0)
{
lean_dec_ref(v___x_1578_);
v___y_1568_ = v___x_1580_;
goto v___jp_1567_;
}
else
{
size_t v___x_1582_; size_t v___x_1583_; lean_object* v___x_1584_; 
v___x_1582_ = ((size_t)0ULL);
v___x_1583_ = lean_usize_of_nat(v___x_1579_);
lean_inc_ref(v_env_1565_);
v___x_1584_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__spec__2(v_env_1565_, v___x_1578_, v___x_1582_, v___x_1583_, v___x_1580_);
lean_dec_ref(v___x_1578_);
v___y_1568_ = v___x_1584_;
goto v___jp_1567_;
}
v___jp_1567_:
{
lean_object* v___x_1569_; lean_object* v___x_1570_; uint8_t v___x_1571_; 
v___x_1569_ = lean_array_get_size(v___y_1568_);
v___x_1570_ = lean_mk_empty_array_with_capacity(v___x_1564_);
v___x_1571_ = lean_nat_dec_lt(v___x_1564_, v___x_1569_);
if (v___x_1571_ == 0)
{
lean_object* v___x_1572_; 
lean_dec_ref(v_env_1565_);
lean_inc_ref(v___x_1570_);
v___x_1572_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1572_, 0, v___x_1570_);
lean_ctor_set(v___x_1572_, 1, v___x_1570_);
lean_ctor_set(v___x_1572_, 2, v___y_1568_);
return v___x_1572_;
}
else
{
size_t v___x_1573_; size_t v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; 
v___x_1573_ = ((size_t)0ULL);
v___x_1574_ = lean_usize_of_nat(v___x_1569_);
v___x_1575_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__spec__0(v_env_1565_, v___y_1568_, v___x_1573_, v___x_1574_, v___x_1570_);
lean_inc_ref(v___x_1575_);
v___x_1576_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1576_, 0, v___x_1575_);
lean_ctor_set(v___x_1576_, 1, v___x_1575_);
lean_ctor_set(v___x_1576_, 2, v___y_1568_);
return v___x_1576_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2____boxed(lean_object* v___x_1585_, lean_object* v_env_1586_, lean_object* v_s_1587_){
_start:
{
lean_object* v_res_1588_; 
v_res_1588_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2_(v___x_1585_, v_env_1586_, v_s_1587_);
lean_dec(v_s_1587_);
lean_dec(v___x_1585_);
return v_res_1588_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; uint8_t v___x_1599_; lean_object* v___x_1600_; 
v___f_1596_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2_));
v___x_1597_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2_));
v___x_1598_ = lean_box(0);
v___x_1599_ = 0;
v___x_1600_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_1597_, v___x_1598_, v___x_1599_, v___f_1596_);
return v___x_1600_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2____boxed(lean_object* v_a_1601_){
_start:
{
lean_object* v_res_1602_; 
v_res_1602_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2_();
return v_res_1602_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__spec__1(lean_object* v_init_1603_, lean_object* v_t_1604_){
_start:
{
lean_object* v___x_1605_; 
v___x_1605_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__spec__1_spec__1(v_init_1603_, v_t_1604_);
return v___x_1605_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__spec__1___boxed(lean_object* v_init_1606_, lean_object* v_t_1607_){
_start:
{
lean_object* v_res_1608_; 
v_res_1608_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2__spec__1(v_init_1606_, v_t_1607_);
lean_dec(v_t_1607_);
return v_res_1608_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_checkCtorLayout(lean_object* v_layout_1609_, lean_object* v_a_1610_, lean_object* v_a_1611_){
_start:
{
lean_object* v_ctorInfo_1613_; lean_object* v___x_1614_; 
v_ctorInfo_1613_ = lean_ctor_get(v_layout_1609_, 0);
lean_inc_ref(v_ctorInfo_1613_);
lean_dec_ref(v_layout_1609_);
v___x_1614_ = l_Lean_Compiler_LCNF_CtorInfo_checkValid(v_ctorInfo_1613_, v_a_1610_, v_a_1611_);
return v___x_1614_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_checkCtorLayout___boxed(lean_object* v_layout_1615_, lean_object* v_a_1616_, lean_object* v_a_1617_, lean_object* v_a_1618_){
_start:
{
lean_object* v_res_1619_; 
v_res_1619_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_checkCtorLayout(v_layout_1615_, v_a_1616_, v_a_1617_);
lean_dec(v_a_1617_);
lean_dec_ref(v_a_1616_);
return v_res_1619_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__1(lean_object* v_msg_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_){
_start:
{
lean_object* v___f_1624_; lean_object* v___x_12371__overap_1625_; lean_object* v___x_1626_; 
v___f_1624_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__0___closed__0));
v___x_12371__overap_1625_ = lean_panic_fn_borrowed(v___f_1624_, v_msg_1620_);
lean_inc(v___y_1622_);
lean_inc_ref(v___y_1621_);
v___x_1626_ = lean_apply_3(v___x_12371__overap_1625_, v___y_1621_, v___y_1622_, lean_box(0));
return v___x_1626_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__1___boxed(lean_object* v_msg_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_){
_start:
{
lean_object* v_res_1631_; 
v_res_1631_ = l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__1(v_msg_1627_, v___y_1628_, v___y_1629_);
lean_dec(v___y_1629_);
lean_dec_ref(v___y_1628_);
return v_res_1631_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__2(lean_object* v_msg_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_){
_start:
{
lean_object* v___f_1639_; lean_object* v___x_12381__overap_1640_; lean_object* v___x_1641_; 
v___f_1639_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__2___closed__0));
v___x_12381__overap_1640_ = lean_panic_fn_borrowed(v___f_1639_, v_msg_1633_);
lean_inc(v___y_1637_);
lean_inc_ref(v___y_1636_);
lean_inc(v___y_1635_);
lean_inc_ref(v___y_1634_);
v___x_1641_ = lean_apply_5(v___x_12381__overap_1640_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_, lean_box(0));
return v___x_1641_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__2___boxed(lean_object* v_msg_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_){
_start:
{
lean_object* v_res_1648_; 
v_res_1648_ = l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__2(v_msg_1642_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_);
lean_dec(v___y_1646_);
lean_dec_ref(v___y_1645_);
lean_dec(v___y_1644_);
lean_dec_ref(v___y_1643_);
return v_res_1648_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__6___redArg(lean_object* v_type_1649_, lean_object* v_k_1650_, uint8_t v_cleanupAnnotations_1651_, uint8_t v_whnfType_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_){
_start:
{
lean_object* v___f_1658_; lean_object* v___x_1659_; 
v___f_1658_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1658_, 0, v_k_1650_);
v___x_1659_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_1649_, v___f_1658_, v_cleanupAnnotations_1651_, v_whnfType_1652_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_);
if (lean_obj_tag(v___x_1659_) == 0)
{
lean_object* v_a_1660_; lean_object* v___x_1662_; uint8_t v_isShared_1663_; uint8_t v_isSharedCheck_1667_; 
v_a_1660_ = lean_ctor_get(v___x_1659_, 0);
v_isSharedCheck_1667_ = !lean_is_exclusive(v___x_1659_);
if (v_isSharedCheck_1667_ == 0)
{
v___x_1662_ = v___x_1659_;
v_isShared_1663_ = v_isSharedCheck_1667_;
goto v_resetjp_1661_;
}
else
{
lean_inc(v_a_1660_);
lean_dec(v___x_1659_);
v___x_1662_ = lean_box(0);
v_isShared_1663_ = v_isSharedCheck_1667_;
goto v_resetjp_1661_;
}
v_resetjp_1661_:
{
lean_object* v___x_1665_; 
if (v_isShared_1663_ == 0)
{
v___x_1665_ = v___x_1662_;
goto v_reusejp_1664_;
}
else
{
lean_object* v_reuseFailAlloc_1666_; 
v_reuseFailAlloc_1666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1666_, 0, v_a_1660_);
v___x_1665_ = v_reuseFailAlloc_1666_;
goto v_reusejp_1664_;
}
v_reusejp_1664_:
{
return v___x_1665_;
}
}
}
else
{
lean_object* v_a_1668_; lean_object* v___x_1670_; uint8_t v_isShared_1671_; uint8_t v_isSharedCheck_1675_; 
v_a_1668_ = lean_ctor_get(v___x_1659_, 0);
v_isSharedCheck_1675_ = !lean_is_exclusive(v___x_1659_);
if (v_isSharedCheck_1675_ == 0)
{
v___x_1670_ = v___x_1659_;
v_isShared_1671_ = v_isSharedCheck_1675_;
goto v_resetjp_1669_;
}
else
{
lean_inc(v_a_1668_);
lean_dec(v___x_1659_);
v___x_1670_ = lean_box(0);
v_isShared_1671_ = v_isSharedCheck_1675_;
goto v_resetjp_1669_;
}
v_resetjp_1669_:
{
lean_object* v___x_1673_; 
if (v_isShared_1671_ == 0)
{
v___x_1673_ = v___x_1670_;
goto v_reusejp_1672_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v_a_1668_);
v___x_1673_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1672_;
}
v_reusejp_1672_:
{
return v___x_1673_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__6___redArg___boxed(lean_object* v_type_1676_, lean_object* v_k_1677_, lean_object* v_cleanupAnnotations_1678_, lean_object* v_whnfType_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1685_; uint8_t v_whnfType_boxed_1686_; lean_object* v_res_1687_; 
v_cleanupAnnotations_boxed_1685_ = lean_unbox(v_cleanupAnnotations_1678_);
v_whnfType_boxed_1686_ = lean_unbox(v_whnfType_1679_);
v_res_1687_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__6___redArg(v_type_1676_, v_k_1677_, v_cleanupAnnotations_boxed_1685_, v_whnfType_boxed_1686_, v___y_1680_, v___y_1681_, v___y_1682_, v___y_1683_);
lean_dec(v___y_1683_);
lean_dec_ref(v___y_1682_);
lean_dec(v___y_1681_);
lean_dec_ref(v___y_1680_);
return v_res_1687_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__6(lean_object* v_00_u03b1_1688_, lean_object* v_type_1689_, lean_object* v_k_1690_, uint8_t v_cleanupAnnotations_1691_, uint8_t v_whnfType_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_){
_start:
{
lean_object* v___x_1698_; 
v___x_1698_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__6___redArg(v_type_1689_, v_k_1690_, v_cleanupAnnotations_1691_, v_whnfType_1692_, v___y_1693_, v___y_1694_, v___y_1695_, v___y_1696_);
return v___x_1698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__6___boxed(lean_object* v_00_u03b1_1699_, lean_object* v_type_1700_, lean_object* v_k_1701_, lean_object* v_cleanupAnnotations_1702_, lean_object* v_whnfType_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1709_; uint8_t v_whnfType_boxed_1710_; lean_object* v_res_1711_; 
v_cleanupAnnotations_boxed_1709_ = lean_unbox(v_cleanupAnnotations_1702_);
v_whnfType_boxed_1710_ = lean_unbox(v_whnfType_1703_);
v_res_1711_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__6(v_00_u03b1_1699_, v_type_1700_, v_k_1701_, v_cleanupAnnotations_boxed_1709_, v_whnfType_boxed_1710_, v___y_1704_, v___y_1705_, v___y_1706_, v___y_1707_);
lean_dec(v___y_1707_);
lean_dec_ref(v___y_1706_);
lean_dec(v___y_1705_);
lean_dec_ref(v___y_1704_);
return v_res_1711_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__0(lean_object* v_size_1712_, size_t v_sz_1713_, size_t v_i_1714_, lean_object* v_bs_1715_, lean_object* v___y_1716_){
_start:
{
uint8_t v___x_1717_; 
v___x_1717_ = lean_usize_dec_lt(v_i_1714_, v_sz_1713_);
if (v___x_1717_ == 0)
{
lean_object* v___x_1718_; 
v___x_1718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1718_, 0, v_bs_1715_);
lean_ctor_set(v___x_1718_, 1, v___y_1716_);
return v___x_1718_;
}
else
{
lean_object* v_v_1719_; lean_object* v___x_1720_; lean_object* v_bs_x27_1721_; lean_object* v_fst_1723_; lean_object* v_snd_1724_; 
v_v_1719_ = lean_array_uget(v_bs_1715_, v_i_1714_);
v___x_1720_ = lean_unsigned_to_nat(0u);
v_bs_x27_1721_ = lean_array_uset(v_bs_1715_, v_i_1714_, v___x_1720_);
if (lean_obj_tag(v_v_1719_) == 3)
{
lean_object* v_sz_1729_; lean_object* v_type_1730_; uint8_t v___x_1731_; 
v_sz_1729_ = lean_ctor_get(v_v_1719_, 0);
v_type_1730_ = lean_ctor_get(v_v_1719_, 2);
v___x_1731_ = lean_nat_dec_eq(v_sz_1729_, v_size_1712_);
if (v___x_1731_ == 0)
{
v_fst_1723_ = v_v_1719_;
v_snd_1724_ = v___y_1716_;
goto v___jp_1722_;
}
else
{
lean_object* v___x_1733_; uint8_t v_isShared_1734_; uint8_t v_isSharedCheck_1739_; 
lean_inc_ref(v_type_1730_);
lean_inc(v_sz_1729_);
v_isSharedCheck_1739_ = !lean_is_exclusive(v_v_1719_);
if (v_isSharedCheck_1739_ == 0)
{
lean_object* v_unused_1740_; lean_object* v_unused_1741_; lean_object* v_unused_1742_; 
v_unused_1740_ = lean_ctor_get(v_v_1719_, 2);
lean_dec(v_unused_1740_);
v_unused_1741_ = lean_ctor_get(v_v_1719_, 1);
lean_dec(v_unused_1741_);
v_unused_1742_ = lean_ctor_get(v_v_1719_, 0);
lean_dec(v_unused_1742_);
v___x_1733_ = v_v_1719_;
v_isShared_1734_ = v_isSharedCheck_1739_;
goto v_resetjp_1732_;
}
else
{
lean_dec(v_v_1719_);
v___x_1733_ = lean_box(0);
v_isShared_1734_ = v_isSharedCheck_1739_;
goto v_resetjp_1732_;
}
v_resetjp_1732_:
{
lean_object* v___x_1735_; lean_object* v___x_1737_; 
v___x_1735_ = lean_nat_add(v___y_1716_, v_sz_1729_);
if (v_isShared_1734_ == 0)
{
lean_ctor_set(v___x_1733_, 1, v___y_1716_);
v___x_1737_ = v___x_1733_;
goto v_reusejp_1736_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v_sz_1729_);
lean_ctor_set(v_reuseFailAlloc_1738_, 1, v___y_1716_);
lean_ctor_set(v_reuseFailAlloc_1738_, 2, v_type_1730_);
v___x_1737_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1736_;
}
v_reusejp_1736_:
{
v_fst_1723_ = v___x_1737_;
v_snd_1724_ = v___x_1735_;
goto v___jp_1722_;
}
}
}
}
else
{
v_fst_1723_ = v_v_1719_;
v_snd_1724_ = v___y_1716_;
goto v___jp_1722_;
}
v___jp_1722_:
{
size_t v___x_1725_; size_t v___x_1726_; lean_object* v___x_1727_; 
v___x_1725_ = ((size_t)1ULL);
v___x_1726_ = lean_usize_add(v_i_1714_, v___x_1725_);
v___x_1727_ = lean_array_uset(v_bs_x27_1721_, v_i_1714_, v_fst_1723_);
v_i_1714_ = v___x_1726_;
v_bs_1715_ = v___x_1727_;
v___y_1716_ = v_snd_1724_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__0___boxed(lean_object* v_size_1743_, lean_object* v_sz_1744_, lean_object* v_i_1745_, lean_object* v_bs_1746_, lean_object* v___y_1747_){
_start:
{
size_t v_sz_boxed_1748_; size_t v_i_boxed_1749_; lean_object* v_res_1750_; 
v_sz_boxed_1748_ = lean_unbox_usize(v_sz_1744_);
lean_dec(v_sz_1744_);
v_i_boxed_1749_ = lean_unbox_usize(v_i_1745_);
lean_dec(v_i_1745_);
v_res_1750_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__0(v_size_1743_, v_sz_boxed_1748_, v_i_boxed_1749_, v_bs_1746_, v___y_1747_);
lean_dec(v_size_1743_);
return v_res_1750_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___lam__0(lean_object* v_fields_1751_, lean_object* v_size_1752_, lean_object* v_nextOffset_1753_){
_start:
{
size_t v_sz_1754_; size_t v___x_1755_; lean_object* v___x_1756_; 
v_sz_1754_ = lean_array_size(v_fields_1751_);
v___x_1755_ = ((size_t)0ULL);
v___x_1756_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__0(v_size_1752_, v_sz_1754_, v___x_1755_, v_fields_1751_, v_nextOffset_1753_);
return v___x_1756_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___lam__0___boxed(lean_object* v_fields_1757_, lean_object* v_size_1758_, lean_object* v_nextOffset_1759_){
_start:
{
lean_object* v_res_1760_; 
v_res_1760_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___lam__0(v_fields_1757_, v_size_1758_, v_nextOffset_1759_);
lean_dec(v_size_1758_);
return v_res_1760_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__5(size_t v_sz_1761_, size_t v_i_1762_, lean_object* v_bs_1763_){
_start:
{
uint8_t v___x_1764_; 
v___x_1764_ = lean_usize_dec_lt(v_i_1762_, v_sz_1761_);
if (v___x_1764_ == 0)
{
return v_bs_1763_;
}
else
{
lean_object* v_v_1765_; lean_object* v___x_1766_; lean_object* v_bs_x27_1767_; lean_object* v___y_1769_; 
v_v_1765_ = lean_array_uget(v_bs_1763_, v_i_1762_);
v___x_1766_ = lean_unsigned_to_nat(0u);
v_bs_x27_1767_ = lean_array_uset(v_bs_1763_, v_i_1762_, v___x_1766_);
if (lean_obj_tag(v_v_1765_) == 1)
{
lean_object* v_i_1774_; lean_object* v_type_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; uint8_t v___x_1778_; 
v_i_1774_ = lean_ctor_get(v_v_1765_, 0);
v_type_1775_ = lean_ctor_get(v_v_1765_, 1);
v___x_1776_ = l_Lean_Compiler_LCNF_spillLinkIdx;
v___x_1777_ = lean_nat_div(v_i_1774_, v___x_1776_);
v___x_1778_ = lean_nat_dec_eq(v___x_1777_, v___x_1766_);
if (v___x_1778_ == 0)
{
lean_object* v___x_1779_; lean_object* v___x_1780_; 
lean_inc_ref(v_type_1775_);
lean_inc(v_i_1774_);
lean_dec_ref_known(v_v_1765_, 2);
v___x_1779_ = lean_nat_mod(v_i_1774_, v___x_1776_);
lean_dec(v_i_1774_);
v___x_1780_ = lean_alloc_ctor(5, 3, 0);
lean_ctor_set(v___x_1780_, 0, v___x_1777_);
lean_ctor_set(v___x_1780_, 1, v___x_1779_);
lean_ctor_set(v___x_1780_, 2, v_type_1775_);
v___y_1769_ = v___x_1780_;
goto v___jp_1768_;
}
else
{
lean_dec(v___x_1777_);
v___y_1769_ = v_v_1765_;
goto v___jp_1768_;
}
}
else
{
v___y_1769_ = v_v_1765_;
goto v___jp_1768_;
}
v___jp_1768_:
{
size_t v___x_1770_; size_t v___x_1771_; lean_object* v___x_1772_; 
v___x_1770_ = ((size_t)1ULL);
v___x_1771_ = lean_usize_add(v_i_1762_, v___x_1770_);
v___x_1772_ = lean_array_uset(v_bs_x27_1767_, v_i_1762_, v___y_1769_);
v_i_1762_ = v___x_1771_;
v_bs_1763_ = v___x_1772_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__5___boxed(lean_object* v_sz_1781_, lean_object* v_i_1782_, lean_object* v_bs_1783_){
_start:
{
size_t v_sz_boxed_1784_; size_t v_i_boxed_1785_; lean_object* v_res_1786_; 
v_sz_boxed_1784_ = lean_unbox_usize(v_sz_1781_);
lean_dec(v_sz_1781_);
v_i_boxed_1785_ = lean_unbox_usize(v_i_1782_);
lean_dec(v_i_1782_);
v_res_1786_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__5(v_sz_boxed_1784_, v_i_boxed_1785_, v_bs_1783_);
return v_res_1786_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__4(size_t v_sz_1787_, size_t v_i_1788_, lean_object* v_bs_1789_, lean_object* v___y_1790_){
_start:
{
uint8_t v___x_1791_; 
v___x_1791_ = lean_usize_dec_lt(v_i_1788_, v_sz_1787_);
if (v___x_1791_ == 0)
{
lean_object* v___x_1792_; 
v___x_1792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1792_, 0, v_bs_1789_);
lean_ctor_set(v___x_1792_, 1, v___y_1790_);
return v___x_1792_;
}
else
{
lean_object* v_v_1793_; lean_object* v___x_1794_; lean_object* v_bs_x27_1795_; lean_object* v_fst_1797_; lean_object* v_snd_1798_; 
v_v_1793_ = lean_array_uget(v_bs_1789_, v_i_1788_);
v___x_1794_ = lean_unsigned_to_nat(0u);
v_bs_x27_1795_ = lean_array_uset(v_bs_1789_, v_i_1788_, v___x_1794_);
if (lean_obj_tag(v_v_1793_) == 2)
{
lean_object* v___x_1804_; uint8_t v_isShared_1805_; uint8_t v_isSharedCheck_1811_; 
v_isSharedCheck_1811_ = !lean_is_exclusive(v_v_1793_);
if (v_isSharedCheck_1811_ == 0)
{
lean_object* v_unused_1812_; 
v_unused_1812_ = lean_ctor_get(v_v_1793_, 0);
lean_dec(v_unused_1812_);
v___x_1804_ = v_v_1793_;
v_isShared_1805_ = v_isSharedCheck_1811_;
goto v_resetjp_1803_;
}
else
{
lean_dec(v_v_1793_);
v___x_1804_ = lean_box(0);
v_isShared_1805_ = v_isSharedCheck_1811_;
goto v_resetjp_1803_;
}
v_resetjp_1803_:
{
lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1809_; 
v___x_1806_ = lean_unsigned_to_nat(1u);
v___x_1807_ = lean_nat_add(v___y_1790_, v___x_1806_);
if (v_isShared_1805_ == 0)
{
lean_ctor_set(v___x_1804_, 0, v___y_1790_);
v___x_1809_ = v___x_1804_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1810_; 
v_reuseFailAlloc_1810_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1810_, 0, v___y_1790_);
v___x_1809_ = v_reuseFailAlloc_1810_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
v_fst_1797_ = v___x_1809_;
v_snd_1798_ = v___x_1807_;
goto v___jp_1796_;
}
}
}
else
{
v_fst_1797_ = v_v_1793_;
v_snd_1798_ = v___y_1790_;
goto v___jp_1796_;
}
v___jp_1796_:
{
size_t v___x_1799_; size_t v___x_1800_; lean_object* v___x_1801_; 
v___x_1799_ = ((size_t)1ULL);
v___x_1800_ = lean_usize_add(v_i_1788_, v___x_1799_);
v___x_1801_ = lean_array_uset(v_bs_x27_1795_, v_i_1788_, v_fst_1797_);
v_i_1788_ = v___x_1800_;
v_bs_1789_ = v___x_1801_;
v___y_1790_ = v_snd_1798_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__4___boxed(lean_object* v_sz_1813_, lean_object* v_i_1814_, lean_object* v_bs_1815_, lean_object* v___y_1816_){
_start:
{
size_t v_sz_boxed_1817_; size_t v_i_boxed_1818_; lean_object* v_res_1819_; 
v_sz_boxed_1817_ = lean_unbox_usize(v_sz_1813_);
lean_dec(v_sz_1813_);
v_i_boxed_1818_ = lean_unbox_usize(v_i_1814_);
lean_dec(v_i_1814_);
v_res_1819_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__4(v_sz_boxed_1817_, v_i_boxed_1818_, v_bs_1815_, v___y_1816_);
return v_res_1819_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; 
v___x_1821_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__2));
v___x_1822_ = lean_unsigned_to_nat(15u);
v___x_1823_ = lean_unsigned_to_nat(266u);
v___x_1824_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1___closed__0));
v___x_1825_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__0));
v___x_1826_ = l_mkPanicMessageWithDecl(v___x_1825_, v___x_1824_, v___x_1823_, v___x_1822_, v___x_1821_);
return v___x_1826_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(lean_object* v___f_1827_, lean_object* v_fst_1828_, lean_object* v_fst_1829_, lean_object* v_fst_1830_, lean_object* v_fst_1831_, lean_object* v_snd_1832_, lean_object* v_x_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_){
_start:
{
lean_object* v___x_1839_; lean_object* v___x_1840_; 
v___x_1839_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1___closed__1, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1___closed__1);
v___x_1840_ = l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__2(v___x_1839_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_);
if (lean_obj_tag(v___x_1840_) == 0)
{
lean_object* v_a_1841_; lean_object* v___x_1842_; 
v_a_1841_ = lean_ctor_get(v___x_1840_, 0);
lean_inc(v_a_1841_);
lean_dec_ref_known(v___x_1840_, 1);
lean_inc(v___y_1837_);
lean_inc_ref(v___y_1836_);
lean_inc(v___y_1835_);
lean_inc_ref(v___y_1834_);
v___x_1842_ = lean_apply_11(v___f_1827_, v_a_1841_, v_fst_1828_, v_fst_1829_, v_fst_1830_, v_fst_1831_, v_snd_1832_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_, lean_box(0));
return v___x_1842_;
}
else
{
lean_object* v_a_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1850_; 
lean_dec(v_snd_1832_);
lean_dec(v_fst_1831_);
lean_dec(v_fst_1830_);
lean_dec(v_fst_1829_);
lean_dec(v_fst_1828_);
lean_dec_ref(v___f_1827_);
v_a_1843_ = lean_ctor_get(v___x_1840_, 0);
v_isSharedCheck_1850_ = !lean_is_exclusive(v___x_1840_);
if (v_isSharedCheck_1850_ == 0)
{
v___x_1845_ = v___x_1840_;
v_isShared_1846_ = v_isSharedCheck_1850_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_a_1843_);
lean_dec(v___x_1840_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1850_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
lean_object* v___x_1848_; 
if (v_isShared_1846_ == 0)
{
v___x_1848_ = v___x_1845_;
goto v_reusejp_1847_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v_a_1843_);
v___x_1848_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1847_;
}
v_reusejp_1847_:
{
return v___x_1848_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1___boxed(lean_object* v___f_1851_, lean_object* v_fst_1852_, lean_object* v_fst_1853_, lean_object* v_fst_1854_, lean_object* v_fst_1855_, lean_object* v_snd_1856_, lean_object* v_x_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_){
_start:
{
lean_object* v_res_1863_; 
v_res_1863_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1851_, v_fst_1852_, v_fst_1853_, v_fst_1854_, v_fst_1855_, v_snd_1856_, v_x_1857_, v___y_1858_, v___y_1859_, v___y_1860_, v___y_1861_);
lean_dec(v___y_1861_);
lean_dec_ref(v___y_1860_);
lean_dec(v___y_1859_);
lean_dec_ref(v___y_1858_);
lean_dec_ref(v_x_1857_);
return v_res_1863_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__0(lean_object* v_fst_1864_, lean_object* v_ctorField_1865_, lean_object* v_nextIdx_1866_, uint8_t v_has1BScalar_1867_, uint8_t v_has2BScalar_1868_, uint8_t v_has4BScalar_1869_, uint8_t v_has8BScalar_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_){
_start:
{
lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; 
v___x_1876_ = lean_array_push(v_fst_1864_, v_ctorField_1865_);
v___x_1877_ = lean_box(v_has4BScalar_1869_);
v___x_1878_ = lean_box(v_has8BScalar_1870_);
v___x_1879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1879_, 0, v___x_1877_);
lean_ctor_set(v___x_1879_, 1, v___x_1878_);
v___x_1880_ = lean_box(v_has2BScalar_1868_);
v___x_1881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1881_, 0, v___x_1880_);
lean_ctor_set(v___x_1881_, 1, v___x_1879_);
v___x_1882_ = lean_box(v_has1BScalar_1867_);
v___x_1883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1883_, 0, v___x_1882_);
lean_ctor_set(v___x_1883_, 1, v___x_1881_);
v___x_1884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1884_, 0, v_nextIdx_1866_);
lean_ctor_set(v___x_1884_, 1, v___x_1883_);
v___x_1885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1885_, 0, v___x_1876_);
lean_ctor_set(v___x_1885_, 1, v___x_1884_);
v___x_1886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1886_, 0, v___x_1885_);
v___x_1887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1887_, 0, v___x_1886_);
return v___x_1887_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__0___boxed(lean_object* v_fst_1888_, lean_object* v_ctorField_1889_, lean_object* v_nextIdx_1890_, lean_object* v_has1BScalar_1891_, lean_object* v_has2BScalar_1892_, lean_object* v_has4BScalar_1893_, lean_object* v_has8BScalar_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_){
_start:
{
uint8_t v_has1BScalar_boxed_1900_; uint8_t v_has2BScalar_boxed_1901_; uint8_t v_has4BScalar_boxed_1902_; uint8_t v_has8BScalar_boxed_1903_; lean_object* v_res_1904_; 
v_has1BScalar_boxed_1900_ = lean_unbox(v_has1BScalar_1891_);
v_has2BScalar_boxed_1901_ = lean_unbox(v_has2BScalar_1892_);
v_has4BScalar_boxed_1902_ = lean_unbox(v_has4BScalar_1893_);
v_has8BScalar_boxed_1903_ = lean_unbox(v_has8BScalar_1894_);
v_res_1904_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__0(v_fst_1888_, v_ctorField_1889_, v_nextIdx_1890_, v_has1BScalar_boxed_1900_, v_has2BScalar_boxed_1901_, v_has4BScalar_boxed_1902_, v_has8BScalar_boxed_1903_, v___y_1895_, v___y_1896_, v___y_1897_, v___y_1898_);
lean_dec(v___y_1898_);
lean_dec_ref(v___y_1897_);
lean_dec(v___y_1896_);
lean_dec_ref(v___y_1895_);
return v_res_1904_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__2(lean_object* v_fst_1905_, lean_object* v___x_1906_, lean_object* v_a_1907_, lean_object* v___f_1908_, lean_object* v_fst_1909_, lean_object* v_fst_1910_, lean_object* v_fst_1911_, lean_object* v_snd_1912_, lean_object* v_00___1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_){
_start:
{
lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; 
v___x_1919_ = lean_nat_add(v_fst_1905_, v___x_1906_);
v___x_1920_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1920_, 0, v_fst_1905_);
lean_ctor_set(v___x_1920_, 1, v_a_1907_);
lean_inc(v___y_1917_);
lean_inc_ref(v___y_1916_);
lean_inc(v___y_1915_);
lean_inc_ref(v___y_1914_);
v___x_1921_ = lean_apply_11(v___f_1908_, v___x_1920_, v___x_1919_, v_fst_1909_, v_fst_1910_, v_fst_1911_, v_snd_1912_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_, lean_box(0));
return v___x_1921_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__2___boxed(lean_object* v_fst_1922_, lean_object* v___x_1923_, lean_object* v_a_1924_, lean_object* v___f_1925_, lean_object* v_fst_1926_, lean_object* v_fst_1927_, lean_object* v_fst_1928_, lean_object* v_snd_1929_, lean_object* v_00___1930_, lean_object* v___y_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_){
_start:
{
lean_object* v_res_1936_; 
v_res_1936_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__2(v_fst_1922_, v___x_1923_, v_a_1924_, v___f_1925_, v_fst_1926_, v_fst_1927_, v_fst_1928_, v_snd_1929_, v_00___1930_, v___y_1931_, v___y_1932_, v___y_1933_, v___y_1934_);
lean_dec(v___y_1934_);
lean_dec_ref(v___y_1933_);
lean_dec(v___y_1932_);
lean_dec_ref(v___y_1931_);
lean_dec(v___x_1923_);
return v_res_1936_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg(lean_object* v_a_1939_, lean_object* v_b_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_){
_start:
{
lean_object* v_array_1946_; lean_object* v_start_1947_; lean_object* v_stop_1948_; lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_2173_; 
v_array_1946_ = lean_ctor_get(v_a_1939_, 0);
v_start_1947_ = lean_ctor_get(v_a_1939_, 1);
v_stop_1948_ = lean_ctor_get(v_a_1939_, 2);
v_isSharedCheck_2173_ = !lean_is_exclusive(v_a_1939_);
if (v_isSharedCheck_2173_ == 0)
{
v___x_1950_ = v_a_1939_;
v_isShared_1951_ = v_isSharedCheck_2173_;
goto v_resetjp_1949_;
}
else
{
lean_inc(v_stop_1948_);
lean_inc(v_start_1947_);
lean_inc(v_array_1946_);
lean_dec(v_a_1939_);
v___x_1950_ = lean_box(0);
v_isShared_1951_ = v_isSharedCheck_2173_;
goto v_resetjp_1949_;
}
v_resetjp_1949_:
{
uint8_t v___x_1952_; 
v___x_1952_ = lean_nat_dec_lt(v_start_1947_, v_stop_1948_);
if (v___x_1952_ == 0)
{
lean_object* v___x_1953_; 
lean_del_object(v___x_1950_);
lean_dec(v_stop_1948_);
lean_dec(v_start_1947_);
lean_dec_ref(v_array_1946_);
v___x_1953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1953_, 0, v_b_1940_);
return v___x_1953_;
}
else
{
lean_object* v_snd_1954_; lean_object* v_snd_1955_; lean_object* v_snd_1956_; lean_object* v_snd_1957_; lean_object* v_fst_1958_; lean_object* v_fst_1959_; lean_object* v_fst_1960_; lean_object* v_fst_1961_; lean_object* v_fst_1962_; lean_object* v_snd_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1968_; 
v_snd_1954_ = lean_ctor_get(v_b_1940_, 1);
lean_inc(v_snd_1954_);
v_snd_1955_ = lean_ctor_get(v_snd_1954_, 1);
lean_inc(v_snd_1955_);
v_snd_1956_ = lean_ctor_get(v_snd_1955_, 1);
lean_inc(v_snd_1956_);
v_snd_1957_ = lean_ctor_get(v_snd_1956_, 1);
lean_inc(v_snd_1957_);
v_fst_1958_ = lean_ctor_get(v_b_1940_, 0);
lean_inc(v_fst_1958_);
lean_dec_ref(v_b_1940_);
v_fst_1959_ = lean_ctor_get(v_snd_1954_, 0);
lean_inc(v_fst_1959_);
lean_dec(v_snd_1954_);
v_fst_1960_ = lean_ctor_get(v_snd_1955_, 0);
lean_inc(v_fst_1960_);
lean_dec(v_snd_1955_);
v_fst_1961_ = lean_ctor_get(v_snd_1956_, 0);
lean_inc(v_fst_1961_);
lean_dec(v_snd_1956_);
v_fst_1962_ = lean_ctor_get(v_snd_1957_, 0);
lean_inc(v_fst_1962_);
v_snd_1963_ = lean_ctor_get(v_snd_1957_, 1);
lean_inc(v_snd_1963_);
lean_dec(v_snd_1957_);
v___x_1964_ = lean_unsigned_to_nat(0u);
v___x_1965_ = lean_unsigned_to_nat(1u);
v___x_1966_ = lean_nat_add(v_start_1947_, v___x_1965_);
lean_inc_ref(v_array_1946_);
if (v_isShared_1951_ == 0)
{
lean_ctor_set(v___x_1950_, 1, v___x_1966_);
v___x_1968_ = v___x_1950_;
goto v_reusejp_1967_;
}
else
{
lean_object* v_reuseFailAlloc_2172_; 
v_reuseFailAlloc_2172_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2172_, 0, v_array_1946_);
lean_ctor_set(v_reuseFailAlloc_2172_, 1, v___x_1966_);
lean_ctor_set(v_reuseFailAlloc_2172_, 2, v_stop_1948_);
v___x_1968_ = v_reuseFailAlloc_2172_;
goto v_reusejp_1967_;
}
v_reusejp_1967_:
{
lean_object* v___y_1970_; lean_object* v___x_1990_; lean_object* v___f_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; 
v___x_1990_ = lean_array_fget(v_array_1946_, v_start_1947_);
lean_dec(v_start_1947_);
lean_dec_ref(v_array_1946_);
lean_inc(v_fst_1958_);
v___f_1991_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__0___boxed), 12, 1);
lean_closure_set(v___f_1991_, 0, v_fst_1958_);
v___x_1992_ = l_Lean_Expr_fvarId_x21(v___x_1990_);
lean_dec(v___x_1990_);
v___x_1993_ = l_Lean_FVarId_getType___redArg(v___x_1992_, v___y_1941_, v___y_1943_, v___y_1944_);
if (lean_obj_tag(v___x_1993_) == 0)
{
lean_object* v_a_1994_; lean_object* v___x_1995_; 
v_a_1994_ = lean_ctor_get(v___x_1993_, 0);
lean_inc(v_a_1994_);
lean_dec_ref_known(v___x_1993_, 1);
v___x_1995_ = l_Lean_Compiler_LCNF_toLCNFType(v_a_1994_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
if (lean_obj_tag(v___x_1995_) == 0)
{
lean_object* v_a_1996_; lean_object* v___x_1997_; 
v_a_1996_ = lean_ctor_get(v___x_1995_, 0);
lean_inc(v_a_1996_);
lean_dec_ref_known(v___x_1995_, 1);
v___x_1997_ = l_Lean_Compiler_LCNF_toMonoType(v_a_1996_, v___y_1943_, v___y_1944_);
if (lean_obj_tag(v___x_1997_) == 0)
{
lean_object* v_a_1998_; lean_object* v___x_1999_; 
v_a_1998_ = lean_ctor_get(v___x_1997_, 0);
lean_inc(v_a_1998_);
lean_dec_ref_known(v___x_1997_, 1);
v___x_1999_ = l_Lean_Compiler_LCNF_toImpureType(v_a_1998_, v___y_1943_, v___y_1944_);
if (lean_obj_tag(v___x_1999_) == 0)
{
lean_object* v_a_2000_; 
v_a_2000_ = lean_ctor_get(v___x_1999_, 0);
lean_inc(v_a_2000_);
lean_dec_ref_known(v___x_1999_, 1);
if (lean_obj_tag(v_a_2000_) == 4)
{
lean_object* v_declName_2001_; 
v_declName_2001_ = lean_ctor_get(v_a_2000_, 0);
if (lean_obj_tag(v_declName_2001_) == 1)
{
lean_object* v_pre_2002_; 
v_pre_2002_ = lean_ctor_get(v_declName_2001_, 0);
if (lean_obj_tag(v_pre_2002_) == 0)
{
lean_object* v_us_2003_; lean_object* v_str_2004_; lean_object* v___x_2005_; uint8_t v___x_2006_; 
v_us_2003_ = lean_ctor_get(v_a_2000_, 1);
v_str_2004_ = lean_ctor_get(v_declName_2001_, 1);
v___x_2005_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType___closed__0));
v___x_2006_ = lean_string_dec_eq(v_str_2004_, v___x_2005_);
if (v___x_2006_ == 0)
{
lean_object* v___x_2007_; uint8_t v___x_2008_; 
v___x_2007_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__0));
v___x_2008_ = lean_string_dec_eq(v_str_2004_, v___x_2007_);
if (v___x_2008_ == 0)
{
lean_object* v___x_2009_; uint8_t v___x_2010_; 
v___x_2009_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__10));
v___x_2010_ = lean_string_dec_eq(v_str_2004_, v___x_2009_);
if (v___x_2010_ == 0)
{
lean_object* v___x_2011_; uint8_t v___x_2012_; 
v___x_2011_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__1));
v___x_2012_ = lean_string_dec_eq(v_str_2004_, v___x_2011_);
if (v___x_2012_ == 0)
{
lean_object* v___x_2013_; uint8_t v___x_2014_; 
v___x_2013_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__4));
v___x_2014_ = lean_string_dec_eq(v_str_2004_, v___x_2013_);
if (v___x_2014_ == 0)
{
lean_object* v___x_2015_; uint8_t v___x_2016_; 
v___x_2015_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__6));
v___x_2016_ = lean_string_dec_eq(v_str_2004_, v___x_2015_);
if (v___x_2016_ == 0)
{
lean_object* v___x_2017_; uint8_t v___x_2018_; 
v___x_2017_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__9));
v___x_2018_ = lean_string_dec_eq(v_str_2004_, v___x_2017_);
if (v___x_2018_ == 0)
{
lean_object* v___x_2019_; uint8_t v___x_2020_; 
v___x_2019_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__6));
v___x_2020_ = lean_string_dec_eq(v_str_2004_, v___x_2019_);
if (v___x_2020_ == 0)
{
lean_object* v___x_2021_; uint8_t v___x_2022_; 
v___x_2021_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__3));
v___x_2022_ = lean_string_dec_eq(v_str_2004_, v___x_2021_);
if (v___x_2022_ == 0)
{
lean_object* v___x_2023_; uint8_t v___x_2024_; 
v___x_2023_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__0));
v___x_2024_ = lean_string_dec_eq(v_str_2004_, v___x_2023_);
if (v___x_2024_ == 0)
{
lean_object* v___x_2025_; uint8_t v___x_2026_; 
v___x_2025_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__3));
v___x_2026_ = lean_string_dec_eq(v_str_2004_, v___x_2025_);
if (v___x_2026_ == 0)
{
lean_object* v___x_2027_; uint8_t v___x_2028_; 
v___x_2027_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__2));
v___x_2028_ = lean_string_dec_eq(v_str_2004_, v___x_2027_);
if (v___x_2028_ == 0)
{
lean_object* v___x_2029_; 
lean_dec(v_fst_1958_);
v___x_2029_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1991_, v_fst_1959_, v_fst_1960_, v_fst_1961_, v_fst_1962_, v_snd_1963_, v_a_2000_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
lean_dec_ref_known(v_a_2000_, 2);
v___y_1970_ = v___x_2029_;
goto v___jp_1969_;
}
else
{
lean_inc(v_us_2003_);
lean_inc(v_pre_2002_);
lean_dec_ref_known(v_a_2000_, 2);
if (lean_obj_tag(v_us_2003_) == 0)
{
lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; uint8_t v___x_2034_; uint8_t v___x_2035_; uint8_t v___x_2036_; lean_object* v___x_2037_; 
lean_dec_ref(v___f_1991_);
lean_dec(v_snd_1963_);
v___x_2030_ = lean_unsigned_to_nat(8u);
v___x_2031_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__20));
v___x_2032_ = l_Lean_Expr_const___override(v___x_2031_, v_us_2003_);
v___x_2033_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_2033_, 0, v___x_2030_);
lean_ctor_set(v___x_2033_, 1, v___x_1964_);
lean_ctor_set(v___x_2033_, 2, v___x_2032_);
v___x_2034_ = lean_unbox(v_fst_1960_);
lean_dec(v_fst_1960_);
v___x_2035_ = lean_unbox(v_fst_1961_);
lean_dec(v_fst_1961_);
v___x_2036_ = lean_unbox(v_fst_1962_);
lean_dec(v_fst_1962_);
v___x_2037_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__0(v_fst_1958_, v___x_2033_, v_fst_1959_, v___x_2034_, v___x_2035_, v___x_2036_, v___x_2028_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
v___y_1970_ = v___x_2037_;
goto v___jp_1969_;
}
else
{
lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; 
lean_dec(v_fst_1958_);
v___x_2038_ = l_Lean_Name_str___override(v_pre_2002_, v___x_2027_);
v___x_2039_ = l_Lean_Expr_const___override(v___x_2038_, v_us_2003_);
v___x_2040_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1991_, v_fst_1959_, v_fst_1960_, v_fst_1961_, v_fst_1962_, v_snd_1963_, v___x_2039_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
lean_dec_ref(v___x_2039_);
v___y_1970_ = v___x_2040_;
goto v___jp_1969_;
}
}
}
else
{
lean_inc(v_us_2003_);
lean_inc(v_pre_2002_);
lean_dec_ref_known(v_a_2000_, 2);
if (lean_obj_tag(v_us_2003_) == 0)
{
lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; uint8_t v___x_2045_; uint8_t v___x_2046_; uint8_t v___x_2047_; lean_object* v___x_2048_; 
lean_dec_ref(v___f_1991_);
lean_dec(v_fst_1962_);
v___x_2041_ = lean_unsigned_to_nat(4u);
v___x_2042_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__17));
v___x_2043_ = l_Lean_Expr_const___override(v___x_2042_, v_us_2003_);
v___x_2044_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_2044_, 0, v___x_2041_);
lean_ctor_set(v___x_2044_, 1, v___x_1964_);
lean_ctor_set(v___x_2044_, 2, v___x_2043_);
v___x_2045_ = lean_unbox(v_fst_1960_);
lean_dec(v_fst_1960_);
v___x_2046_ = lean_unbox(v_fst_1961_);
lean_dec(v_fst_1961_);
v___x_2047_ = lean_unbox(v_snd_1963_);
lean_dec(v_snd_1963_);
v___x_2048_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__0(v_fst_1958_, v___x_2044_, v_fst_1959_, v___x_2045_, v___x_2046_, v___x_2026_, v___x_2047_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
v___y_1970_ = v___x_2048_;
goto v___jp_1969_;
}
else
{
lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; 
lean_dec(v_fst_1958_);
v___x_2049_ = l_Lean_Name_str___override(v_pre_2002_, v___x_2025_);
v___x_2050_ = l_Lean_Expr_const___override(v___x_2049_, v_us_2003_);
v___x_2051_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1991_, v_fst_1959_, v_fst_1960_, v_fst_1961_, v_fst_1962_, v_snd_1963_, v___x_2050_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
lean_dec_ref(v___x_2050_);
v___y_1970_ = v___x_2051_;
goto v___jp_1969_;
}
}
}
else
{
lean_inc(v_us_2003_);
lean_inc(v_pre_2002_);
lean_dec_ref_known(v_a_2000_, 2);
if (lean_obj_tag(v_us_2003_) == 0)
{
lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; uint8_t v___x_2056_; uint8_t v___x_2057_; uint8_t v___x_2058_; lean_object* v___x_2059_; 
lean_dec_ref(v___f_1991_);
lean_dec(v_snd_1963_);
v___x_2052_ = lean_unsigned_to_nat(8u);
v___x_2053_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_builtinImpureType_x3f___closed__26));
v___x_2054_ = l_Lean_Expr_const___override(v___x_2053_, v_us_2003_);
v___x_2055_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_2055_, 0, v___x_2052_);
lean_ctor_set(v___x_2055_, 1, v___x_1964_);
lean_ctor_set(v___x_2055_, 2, v___x_2054_);
v___x_2056_ = lean_unbox(v_fst_1960_);
lean_dec(v_fst_1960_);
v___x_2057_ = lean_unbox(v_fst_1961_);
lean_dec(v_fst_1961_);
v___x_2058_ = lean_unbox(v_fst_1962_);
lean_dec(v_fst_1962_);
v___x_2059_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__0(v_fst_1958_, v___x_2055_, v_fst_1959_, v___x_2056_, v___x_2057_, v___x_2058_, v___x_2024_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
v___y_1970_ = v___x_2059_;
goto v___jp_1969_;
}
else
{
lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; 
lean_dec(v_fst_1958_);
v___x_2060_ = l_Lean_Name_str___override(v_pre_2002_, v___x_2023_);
v___x_2061_ = l_Lean_Expr_const___override(v___x_2060_, v_us_2003_);
v___x_2062_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1991_, v_fst_1959_, v_fst_1960_, v_fst_1961_, v_fst_1962_, v_snd_1963_, v___x_2061_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
lean_dec_ref(v___x_2061_);
v___y_1970_ = v___x_2062_;
goto v___jp_1969_;
}
}
}
else
{
lean_inc(v_us_2003_);
lean_inc(v_pre_2002_);
lean_dec_ref_known(v_a_2000_, 2);
if (lean_obj_tag(v_us_2003_) == 0)
{
lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; uint8_t v___x_2067_; uint8_t v___x_2068_; uint8_t v___x_2069_; lean_object* v___x_2070_; 
lean_dec_ref(v___f_1991_);
lean_dec(v_fst_1962_);
v___x_2063_ = lean_unsigned_to_nat(4u);
v___x_2064_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__4));
v___x_2065_ = l_Lean_Expr_const___override(v___x_2064_, v_us_2003_);
v___x_2066_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_2066_, 0, v___x_2063_);
lean_ctor_set(v___x_2066_, 1, v___x_1964_);
lean_ctor_set(v___x_2066_, 2, v___x_2065_);
v___x_2067_ = lean_unbox(v_fst_1960_);
lean_dec(v_fst_1960_);
v___x_2068_ = lean_unbox(v_fst_1961_);
lean_dec(v_fst_1961_);
v___x_2069_ = lean_unbox(v_snd_1963_);
lean_dec(v_snd_1963_);
v___x_2070_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__0(v_fst_1958_, v___x_2066_, v_fst_1959_, v___x_2067_, v___x_2068_, v___x_2022_, v___x_2069_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
v___y_1970_ = v___x_2070_;
goto v___jp_1969_;
}
else
{
lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; 
lean_dec(v_fst_1958_);
v___x_2071_ = l_Lean_Name_str___override(v_pre_2002_, v___x_2021_);
v___x_2072_ = l_Lean_Expr_const___override(v___x_2071_, v_us_2003_);
v___x_2073_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1991_, v_fst_1959_, v_fst_1960_, v_fst_1961_, v_fst_1962_, v_snd_1963_, v___x_2072_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
lean_dec_ref(v___x_2072_);
v___y_1970_ = v___x_2073_;
goto v___jp_1969_;
}
}
}
else
{
lean_inc(v_us_2003_);
lean_inc(v_pre_2002_);
lean_dec_ref_known(v_a_2000_, 2);
if (lean_obj_tag(v_us_2003_) == 0)
{
lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; uint8_t v___x_2078_; uint8_t v___x_2079_; uint8_t v___x_2080_; lean_object* v___x_2081_; 
lean_dec_ref(v___f_1991_);
lean_dec(v_fst_1961_);
v___x_2074_ = lean_unsigned_to_nat(2u);
v___x_2075_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__7));
v___x_2076_ = l_Lean_Expr_const___override(v___x_2075_, v_us_2003_);
v___x_2077_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_2077_, 0, v___x_2074_);
lean_ctor_set(v___x_2077_, 1, v___x_1964_);
lean_ctor_set(v___x_2077_, 2, v___x_2076_);
v___x_2078_ = lean_unbox(v_fst_1960_);
lean_dec(v_fst_1960_);
v___x_2079_ = lean_unbox(v_fst_1962_);
lean_dec(v_fst_1962_);
v___x_2080_ = lean_unbox(v_snd_1963_);
lean_dec(v_snd_1963_);
v___x_2081_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__0(v_fst_1958_, v___x_2077_, v_fst_1959_, v___x_2078_, v___x_2020_, v___x_2079_, v___x_2080_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
v___y_1970_ = v___x_2081_;
goto v___jp_1969_;
}
else
{
lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; 
lean_dec(v_fst_1958_);
v___x_2082_ = l_Lean_Name_str___override(v_pre_2002_, v___x_2019_);
v___x_2083_ = l_Lean_Expr_const___override(v___x_2082_, v_us_2003_);
v___x_2084_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1991_, v_fst_1959_, v_fst_1960_, v_fst_1961_, v_fst_1962_, v_snd_1963_, v___x_2083_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
lean_dec_ref(v___x_2083_);
v___y_1970_ = v___x_2084_;
goto v___jp_1969_;
}
}
}
else
{
lean_inc(v_us_2003_);
lean_inc(v_pre_2002_);
lean_dec_ref_known(v_a_2000_, 2);
if (lean_obj_tag(v_us_2003_) == 0)
{
lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; uint8_t v___x_2088_; uint8_t v___x_2089_; uint8_t v___x_2090_; lean_object* v___x_2091_; 
lean_dec_ref(v___f_1991_);
lean_dec(v_fst_1960_);
v___x_2085_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeForEnum___closed__10));
v___x_2086_ = l_Lean_Expr_const___override(v___x_2085_, v_us_2003_);
v___x_2087_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_2087_, 0, v___x_1965_);
lean_ctor_set(v___x_2087_, 1, v___x_1964_);
lean_ctor_set(v___x_2087_, 2, v___x_2086_);
v___x_2088_ = lean_unbox(v_fst_1961_);
lean_dec(v_fst_1961_);
v___x_2089_ = lean_unbox(v_fst_1962_);
lean_dec(v_fst_1962_);
v___x_2090_ = lean_unbox(v_snd_1963_);
lean_dec(v_snd_1963_);
v___x_2091_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__0(v_fst_1958_, v___x_2087_, v_fst_1959_, v___x_2018_, v___x_2088_, v___x_2089_, v___x_2090_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
v___y_1970_ = v___x_2091_;
goto v___jp_1969_;
}
else
{
lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; 
lean_dec(v_fst_1958_);
v___x_2092_ = l_Lean_Name_str___override(v_pre_2002_, v___x_2017_);
v___x_2093_ = l_Lean_Expr_const___override(v___x_2092_, v_us_2003_);
v___x_2094_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1991_, v_fst_1959_, v_fst_1960_, v_fst_1961_, v_fst_1962_, v_snd_1963_, v___x_2093_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
lean_dec_ref(v___x_2093_);
v___y_1970_ = v___x_2094_;
goto v___jp_1969_;
}
}
}
else
{
lean_inc(v_us_2003_);
lean_inc(v_pre_2002_);
lean_dec_ref_known(v_a_2000_, 2);
if (lean_obj_tag(v_us_2003_) == 0)
{
lean_object* v___x_2095_; uint8_t v___x_2096_; uint8_t v___x_2097_; uint8_t v___x_2098_; uint8_t v___x_2099_; lean_object* v___x_2100_; 
lean_dec_ref(v___f_1991_);
v___x_2095_ = lean_box(4);
v___x_2096_ = lean_unbox(v_fst_1960_);
lean_dec(v_fst_1960_);
v___x_2097_ = lean_unbox(v_fst_1961_);
lean_dec(v_fst_1961_);
v___x_2098_ = lean_unbox(v_fst_1962_);
lean_dec(v_fst_1962_);
v___x_2099_ = lean_unbox(v_snd_1963_);
lean_dec(v_snd_1963_);
v___x_2100_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__0(v_fst_1958_, v___x_2095_, v_fst_1959_, v___x_2096_, v___x_2097_, v___x_2098_, v___x_2099_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
v___y_1970_ = v___x_2100_;
goto v___jp_1969_;
}
else
{
lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; 
lean_dec(v_fst_1958_);
v___x_2101_ = l_Lean_Name_str___override(v_pre_2002_, v___x_2015_);
v___x_2102_ = l_Lean_Expr_const___override(v___x_2101_, v_us_2003_);
v___x_2103_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1991_, v_fst_1959_, v_fst_1960_, v_fst_1961_, v_fst_1962_, v_snd_1963_, v___x_2102_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
lean_dec_ref(v___x_2102_);
v___y_1970_ = v___x_2103_;
goto v___jp_1969_;
}
}
}
else
{
lean_inc(v_us_2003_);
lean_inc(v_pre_2002_);
lean_dec_ref_known(v_a_2000_, 2);
if (lean_obj_tag(v_us_2003_) == 0)
{
lean_object* v___x_2104_; uint8_t v___x_2105_; uint8_t v___x_2106_; uint8_t v___x_2107_; uint8_t v___x_2108_; lean_object* v___x_2109_; 
lean_dec_ref(v___f_1991_);
v___x_2104_ = lean_box(0);
v___x_2105_ = lean_unbox(v_fst_1960_);
lean_dec(v_fst_1960_);
v___x_2106_ = lean_unbox(v_fst_1961_);
lean_dec(v_fst_1961_);
v___x_2107_ = lean_unbox(v_fst_1962_);
lean_dec(v_fst_1962_);
v___x_2108_ = lean_unbox(v_snd_1963_);
lean_dec(v_snd_1963_);
v___x_2109_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__0(v_fst_1958_, v___x_2104_, v_fst_1959_, v___x_2105_, v___x_2106_, v___x_2107_, v___x_2108_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
v___y_1970_ = v___x_2109_;
goto v___jp_1969_;
}
else
{
lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; 
lean_dec(v_fst_1958_);
v___x_2110_ = l_Lean_Name_str___override(v_pre_2002_, v___x_2013_);
v___x_2111_ = l_Lean_Expr_const___override(v___x_2110_, v_us_2003_);
v___x_2112_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1991_, v_fst_1959_, v_fst_1960_, v_fst_1961_, v_fst_1962_, v_snd_1963_, v___x_2111_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
lean_dec_ref(v___x_2111_);
v___y_1970_ = v___x_2112_;
goto v___jp_1969_;
}
}
}
else
{
lean_inc(v_us_2003_);
lean_inc(v_pre_2002_);
lean_dec_ref_known(v_a_2000_, 2);
if (lean_obj_tag(v_us_2003_) == 0)
{
lean_object* v___x_2113_; uint8_t v___x_2114_; uint8_t v___x_2115_; uint8_t v___x_2116_; uint8_t v___x_2117_; lean_object* v___x_2118_; 
lean_dec_ref(v___f_1991_);
v___x_2113_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___closed__0));
v___x_2114_ = lean_unbox(v_fst_1960_);
lean_dec(v_fst_1960_);
v___x_2115_ = lean_unbox(v_fst_1961_);
lean_dec(v_fst_1961_);
v___x_2116_ = lean_unbox(v_fst_1962_);
lean_dec(v_fst_1962_);
v___x_2117_ = lean_unbox(v_snd_1963_);
lean_dec(v_snd_1963_);
v___x_2118_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__0(v_fst_1958_, v___x_2113_, v_fst_1959_, v___x_2114_, v___x_2115_, v___x_2116_, v___x_2117_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
v___y_1970_ = v___x_2118_;
goto v___jp_1969_;
}
else
{
lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; 
lean_dec(v_fst_1958_);
v___x_2119_ = l_Lean_Name_str___override(v_pre_2002_, v___x_2011_);
v___x_2120_ = l_Lean_Expr_const___override(v___x_2119_, v_us_2003_);
v___x_2121_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1991_, v_fst_1959_, v_fst_1960_, v_fst_1961_, v_fst_1962_, v_snd_1963_, v___x_2120_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
lean_dec_ref(v___x_2120_);
v___y_1970_ = v___x_2121_;
goto v___jp_1969_;
}
}
}
else
{
lean_dec(v_fst_1958_);
if (lean_obj_tag(v_us_2003_) == 0)
{
lean_object* v___x_2122_; lean_object* v___x_2123_; 
v___x_2122_ = lean_box(0);
v___x_2123_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__2(v_fst_1959_, v___x_1965_, v_a_2000_, v___f_1991_, v_fst_1960_, v_fst_1961_, v_fst_1962_, v_snd_1963_, v___x_2122_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
v___y_1970_ = v___x_2123_;
goto v___jp_1969_;
}
else
{
lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; 
lean_inc(v_us_2003_);
lean_inc(v_pre_2002_);
lean_dec_ref_known(v_a_2000_, 2);
v___x_2124_ = l_Lean_Name_str___override(v_pre_2002_, v___x_2009_);
v___x_2125_ = l_Lean_Expr_const___override(v___x_2124_, v_us_2003_);
v___x_2126_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1991_, v_fst_1959_, v_fst_1960_, v_fst_1961_, v_fst_1962_, v_snd_1963_, v___x_2125_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
lean_dec_ref(v___x_2125_);
v___y_1970_ = v___x_2126_;
goto v___jp_1969_;
}
}
}
else
{
lean_dec(v_fst_1958_);
if (lean_obj_tag(v_us_2003_) == 0)
{
lean_object* v___x_2127_; lean_object* v___x_2128_; 
v___x_2127_ = lean_box(0);
v___x_2128_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__2(v_fst_1959_, v___x_1965_, v_a_2000_, v___f_1991_, v_fst_1960_, v_fst_1961_, v_fst_1962_, v_snd_1963_, v___x_2127_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
v___y_1970_ = v___x_2128_;
goto v___jp_1969_;
}
else
{
lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; 
lean_inc(v_us_2003_);
lean_inc(v_pre_2002_);
lean_dec_ref_known(v_a_2000_, 2);
v___x_2129_ = l_Lean_Name_str___override(v_pre_2002_, v___x_2007_);
v___x_2130_ = l_Lean_Expr_const___override(v___x_2129_, v_us_2003_);
v___x_2131_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1991_, v_fst_1959_, v_fst_1960_, v_fst_1961_, v_fst_1962_, v_snd_1963_, v___x_2130_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
lean_dec_ref(v___x_2130_);
v___y_1970_ = v___x_2131_;
goto v___jp_1969_;
}
}
}
else
{
lean_dec(v_fst_1958_);
if (lean_obj_tag(v_us_2003_) == 0)
{
lean_object* v___x_2132_; lean_object* v___x_2133_; 
v___x_2132_ = lean_box(0);
v___x_2133_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__2(v_fst_1959_, v___x_1965_, v_a_2000_, v___f_1991_, v_fst_1960_, v_fst_1961_, v_fst_1962_, v_snd_1963_, v___x_2132_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
v___y_1970_ = v___x_2133_;
goto v___jp_1969_;
}
else
{
lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; 
lean_inc(v_us_2003_);
lean_inc(v_pre_2002_);
lean_dec_ref_known(v_a_2000_, 2);
v___x_2134_ = l_Lean_Name_str___override(v_pre_2002_, v___x_2005_);
v___x_2135_ = l_Lean_Expr_const___override(v___x_2134_, v_us_2003_);
v___x_2136_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1991_, v_fst_1959_, v_fst_1960_, v_fst_1961_, v_fst_1962_, v_snd_1963_, v___x_2135_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
lean_dec_ref(v___x_2135_);
v___y_1970_ = v___x_2136_;
goto v___jp_1969_;
}
}
}
else
{
lean_object* v___x_2137_; 
lean_dec(v_fst_1958_);
v___x_2137_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1991_, v_fst_1959_, v_fst_1960_, v_fst_1961_, v_fst_1962_, v_snd_1963_, v_a_2000_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
lean_dec_ref_known(v_a_2000_, 2);
v___y_1970_ = v___x_2137_;
goto v___jp_1969_;
}
}
else
{
lean_object* v___x_2138_; 
lean_dec(v_fst_1958_);
v___x_2138_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1991_, v_fst_1959_, v_fst_1960_, v_fst_1961_, v_fst_1962_, v_snd_1963_, v_a_2000_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
lean_dec_ref_known(v_a_2000_, 2);
v___y_1970_ = v___x_2138_;
goto v___jp_1969_;
}
}
else
{
lean_object* v___x_2139_; 
lean_dec(v_fst_1958_);
v___x_2139_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1(v___f_1991_, v_fst_1959_, v_fst_1960_, v_fst_1961_, v_fst_1962_, v_snd_1963_, v_a_2000_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
lean_dec(v_a_2000_);
v___y_1970_ = v___x_2139_;
goto v___jp_1969_;
}
}
else
{
lean_object* v_a_2140_; lean_object* v___x_2142_; uint8_t v_isShared_2143_; uint8_t v_isSharedCheck_2147_; 
lean_dec_ref(v___f_1991_);
lean_dec_ref(v___x_1968_);
lean_dec(v_snd_1963_);
lean_dec(v_fst_1962_);
lean_dec(v_fst_1961_);
lean_dec(v_fst_1960_);
lean_dec(v_fst_1959_);
lean_dec(v_fst_1958_);
v_a_2140_ = lean_ctor_get(v___x_1999_, 0);
v_isSharedCheck_2147_ = !lean_is_exclusive(v___x_1999_);
if (v_isSharedCheck_2147_ == 0)
{
v___x_2142_ = v___x_1999_;
v_isShared_2143_ = v_isSharedCheck_2147_;
goto v_resetjp_2141_;
}
else
{
lean_inc(v_a_2140_);
lean_dec(v___x_1999_);
v___x_2142_ = lean_box(0);
v_isShared_2143_ = v_isSharedCheck_2147_;
goto v_resetjp_2141_;
}
v_resetjp_2141_:
{
lean_object* v___x_2145_; 
if (v_isShared_2143_ == 0)
{
v___x_2145_ = v___x_2142_;
goto v_reusejp_2144_;
}
else
{
lean_object* v_reuseFailAlloc_2146_; 
v_reuseFailAlloc_2146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2146_, 0, v_a_2140_);
v___x_2145_ = v_reuseFailAlloc_2146_;
goto v_reusejp_2144_;
}
v_reusejp_2144_:
{
return v___x_2145_;
}
}
}
}
else
{
lean_object* v_a_2148_; lean_object* v___x_2150_; uint8_t v_isShared_2151_; uint8_t v_isSharedCheck_2155_; 
lean_dec_ref(v___f_1991_);
lean_dec_ref(v___x_1968_);
lean_dec(v_snd_1963_);
lean_dec(v_fst_1962_);
lean_dec(v_fst_1961_);
lean_dec(v_fst_1960_);
lean_dec(v_fst_1959_);
lean_dec(v_fst_1958_);
v_a_2148_ = lean_ctor_get(v___x_1997_, 0);
v_isSharedCheck_2155_ = !lean_is_exclusive(v___x_1997_);
if (v_isSharedCheck_2155_ == 0)
{
v___x_2150_ = v___x_1997_;
v_isShared_2151_ = v_isSharedCheck_2155_;
goto v_resetjp_2149_;
}
else
{
lean_inc(v_a_2148_);
lean_dec(v___x_1997_);
v___x_2150_ = lean_box(0);
v_isShared_2151_ = v_isSharedCheck_2155_;
goto v_resetjp_2149_;
}
v_resetjp_2149_:
{
lean_object* v___x_2153_; 
if (v_isShared_2151_ == 0)
{
v___x_2153_ = v___x_2150_;
goto v_reusejp_2152_;
}
else
{
lean_object* v_reuseFailAlloc_2154_; 
v_reuseFailAlloc_2154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2154_, 0, v_a_2148_);
v___x_2153_ = v_reuseFailAlloc_2154_;
goto v_reusejp_2152_;
}
v_reusejp_2152_:
{
return v___x_2153_;
}
}
}
}
else
{
lean_object* v_a_2156_; lean_object* v___x_2158_; uint8_t v_isShared_2159_; uint8_t v_isSharedCheck_2163_; 
lean_dec_ref(v___f_1991_);
lean_dec_ref(v___x_1968_);
lean_dec(v_snd_1963_);
lean_dec(v_fst_1962_);
lean_dec(v_fst_1961_);
lean_dec(v_fst_1960_);
lean_dec(v_fst_1959_);
lean_dec(v_fst_1958_);
v_a_2156_ = lean_ctor_get(v___x_1995_, 0);
v_isSharedCheck_2163_ = !lean_is_exclusive(v___x_1995_);
if (v_isSharedCheck_2163_ == 0)
{
v___x_2158_ = v___x_1995_;
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
else
{
lean_inc(v_a_2156_);
lean_dec(v___x_1995_);
v___x_2158_ = lean_box(0);
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
v_resetjp_2157_:
{
lean_object* v___x_2161_; 
if (v_isShared_2159_ == 0)
{
v___x_2161_ = v___x_2158_;
goto v_reusejp_2160_;
}
else
{
lean_object* v_reuseFailAlloc_2162_; 
v_reuseFailAlloc_2162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2162_, 0, v_a_2156_);
v___x_2161_ = v_reuseFailAlloc_2162_;
goto v_reusejp_2160_;
}
v_reusejp_2160_:
{
return v___x_2161_;
}
}
}
}
else
{
lean_object* v_a_2164_; lean_object* v___x_2166_; uint8_t v_isShared_2167_; uint8_t v_isSharedCheck_2171_; 
lean_dec_ref(v___f_1991_);
lean_dec_ref(v___x_1968_);
lean_dec(v_snd_1963_);
lean_dec(v_fst_1962_);
lean_dec(v_fst_1961_);
lean_dec(v_fst_1960_);
lean_dec(v_fst_1959_);
lean_dec(v_fst_1958_);
v_a_2164_ = lean_ctor_get(v___x_1993_, 0);
v_isSharedCheck_2171_ = !lean_is_exclusive(v___x_1993_);
if (v_isSharedCheck_2171_ == 0)
{
v___x_2166_ = v___x_1993_;
v_isShared_2167_ = v_isSharedCheck_2171_;
goto v_resetjp_2165_;
}
else
{
lean_inc(v_a_2164_);
lean_dec(v___x_1993_);
v___x_2166_ = lean_box(0);
v_isShared_2167_ = v_isSharedCheck_2171_;
goto v_resetjp_2165_;
}
v_resetjp_2165_:
{
lean_object* v___x_2169_; 
if (v_isShared_2167_ == 0)
{
v___x_2169_ = v___x_2166_;
goto v_reusejp_2168_;
}
else
{
lean_object* v_reuseFailAlloc_2170_; 
v_reuseFailAlloc_2170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2170_, 0, v_a_2164_);
v___x_2169_ = v_reuseFailAlloc_2170_;
goto v_reusejp_2168_;
}
v_reusejp_2168_:
{
return v___x_2169_;
}
}
}
v___jp_1969_:
{
if (lean_obj_tag(v___y_1970_) == 0)
{
lean_object* v_a_1971_; lean_object* v___x_1973_; uint8_t v_isShared_1974_; uint8_t v_isSharedCheck_1981_; 
v_a_1971_ = lean_ctor_get(v___y_1970_, 0);
v_isSharedCheck_1981_ = !lean_is_exclusive(v___y_1970_);
if (v_isSharedCheck_1981_ == 0)
{
v___x_1973_ = v___y_1970_;
v_isShared_1974_ = v_isSharedCheck_1981_;
goto v_resetjp_1972_;
}
else
{
lean_inc(v_a_1971_);
lean_dec(v___y_1970_);
v___x_1973_ = lean_box(0);
v_isShared_1974_ = v_isSharedCheck_1981_;
goto v_resetjp_1972_;
}
v_resetjp_1972_:
{
if (lean_obj_tag(v_a_1971_) == 0)
{
lean_object* v_a_1975_; lean_object* v___x_1977_; 
lean_dec_ref(v___x_1968_);
v_a_1975_ = lean_ctor_get(v_a_1971_, 0);
lean_inc(v_a_1975_);
lean_dec_ref_known(v_a_1971_, 1);
if (v_isShared_1974_ == 0)
{
lean_ctor_set(v___x_1973_, 0, v_a_1975_);
v___x_1977_ = v___x_1973_;
goto v_reusejp_1976_;
}
else
{
lean_object* v_reuseFailAlloc_1978_; 
v_reuseFailAlloc_1978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1978_, 0, v_a_1975_);
v___x_1977_ = v_reuseFailAlloc_1978_;
goto v_reusejp_1976_;
}
v_reusejp_1976_:
{
return v___x_1977_;
}
}
else
{
lean_object* v_a_1979_; 
lean_del_object(v___x_1973_);
v_a_1979_ = lean_ctor_get(v_a_1971_, 0);
lean_inc(v_a_1979_);
lean_dec_ref_known(v_a_1971_, 1);
v_a_1939_ = v___x_1968_;
v_b_1940_ = v_a_1979_;
goto _start;
}
}
}
else
{
lean_object* v_a_1982_; lean_object* v___x_1984_; uint8_t v_isShared_1985_; uint8_t v_isSharedCheck_1989_; 
lean_dec_ref(v___x_1968_);
v_a_1982_ = lean_ctor_get(v___y_1970_, 0);
v_isSharedCheck_1989_ = !lean_is_exclusive(v___y_1970_);
if (v_isSharedCheck_1989_ == 0)
{
v___x_1984_ = v___y_1970_;
v_isShared_1985_ = v_isSharedCheck_1989_;
goto v_resetjp_1983_;
}
else
{
lean_inc(v_a_1982_);
lean_dec(v___y_1970_);
v___x_1984_ = lean_box(0);
v_isShared_1985_ = v_isSharedCheck_1989_;
goto v_resetjp_1983_;
}
v_resetjp_1983_:
{
lean_object* v___x_1987_; 
if (v_isShared_1985_ == 0)
{
v___x_1987_ = v___x_1984_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_1988_; 
v_reuseFailAlloc_1988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1988_, 0, v_a_1982_);
v___x_1987_ = v_reuseFailAlloc_1988_;
goto v_reusejp_1986_;
}
v_reusejp_1986_:
{
return v___x_1987_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___boxed(lean_object* v_a_2174_, lean_object* v_b_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_, lean_object* v___y_2179_, lean_object* v___y_2180_){
_start:
{
lean_object* v_res_2181_; 
v_res_2181_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg(v_a_2174_, v_b_2175_, v___y_2176_, v___y_2177_, v___y_2178_, v___y_2179_);
lean_dec(v___y_2179_);
lean_dec_ref(v___y_2178_);
lean_dec(v___y_2177_);
lean_dec_ref(v___y_2176_);
return v_res_2181_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___lam__1___closed__0(void){
_start:
{
lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; 
v___x_2182_ = lean_unsigned_to_nat(1u);
v___x_2183_ = l_Lean_Compiler_LCNF_spillLinkIdx;
v___x_2184_ = lean_nat_add(v___x_2183_, v___x_2182_);
return v___x_2184_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___lam__1(lean_object* v_ctorName_2185_, lean_object* v_cidx_2186_, lean_object* v_numFields_2187_, lean_object* v_numParams_2188_, uint8_t v___x_2189_, lean_object* v___f_2190_, lean_object* v_params_2191_, lean_object* v_x_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_){
_start:
{
lean_object* v___y_2199_; lean_object* v___y_2200_; lean_object* v_fields_2201_; lean_object* v_nextOffset_2202_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; 
v___x_2206_ = lean_mk_empty_array_with_capacity(v_numFields_2187_);
v___x_2207_ = lean_unsigned_to_nat(0u);
v___x_2208_ = lean_nat_add(v_numParams_2188_, v_numFields_2187_);
v___x_2209_ = l_Array_toSubarray___redArg(v_params_2191_, v_numParams_2188_, v___x_2208_);
v___x_2210_ = lean_box(v___x_2189_);
v___x_2211_ = lean_box(v___x_2189_);
v___x_2212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2212_, 0, v___x_2210_);
lean_ctor_set(v___x_2212_, 1, v___x_2211_);
v___x_2213_ = lean_box(v___x_2189_);
v___x_2214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2214_, 0, v___x_2213_);
lean_ctor_set(v___x_2214_, 1, v___x_2212_);
v___x_2215_ = lean_box(v___x_2189_);
v___x_2216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2216_, 0, v___x_2215_);
lean_ctor_set(v___x_2216_, 1, v___x_2214_);
v___x_2217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2217_, 0, v___x_2207_);
lean_ctor_set(v___x_2217_, 1, v___x_2216_);
v___x_2218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2218_, 0, v___x_2206_);
lean_ctor_set(v___x_2218_, 1, v___x_2217_);
v___x_2219_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg(v___x_2209_, v___x_2218_, v___y_2193_, v___y_2194_, v___y_2195_, v___y_2196_);
if (lean_obj_tag(v___x_2219_) == 0)
{
lean_object* v_a_2220_; lean_object* v_snd_2221_; lean_object* v_snd_2222_; lean_object* v_fst_2223_; lean_object* v_fst_2224_; lean_object* v_fst_2225_; lean_object* v_snd_2226_; lean_object* v___y_2228_; lean_object* v___y_2229_; lean_object* v_fields_2230_; lean_object* v_nextOffset_2231_; lean_object* v_fst_2237_; lean_object* v_snd_2238_; lean_object* v___y_2240_; lean_object* v___y_2241_; lean_object* v_fields_2242_; lean_object* v_nextOffset_2243_; lean_object* v_fst_2249_; lean_object* v_snd_2250_; lean_object* v___y_2252_; lean_object* v___y_2253_; lean_object* v_fields_2254_; lean_object* v_nextOffset_2255_; lean_object* v_fields_2262_; lean_object* v_nextIdx_2263_; lean_object* v___x_2275_; uint8_t v___x_2276_; 
v_a_2220_ = lean_ctor_get(v___x_2219_, 0);
lean_inc(v_a_2220_);
lean_dec_ref_known(v___x_2219_, 1);
v_snd_2221_ = lean_ctor_get(v_a_2220_, 1);
lean_inc(v_snd_2221_);
v_snd_2222_ = lean_ctor_get(v_snd_2221_, 1);
lean_inc(v_snd_2222_);
v_fst_2223_ = lean_ctor_get(v_a_2220_, 0);
lean_inc(v_fst_2223_);
lean_dec(v_a_2220_);
v_fst_2224_ = lean_ctor_get(v_snd_2221_, 0);
lean_inc(v_fst_2224_);
lean_dec(v_snd_2221_);
v_fst_2225_ = lean_ctor_get(v_snd_2222_, 0);
lean_inc(v_fst_2225_);
v_snd_2226_ = lean_ctor_get(v_snd_2222_, 1);
lean_inc(v_snd_2226_);
lean_dec(v_snd_2222_);
v_fst_2237_ = lean_ctor_get(v_snd_2226_, 0);
lean_inc(v_fst_2237_);
v_snd_2238_ = lean_ctor_get(v_snd_2226_, 1);
lean_inc(v_snd_2238_);
lean_dec(v_snd_2226_);
v_fst_2249_ = lean_ctor_get(v_snd_2238_, 0);
lean_inc(v_fst_2249_);
v_snd_2250_ = lean_ctor_get(v_snd_2238_, 1);
lean_inc(v_snd_2250_);
lean_dec(v_snd_2238_);
v___x_2275_ = l_Lean_Compiler_LCNF_numSpillObjs(v_fst_2224_);
v___x_2276_ = lean_nat_dec_lt(v___x_2207_, v___x_2275_);
lean_dec(v___x_2275_);
if (v___x_2276_ == 0)
{
v_fields_2262_ = v_fst_2223_;
v_nextIdx_2263_ = v_fst_2224_;
goto v___jp_2261_;
}
else
{
size_t v_sz_2277_; size_t v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; 
lean_dec(v_fst_2224_);
v_sz_2277_ = lean_array_size(v_fst_2223_);
v___x_2278_ = ((size_t)0ULL);
v___x_2279_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__5(v_sz_2277_, v___x_2278_, v_fst_2223_);
v___x_2280_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___lam__1___closed__0, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___lam__1___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___lam__1___closed__0);
v_fields_2262_ = v___x_2279_;
v_nextIdx_2263_ = v___x_2280_;
goto v___jp_2261_;
}
v___jp_2227_:
{
uint8_t v___x_2232_; 
v___x_2232_ = lean_unbox(v_fst_2225_);
lean_dec(v_fst_2225_);
if (v___x_2232_ == 0)
{
lean_dec_ref(v___f_2190_);
v___y_2199_ = v___y_2228_;
v___y_2200_ = v___y_2229_;
v_fields_2201_ = v_fields_2230_;
v_nextOffset_2202_ = v_nextOffset_2231_;
goto v___jp_2198_;
}
else
{
lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v_fst_2235_; lean_object* v_snd_2236_; 
v___x_2233_ = lean_unsigned_to_nat(1u);
v___x_2234_ = lean_apply_3(v___f_2190_, v_fields_2230_, v___x_2233_, v_nextOffset_2231_);
v_fst_2235_ = lean_ctor_get(v___x_2234_, 0);
lean_inc(v_fst_2235_);
v_snd_2236_ = lean_ctor_get(v___x_2234_, 1);
lean_inc(v_snd_2236_);
lean_dec_ref(v___x_2234_);
v___y_2199_ = v___y_2228_;
v___y_2200_ = v___y_2229_;
v_fields_2201_ = v_fst_2235_;
v_nextOffset_2202_ = v_snd_2236_;
goto v___jp_2198_;
}
}
v___jp_2239_:
{
uint8_t v___x_2244_; 
v___x_2244_ = lean_unbox(v_fst_2237_);
lean_dec(v_fst_2237_);
if (v___x_2244_ == 0)
{
v___y_2228_ = v___y_2240_;
v___y_2229_ = v___y_2241_;
v_fields_2230_ = v_fields_2242_;
v_nextOffset_2231_ = v_nextOffset_2243_;
goto v___jp_2227_;
}
else
{
lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v_fst_2247_; lean_object* v_snd_2248_; 
v___x_2245_ = lean_unsigned_to_nat(2u);
lean_inc_ref(v___f_2190_);
v___x_2246_ = lean_apply_3(v___f_2190_, v_fields_2242_, v___x_2245_, v_nextOffset_2243_);
v_fst_2247_ = lean_ctor_get(v___x_2246_, 0);
lean_inc(v_fst_2247_);
v_snd_2248_ = lean_ctor_get(v___x_2246_, 1);
lean_inc(v_snd_2248_);
lean_dec_ref(v___x_2246_);
v___y_2228_ = v___y_2240_;
v___y_2229_ = v___y_2241_;
v_fields_2230_ = v_fst_2247_;
v_nextOffset_2231_ = v_snd_2248_;
goto v___jp_2227_;
}
}
v___jp_2251_:
{
uint8_t v___x_2256_; 
v___x_2256_ = lean_unbox(v_fst_2249_);
lean_dec(v_fst_2249_);
if (v___x_2256_ == 0)
{
v___y_2240_ = v___y_2252_;
v___y_2241_ = v___y_2253_;
v_fields_2242_ = v_fields_2254_;
v_nextOffset_2243_ = v_nextOffset_2255_;
goto v___jp_2239_;
}
else
{
lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v_fst_2259_; lean_object* v_snd_2260_; 
v___x_2257_ = lean_unsigned_to_nat(4u);
lean_inc_ref(v___f_2190_);
v___x_2258_ = lean_apply_3(v___f_2190_, v_fields_2254_, v___x_2257_, v_nextOffset_2255_);
v_fst_2259_ = lean_ctor_get(v___x_2258_, 0);
lean_inc(v_fst_2259_);
v_snd_2260_ = lean_ctor_get(v___x_2258_, 1);
lean_inc(v_snd_2260_);
lean_dec_ref(v___x_2258_);
v___y_2240_ = v___y_2252_;
v___y_2241_ = v___y_2253_;
v_fields_2242_ = v_fst_2259_;
v_nextOffset_2243_ = v_snd_2260_;
goto v___jp_2239_;
}
}
v___jp_2261_:
{
size_t v_sz_2264_; size_t v___x_2265_; lean_object* v___x_2266_; lean_object* v_fst_2267_; lean_object* v_snd_2268_; lean_object* v___x_2269_; uint8_t v___x_2270_; 
v_sz_2264_ = lean_array_size(v_fields_2262_);
v___x_2265_ = ((size_t)0ULL);
lean_inc(v_nextIdx_2263_);
v___x_2266_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__4(v_sz_2264_, v___x_2265_, v_fields_2262_, v_nextIdx_2263_);
v_fst_2267_ = lean_ctor_get(v___x_2266_, 0);
lean_inc(v_fst_2267_);
v_snd_2268_ = lean_ctor_get(v___x_2266_, 1);
lean_inc(v_snd_2268_);
lean_dec_ref(v___x_2266_);
v___x_2269_ = lean_nat_sub(v_snd_2268_, v_nextIdx_2263_);
lean_dec(v_snd_2268_);
v___x_2270_ = lean_unbox(v_snd_2250_);
lean_dec(v_snd_2250_);
if (v___x_2270_ == 0)
{
v___y_2252_ = v___x_2269_;
v___y_2253_ = v_nextIdx_2263_;
v_fields_2254_ = v_fst_2267_;
v_nextOffset_2255_ = v___x_2207_;
goto v___jp_2251_;
}
else
{
lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v_fst_2273_; lean_object* v_snd_2274_; 
v___x_2271_ = lean_unsigned_to_nat(8u);
lean_inc_ref(v___f_2190_);
v___x_2272_ = lean_apply_3(v___f_2190_, v_fst_2267_, v___x_2271_, v___x_2207_);
v_fst_2273_ = lean_ctor_get(v___x_2272_, 0);
lean_inc(v_fst_2273_);
v_snd_2274_ = lean_ctor_get(v___x_2272_, 1);
lean_inc(v_snd_2274_);
lean_dec_ref(v___x_2272_);
v___y_2252_ = v___x_2269_;
v___y_2253_ = v_nextIdx_2263_;
v_fields_2254_ = v_fst_2273_;
v_nextOffset_2255_ = v_snd_2274_;
goto v___jp_2251_;
}
}
}
else
{
lean_object* v_a_2281_; lean_object* v___x_2283_; uint8_t v_isShared_2284_; uint8_t v_isSharedCheck_2288_; 
lean_dec_ref(v___f_2190_);
lean_dec(v_cidx_2186_);
lean_dec(v_ctorName_2185_);
v_a_2281_ = lean_ctor_get(v___x_2219_, 0);
v_isSharedCheck_2288_ = !lean_is_exclusive(v___x_2219_);
if (v_isSharedCheck_2288_ == 0)
{
v___x_2283_ = v___x_2219_;
v_isShared_2284_ = v_isSharedCheck_2288_;
goto v_resetjp_2282_;
}
else
{
lean_inc(v_a_2281_);
lean_dec(v___x_2219_);
v___x_2283_ = lean_box(0);
v_isShared_2284_ = v_isSharedCheck_2288_;
goto v_resetjp_2282_;
}
v_resetjp_2282_:
{
lean_object* v___x_2286_; 
if (v_isShared_2284_ == 0)
{
v___x_2286_ = v___x_2283_;
goto v_reusejp_2285_;
}
else
{
lean_object* v_reuseFailAlloc_2287_; 
v_reuseFailAlloc_2287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2287_, 0, v_a_2281_);
v___x_2286_ = v_reuseFailAlloc_2287_;
goto v_reusejp_2285_;
}
v_reusejp_2285_:
{
return v___x_2286_;
}
}
}
v___jp_2198_:
{
lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; 
v___x_2203_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2203_, 0, v_ctorName_2185_);
lean_ctor_set(v___x_2203_, 1, v_cidx_2186_);
lean_ctor_set(v___x_2203_, 2, v___y_2200_);
lean_ctor_set(v___x_2203_, 3, v___y_2199_);
lean_ctor_set(v___x_2203_, 4, v_nextOffset_2202_);
v___x_2204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2204_, 0, v___x_2203_);
lean_ctor_set(v___x_2204_, 1, v_fields_2201_);
v___x_2205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2205_, 0, v___x_2204_);
return v___x_2205_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___lam__1___boxed(lean_object* v_ctorName_2289_, lean_object* v_cidx_2290_, lean_object* v_numFields_2291_, lean_object* v_numParams_2292_, lean_object* v___x_2293_, lean_object* v___f_2294_, lean_object* v_params_2295_, lean_object* v_x_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_){
_start:
{
uint8_t v___x_14834__boxed_2302_; lean_object* v_res_2303_; 
v___x_14834__boxed_2302_ = lean_unbox(v___x_2293_);
v_res_2303_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___lam__1(v_ctorName_2289_, v_cidx_2290_, v_numFields_2291_, v_numParams_2292_, v___x_14834__boxed_2302_, v___f_2294_, v_params_2295_, v_x_2296_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_);
lean_dec(v___y_2300_);
lean_dec_ref(v___y_2299_);
lean_dec(v___y_2298_);
lean_dec_ref(v___y_2297_);
lean_dec_ref(v_x_2296_);
lean_dec(v_numFields_2291_);
return v_res_2303_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___closed__0(void){
_start:
{
lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; 
v___x_2304_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__2));
v___x_2305_ = lean_unsigned_to_nat(66u);
v___x_2306_ = lean_unsigned_to_nat(227u);
v___x_2307_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg___lam__1___closed__0));
v___x_2308_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__0));
v___x_2309_ = l_mkPanicMessageWithDecl(v___x_2308_, v___x_2307_, v___x_2306_, v___x_2305_, v___x_2304_);
return v___x_2309_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache(lean_object* v_ctorName_2311_, lean_object* v_a_2312_, lean_object* v_a_2313_){
_start:
{
lean_object* v___y_2316_; lean_object* v___y_2317_; lean_object* v___f_2320_; lean_object* v___x_2321_; lean_object* v_env_2322_; uint8_t v___x_2323_; lean_object* v___x_2324_; 
v___f_2320_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___closed__1));
v___x_2321_ = lean_st_ref_get(v_a_2313_);
v_env_2322_ = lean_ctor_get(v___x_2321_, 0);
lean_inc_ref(v_env_2322_);
lean_dec(v___x_2321_);
v___x_2323_ = 0;
lean_inc(v_ctorName_2311_);
v___x_2324_ = l_Lean_Environment_find_x3f(v_env_2322_, v_ctorName_2311_, v___x_2323_);
if (lean_obj_tag(v___x_2324_) == 1)
{
lean_object* v_val_2325_; 
v_val_2325_ = lean_ctor_get(v___x_2324_, 0);
lean_inc(v_val_2325_);
lean_dec_ref_known(v___x_2324_, 1);
if (lean_obj_tag(v_val_2325_) == 6)
{
lean_object* v_val_2326_; lean_object* v_toConstantVal_2327_; lean_object* v_cidx_2328_; lean_object* v_numParams_2329_; lean_object* v_numFields_2330_; lean_object* v_type_2331_; lean_object* v___x_2332_; lean_object* v___f_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; 
v_val_2326_ = lean_ctor_get(v_val_2325_, 0);
lean_inc_ref(v_val_2326_);
lean_dec_ref_known(v_val_2325_, 1);
v_toConstantVal_2327_ = lean_ctor_get(v_val_2326_, 0);
lean_inc_ref(v_toConstantVal_2327_);
v_cidx_2328_ = lean_ctor_get(v_val_2326_, 2);
lean_inc(v_cidx_2328_);
v_numParams_2329_ = lean_ctor_get(v_val_2326_, 3);
lean_inc(v_numParams_2329_);
v_numFields_2330_ = lean_ctor_get(v_val_2326_, 4);
lean_inc(v_numFields_2330_);
lean_dec_ref(v_val_2326_);
v_type_2331_ = lean_ctor_get(v_toConstantVal_2327_, 2);
lean_inc_ref(v_type_2331_);
lean_dec_ref(v_toConstantVal_2327_);
v___x_2332_ = lean_box(v___x_2323_);
v___f_2333_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___lam__1___boxed), 13, 6);
lean_closure_set(v___f_2333_, 0, v_ctorName_2311_);
lean_closure_set(v___f_2333_, 1, v_cidx_2328_);
lean_closure_set(v___f_2333_, 2, v_numFields_2330_);
lean_closure_set(v___f_2333_, 3, v_numParams_2329_);
lean_closure_set(v___f_2333_, 4, v___x_2332_);
lean_closure_set(v___f_2333_, 5, v___f_2320_);
v___x_2334_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__12, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__12_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__12);
v___x_2335_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__19, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__19_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__19);
v___x_2336_ = lean_st_mk_ref(v___x_2335_);
v___x_2337_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__6___redArg(v_type_2331_, v___f_2333_, v___x_2323_, v___x_2323_, v___x_2334_, v___x_2336_, v_a_2312_, v_a_2313_);
if (lean_obj_tag(v___x_2337_) == 0)
{
lean_object* v_a_2338_; lean_object* v___x_2340_; uint8_t v_isShared_2341_; uint8_t v_isSharedCheck_2346_; 
v_a_2338_ = lean_ctor_get(v___x_2337_, 0);
v_isSharedCheck_2346_ = !lean_is_exclusive(v___x_2337_);
if (v_isSharedCheck_2346_ == 0)
{
v___x_2340_ = v___x_2337_;
v_isShared_2341_ = v_isSharedCheck_2346_;
goto v_resetjp_2339_;
}
else
{
lean_inc(v_a_2338_);
lean_dec(v___x_2337_);
v___x_2340_ = lean_box(0);
v_isShared_2341_ = v_isSharedCheck_2346_;
goto v_resetjp_2339_;
}
v_resetjp_2339_:
{
lean_object* v___x_2342_; lean_object* v___x_2344_; 
v___x_2342_ = lean_st_ref_get(v___x_2336_);
lean_dec(v___x_2336_);
lean_dec(v___x_2342_);
if (v_isShared_2341_ == 0)
{
v___x_2344_ = v___x_2340_;
goto v_reusejp_2343_;
}
else
{
lean_object* v_reuseFailAlloc_2345_; 
v_reuseFailAlloc_2345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2345_, 0, v_a_2338_);
v___x_2344_ = v_reuseFailAlloc_2345_;
goto v_reusejp_2343_;
}
v_reusejp_2343_:
{
return v___x_2344_;
}
}
}
else
{
lean_dec(v___x_2336_);
return v___x_2337_;
}
}
else
{
lean_dec(v_val_2325_);
lean_dec(v_ctorName_2311_);
v___y_2316_ = v_a_2312_;
v___y_2317_ = v_a_2313_;
goto v___jp_2315_;
}
}
else
{
lean_dec(v___x_2324_);
lean_dec(v_ctorName_2311_);
v___y_2316_ = v_a_2312_;
v___y_2317_ = v_a_2313_;
goto v___jp_2315_;
}
v___jp_2315_:
{
lean_object* v___x_2318_; lean_object* v___x_2319_; 
v___x_2318_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___closed__0, &l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___closed__0);
v___x_2319_ = l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__1(v___x_2318_, v___y_2316_, v___y_2317_);
return v___x_2319_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache___boxed(lean_object* v_ctorName_2347_, lean_object* v_a_2348_, lean_object* v_a_2349_, lean_object* v_a_2350_){
_start:
{
lean_object* v_res_2351_; 
v_res_2351_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache(v_ctorName_2347_, v_a_2348_, v_a_2349_);
lean_dec(v_a_2349_);
lean_dec_ref(v_a_2348_);
return v_res_2351_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3(lean_object* v_inst_2352_, lean_object* v_R_2353_, lean_object* v_a_2354_, lean_object* v_b_2355_, lean_object* v_c_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_){
_start:
{
lean_object* v___x_2362_; 
v___x_2362_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___redArg(v_a_2354_, v_b_2355_, v___y_2357_, v___y_2358_, v___y_2359_, v___y_2360_);
return v___x_2362_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3___boxed(lean_object* v_inst_2363_, lean_object* v_R_2364_, lean_object* v_a_2365_, lean_object* v_b_2366_, lean_object* v_c_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_){
_start:
{
lean_object* v_res_2373_; 
v_res_2373_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache_spec__3(v_inst_2363_, v_R_2364_, v_a_2365_, v_b_2366_, v_c_2367_, v___y_2368_, v___y_2369_, v___y_2370_, v___y_2371_);
lean_dec(v___y_2371_);
lean_dec_ref(v___y_2370_);
lean_dec(v___y_2369_);
lean_dec_ref(v___y_2368_);
return v_res_2373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setCtorLayout(lean_object* v_ctorName_2374_, lean_object* v_a_2375_, lean_object* v_a_2376_){
_start:
{
lean_object* v___x_2378_; lean_object* v_env_2379_; lean_object* v___x_2380_; lean_object* v_toEnvExtension_2381_; lean_object* v_asyncMode_2382_; uint8_t v___x_2383_; lean_object* v___x_2384_; 
v___x_2378_ = lean_st_ref_get(v_a_2376_);
v_env_2379_ = lean_ctor_get(v___x_2378_, 0);
lean_inc_ref(v_env_2379_);
lean_dec(v___x_2378_);
v___x_2380_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_ctorLayoutExt;
v_toEnvExtension_2381_ = lean_ctor_get(v___x_2380_, 0);
v_asyncMode_2382_ = lean_ctor_get(v_toEnvExtension_2381_, 2);
v___x_2383_ = 0;
lean_inc(v_ctorName_2374_);
v___x_2384_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_2380_, v_env_2379_, v_ctorName_2374_, v_asyncMode_2382_, v___x_2383_);
if (lean_obj_tag(v___x_2384_) == 0)
{
uint8_t v___x_2385_; lean_object* v___x_2386_; 
v___x_2385_ = 0;
lean_inc(v_ctorName_2374_);
v___x_2386_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_fillCache(v_ctorName_2374_, v_a_2375_, v_a_2376_);
if (lean_obj_tag(v___x_2386_) == 0)
{
lean_object* v_a_2387_; lean_object* v___x_2388_; 
v_a_2387_ = lean_ctor_get(v___x_2386_, 0);
lean_inc_n(v_a_2387_, 2);
lean_dec_ref_known(v___x_2386_, 1);
v___x_2388_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_setCtorLayout_checkCtorLayout(v_a_2387_, v_a_2375_, v_a_2376_);
if (lean_obj_tag(v___x_2388_) == 0)
{
lean_object* v___x_2390_; uint8_t v_isShared_2391_; uint8_t v_isSharedCheck_2417_; 
v_isSharedCheck_2417_ = !lean_is_exclusive(v___x_2388_);
if (v_isSharedCheck_2417_ == 0)
{
lean_object* v_unused_2418_; 
v_unused_2418_ = lean_ctor_get(v___x_2388_, 0);
lean_dec(v_unused_2418_);
v___x_2390_ = v___x_2388_;
v_isShared_2391_ = v_isSharedCheck_2417_;
goto v_resetjp_2389_;
}
else
{
lean_dec(v___x_2388_);
v___x_2390_ = lean_box(0);
v_isShared_2391_ = v_isSharedCheck_2417_;
goto v_resetjp_2389_;
}
v_resetjp_2389_:
{
lean_object* v___x_2392_; lean_object* v_env_2393_; lean_object* v_nextMacroScope_2394_; lean_object* v_ngen_2395_; lean_object* v_auxDeclNGen_2396_; lean_object* v_traceState_2397_; lean_object* v_recordedDeps_2398_; lean_object* v_messages_2399_; lean_object* v_infoState_2400_; lean_object* v_snapshotTasks_2401_; lean_object* v___x_2403_; uint8_t v_isShared_2404_; uint8_t v_isSharedCheck_2415_; 
v___x_2392_ = lean_st_ref_take(v_a_2376_);
v_env_2393_ = lean_ctor_get(v___x_2392_, 0);
v_nextMacroScope_2394_ = lean_ctor_get(v___x_2392_, 1);
v_ngen_2395_ = lean_ctor_get(v___x_2392_, 2);
v_auxDeclNGen_2396_ = lean_ctor_get(v___x_2392_, 3);
v_traceState_2397_ = lean_ctor_get(v___x_2392_, 4);
v_recordedDeps_2398_ = lean_ctor_get(v___x_2392_, 6);
v_messages_2399_ = lean_ctor_get(v___x_2392_, 7);
v_infoState_2400_ = lean_ctor_get(v___x_2392_, 8);
v_snapshotTasks_2401_ = lean_ctor_get(v___x_2392_, 9);
v_isSharedCheck_2415_ = !lean_is_exclusive(v___x_2392_);
if (v_isSharedCheck_2415_ == 0)
{
lean_object* v_unused_2416_; 
v_unused_2416_ = lean_ctor_get(v___x_2392_, 5);
lean_dec(v_unused_2416_);
v___x_2403_ = v___x_2392_;
v_isShared_2404_ = v_isSharedCheck_2415_;
goto v_resetjp_2402_;
}
else
{
lean_inc(v_snapshotTasks_2401_);
lean_inc(v_infoState_2400_);
lean_inc(v_messages_2399_);
lean_inc(v_recordedDeps_2398_);
lean_inc(v_traceState_2397_);
lean_inc(v_auxDeclNGen_2396_);
lean_inc(v_ngen_2395_);
lean_inc(v_nextMacroScope_2394_);
lean_inc(v_env_2393_);
lean_dec(v___x_2392_);
v___x_2403_ = lean_box(0);
v_isShared_2404_ = v_isSharedCheck_2415_;
goto v_resetjp_2402_;
}
v_resetjp_2402_:
{
lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2409_; 
v___x_2405_ = lean_box(0);
v___x_2406_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_2380_, v_env_2393_, v_ctorName_2374_, v_a_2387_, v___x_2385_);
v___x_2407_ = lean_obj_once(&l_Lean_Compiler_LCNF_setImpureType___closed__1, &l_Lean_Compiler_LCNF_setImpureType___closed__1_once, _init_l_Lean_Compiler_LCNF_setImpureType___closed__1);
if (v_isShared_2404_ == 0)
{
lean_ctor_set(v___x_2403_, 5, v___x_2407_);
lean_ctor_set(v___x_2403_, 0, v___x_2406_);
v___x_2409_ = v___x_2403_;
goto v_reusejp_2408_;
}
else
{
lean_object* v_reuseFailAlloc_2414_; 
v_reuseFailAlloc_2414_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2414_, 0, v___x_2406_);
lean_ctor_set(v_reuseFailAlloc_2414_, 1, v_nextMacroScope_2394_);
lean_ctor_set(v_reuseFailAlloc_2414_, 2, v_ngen_2395_);
lean_ctor_set(v_reuseFailAlloc_2414_, 3, v_auxDeclNGen_2396_);
lean_ctor_set(v_reuseFailAlloc_2414_, 4, v_traceState_2397_);
lean_ctor_set(v_reuseFailAlloc_2414_, 5, v___x_2407_);
lean_ctor_set(v_reuseFailAlloc_2414_, 6, v_recordedDeps_2398_);
lean_ctor_set(v_reuseFailAlloc_2414_, 7, v_messages_2399_);
lean_ctor_set(v_reuseFailAlloc_2414_, 8, v_infoState_2400_);
lean_ctor_set(v_reuseFailAlloc_2414_, 9, v_snapshotTasks_2401_);
v___x_2409_ = v_reuseFailAlloc_2414_;
goto v_reusejp_2408_;
}
v_reusejp_2408_:
{
lean_object* v___x_2410_; lean_object* v___x_2412_; 
v___x_2410_ = lean_st_ref_put(v_a_2376_, v___x_2409_);
if (v_isShared_2391_ == 0)
{
lean_ctor_set(v___x_2390_, 0, v___x_2405_);
v___x_2412_ = v___x_2390_;
goto v_reusejp_2411_;
}
else
{
lean_object* v_reuseFailAlloc_2413_; 
v_reuseFailAlloc_2413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2413_, 0, v___x_2405_);
v___x_2412_ = v_reuseFailAlloc_2413_;
goto v_reusejp_2411_;
}
v_reusejp_2411_:
{
return v___x_2412_;
}
}
}
}
}
else
{
lean_dec(v_a_2387_);
lean_dec(v_ctorName_2374_);
return v___x_2388_;
}
}
else
{
lean_object* v_a_2419_; lean_object* v___x_2421_; uint8_t v_isShared_2422_; uint8_t v_isSharedCheck_2426_; 
lean_dec(v_ctorName_2374_);
v_a_2419_ = lean_ctor_get(v___x_2386_, 0);
v_isSharedCheck_2426_ = !lean_is_exclusive(v___x_2386_);
if (v_isSharedCheck_2426_ == 0)
{
v___x_2421_ = v___x_2386_;
v_isShared_2422_ = v_isSharedCheck_2426_;
goto v_resetjp_2420_;
}
else
{
lean_inc(v_a_2419_);
lean_dec(v___x_2386_);
v___x_2421_ = lean_box(0);
v_isShared_2422_ = v_isSharedCheck_2426_;
goto v_resetjp_2420_;
}
v_resetjp_2420_:
{
lean_object* v___x_2424_; 
if (v_isShared_2422_ == 0)
{
v___x_2424_ = v___x_2421_;
goto v_reusejp_2423_;
}
else
{
lean_object* v_reuseFailAlloc_2425_; 
v_reuseFailAlloc_2425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2425_, 0, v_a_2419_);
v___x_2424_ = v_reuseFailAlloc_2425_;
goto v_reusejp_2423_;
}
v_reusejp_2423_:
{
return v___x_2424_;
}
}
}
}
else
{
lean_object* v___x_2428_; uint8_t v_isShared_2429_; uint8_t v_isSharedCheck_2434_; 
lean_dec(v_ctorName_2374_);
v_isSharedCheck_2434_ = !lean_is_exclusive(v___x_2384_);
if (v_isSharedCheck_2434_ == 0)
{
lean_object* v_unused_2435_; 
v_unused_2435_ = lean_ctor_get(v___x_2384_, 0);
lean_dec(v_unused_2435_);
v___x_2428_ = v___x_2384_;
v_isShared_2429_ = v_isSharedCheck_2434_;
goto v_resetjp_2427_;
}
else
{
lean_dec(v___x_2384_);
v___x_2428_ = lean_box(0);
v_isShared_2429_ = v_isSharedCheck_2434_;
goto v_resetjp_2427_;
}
v_resetjp_2427_:
{
lean_object* v___x_2430_; lean_object* v___x_2432_; 
v___x_2430_ = lean_box(0);
if (v_isShared_2429_ == 0)
{
lean_ctor_set_tag(v___x_2428_, 0);
lean_ctor_set(v___x_2428_, 0, v___x_2430_);
v___x_2432_ = v___x_2428_;
goto v_reusejp_2431_;
}
else
{
lean_object* v_reuseFailAlloc_2433_; 
v_reuseFailAlloc_2433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2433_, 0, v___x_2430_);
v___x_2432_ = v_reuseFailAlloc_2433_;
goto v_reusejp_2431_;
}
v_reusejp_2431_:
{
return v___x_2432_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setCtorLayout___boxed(lean_object* v_ctorName_2436_, lean_object* v_a_2437_, lean_object* v_a_2438_, lean_object* v_a_2439_){
_start:
{
lean_object* v_res_2440_; 
v_res_2440_ = l_Lean_Compiler_LCNF_setCtorLayout(v_ctorName_2436_, v_a_2437_, v_a_2438_);
lean_dec(v_a_2438_);
lean_dec_ref(v_a_2437_);
return v_res_2440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getCtorLayout(lean_object* v_ctorName_2441_, lean_object* v_a_2442_, lean_object* v_a_2443_){
_start:
{
lean_object* v___x_2445_; lean_object* v_env_2446_; lean_object* v___x_2447_; lean_object* v_toEnvExtension_2448_; lean_object* v_asyncMode_2449_; uint8_t v___x_2450_; lean_object* v___x_2451_; 
v___x_2445_ = lean_st_ref_get(v_a_2443_);
v_env_2446_ = lean_ctor_get(v___x_2445_, 0);
lean_inc_ref(v_env_2446_);
lean_dec(v___x_2445_);
v___x_2447_ = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_ctorLayoutExt;
v_toEnvExtension_2448_ = lean_ctor_get(v___x_2447_, 0);
v_asyncMode_2449_ = lean_ctor_get(v_toEnvExtension_2448_, 2);
v___x_2450_ = 0;
lean_inc(v_ctorName_2441_);
v___x_2451_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_2447_, v_env_2446_, v_ctorName_2441_, v_asyncMode_2449_, v___x_2450_);
if (lean_obj_tag(v___x_2451_) == 1)
{
lean_object* v_val_2452_; lean_object* v___x_2454_; uint8_t v_isShared_2455_; uint8_t v_isSharedCheck_2459_; 
lean_dec(v_ctorName_2441_);
v_val_2452_ = lean_ctor_get(v___x_2451_, 0);
v_isSharedCheck_2459_ = !lean_is_exclusive(v___x_2451_);
if (v_isSharedCheck_2459_ == 0)
{
v___x_2454_ = v___x_2451_;
v_isShared_2455_ = v_isSharedCheck_2459_;
goto v_resetjp_2453_;
}
else
{
lean_inc(v_val_2452_);
lean_dec(v___x_2451_);
v___x_2454_ = lean_box(0);
v_isShared_2455_ = v_isSharedCheck_2459_;
goto v_resetjp_2453_;
}
v_resetjp_2453_:
{
lean_object* v___x_2457_; 
if (v_isShared_2455_ == 0)
{
lean_ctor_set_tag(v___x_2454_, 0);
v___x_2457_ = v___x_2454_;
goto v_reusejp_2456_;
}
else
{
lean_object* v_reuseFailAlloc_2458_; 
v_reuseFailAlloc_2458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2458_, 0, v_val_2452_);
v___x_2457_ = v_reuseFailAlloc_2458_;
goto v_reusejp_2456_;
}
v_reusejp_2456_:
{
return v___x_2457_;
}
}
}
else
{
lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; 
lean_dec(v___x_2451_);
v___x_2460_ = lean_obj_once(&l_Lean_Compiler_LCNF_nameToImpureType___closed__1, &l_Lean_Compiler_LCNF_nameToImpureType___closed__1_once, _init_l_Lean_Compiler_LCNF_nameToImpureType___closed__1);
v___x_2461_ = l_Lean_MessageData_ofName(v_ctorName_2441_);
v___x_2462_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2462_, 0, v___x_2460_);
lean_ctor_set(v___x_2462_, 1, v___x_2461_);
v___x_2463_ = lean_obj_once(&l_Lean_Compiler_LCNF_nameToImpureType___closed__3, &l_Lean_Compiler_LCNF_nameToImpureType___closed__3_once, _init_l_Lean_Compiler_LCNF_nameToImpureType___closed__3);
v___x_2464_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2464_, 0, v___x_2462_);
lean_ctor_set(v___x_2464_, 1, v___x_2463_);
v___x_2465_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0___redArg(v___x_2464_, v_a_2442_, v_a_2443_);
return v___x_2465_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getCtorLayout___boxed(lean_object* v_ctorName_2466_, lean_object* v_a_2467_, lean_object* v_a_2468_, lean_object* v_a_2469_){
_start:
{
lean_object* v_res_2470_; 
v_res_2470_ = l_Lean_Compiler_LCNF_getCtorLayout(v_ctorName_2466_, v_a_2467_, v_a_2468_);
lean_dec(v_a_2468_);
lean_dec_ref(v_a_2467_);
return v_res_2470_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__2(lean_object* v_as_2471_, size_t v_sz_2472_, size_t v_i_2473_, lean_object* v_b_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_){
_start:
{
uint8_t v___x_2478_; 
v___x_2478_ = lean_usize_dec_lt(v_i_2473_, v_sz_2472_);
if (v___x_2478_ == 0)
{
lean_object* v___x_2479_; 
v___x_2479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2479_, 0, v_b_2474_);
return v___x_2479_;
}
else
{
lean_object* v___x_2480_; lean_object* v_a_2481_; lean_object* v___x_2482_; 
v___x_2480_ = lean_box(0);
v_a_2481_ = lean_array_uget_borrowed(v_as_2471_, v_i_2473_);
lean_inc(v_a_2481_);
v___x_2482_ = l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f(v_a_2481_, v___y_2475_, v___y_2476_);
if (lean_obj_tag(v___x_2482_) == 0)
{
lean_object* v___x_2483_; 
lean_dec_ref_known(v___x_2482_, 1);
lean_inc(v_a_2481_);
v___x_2483_ = l_Lean_Compiler_LCNF_setHasTrivialImpureStructure_x3f(v_a_2481_, v___y_2475_, v___y_2476_);
if (lean_obj_tag(v___x_2483_) == 0)
{
size_t v___x_2484_; size_t v___x_2485_; 
lean_dec_ref_known(v___x_2483_, 1);
v___x_2484_ = ((size_t)1ULL);
v___x_2485_ = lean_usize_add(v_i_2473_, v___x_2484_);
v_i_2473_ = v___x_2485_;
v_b_2474_ = v___x_2480_;
goto _start;
}
else
{
return v___x_2483_;
}
}
else
{
return v___x_2482_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__2___boxed(lean_object* v_as_2487_, lean_object* v_sz_2488_, lean_object* v_i_2489_, lean_object* v_b_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_){
_start:
{
size_t v_sz_boxed_2494_; size_t v_i_boxed_2495_; lean_object* v_res_2496_; 
v_sz_boxed_2494_ = lean_unbox_usize(v_sz_2488_);
lean_dec(v_sz_2488_);
v_i_boxed_2495_ = lean_unbox_usize(v_i_2489_);
lean_dec(v_i_2489_);
v_res_2496_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__2(v_as_2487_, v_sz_boxed_2494_, v_i_boxed_2495_, v_b_2490_, v___y_2491_, v___y_2492_);
lean_dec(v___y_2492_);
lean_dec_ref(v___y_2491_);
lean_dec_ref(v_as_2487_);
return v_res_2496_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__1___redArg(uint8_t v_a_2497_, lean_object* v_as_x27_2498_, lean_object* v_b_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_){
_start:
{
if (lean_obj_tag(v_as_x27_2498_) == 0)
{
lean_object* v___x_2503_; 
v___x_2503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2503_, 0, v_b_2499_);
return v___x_2503_;
}
else
{
lean_object* v_head_2504_; lean_object* v_tail_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; 
v_head_2504_ = lean_ctor_get(v_as_x27_2498_, 0);
v_tail_2505_ = lean_ctor_get(v_as_x27_2498_, 1);
v___x_2506_ = lean_box(0);
lean_inc(v_head_2504_);
v___x_2507_ = l_Lean_Compiler_LCNF_setOtherDeclMonoType(v_head_2504_, v___y_2500_, v___y_2501_);
if (lean_obj_tag(v___x_2507_) == 0)
{
lean_dec_ref_known(v___x_2507_, 1);
if (v_a_2497_ == 0)
{
lean_object* v___x_2508_; 
lean_inc(v_head_2504_);
v___x_2508_ = l_Lean_Compiler_LCNF_setCtorLayout(v_head_2504_, v___y_2500_, v___y_2501_);
if (lean_obj_tag(v___x_2508_) == 0)
{
lean_dec_ref_known(v___x_2508_, 1);
v_as_x27_2498_ = v_tail_2505_;
v_b_2499_ = v___x_2506_;
goto _start;
}
else
{
return v___x_2508_;
}
}
else
{
v_as_x27_2498_ = v_tail_2505_;
v_b_2499_ = v___x_2506_;
goto _start;
}
}
else
{
return v___x_2507_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__1___redArg___boxed(lean_object* v_a_2511_, lean_object* v_as_x27_2512_, lean_object* v_b_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_){
_start:
{
uint8_t v_a_7327__boxed_2517_; lean_object* v_res_2518_; 
v_a_7327__boxed_2517_ = lean_unbox(v_a_2511_);
v_res_2518_ = l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__1___redArg(v_a_7327__boxed_2517_, v_as_x27_2512_, v_b_2513_, v___y_2514_, v___y_2515_);
lean_dec(v___y_2515_);
lean_dec_ref(v___y_2514_);
lean_dec(v_as_x27_2512_);
return v_res_2518_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__1(void){
_start:
{
lean_object* v___x_2520_; lean_object* v___x_2521_; 
v___x_2520_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__0));
v___x_2521_ = l_Lean_stringToMessageData(v___x_2520_);
return v___x_2521_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__3(void){
_start:
{
lean_object* v___x_2523_; lean_object* v___x_2524_; 
v___x_2523_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__2));
v___x_2524_ = l_Lean_stringToMessageData(v___x_2523_);
return v___x_2524_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__5(void){
_start:
{
lean_object* v___x_2526_; lean_object* v___x_2527_; 
v___x_2526_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__4));
v___x_2527_ = l_Lean_stringToMessageData(v___x_2526_);
return v___x_2527_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__7(void){
_start:
{
lean_object* v___x_2529_; lean_object* v___x_2530_; 
v___x_2529_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__6));
v___x_2530_ = l_Lean_stringToMessageData(v___x_2529_);
return v___x_2530_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__9(void){
_start:
{
lean_object* v___x_2532_; lean_object* v___x_2533_; 
v___x_2532_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__8));
v___x_2533_ = l_Lean_stringToMessageData(v___x_2532_);
return v___x_2533_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__11(void){
_start:
{
lean_object* v___x_2535_; lean_object* v___x_2536_; 
v___x_2535_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__10));
v___x_2536_ = l_Lean_stringToMessageData(v___x_2535_);
return v___x_2536_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__13(void){
_start:
{
lean_object* v___x_2538_; lean_object* v___x_2539_; 
v___x_2538_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__12));
v___x_2539_ = l_Lean_stringToMessageData(v___x_2538_);
return v___x_2539_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg(lean_object* v_msg_2540_, lean_object* v_declHint_2541_, lean_object* v___y_2542_){
_start:
{
lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v_env_2546_; uint8_t v___x_2547_; 
v___x_2544_ = lean_box(0);
v___x_2545_ = lean_st_ref_get(v___y_2542_);
v_env_2546_ = lean_ctor_get(v___x_2545_, 0);
lean_inc_ref(v_env_2546_);
lean_dec(v___x_2545_);
v___x_2547_ = l_Lean_Name_isAnonymous(v_declHint_2541_);
if (v___x_2547_ == 0)
{
uint8_t v_isExporting_2548_; 
v_isExporting_2548_ = lean_ctor_get_uint8(v_env_2546_, sizeof(void*)*13);
if (v_isExporting_2548_ == 0)
{
lean_object* v___x_2549_; 
lean_dec_ref(v_env_2546_);
lean_dec(v_declHint_2541_);
v___x_2549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2549_, 0, v_msg_2540_);
return v___x_2549_;
}
else
{
lean_object* v___x_2550_; uint8_t v___x_2551_; 
lean_inc_ref(v_env_2546_);
v___x_2550_ = l_Lean_Environment_setExporting(v_env_2546_, v___x_2547_);
lean_inc(v_declHint_2541_);
lean_inc_ref(v___x_2550_);
v___x_2551_ = l_Lean_Environment_contains(v___x_2550_, v_declHint_2541_, v_isExporting_2548_);
if (v___x_2551_ == 0)
{
lean_object* v___x_2552_; 
lean_dec_ref(v___x_2550_);
lean_dec_ref(v_env_2546_);
lean_dec(v_declHint_2541_);
v___x_2552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2552_, 0, v_msg_2540_);
return v___x_2552_;
}
else
{
lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v_c_2558_; lean_object* v___x_2559_; 
v___x_2553_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__1);
v___x_2554_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0_spec__0___closed__2);
v___x_2555_ = l_Lean_Options_empty;
lean_inc_ref(v___x_2550_);
v___x_2556_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2556_, 0, v___x_2550_);
lean_ctor_set(v___x_2556_, 1, v___x_2553_);
lean_ctor_set(v___x_2556_, 2, v___x_2554_);
lean_ctor_set(v___x_2556_, 3, v___x_2555_);
lean_inc(v_declHint_2541_);
v___x_2557_ = l_Lean_MessageData_ofConstName(v_declHint_2541_, v___x_2547_);
v_c_2558_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2558_, 0, v___x_2556_);
lean_ctor_set(v_c_2558_, 1, v___x_2557_);
v___x_2559_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_2550_, v_declHint_2541_);
lean_dec_ref(v___x_2550_);
if (lean_obj_tag(v___x_2559_) == 0)
{
lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; 
lean_dec_ref(v_env_2546_);
lean_dec(v_declHint_2541_);
v___x_2560_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__1);
v___x_2561_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2561_, 0, v___x_2560_);
lean_ctor_set(v___x_2561_, 1, v_c_2558_);
v___x_2562_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__3);
v___x_2563_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2563_, 0, v___x_2561_);
lean_ctor_set(v___x_2563_, 1, v___x_2562_);
v___x_2564_ = l_Lean_MessageData_note(v___x_2563_);
v___x_2565_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2565_, 0, v_msg_2540_);
lean_ctor_set(v___x_2565_, 1, v___x_2564_);
v___x_2566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2566_, 0, v___x_2565_);
return v___x_2566_;
}
else
{
lean_object* v_val_2567_; lean_object* v___x_2569_; uint8_t v_isShared_2570_; uint8_t v_isSharedCheck_2601_; 
v_val_2567_ = lean_ctor_get(v___x_2559_, 0);
v_isSharedCheck_2601_ = !lean_is_exclusive(v___x_2559_);
if (v_isSharedCheck_2601_ == 0)
{
v___x_2569_ = v___x_2559_;
v_isShared_2570_ = v_isSharedCheck_2601_;
goto v_resetjp_2568_;
}
else
{
lean_inc(v_val_2567_);
lean_dec(v___x_2559_);
v___x_2569_ = lean_box(0);
v_isShared_2570_ = v_isSharedCheck_2601_;
goto v_resetjp_2568_;
}
v_resetjp_2568_:
{
lean_object* v___x_2571_; lean_object* v_moduleNames_2572_; lean_object* v_mod_2573_; uint8_t v___x_2574_; 
v___x_2571_ = l_Lean_Environment_header(v_env_2546_);
lean_dec_ref(v_env_2546_);
v_moduleNames_2572_ = lean_ctor_get(v___x_2571_, 4);
lean_inc_ref(v_moduleNames_2572_);
lean_dec_ref(v___x_2571_);
v_mod_2573_ = lean_array_get(v___x_2544_, v_moduleNames_2572_, v_val_2567_);
lean_dec(v_val_2567_);
lean_dec_ref(v_moduleNames_2572_);
v___x_2574_ = l_Lean_isPrivateName(v_declHint_2541_);
lean_dec(v_declHint_2541_);
if (v___x_2574_ == 0)
{
lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2586_; 
v___x_2575_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__5);
v___x_2576_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2576_, 0, v___x_2575_);
lean_ctor_set(v___x_2576_, 1, v_c_2558_);
v___x_2577_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__7);
v___x_2578_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2578_, 0, v___x_2576_);
lean_ctor_set(v___x_2578_, 1, v___x_2577_);
v___x_2579_ = l_Lean_MessageData_ofName(v_mod_2573_);
v___x_2580_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2580_, 0, v___x_2578_);
lean_ctor_set(v___x_2580_, 1, v___x_2579_);
v___x_2581_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__9);
v___x_2582_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2582_, 0, v___x_2580_);
lean_ctor_set(v___x_2582_, 1, v___x_2581_);
v___x_2583_ = l_Lean_MessageData_note(v___x_2582_);
v___x_2584_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2584_, 0, v_msg_2540_);
lean_ctor_set(v___x_2584_, 1, v___x_2583_);
if (v_isShared_2570_ == 0)
{
lean_ctor_set_tag(v___x_2569_, 0);
lean_ctor_set(v___x_2569_, 0, v___x_2584_);
v___x_2586_ = v___x_2569_;
goto v_reusejp_2585_;
}
else
{
lean_object* v_reuseFailAlloc_2587_; 
v_reuseFailAlloc_2587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2587_, 0, v___x_2584_);
v___x_2586_ = v_reuseFailAlloc_2587_;
goto v_reusejp_2585_;
}
v_reusejp_2585_:
{
return v___x_2586_;
}
}
else
{
lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2599_; 
v___x_2588_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__1);
v___x_2589_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2589_, 0, v___x_2588_);
lean_ctor_set(v___x_2589_, 1, v_c_2558_);
v___x_2590_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__11);
v___x_2591_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2591_, 0, v___x_2589_);
lean_ctor_set(v___x_2591_, 1, v___x_2590_);
v___x_2592_ = l_Lean_MessageData_ofName(v_mod_2573_);
v___x_2593_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2593_, 0, v___x_2591_);
lean_ctor_set(v___x_2593_, 1, v___x_2592_);
v___x_2594_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___closed__13);
v___x_2595_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2595_, 0, v___x_2593_);
lean_ctor_set(v___x_2595_, 1, v___x_2594_);
v___x_2596_ = l_Lean_MessageData_note(v___x_2595_);
v___x_2597_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2597_, 0, v_msg_2540_);
lean_ctor_set(v___x_2597_, 1, v___x_2596_);
if (v_isShared_2570_ == 0)
{
lean_ctor_set_tag(v___x_2569_, 0);
lean_ctor_set(v___x_2569_, 0, v___x_2597_);
v___x_2599_ = v___x_2569_;
goto v_reusejp_2598_;
}
else
{
lean_object* v_reuseFailAlloc_2600_; 
v_reuseFailAlloc_2600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2600_, 0, v___x_2597_);
v___x_2599_ = v_reuseFailAlloc_2600_;
goto v_reusejp_2598_;
}
v_reusejp_2598_:
{
return v___x_2599_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2602_; 
lean_dec_ref(v_env_2546_);
lean_dec(v_declHint_2541_);
v___x_2602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2602_, 0, v_msg_2540_);
return v___x_2602_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg___boxed(lean_object* v_msg_2603_, lean_object* v_declHint_2604_, lean_object* v___y_2605_, lean_object* v___y_2606_){
_start:
{
lean_object* v_res_2607_; 
v_res_2607_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg(v_msg_2603_, v_declHint_2604_, v___y_2605_);
lean_dec(v___y_2605_);
return v_res_2607_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8(lean_object* v_msg_2608_, lean_object* v_declHint_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_){
_start:
{
lean_object* v___x_2613_; lean_object* v_a_2614_; lean_object* v___x_2616_; uint8_t v_isShared_2617_; uint8_t v_isSharedCheck_2623_; 
v___x_2613_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg(v_msg_2608_, v_declHint_2609_, v___y_2611_);
v_a_2614_ = lean_ctor_get(v___x_2613_, 0);
v_isSharedCheck_2623_ = !lean_is_exclusive(v___x_2613_);
if (v_isSharedCheck_2623_ == 0)
{
v___x_2616_ = v___x_2613_;
v_isShared_2617_ = v_isSharedCheck_2623_;
goto v_resetjp_2615_;
}
else
{
lean_inc(v_a_2614_);
lean_dec(v___x_2613_);
v___x_2616_ = lean_box(0);
v_isShared_2617_ = v_isSharedCheck_2623_;
goto v_resetjp_2615_;
}
v_resetjp_2615_:
{
lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2621_; 
v___x_2618_ = l_Lean_unknownIdentifierMessageTag;
v___x_2619_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2619_, 0, v___x_2618_);
lean_ctor_set(v___x_2619_, 1, v_a_2614_);
if (v_isShared_2617_ == 0)
{
lean_ctor_set(v___x_2616_, 0, v___x_2619_);
v___x_2621_ = v___x_2616_;
goto v_reusejp_2620_;
}
else
{
lean_object* v_reuseFailAlloc_2622_; 
v_reuseFailAlloc_2622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2622_, 0, v___x_2619_);
v___x_2621_ = v_reuseFailAlloc_2622_;
goto v_reusejp_2620_;
}
v_reusejp_2620_:
{
return v___x_2621_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8___boxed(lean_object* v_msg_2624_, lean_object* v_declHint_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_){
_start:
{
lean_object* v_res_2629_; 
v_res_2629_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8(v_msg_2624_, v_declHint_2625_, v___y_2626_, v___y_2627_);
lean_dec(v___y_2627_);
lean_dec_ref(v___y_2626_);
return v_res_2629_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__9___redArg(lean_object* v_ref_2630_, lean_object* v_msg_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_){
_start:
{
lean_object* v_toCold_2635_; lean_object* v_currRecDepth_2636_; lean_object* v_ref_2637_; uint16_t v_optionFlags_2638_; uint8_t v_suppressElabErrors_2639_; uint8_t v_checkDeprecated_2640_; uint8_t v_isRecordingDeps_2641_; lean_object* v_ref_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; 
v_toCold_2635_ = lean_ctor_get(v___y_2632_, 0);
v_currRecDepth_2636_ = lean_ctor_get(v___y_2632_, 1);
v_ref_2637_ = lean_ctor_get(v___y_2632_, 2);
v_optionFlags_2638_ = lean_ctor_get_uint16(v___y_2632_, sizeof(void*)*3);
v_suppressElabErrors_2639_ = lean_ctor_get_uint8(v___y_2632_, sizeof(void*)*3 + 2);
v_checkDeprecated_2640_ = lean_ctor_get_uint8(v___y_2632_, sizeof(void*)*3 + 3);
v_isRecordingDeps_2641_ = lean_ctor_get_uint8(v___y_2632_, sizeof(void*)*3 + 4);
v_ref_2642_ = l_Lean_replaceRef(v_ref_2630_, v_ref_2637_);
lean_inc(v_currRecDepth_2636_);
lean_inc_ref(v_toCold_2635_);
v___x_2643_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_2643_, 0, v_toCold_2635_);
lean_ctor_set(v___x_2643_, 1, v_currRecDepth_2636_);
lean_ctor_set(v___x_2643_, 2, v_ref_2642_);
lean_ctor_set_uint16(v___x_2643_, sizeof(void*)*3, v_optionFlags_2638_);
lean_ctor_set_uint8(v___x_2643_, sizeof(void*)*3 + 2, v_suppressElabErrors_2639_);
lean_ctor_set_uint8(v___x_2643_, sizeof(void*)*3 + 3, v_checkDeprecated_2640_);
lean_ctor_set_uint8(v___x_2643_, sizeof(void*)*3 + 4, v_isRecordingDeps_2641_);
v___x_2644_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_nameToImpureType_spec__0___redArg(v_msg_2631_, v___x_2643_, v___y_2633_);
lean_dec_ref_known(v___x_2643_, 3);
return v___x_2644_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__9___redArg___boxed(lean_object* v_ref_2645_, lean_object* v_msg_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_){
_start:
{
lean_object* v_res_2650_; 
v_res_2650_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__9___redArg(v_ref_2645_, v_msg_2646_, v___y_2647_, v___y_2648_);
lean_dec(v___y_2648_);
lean_dec_ref(v___y_2647_);
lean_dec(v_ref_2645_);
return v_res_2650_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7___redArg(lean_object* v_ref_2651_, lean_object* v_msg_2652_, lean_object* v_declHint_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_){
_start:
{
lean_object* v___x_2657_; lean_object* v_a_2658_; lean_object* v___x_2659_; 
v___x_2657_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8(v_msg_2652_, v_declHint_2653_, v___y_2654_, v___y_2655_);
v_a_2658_ = lean_ctor_get(v___x_2657_, 0);
lean_inc(v_a_2658_);
lean_dec_ref(v___x_2657_);
v___x_2659_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__9___redArg(v_ref_2651_, v_a_2658_, v___y_2654_, v___y_2655_);
return v___x_2659_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7___redArg___boxed(lean_object* v_ref_2660_, lean_object* v_msg_2661_, lean_object* v_declHint_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_){
_start:
{
lean_object* v_res_2666_; 
v_res_2666_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7___redArg(v_ref_2660_, v_msg_2661_, v_declHint_2662_, v___y_2663_, v___y_2664_);
lean_dec(v___y_2664_);
lean_dec_ref(v___y_2663_);
lean_dec(v_ref_2660_);
return v_res_2666_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_2668_; lean_object* v___x_2669_; 
v___x_2668_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg___closed__0));
v___x_2669_ = l_Lean_stringToMessageData(v___x_2668_);
return v___x_2669_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg(lean_object* v_ref_2670_, lean_object* v_constName_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_){
_start:
{
lean_object* v___x_2675_; uint8_t v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; 
v___x_2675_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_2676_ = 0;
lean_inc(v_constName_2671_);
v___x_2677_ = l_Lean_MessageData_ofConstName(v_constName_2671_, v___x_2676_);
v___x_2678_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2678_, 0, v___x_2675_);
lean_ctor_set(v___x_2678_, 1, v___x_2677_);
v___x_2679_ = lean_obj_once(&l_Lean_Compiler_LCNF_nameToImpureType___closed__1, &l_Lean_Compiler_LCNF_nameToImpureType___closed__1_once, _init_l_Lean_Compiler_LCNF_nameToImpureType___closed__1);
v___x_2680_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2680_, 0, v___x_2678_);
lean_ctor_set(v___x_2680_, 1, v___x_2679_);
v___x_2681_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7___redArg(v_ref_2670_, v___x_2680_, v_constName_2671_, v___y_2672_, v___y_2673_);
return v___x_2681_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_ref_2682_, lean_object* v_constName_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_){
_start:
{
lean_object* v_res_2687_; 
v_res_2687_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg(v_ref_2682_, v_constName_2683_, v___y_2684_, v___y_2685_);
lean_dec(v___y_2685_);
lean_dec_ref(v___y_2684_);
lean_dec(v_ref_2682_);
return v_res_2687_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0___redArg(lean_object* v_constName_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_){
_start:
{
lean_object* v_ref_2692_; lean_object* v___x_2693_; 
v_ref_2692_ = lean_ctor_get(v___y_2689_, 2);
v___x_2693_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg(v_ref_2692_, v_constName_2688_, v___y_2689_, v___y_2690_);
return v___x_2693_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0___redArg___boxed(lean_object* v_constName_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_){
_start:
{
lean_object* v_res_2698_; 
v_res_2698_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0___redArg(v_constName_2694_, v___y_2695_, v___y_2696_);
lean_dec(v___y_2696_);
lean_dec_ref(v___y_2695_);
return v_res_2698_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0(lean_object* v_constName_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_){
_start:
{
lean_object* v___x_2703_; lean_object* v_env_2704_; uint8_t v___x_2705_; lean_object* v___x_2706_; 
v___x_2703_ = lean_st_ref_get(v___y_2701_);
v_env_2704_ = lean_ctor_get(v___x_2703_, 0);
lean_inc_ref(v_env_2704_);
lean_dec(v___x_2703_);
v___x_2705_ = 0;
lean_inc(v_constName_2699_);
v___x_2706_ = l_Lean_Environment_find_x3f(v_env_2704_, v_constName_2699_, v___x_2705_);
if (lean_obj_tag(v___x_2706_) == 0)
{
lean_object* v___x_2707_; 
v___x_2707_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0___redArg(v_constName_2699_, v___y_2700_, v___y_2701_);
return v___x_2707_;
}
else
{
lean_object* v_val_2708_; lean_object* v___x_2710_; uint8_t v_isShared_2711_; uint8_t v_isSharedCheck_2715_; 
lean_dec(v_constName_2699_);
v_val_2708_ = lean_ctor_get(v___x_2706_, 0);
v_isSharedCheck_2715_ = !lean_is_exclusive(v___x_2706_);
if (v_isSharedCheck_2715_ == 0)
{
v___x_2710_ = v___x_2706_;
v_isShared_2711_ = v_isSharedCheck_2715_;
goto v_resetjp_2709_;
}
else
{
lean_inc(v_val_2708_);
lean_dec(v___x_2706_);
v___x_2710_ = lean_box(0);
v_isShared_2711_ = v_isSharedCheck_2715_;
goto v_resetjp_2709_;
}
v_resetjp_2709_:
{
lean_object* v___x_2713_; 
if (v_isShared_2711_ == 0)
{
lean_ctor_set_tag(v___x_2710_, 0);
v___x_2713_ = v___x_2710_;
goto v_reusejp_2712_;
}
else
{
lean_object* v_reuseFailAlloc_2714_; 
v_reuseFailAlloc_2714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2714_, 0, v_val_2708_);
v___x_2713_ = v_reuseFailAlloc_2714_;
goto v_reusejp_2712_;
}
v_reusejp_2712_:
{
return v___x_2713_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0___boxed(lean_object* v_constName_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_){
_start:
{
lean_object* v_res_2720_; 
v_res_2720_ = l_Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0(v_constName_2716_, v___y_2717_, v___y_2718_);
lean_dec(v___y_2718_);
lean_dec_ref(v___y_2717_);
return v_res_2720_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__4___closed__1(void){
_start:
{
lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; 
v___x_2722_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__2));
v___x_2723_ = lean_unsigned_to_nat(49u);
v___x_2724_ = lean_unsigned_to_nat(338u);
v___x_2725_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__4___closed__0));
v___x_2726_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__0));
v___x_2727_ = l_mkPanicMessageWithDecl(v___x_2726_, v___x_2725_, v___x_2724_, v___x_2723_, v___x_2722_);
return v___x_2727_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__4(lean_object* v_as_2728_, size_t v_sz_2729_, size_t v_i_2730_, lean_object* v_b_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_){
_start:
{
lean_object* v_a_2736_; uint8_t v___x_2740_; 
v___x_2740_ = lean_usize_dec_lt(v_i_2730_, v_sz_2729_);
if (v___x_2740_ == 0)
{
lean_object* v___x_2741_; 
v___x_2741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2741_, 0, v_b_2731_);
return v___x_2741_;
}
else
{
lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v_a_2745_; lean_object* v___x_2746_; 
v___x_2742_ = lean_box(1);
v___x_2743_ = lean_unsigned_to_nat(0u);
v___x_2744_ = lean_box(0);
v_a_2745_ = lean_array_uget_borrowed(v_as_2728_, v_i_2730_);
lean_inc(v_a_2745_);
v___x_2746_ = l_Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0(v_a_2745_, v___y_2732_, v___y_2733_);
if (lean_obj_tag(v___x_2746_) == 0)
{
lean_object* v_a_2747_; 
v_a_2747_ = lean_ctor_get(v___x_2746_, 0);
lean_inc(v_a_2747_);
lean_dec_ref_known(v___x_2746_, 1);
if (lean_obj_tag(v_a_2747_) == 5)
{
lean_object* v_val_2748_; lean_object* v_toConstantVal_2749_; lean_object* v_ctors_2750_; lean_object* v_type_2751_; uint8_t v___x_2752_; uint8_t v___x_2753_; uint8_t v___x_2754_; uint8_t v___x_2755_; lean_object* v___x_2756_; uint64_t v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; 
v_val_2748_ = lean_ctor_get(v_a_2747_, 0);
lean_inc_ref(v_val_2748_);
lean_dec_ref_known(v_a_2747_, 1);
v_toConstantVal_2749_ = lean_ctor_get(v_val_2748_, 0);
lean_inc_ref(v_toConstantVal_2749_);
v_ctors_2750_ = lean_ctor_get(v_val_2748_, 4);
lean_inc(v_ctors_2750_);
lean_dec_ref(v_val_2748_);
v_type_2751_ = lean_ctor_get(v_toConstantVal_2749_, 2);
lean_inc_ref(v_type_2751_);
lean_dec_ref(v_toConstantVal_2749_);
v___x_2752_ = 0;
v___x_2753_ = 1;
v___x_2754_ = 0;
v___x_2755_ = 2;
v___x_2756_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_2756_, 0, v___x_2752_);
lean_ctor_set_uint8(v___x_2756_, 1, v___x_2752_);
lean_ctor_set_uint8(v___x_2756_, 2, v___x_2752_);
lean_ctor_set_uint8(v___x_2756_, 3, v___x_2752_);
lean_ctor_set_uint8(v___x_2756_, 4, v___x_2752_);
lean_ctor_set_uint8(v___x_2756_, 5, v___x_2740_);
lean_ctor_set_uint8(v___x_2756_, 6, v___x_2740_);
lean_ctor_set_uint8(v___x_2756_, 7, v___x_2752_);
lean_ctor_set_uint8(v___x_2756_, 8, v___x_2740_);
lean_ctor_set_uint8(v___x_2756_, 9, v___x_2753_);
lean_ctor_set_uint8(v___x_2756_, 10, v___x_2754_);
lean_ctor_set_uint8(v___x_2756_, 11, v___x_2740_);
lean_ctor_set_uint8(v___x_2756_, 12, v___x_2740_);
lean_ctor_set_uint8(v___x_2756_, 13, v___x_2740_);
lean_ctor_set_uint8(v___x_2756_, 14, v___x_2755_);
lean_ctor_set_uint8(v___x_2756_, 15, v___x_2740_);
lean_ctor_set_uint8(v___x_2756_, 16, v___x_2740_);
lean_ctor_set_uint8(v___x_2756_, 17, v___x_2740_);
lean_ctor_set_uint8(v___x_2756_, 18, v___x_2740_);
lean_ctor_set_uint8(v___x_2756_, 19, v___x_2752_);
v___x_2757_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2756_);
v___x_2758_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2758_, 0, v___x_2756_);
lean_ctor_set_uint64(v___x_2758_, sizeof(void*)*1, v___x_2757_);
v___x_2759_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__10, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__10_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__10);
v___x_2760_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__11));
v___x_2761_ = lean_box(0);
v___x_2762_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2762_, 0, v___x_2758_);
lean_ctor_set(v___x_2762_, 1, v___x_2742_);
lean_ctor_set(v___x_2762_, 2, v___x_2759_);
lean_ctor_set(v___x_2762_, 3, v___x_2760_);
lean_ctor_set(v___x_2762_, 4, v___x_2761_);
lean_ctor_set(v___x_2762_, 5, v___x_2743_);
lean_ctor_set(v___x_2762_, 6, v___x_2761_);
lean_ctor_set_uint8(v___x_2762_, sizeof(void*)*7, v___x_2752_);
lean_ctor_set_uint8(v___x_2762_, sizeof(void*)*7 + 1, v___x_2752_);
lean_ctor_set_uint8(v___x_2762_, sizeof(void*)*7 + 2, v___x_2752_);
lean_ctor_set_uint8(v___x_2762_, sizeof(void*)*7 + 3, v___x_2740_);
v___x_2763_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__19, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__19_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__4___redArg___closed__19);
v___x_2764_ = lean_st_mk_ref(v___x_2763_);
v___x_2765_ = l_Lean_Meta_isPropFormerType(v_type_2751_, v___x_2762_, v___x_2764_, v___y_2732_, v___y_2733_);
lean_dec_ref_known(v___x_2762_, 7);
if (lean_obj_tag(v___x_2765_) == 0)
{
lean_object* v_a_2766_; lean_object* v___x_2767_; uint8_t v___x_2768_; lean_object* v___x_2769_; 
v_a_2766_ = lean_ctor_get(v___x_2765_, 0);
lean_inc(v_a_2766_);
lean_dec_ref_known(v___x_2765_, 1);
v___x_2767_ = lean_st_ref_get(v___x_2764_);
lean_dec(v___x_2764_);
lean_dec(v___x_2767_);
v___x_2768_ = lean_unbox(v_a_2766_);
lean_dec(v_a_2766_);
v___x_2769_ = l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__1___redArg(v___x_2768_, v_ctors_2750_, v___x_2744_, v___y_2732_, v___y_2733_);
lean_dec(v_ctors_2750_);
if (lean_obj_tag(v___x_2769_) == 0)
{
lean_dec_ref_known(v___x_2769_, 1);
v_a_2736_ = v___x_2744_;
goto v___jp_2735_;
}
else
{
return v___x_2769_;
}
}
else
{
lean_object* v_a_2770_; lean_object* v___x_2772_; uint8_t v_isShared_2773_; uint8_t v_isSharedCheck_2777_; 
lean_dec(v___x_2764_);
lean_dec(v_ctors_2750_);
v_a_2770_ = lean_ctor_get(v___x_2765_, 0);
v_isSharedCheck_2777_ = !lean_is_exclusive(v___x_2765_);
if (v_isSharedCheck_2777_ == 0)
{
v___x_2772_ = v___x_2765_;
v_isShared_2773_ = v_isSharedCheck_2777_;
goto v_resetjp_2771_;
}
else
{
lean_inc(v_a_2770_);
lean_dec(v___x_2765_);
v___x_2772_ = lean_box(0);
v_isShared_2773_ = v_isSharedCheck_2777_;
goto v_resetjp_2771_;
}
v_resetjp_2771_:
{
lean_object* v___x_2775_; 
if (v_isShared_2773_ == 0)
{
v___x_2775_ = v___x_2772_;
goto v_reusejp_2774_;
}
else
{
lean_object* v_reuseFailAlloc_2776_; 
v_reuseFailAlloc_2776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2776_, 0, v_a_2770_);
v___x_2775_ = v_reuseFailAlloc_2776_;
goto v_reusejp_2774_;
}
v_reusejp_2774_:
{
return v___x_2775_;
}
}
}
}
else
{
lean_object* v___x_2778_; lean_object* v___x_2779_; 
lean_dec(v_a_2747_);
v___x_2778_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__4___closed__1);
v___x_2779_ = l_panic___at___00__private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_computeImpureType_spec__0(v___x_2778_, v___y_2732_, v___y_2733_);
if (lean_obj_tag(v___x_2779_) == 0)
{
lean_dec_ref_known(v___x_2779_, 1);
v_a_2736_ = v___x_2744_;
goto v___jp_2735_;
}
else
{
return v___x_2779_;
}
}
}
else
{
lean_object* v_a_2780_; lean_object* v___x_2782_; uint8_t v_isShared_2783_; uint8_t v_isSharedCheck_2787_; 
v_a_2780_ = lean_ctor_get(v___x_2746_, 0);
v_isSharedCheck_2787_ = !lean_is_exclusive(v___x_2746_);
if (v_isSharedCheck_2787_ == 0)
{
v___x_2782_ = v___x_2746_;
v_isShared_2783_ = v_isSharedCheck_2787_;
goto v_resetjp_2781_;
}
else
{
lean_inc(v_a_2780_);
lean_dec(v___x_2746_);
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
}
v___jp_2735_:
{
size_t v___x_2737_; size_t v___x_2738_; 
v___x_2737_ = ((size_t)1ULL);
v___x_2738_ = lean_usize_add(v_i_2730_, v___x_2737_);
v_i_2730_ = v___x_2738_;
v_b_2731_ = v_a_2736_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__4___boxed(lean_object* v_as_2788_, lean_object* v_sz_2789_, lean_object* v_i_2790_, lean_object* v_b_2791_, lean_object* v___y_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_){
_start:
{
size_t v_sz_boxed_2795_; size_t v_i_boxed_2796_; lean_object* v_res_2797_; 
v_sz_boxed_2795_ = lean_unbox_usize(v_sz_2789_);
lean_dec(v_sz_2789_);
v_i_boxed_2796_ = lean_unbox_usize(v_i_2790_);
lean_dec(v_i_2790_);
v_res_2797_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__4(v_as_2788_, v_sz_boxed_2795_, v_i_boxed_2796_, v_b_2791_, v___y_2792_, v___y_2793_);
lean_dec(v___y_2793_);
lean_dec_ref(v___y_2792_);
lean_dec_ref(v_as_2788_);
return v_res_2797_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__3(lean_object* v_as_2798_, size_t v_sz_2799_, size_t v_i_2800_, lean_object* v_b_2801_, lean_object* v___y_2802_, lean_object* v___y_2803_){
_start:
{
uint8_t v___x_2805_; 
v___x_2805_ = lean_usize_dec_lt(v_i_2800_, v_sz_2799_);
if (v___x_2805_ == 0)
{
lean_object* v___x_2806_; 
v___x_2806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2806_, 0, v_b_2801_);
return v___x_2806_;
}
else
{
lean_object* v___x_2807_; lean_object* v_a_2808_; lean_object* v___x_2809_; 
v___x_2807_ = lean_box(0);
v_a_2808_ = lean_array_uget_borrowed(v_as_2798_, v_i_2800_);
lean_inc(v_a_2808_);
v___x_2809_ = l_Lean_Compiler_LCNF_setOtherDeclMonoType(v_a_2808_, v___y_2802_, v___y_2803_);
if (lean_obj_tag(v___x_2809_) == 0)
{
lean_object* v___x_2810_; 
lean_dec_ref_known(v___x_2809_, 1);
lean_inc(v_a_2808_);
v___x_2810_ = l_Lean_Compiler_LCNF_setImpureType(v_a_2808_, v___y_2802_, v___y_2803_);
if (lean_obj_tag(v___x_2810_) == 0)
{
size_t v___x_2811_; size_t v___x_2812_; 
lean_dec_ref_known(v___x_2810_, 1);
v___x_2811_ = ((size_t)1ULL);
v___x_2812_ = lean_usize_add(v_i_2800_, v___x_2811_);
v_i_2800_ = v___x_2812_;
v_b_2801_ = v___x_2807_;
goto _start;
}
else
{
return v___x_2810_;
}
}
else
{
return v___x_2809_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__3___boxed(lean_object* v_as_2814_, lean_object* v_sz_2815_, lean_object* v_i_2816_, lean_object* v_b_2817_, lean_object* v___y_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_){
_start:
{
size_t v_sz_boxed_2821_; size_t v_i_boxed_2822_; lean_object* v_res_2823_; 
v_sz_boxed_2821_ = lean_unbox_usize(v_sz_2815_);
lean_dec(v_sz_2815_);
v_i_boxed_2822_ = lean_unbox_usize(v_i_2816_);
lean_dec(v_i_2816_);
v_res_2823_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__3(v_as_2814_, v_sz_boxed_2821_, v_i_boxed_2822_, v_b_2817_, v___y_2818_, v___y_2819_);
lean_dec(v___y_2819_);
lean_dec_ref(v___y_2818_);
lean_dec_ref(v_as_2814_);
return v_res_2823_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_compileInductives_spec__5___redArg(lean_object* v_as_2824_, size_t v_i_2825_, size_t v_stop_2826_, lean_object* v_b_2827_, lean_object* v___y_2828_){
_start:
{
lean_object* v_a_2831_; uint8_t v___x_2835_; 
v___x_2835_ = lean_usize_dec_eq(v_i_2825_, v_stop_2826_);
if (v___x_2835_ == 0)
{
lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v_env_2838_; lean_object* v___x_2839_; 
v___x_2836_ = lean_array_uget_borrowed(v_as_2824_, v_i_2825_);
v___x_2837_ = lean_st_ref_get(v___y_2828_);
v_env_2838_ = lean_ctor_get(v___x_2837_, 0);
lean_inc_ref(v_env_2838_);
lean_dec(v___x_2837_);
lean_inc(v___x_2836_);
v___x_2839_ = l_Lean_Environment_find_x3f(v_env_2838_, v___x_2836_, v___x_2835_);
if (lean_obj_tag(v___x_2839_) == 1)
{
lean_object* v_val_2840_; 
v_val_2840_ = lean_ctor_get(v___x_2839_, 0);
lean_inc(v_val_2840_);
lean_dec_ref_known(v___x_2839_, 1);
if (lean_obj_tag(v_val_2840_) == 5)
{
lean_object* v___x_2841_; 
lean_dec_ref_known(v_val_2840_, 1);
lean_inc(v___x_2836_);
v___x_2841_ = lean_array_push(v_b_2827_, v___x_2836_);
v_a_2831_ = v___x_2841_;
goto v___jp_2830_;
}
else
{
lean_dec(v_val_2840_);
v_a_2831_ = v_b_2827_;
goto v___jp_2830_;
}
}
else
{
lean_dec(v___x_2839_);
v_a_2831_ = v_b_2827_;
goto v___jp_2830_;
}
}
else
{
lean_object* v___x_2842_; 
v___x_2842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2842_, 0, v_b_2827_);
return v___x_2842_;
}
v___jp_2830_:
{
size_t v___x_2832_; size_t v___x_2833_; 
v___x_2832_ = ((size_t)1ULL);
v___x_2833_ = lean_usize_add(v_i_2825_, v___x_2832_);
v_i_2825_ = v___x_2833_;
v_b_2827_ = v_a_2831_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_compileInductives_spec__5___redArg___boxed(lean_object* v_as_2843_, lean_object* v_i_2844_, lean_object* v_stop_2845_, lean_object* v_b_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_){
_start:
{
size_t v_i_boxed_2849_; size_t v_stop_boxed_2850_; lean_object* v_res_2851_; 
v_i_boxed_2849_ = lean_unbox_usize(v_i_2844_);
lean_dec(v_i_2844_);
v_stop_boxed_2850_ = lean_unbox_usize(v_stop_2845_);
lean_dec(v_stop_2845_);
v_res_2851_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_compileInductives_spec__5___redArg(v_as_2843_, v_i_boxed_2849_, v_stop_boxed_2850_, v_b_2846_, v___y_2847_);
lean_dec(v___y_2847_);
lean_dec_ref(v_as_2843_);
return v_res_2851_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_compileInductives(lean_object* v_typeNames_2854_, lean_object* v_a_2855_, lean_object* v_a_2856_){
_start:
{
lean_object* v_a_2859_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; uint8_t v___x_2877_; 
v___x_2874_ = lean_unsigned_to_nat(0u);
v___x_2875_ = lean_array_get_size(v_typeNames_2854_);
v___x_2876_ = ((lean_object*)(l_Lean_Compiler_LCNF_compileInductives___closed__0));
v___x_2877_ = lean_nat_dec_lt(v___x_2874_, v___x_2875_);
if (v___x_2877_ == 0)
{
v_a_2859_ = v___x_2876_;
goto v___jp_2858_;
}
else
{
size_t v___x_2878_; size_t v___x_2879_; lean_object* v___x_2880_; 
v___x_2878_ = ((size_t)0ULL);
v___x_2879_ = lean_usize_of_nat(v___x_2875_);
v___x_2880_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_compileInductives_spec__5___redArg(v_typeNames_2854_, v___x_2878_, v___x_2879_, v___x_2876_, v_a_2856_);
if (lean_obj_tag(v___x_2880_) == 0)
{
lean_object* v_a_2881_; 
v_a_2881_ = lean_ctor_get(v___x_2880_, 0);
lean_inc(v_a_2881_);
lean_dec_ref_known(v___x_2880_, 1);
v_a_2859_ = v_a_2881_;
goto v___jp_2858_;
}
else
{
lean_object* v_a_2882_; lean_object* v___x_2884_; uint8_t v_isShared_2885_; uint8_t v_isSharedCheck_2889_; 
v_a_2882_ = lean_ctor_get(v___x_2880_, 0);
v_isSharedCheck_2889_ = !lean_is_exclusive(v___x_2880_);
if (v_isSharedCheck_2889_ == 0)
{
v___x_2884_ = v___x_2880_;
v_isShared_2885_ = v_isSharedCheck_2889_;
goto v_resetjp_2883_;
}
else
{
lean_inc(v_a_2882_);
lean_dec(v___x_2880_);
v___x_2884_ = lean_box(0);
v_isShared_2885_ = v_isSharedCheck_2889_;
goto v_resetjp_2883_;
}
v_resetjp_2883_:
{
lean_object* v___x_2887_; 
if (v_isShared_2885_ == 0)
{
v___x_2887_ = v___x_2884_;
goto v_reusejp_2886_;
}
else
{
lean_object* v_reuseFailAlloc_2888_; 
v_reuseFailAlloc_2888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2888_, 0, v_a_2882_);
v___x_2887_ = v_reuseFailAlloc_2888_;
goto v_reusejp_2886_;
}
v_reusejp_2886_:
{
return v___x_2887_;
}
}
}
}
v___jp_2858_:
{
lean_object* v___x_2860_; size_t v_sz_2861_; size_t v___x_2862_; lean_object* v___x_2863_; 
v___x_2860_ = lean_box(0);
v_sz_2861_ = lean_array_size(v_a_2859_);
v___x_2862_ = ((size_t)0ULL);
v___x_2863_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__2(v_a_2859_, v_sz_2861_, v___x_2862_, v___x_2860_, v_a_2855_, v_a_2856_);
if (lean_obj_tag(v___x_2863_) == 0)
{
lean_object* v___x_2864_; 
lean_dec_ref_known(v___x_2863_, 1);
v___x_2864_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__3(v_a_2859_, v_sz_2861_, v___x_2862_, v___x_2860_, v_a_2855_, v_a_2856_);
if (lean_obj_tag(v___x_2864_) == 0)
{
lean_object* v___x_2865_; 
lean_dec_ref_known(v___x_2864_, 1);
v___x_2865_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__4(v_a_2859_, v_sz_2861_, v___x_2862_, v___x_2860_, v_a_2855_, v_a_2856_);
lean_dec_ref(v_a_2859_);
if (lean_obj_tag(v___x_2865_) == 0)
{
lean_object* v___x_2867_; uint8_t v_isShared_2868_; uint8_t v_isSharedCheck_2872_; 
v_isSharedCheck_2872_ = !lean_is_exclusive(v___x_2865_);
if (v_isSharedCheck_2872_ == 0)
{
lean_object* v_unused_2873_; 
v_unused_2873_ = lean_ctor_get(v___x_2865_, 0);
lean_dec(v_unused_2873_);
v___x_2867_ = v___x_2865_;
v_isShared_2868_ = v_isSharedCheck_2872_;
goto v_resetjp_2866_;
}
else
{
lean_dec(v___x_2865_);
v___x_2867_ = lean_box(0);
v_isShared_2868_ = v_isSharedCheck_2872_;
goto v_resetjp_2866_;
}
v_resetjp_2866_:
{
lean_object* v___x_2870_; 
if (v_isShared_2868_ == 0)
{
lean_ctor_set(v___x_2867_, 0, v___x_2860_);
v___x_2870_ = v___x_2867_;
goto v_reusejp_2869_;
}
else
{
lean_object* v_reuseFailAlloc_2871_; 
v_reuseFailAlloc_2871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2871_, 0, v___x_2860_);
v___x_2870_ = v_reuseFailAlloc_2871_;
goto v_reusejp_2869_;
}
v_reusejp_2869_:
{
return v___x_2870_;
}
}
}
else
{
return v___x_2865_;
}
}
else
{
lean_dec_ref(v_a_2859_);
return v___x_2864_;
}
}
else
{
lean_dec_ref(v_a_2859_);
return v___x_2863_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_compileInductives___boxed(lean_object* v_typeNames_2890_, lean_object* v_a_2891_, lean_object* v_a_2892_, lean_object* v_a_2893_){
_start:
{
lean_object* v_res_2894_; 
v_res_2894_ = l_Lean_Compiler_LCNF_compileInductives(v_typeNames_2890_, v_a_2891_, v_a_2892_);
lean_dec(v_a_2892_);
lean_dec_ref(v_a_2891_);
lean_dec_ref(v_typeNames_2890_);
return v_res_2894_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__1(uint8_t v_a_2895_, lean_object* v_as_2896_, lean_object* v_as_x27_2897_, lean_object* v_b_2898_, lean_object* v_a_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_){
_start:
{
lean_object* v___x_2903_; 
v___x_2903_ = l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__1___redArg(v_a_2895_, v_as_x27_2897_, v_b_2898_, v___y_2900_, v___y_2901_);
return v___x_2903_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__1___boxed(lean_object* v_a_2904_, lean_object* v_as_2905_, lean_object* v_as_x27_2906_, lean_object* v_b_2907_, lean_object* v_a_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_){
_start:
{
uint8_t v_a_8038__boxed_2912_; lean_object* v_res_2913_; 
v_a_8038__boxed_2912_ = lean_unbox(v_a_2904_);
v_res_2913_ = l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_compileInductives_spec__1(v_a_8038__boxed_2912_, v_as_2905_, v_as_x27_2906_, v_b_2907_, v_a_2908_, v___y_2909_, v___y_2910_);
lean_dec(v___y_2910_);
lean_dec_ref(v___y_2909_);
lean_dec(v_as_x27_2906_);
lean_dec(v_as_2905_);
return v_res_2913_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_compileInductives_spec__5(lean_object* v_as_2914_, size_t v_i_2915_, size_t v_stop_2916_, lean_object* v_b_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_){
_start:
{
lean_object* v___x_2921_; 
v___x_2921_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_compileInductives_spec__5___redArg(v_as_2914_, v_i_2915_, v_stop_2916_, v_b_2917_, v___y_2919_);
return v___x_2921_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_compileInductives_spec__5___boxed(lean_object* v_as_2922_, lean_object* v_i_2923_, lean_object* v_stop_2924_, lean_object* v_b_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_, lean_object* v___y_2928_){
_start:
{
size_t v_i_boxed_2929_; size_t v_stop_boxed_2930_; lean_object* v_res_2931_; 
v_i_boxed_2929_ = lean_unbox_usize(v_i_2923_);
lean_dec(v_i_2923_);
v_stop_boxed_2930_ = lean_unbox_usize(v_stop_2924_);
lean_dec(v_stop_2924_);
v_res_2931_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_compileInductives_spec__5(v_as_2922_, v_i_boxed_2929_, v_stop_boxed_2930_, v_b_2925_, v___y_2926_, v___y_2927_);
lean_dec(v___y_2927_);
lean_dec_ref(v___y_2926_);
lean_dec_ref(v_as_2922_);
return v_res_2931_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0(lean_object* v_00_u03b1_2932_, lean_object* v_constName_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_){
_start:
{
lean_object* v___x_2937_; 
v___x_2937_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0___redArg(v_constName_2933_, v___y_2934_, v___y_2935_);
return v___x_2937_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2938_, lean_object* v_constName_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_){
_start:
{
lean_object* v_res_2943_; 
v_res_2943_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0(v_00_u03b1_2938_, v_constName_2939_, v___y_2940_, v___y_2941_);
lean_dec(v___y_2941_);
lean_dec_ref(v___y_2940_);
return v_res_2943_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_2944_, lean_object* v_ref_2945_, lean_object* v_constName_2946_, lean_object* v___y_2947_, lean_object* v___y_2948_){
_start:
{
lean_object* v___x_2950_; 
v___x_2950_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___redArg(v_ref_2945_, v_constName_2946_, v___y_2947_, v___y_2948_);
return v___x_2950_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_2951_, lean_object* v_ref_2952_, lean_object* v_constName_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_, lean_object* v___y_2956_){
_start:
{
lean_object* v_res_2957_; 
v_res_2957_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1(v_00_u03b1_2951_, v_ref_2952_, v_constName_2953_, v___y_2954_, v___y_2955_);
lean_dec(v___y_2955_);
lean_dec_ref(v___y_2954_);
lean_dec(v_ref_2952_);
return v_res_2957_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7(lean_object* v_00_u03b1_2958_, lean_object* v_ref_2959_, lean_object* v_msg_2960_, lean_object* v_declHint_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_){
_start:
{
lean_object* v___x_2965_; 
v___x_2965_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7___redArg(v_ref_2959_, v_msg_2960_, v_declHint_2961_, v___y_2962_, v___y_2963_);
return v___x_2965_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7___boxed(lean_object* v_00_u03b1_2966_, lean_object* v_ref_2967_, lean_object* v_msg_2968_, lean_object* v_declHint_2969_, lean_object* v___y_2970_, lean_object* v___y_2971_, lean_object* v___y_2972_){
_start:
{
lean_object* v_res_2973_; 
v_res_2973_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7(v_00_u03b1_2966_, v_ref_2967_, v_msg_2968_, v_declHint_2969_, v___y_2970_, v___y_2971_);
lean_dec(v___y_2971_);
lean_dec_ref(v___y_2970_);
lean_dec(v_ref_2967_);
return v_res_2973_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9(lean_object* v_msg_2974_, lean_object* v_declHint_2975_, lean_object* v___y_2976_, lean_object* v___y_2977_){
_start:
{
lean_object* v___x_2979_; 
v___x_2979_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___redArg(v_msg_2974_, v_declHint_2975_, v___y_2977_);
return v___x_2979_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9___boxed(lean_object* v_msg_2980_, lean_object* v_declHint_2981_, lean_object* v___y_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_){
_start:
{
lean_object* v_res_2985_; 
v_res_2985_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__8_spec__9(v_msg_2980_, v_declHint_2981_, v___y_2982_, v___y_2983_);
lean_dec(v___y_2983_);
lean_dec_ref(v___y_2982_);
return v_res_2985_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__9(lean_object* v_00_u03b1_2986_, lean_object* v_ref_2987_, lean_object* v_msg_2988_, lean_object* v___y_2989_, lean_object* v___y_2990_){
_start:
{
lean_object* v___x_2992_; 
v___x_2992_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__9___redArg(v_ref_2987_, v_msg_2988_, v___y_2989_, v___y_2990_);
return v___x_2992_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__9___boxed(lean_object* v_00_u03b1_2993_, lean_object* v_ref_2994_, lean_object* v_msg_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_, lean_object* v___y_2998_){
_start:
{
lean_object* v_res_2999_; 
v_res_2999_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Compiler_LCNF_compileInductives_spec__0_spec__0_spec__1_spec__7_spec__9(v_00_u03b1_2993_, v_ref_2994_, v_msg_2995_, v___y_2996_, v___y_2997_);
lean_dec(v___y_2997_);
lean_dec_ref(v___y_2996_);
lean_dec(v_ref_2994_);
return v_res_2999_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_Irrelevant(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_MonoTypes(uint8_t builtin);
lean_object* runtime_initialize_Lean_Runtime(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Format_Macro(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_ToImpureType(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_Irrelevant(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_MonoTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Runtime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Format_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_809789689____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTypeExt);
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1487298532____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTrivialStructureInfoExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_impureTrivialStructureInfoExt);
lean_dec_ref(res);
l_Lean_Compiler_LCNF_instInhabitedCtorFieldInfo_default = _init_l_Lean_Compiler_LCNF_instInhabitedCtorFieldInfo_default();
lean_mark_persistent(l_Lean_Compiler_LCNF_instInhabitedCtorFieldInfo_default);
l_Lean_Compiler_LCNF_instInhabitedCtorFieldInfo = _init_l_Lean_Compiler_LCNF_instInhabitedCtorFieldInfo();
lean_mark_persistent(l_Lean_Compiler_LCNF_instInhabitedCtorFieldInfo);
l_Lean_Compiler_LCNF_spillLinkIdx = _init_l_Lean_Compiler_LCNF_spillLinkIdx();
lean_mark_persistent(l_Lean_Compiler_LCNF_spillLinkIdx);
l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default = _init_l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default();
lean_mark_persistent(l_Lean_Compiler_LCNF_instInhabitedCtorLayout_default);
l_Lean_Compiler_LCNF_instInhabitedCtorLayout = _init_l_Lean_Compiler_LCNF_instInhabitedCtorLayout();
lean_mark_persistent(l_Lean_Compiler_LCNF_instInhabitedCtorLayout);
res = l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpureType_1917064764____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_ctorLayoutExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Compiler_LCNF_ToImpureType_0__Lean_Compiler_LCNF_ctorLayoutExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_ToImpureType(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_Irrelevant(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_MonoTypes(uint8_t builtin);
lean_object* initialize_Lean_Runtime(uint8_t builtin);
lean_object* initialize_Init_Data_Format_Macro(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_ToImpureType(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_Irrelevant(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_MonoTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Runtime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Format_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ToImpureType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_ToImpureType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_ToImpureType(builtin);
}
#ifdef __cplusplus
}
#endif
